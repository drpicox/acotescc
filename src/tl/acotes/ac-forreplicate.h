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
// File:   ac-forreplicate.h
// Author: drodenas
//
// Created on 3 / gener / 2008, 15:08
//

#ifndef _AC_FORREPLICATE_H
#define	_AC_FORREPLICATE_H


#include <tl-langconstruct.hpp>


namespace TL { namespace Acotes {

    class Task;
    
    class ForReplicate {
        
    // -- Creation
    public:
        static ForReplicate* create(TL::ForStatement* forStatement, Task* task);
    private:
        ForReplicate();
        
    // -- Task relationship
    public:
        Task* getTask() const { return task; }
    private:
        void setTask(Task* task);
        Task* task;
        
    // -- ForStatement handling
    public:
        TL::ForStatement getForStatement() const { return forStatement[0]; }
    private:
        void setForStatement(TL::ForStatement* forStatement);
        TL::ForStatement* forStatement;
    };
    
    
} /* end namespace TL */ } /* end namespace Acotes */


#endif	/* _AC_FORREPLICATE_H */

