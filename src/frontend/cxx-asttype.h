#ifndef CXX_ASTTYPE_H
#define CXX_ASTTYPE_H
#include "cxx-macros.h"
MCXX_BEGIN_DECLS
/* This file has been generated. Every time you change cxx-asttype.def it will be regenerated */
enum node_type {
AST_INVALID_NODE = 0,
AST_ABSTRACT_ARRAY,
AST_ABSTRACT_DECLARATOR,
AST_ABSTRACT_DECLARATOR_FUNC,
AST_ADD_ASSIGNMENT,
AST_ADD_ASSIGN_OPERATOR,
AST_ADD_OP,
AST_ADD_OPERATOR,
AST_AMBIGUITY,
AST_AND_ASSIGNMENT,
AST_AND_ASSIGN_OPERATOR,
AST_ANY_EXCEPTION,
AST_ARRAY_SUBSCRIPT,
AST_ASM_DEFINITION,
AST_ASSIGNMENT,
AST_ASSIGNMENT_OPERATOR,
AST_AUTO_SPEC,
AST_BASE_CLAUSE,
AST_BASE_SPECIFIER,
AST_BASE_SPECIFIER_ACCESS,
AST_BASE_SPECIFIER_ACCESS_TEMPLATE,
AST_BASE_SPECIFIER_ACCESS_VIRTUAL,
AST_BASE_SPECIFIER_ACCESS_VIRTUAL_TEMPLATE,
AST_BASE_SPECIFIER_TEMPLATE,
AST_BASE_SPECIFIER_VIRTUAL,
AST_BASE_SPECIFIER_VIRTUAL_TEMPLATE,
AST_BITFIELD_DECLARATOR,
AST_BITWISE_AND,
AST_BITWISE_AND_OPERATOR,
AST_BITWISE_NEG_OPERATOR,
AST_BITWISE_OR,
AST_BITWISE_OR_OPERATOR,
AST_BITWISE_XOR,
AST_BITWISE_XOR_OPERATOR,
AST_BOOLEAN_LITERAL,
AST_BOOL_TYPE,
AST_BREAK_STATEMENT,
AST_CASE_STATEMENT,
AST_CAST_EXPRESSION,
AST_CATCH_HANDLER,
AST_CHARACTER_LITERAL,
AST_CHAR_TYPE,
AST_CLASS_HEAD,
AST_CLASS_KEY_CLASS,
AST_CLASS_KEY_STRUCT,
AST_CLASS_KEY_UNION,
AST_CLASS_MEMBER_ACCESS,
AST_CLASS_SPECIFIER,
AST_CLASS_TEMPLATE_MEMBER_ACCESS,
AST_COMMA_OP,
AST_COMMA_OPERATOR,
AST_COMPLEMENT_OP,
AST_COMPOUND_STATEMENT,
AST_CONDITION,
AST_CONDITIONAL_EXPRESSION,
AST_CONSTANT_EXPRESSION,
AST_CONSTANT_INITIALIZER,
AST_CONST_CAST,
AST_CONST_SPEC,
AST_CONTINUE_STATEMENT,
AST_CONVERSION_DECLARATOR,
AST_CONVERSION_FUNCTION_ID,
AST_CONVERSION_TYPE_ID,
AST_CTOR_INITIALIZER,
AST_CUSTOM_CONSTRUCT_HEADER,
AST_CUSTOM_CONSTRUCT_PARAMETER,
AST_CUSTOM_CONSTRUCT_STATEMENT,
AST_DECIMAL_LITERAL,
AST_DECLARATION_STATEMENT,
AST_DECLARATOR,
AST_DECLARATOR_ARRAY,
AST_DECLARATOR_FUNC,
AST_DECLARATOR_ID_EXPR,
AST_DECL_SPECIFIER_SEQ,
AST_DECREMENT_OPERATOR,
AST_DEFAULT_STATEMENT,
AST_DELETE_ARRAY_EXPR,
AST_DELETE_ARRAY_OPERATOR,
AST_DELETE_EXPR,
AST_DELETE_OPERATOR,
AST_DERREFERENCE,
AST_DESIGNATED_INITIALIZER,
AST_DESIGNATION,
AST_DESTRUCTOR_ID,
AST_DESTRUCTOR_TEMPLATE_ID,
AST_DIFFERENT_OP,
AST_DIFFERENT_OPERATOR,
AST_DIRECT_NEW_DECLARATOR,
AST_DIV_ASSIGNMENT,
AST_DIV_ASSIGN_OPERATOR,
AST_DIV_OP,
AST_DIV_OPERATOR,
AST_DO_STATEMENT,
AST_DOUBLE_TYPE,
AST_DYNAMIC_CAST,
AST_ELABORATED_TYPE_CLASS,
AST_ELABORATED_TYPE_ENUM,
AST_ELABORATED_TYPENAME,
AST_ELABORATED_TYPENAME_TEMPLATE,
AST_ELABORATED_TYPE_TEMPLATE_CLASS,
AST_ELABORATED_TYPE_TEMPLATE_TEMPLATE_CLASS,
AST_EMPTY_DECL,
AST_EMPTY_PARAMETER_DECLARATION_CLAUSE,
AST_EMPTY_STATEMENT,
AST_ENUM_DEF,
AST_ENUM_SPECIFIER,
AST_EQUAL_OP,
AST_EQUAL_OPERATOR,
AST_EXCEPTION_DECLARATION,
AST_EXCEPTION_SPECIFICATION,
AST_EXPLICIT_INSTANTIATION,
AST_EXPLICIT_SPEC,
AST_EXPLICIT_SPECIALIZATION,
AST_EXPLICIT_TYPE_CONVERSION,
AST_EXPORT_TEMPLATE_DECLARATION,
AST_EXPRESSION,
AST_EXPRESSION_STATEMENT,
AST_EXTERN_SPEC,
AST_FIELD_DESIGNATOR,
AST_FLOATING_LITERAL,
AST_FLOAT_TYPE,
AST_FOR_STATEMENT,
AST_FRIEND_SPEC,
AST_FUNCTION_BODY,
AST_FUNCTION_CALL,
AST_FUNCTION_CALL_OPERATOR,
AST_FUNCTION_DEFINITION,
AST_GCC_ABSTRACT_DECLARATOR,
AST_GCC_ALIGNOF,
AST_GCC_ALIGNOF_TYPE,
AST_GCC_ASM_DEFINITION,
AST_GCC_ASM_DEF_PARMS,
AST_GCC_ASM_OPERAND,
AST_GCC_ASM_SPEC,
AST_GCC_ATTRIBUTE,
AST_GCC_ATTRIBUTE_EXPR,
AST_GCC_BITFIELD_DECLARATOR,
AST_GCC_BUILTIN_CHOOSE_EXPR,
AST_GCC_BUILTIN_OFFSETOF,
AST_GCC_BUILTIN_TYPES_COMPATIBLE_P,
AST_GCC_BUILTIN_VA_ARG,
AST_GCC_CASE_STATEMENT,
AST_GCC_CLASS_HEAD,
AST_GCC_COMPLEX_TYPE,
AST_GCC_CONDITION,
AST_GCC_CONDITIONAL_EXPRESSION,
AST_GCC_CONDITION_DECL,
AST_GCC_DECLARATOR,
AST_GCC_ELABORATED_TYPE_CLASS,
AST_GCC_ELABORATED_TYPE_ENUM,
AST_GCC_ELABORATED_TYPE_TEMPLATE_CLASS,
AST_GCC_ELABORATED_TYPE_TEMPLATE_TEMPLATE_CLASS,
AST_GCC_ENUM_SPECIFIER,
AST_GCC_EXTENSION,
AST_GCC_EXTENSION_EXPR,
AST_GCC_FUNCTIONAL_DECLARATOR,
AST_GCC_GOTO_STATEMENT,
AST_GCC_IMAGINARY_TYPE,
AST_GCC_IMAG_PART,
AST_GCC_INIT_DECLARATOR,
AST_GCC_INITIALIZER_CLAUSE,
AST_GCC_LABEL_ADDR,
AST_GCC_LABEL_DECL,
AST_GCC_MAX_ASSIGMENT,
AST_GCC_MAX_OPERATION,
AST_GCC_MEMBER_DECLARATION,
AST_GCC_MEMBER_DECLARATOR,
AST_GCC_MEM_INITIALIZER,
AST_GCC_MIN_ASSIGMENT,
AST_GCC_MIN_OPERATION,
AST_GCC_NAMESPACE_DEFINITION,
AST_GCC_OFFSETOF_MEMBER_DESIGNATOR,
AST_GCC_PARAMETER_DECL,
AST_GCC_PARENTHESIZED_EXPRESSION,
AST_GCC_POINTER_DECL,
AST_GCC_POSTFIX_EXPRESSION,
AST_GCC_PTR_ABSTRACT_DECLARATOR,
AST_GCC_REAL_PART,
AST_GCC_REFERENCE_SPEC,
AST_GCC_RESTRICT_SPEC,
AST_GCC_TYPEOF,
AST_GCC_TYPEOF_EXPR,
AST_GCC_TYPE_SPECIFIER_SEQ,
AST_GCC_USING_DIRECTIVE,
AST_GLOBAL_SCOPE,
AST_GOTO_STATEMENT,
AST_GREATER_OPERATOR,
AST_GREATER_OR_EQUAL_OPERATOR,
AST_GREATER_OR_EQUAL_THAN,
AST_GREATER_THAN,
AST_HEXADECIMAL_FLOAT,
AST_HEXADECIMAL_LITERAL,
AST_IF_ELSE_STATEMENT,
AST_INCREMENT_OPERATOR,
AST_INDEX_DESIGNATOR,
AST_INIT_DECLARATOR,
AST_INITIALIZER,
AST_INITIALIZER_BRACES,
AST_INITIALIZER_EXPR,
AST_INLINE_SPEC,
AST_INT_TYPE,
AST_KR_PARAMETER_LIST,
AST_LABELED_STATEMENT,
AST_LEFT_ASSIGN_OPERATOR,
AST_LEFT_OPERATOR,
AST_LESS_OR_EQUAL_OPERATOR,
AST_LINKAGE_SPEC,
AST_LINKAGE_SPEC_DECL,
AST_LOGICAL_AND,
AST_LOGICAL_AND_OPERATOR,
AST_LOGICAL_NOT_OPERATOR,
AST_LOGICAL_OR,
AST_LOGICAL_OR_OPERATOR,
AST_LONG_TYPE,
AST_LOWER_OPERATOR,
AST_LOWER_OR_EQUAL_THAN,
AST_LOWER_THAN,
AST_MEMBER_ACCESS_SPEC,
AST_MEMBER_DECLARATION,
AST_MEMBER_DECLARATION_QUALIFIED,
AST_MEMBER_DECLARATION_TEMPLATE,
AST_MEMBER_DECLARATOR,
AST_MEM_INITIALIZER,
AST_MEM_INITIALIZER_ID,
AST_MINUS_OP,
AST_MINUS_OPERATOR,
AST_MOD_ASSIGNMENT,
AST_MOD_ASSIGN_OPERATOR,
AST_MOD_OP,
AST_MOD_OPERATOR,
AST_MUL_ASSIGNMENT,
AST_MUL_ASSIGN_OPERATOR,
AST_MULT_OP,
AST_MULT_OPERATOR,
AST_MUTABLE_SPEC,
AST_NAMESPACE_ALIAS,
AST_NAMESPACE_DEFINITION,
AST_NEG_OP,
AST_NESTED_NAME_SPECIFIER,
AST_NESTED_NAME_SPECIFIER_TEMPLATE,
AST_NEW_ARRAY_OPERATOR,
AST_NEW_DECLARATOR,
AST_NEW_EXPRESSION,
AST_NEW_INITIALIZER,
AST_NEW_OPERATOR,
AST_NEW_PLACEMENT,
AST_NEW_TYPE_ID,
AST_NEW_TYPE_ID_EXPR,
AST_NODE_LIST,
AST_NOT_OP,
AST_OCTAL_LITERAL,
AST_OMP_ATOMIC_CONSTRUCT,
AST_OMP_ATOMIC_DIRECTIVE,
AST_OMP_BARRIER_DIRECTIVE,
AST_OMP_CONSTRUCT,
AST_OMP_COPYIN_CLAUSE,
AST_OMP_COPYPRIVATE_CLAUSE,
AST_OMP_CRITICAL_CONSTRUCT,
AST_OMP_CRITICAL_DIRECTIVE,
AST_OMP_CUSTOM_CLAUSE,
AST_OMP_CUSTOM_CONSTRUCT,
AST_OMP_CUSTOM_CONSTRUCT_DIRECTIVE,
AST_OMP_CUSTOM_DIRECTIVE,
AST_OMP_CUSTOM_PARAMETER_CLAUSE,
AST_OMP_CUSTOM_SCHEDULE,
AST_OMP_DEFAULT_CUSTOM_CLAUSE,
AST_OMP_DEFAULT_NONE_CLAUSE,
AST_OMP_DEFAULT_SHARED_CLAUSE,
AST_OMP_DYNAMIC_SCHEDULE,
AST_OMP_FIRSTPRIVATE_CLAUSE,
AST_OMP_FLUSH_DIRECTIVE,
AST_OMP_FOR_CONSTRUCT,
AST_OMP_FOR_DIRECTIVE,
AST_OMP_GUIDED_SCHEDULE,
AST_OMP_IF_CLAUSE,
AST_OMP_LASTPRIVATE_CLAUSE,
AST_OMP_MASTER_CONSTRUCT,
AST_OMP_MASTER_DIRECTIVE,
AST_OMP_NOWAIT_CLAUSE,
AST_OMP_NUM_THREADS_CLAUSE,
AST_OMP_ORDERED_CLAUSE,
AST_OMP_ORDERED_CONSTRUCT,
AST_OMP_ORDERED_DIRECTIVE,
AST_OMP_PARALLEL_CONSTRUCT,
AST_OMP_PARALLEL_DIRECTIVE,
AST_OMP_PARALLEL_FOR_CONSTRUCT,
AST_OMP_PARALLEL_FOR_DIRECTIVE,
AST_OMP_PARALLEL_SECTIONS_CONSTRUCT,
AST_OMP_PARALLEL_SECTIONS_DIRECTIVE,
AST_OMP_PARALLEL_SINGLE_CONSTRUCT,
AST_OMP_PARALLEL_SINGLE_DIRECTIVE,
AST_OMP_PRIVATE_CLAUSE,
AST_OMP_REDUCTION_CLAUSE,
AST_OMP_RUNTIME_SCHEDULE,
AST_OMP_SCHEDULE_CLAUSE,
AST_OMP_SECTION,
AST_OMP_SECTION_DIRECTIVE,
AST_OMP_SECTIONS_CONSTRUCT,
AST_OMP_SECTIONS_DIRECTIVE,
AST_OMP_SHARED_CLAUSE,
AST_OMP_SINGLE_CONSTRUCT,
AST_OMP_SINGLE_DIRECTIVE,
AST_OMP_STATIC_SCHEDULE,
AST_OMP_THREADPRIVATE_DIRECTIVE,
AST_OMP_USER_DEFINED_REDUCTION_CLAUSE,
AST_OPERATOR_FUNCTION_ID,
AST_OPERATOR_FUNCTION_ID_TEMPLATE,
AST_OR_ASSIGNMENT,
AST_OR_ASSIGN_OPERATOR,
AST_PARAMETER_DECL,
AST_PARENTHESIZED_ABSTRACT_DECLARATOR,
AST_PARENTHESIZED_DECLARATOR,
AST_PARENTHESIZED_EXPRESSION,
AST_PARENTHESIZED_INITIALIZER,
AST_PLUS_OP,
AST_POINTER_CLASS_MEMBER_ACCESS,
AST_POINTER_CLASS_TEMPLATE_MEMBER_ACCESS,
AST_POINTER_DECL,
AST_POINTER_DERREF_OPERATOR,
AST_POINTER_OPERATOR,
AST_POINTER_PSEUDO_DESTRUCTOR_CALL,
AST_POINTER_SPEC,
AST_POINTER_TO_MEMBER,
AST_POINTER_TO_POINTER_MEMBER,
AST_POSTDECREMENT,
AST_POSTINCREMENT,
AST_PP_COMMENT,
AST_PP_TOKEN,
AST_PRAGMA_CLAUSE_ARG,
AST_PRAGMA_CUSTOM_CLAUSE,
AST_PRAGMA_CUSTOM_CONSTRUCT,
AST_PRAGMA_CUSTOM_DIRECTIVE,
AST_PRAGMA_CUSTOM_LINE,
AST_PREDECREMENT,
AST_PREINCREMENT,
AST_PRIVATE_SPEC,
AST_PROTECTED_SPEC,
AST_PSEUDO_DESTRUCTOR_CALL,
AST_PSEUDO_DESTRUCTOR_NAME,
AST_PSEUDO_DESTRUCTOR_QUALIF,
AST_PSEUDO_DESTRUCTOR_TEMPLATE,
AST_PUBLIC_SPEC,
AST_QUALIFIED_ID,
AST_QUALIFIED_NAMESPACE_SPEC,
AST_QUALIFIED_TEMPLATE,
AST_REFERENCE,
AST_REFERENCE_SPEC,
AST_REGISTER_SPEC,
AST_REINTERPRET_CAST,
AST_RETURN_STATEMENT,
AST_RIGHT_ASSIGN_OPERATOR,
AST_RIGHT_OPERATOR,
AST_SHL_ASSIGNMENT,
AST_SHL_OP,
AST_SHORT_TYPE,
AST_SHR_ASSIGNMENT,
AST_SHR_OP,
AST_SIGNED_TYPE,
AST_SIMPLE_DECLARATION,
AST_SIMPLE_TYPE_SPECIFIER,
AST_SIZEOF,
AST_SIZEOF_TYPEID,
AST_STATIC_CAST,
AST_STATIC_SPEC,
AST_STRING_LITERAL,
AST_SUB_ASSIGNMENT,
AST_SUB_ASSIGN_OPERATOR,
AST_SUBSCRIPT_OPERATOR,
AST_SWITCH_STATEMENT,
AST_SYMBOL,
AST_TEMPLATE_DECLARATION,
AST_TEMPLATE_EXPRESSION_ARGUMENT,
AST_TEMPLATE_ID,
AST_TEMPLATE_TYPE_ARGUMENT,
AST_THIS_VARIABLE,
AST_THREAD_SPEC,
AST_THROW_EXPRESSION,
AST_TRANSLATION_UNIT,
AST_TRY_BLOCK,
AST_TYPEDEF_SPEC,
AST_TYPE_ID,
AST_TYPEID_EXPR,
AST_TYPEID_TYPE,
AST_TYPENAME_EXPLICIT_TYPE_CONVERSION,
AST_TYPENAME_TEMPLATE_EXPLICIT_TYPE_CONVERSION,
AST_TYPENAME_TEMPLATE_TEMPLATE_EXPLICIT_TYPE_CONVERSION,
AST_TYPE_PARAMETER_CLASS,
AST_TYPE_PARAMETER_TEMPLATE,
AST_TYPE_PARAMETER_TYPENAME,
AST_TYPE_SPECIFIER_SEQ,
AST_UNKNOWN_PRAGMA,
AST_UNSIGNED_TYPE,
AST_USING_DECL,
AST_USING_DECL_TYPENAME,
AST_USING_DIRECTIVE,
AST_VARIADIC_ARG,
AST_VIRTUAL_SPEC,
AST_VLA_EXPRESSION,
AST_VOID_TYPE,
AST_VOLATILE_SPEC,
AST_WCHAR_TYPE,
AST_WHILE_STATEMENT,
AST_XOR_ASSIGNMENT,
AST_XOR_ASSIGN_OPERATOR,
AST_LAST_NODE
};
extern char* ast_node_names[];
typedef enum node_type node_t;
MCXX_END_DECLS
#endif // CXX_ASTTYPE_H