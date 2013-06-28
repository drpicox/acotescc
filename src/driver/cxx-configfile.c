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
#include "cxx-configfile.h"
#include "cxx-utils.h"
#include "cxx-driver.h"
#include <stdio.h>
#include <string.h>

// Set source language
int config_set_language(struct compilation_configuration_tag* config, char* value)
{
    if (strcasecmp(value, "c") == 0)
    {
        config->source_language = SOURCE_LANGUAGE_C;
    }
    else if (strcasecmp(value, "c++") == 0)
    {
        config->source_language = SOURCE_LANGUAGE_CXX;
    }
    else
    {
        fprintf(stderr, "Unknown language '%s' assuming C++\n", value);
        config->source_language = SOURCE_LANGUAGE_CXX;
    }
    return 0;
}

// Set additional mcxx options
int config_set_options(struct compilation_configuration_tag* config, char* value)
{
    int num;
    char** blank_separated_options = blank_separate_values(value, &num);

    num++;
    char** real_options = calloc(num, sizeof(*real_options));

    int i;
    for (i = 1; i < num; i++)
    {
        real_options[i] = blank_separated_options[i - 1];
    }

    
    // Change the current configuration otherwise we will handle the parameters
    // in the wrong profile
    struct compilation_configuration_tag* previous = compilation_process.current_compilation_configuration;
    compilation_process.current_compilation_configuration = config;

    real_options[0] = strdup("mcxx");

    parse_arguments(num, real_options, /* from_command_line= */ 0);

    // Restore the original one
    compilation_process.current_compilation_configuration = previous;

    return 0;
}

// Set preprocessor name
int config_set_preprocessor_name(struct compilation_configuration_tag* config, char* value)
{
    config->preprocessor_name = strdup(value);
    return 0;
}

// Set preprocessor options
int config_set_preprocessor_options(struct compilation_configuration_tag* config, char* value)
{
    // config->preprocessor_options = blank_separate_values(value, &num);

    int num;
    char** blank_separated_options = blank_separate_values(value, &num);

    add_to_parameter_list(&config->preprocessor_options, blank_separated_options, num);

    return 0;
}

// Set native compiler name
int config_set_compiler_name(struct compilation_configuration_tag* config, char* value)
{
    config->native_compiler_name = strdup(value);
    return 0;
}

// Set native compiler options
int config_set_compiler_options(struct compilation_configuration_tag* config, char* value)
{
    int num;
    char **blank_separated_options = blank_separate_values(value, &num);

    add_to_parameter_list(&config->native_compiler_options, blank_separated_options, num);
    return 0;
}

// Set linker name
int config_set_linker_name(struct compilation_configuration_tag* config, char* value)
{
    config->linker_name = strdup(value);
    return 0;
}

// Set linker options
int config_set_linker_options(struct compilation_configuration_tag* config, char* value)
{
    int num;
    char **blank_separated_options = blank_separate_values(value, &num);

    add_to_parameter_list(&config->linker_options, blank_separated_options, num);
    return 0;
}

int config_add_compiler_phase(struct compilation_configuration_tag* config, char* value)
{
    char* library_name = strdup(value);
    P_LIST_ADD(config->compiler_phases, 
            config->num_compiler_phases, 
            library_name);

    return 0;
}

int config_add_preprocessor_prefix(struct compilation_configuration_tag* config, char* value)
{
    if (strcasecmp(value, "gcc") == 0)
    {
        fprintf(stderr, "gcc is a reserved pragma prefix\n");
        return 1;
    }
    if (strcasecmp(value, "omp") == 0)
    {
        fprintf(stderr, "omp is a reserved pragma prefix\n");
        return 1;
    }
    
    // Reuse P_LIST_ADD
    int num_prefixes = config->num_pragma_custom_prefix;

    P_LIST_ADD(config->pragma_custom_prefix,
            config->num_pragma_custom_prefix,
            strdup(value));

    // Allocate pragma directive info
    pragma_directive_set_t* new_info = calloc(1, sizeof(*new_info));

    P_LIST_ADD(config->pragma_custom_prefix_info,
            num_prefixes, new_info);

    return 0;
}
