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
#include "tl-omptransform.hpp"

namespace TL
{
    namespace Nanos4
    {
        void OpenMPTransform::parallel_for_preorder(OpenMP::ParallelForConstruct parallel_for_construct)
        {
            ObjectList<OpenMP::ReductionSymbol> inner_reductions;
            inner_reductions_stack.push(inner_reductions);

            // Increase the parallel nesting value
            parallel_nesting++;

            common_parallel_data_sharing_code(parallel_for_construct);

            Statement construct_body = parallel_for_construct.body();
            // The construct is in fact a ForStatement in a #pragma omp parallel for
            ForStatement for_statement(construct_body);

            // The induction variable deserves special treatment
            Symbol induction_var = for_statement.get_induction_variable().get_symbol();
            induction_var_stack.push(induction_var);

            // Set it private if it was not
            if ((parallel_for_construct.get_data_attribute(induction_var) & OpenMP::DA_PRIVATE) != OpenMP::DA_PRIVATE)
            {
                ObjectList<Symbol>& private_references = 
                    parallel_for_construct.get_data<ObjectList<Symbol> >("private_references");
                // Set private
                parallel_for_construct.add_data_attribute(induction_var, OpenMP::DA_PRIVATE);

                // And insert into private references as well
                private_references.insert(induction_var);

                ObjectList<Symbol>& shared_references = 
                    parallel_for_construct.get_data<ObjectList<Symbol> >("shared_references");
                // Remove from shared references if it appears there
                shared_references = shared_references.not_find(induction_var);
            }
        }

        void OpenMPTransform::parallel_for_postorder(OpenMP::ParallelForConstruct parallel_for_construct)
        {
            // One more parallel seen
            num_parallels++;

            // Remove the induction var from the stack
            induction_var_stack.pop();

            // Decrease the parallel nesting level 
            parallel_nesting--;

            // Get the directive
            OpenMP::Directive directive = parallel_for_construct.directive();

            // Get the enclosing function definition
            FunctionDefinition function_definition = parallel_for_construct.get_enclosing_function();
            Scope function_scope = function_definition.get_scope();
            IdExpression function_name = function_definition.get_function_name();

            // This was computed in the preorder
            ObjectList<Symbol>& shared_references = 
                parallel_for_construct.get_data<ObjectList<Symbol> >("shared_references");
            ObjectList<Symbol>& private_references = 
                parallel_for_construct.get_data<ObjectList<Symbol> >("private_references");
            ObjectList<Symbol>& firstprivate_references = 
                parallel_for_construct.get_data<ObjectList<Symbol> >("firstprivate_references");
            ObjectList<Symbol>& lastprivate_references = 
                parallel_for_construct.get_data<ObjectList<Symbol> >("lastprivate_references");
            ObjectList<OpenMP::ReductionSymbol>& reduction_references =
                parallel_for_construct.get_data<ObjectList<OpenMP::ReductionSymbol> >("reduction_references");
            ObjectList<Symbol>& copyin_references = 
                parallel_for_construct.get_data<ObjectList<Symbol> >("copyin_references");
            ObjectList<Symbol>& copyprivate_references = 
                parallel_for_construct.get_data<ObjectList<Symbol> >("copyprivate_references");

            // Get the construct_body of the statement
            Statement construct_body = parallel_for_construct.body();
            // The construct is in fact a ForStatement in a #pragma omp parallel do
            ForStatement for_statement(construct_body);
            Statement loop_body = for_statement.get_loop_body();

            // Create the replacement map and the pass_by_pointer set
            ObjectList<ParameterInfo> parameter_info_list;
            ReplaceIdExpression replace_references = 
                set_replacements(function_definition,
                        directive,
                        loop_body,
                        shared_references,
                        private_references,
                        firstprivate_references,
                        lastprivate_references,
                        reduction_references,
                        inner_reductions_stack.top(),
                        copyin_references,
                        copyprivate_references,
                        parameter_info_list);

            // Get the outline function name
            Source outlined_function_name = get_outlined_function_name(function_name);

            // Create the outline for parallel for
            AST_t outline_code = get_outline_parallel_for(
                    parallel_for_construct,
                    function_definition,
                    outlined_function_name, 
                    for_statement,
                    loop_body,
                    replace_references,
                    parameter_info_list,
                    private_references,
                    firstprivate_references,
                    lastprivate_references,
                    reduction_references,
                    copyin_references,
                    copyprivate_references,
                    directive);

            // Now prepend the outline
            function_definition.get_ast().prepend_sibling_function(outline_code);

            OpenMP::Clause num_threads = directive.num_threads_clause();
            OpenMP::CustomClause groups_clause = directive.custom_clause("groups");

            Source instrument_code_before;
            Source instrument_code_after;
            if (instrumentation_requested())
            {
                instrument_code_before
                    << "const int EVENT_PARALLEL = 60000001;"
                    << "const int VALUE_PARALLEL_FOR = 1;"
                    << "mintaka_event(EVENT_PARALLEL, VALUE_PARALLEL_FOR);"
                    << "mintaka_state_schedule();"
                    ;
                instrument_code_after
                    << "const int VALUE_PARALLEL_CLOSE = 0;"
                    << "mintaka_event(EVENT_PARALLEL, VALUE_PARALLEL_CLOSE);"
                    << "mintaka_state_run();"
                    ;
            }

            AST_t spawn_code = get_parallel_spawn_code(
                    parallel_for_construct.get_ast(),
                    function_definition,
                    parallel_for_construct.get_scope(),
                    parallel_for_construct.get_scope_link(),
                    parameter_info_list,
                    reduction_references,
                    num_threads,
                    groups_clause,
                    instrument_code_before,
                    instrument_code_after
                    );

            // Discard inner reduction information
            inner_reductions_stack.pop();

            // Replace all the whole construct with spawn_code
            parallel_for_construct.get_ast().replace(spawn_code);
        }

        // Create outline for parallel for
        AST_t OpenMPTransform::get_outline_parallel_for(
                OpenMP::Construct &construct,
                FunctionDefinition function_definition,
                Source outlined_function_name,
                ForStatement for_statement,
                Statement /* loop_body */,
                ReplaceIdExpression replace_references,
                ObjectList<ParameterInfo> parameter_info_list,
                ObjectList<Symbol> private_references,
                ObjectList<Symbol> firstprivate_references,
                ObjectList<Symbol> lastprivate_references,
                ObjectList<OpenMP::ReductionSymbol> reduction_references,
                ObjectList<Symbol> copyin_references,
                ObjectList<Symbol> copyprivate_references,
                OpenMP::Directive directive
                )
        {
            // empty
            ObjectList<IdExpression> pass_by_value;

            Source empty;
            Source outline_parallel_for;
            Source parallel_for_body;

            // Get the source of the common parallel X outline
            outline_parallel_for = get_outline_common(
                    function_definition,
                    parallel_for_body,
                    outlined_function_name,
                    parameter_info_list);

            Source private_declarations = get_privatized_declarations(
                    construct,
                    private_references,
                    firstprivate_references,
                    lastprivate_references,
                    reduction_references,
                    copyin_references,
                    parameter_info_list
                    ); 

            Source loop_distribution = get_loop_distribution_code(for_statement, 
                    replace_references, function_definition, directive);

            Source lastprivate_code;

            if (!lastprivate_references.empty())
            {
                Source lastprivate_assignments = get_lastprivate_assignments(
                        lastprivate_references, 
                        copyprivate_references,
                        parameter_info_list);

                lastprivate_code
                    << "if (intone_last != 0)"
                    << "{"
                    <<    lastprivate_assignments
                    << "}"
                    ;
            }

            // Barrier is already done at parallel level
            Source loop_finalization = get_loop_finalization(/* do_barrier = */ false);

            Source reduction_update = get_reduction_update(reduction_references);

            Source task_block_code;

            parallel_for_body 
                << private_declarations
                << loop_distribution
                << lastprivate_code
                << reduction_update
                << loop_finalization
                << task_block_code
                ;

            task_block_code = get_task_block_code();

            return finish_outline(function_definition, outline_parallel_for, parameter_info_list);
        }
    }
}
