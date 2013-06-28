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
// File:   tl-acoteslogger.h
// Author: drodenas
//
// Created on 18 / desembre / 2007, 20:29
//

#ifndef _TL_ACOTESLOGGER_H
#define	_TL_ACOTESLOGGER_H

#include <iostream>
#include <string>
#include <tl-langconstruct.hpp>

namespace TL { namespace Acotes {
    
    class AcotesLogger 
    {
    // -- Log methods
    public:
        static std::ostream& info(TL::LangConstruct* langConstruct);
        static std::ostream& debug(TL::LangConstruct* langConstruct);
        static std::ostream& warning(TL::LangConstruct* langConstruct);
        static std::ostream& error(const std::string& locus);
        static std::ostream& error(TL::LangConstruct* langConstruct);
        static int  getErrorCount() { return errorCount; }
        static bool wasAnyError() { return errorCount; }
    private:
        static int errorCount;
        
    // -- No instance
    private:
        AcotesLogger();
    };
    
} /* end namespace Acotes */ } /* end namespace TL */


#endif	/* _TL_ACOTESLOGGER_H */

