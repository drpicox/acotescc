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
#include "tl-omp.hpp"
#include "tl-builtin.hpp"
#include "tl-ast.hpp"
#include "tl-source.hpp"
#include "tl-scopelink.hpp"
#include "tl-traverse.hpp"
#include "tl-predicateutils.hpp"
#include "cxx-attrnames.h"

namespace TL
{
   namespace OpenMP
   {
       DataSharing::DataSharing(DataSharing *enclosing)
           : _num_refs(new int(1)), 
           _map(new std::map<Symbol, DataAttribute>),
           _enclosing(enclosing)
       {
           if (_enclosing != NULL)
           {
               (*_enclosing->_num_refs)++;
           }
       }

       DataSharing::~DataSharing()
       {
           (*_num_refs)--;
           if (*_num_refs == 0)
           {
               if (_enclosing != NULL)
               {
                   (*_enclosing->_num_refs)--;
               }

               delete _map;
               delete _num_refs;
           }
       }

       DataSharing::DataSharing(const DataSharing& ds)
           : _num_refs(ds._num_refs),
           _map(ds._map),
           _enclosing(ds._enclosing)
       {
           (*_num_refs)++;
           if (_enclosing != NULL)
           {
               (*_enclosing->_num_refs)++;
           }
       }

       void DataSharing::set(Symbol sym, DataAttribute data_attr)
       {
           (_map->operator[](sym)) = data_attr;
       }

       DataAttribute DataSharing::get_internal(Symbol sym)
       {
           std::map<Symbol, DataAttribute>::iterator it = _map->find(sym);
           if (it == _map->end())
           {
               return DA_UNDEFINED;
           }
           else
           {
               return it->second;
           }
       }

       DataAttribute DataSharing::get(Symbol sym)
       {
           DataSharing *current = this;

           DataAttribute result = OpenMP::DA_UNDEFINED;

           while (current != NULL
                   && result == OpenMP::DA_UNDEFINED)
           {
               result = get_internal(sym);
               current = current->_enclosing;
           }

           return result;
       }

       Directive Construct::directive()
       {
           AST_t ast = _ref.get_attribute(OMP_CONSTRUCT_DIRECTIVE);
           return Directive(ast, _scope_link);
       }

       Statement Construct::body()
       {
           AST_t ast = _ref.get_attribute(OMP_CONSTRUCT_BODY);
           Statement result(ast, _scope_link);

           return result;
       }

       void Construct::set_data_attribute(Symbol sym, DataAttribute data_attr)
       {
           ERROR_CONDITION ((_data_sharing == NULL),
                   "Data sharing not defined for this construct", 0);

           ERROR_CONDITION(data_attr == DA_UNDEFINED,
                   "Invalid data sharing attribute", 0);

           if (_data_sharing->get(sym) != DA_UNDEFINED)
           {
               std::cerr << "Warning setting twice the data attribute for symbol '" 
                   << sym.get_name() << "'" << std::endl;
           }

           _data_sharing->set(sym, data_attr);
       }

       void Construct::add_data_attribute(Symbol sym, DataAttribute data_attr)
       {
           ERROR_CONDITION ((_data_sharing == NULL),
                   "Data sharing not defined for this construct", 0);

           ERROR_CONDITION(data_attr == DA_UNDEFINED,
                   "Invalid data sharing attribute", 0);

           DataAttribute prev_data_attr = _data_sharing->get(sym);

           _data_sharing->set(sym, (DataAttribute)(data_attr | prev_data_attr));
       }

       DataAttribute Construct::get_data_attribute(Symbol sym) const
       {
           DataAttribute result = DA_UNDEFINED;

           const Construct* current_construct = this;

           while (result == DA_UNDEFINED
                   && current_construct != NULL)
           {
               DataSharing *current_data_sharing = current_construct->_data_sharing;

               result = current_data_sharing->get(sym);

               current_construct = current_construct->_enclosing_construct;
           }

           return result;
       }

       void CustomConstructFunctor::dispatch_custom_construct(CustomFunctorMap& search_map, Context ctx, AST_t node)
       {
           TL::Bool is_directive = node.get_attribute(OMP_IS_CUSTOM_DIRECTIVE);
           TL::Bool is_construct = node.get_attribute(OMP_IS_CUSTOM_CONSTRUCT);

           AST_t directive;
           if (is_construct)
           {
               directive = node.get_attribute(OMP_CONSTRUCT_DIRECTIVE);
           }
           else
           {
               directive = node;
           }

           TL::String directive_name = directive.get_attribute(OMP_CUSTOM_DIRECTIVE_NAME);
           CustomConstruct *custom_construct = NULL; 

           if (&search_map == &_custom_functor_pre)
           {
               Construct* enclosing_construct = NULL;
               DataSharing *enclosing_data_sharing = &_global_data_sharing;

               if (!construct_stack.empty())
               {
                   enclosing_construct = construct_stack.top().current_construct;
                   enclosing_data_sharing = &(enclosing_construct->get_data_sharing());
               }

               // We are in preorder
               custom_construct = new CustomConstruct(node, ctx.scope_link, 
                       enclosing_construct, enclosing_data_sharing);

               ConstructInfo current_construct_info;
               current_construct_info.current_construct = custom_construct;

               Directive directive = custom_construct->directive();

               ObjectList<std::string> clauses_names = directive.get_all_custom_clauses();

               for (ObjectList<std::string>::iterator it = clauses_names.begin();
                       it != clauses_names.end();
                       it++)
               {
                   clause_locus_t p(*it, directive.get_ast().get_locus());
                   current_construct_info.clause_list.push_back(p);
               }

               construct_stack.push(current_construct_info);
           }
           else if (&search_map == &_custom_functor_post)
           {
               ERROR_CONDITION( (construct_stack.empty()),
                       "Stack of OpenMP constructs is empty in the postorder", 0);

               // We are in postorder
               custom_construct = static_cast<CustomConstruct*>(construct_stack.top().current_construct);
           }
           else
           {
               internal_error("Unreachable code", 0);
           }

           ERROR_CONDITION(custom_construct == NULL,
                   "Custom construct is NULL", 0);

           // Find this directive in custom map
           if (search_map.find(directive_name) != search_map.end())
           {
               // Invoke its functor if found
               Signal1<CustomConstruct>& functor = search_map[directive_name];

               functor.signal(*custom_construct);
           }
           else
           {
               // Kludge: If we are in preorder and not handled, and postorder
               // it is not handled either then warning
               if (&search_map == &_custom_functor_pre)
               {
                   if (_custom_functor_post.find(directive_name) == _custom_functor_post.end())
                   {
                       std::cerr << "Custom OpenMP construct '" << directive_name << "' in " 
                           << node.get_locus() << " is not currently handled" << std::endl;
                   }
               }
           }

           // We are in postorder
           if (&search_map == &_custom_functor_post)
           {
               ConstructInfo &current_construct_info = construct_stack.top();
               // Emit a warning for every unused one
               for (ObjectList<clause_locus_t>::iterator it = current_construct_info.clause_list.begin();
                       it != current_construct_info.clause_list.end();
                       it++)
               {
                   std::cerr << "Warning: Clause '" << it->first << "' unused in OpenMP directive at " << it->second << std::endl;
               }

               construct_stack.pop();
           }
       }

       void CustomConstructFunctor::preorder(Context ctx, AST_t node)
       {
           dispatch_custom_construct(_custom_functor_pre, ctx, node);
       }

       void CustomConstructFunctor::postorder(Context ctx, AST_t node)
       {
           dispatch_custom_construct(_custom_functor_post, ctx, node);
       }

       void OpenMPPhase::run(DTO& data_flow)
       {
           // get the translation_unit tree
           translation_unit = data_flow["translation_unit"];
           // get the scope_link
           scope_link = data_flow["scope_link"];
           // Get the global_scope
           global_scope = scope_link.get_scope(translation_unit);

           // Instantiate a DepthTraverse
           DepthTraverse depth_traverse;

           // Functor for #pragma omp parallel
           PredicateAST<OMP_IS_PARALLEL_CONSTRUCT> parallel_construct;
           ParallelFunctor parallel_functor(on_parallel_pre, on_parallel_post, global_data_sharing);
           // Register the #pragma omp parallel 
           // filter with its functor
           depth_traverse.add_predicate(parallel_construct, parallel_functor);

           // Functor for #pragma omp parallel for
           PredicateAST<OMP_IS_PARALLEL_FOR_CONSTRUCT> parallel_for_construct;
           ParallelForFunctor parallel_for_functor(on_parallel_for_pre, on_parallel_for_post, global_data_sharing);
           // Register the #pragma omp parallel for
           // filter with its functor 
           depth_traverse.add_predicate(parallel_for_construct, parallel_for_functor);

           // Functor for #pragma omp for
           PredicateAST<OMP_IS_FOR_CONSTRUCT> for_construct;
           ForFunctor for_functor(on_for_pre, on_for_post, global_data_sharing);
           // Register the #pragma omp parallel for
           // filter with its functor 
           depth_traverse.add_predicate(for_construct, for_functor);

           // #pragma omp parallel sections
           PredicateAST<OMP_IS_PARALLEL_SECTIONS_CONSTRUCT> parallel_sections_construct;
           ParallelSectionsFunctor parallel_sections_functor(on_parallel_sections_pre, 
                   on_parallel_sections_post, global_data_sharing);
           depth_traverse.add_predicate(parallel_sections_construct, parallel_sections_functor);
           
           // pragma omp sections
           PredicateAST<OMP_IS_SECTIONS_CONSTRUCT> sections_construct;
           SectionsFunctor sections_functor(on_sections_pre, on_sections_post, global_data_sharing);
           depth_traverse.add_predicate(sections_construct, sections_functor);

           // #pragma omp section
           PredicateAST<OMP_IS_SECTION_CONSTRUCT> section_construct;
           SectionFunctor section_functor(on_section_pre, on_section_post, global_data_sharing);
           depth_traverse.add_predicate(section_construct, section_functor);

           // #pragma omp barrier
           PredicateAST<OMP_IS_BARRIER_DIRECTIVE> barrier_directive;
           BarrierFunctor barrier_functor(on_barrier_pre, on_barrier_post, global_data_sharing);
           depth_traverse.add_predicate(barrier_directive, barrier_functor);

           // #pragma omp atomic
           PredicateAST<OMP_IS_ATOMIC_CONSTRUCT> atomic_construct;
           AtomicFunctor atomic_functor(on_atomic_pre, on_atomic_post, global_data_sharing);
           depth_traverse.add_predicate(atomic_construct, atomic_functor);

           // #pragma omp critical
           PredicateAST<OMP_IS_CRITICAL_CONSTRUCT> critical_construct;
           CriticalFunctor critical_functor(on_critical_pre, on_critical_post, global_data_sharing);
           depth_traverse.add_predicate(critical_construct, critical_functor);

           // #pragma omp parallel single
           PredicateAST<OMP_IS_PARALLEL_SINGLE_CONSTRUCT> parallel_single_construct;
           ParallelSingleFunctor parallel_single_functor(on_parallel_single_pre, on_parallel_single_post, global_data_sharing);
           depth_traverse.add_predicate(parallel_single_construct, parallel_single_functor);

           // #pragma omp single
           PredicateAST<OMP_IS_SINGLE_CONSTRUCT> single_construct;
           SingleFunctor single_functor(on_single_pre, on_single_post, global_data_sharing);
           depth_traverse.add_predicate(single_construct, single_functor);

           // #pragma omp flush
           PredicateAST<OMP_IS_FLUSH_DIRECTIVE> flush_directive;
           FlushFunctor flush_functor(on_flush_pre, on_flush_post, global_data_sharing);
           depth_traverse.add_predicate(flush_directive, flush_functor);

           // #pragma omp threadprivate
           PredicateAST<OMP_IS_THREADPRIVATE_DIRECTIVE> threadprivate_directive;
           ThreadPrivateFunctor threadprivate_functor(on_threadprivate_pre, on_threadprivate_post, global_data_sharing);
           depth_traverse.add_predicate(threadprivate_directive, threadprivate_functor);

           // #pragma omp ordered
           PredicateAST<OMP_IS_ORDERED_CONTRUCT> ordered_construct;
           OrderedFunctor ordered_functor(on_ordered_pre, on_ordered_post, global_data_sharing);
           depth_traverse.add_predicate(ordered_construct, ordered_functor);

           // #pragma omp master
           PredicateAST<OMP_IS_MASTER_CONSTRUCT> master_construct;
           MasterFunctor master_functor(on_master_pre, on_master_post, global_data_sharing);
           depth_traverse.add_predicate(master_construct, master_functor);

           // #pragma omp constructs|directives
           // (custom constructions)
           PredicateAST<OMP_IS_CUSTOM_CONSTRUCT> custom_construct;
           CustomConstructFunctor custom_construct_functor(on_custom_construct_pre, on_custom_construct_post, global_data_sharing);
           depth_traverse.add_predicate(custom_construct, custom_construct_functor);
           PredicateAST<OMP_IS_CUSTOM_DIRECTIVE> custom_directive;
           depth_traverse.add_predicate(custom_directive, custom_construct_functor);

           // Let the user register its slots
           this->init();

           // Traverse in a depth-first fashion the AST
           depth_traverse.traverse(translation_unit, scope_link);
       }

       void OpenMPPhase::init()
       {
       }

       void OpenMPPhase::register_directive(const std::string& str)
       {
           register_new_directive("omp", str.c_str(), false);
       }

       void OpenMPPhase::register_construct(const std::string& str)
       {
           register_new_directive("omp", str.c_str(), true);
       }

       Clause Directive::nowait_clause()
       {
           Clause result(_ref, _scope_link, OMP_IS_NOWAIT_CLAUSE);
           return result;
       }

       bool Clause::is_defined()
       {
           PredicateAttr predicate_clause(_clause_filter_name);
           ObjectList<AST_t> clauses = _ref.depth_subtrees().filter(predicate_clause);

           return (!clauses.empty());
       }

       DefaultClause Directive::default_clause()
       {
           class DefaultClausePredicate : public Predicate<AST_t>
           {
               public:
                   virtual bool operator()(AST_t& ast) const
                   {
                       TL::Bool attr1 = ast.get_attribute(OMP_IS_DEFAULT_NONE_CLAUSE);
                       TL::Bool attr2 = ast.get_attribute(OMP_IS_DEFAULT_SHARED_CLAUSE);
                       TL::Bool attr3 = ast.get_attribute(OMP_IS_DEFAULT_CUSTOM_CLAUSE);

                       return attr1 || attr2 || attr3;
                   }
                   virtual ~DefaultClausePredicate() { }
           };

           DefaultClausePredicate default_clause_predicate;

           ObjectList<AST_t> clauses = _ref.depth_subtrees().filter(default_clause_predicate);

           if (clauses.empty())
           {
               AST_t empty;
               DefaultClause result(empty, _scope_link);

               return result;
           }
           else
           {
               DefaultClause result(*(clauses.begin()), _scope_link);

               return result;
           }
       }

       Clause Directive::parameter_clause()
       {
           Clause result(_ref, _scope_link, OMP_IS_PARAMETER_CLAUSE);

           return result;
       }

       Clause Directive::shared_clause()
       {
           Clause result(_ref, _scope_link, OMP_IS_SHARED_CLAUSE);
           return result;
       }

       Clause Directive::private_clause()
       {
           Clause result(_ref, _scope_link, OMP_IS_PRIVATE_CLAUSE);
           return result;
       }

       Clause Directive::firstprivate_clause()
       {
           Clause result(_ref, _scope_link, OMP_IS_FIRSTPRIVATE_CLAUSE);
           return result;
       }

       Clause Directive::copyin_clause()
       {
           Clause result(_ref, _scope_link, OMP_IS_COPYIN_CLAUSE);
           return result;
       }

       Clause Directive::copyprivate_clause()
       {
           Clause result(_ref, _scope_link, OMP_IS_COPYPRIVATE_CLAUSE);
           return result;
       }

       Clause Directive::lastprivate_clause()
       {
           Clause result(_ref, _scope_link, OMP_IS_LASTPRIVATE_CLAUSE);
           return result;
       }

       Clause Directive::num_threads_clause()
       {
           Clause result(_ref, _scope_link, OMP_IS_NUM_THREADS_CLAUSE);
           return result;
       }

       CustomClause Directive::custom_clause(const std::string& name)
       {
           ObjectList<std::string> names;
           names.append(name);

           return custom_clause(names);
       }

       // Definition of construct_stack
       construct_stack_t construct_stack;

       CustomClause Directive::custom_clause(ObjectList<std::string>& names)
       {
           CustomClause result(names, _ref, _scope_link);

           // Copy
           ObjectList<clause_locus_t> new_referenced_clauses = construct_stack.top().clause_list;

           // And put again only those that were not mentioned
           construct_stack.top().clause_list.clear();

           for (ObjectList<clause_locus_t>::iterator it = new_referenced_clauses.begin();
                   it != new_referenced_clauses.end();
                   it++)
           {
               if (!names.contains(it->first))
               {
                   construct_stack.top().clause_list.push_back(*it);
               }
           }

           return result;
       }

       ObjectList<std::string> Directive::get_all_custom_clauses()
       {
           PredicateAST<OMP_IS_CUSTOM_CLAUSE> predicate_custom_clause;
           ObjectList<AST_t> clauses_list = _ref.depth_subtrees(predicate_custom_clause);
           ObjectList<std::string> result;

           for (ObjectList<AST_t>::iterator it = clauses_list.begin();
                   it != clauses_list.end();
                   it++)
           {
               TL::String clause_name_attr = it->get_attribute(OMP_CUSTOM_CLAUSE_NAME);
               result.insert(clause_name_attr);
           }

           return result;
       }

       ScheduleClause Directive::schedule_clause()
       {
           ScheduleClause result(_ref, _scope_link);
           return result;
       }

       bool ScheduleClause::is_defined()
       {
           PredicateAST<OMP_IS_SCHEDULE_CLAUSE> predicate_custom_clause;
           ObjectList<AST_t> clauses_list = _ref.depth_subtrees(predicate_custom_clause);

           return !(clauses_list.empty());
       }

       int ScheduleClause::internal_code()
       {
           PredicateAST<OMP_IS_SCHEDULE_CLAUSE> predicate_custom_clause;
           ObjectList<AST_t> clauses_list = _ref.depth_subtrees(predicate_custom_clause);

           AST_t first = *(clauses_list.begin());

           TL::Integer result = first.get_attribute(OMP_SCHEDULE_KIND);

           return result;
       }

       bool ScheduleClause::is_dynamic()
       {
           PredicateAST<OMP_IS_SCHEDULE_CLAUSE> predicate_custom_clause;
           ObjectList<AST_t> clauses_list = _ref.depth_subtrees(predicate_custom_clause);

           AST_t first = *(clauses_list.begin());

           TL::Integer result = first.get_attribute(OMP_SCHEDULE_KIND);

           return (result == 2);
       }

       bool ScheduleClause::is_static()
       {
           PredicateAST<OMP_IS_SCHEDULE_CLAUSE> predicate_custom_clause;
           ObjectList<AST_t> clauses_list = _ref.depth_subtrees(predicate_custom_clause);

           AST_t first = *(clauses_list.begin());

           TL::Integer result = first.get_attribute(OMP_SCHEDULE_KIND);

           return (result == 1);
       }

       bool ScheduleClause::is_guided()
       {
           PredicateAST<OMP_IS_SCHEDULE_CLAUSE> predicate_custom_clause;
           ObjectList<AST_t> clauses_list = _ref.depth_subtrees(predicate_custom_clause);

           AST_t first = *(clauses_list.begin());

           TL::Integer result = first.get_attribute(OMP_SCHEDULE_KIND);

           return (result == 4);
       }

       bool ScheduleClause::is_runtime()
       {
           PredicateAST<OMP_IS_SCHEDULE_CLAUSE> predicate_custom_clause;
           ObjectList<AST_t> clauses_list = _ref.depth_subtrees(predicate_custom_clause);

           AST_t first = *(clauses_list.begin());

           TL::Integer result = first.get_attribute(OMP_SCHEDULE_KIND);

           return (result == 8);
       }

       bool ScheduleClause::is_default()
       {
           PredicateAST<OMP_IS_SCHEDULE_CLAUSE> predicate_custom_clause;
           ObjectList<AST_t> clauses_list = _ref.depth_subtrees(predicate_custom_clause);

           AST_t first = *(clauses_list.begin());

           TL::Integer result = first.get_attribute(OMP_SCHEDULE_KIND);

           return (result == 0);
       }

       AST_t ScheduleClause::get_chunk()
       {
           PredicateAST<OMP_IS_SCHEDULE_CLAUSE> predicate_custom_clause;
           ObjectList<AST_t> clauses_list = _ref.depth_subtrees(predicate_custom_clause);

           AST_t first = *(clauses_list.begin());

           AST_t ast = first.get_attribute(OMP_SCHEDULE_CHUNK);
           return ast;
       }

       bool ScheduleClause::is_custom_schedule()
       {
           PredicateAST<OMP_IS_SCHEDULE_CLAUSE> predicate_custom_clause;
           ObjectList<AST_t> clauses_list = _ref.depth_subtrees(predicate_custom_clause);

           AST_t first = *(clauses_list.begin());

           TL::Integer result = first.get_attribute(OMP_SCHEDULE_KIND);

           return (result == 0);
       }

       std::string ScheduleClause::custom_schedule()
       {
           if (is_custom_schedule())
           {

               PredicateAST<OMP_IS_SCHEDULE_CLAUSE> predicate_custom_clause;
               ObjectList<AST_t> clauses_list = _ref.depth_subtrees(predicate_custom_clause);

               AST_t first = *(clauses_list.begin());

               TL::String str = first.get_attribute(OMP_SCHEDULE_CUSTOM_NAME);

               return str;
           }
           else 
               return "not a custom schedule";
       }

       ObjectList<AST_t> CustomClause::filter_custom_clause()
       {
           class PredicateCustomClause : public Predicate<AST_t>
           {
               private:
                   PredicateAttr _custom_clause;
                   // const std::string& _clause_name;
                   ObjectList<std::string>& _clause_names;

               public:
                   PredicateCustomClause(ObjectList<std::string>& clause_names)
                       : _custom_clause(OMP_IS_CUSTOM_CLAUSE), _clause_names(clause_names)
                   {
                   }

                   virtual bool operator()(AST_t& t) const
                   {
                       if (_custom_clause(t))
                       {
                           TL::String clause_name_attr = t.get_attribute(OMP_CUSTOM_CLAUSE_NAME);

                           for (ObjectList<std::string>::iterator it = _clause_names.begin();
                                   it != _clause_names.end();
                                   it++)
                           {
                               if (clause_name_attr.compare_case_insensitive_to(*it))
                               {
                                   return true;
                               }
                           }

                           return false;
                       }
                       else return false;
                   }
           };

           PredicateCustomClause predicate_custom_clause(_clause_names);

           ObjectList<AST_t> result = _ref.depth_subtrees(predicate_custom_clause);

           return result;
       }

       bool CustomClause::is_defined()
       {
           ObjectList<AST_t> clauses = filter_custom_clause();

           return (!clauses.empty());
       }

       // Time to start to think to fuse Clause and CustomClause in an inheritance tree
       ObjectList<Expression> Clause::get_expression_list()
       {
           PredicateAST<LANG_IS_EXPRESSION_NEST> expression_nest;
           ObjectList<Expression> result;

           PredicateAttr predicate_clause(_clause_filter_name);
           ObjectList<AST_t> clauses = _ref.depth_subtrees().filter(predicate_clause);

           for (ObjectList<AST_t>::iterator it = clauses.begin();
                   it != clauses.end();
                   it++)
           {
               ObjectList<AST_t> expression_nest_list = it->depth_subtrees(expression_nest, AST_t::NON_RECURSIVE);

               for (ObjectList<AST_t>::iterator it2 = expression_nest_list.begin();
                       it2 != expression_nest_list.end();
                       it2++)
               {
                   Expression expr(*it2, _scope_link);
                   result.append(expr);
               }
           }

           return result;
       }

       ObjectList<Expression> CustomClause::get_expression_list()
       {
           PredicateAST<LANG_IS_EXPRESSION_NEST> expression_nest;
           ObjectList<Expression> result;

           ObjectList<AST_t> custom_clauses = filter_custom_clause();
           for (ObjectList<AST_t>::iterator it = custom_clauses.begin();
                   it != custom_clauses.end();
                   it++)
           {
               ObjectList<AST_t> expression_nest_list = it->depth_subtrees(expression_nest, AST_t::NON_RECURSIVE);

               for (ObjectList<AST_t>::iterator it2 = expression_nest_list.begin();
                       it2 != expression_nest_list.end();
                       it2++)
               {
                   Expression expr(*it2, _scope_link);
                   result.append(expr);
               }
           }

           return result;
       }

       ObjectList<IdExpression> CustomClause::id_expressions(IdExpressionCriteria criteria)
       {
           PredicateAST<LANG_IS_ID_EXPRESSION> id_expr_pred;

           ObjectList<AST_t> clauses = filter_custom_clause();

           ObjectList<IdExpression> result;
           GetSymbolFromAST get_symbol_from_ast(this->_scope_link);

           for(ObjectList<AST_t>::iterator it = clauses.begin();
                   it != clauses.end();
                   it++)
           {
               ObjectList<AST_t> id_expressions = it->depth_subtrees().filter(id_expr_pred);

               for (ObjectList<AST_t>::iterator jt = id_expressions.begin();
                       jt != id_expressions.end();
                       jt++)
               {
                   Symbol sym = get_symbol_from_ast(*jt);

                   bool eligible = false;

                   switch (criteria)
                   {
                       case ALL_FOUND_SYMBOLS :
                           eligible = true;
                           break;
                       case VALID_SYMBOLS :
                           eligible = sym.is_valid();
                           break;
                       case INVALID_SYMBOLS :
                           eligible = !sym.is_valid();
                           break;
                   }

                   if (eligible)
                   {
                       IdExpression id_expr(*jt, this->_scope_link);
                       result.append(id_expr);
                   }
               }
           }

           return result;
       }

       ReductionClause Directive::reduction_clause()
       {
           ReductionClause result(_ref, _scope_link);
           return result;
       }

       bool DefaultClause::is_none() const
       {
           return _ref.is_valid() 
               && TL::Bool(_ref.get_attribute(OMP_IS_DEFAULT_NONE_CLAUSE));
       }

       bool DefaultClause::is_shared() const
       {
           return _ref.is_valid() 
               && TL::Bool(_ref.get_attribute(OMP_IS_DEFAULT_SHARED_CLAUSE));
       }

       bool DefaultClause::is_private() const
       {
           ObjectList<std::string> private_name;
           private_name.append("private");

           return this->is_custom(private_name);
       }

       bool DefaultClause::is_custom(const std::string& str) const
       {
           ObjectList<std::string> list;
           list.append(str);

           return is_custom(list);
       }

       bool DefaultClause::is_custom(ObjectList<std::string>& names) const
       {
           bool result = false;
           if (_ref.is_valid())
           {
               for (ObjectList<std::string>::iterator it = names.begin();
                       it != names.end() && !result;
                       it++)
               {
                   bool is_custom = _ref.get_attribute(OMP_IS_DEFAULT_CUSTOM_CLAUSE);
                   std::string default_custom = "";
                   if (is_custom)
                   {
                       TL::String default_custom = _ref.get_attribute(OMP_DEFAULT_CUSTOM_CLAUSE);
                       result = (default_custom == *it);
                   }
               }
           }

           return result;
       }

       bool DefaultClause::is_defined() const
       {
           return _ref.is_valid();
       }

       ObjectList<IdExpression> Clause::id_expressions(IdExpressionCriteria criteria)
       {
           PredicateAST<LANG_IS_ID_EXPRESSION> id_expr_pred;

           PredicateAttr predicate_clause(_clause_filter_name);
           ObjectList<AST_t> clauses = _ref.depth_subtrees().filter(predicate_clause);

           ObjectList<IdExpression> result;
           GetSymbolFromAST get_symbol_from_ast(this->_scope_link);

           for(ObjectList<AST_t>::iterator it = clauses.begin();
                   it != clauses.end();
                   it++)
           {
               ObjectList<AST_t> id_expressions = it->depth_subtrees();

               id_expressions = id_expressions.filter(id_expr_pred);

               for (ObjectList<AST_t>::iterator jt = id_expressions.begin();
                       jt != id_expressions.end();
                       jt++)
               {
                   Symbol sym = get_symbol_from_ast(*jt);

                   bool eligible = false;

                   switch (criteria)
                   {
                       case ALL_FOUND_SYMBOLS :
                           eligible = true;
                           break;
                       case VALID_SYMBOLS :
                           eligible = sym.is_valid();
                           break;
                       case INVALID_SYMBOLS :
                           eligible = !sym.is_valid();
                           break;
                   }

                   if (eligible)
                   {
                       IdExpression id_expr(*jt, this->_scope_link);
                       result.append(id_expr);
                   }
               }
           }

           return result;
       }

       ObjectList<ReductionSymbol> ReductionClause::id_expressions(IdExpressionCriteria criteria)
       {
           PredicateAST<LANG_IS_ID_EXPRESSION> id_expr_pred;

           ObjectList<ReductionSymbol> result;
           GetSymbolFromAST get_symbol_from_ast(this->_scope_link);

           PredicateAttr reduction_clause_predicate(OMP_IS_REDUCTION_CLAUSE);

           ObjectList<AST_t> reduction_clauses = _ref.depth_subtrees().filter(reduction_clause_predicate);

           for (ObjectList<AST_t>::iterator it = reduction_clauses.begin();
                   it != reduction_clauses.end();
                   it++)
           {
               AST_t reduction_clause = *it;

               AST_t reduct_entity;

               TL::Bool is_user_defined = it->get_attribute(OMP_IS_USER_DEFINED_REDUCTION);

               if (is_user_defined)
               {
                   reduct_entity = it->get_attribute(OMP_REDUCTION_FUNCTION);
               }
               else
               {
                   reduct_entity = it->get_attribute(OMP_REDUCTION_OPERATOR);
               }


               AST_t reduct_neuter = it->get_attribute(OMP_REDUCTION_NEUTER);

               AST_t reduct_vars = it->get_attribute(OMP_REDUCTION_VARIABLES);

               ObjectList<AST_t> reduct_references = reduct_vars.depth_subtrees().filter(id_expr_pred);

               for (ObjectList<AST_t>::iterator jt = reduct_references.begin();
                       jt != reduct_references.end();
                       jt++)
               {
                   Symbol sym = get_symbol_from_ast(*jt);

                   bool eligible = false;

                   switch (criteria)
                   {
                       case ALL_FOUND_SYMBOLS :
                           eligible = true;
                           break;
                       case VALID_SYMBOLS :
                           eligible = sym.is_valid();
                           break;
                       case INVALID_SYMBOLS :
                           eligible = !sym.is_valid();
                           break;
                   }

                   if (eligible)
                   {
                       IdExpression id_expr(*jt, this->_scope_link);
                       ReductionSymbol reduct_id_expr(sym, reduct_entity, reduct_neuter, is_user_defined);

                       result.append(reduct_id_expr);
                   }
               }
           }

           return result;
       }
   }

}
