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
// File:   tl-variabletransform.h
// Author: drodenas
//
// Created on 24 / desembre / 2007, 14:55
//

#ifndef _TL_VARIABLETRANSFORM_H
#define	_TL_VARIABLETRANSFORM_H

#include <string>
#include <tl-langconstruct.hpp>

namespace TL { namespace Acotes {
    
    class Variable;
    
    class VariableTransform {
    // -- Transform
    public:
        static void transformReplacement(Variable* variable);
        
    // -- Generation
    public:
        static std::string generateVariable(Variable* variable);
        static std::string generateReference(Variable* variable);
        static std::string generateSizeof(Variable* variable);
        static std::string generateElementCount(Variable* variable);
        
    // -- No Constructor
    private:
        VariableTransform();
    };
    
    
} /* end namespace Acotes */ } /* end namespace TL */



#endif	/* _TL_VARIABLETRANSFORM_H */

