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
#include <stdio.h>

#include "cxx-graphviz.h"

#include "cxx-ast.h"

/*
   ****************************************************
   Graphviz Output
   ****************************************************
   http://www.graphviz.org/
 */

static int nodes_counter = 1000;
static void ast_dump_graphviz_rec(AST a, FILE* f, int parent_node, int position)
{
    // static char* octagon = "octagon";
    // static char* doubleoctagon = "doubleoctagon";
    static char* ellipse = "ellipse";
    static char* mdiamond = "Mdiamond";
    static char* box = "box";
    char* shape;

    int node_actual = nodes_counter++;
    if (a != NULL)
    {
        // Select shape
        shape = box;
        if (ASTType(a) == AST_AMBIGUITY) shape = ellipse;
        if (ASTType(a) == AST_NODE_LIST) shape = mdiamond;
        // if (a->construct_type == CT_SPECIFICATION) shape = ellipse;
        // else if (a->construct_type == CT_OMP_SPECIFICATION) shape = mdiamond;
        // else if (a->construct_type == CT_EXECUTABLE) shape = octagon;
        // else if (a->construct_type == CT_OMP_EXECUTABLE) shape = doubleoctagon;

        if (ASTText(a))
        {
            fprintf(f, "n%d[shape=%s,label=\"%s\\nNode=%p\\nParent=%p\\n%s\\nText: -%s-\"]\n", 
                    node_actual, shape, ast_print_node_type(ASTType(a)), a, ASTParent(a), ast_location(a), ASTText(a));
        }
        else
        {
            fprintf(f, "n%d[shape=%s,label=\"%s\\nNode=%p\\nParent=%p\\n%s\"]\n", 
                    node_actual, shape, ast_print_node_type(ASTType(a)), a, ASTParent(a), ast_location(a));
        }

        if (parent_node != 0)
        {
            fprintf(f, "n%d -> n%d [label=\"%d\"]\n", parent_node, node_actual, position);
        }


        if (ASTType(a) != AST_AMBIGUITY)
        {
            int i;
            for(i = 0; i < ASTNumChildren(a); i++)
            {
                ast_dump_graphviz_rec(ASTChild(a, i),f,  node_actual, i);
            }
        }
        else if (ASTType(a) == AST_AMBIGUITY)
        {
            int i;
            for(i = 0; i < ast_get_num_ambiguities(a); i++)
            {
                ast_dump_graphviz_rec(ast_get_ambiguity(a, i), f, node_actual, i);
            }
        }
    }
    else
    {
        fprintf(f, "n%d[shape=circle,label=\"\",fixedsize=true,style=filled,fillcolor=black,height=0.1,width=0.1]\n", node_actual);
        if (parent_node != 0)
        {
            fprintf(f, "n%d -> n%d [label=\"%d\"]\n", parent_node, node_actual, position);
        }
    }
}


void ast_dump_graphviz(AST a, FILE* f)
{
    fprintf(f, "digraph mcxx_ast { \n");
    ast_dump_graphviz_rec(a, f, 0, 0);
    fprintf(f, "}\n");
}
