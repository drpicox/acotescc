/*
    Mercurium C/C++ Compiler
    Copyright (C) 2006-2008 - Roger Ferrer Ibanez <roger.ferrer@bsc.es>
    Barcelona Supercomputing Center - Centro Nacional de Supercomputacion
    Universitat Politecnica de Catalunya

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include "cxx-buildscope.h"
#include "cxx-cexpr.h"
#include "cxx-ast.h"
#include "cxx-utils.h"
#include "cxx-prettyprint.h"
#include "cxx-ambiguity.h"
#include "cxx-typeutils.h"
#include "cxx-exprtype.h"
#include "cxx-overload.h"

/*
 * This file implements an evaluator of constant expressions in C++
 */
static void promote_values(literal_value_t v1, literal_value_t v2, 
        literal_value_t* out_v1, literal_value_t* out_v2);
static literal_value_t evaluate_conditional_expression(AST condition, 
        AST value_if_true, AST value_if_false,
        decl_context_t decl_context);
static literal_value_t cast_expression(AST type_spec, AST expression,
        decl_context_t decl_context);
static literal_value_t binary_operation(node_t op, AST lhs, AST rhs, 
        decl_context_t decl_context);
static literal_value_t evaluate_symbol(AST symbol, decl_context_t decl_context);
static literal_value_t create_value_from_literal(AST a);

static literal_value_t convert_to_signed_int(literal_value_t e1);
static literal_value_t convert_to_unsigned_int(literal_value_t e1);
static literal_value_t convert_to_signed_long(literal_value_t e1);
static literal_value_t convert_to_unsigned_long(literal_value_t e1);
static literal_value_t convert_to_signed_long_long(literal_value_t e1);
static literal_value_t convert_to_unsigned_long_long(literal_value_t e1);
static literal_value_t convert_to_bool(literal_value_t e1);
static literal_value_t convert_to_signed_char(literal_value_t e1);
static literal_value_t convert_to_unsigned_char(literal_value_t e1);

static literal_value_t literal_value_gcc_builtin_types_compatible(AST expression, 
        decl_context_t decl_context);

typedef literal_value_t (*binary_op_fun)(literal_value_t e1, literal_value_t e2);
typedef struct 
{
    binary_op_fun fun;
    char is_non_strict;
    // || will have this to 1, since if lhs is not zero nothing else has to be
    // evaluated. Conversely, && will have this to 0 since if lhs zero, nothing else
    // has to be evaluated
    char if_lhs_zero_eval_rhs;
} binary_operation_t;

#define BINARY_FUNCTION(name) static literal_value_t name(literal_value_t, literal_value_t)
#define BINARY_STRICT(node, fun) [node] = {fun, 0, 0}
#define BINARY_NONSTRICT_IF_LHS_ZERO(node, fun) [node] = {fun, 1, 0}
#define BINARY_NONSTRICT_IF_LHS_NONZERO(node, fun) [node] = {fun, 1, 1}


BINARY_FUNCTION(logical_or);
BINARY_FUNCTION(logical_and);
BINARY_FUNCTION(bitwise_and);
BINARY_FUNCTION(bitwise_or);
BINARY_FUNCTION(bitwise_xor);
BINARY_FUNCTION(different_op);
BINARY_FUNCTION(equal_op);
BINARY_FUNCTION(lower_than);
BINARY_FUNCTION(greater_than);
BINARY_FUNCTION(greater_or_equal_than);
BINARY_FUNCTION(lower_or_equal_than);
BINARY_FUNCTION(shift_right);
BINARY_FUNCTION(shift_left);
BINARY_FUNCTION(addition);
BINARY_FUNCTION(substraction);
BINARY_FUNCTION(division);
BINARY_FUNCTION(multiplication);
BINARY_FUNCTION(module);

literal_value_t not_operation(AST a, decl_context_t decl_context);
literal_value_t negate_operation(AST a, decl_context_t decl_context);
literal_value_t complement_operation(AST a, decl_context_t decl_context);

binary_operation_t binary_ops[] =
{
    BINARY_NONSTRICT_IF_LHS_NONZERO(AST_LOGICAL_OR, logical_or),
    BINARY_NONSTRICT_IF_LHS_ZERO(AST_LOGICAL_AND, logical_and),
    BINARY_STRICT(AST_BITWISE_OR, bitwise_or),
    BINARY_STRICT(AST_BITWISE_XOR, bitwise_xor),
    BINARY_STRICT(AST_BITWISE_AND, bitwise_and),
    BINARY_STRICT(AST_DIFFERENT_OP, different_op),
    BINARY_STRICT(AST_EQUAL_OP, equal_op),
    BINARY_STRICT(AST_LOWER_THAN, lower_than),
    BINARY_STRICT(AST_GREATER_THAN, greater_than),
    BINARY_STRICT(AST_GREATER_OR_EQUAL_THAN, greater_or_equal_than),
    BINARY_STRICT(AST_LOWER_OR_EQUAL_THAN, lower_or_equal_than),
    BINARY_STRICT(AST_SHL_OP, shift_left),
    BINARY_STRICT(AST_SHR_OP, shift_right),
    BINARY_STRICT(AST_ADD_OP, addition),
    BINARY_STRICT(AST_MINUS_OP, substraction),
    BINARY_STRICT(AST_MULT_OP, multiplication),
    BINARY_STRICT(AST_MOD_OP, module),
    BINARY_STRICT(AST_DIV_OP, division),
};

literal_value_t evaluate_constant_expression(AST a, decl_context_t decl_context)
{
    switch (ASTType(a))
    {
        case AST_INITIALIZER :
        case AST_CONSTANT_INITIALIZER :
        case AST_INITIALIZER_EXPR :
        case AST_EXPRESSION :
        case AST_CONSTANT_EXPRESSION :
        case AST_PARENTHESIZED_EXPRESSION :
            return evaluate_constant_expression(ASTSon0(a), decl_context);
        case AST_QUALIFIED_ID :
        case AST_SYMBOL :
            return evaluate_symbol(a, decl_context);
            break;
        case AST_LOGICAL_OR :
        case AST_LOGICAL_AND :
        case AST_BITWISE_OR :
        case AST_BITWISE_XOR :
        case AST_BITWISE_AND :
        case AST_DIFFERENT_OP :
        case AST_EQUAL_OP :
        case AST_LOWER_THAN :
        case AST_GREATER_THAN :
        case AST_GREATER_OR_EQUAL_THAN :
        case AST_LOWER_OR_EQUAL_THAN :
        case AST_SHL_OP :
        case AST_SHR_OP :
        case AST_ADD_OP :
        case AST_MINUS_OP :
        case AST_MULT_OP :
        case AST_MOD_OP :
        case AST_DIV_OP :
            return binary_operation(ASTType(a), ASTSon0(a), ASTSon1(a), decl_context);
        case AST_CAST_EXPRESSION :
            // They share a similar tree layout
        case AST_STATIC_CAST : 
        case AST_DYNAMIC_CAST : 
        case AST_REINTERPRET_CAST : 
        case AST_CONST_CAST : 
            {
                AST type_id = ASTSon0(a);
                AST type_spec_seq = ASTSon0(type_id);
                AST type_spec = ASTSon1(type_spec_seq);
                return cast_expression(type_spec, ASTSon1(a), decl_context);
            }
        case AST_CONDITIONAL_EXPRESSION :
            return evaluate_conditional_expression(ASTSon0(a), ASTSon1(a), ASTSon2(a), 
                    decl_context);
        case AST_DECIMAL_LITERAL :
        case AST_OCTAL_LITERAL :
        case AST_HEXADECIMAL_LITERAL :
        case AST_CHARACTER_LITERAL :
        case AST_BOOLEAN_LITERAL :
            return create_value_from_literal(a);
        case AST_PLUS_OP :
            return evaluate_constant_expression(ASTSon0(a), decl_context);
        case AST_NOT_OP :
            return not_operation(ASTSon0(a), decl_context);
        case AST_NEG_OP :
            return negate_operation(ASTSon0(a), decl_context);
        case AST_COMPLEMENT_OP :
            return complement_operation(ASTSon0(a), decl_context);
        case AST_SIZEOF :
        case AST_SIZEOF_TYPEID :
            {
                WARNING_MESSAGE("Found a sizeof expression in '%s' while evaluating a constant expression. Assuming one.\n", 
                    ast_location(a));
                return literal_value_one();
            }
        case AST_EXPLICIT_TYPE_CONVERSION :
            {
                // Take the last one
                AST expression_list = ASTSon1(a);
                ERROR_CONDITION((ASTSon0(expression_list) != NULL), 
                        "In '%s' cannot cast a constant expression formed with an expression list longer than 1", 
                        ast_location(a));
                AST first_expression = ASTSon1(expression_list);
                return cast_expression(ASTSon0(a), first_expression, decl_context);
            }
        case AST_REFERENCE :
            {
                AST symbol = advance_expression_nest(ASTSon0(a));

                if (ASTType(symbol) != AST_SYMBOL
                        && ASTType(symbol) != AST_QUALIFIED_ID)
                {
                    WARNING_MESSAGE("Unsolvable address expression in '%s' while evaluating a constant expression. Assuming zero.\n",
                            ast_location(a));
                    return literal_value_zero();
                }
                else
                {
                    // Get the symbol and use its pointer in the symbol table as a value
                    scope_entry_list_t* result = query_id_expression(decl_context,
                            symbol);

                    ERROR_CONDITION(result == NULL, "Unknown expression '%s'\n", prettyprint_in_buffer(symbol));

                    DEBUG_CODE()
                    {
                        fprintf(stderr, "Symbolic address of symbol '%s' solved to '%lu'\n", prettyprint_in_buffer(symbol), 
                                (unsigned long)result->entry);
                    }

                    literal_value_t value;
                    value.kind = LVK_UNSIGNED_LONG;
                    if (result->entry->kind != SK_FUNCTION
                            && result->entry->kind != SK_TEMPLATE)
                    {
                        // FIXME: Assuming that unsigned long is enough to hold a
                        // pointer
                        value.value.unsigned_long = (unsigned long)(result->entry);
                    }
                    else 
                    {
                        if (result->next == NULL
                                && result->entry->kind == SK_FUNCTION)
                        {
                            value.value.unsigned_long = (unsigned long)(result->entry);
                        }
                        else
                        {
                            ERROR_CONDITION(ASTExprType(symbol) == NULL,
                                    "This expression lacks a type", 0);
                            ERROR_CONDITION(!is_unresolved_overloaded_type(ASTExprType(symbol))
                                    && !is_function_type(ASTExprType(symbol)),
                                    "This expression has the wrong type", 0);
                            // This case can only be a template-argument
                            scope_entry_t* solved_function =
                                address_of_overloaded_function(
                                        result,
                                        /* explicit_template_arguments */ NULL, // FIXME
                                        ASTExprType(symbol),
                                        decl_context,
                                        ASTFileName(symbol),
                                        ASTLine(symbol));

                            if (solved_function != NULL)
                            {
                                value.value.unsigned_long = (unsigned long)(result->entry);
                            }
                        }
                    }
                    return value;
                }
            }
            // Cannot evaluate these
        case AST_CLASS_MEMBER_ACCESS :
        case AST_POINTER_CLASS_MEMBER_ACCESS :
        case AST_CLASS_TEMPLATE_MEMBER_ACCESS :
        case AST_POINTER_CLASS_TEMPLATE_MEMBER_ACCESS :
        case AST_FUNCTION_CALL :
            {
                literal_value_t dependent_entity;
                memset(&dependent_entity, 0, sizeof(dependent_entity));
                dependent_entity.kind = LVK_DEPENDENT_EXPR;
                return dependent_entity;
            }
        case AST_GCC_BUILTIN_TYPES_COMPATIBLE_P :
            {
                return literal_value_gcc_builtin_types_compatible(a, decl_context);
                break;
            }
        case AST_AMBIGUITY :
        default :
            internal_error("Unsupported node '%s' when evaluating constant expression (%s)", 
                    ast_print_node_type(ASTType(a)), ast_location(a));
    }
}


static literal_value_t binary_operation(node_t op, AST lhs, AST rhs, 
        decl_context_t decl_context)
{
    literal_value_t val_lhs;
    literal_value_t val_rhs;
    binary_operation_t bop;

    val_lhs = evaluate_constant_expression(lhs, decl_context);

    if (val_lhs.kind == LVK_DEPENDENT_EXPR)
    {
        return val_lhs;
    }

    if (val_lhs.kind == LVK_INVALID)
    {
        return val_lhs;
    }

    bop = binary_ops[op];

    if (bop.is_non_strict)
    {
        // Operator ||
        if (bop.if_lhs_zero_eval_rhs)
        {
            if (literal_value_is_zero(val_lhs))
            {
                val_rhs = evaluate_constant_expression(rhs, decl_context);
                return val_rhs;
            }
            else
            {
                return val_lhs;
            }
        }
        else
        {
            if (!literal_value_is_zero(val_lhs))
            {
                val_rhs = evaluate_constant_expression(rhs, decl_context);
                return val_rhs;
            }
            else
            {
                return val_lhs;
            }
        }
    }
    else
    {
        val_rhs = evaluate_constant_expression(rhs, decl_context);
    }

    if (val_rhs.kind == LVK_DEPENDENT_EXPR)
    {
        return val_rhs;
    }

    if (val_rhs.kind == LVK_INVALID)
    {
        return val_rhs;
    }

    DEBUG_CODE()
    {
        fprintf(stderr, "(1) val_lhs.kind=%d || val_rhs.kind=%d\n", val_lhs.kind, val_rhs.kind);
    }
    promote_values(val_lhs, val_rhs, &val_lhs, &val_rhs);

    DEBUG_CODE()
    {
        fprintf(stderr, "(2) val_lhs.kind=%d || val_rhs.kind=%d\n", val_lhs.kind, val_rhs.kind);
    }

    ERROR_CONDITION((val_lhs.kind != val_rhs.kind), "Both types should be the same (%d != %d)", val_lhs.kind, val_rhs.kind);

    return bop.fun(val_lhs, val_rhs);
}


static literal_value_t evaluate_conditional_expression(AST condition, AST value_if_true, AST value_if_false, 
        decl_context_t decl_context)
{
    literal_value_t condition_value = evaluate_constant_expression(condition, decl_context);

    if (literal_value_is_zero(condition_value))
    {
        return evaluate_constant_expression(value_if_false, decl_context);
    }
    else
    {
        return evaluate_constant_expression(value_if_true, decl_context);
    }
}

char literal_value_is_zero(literal_value_t v)
{
    switch (v.kind)
    {
        case LVK_UNSIGNED_LONG :
            return (v.value.unsigned_long == 0);
        case LVK_SIGNED_LONG :
            return (v.value.signed_long == 0);
        case LVK_UNSIGNED_LONG_LONG :
            return (v.value.unsigned_long_long == 0);
        case LVK_SIGNED_LONG_LONG :
            return (v.value.signed_long_long == 0);
        case LVK_UNSIGNED_INT :
            return (v.value.unsigned_int == 0);
        case LVK_SIGNED_INT :
            return (v.value.signed_int == 0);
        case LVK_SIGNED_CHAR :
            return (v.value.signed_char == 0);
        case LVK_UNSIGNED_CHAR :
            return (v.value.unsigned_char == 0);
        case LVK_BOOL :
            return (v.value.boolean_value == 0);
        case LVK_DEPENDENT_EXPR :
            return 0;
        case LVK_INVALID :
            return 0;
        default:
            internal_error("Invalid value kind %d\n", v.kind);
    }
}

char literal_value_is_negative(literal_value_t v)
{
    switch (v.kind)
    {
        case LVK_UNSIGNED_LONG :
            return 0;
        case LVK_SIGNED_LONG :
            return (v.value.signed_long < 0);
        case LVK_UNSIGNED_LONG_LONG :
            return 0;
        case LVK_SIGNED_LONG_LONG :
            return (v.value.signed_long_long < 0);
        case LVK_UNSIGNED_INT :
            return 0;
        case LVK_SIGNED_INT :
            return (v.value.signed_int < 0);
        case LVK_SIGNED_CHAR :
            return (v.value.signed_char < 0);
        case LVK_UNSIGNED_CHAR :
            return 0;
        case LVK_BOOL :
            return (v.value.boolean_value < 0);
        case LVK_DEPENDENT_EXPR :
            return 0;
        case LVK_INVALID :
            return 0;
        default:
            internal_error("Invalid value kind %d\n", v.kind);
    }
}

static literal_value_t create_value_from_literal(AST a)
{
    literal_value_t result;
    memset(&result, 0, sizeof(result));

    char is_long, is_unsigned;
    const char* literal_text = ASTText(a);
    // literal rule
    switch (ASTType(a))
    {
        case AST_DECIMAL_LITERAL :
        case AST_OCTAL_LITERAL :
        case AST_HEXADECIMAL_LITERAL :
        case AST_FLOATING_LITERAL :
            gather_integer_literal_suffix(literal_text, &is_long, &is_unsigned);
            if (is_long == 1) 
            {
                if (is_unsigned)
                {
                    result.kind = LVK_UNSIGNED_LONG;
                    result.value.unsigned_long = strtoul(literal_text, NULL, 0);
                }
                else
                {
                    result.kind = LVK_SIGNED_LONG;
                    result.value.signed_long = strtol(literal_text, NULL, 0);
                }
            }
            else if (is_long == 2)
            {
                if (is_unsigned)
                {
                    result.kind = LVK_UNSIGNED_LONG_LONG;
                    result.value.unsigned_long_long = strtoull(literal_text, NULL, 0);
                }
                else
                {
                    result.kind = LVK_SIGNED_LONG_LONG;
                    result.value.signed_long_long = strtoll(literal_text, NULL, 0);
                }
            }
            else // Is not long
            {
                // We would use strtod if it supported octals
                if (is_unsigned)
                {
                    result.kind = LVK_UNSIGNED_INT;
                    result.value.unsigned_int = strtol(literal_text, NULL, 0);
                }
                else 
                {
                    result.kind = LVK_SIGNED_INT;
                    result.value.signed_int = strtoul(literal_text, NULL, 0);
                }
            }
            break;
        case AST_BOOLEAN_LITERAL : 
            result.kind = LVK_BOOL;
            result.value.boolean_value = 0;
            if (strcmp(literal_text, "true") == 0)
            {
                result.value.boolean_value = 1;
            }
            break;
        case AST_CHARACTER_LITERAL :
            if (toupper(literal_text[0]) == 'L')
            {
                // We should use iconv or something similar to get this correct
                internal_error("Unsupported wide character in constant expression evaluation", 0);
            }
            else
            {
                // FIXME: Make a flag signed/unsigned char
                result.kind = LVK_SIGNED_CHAR;
                if (literal_text[1] != '\\')
                {
                    result.value.signed_char = literal_text[1];
                }
                else
                {
                    internal_error("TODO - Check for escape sentences!", 0);
                }
            }
            break;
        default :
            internal_error("Unknown literal", 0);
            break;
    }

    return result;
}

void gather_integer_literal_suffix(const char* text, char* is_long, char* is_unsigned)
{
    int i = 0;
    const char* suffix = &text[strlen(text) - 1];

    *is_long = 0;
    *is_unsigned = 0;

    while ((i < 3)
            && (toupper(*suffix) == 'U' 
                || toupper(*suffix) == 'L'))
    {
        if (toupper(*suffix) == 'L')
        {
            (*is_long)++;
        }
        else // if (toupper(*suffix) == 'U')
        {
            *is_unsigned = 1;
        }
        suffix--;
        i++;
    }
}

void gather_float_literal_suffix(const char* text, char* is_float, char* is_long_double)
{
    const char suffix = text[strlen(text)-1];

    *is_float = 0;
    *is_long_double = 0;

    if (toupper(suffix) == 'F')
    {
        *is_float = 1;
    }
    else if (toupper(suffix) == 'L')
    {
        *is_long_double = 1;
    }
}

// This implements "usual arithmetic conversions" as defined in clause 5 paragraph 9
// of C++ standard
static void promote_values(literal_value_t v1, literal_value_t v2, 
        literal_value_t* out_v1, literal_value_t* out_v2)
{
    *out_v1 = v1;
    *out_v2 = v2;
    if (out_v1->kind == out_v2->kind)
    {
        // Nothing has to be done
        return;
    }

    literal_value_t* out_val[] = {out_v1, out_v2, NULL};

    // Float and double are not considered
    // Directly apply integral promotions
    int i;
    for (i = 0; i < 2; i++)
    {
        literal_value_t* out = out_val[i];

        if (out->kind == LVK_SIGNED_CHAR)
        {
            out->kind = LVK_SIGNED_INT;
            out->value.unsigned_int = (unsigned int) out->value.signed_char;
        }
        if (out->kind == LVK_UNSIGNED_CHAR)
        {
            out->kind = LVK_SIGNED_INT;
            out->value.unsigned_int = (unsigned int) out->value.unsigned_char;
        }
        else if (out->kind == LVK_BOOL)
        {
            out->kind = LVK_SIGNED_INT;
            out->value.unsigned_int = (unsigned int) out->value.boolean_value;
        }
    }

    // After this everything is either a LVK_*_LONG_LONG, LVK_*_LONG or LVK_*_INT

    // if either one operands is 'unsigned long long' convert the other to
    // 'unsigned long long'
    if ((out_v1->kind == LVK_UNSIGNED_LONG_LONG)
            ^ (out_v2->kind == LVK_UNSIGNED_LONG_LONG))
    {
        literal_value_t* out = NULL;
        if (out_v1->kind == LVK_UNSIGNED_LONG_LONG)
        {
            out = out_v2;
        }
        else
        {
            out = out_v1;
        }

        switch (out->kind)
        {
            case LVK_SIGNED_LONG_LONG :
                out->value.unsigned_long_long = (unsigned long long) out->value.signed_long_long;
                break;
            case LVK_SIGNED_LONG :
                out->value.unsigned_long_long = (unsigned long long) out->value.signed_long;
                break;
            case LVK_SIGNED_INT :
                out->value.unsigned_long_long = (unsigned long long) out->value.signed_int;
                break;
            case LVK_UNSIGNED_INT :
                out->value.unsigned_long_long = (unsigned long long) out->value.unsigned_int;
                break;
            default :
                internal_error("Unknown literal value type", out->kind);
        }
        out->kind = LVK_UNSIGNED_LONG_LONG;
    }
    // If one of the operands is 'signed long long' and the other one a
    // 'unsigned long', convert to 'signed long long' (if a 'signed long long'
    // cannot hold all 'unsigned long' values we should use an 'unsigned long
    // long' instead, as it happens in 64-bit)
    // FIXME: make a flag for such things
    else if (((out_v1->kind == LVK_SIGNED_LONG_LONG) && (out_v2->kind == LVK_UNSIGNED_LONG))
            || ((out_v1->kind == LVK_UNSIGNED_LONG) && (out_v2->kind == LVK_SIGNED_LONG_LONG)))
    {
        if (out_v1->kind == LVK_SIGNED_LONG_LONG
                && out_v2->kind == LVK_UNSIGNED_LONG)
        {
            out_v2->kind = LVK_SIGNED_LONG_LONG;
            out_v2->value.signed_long_long = (signed long long) out_v2->value.unsigned_long;
        }
        else
        {
            out_v1->kind = LVK_SIGNED_LONG_LONG;
            out_v1->value.signed_long_long = (signed long long) out_v1->value.unsigned_long;
        }
    }
    // if either 'signed long long' convert to 'signed long long'
    else if ((out_v1->kind == LVK_SIGNED_LONG_LONG) 
            ^ (out_v2->kind == LVK_SIGNED_LONG_LONG))
    {
        literal_value_t *out = NULL;
        if (out_v1->kind == LVK_SIGNED_LONG_LONG)
        {
            out = out_v2;
        }
        else
        {
            out = out_v1;
        }
        switch (out->kind)
        {
            case LVK_SIGNED_LONG_LONG :
                out->value.signed_long_long = (signed long long) out->value.unsigned_long_long;
                break;
            case LVK_UNSIGNED_LONG :
                out->value.signed_long_long = (signed long long) out->value.unsigned_long;
                break;
            case LVK_SIGNED_INT :
                out->value.signed_long_long = (signed long long) out->value.signed_int;
                break;
            case LVK_UNSIGNED_INT :
                out->value.signed_long_long = (signed long long) out->value.unsigned_int;
                break;
            default :
                internal_error("Unknown literal value type", out->kind);
        }
        out->kind = LVK_SIGNED_LONG_LONG;
    }
    // if either one operand is "unsigned long int" convert the other to "unsigned
    // long int"
    else if ((out_v1->kind == LVK_UNSIGNED_LONG)
            ^ (out_v2->kind == LVK_UNSIGNED_LONG))
    {
        literal_value_t* out = NULL;
        if (out_v1->kind == LVK_UNSIGNED_LONG)
        {
            out = out_v2;
        }
        else
        {
            out = out_v1;
        }

        switch (out->kind)
        {
            case LVK_SIGNED_LONG :
                out->value.unsigned_long = (unsigned long) out->value.signed_long;
                break;
            case LVK_SIGNED_INT :
                out->value.unsigned_long = (unsigned long) out->value.signed_int;
                break;
            case LVK_UNSIGNED_INT :
                out->value.unsigned_long = (unsigned long) out->value.unsigned_int;
                break;
            default :
                internal_error("Unknown literal value type %d", out->kind);
        }
        out->kind = LVK_UNSIGNED_LONG;
    }
    // If one operand is "signed long" and the other "unsigned int" convert to
    // "signed long" the "unsigned int" if a "signed long" can represent every
    // value of a "signed long", otherwise convert the "signed long" to a
    // "unsigned long"
    // FIXME: make a flag for such things
    else if (((out_v1->kind == LVK_SIGNED_LONG) && (out_v2->kind == LVK_UNSIGNED_INT))
            || ((out_v2->kind == LVK_SIGNED_LONG) && out_v1->kind == (LVK_UNSIGNED_INT)))
    {
        if (out_v1->kind == LVK_SIGNED_LONG 
                && out_v2->kind == LVK_UNSIGNED_INT)
        {
            out_v2->kind = LVK_SIGNED_LONG;
            out_v2->value.signed_long = (signed long) out_v2->value.unsigned_int;
        }
        else
        {
            out_v1->kind = LVK_SIGNED_LONG;
            out_v1->value.signed_long = (signed long) out_v1->value.unsigned_int;
        }
    }
    // either one operand is 'signed long int' convert all to 'signed long'
    else if ((out_v1->kind == LVK_SIGNED_LONG)
            ^ (out_v2->kind == LVK_SIGNED_LONG))
    {
        literal_value_t *out = NULL;
        if (out_v1->kind == LVK_SIGNED_LONG)
        {
            out = out_v2;
        }
        else
        {
            out = out_v1;
        }
        switch (out->kind)
        {
            case LVK_UNSIGNED_LONG :
                out->value.signed_long = (signed long) out->value.unsigned_long;
                break;
            case LVK_SIGNED_INT :
                out->value.signed_long = (signed long) out->value.signed_int;
                break;
            case LVK_UNSIGNED_INT :
                out->value.signed_long = (signed long) out->value.unsigned_int;
                break;
            default :
                internal_error("Unknown literal value type", out->kind);
        }
        out->kind = LVK_SIGNED_LONG;
    }
    // If one is 'unsigned int' and the other 'int', convert to 'unsigned int'
    else if ((out_v1->kind == LVK_UNSIGNED_INT 
                && out_v2->kind == LVK_SIGNED_INT)
            || (out_v1->kind == LVK_SIGNED_INT
                && out_v2->kind == LVK_UNSIGNED_INT))
    {
        if (out_v1->kind == LVK_SIGNED_INT)
        {
            out_v1->kind = LVK_UNSIGNED_INT;
            out_v1->value.unsigned_int = (unsigned int) out_v1->value.signed_int;
        }
        else
        {
            out_v2->kind = LVK_UNSIGNED_INT;
            out_v2->value.unsigned_int = (unsigned int) out_v2->value.signed_int;
        }
    }
    // Both should be int if we get here
    else if (out_v1->kind != LVK_SIGNED_INT
            || out_v2->kind != LVK_SIGNED_INT)
    {
        internal_error("Unreachable code", 0);
    }

    if (out_v1->kind != out_v2->kind)
    {
        internal_error("Ill performed conversion", 0);
    }
}

static literal_value_t cast_expression(AST type_spec, AST expression, 
        decl_context_t decl_context)
{
    literal_value_t before_cast = evaluate_constant_expression(expression, 
            decl_context);

    if (before_cast.kind == LVK_DEPENDENT_EXPR)
    {
        return before_cast;
    }

    type_t *type_info = NULL;

    gather_decl_spec_t gather_info;
    memset(&gather_info, 0, sizeof(gather_info));

    gather_type_spec_information(type_spec, &type_info, &gather_info, decl_context);

    if (!is_builtin_type(type_info))
    {
        literal_value_t invalid_type;
        memset(&invalid_type, 0, sizeof(invalid_type));

        return invalid_type;
    }
    else
    {
        literal_value_t after_cast;

        if (is_signed_int_type(type_info))
        {
            after_cast = convert_to_signed_int(before_cast);
        }
        else if (is_unsigned_int_type(type_info))
        {
            after_cast = convert_to_unsigned_int(before_cast);
        }
        // else if (is_signed_short_int_type(type_info))
        // {
        //     after_cast = convert_to_signed_short(before_cast);
        // }
        // else if (is_unsigned_short_int_type(type_info))
        // {
        //     after_cast = convert_to_unsigned_short(before_cast);
        // }
        else if (is_signed_long_int_type(type_info))
        {
            after_cast = convert_to_signed_long(before_cast);
        }
        else if (is_unsigned_long_int_type(type_info))
        {
            after_cast = convert_to_unsigned_long(before_cast);
        }
        else if (is_signed_long_long_int_type(type_info))
        {
            after_cast = convert_to_signed_long_long(before_cast);
        }
        else if (is_unsigned_long_long_int_type(type_info))
        {
            after_cast = convert_to_unsigned_long_long(before_cast);
        }
        else if (is_signed_char_type(type_info))
        {
            after_cast = convert_to_signed_char(before_cast);
        }
        else if (is_unsigned_char_type(type_info))
        {
            after_cast = convert_to_unsigned_char(before_cast);
        }
        else if (is_bool_type(type_info))
        {
            after_cast = convert_to_bool(before_cast);
        }
        else if (is_wchar_t_type(type_info))
        {
            internal_error("Wide characters are not supported", 0);
        }
        else
        {
            internal_error("Cannot cast constant expression to type '%s'", print_declarator(type_info, decl_context));
        }

        return after_cast;
    }
}

static literal_value_t evaluate_symbol(AST symbol, decl_context_t decl_context)
{
    DEBUG_CODE()
    {
        fprintf(stderr, "Trying to evaluate symbol '%s'\n", prettyprint_in_buffer(symbol));
    }

    scope_entry_list_t* result = 
        query_id_expression(decl_context, symbol);

    ERROR_CONDITION((result == NULL), "Cannot evaluate unknown symbol '%s' %s", 
            prettyprint_in_buffer(symbol), ast_location(symbol));

    if (result->entry->kind == SK_DEPENDENT_ENTITY
            || result->entry->kind == SK_TEMPLATE_PARAMETER)
    {
        literal_value_t dependent_entity;
        memset(&dependent_entity, 0, sizeof(dependent_entity));

        dependent_entity.kind = LVK_DEPENDENT_EXPR;

        return dependent_entity;
    }

    if (result->entry->kind != SK_ENUMERATOR
            && result->entry->kind != SK_VARIABLE
            && result->entry->kind != SK_TEMPLATE_PARAMETER
            && result->entry->kind != SK_FUNCTION
            && result->entry->kind != SK_TEMPLATE)
    {
        DEBUG_CODE()
        {
            fprintf(stderr, "Invalid symbol '");
            prettyprint(stderr, symbol);
            fprintf(stderr, "'\n");
        }

        literal_value_t invalid_type;
        memset(&invalid_type, 0, sizeof(invalid_type));

        return invalid_type;
    }

    if (result->entry->kind != SK_FUNCTION
            && result->entry->kind != SK_TEMPLATE)
    {
        if (result->entry->expression_value == NULL)
        {
            literal_value_t dependent_entity;
            memset(&dependent_entity, 0, sizeof(dependent_entity));
            dependent_entity.kind = LVK_DEPENDENT_EXPR;
            return dependent_entity;
        }
        else
        {
            DEBUG_CODE()
            {
                fprintf(stderr, "Symbol '%s' has associated value '%s'\n", prettyprint_in_buffer(symbol),
                        prettyprint_in_buffer(result->entry->expression_value));
            }
        }
    }
    else
    {
        if (result->next == NULL
                && result->entry->kind == SK_FUNCTION)
        {
            // FIXME: Assuming that unsigned long is enough to hold a
            // pointer
            literal_value_t value;
            value.kind = LVK_UNSIGNED_LONG;
            value.value.unsigned_long = (unsigned long)(result->entry);

            return value;
        }
        else
        {
            ERROR_CONDITION(ASTExprType(symbol) == NULL,
                    "This expression lacks a type", 0);
            ERROR_CONDITION(!is_unresolved_overloaded_type(ASTExprType(symbol))
                    && !is_function_type(ASTExprType(symbol)),
                    "This expression has the wrong type", 0);
            // This case can only be a template-argument
            scope_entry_t* solved_function =
                address_of_overloaded_function(
                        result,
                        /* explicit_template_arguments */ NULL, // FIXME
                        ASTExprType(symbol),
                        decl_context,
                        ASTFileName(symbol),
                        ASTLine(symbol));

            if (solved_function != NULL)
            {
                literal_value_t value;
                value.kind = LVK_UNSIGNED_LONG;
                value.value.unsigned_long = (unsigned long)(result->entry);

                return value;
            }
            ERROR_CONDITION((solved_function == NULL), "Cannot solve function name '%s' at '%s'", 
                    prettyprint_in_buffer(symbol), ast_location(symbol));
        }
    }

    return evaluate_constant_expression(result->entry->expression_value, result->entry->decl_context);
}

literal_value_t literal_value_zero(void)
{
    literal_value_t result;

    result.kind = LVK_SIGNED_INT;
    result.value.signed_int = 0;

    return result;
}

literal_value_t literal_value_one(void)
{
    literal_value_t result;

    result.kind = LVK_SIGNED_INT;
    result.value.signed_int = 1;

    return result;
}

literal_value_t literal_value_minus_one(void)
{
    literal_value_t result;

    result.kind = LVK_SIGNED_INT;
    result.value.signed_int = -1;

    return result;
}

literal_value_t increment_literal_value(literal_value_t e)
{
    literal_value_t result = e;
    switch (result.kind)
    {
        case LVK_SIGNED_INT :
            result.value.signed_int++;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int++;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long++;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long++;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char++;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char++;
            break;
        default :
            internal_error("This is not a valid value to be incremented", 0);
            break;
    }

    return result;
}

AST tree_from_literal_value(literal_value_t e)
{
    char buffer[100];
    AST result;

    buffer[99] = '\0';

    switch (e.kind)
    {
        case LVK_SIGNED_INT :
            snprintf(buffer, 99, "%d", e.value.signed_int);
            result = ASTLeaf(AST_DECIMAL_LITERAL, 0, buffer);
            break;
        case LVK_SIGNED_LONG :
            snprintf(buffer, 99, "%ldL", e.value.signed_long);
            result = ASTLeaf(AST_DECIMAL_LITERAL, 0, buffer);
            break;
        case LVK_UNSIGNED_INT :
            snprintf(buffer, 99, "%uU", e.value.unsigned_int);
            result = ASTLeaf(AST_DECIMAL_LITERAL, 0, buffer);
            break;
        case LVK_UNSIGNED_LONG :
            snprintf(buffer, 99, "%luLU", e.value.unsigned_long);
            result = ASTLeaf(AST_DECIMAL_LITERAL, 0, buffer);
            break;
        case LVK_UNSIGNED_CHAR :
        case LVK_SIGNED_CHAR :
            {
                unsigned int num = 0;
                if (e.kind == LVK_SIGNED_CHAR)
                    num = e.value.signed_char;
                else 
                    num = e.value.unsigned_char;

                snprintf(buffer, 99, "'\\%u'", num);
                result = ASTLeaf(AST_CHARACTER_LITERAL, 0, buffer);
            }
            break;
        case LVK_BOOL :
            if (e.value.boolean_value == 0)
            {
                result = ASTLeaf(AST_BOOLEAN_LITERAL, 0, "false");
            }
            else
            {
                result = ASTLeaf(AST_BOOLEAN_LITERAL, 0, "true");
            }
            break;
        default:
            result = NULL;
            internal_error("Invalid type kind %d\n", e.kind);
    }

    return result;
}

char equal_literal_values(literal_value_t v1, 
        literal_value_t v2, 
        decl_context_t decl_context UNUSED_PARAMETER)
{
    if (v1.kind == LVK_INVALID
            || v2.kind == LVK_INVALID)
        return 0;

    if (v1.kind == LVK_DEPENDENT_EXPR
            || v2.kind == LVK_DEPENDENT_EXPR)
        return 0;

    // Promote
    promote_values(v1, v2, &v1, &v2);

    DEBUG_CODE()
    {
        fprintf(stderr, "Comparing constant values of '%s' and '%s'\n", 
                prettyprint_in_buffer(tree_from_literal_value(v1)),
                prettyprint_in_buffer(tree_from_literal_value(v2)));
    }

    literal_value_t result = equal_op(v1, v2);

    return !literal_value_is_zero(result);
}

/* ************************* *
 *    Unary operations       *
 * ************************* */


literal_value_t not_operation(AST a, decl_context_t decl_context)
{
    literal_value_t result = evaluate_constant_expression(a, decl_context);
    switch (result.kind)
    {
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = ! result.value.unsigned_long_long;
            break;
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = ! result.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long = ! result.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long = ! result.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int = ! result.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_int = ! result.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char = ! result.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char = ! result.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = ! result.value.boolean_value;
            break;
        case LVK_DEPENDENT_EXPR :
            break;
        default:
            internal_error("Unknown value kind %d", result.kind);
    }

    return result;
}

literal_value_t negate_operation(AST a, decl_context_t decl_context)
{
    literal_value_t result = evaluate_constant_expression(a, decl_context);
    switch (result.kind)
    {
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = - result.value.unsigned_long_long;
            break;
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = - result.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long = - result.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long = - result.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int = - result.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_int = - result.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char = - result.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char = - result.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = - result.value.boolean_value;
            break;
        case LVK_DEPENDENT_EXPR :
            break;
        default:
            internal_error("Unknown value kind %d", result.kind);
    }

    return result;
}

literal_value_t complement_operation(AST a, decl_context_t decl_context)
{
    literal_value_t result = evaluate_constant_expression(a, decl_context);
    switch (result.kind)
    {
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = ~ result.value.unsigned_long_long;
            break;
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = ~ result.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long = ~ result.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long = ~ result.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int = ~ result.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_int = ~ result.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char = ~ result.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char = ~ result.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = ~ result.value.boolean_value;
            break;
        case LVK_DEPENDENT_EXPR :
            break;
        default:
            internal_error("Unknown value kind %d", result.kind);
    }

    return result;
}


/* ************************************************************* *
 *    Binary operations                                          *
 *                                                               *
 * Limitation: This operates on the machine where the compiler   *
 * has been built                                                *
 * ************************************************************* */

static literal_value_t logical_and(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    result.kind = LVK_BOOL;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.signed_long_long && e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.unsigned_long_long && e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.boolean_value = e1.value.unsigned_long && e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.boolean_value = e1.value.signed_long && e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.boolean_value = e1.value.unsigned_int && e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.boolean_value = e1.value.signed_int && e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.boolean_value = e1.value.signed_char && e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.boolean_value = e1.value.unsigned_char && e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value && e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t bitwise_and(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = e1.value.signed_long_long & e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = e1.value.unsigned_long_long & e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long = e1.value.unsigned_long & e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long = e1.value.signed_long & e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int = e1.value.unsigned_int & e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_int = e1.value.signed_int & e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char = e1.value.signed_char & e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char = e1.value.unsigned_char & e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value & e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t logical_or(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    result.kind = LVK_BOOL;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.signed_long_long || e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.unsigned_long_long || e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.boolean_value = e1.value.unsigned_long || e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.boolean_value = e1.value.signed_long || e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.boolean_value = e1.value.unsigned_int || e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.boolean_value = e1.value.signed_int || e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.boolean_value = e1.value.signed_char || e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.boolean_value = e1.value.unsigned_char || e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value || e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t bitwise_or(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = e1.value.signed_long_long | e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = e1.value.unsigned_long_long | e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long = e1.value.unsigned_long | e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long = e1.value.signed_long | e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int = e1.value.unsigned_int | e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_int = e1.value.signed_int | e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char = e1.value.signed_char | e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char = e1.value.unsigned_char | e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value | e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t bitwise_xor(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = e1.value.signed_long_long ^ e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = e1.value.unsigned_long_long ^ e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long = e1.value.unsigned_long ^ e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long = e1.value.signed_long ^ e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int = e1.value.unsigned_int ^ e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_int = e1.value.signed_int ^ e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char = e1.value.signed_char ^ e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char = e1.value.unsigned_char ^ e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value ^ e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t different_op(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    result.kind = LVK_BOOL;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.signed_long_long != e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.unsigned_long_long != e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.boolean_value = e1.value.unsigned_long != e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.boolean_value = e1.value.signed_long != e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.boolean_value = e1.value.unsigned_int != e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.boolean_value = e1.value.signed_int != e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.boolean_value = e1.value.signed_char != e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.boolean_value = e1.value.unsigned_char != e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value != e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t equal_op(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    result.kind = LVK_BOOL;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = e1.value.signed_long_long == e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = e1.value.unsigned_long_long == e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.boolean_value = e1.value.unsigned_long == e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.boolean_value = e1.value.signed_long == e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.boolean_value = e1.value.unsigned_int == e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.boolean_value = e1.value.signed_int == e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.boolean_value = e1.value.signed_char == e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.boolean_value = e1.value.unsigned_char == e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value == e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t lower_than(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    result.kind = LVK_BOOL;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.signed_long_long < e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.unsigned_long_long < e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.boolean_value = e1.value.unsigned_long < e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.boolean_value = e1.value.signed_long < e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.boolean_value = e1.value.unsigned_int < e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.boolean_value = e1.value.signed_int < e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.boolean_value = e1.value.signed_char < e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.boolean_value = e1.value.unsigned_char < e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value < e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t greater_than(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    result.kind = LVK_BOOL;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.signed_long_long > e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.unsigned_long_long > e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.boolean_value = e1.value.unsigned_long > e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.boolean_value = e1.value.signed_long > e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.boolean_value = e1.value.unsigned_int > e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.boolean_value = e1.value.signed_int > e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.boolean_value = e1.value.signed_char > e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.boolean_value = e1.value.unsigned_char > e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value > e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t lower_or_equal_than(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    result.kind = LVK_BOOL;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.signed_long_long <= e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.unsigned_long_long <= e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.boolean_value = e1.value.unsigned_long <= e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.boolean_value = e1.value.signed_long <= e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.boolean_value = e1.value.unsigned_int <= e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.boolean_value = e1.value.signed_int <= e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.boolean_value = e1.value.signed_char <= e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.boolean_value = e1.value.unsigned_char <= e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value <= e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t greater_or_equal_than(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    result.kind = LVK_BOOL;
    switch (e1.kind)
    {
        case LVK_UNSIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.unsigned_long_long >= e2.value.unsigned_long_long;
            break;
        case LVK_SIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.signed_long_long >= e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.boolean_value = e1.value.unsigned_long >= e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.boolean_value = e1.value.signed_long >= e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.boolean_value = e1.value.unsigned_int >= e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.boolean_value = e1.value.signed_int >= e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.boolean_value = e1.value.signed_char >= e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.boolean_value = e1.value.unsigned_char >= e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value >= e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t shift_left(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = e1.value.signed_long_long << e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = e1.value.unsigned_long_long << e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long = e1.value.unsigned_long << e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long = e1.value.signed_long << e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int = e1.value.unsigned_int << e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_int = e1.value.signed_int << e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char = e1.value.signed_char << e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char = e1.value.unsigned_char << e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value << e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t shift_right(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = e1.value.signed_long_long >> e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = e1.value.unsigned_long_long >> e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long = e1.value.unsigned_long >> e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long = e1.value.signed_long >> e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int = e1.value.unsigned_int >> e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_int = e1.value.signed_int >> e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char = e1.value.signed_char >> e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char = e1.value.unsigned_char >> e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value >> e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t addition(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = e1.value.signed_long_long + e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = e1.value.unsigned_long_long + e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long = e1.value.unsigned_long + e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long = e1.value.signed_long + e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int = e1.value.unsigned_int + e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_int = e1.value.signed_int + e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char = e1.value.signed_char + e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char = e1.value.unsigned_char + e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value + e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t substraction(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = e1.value.signed_long_long - e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = e1.value.unsigned_long_long - e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long = e1.value.unsigned_long - e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long = e1.value.signed_long - e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int = e1.value.unsigned_int - e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_int = e1.value.signed_int - e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char = e1.value.signed_char - e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char = e1.value.unsigned_char - e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value - e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t multiplication(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = e1.value.signed_long_long * e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = e1.value.unsigned_long_long * e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long = e1.value.unsigned_long * e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long = e1.value.signed_long * e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int = e1.value.unsigned_int * e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_int = e1.value.signed_int * e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char = e1.value.signed_char * e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char = e1.value.unsigned_char * e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value * e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t division(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = e1.value.signed_long_long / e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = e1.value.unsigned_long_long / e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long = e1.value.unsigned_long / e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long = e1.value.signed_long / e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int = e1.value.unsigned_int / e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_int = e1.value.signed_int / e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char = e1.value.signed_char / e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char = e1.value.unsigned_char / e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value / e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t module(literal_value_t e1, literal_value_t e2)
{
    literal_value_t result = e1;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = e1.value.signed_long_long % e2.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = e1.value.unsigned_long_long % e2.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long = e1.value.unsigned_long % e2.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long = e1.value.signed_long % e2.value.signed_long;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int = e1.value.unsigned_int % e2.value.unsigned_int;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_int = e1.value.signed_int % e2.value.signed_int;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char = e1.value.signed_char % e2.value.signed_char;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char = e1.value.unsigned_char % e2.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value % e2.value.boolean_value;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }

    return result;
}

static literal_value_t convert_to_bool(literal_value_t e1)
{
    literal_value_t result = e1;
    
    result.kind = LVK_BOOL;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.boolean_value = e1.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.boolean_value = e1.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.boolean_value = e1.value.signed_long ;
            break;
        case LVK_UNSIGNED_INT :
            result.value.boolean_value = e1.value.unsigned_int ;
            break;
        case LVK_SIGNED_INT :
            result.value.boolean_value = e1.value.signed_int ;
            break;
        case LVK_SIGNED_CHAR :
            result.value.boolean_value = e1.value.signed_char ;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.boolean_value = e1.value.unsigned_char;
            break;
        case LVK_BOOL :
            result.value.boolean_value = e1.value.boolean_value ;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }
    return result;
}

static literal_value_t convert_to_unsigned_int(literal_value_t e1)
{
    literal_value_t result = e1;
    
    result.kind = LVK_UNSIGNED_INT;
    switch (e1.kind)
    {
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_int = (unsigned int) e1.value.unsigned_long_long;
            break;
        case LVK_SIGNED_LONG_LONG :
            result.value.unsigned_int = (unsigned int) e1.value.signed_long_long ;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_int = (unsigned int) e1.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.unsigned_int = (unsigned int) e1.value.signed_long ;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_int = (unsigned int) e1.value.unsigned_int ;
            break;
        case LVK_SIGNED_INT :
            result.value.unsigned_int = (unsigned int) e1.value.signed_int ;
            break;
        case LVK_SIGNED_CHAR :
            result.value.unsigned_int = (unsigned int) e1.value.signed_char ;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_int = (unsigned int) e1.value.unsigned_char ;
            break;
        case LVK_BOOL :
            result.value.unsigned_int = (unsigned int) e1.value.boolean_value ;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }
    return result;
}

static literal_value_t convert_to_signed_int(literal_value_t e1)
{
    literal_value_t result = e1;
    
    result.kind = LVK_SIGNED_INT;
    switch (e1.kind)
    {
        case LVK_UNSIGNED_LONG_LONG :
            result.value.signed_int = (signed int) e1.value.unsigned_long_long;
            break;
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_int = (signed int) e1.value.signed_long_long ;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.signed_int = (signed int) e1.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_int = (signed int) e1.value.signed_long ;
            break;
        case LVK_UNSIGNED_INT :
            result.value.signed_int = (signed int) e1.value.unsigned_int ;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_int = (signed int) e1.value.signed_int ;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_int = (signed int) e1.value.signed_char ;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.signed_int = (unsigned int) e1.value.signed_char ;
            break;
        case LVK_BOOL :
            result.value.signed_int = (signed int) e1.value.boolean_value ;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }
    return result;
}

static literal_value_t convert_to_unsigned_long(literal_value_t e1)
{
    literal_value_t result = e1;
    
    result.kind = LVK_UNSIGNED_LONG;
    switch (e1.kind)
    {
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long = (unsigned long) e1.value.unsigned_long_long;
            break;
        case LVK_SIGNED_LONG_LONG :
            result.value.unsigned_long = (unsigned long) e1.value.signed_long_long ;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long = (unsigned long) e1.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.unsigned_long = (unsigned long) e1.value.signed_long ;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_long = (unsigned long) e1.value.unsigned_int ;
            break;
        case LVK_SIGNED_INT :
            result.value.unsigned_long = (unsigned long) e1.value.signed_int ;
            break;
        case LVK_SIGNED_CHAR :
            result.value.unsigned_long = (unsigned long) e1.value.signed_char ;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_long = (unsigned long) e1.value.unsigned_char ;
            break;
        case LVK_BOOL :
            result.value.unsigned_long = (unsigned long) e1.value.boolean_value ;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }
    return result;
}

static literal_value_t convert_to_signed_long(literal_value_t e1)
{
    literal_value_t result = e1;
    
    result.kind = LVK_SIGNED_LONG;
    switch (e1.kind)
    {
        case LVK_UNSIGNED_LONG_LONG :
            result.value.signed_long = (signed long) e1.value.unsigned_long_long;
            break;
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long = (signed long) e1.value.signed_long_long ;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.signed_long = (signed long) e1.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long = (signed long) e1.value.signed_long ;
            break;
        case LVK_UNSIGNED_INT :
            result.value.signed_long = (signed long) e1.value.unsigned_int ;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_long = (signed long) e1.value.signed_int ;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_long = (signed long) e1.value.signed_char ;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.signed_long = (signed long) e1.value.unsigned_char ;
            break;
        case LVK_BOOL :
            result.value.signed_long = (signed long) e1.value.boolean_value ;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }
    return result;
}

static literal_value_t convert_to_unsigned_long_long(literal_value_t e1)
{
    literal_value_t result = e1;
    
    result.kind = LVK_UNSIGNED_LONG_LONG;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.unsigned_long_long = (unsigned long long) e1.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_long_long = (unsigned long long) e1.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_long_long = (unsigned long long) e1.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.unsigned_long_long = (unsigned long long) e1.value.signed_long ;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_long_long = (unsigned long long) e1.value.unsigned_int ;
            break;
        case LVK_SIGNED_INT :
            result.value.unsigned_long_long = (unsigned long long) e1.value.signed_int ;
            break;
        case LVK_SIGNED_CHAR :
            result.value.unsigned_long_long = (unsigned long long) e1.value.signed_char ;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_long_long = (unsigned long long) e1.value.unsigned_char ;
            break;
        case LVK_BOOL :
            result.value.unsigned_long_long = (unsigned long long) e1.value.boolean_value ;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }
    return result;
}

static literal_value_t convert_to_signed_long_long(literal_value_t e1)
{
    literal_value_t result = e1;
    
    result.kind = LVK_SIGNED_LONG_LONG;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_long_long = (signed long long) e1.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.signed_long_long = (signed long long) e1.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.signed_long_long = (signed long long) e1.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_long_long = (signed long long) e1.value.signed_long ;
            break;
        case LVK_UNSIGNED_INT :
            result.value.signed_long_long = (signed long long) e1.value.unsigned_int ;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_long_long = (signed long long) e1.value.signed_int ;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_long_long = (signed long long) e1.value.signed_char ;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.signed_long_long = (signed long long) e1.value.unsigned_char ;
            break;
        case LVK_BOOL :
            result.value.signed_long_long = (signed long long) e1.value.boolean_value ;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }
    return result;
}

static literal_value_t convert_to_unsigned_char(literal_value_t e1)
{
    literal_value_t result = e1;
    
    result.kind = LVK_UNSIGNED_CHAR;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.unsigned_char = (unsigned char) e1.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.unsigned_char = (unsigned char) e1.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.unsigned_char = (unsigned char) e1.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.unsigned_char = (unsigned char) e1.value.signed_long ;
            break;
        case LVK_UNSIGNED_INT :
            result.value.unsigned_char = (unsigned char) e1.value.unsigned_int ;
            break;
        case LVK_SIGNED_INT :
            result.value.unsigned_char = (unsigned char) e1.value.signed_int ;
            break;
        case LVK_SIGNED_CHAR :
            result.value.unsigned_char = (unsigned char) e1.value.signed_char ;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.unsigned_char = (unsigned char) e1.value.unsigned_char ;
            break;
        case LVK_BOOL :
            result.value.unsigned_char = (unsigned char) e1.value.boolean_value ;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }
    return result;
}

static literal_value_t convert_to_signed_char(literal_value_t e1)
{
    literal_value_t result = e1;
    
    result.kind = LVK_SIGNED_CHAR;
    switch (e1.kind)
    {
        case LVK_SIGNED_LONG_LONG :
            result.value.signed_char = (signed char) e1.value.signed_long_long;
            break;
        case LVK_UNSIGNED_LONG_LONG :
            result.value.signed_char = (signed char) e1.value.unsigned_long_long;
            break;
        case LVK_UNSIGNED_LONG :
            result.value.signed_char = (signed char) e1.value.unsigned_long;
            break;
        case LVK_SIGNED_LONG :
            result.value.signed_char = (signed char) e1.value.signed_long ;
            break;
        case LVK_UNSIGNED_INT :
            result.value.signed_char = (signed char) e1.value.unsigned_int ;
            break;
        case LVK_SIGNED_INT :
            result.value.signed_char = (signed char) e1.value.signed_int ;
            break;
        case LVK_SIGNED_CHAR :
            result.value.signed_char = (signed char) e1.value.signed_char ;
            break;
        case LVK_UNSIGNED_CHAR :
            result.value.signed_char = (signed char) e1.value.unsigned_char ;
            break;
        case LVK_BOOL :
            result.value.signed_char = (signed char) e1.value.boolean_value ;
            break;
        default:
            internal_error("Unknown value kind %d", e1.kind);
    }
    return result;
}

unsigned int literal_value_to_uint(literal_value_t v)
{
    literal_value_t v1 = convert_to_unsigned_long(v);
    return v1.value.unsigned_int;
}

static literal_value_t literal_value_gcc_builtin_types_compatible(AST expression,
        decl_context_t decl_context)
{
    AST first_type_tree = ASTSon0(expression);
    AST second_type_tree = ASTSon1(expression);

    type_t* first_type = NULL;
    type_t* second_type = NULL;

    type_t** types[] = { &first_type, &second_type };
    AST trees[] = { first_type_tree, second_type_tree };

    int i;
    for (i = 0; i < 2; i++)
    {
        AST type_id = trees[i];
        AST type_specifier = ASTSon0(type_id);
        AST abstract_declarator = ASTSon1(type_id);

        gather_decl_spec_t gather_info;
        memset(&gather_info, 0, sizeof(gather_info));

        type_t* simple_type_info = NULL;
        build_scope_decl_specifier_seq(type_specifier, &gather_info, &simple_type_info, 
                decl_context);

        *(types[i]) = simple_type_info;
        compute_declarator_type(abstract_declarator, &gather_info, simple_type_info, 
                types[i], decl_context);
    }

    ERROR_CONDITION(first_type == NULL
            || second_type == NULL, "Something is wrong here", 0);

    // Advance over typedefs
    first_type = advance_over_typedefs(first_type);
    second_type = advance_over_typedefs(second_type);

    // Now remove top cv qualifiers
    first_type = get_unqualified_type(first_type);
    second_type = get_unqualified_type(second_type);

    // 'int[]' is compatible with 'int[5]' so ignore
    // the top level array if any. Note that 'int[][10]' is not 
    // compatible with 'int[][5]' but it is with 'int[5][10]'
    if (is_array_type(first_type)
            && is_array_type(second_type))
    {
        first_type = array_type_get_element_type(first_type);
        second_type = array_type_get_element_type(second_type);

        // Remove the top level again qualifier (gcc makes compatible 'const
        // int[]' and 'int[]' but not compatible 'const int*' and 'int*')
        first_type = get_unqualified_type(first_type);
        second_type = get_unqualified_type(second_type);
    }

    if (equivalent_types(first_type, second_type, decl_context))
    {
        return literal_value_one();
    }
    else
    {
        return literal_value_zero();
    }
}
