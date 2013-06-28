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
// 
// File:   tl-teamreplicatetransform.h
// Author: drodenas
//
// Created on 1 / gener / 2008, 18:35
//

#ifndef _TL_TEAMREPLICATETRANSFORM_H
#define	_TL_TEAMREPLICATETRANSFORM_H

#include <string>

namespace TL { namespace Acotes {
    
    class TeamReplicate;
    
    class TeamReplicateTransform {
    // -- Transform
    public:
        static void transform(TeamReplicate* teamReplicate);
    private:
        static void transformReplacement(TeamReplicate* teamReplicate);
        
    // -- Generation
    public:
        static std::string generateReplicate(TeamReplicate* teamReplicate);
    private:
        static std::string generateReplacement(TeamReplicate* teamReplicate);

    // -- No Constructor
    private:
        TeamReplicateTransform();
    };
    
    
} /* end namespace Acotes */ } /* end namespace TL */


#endif	/* _TL_TEAMREPLICATETRANSFORM_H */

