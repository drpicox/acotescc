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
#ifndef TL_SOURCE_T_HPP
#define TL_SOURCE_T_HPP

#include <string>
#include "tl-object.hpp"
#include "tl-ast.hpp"
#include "tl-scope.hpp"
#include "tl-scopelink.hpp"
#include "tl-refptr.hpp"
#include "cxx-lexer.h"
#include "cxx-driver.h"
#include "cxx-scope.h"
#include "cxx-buildscope.h"

namespace TL
{
    class Source;

    //! Auxiliar class used by Source
    class SourceChunk
    {
        private:
            int _refcount;
        public:
            virtual std::string get_source() const = 0;
            virtual ~SourceChunk() { } 
            virtual bool is_source_text() { return false; }
            virtual bool is_source_ref() { return false; }

            SourceChunk()
                : _refcount(1)
            {
            }

            void obj_reference()
            {
                this->_refcount++;
            }

            void obj_unreference()
            {
                this->_refcount--;

                if (this->_refcount == 0)
                {
                    delete this;
                }
            }
    };

    //! A chunk of literal text
    class SourceText : public SourceChunk
    {
        private:
            std::string _source;
        public:
            virtual std::string get_source() const
            {
                return _source;
            }

            SourceText(const std::string& str)
                : _source(str)
            {
            }

            virtual ~SourceText() { } 

            virtual bool is_source_text() { return true; }

            friend class Source;
    };

    //! A chunk that references another Source
    class SourceRef : public SourceChunk
    {
        private:
            RefPtr<Source> _src;
        public:
            SourceRef(RefPtr<Source> src)
                : _src(src)
            {
            }
            virtual std::string get_source() const;

            virtual ~SourceRef() { }

            virtual bool is_source_ref() { return true; }

            friend class Source;
    };

    typedef RefPtr<SourceChunk> SourceChunkRef;

    typedef RefPtr<ObjectList<SourceChunkRef> > chunk_list_ref_t;

    //! A class used to generate in, a convenient way, code in the compiler
    class Source : public Object
    {
        public:
            //! Flags that modify the behaviour of parsing
            enum ParseFlags
            {
                UNKNOWN = 0,
                DEFAULT = 1 << 0,
                //! Allows symbols be redefined, thus overwriting previous definitions
                ALLOW_REDECLARATION = 1 << 1,
                //! Does not check an expression
                DO_NOT_CHECK_EXPRESSION = 2 << 1,
            };
        private:
            chunk_list_ref_t _chunk_list;

            void append_text_chunk(const std::string& str);
            void append_source_ref(SourceChunkRef src);

            bool all_blanks() const;
            AST_t parse_declaration_inner(TL::Scope ctx, TL::ScopeLink scope_link, ParseFlags parse_flags = DEFAULT);

            std::string format_source(const std::string&);
        public:
            //! Constructor
            /*!
             * Creates an empty source
             */
            Source()
                : _chunk_list(0)
            {
                _chunk_list = chunk_list_ref_t(new ObjectList<SourceChunkRef>());
            }

            virtual ~Source()
            {
            }

            //! Constructor
            /*!
             * Creates a source after a string.
             */
            Source(const std::string& str)
                : _chunk_list(0)
            {
                _chunk_list = chunk_list_ref_t(new ObjectList<SourceChunkRef>());
                _chunk_list->push_back(SourceChunkRef(new SourceText(str)));
            }

            //! Copy-constructor
            Source(const Source& src)
                // This is fine, we want to share the same source list for both
                : Object(src), _chunk_list(src._chunk_list)
            {
            }

            //! States that this is a source
            virtual bool is_source() const
            {
                return true;
            }
            
            //! Returns the textual information held by this Source
            /*!
             * Referenced Source objects in this one are recursively called their get_source
             * to form the whole text.
             */
            std::string get_source(bool with_newlines = false) const;
            
            //! Convenience function to build lists with separators
            /*!
             * If the original source is empty, no separator will be added.
             */
            Source& append_with_separator(const std::string& src, const std::string& separator);
            //! Convenience function to build lists with separators
            /*!
             * If the original source is empty, no separator will be added.
             */
            Source& append_with_separator(Source& src, const std::string& separator);

            //! Appends a reference to a Source in this object
            /*!
             * Do not create cyclic dependences of sources
             */
            Source& operator<<(Source& src);
            //! Appends a text chunk
            Source& operator<<(const std::string& str);
            //! Appends a text chunk after an integer
            /*!
             * \param n This integer is: converted into decimal base and appended as a string
             */
            Source& operator<<(int n);

            // -- deprecated family of parse_XXX
            //! Parses a top-level declaration in context of global scope
            /*!
             * \deprecated Instead use parse_global(AST_t, TL::ScopeLink)
             */
            AST_t parse_global(TL::Scope ctx, TL::ScopeLink scope_link) DEPRECATED;
            //! Parses this source as a statement
            /*!
             * \deprecated Instead use parse_statement(AST_t, TL::ScopeLink)
             */
            AST_t parse_statement(TL::Scope ctx, TL::ScopeLink scope_link) DEPRECATED;
            //! Parses this source as an expression
            /*!
             * \deprecated Instead use parse_expression(AST_t, TL::ScopeLink)
             */
            AST_t parse_expression(TL::Scope ctx) DEPRECATED;
            //! Parses this source as an expression
            /*!
             * \deprecated Instead use parse_expression(AST_t, TL::ScopeLink)
             */
            AST_t parse_expression(TL::Scope ctx, TL::ScopeLink scope_link) DEPRECATED;
            //! Parses this source as a declaration
            /*!
             * \deprecated Instead use parse_declaration(AST_t, TL::ScopeLink)
             */
            AST_t parse_declaration(TL::Scope ctx, TL::ScopeLink scope_link, ParseFlags parse_flags = DEFAULT) DEPRECATED;
            //! Parses this source as a member declaration
            /*!
             * \deprecated Instead use parse_member(AST_t, TL::ScopeLink)
             */
            AST_t parse_member(TL::Scope ctx, TL::ScopeLink scope_link, Type class_type) DEPRECATED;
            // -- end of deprecated family

            // -- new family of parse_XXX
            // These should work correctly in C++ as they are able to get the exact
            // declaration context of the reference tree (ref_tree)
            //! Parses a top-level declaration in context of global scope
            /*!
             * \param ref_tree Reference tree used when parsing this code
             * \param scope_link Scope link used to get the scope of \a ref_tree
             */
            AST_t parse_global(AST_t ref_tree, TL::ScopeLink scope_link);
            //! Parses a statement
            /*!
             * \param ref_tree Reference tree used when parsing this code
             * \param scope_link Scope link used to get the scope of \a ref_tree
             * \param parse_flags Parsing flags
             */
            AST_t parse_statement(AST_t ref_tree, TL::ScopeLink scope_link, ParseFlags parse_flags = DEFAULT);
            //! Parses an expression
            /*!
             * \param ref_tree Reference tree used when parsing this code
             * \param scope_link Scope link used to get the scope of \a ref_tree
             * \param parse_flags Parsing flags
             */
            AST_t parse_expression(AST_t ref_tree, TL::ScopeLink scope_link, ParseFlags parse_flags = DEFAULT);
            //! Parses a declaration
            /*!
             * \param ref_tree Reference tree used when parsing this code
             * \param scope_link Scope link used to get the scope of \a ref_tree
             * \param parse_flags Parsing flags
             */
            AST_t parse_declaration(AST_t ref_tree, TL::ScopeLink scope_link, ParseFlags parse_flags = DEFAULT);
            //! Parses a member declaration
            /*!
             * \param ref_tree Reference tree used when parsing this code
             * \param scope_link Scope link used to get the scope of \a ref_tree
             * \param class_type Class type where this member should belong to
             */
            AST_t parse_member(AST_t ref_tree, TL::ScopeLink scope_link, Type class_type);
            //! Convenience function to parse a type and synthesize it
            /*!
             * \param ref_tree Reference tree used when parsing this code
             * \param scope_link Scope link used to get the scope of \a ref_tree
             * \return The synthesized type
             */
            Type parse_type(AST_t ref_tree, TL::ScopeLink scope_link);
            // -- end of new family of parse_XXX

            //! States whether this Source is empty
            bool empty() const;

            bool operator==(const Source& src) const;
            bool operator!=(const Source& src) const;
            bool operator<(const Source& src) const;
            Source& operator=(const Source& src);
    };

    //! Creates an inner comment in the code
    /*!
     * When these are prettyprinted onto the output file
     * they are converted into normal C or C++ comments
     */
    std::string comment(const std::string& str);
    //! Creates an inner preprocessor line
    /*!
     * When these are prettyprinted onto the output file
     * they are converted into normal C or C++ preprocessor lines
     */
    std::string preprocessor_line(const std::string& str);

    //! Convenience function to convert a list into a string
    /*!
     * \param t List of elements of type T
     * \param to_str Function that gives a std::string after an object of type T
     * \param separator Separator that will be used to separe the strings
     * \return A single string with the result of \a to_str applied to all elements of \a t separated with \a separator
     */
    template <class T>
    std::string to_string(const ObjectList<T>& t, Functor<std::string, T>& to_str, const std::string& separator = "")
    {
        std::string result;

        for (typename ObjectList<T>::const_iterator it = t.begin();
                it != t.end();
                it++)
        {
            if (it != t.begin())
            {
                result = result + separator;
            }

            result = result + to_str(*it);
        }

        return result;
    }

    std::string to_string(const ObjectList<std::string>& t, const std::string& separator = "");
}

#endif // TL_SOURCE_T_HPP
