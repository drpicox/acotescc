/*
    Cell/SMP superscalar Compiler
    Copyright (C) 2007 Barcelona Supercomputing Center

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; version 2.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef TL_SOURCE_BITS_HPP
#define TL_SOURCE_BITS_HPP


#include "tl-source.hpp"


namespace TL
{
	class SourceBits
	{
		public:
			static Type handle_superscalar_declarator(AST_t ref_tree, ScopeLink scope_link, std::string const &declarator_string, Symbol &original_symbol);
	};
	
}


#endif // TL_SOURCE_BITS_HPP
