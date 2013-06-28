/*
    Acotes Translation Phase
    Copyright (C) 2007 - David Rodenas Pico <david.rodenas@gmail.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
    
    $Id: tl-acotestransform.cpp 1611 2007-07-10 09:28:44Z drodenas $
*/
#include "tl-acotesmaincompilerphase.h"

#include <assert.h>

namespace TL { namespace Acotes {

    /* ****************************************************************
     * * CompilerPhase management
     * ****************************************************************/    
    
    /**
     * Constructor.
     */
    AcotesMainCompilerPhase::AcotesMainCompilerPhase() 
    {
    }
    
    /**
     * Destructor.
     */
    AcotesMainCompilerPhase::~AcotesMainCompilerPhase() {
    }
    
    /**
     * AcotesCompilerPhase implementation.
     */
    void 
    AcotesMainCompilerPhase::run(DTO& data_flow)
    {
        // get the translation_unit tree
        AST_t translation_unit = data_flow["translation_unit"];
        // get the scope_link
        ScopeLink scope_link = data_flow["scope_link"];
        // Get the global_scope
        Scope global_scope = scope_link.get_scope(translation_unit);

        // Instantiate a DepthTraverse
        DepthTraverse depth_traverse;

        PredicateAST<LANG_IS_FUNCTION_DEFINITION> functionCallPred;

        depth_traverse.add_predicate(functionCallPred, *this);

        // Parse everything
        depth_traverse.traverse(translation_unit, scope_link);
    }


    
    /* ****************************************************************
     * * CompilerPhase events
     * ****************************************************************/
    
    
    /* ****************************************************************
     * * TraverseFunction management
     * ****************************************************************/    

    /**
     * Travese functor implementation.
     */
    void 
    AcotesMainCompilerPhase::preorder(Context ctx, AST_t node)
    {
    }

    /**
     * TraverseFunctor implementation.
     */
    void 
    AcotesMainCompilerPhase::postorder(Context ctx, AST_t node)
    {
        FunctionDefinition functionDefinition(node, ctx.scope_link);
        DeclaredEntity declaration= functionDefinition.get_declared_entity();
        Symbol symbol= declaration.get_declared_symbol();
        std::string name= symbol.get_name();
        std::string main= "main";
        if (name == main) {
            ObjectList<ParameterDeclaration> parameters= declaration.get_parameter_declarations();
            
            Source acotesMainSource;
            acotesMainSource << "int acotescc__main(";
            for (unsigned i= 0; i < parameters.size(); i++) {
                if (i > 0) {
                    acotesMainSource << ",";
                }
                ParameterDeclaration parameter= parameters.at(i);
                acotesMainSource << parameter.prettyprint();
            }
            acotesMainSource << ")";
            acotesMainSource << "{";
            acotesMainSource << functionDefinition.get_function_body().prettyprint();
            acotesMainSource << "return 0;";
            acotesMainSource << "}";
            AST_t acotesMain= acotesMainSource.parse_global(functionDefinition.get_ast(), functionDefinition.get_scope_link());
            functionDefinition.prepend_sibling(acotesMain);
            
            Source mainSource;
            mainSource << "int main(int argc, char**argv";
            for (unsigned i= 2; i < parameters.size(); i++) {
                if (i > 0) {
                    mainSource << ",";
                }
                ParameterDeclaration parameter= parameters.at(i);
                mainSource << parameter.prettyprint();
            }
            mainSource << ")"
                    << "{"
                    << "  int result;"
                    << "   trace_app_begin(argv[0]);"
                    << "   result= acotescc__main(";
            if (parameters.size() > 0) {
                mainSource << "argc";
            }
            if (parameters.size() > 1) {
                mainSource << ", argv";
            }
            for (unsigned i= 2; i < parameters.size(); i++) {
                if (i > 0) {
                    mainSource << ",";
                }
                ParameterDeclaration parameter= parameters.at(i);
                mainSource << parameter.get_name().prettyprint();
            }
            mainSource << ");"
                    << "   trace_app_end();"
                    << "  return result;"
                    << "}"
                    ;
            AST_t main= mainSource.parse_global(functionDefinition.get_ast(), functionDefinition.get_scope_link());
            functionDefinition.get_ast().replace(main);
        }
    }

    
    
} /* end namespace Acotes */ } /* end namespace TL */
