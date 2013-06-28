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
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "cxx-scopelink.h"
#include "cxx-ast.h"
#include "cxx-scope.h"
#include "cxx-utils.h"

struct scope_link_tag
{
    Hash* h;
    decl_context_t global_decl_context;
};

typedef struct scope_link_entry_tag
{
    decl_context_t decl_context;
} scope_link_entry_t;

scope_link_t* scope_link_new(decl_context_t global_decl_context)
{
    scope_link_t* result = calloc(1, sizeof(*result));

    result->h = hash_create(HASH_SIZE, HASHFUNC(pointer_hash), KEYCMPFUNC(integer_comp));
    result->global_decl_context = global_decl_context;

    return result;
}

decl_context_t scope_link_get_global_decl_context(scope_link_t* sl)
{
    return sl->global_decl_context;
}

void scope_link_set(scope_link_t* sl, AST a, decl_context_t decl_context)
{
    DEBUG_CODE()
    {
        fprintf(stderr, "SCOPELINK: Linking node '%s' with scope '%p'\n", 
                ast_location(a),
                decl_context.current_scope);
    }

    if (a == NULL)
        return;

    scope_link_entry_t* new_entry = calloc(1, sizeof(*new_entry));

    new_entry->decl_context = decl_context;

    hash_put(sl->h, a, new_entry);
}

static scope_link_entry_t* scope_link_get(scope_link_t* sl, AST a)
{
    scope_link_entry_t* result = NULL;

    while (a != NULL)
    {
        scope_link_entry_t* entry = (scope_link_entry_t*)hash_get(sl->h, a);

        if (entry != NULL)
        {
            result = entry;
            break;
        }

        a = ASTParent(a);
    }

    return result;
}

decl_context_t scope_link_get_decl_context(scope_link_t* sl, AST a)
{
    scope_link_entry_t* entry = scope_link_get(sl, a);

    if (entry == NULL)
        return sl->global_decl_context;
    return 
        entry->decl_context;
}

char scope_link_direct_get_scope(scope_link_t* sl, AST a, decl_context_t *decl_result)
{
    scope_link_entry_t* result = (scope_link_entry_t*)hash_get(sl->h, a);

    if (result != NULL)
    {
        *decl_result = result->decl_context;
        return 1;
    }
    else
    {
        return 0;
    }
}
