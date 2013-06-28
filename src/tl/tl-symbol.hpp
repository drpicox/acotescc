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
#ifndef TL_SYMBOL_HPP
#define TL_SYMBOL_HPP

#include <string>
#include <vector>
#include <sstream>
#include "tl-ast.hpp"
#include "tl-object.hpp"
#include "tl-type.hpp"
#include "cxx-scope.h"

namespace TL
{
    class Type;
    class Scope;
    
    //! \addtogroup Wrap 
    //! @{
    
    //! This class wraps a symbolic entity in the compiler
    class Symbol : public Object
    {
        public:
            scope_entry_t* _symbol;

        private:
            virtual tl_type_t* get_extended_attribute(const std::string&) const
            {
                return NULL;
            }

        public:
            //! Returns an invalid symbol
            static const Symbol invalid();

            //! States whether this is an invalid symbol
            bool is_invalid() const;

            //! States whether this is a valid symbol
            bool is_valid() const;

            Symbol(scope_entry_t* symbol)
                : _symbol(symbol)
            {
            }

            //! Constructs a Symbol after a reference to Object
            Symbol(RefPtr<Object> obj)
            {
                RefPtr<Symbol> pint = RefPtr<Symbol>::cast_dynamic(obj);
                if (pint.get_pointer() != NULL)
                {
                    this->_symbol = pint->_symbol;
                }
                else
                {
                    if (typeid(*obj.get_pointer()) != typeid(Undefined))
                    {
                        std::cerr << "Bad initialization of Symbol" << std::endl;
                    }
                    this->_symbol = NULL;
                }
            }

            //! Gets the type related to this symbol
            Type get_type() const;
            //! Gets the unqualified name of the symbol
            std::string get_name() const;

            //! Returns a fully qualified name
            /*
             * \remark This function will give bogus names to templates parameters. Use get_qualified_name(Scope)
             * instead.
             */
            std::string get_qualified_name() const;
            //! Returns a fully qualified name
            /*
             * \param sc Scope used to lookup template parameter names
             */
            std::string get_qualified_name(Scope sc) const;

            //! Gets the scope where this symbol is defined
            Scope get_scope() const;

            virtual ~Symbol()
            {
            }

            //! States whether is a symbol
            virtual bool is_symbol() const
            {
                return true;
            }

            bool operator<(Symbol s) const;
            bool operator==(Symbol s) const;
            bool operator!=(Symbol s) const;
            Symbol& operator=(Symbol s);

            //! States whether this symbol is a variable
            bool is_variable() const;
            //! States whether this symbol is a typedef
            bool is_typedef() const;
            //! States whether this symbol is a name of a type
            bool is_typename() const;
            //! States whether this symbol is a function
            bool is_function() const;
            //! States whether this symbol is a template function
            bool is_template_function() const;
            //! States whether this symbol is a parameter of a function
            bool is_parameter() const;
            //! Returns the position of this parameter
            int get_parameter_position() const;

            //! States if this is a member entity
            bool is_member() const;
            //! Returns the class to which this member belongs
            Type get_class_type() const;

            //! Returns the point where this symbol was declared
            AST_t get_point_of_declaration() const;

            //! States whether this symbol has been initialized
            bool has_initialization() const;
            //! Returns the initialization tree
            AST_t get_initialization() const;

            //! States whether this symbol is static
            bool is_static() const;
            //! States whether this symbol is register
            bool is_register() const;

            //! States whether this symbol is extern
            /*!
            * \bug : This only holds if the 'extern' qualifier was given
            * in the declaration of the symbol but global symbols
            * without it are 'extern' too. Using 'is_static' is better
            * till this gets fixed
            */
            bool is_extern() const;

            //! States whether this symbol is mutable
            bool is_mutable() const;
            // States whether this template is exported
            /*
             * \bug The compiler does not honour this flag (it will always return false)
             */
            bool is_exported_template() const;

            //! States whether this function was defined inline
            bool is_inline() const;

            //! States whether this member function was defined as virtual
            bool is_virtual() const;

            //! States whether this member function is a pure virtual function
            bool is_pure() const;

            //! States whether this member function is a conversion function
            bool is_conversion_function() const;

            //! States whether this member function is a constructor
            bool is_constructor() const;

            //! States whether this member function is a constructor flagged as explicit
            bool is_explicit_constructor() const;

            //! States whether the symbol has been defined in namespace scope
            bool has_namespace_scope() const;
            //! States whether the symbol has been defined in block scope
            bool has_block_scope() const;
            //! This is an alias for has_block_scope
            bool has_local_scope() const; 
            //! States whether the symbol has been defined in class scope
            /*!
             * This is roughly equivalent to a member symbol
             */
            bool has_class_scope() const;
            //! States whether this symbol has template scope
            /*!
             * Only template parameters should have template scope
             */
            bool has_template_scope() const;
            //! States whether this symbol has prototype scope
            /*!
             * Named parameter declarations of functional declarators have
             * prototype scope only if the declaration itself is not a function
             * definition.
             */
            bool has_prototype_scope() const;

            //! States whether the symbol is actually a builtin of the compiler
            bool is_builtin() const;

            //! States whether the symbol has been create because of a typedef
            //against an unnamed struct/enum
            /*!
             * @code
             * typedef struct { int b; } A;
             * @endcode
             *
             * Symbol 'A' will be created as a class-name (and not as a
             * typedef-name) because of typedef against the unnamed struct
             */
            bool is_created_after_typedef() const;
    };
    
    //! @}
}

#endif // TL_SYMBOL_HPP
