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
#include "tl-pragmasupport.hpp"

namespace TL
{
    static ObjectList<Expression> parse_as_expressions(ObjectList<AST_t> clause_list, AST_t ref_tree, ScopeLink scope_link)
    {
        ObjectList<Expression> result;
        PredicateAST<LANG_IS_PRAGMA_CUSTOM_CLAUSE_ARGUMENT> clause_argument_pred;

        for (ObjectList<AST_t>::iterator it = clause_list.begin();
                it != clause_list.end();
                it++)
        {
            ObjectList<AST_t> argument_list = it->depth_subtrees(clause_argument_pred, AST_t::NON_RECURSIVE);

            for (ObjectList<AST_t>::iterator it2 = argument_list.begin();
                    it2 != argument_list.end();
                    it2++)
            {
                Source src;
                src << it2->prettyprint();

                AST_t parsed_expr = src.parse_expression(ref_tree, scope_link);

                Expression expr(parsed_expr, scope_link);

                result.push_back(expr);
            }
        }

        return result;
    }

    PragmaCustomDispatcher::PragmaCustomDispatcher(const std::string& pragma_handled, 
            CustomFunctorMap& pre_map, CustomFunctorMap& post_map)
        : _pragma_handled(pragma_handled), _pre_map(pre_map), _post_map(post_map)
    {
    }

    void PragmaCustomDispatcher::preorder(Context ctx, AST_t node)
    {
        dispatch_pragma_construct(_pre_map, ctx, node);
    }

    void PragmaCustomDispatcher::postorder(Context ctx, AST_t node)
    {
        dispatch_pragma_construct(_post_map, ctx, node);
    }

    void PragmaCustomDispatcher::dispatch_pragma_construct(CustomFunctorMap& search_map, Context ctx, AST_t node)
    {
        PragmaCustomConstruct pragma_custom_construct(node, ctx.scope_link);

        // If this is a handled pragma in this class
        if (pragma_custom_construct.get_pragma() == _pragma_handled)
        {
            // Search its functor
            if (search_map.find(pragma_custom_construct.get_directive()) != search_map.end())
            {
                Signal1<PragmaCustomConstruct>& functor = search_map[pragma_custom_construct.get_directive()];
                functor.signal(pragma_custom_construct);
            }
        }
    }

    std::string PragmaCustomConstruct::get_pragma() 
    {
        TL::String result = this->get_ast().get_attribute(LANG_PRAGMA_CUSTOM);
        return result;
    }

    std::string PragmaCustomConstruct::get_directive() 
    {
        TL::AST_t pragma_line = this->get_ast().get_attribute(LANG_PRAGMA_CUSTOM_LINE);

        TL::String result = pragma_line.get_attribute(LANG_PRAGMA_CUSTOM_DIRECTIVE);

        return result;
    }

    bool PragmaCustomConstruct::is_directive()
    {
        TL::Bool is_directive = this->get_ast().get_attribute(LANG_IS_PRAGMA_CUSTOM_DIRECTIVE);

        return is_directive;
    }

    AST_t PragmaCustomConstruct::get_declaration()
    {
        // The user will put it into a FunctionDefinition or a Declaration
        // depending on his needs
        TL::AST_t declaration = this->get_ast().get_attribute(LANG_PRAGMA_CUSTOM_DECLARATION);
        return declaration;
    }

    bool PragmaCustomConstruct::is_construct()
    {
        TL::Bool is_construct = this->get_ast().get_attribute(LANG_IS_PRAGMA_CUSTOM_CONSTRUCT);

        return is_construct;
    }

    Statement PragmaCustomConstruct::get_statement()
    {
        AST_t tree = this->get_ast().get_attribute(LANG_PRAGMA_CUSTOM_STATEMENT);
        Statement result(tree, this->get_scope_link());

        return result;
    }

    PragmaCustomClause PragmaCustomConstruct::get_clause(const std::string& name)
    {
        AST_t pragma_line = _ref.get_attribute(LANG_PRAGMA_CUSTOM_LINE);
        PragmaCustomClause result(name, pragma_line, this->get_scope_link());
        return result;
    }

    bool PragmaCustomConstruct::is_function_definition()
    {
        AST_t declaration = get_declaration();
        if (declaration.is_valid())
        {
            TL::Bool b = declaration.get_attribute(LANG_IS_FUNCTION_DEFINITION);
            return b;
        }
        else return false;
    }

    bool PragmaCustomConstruct::is_parameterized()
    {
        AST_t pragma_line = _ref.get_attribute(LANG_PRAGMA_CUSTOM_LINE);
        TL::Bool b = pragma_line.get_attribute(LANG_PRAGMA_CUSTOM_LINE_IS_PARAMETERIZED);

        return b;
    }

    ObjectList<Expression> PragmaCustomConstruct::get_parameter_expressions()
    {
        ObjectList<Expression> result;
        AST_t pragma_line = _ref.get_attribute(LANG_PRAGMA_CUSTOM_LINE);
        AST_t parameter = pragma_line.get_attribute(LANG_PRAGMA_CUSTOM_LINE_PARAMETER);

        ObjectList<AST_t> parameter_list;
        parameter_list.append(parameter);

        result = parse_as_expressions(parameter_list, this->_ref, this->_scope_link);

        return result;
    }

    ObjectList<std::string> PragmaCustomConstruct::get_parameter_arguments()
    {
        ObjectList<std::string> result;
        AST_t pragma_line = _ref.get_attribute(LANG_PRAGMA_CUSTOM_LINE);
        AST_t parameter = pragma_line.get_attribute(LANG_PRAGMA_CUSTOM_LINE_PARAMETER);

        PredicateAST<LANG_IS_PRAGMA_CUSTOM_CLAUSE_ARGUMENT> clause_argument_pred;

        ObjectList<AST_t> argument_list = parameter.depth_subtrees(clause_argument_pred, AST_t::NON_RECURSIVE);

        for (ObjectList<AST_t>::iterator it = argument_list.begin();
                it != argument_list.end();
                it++)
        {
            result.append(it->prettyprint());
        }

        return result;
    }

    PragmaCustomCompilerPhase::PragmaCustomCompilerPhase(const std::string& pragma_handled)
        : _pragma_handled(pragma_handled), _pragma_dispatcher(pragma_handled, on_directive_pre, on_directive_post)
    {
    }

    void PragmaCustomCompilerPhase::run(DTO& data_flow)
    {
        // get the translation_unit tree
        AST_t translation_unit = data_flow["translation_unit"];
        // get the scope_link
        ScopeLink scope_link = data_flow["scope_link"];
        // Get the global_scope
        Scope global_scope = scope_link.get_scope(translation_unit);

        // Instantiate a DepthTraverse
        DepthTraverse depth_traverse;

        PredicateAST<LANG_IS_PRAGMA_CUSTOM_DIRECTIVE> pragma_custom_directive_pred;
        PredicateAST<LANG_IS_PRAGMA_CUSTOM_CONSTRUCT> pragma_custom_construct_pred;

        depth_traverse.add_predicate(pragma_custom_directive_pred, _pragma_dispatcher);
        depth_traverse.add_predicate(pragma_custom_construct_pred, _pragma_dispatcher);

        depth_traverse.traverse(translation_unit, scope_link);
    }

    void PragmaCustomCompilerPhase::register_directive(const std::string& str)
    {
        register_new_directive(_pragma_handled.c_str(), str.c_str(), 0);
    }

    void PragmaCustomCompilerPhase::register_construct(const std::string& str)
    {
        register_new_directive(_pragma_handled.c_str(), str.c_str(), 1);
    }
   
    ObjectList<Expression> PragmaCustomClause::get_expression_list()
    {
        if (!_parsed_expressions)
        {
            _expressions.clear();
            _expressions = parse_as_expressions(filter_pragma_clause(), this->_ref, this->_scope_link);
            _parsed_expressions = true;
        }

        return _expressions;
    }


    ObjectList<AST_t> PragmaCustomClause::filter_pragma_clause()
    {
        class PredicateCustomClause : public Predicate<AST_t>
        {
            private:
                PredicateAttr _custom_clause;
                const std::string& _clause_name;

            public:
                PredicateCustomClause(const std::string& clause_name)
                    : _custom_clause(LANG_IS_PRAGMA_CUSTOM_CLAUSE), _clause_name(clause_name)
                {
                }

                virtual bool operator()(AST_t& t) const
                {
                    if (_custom_clause(t))
                    {
                        TL::String clause_name_attr = t.get_attribute(LANG_PRAGMA_CUSTOM_CLAUSE);

                        return (clause_name_attr.compare_case_insensitive_to(_clause_name));
                    }
                    else return false;
                }
        };

        PredicateCustomClause predicate_custom_clause(_clause_name);

        ObjectList<AST_t> result = _ref.depth_subtrees(predicate_custom_clause);

        return result;
    }

    ObjectList<std::string> PragmaCustomClause::get_arguments()
    {
        ObjectList<std::string> result;

        PredicateAST<LANG_IS_PRAGMA_CUSTOM_CLAUSE_ARGUMENT> clause_arg_pred;

        ObjectList<AST_t> clause_list = filter_pragma_clause();
        for (ObjectList<AST_t>::iterator it = clause_list.begin();
                it != clause_list.end();
                it++)
        {
            ObjectList<AST_t> arguments = it->depth_subtrees(clause_arg_pred, AST_t::NON_RECURSIVE);
            for (ObjectList<AST_t>::iterator jt = arguments.begin();
                    jt != arguments.end();
                    jt++)
            {
                result.append(jt->prettyprint());
            }
        }

        return result;
    }

    ObjectList<AST_t> PragmaCustomClause::get_arguments_tree()
    {
        ObjectList<AST_t> result;

        PredicateAST<LANG_IS_PRAGMA_CUSTOM_CLAUSE_ARGUMENT> clause_arg_pred;

        ObjectList<AST_t> clause_list = filter_pragma_clause();
        for (ObjectList<AST_t>::iterator it = clause_list.begin();
                it != clause_list.end();
                it++)
        {
            ObjectList<AST_t> arguments = it->depth_subtrees(clause_arg_pred, AST_t::NON_RECURSIVE);
            for (ObjectList<AST_t>::iterator jt = arguments.begin();
                    jt != arguments.end();
                    jt++)
            {
                AST_t tree= *jt;
                result.append(tree);
            }
        }

        return result;
    }

    ObjectList<IdExpression> PragmaCustomClause::id_expressions(IdExpressionCriteria criteria)
    {
        PredicateAST<LANG_IS_ID_EXPRESSION> id_expr_pred;

        ObjectList<Expression> expressions = get_expression_list();

        ObjectList<IdExpression> result;
        GetSymbolFromAST get_symbol_from_ast(this->_scope_link);

        for(ObjectList<Expression>::iterator it = expressions.begin();
                it != expressions.end();
                it++)
        {
            ObjectList<AST_t> id_expressions = it->get_ast().depth_subtrees().filter(id_expr_pred);

            for (ObjectList<AST_t>::iterator jt = id_expressions.begin();
                    jt != id_expressions.end();
                    jt++)
            {
                Symbol sym = get_symbol_from_ast(*jt);

                bool eligible = false;

                switch (criteria)
                {
                    case ALL_FOUND_SYMBOLS :
                        eligible = true;
                        break;
                    case VALID_SYMBOLS :
                        eligible = sym.is_valid();
                        break;
                    case INVALID_SYMBOLS :
                        eligible = !sym.is_valid();
                        break;
                }

                if (eligible)
                {
                    IdExpression id_expr(*jt, this->_scope_link);
                    result.append(id_expr);
                }
            }
        }

        return result;
    }

    bool PragmaCustomClause::is_defined()
    {
        ObjectList<AST_t> clauses = filter_pragma_clause();

        return (!clauses.empty());
    }
}
