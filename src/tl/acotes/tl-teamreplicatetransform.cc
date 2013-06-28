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
#include "tl-teamreplicatetransform.h"

#include <assert.h>
#include <sstream>
#include "ac-teamreplicate.h"

namespace TL { namespace Acotes {
    
    /* ****************************************************************
     * * Transform
     * ****************************************************************/
    
    void TeamReplicateTransform::transform(TeamReplicate* teamReplicate)
    {
        assert(teamReplicate);
        
        transformReplacement(teamReplicate);
    }
    
    void TeamReplicateTransform::transformReplacement(TeamReplicate* teamReplicate)
    {
        assert(teamReplicate);
        
        TL::LangConstruct* construct= teamReplicate->getConstruct();
        AST_t ast= construct->get_ast();
        ScopeLink scopeLink= construct->get_scope_link();
    
        // Replace taskgroup construct
        Source replaceSource= generateReplacement(teamReplicate);
        AST_t replaceTree= replaceSource.parse_statement(ast, scopeLink);
        ast.replace(replaceTree);
    }
     
    
    
    /* ****************************************************************
     * * Generation
     * ****************************************************************/
    
    std::string TeamReplicateTransform::generateReplicate(TeamReplicate* teamReplicate)
    {
        std::stringstream ss;
     
        ss << teamReplicate->getBody()->prettyprint();
        
        return ss.str();
    }
    
    std::string TeamReplicateTransform::generateReplacement(TeamReplicate* teamReplicate)
    {
        std::stringstream ss;
     
        ss << teamReplicate->getBody()->prettyprint();
        
        return ss.str();
    }
        

    
    /* ****************************************************************
     * * No Constructor
     * ****************************************************************/
    
    TeamReplicateTransform::TeamReplicateTransform()
    {
        assert(0);
    }
    
    
} /* end namespace Acotes */ } /* end namespace TL */

