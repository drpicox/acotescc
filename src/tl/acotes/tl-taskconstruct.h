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
// File:   tl-taskconstruct.h
// Author: drodenas
//
// Created on 19 / desembre / 2007, 16:01
//

#ifndef _TL_TASKCONSTRUCT_H
#define	_TL_TASKCONSTRUCT_H

#include <tl-langconstruct.hpp>
#include <tl-pragmasupport.hpp>

namespace TL { namespace Acotes {
    
    class Task;
    
    class TaskConstruct
    : public TL::PragmaCustomConstruct
    {
    // -- LangConstruct support
    public:
        TaskConstruct(TL::LangConstruct langConstruct);
    private:
        TL::LangConstruct getBody();
        TL::LangConstruct getConstruct();

    // -- CompilerPhase events
    public:
        void onPre();
        void onPost();
    private:
        void onPreTeam(Task* task);
        void onPreState(Task* task);
        void onPreCopyInState(Task* task);
        void onPreCopyOutState(Task* task);
        void onPreInitializeState(Task* task);
        void onPreFinalizeState(Task* task);
        void onPreInputPort(Task* task);
        void onPreInputReplicatePort(Task* task);
        void onPreOutputPort(Task* task);
        void onPreBypass(Task* task);
        void onPreAsync(Task* task);
        void onPreSync(Task* task);
        void onForReplicate(Task* task);
    };
    
} /* end namespace Acotes */ } /* end namespace TL */


#endif	/* _TL_TASKCONSTRUCT_H */

