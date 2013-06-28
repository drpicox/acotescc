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
// File:   tl-peekconstruct.h
// Author: drodenas
//
// Created on 4 / gener / 2008, 16:33
//

#ifndef _TL_PEEKCONSTRUCT_H
#define	_TL_PEEKCONSTRUCT_H

#include <tl-langconstruct.hpp>
#include <tl-pragmasupport.hpp>

namespace TL { namespace Acotes {
    
    class PeekConstruct
    : TL::PragmaCustomConstruct
    {
    // -- LangConstruct support
    public:
        PeekConstruct(TL::LangConstruct langConstruct);
    private:
        TL::LangConstruct getBody();
        TL::LangConstruct getConstruct();

    // -- CompilerPhase events
    public:
        void onPre();
        void onPost();
    };
    
} /* end namespace Acotes */ } /* end namespace TL */


#endif	/* _TL_PEEKCONSTRUCT_H */

