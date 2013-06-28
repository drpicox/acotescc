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
// File:   tl-peektransform.h
// Author: drodenas
//
// Created on 7 / gener / 2008, 10:35
//

#ifndef _TL_PEEKTRANSFORM_H
#define	_TL_PEEKTRANSFORM_H

#include <string>

namespace TL { namespace Acotes {
    
    class Peek;
    
    class PeekTransform
    {
    // -- Transform 
    public:
        static void transform(Peek* peek);
    private:
        static void transformConstruct(Peek* peek);
        static void transformHistory(Peek* peek);
        static void transformIndex(Peek* peek);

    // -- Generation
    public:
    private:

    // -- No Constructor
    private:
        PeekTransform();
    };
    
} /* end namespace Acotes */ } /* end namespace TL */



#endif	/* _TL_PEEKTRANSFORM_H */

