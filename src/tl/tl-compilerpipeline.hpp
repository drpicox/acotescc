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
#ifndef TL_COMPILERPIPELINE_HPP
#define TL_COMPILERPIPELINE_HPP

#include "tl-object.hpp"
#include "tl-objectlist.hpp"

#include <map>

namespace TL
{
    //! Class containing the configurations registered in the compiler configuration
    /*!
     * This class allows to retrieve the available configurations of the compiler. 
     * It also is useful to get the name of the current configuration.
     */
    class CompilationConfiguration
    {
        public:
            //! List of available configurations
            static ObjectList<std::string> get_configuration_names();

            //! Current compiler configuration
            static std::string get_current_configuration();
    };

    //! This class represents a compiled file.
    /*!
     * This class is useful when dealing with multifile
     * or when some information about the current compiled file is required
     */
    class CompiledFile
    {
        private:
            //! The file name of the current compiled file
            std::string _filename;
        protected:
        public:
            //! Returns the full filename
            /*!
             * \param fullpath States whether the result should contain a full * path or just the base name of the file
             */
            std::string get_filename(bool fullpath = false) const;

            //! Creates a new CompiledFile object
            /*!
             * This does not influence the compiler pipeline. It justs creates
             * the wrapper
             */
            CompiledFile(const std::string &str);

            bool operator==(const CompiledFile& rhs)
            {
                return (_filename == rhs._filename);
            }
    };

    //! This class represents the compilation process
    /*!
     * This class allows adding new files to the compilation process.
     * Besides returning CompiledFile objects, add_file functions
     * will add the file for further compilation. This is useful in
     * multifile
     */
    class CompilationProcess
    {
        private:
            static std::map<std::string, CompiledFile> _file_map;
        public:
            //! Add a file to the compiler pipeline
            /*!
             * \param file_path The file path of the added file
             */
            static CompiledFile add_file(
                    const std::string& file_path
                    );
            //! Add a file to the compiler pipeline
            /*!
             * \param file_path The file path of the added file
             * \param new_file It will be set to true if the file is the first time is referenced in the compiler pipeline
             */
            static CompiledFile add_file(
                    const std::string& file_path,
                    bool &new_file
                    );
            //! Add a file to the compiler pipeline with a given configuration
            /*!
             * \param file_path The file path of the added file
             * \param configuration_name The name of a configuration as returned by CompilationConfiguration::get_configuration_names
             */
            static CompiledFile add_file(
                    const std::string& file_path,
                    const std::string& configuration_name
                    );
            //! Add a file to the compiler pipeline with a given configuration
            /*!
             * \param file_path The file path of the added file
             * \param configuration_name The name of a configuration as returned by CompilationConfiguration::get_configuration_names
             * \param new_file It will be set to true if the file is the first time is referenced in the compiler pipeline
             */
            static CompiledFile add_file(
                    const std::string& file_path, 
                    const std::string& configuration_name, 
                    bool &new_file
                    );
            //! Gets the current compiled file
            static CompiledFile get_current_file();
    };

}

#endif // TL_COMPILERPIPELINE_HPP
