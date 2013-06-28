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
#ifndef TL_PRAGMASUPPORT_HPP
#define TL_PRAGMASUPPORT_HPP

#include <string>
#include "tl-compilerphase.hpp"
#include "tl-langconstruct.hpp"
#include "tl-handler.hpp"
#include "tl-traverse.hpp"
#include "tl-source.hpp"
#include "cxx-attrnames.h"

namespace TL
{
    class PragmaCustomClause : public LangConstruct
    {
        private:
            std::string _clause_name;

            ObjectList<AST_t> filter_pragma_clause();

            bool _parsed_expressions;
            ObjectList<Expression> _expressions;

        public:
            PragmaCustomClause(const std::string& src, AST_t ref, ScopeLink scope_link)
                : LangConstruct(ref, scope_link), _clause_name(src), _parsed_expressions(false)
            {
            }

            // Convenience function, it returns all the arguments parsed as expressions
            ObjectList<Expression> get_expression_list();

            // Convenience function, it returns all the id-expressions of the arguments when 
            // parsed as expressions
            ObjectList<IdExpression> id_expressions(IdExpressionCriteria criteria = VALID_SYMBOLS);

            // Raw clause arguments for custom parsing
            ObjectList<std::string> get_arguments();

            // Raw clause arguments tree for custom parsing
            ObjectList<AST_t> get_arguments_tree();

            // States whether the clause was in the pragma
            bool is_defined();
            
            // return the name of the current clause
            std::string get_clause_name() { return _clause_name; }
    };

    class PragmaCustomConstruct : public LangConstruct
    {
        public:
            PragmaCustomConstruct(AST_t ref, ScopeLink scope_link)
                : LangConstruct(ref, scope_link)
            {
            }

            std::string get_pragma();
            std::string get_directive();

            bool is_directive();
            bool is_construct();

            Statement get_statement();
            AST_t get_declaration();

            bool is_function_definition();

            bool is_parameterized();
            ObjectList<Expression> get_parameter_expressions();
            ObjectList<std::string> get_parameter_arguments();

            PragmaCustomClause get_clause(const std::string& name);
    };

    typedef std::map<std::string, Signal1<PragmaCustomConstruct> > CustomFunctorMap;

    class PragmaCustomDispatcher : public TraverseFunctor
    {
        private:
            std::string _pragma_handled;
            CustomFunctorMap& _pre_map;
            CustomFunctorMap& _post_map;

            void dispatch_pragma_construct(CustomFunctorMap& search_map, Context ctx, AST_t node);
        public:
            PragmaCustomDispatcher(const std::string& pragma_handled, 
                    CustomFunctorMap& pre_map,
                    CustomFunctorMap& post_map);

            virtual void preorder(Context ctx, AST_t node);
            virtual void postorder(Context ctx, AST_t node);
    };

    //! Base class for all compiler phases working on user defined pragma lines
    /*!
     * Configuration of mcxx will require a 'pragma_prefix' line in order
     * to properly parse these pragma lines. In addition, the phases
     * will have to call register_directive and register_construct
     * accordingly to register specific constructs and directives.
     */
    class PragmaCustomCompilerPhase : public CompilerPhase
    {
        private:
            std::string _pragma_handled;
            PragmaCustomDispatcher _pragma_dispatcher;

        public:
            //! Constructor
            /*!
             * \param pragma_handled The pragma prefix actually handled in this phase.
             */
            PragmaCustomCompilerPhase(const std::string& pragma_handled);
            //! Entry point of the phase
            /*!
             * This function registers traverse functors to perform
             * a traversal on all the constructs and directives.
             */
            virtual void run(DTO& data_flow);

            //! Custom functor map for directives found in preorder
            CustomFunctorMap on_directive_pre;
            //! Custom functor map for directives found in preorder
            CustomFunctorMap on_directive_post;

            //! Function to register a directive
            /*!
             * This is required for successful parsing of directives
             */
            void register_directive(const std::string& name);
            //! Function to register a construct
            /*!
             * This is required for successful parsing of construct
             */
            void register_construct(const std::string& name);
    };
}

#endif // TL_PRAGMASUPPORT_HPP
