/* stkcmp.h -- Header File for stkcmp.c
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
 */


/* Symbol Definitions */
extern Object Qstar;
extern Object Qplus;
extern Object Kcount;
extern Object Qeq;
extern Object Qevery;
extern Object Qfloat;
extern Object Qinteger;
extern Object Qlist;
extern Object Qmax;
extern Object Qmin;
extern Object Qnot;
extern Object Qnumber;
extern Object Qquote;
extern Object Qsequence;
extern Object Qspecial;
extern Object Qsymbol;
extern Object Ktest;
extern Object Qthe;
extern Object Ktype;
extern Object Qunsigned_byte;

extern Object Pclos;
extern Object Pclos_run;
extern Object Pclosx;
extern Object Pcl;
extern Object Pcl_user;
extern Object Pkeyword;
extern Object Ptrun;
extern Object Ptx;

/* function declarations */

#ifdef USE_PROTOTYPES

extern Object add_compiler_error_and_warning_frame_notes(void);
extern Object add_ensure_type_stack_node_instruction(Object,Object);
extern Object add_secondary_type_specifications(Object,Object);
extern Object adjust_nesting_of_inlining_data_received_value_compilations(Object);
extern Object allocate_byte_vector(Object);
extern Object allocate_byte_vector_16(Object);
extern Object analyze_compiled_items_for_consistency(Object);
extern Object assq_function(Object,Object);
extern Object attribute_previously_put_in_attribute_tables_p(int,...);
extern Object bytes_per_double_float_simple_array(Object);
extern Object can_accept_no_item_args(Object);
extern Object cdr_greater_p(Object,Object);
extern Object change_slot_value(int,...);
extern Object check_ensure_type_nodes(Object);
extern Object check_for_new_code_body_errors(void);
extern Object choose_optimized_evaluate_role_instruction(Object,Object,Object,Object,Object);
extern Object choose_preferred_stack_evaluator(Object);
extern Object choose_preferred_stack_instruction(Object);
extern Object choose_stack_node_instructions_and_types(int,...);
extern Object class_type_specification_p(Object);
extern Object clear_compiler_errors(void);
extern Object collect_special_and_source_subtree_alist(Object,Object);
extern Object compile_expression_cell_for_stack(Object,Object,Object);
extern Object compile_function_definition_for_stack(Object,Object,Object,Object);
extern Object compile_in_order_action(Object,Object,Object);
extern Object compile_in_order_actions(Object,Object,Object);
extern Object compile_in_order_every_action(Object,Object,Object);
extern Object compile_in_order_let_action(Object,Object,Object);
extern Object compile_rule_for_stack(Object,Object);
extern Object compile_simulation_formula_for_stack(Object,Object,Object,Object);
extern Object compile_simultaneous_actions(Object,Object,Object,Object,Object);
extern Object compile_simultaneous_every_action(Object,Object,Object,Object,Object);
extern Object compile_simultaneous_let_action(Object,Object,Object,Object,Object);
extern Object compile_stack_expression_into_nodes(Object,Object);
extern Object compiler_bug(int,...);
extern Object compiler_error(int,...);
extern Object compiler_warning(int,...);
extern Object compiler_warning_if_superseded_attribute(Object);
extern Object convert_description_list_to_managed_array(int,...);
extern Object convert_designation_to_stack_node_tree(Object);
extern Object convert_expression_to_stack_node_tree(Object);
extern Object copy_as_wide_string(Object);
extern Object copy_evaluation_float_from_phrase_float(Object);
extern Object copy_evaluation_long_from_phrase_long(Object);
extern Object copy_evaluation_value_1(Object);
extern Object copy_for_phrase(Object);
extern Object copy_for_slot_value(Object);
extern Object copy_if_evaluation_value_1(Object);
extern Object copy_list_using_gensym_conses_1(Object);
extern Object copy_out_current_wide_string(void);
extern Object datum_type_specification_p(Object);
extern Object datum_type_specifications_could_be_coerced_p(Object,Object);
extern Object dependent_compilation_p(int,...);
extern Object designation_operator_or_giver_of_value_p(Object);
extern Object emit_allow_no_item_for_evaluator_byte_codes(Object,Object,Object);
extern Object emit_already_consed_instruction(Object);
extern Object emit_already_consed_instruction_to_stream(Object,Object);
extern Object emit_branch_long_byte_codes(Object,Object);
extern Object emit_branch_long_if_known_byte_codes(Object,Object);
extern Object emit_branch_or_jump(Object);
extern Object emit_branch_or_jump_if_not_true(Object,Object);
extern Object emit_byte_code_vector_for_procedure(Object,Object);
extern Object emit_coerce_to_datum_byte_codes(Object,Object);
extern Object emit_coerce_to_datum_or_unknown_byte_codes(Object,Object);
extern Object emit_evaluate_role_byte_codes(Object,Object,Object,Object,Object,Object,Object);
extern Object emit_evaluate_role_with_no_domain_byte_codes(Object,Object,Object);
extern Object emit_funcall_evaluator_byte_codes(Object,Object);
extern Object emit_funcall_instruction_byte_codes(int,...);
extern Object emit_move_from_surrounding_local_var_byte_codes(Object,Object);
extern Object emit_name_reference_byte_codes(Object,Object,Object);
extern Object emit_operator_of_type(Object,Object,Object);
extern Object emit_pop_copy_down_the_stack_byte_codes(Object,Object);
extern Object emit_pop_into_surrounding_local_var_byte_codes(Object,Object);
extern Object emit_pop_values_byte_codes(Object,Object);
extern Object emit_push_cached_item_byte_codes(Object,Object,Object);
extern Object emit_push_constant_byte_codes(Object,Object);
extern Object emit_push_from_surrounding_local_var_byte_codes(Object,Object);
extern Object emit_push_nones_byte_codes(Object,Object);
extern Object emit_push_value_or_none_from_surrounding_local_var_byte_codes(Object,Object);
extern Object emit_stack_node_tree(Object,Object);
extern Object emit_stack_node_tree_or_nil(Object,Object);
extern Object emit_type_check_byte_codes(Object,Object);
extern Object ensure_argument_types_satisfy_operators(Object,Object);
extern Object evaluation_value_type(Object);
extern Object float_contagion_stack_operator_p(Object);
extern Object g2_list_or_array_class_element_type(Object,Object);
extern Object g2_toggle_evaluate_role_inline(Object);
extern Object generate_float_vector(Object);
extern Object generate_list_of_lexically_visible_code_bodies(Object);
extern Object generate_new_goto_tag(void);
extern Object generate_new_stack_arg_var_spot(Object,Object);
extern Object generate_new_stack_frame_var_spot(Object);
extern Object generate_new_variable_spot(int,...);
extern Object gensym_cons_1(Object,Object);
extern Object gensym_list_2(Object,Object);
extern Object get_current_annotation_context(Object);
extern Object get_denoted_item_name_if_any(Object);
extern Object get_name_provided_by_role(Object);
extern Object getfq_function_no_default(Object,Object);
extern Object inlining_context_qm(void);
extern Object install_free_references_in_byte_code_body(Object,Object);
extern Object interned_conclude_attribute_binding_symbol(void);
extern Object invalidate_static_evaulate_role_dispatcher(void);
extern Object lengthw(Object);
extern Object lookup_or_generate_var_spot_index_for_local_name(Object);
extern Object make_binary_stack_argument_nodes(Object,Object,Object);
extern Object make_byte_code_body_1(Object,Object,Object,Object,Object);
extern Object make_byte_code_stream_1(void);
extern Object make_class_type_specification(Object);
extern Object make_compiler_code_body_entry_1(Object,Object);
extern Object make_dummy_stack_node(void);
extern Object make_evaluation_float_from_evaluation_long(int,...);
extern Object make_evaluation_long(Object);
extern Object make_evaluation_quantity(Object);
extern Object make_phrase_list(Object);
extern Object make_procedure_byte_code_constants(Object);
extern Object make_pseudo_instruction_stream_1(void);
extern Object make_stack_argument_nodes(Object,Object,Object);
extern Object make_stack_node_1_1(Object,Object);
extern Object make_stack_node_combining_arguments(Object,Object,Object,Object,Object);
extern Object make_stack_node_instruction_1_1(Object,Object);
extern Object make_type_specification_for_iteration_state(void);
extern Object make_type_specification_intersection(Object,Object);
extern Object make_type_specification_union(Object,Object);
extern Object mal_formed_stack_designation(Object);
extern Object mal_formed_stack_expression(Object);
extern Object maybe_add_no_item(Object,Object);
extern Object maybe_add_no_item_implies_unknown(Object,Object);
extern Object maybe_add_unknown(Object,Object);
extern Object memq_function(Object,Object);
extern Object merge_pseudo_instruction_stream(Object);
extern Object merge_pseudo_instruction_streams(Object,Object);
extern Object more_general_argument_list_description_p(Object,Object);
extern Object most_general_argument_type_list(Object);
extern Object most_general_primary_type(Object,Object);
extern Object mutate_global_property(Object,Object,Object);
extern Object name_rooted_attribute_only_designation_p(Object);
extern Object nary_operator_stack_implemented_as_binary(Object);
extern Object node_type_produces_argument_type_p(Object,Object);
extern Object optimize_procedure_instructions(Object,Object);
extern Object pair_role_with_depth(Object);
extern Object phrase_cons(Object,Object);
extern Object phrase_list_2(Object,Object);
extern Object phrase_list_3(Object,Object,Object);
extern Object phrase_list_4(Object,Object,Object,Object);
extern Object primary_type_of_type_specification(Object);
extern Object print_role(Object);
extern Object quantifier_requires_previous_reference_p(Object);
extern Object reclaim_byte_code_stream_1(Object);
extern Object reclaim_compiler_code_body_entry_1(Object);
extern Object reclaim_gensym_cons_1(Object);
extern Object reclaim_goto_tag_entry_1(Object);
extern Object reclaim_if_evaluation_value_1(Object);
extern Object reclaim_managed_simple_long_array_of_length_1(Object);
extern Object reclaim_stack_list_of_nodes(Object);
extern Object reclaim_text_string(Object);
extern Object record_free_reference(Object,Object);
extern Object record_free_references_of_role(int,...);
extern Object record_free_references_of_role_given_domain_name(Object,Object);
extern Object record_system_variable(Object,Object,Object,Object,Object,Object,Object);
extern Object redundant_parameter_free_reference_qm(Object,Object);
extern Object register_tag_in_byte_code_stream(int,...);
extern Object remove_compiler_error_and_warning_frame_notes(void);
extern Object remove_spurious_free_references_for_function_compilation(Object);
extern Object replenish_gensym_cons_pool(void);
extern Object resolve_procedure_byte_code_addresses(int,...);
extern Object resolve_stack_name_reference(Object);
extern Object rewrite_conclude_actions_in_action_list(Object,Object);
extern Object rewrite_contexts_for_stack_compile(Object);
extern Object rewrite_stack_node_trees_for_unknown(Object);
extern Object role_can_be_cached_qm(Object);
extern Object role_of_designation(Object);
extern Object set_balanced_binary_tree_entry(Object,Object,Object,Object,Object,Object,Object);
extern Object simple_role_of_role(Object);
extern Object simple_role_p(Object);
extern Object simulation_designation_can_be_cached_qm(Object,Object,Object);
extern Object stable_name_of_class_p(Object,Object,Object);
extern Object stable_name_p(int,...);
extern Object stack_evaluator_nodes_produce_types_p(Object,Object,Object,Object,Object);
extern Object static_role_dispatcher_less_than(Object,Object);
extern Object string_eq_w(Object,Object);
extern Object text_string_p(Object);
extern Object text_string_substring(Object,Object,Object);
extern Object tformat(int,...);
extern Object truth_value_phrase_p(Object);
extern Object truth_value_phrase_value(Object);
extern Object twrite_beginning_of_wide_string(Object,Object);
extern Object twrite_compiler_message_header(void);
extern Object type_of_global_or_local_name(Object);
extern Object type_specification_held_in_type(Object);
extern Object type_specification_minimal_required_type(Object,Object);
extern Object type_specification_minus_type(Object,Object);
extern Object type_specification_not_subtype_p(Object,Object);
extern Object type_specification_of_designation(Object);
extern Object type_specification_of_role(Object);
extern Object type_specification_returning_datum_type(int,...);
extern Object type_specification_returning_datum_type_or_unknown(int,...);
extern Object type_specification_subtype_p(Object,Object);
extern Object type_specification_union_minus_type(Object,Object);
extern Object type_specifications_could_be_coerced_p(Object,Object);
extern Object type_specifications_could_intersect_p(Object,Object);
extern Object unauthorized_system_slot_p(Object);
extern Object union_type_specification_p(Object);
extern Object valid_datum_type_specification_p(Object);
extern Object valid_type_specification_p(Object);
extern Object validate_static_evaulate_role_dispatcher(void);
extern Object var_spot_index_for_local_name(Object);
extern Object var_spot_index_or_global_name(Object);
extern Object var_spot_type(Object,Object);
extern Object variable_spot_and_description_for_local_name(Object);
extern Object write_byte_code_to_stream(Object,Object);

#else

extern Object add_compiler_error_and_warning_frame_notes();
extern Object add_ensure_type_stack_node_instruction();
extern Object add_secondary_type_specifications();
extern Object adjust_nesting_of_inlining_data_received_value_compilations();
extern Object allocate_byte_vector();
extern Object allocate_byte_vector_16();
extern Object analyze_compiled_items_for_consistency();
extern Object assq_function();
extern Object attribute_previously_put_in_attribute_tables_p();
extern Object bytes_per_double_float_simple_array();
extern Object can_accept_no_item_args();
extern Object cdr_greater_p();
extern Object change_slot_value();
extern Object check_ensure_type_nodes();
extern Object check_for_new_code_body_errors();
extern Object choose_optimized_evaluate_role_instruction();
extern Object choose_preferred_stack_evaluator();
extern Object choose_preferred_stack_instruction();
extern Object choose_stack_node_instructions_and_types();
extern Object class_type_specification_p();
extern Object clear_compiler_errors();
extern Object collect_special_and_source_subtree_alist();
extern Object compile_expression_cell_for_stack();
extern Object compile_function_definition_for_stack();
extern Object compile_in_order_action();
extern Object compile_in_order_actions();
extern Object compile_in_order_every_action();
extern Object compile_in_order_let_action();
extern Object compile_rule_for_stack();
extern Object compile_simulation_formula_for_stack();
extern Object compile_simultaneous_actions();
extern Object compile_simultaneous_every_action();
extern Object compile_simultaneous_let_action();
extern Object compile_stack_expression_into_nodes();
extern Object compiler_bug();
extern Object compiler_error();
extern Object compiler_warning();
extern Object compiler_warning_if_superseded_attribute();
extern Object convert_description_list_to_managed_array();
extern Object convert_designation_to_stack_node_tree();
extern Object convert_expression_to_stack_node_tree();
extern Object copy_as_wide_string();
extern Object copy_evaluation_float_from_phrase_float();
extern Object copy_evaluation_long_from_phrase_long();
extern Object copy_evaluation_value_1();
extern Object copy_for_phrase();
extern Object copy_for_slot_value();
extern Object copy_if_evaluation_value_1();
extern Object copy_list_using_gensym_conses_1();
extern Object copy_out_current_wide_string();
extern Object datum_type_specification_p();
extern Object datum_type_specifications_could_be_coerced_p();
extern Object dependent_compilation_p();
extern Object designation_operator_or_giver_of_value_p();
extern Object emit_allow_no_item_for_evaluator_byte_codes();
extern Object emit_already_consed_instruction();
extern Object emit_already_consed_instruction_to_stream();
extern Object emit_branch_long_byte_codes();
extern Object emit_branch_long_if_known_byte_codes();
extern Object emit_branch_or_jump();
extern Object emit_branch_or_jump_if_not_true();
extern Object emit_byte_code_vector_for_procedure();
extern Object emit_coerce_to_datum_byte_codes();
extern Object emit_coerce_to_datum_or_unknown_byte_codes();
extern Object emit_evaluate_role_byte_codes();
extern Object emit_evaluate_role_with_no_domain_byte_codes();
extern Object emit_funcall_evaluator_byte_codes();
extern Object emit_funcall_instruction_byte_codes();
extern Object emit_move_from_surrounding_local_var_byte_codes();
extern Object emit_name_reference_byte_codes();
extern Object emit_operator_of_type();
extern Object emit_pop_copy_down_the_stack_byte_codes();
extern Object emit_pop_into_surrounding_local_var_byte_codes();
extern Object emit_pop_values_byte_codes();
extern Object emit_push_cached_item_byte_codes();
extern Object emit_push_constant_byte_codes();
extern Object emit_push_from_surrounding_local_var_byte_codes();
extern Object emit_push_nones_byte_codes();
extern Object emit_push_value_or_none_from_surrounding_local_var_byte_codes();
extern Object emit_stack_node_tree();
extern Object emit_stack_node_tree_or_nil();
extern Object emit_type_check_byte_codes();
extern Object ensure_argument_types_satisfy_operators();
extern Object evaluation_value_type();
extern Object float_contagion_stack_operator_p();
extern Object g2_list_or_array_class_element_type();
extern Object g2_toggle_evaluate_role_inline();
extern Object generate_float_vector();
extern Object generate_list_of_lexically_visible_code_bodies();
extern Object generate_new_goto_tag();
extern Object generate_new_stack_arg_var_spot();
extern Object generate_new_stack_frame_var_spot();
extern Object generate_new_variable_spot();
extern Object gensym_cons_1();
extern Object gensym_list_2();
extern Object get_current_annotation_context();
extern Object get_denoted_item_name_if_any();
extern Object get_name_provided_by_role();
extern Object getfq_function_no_default();
extern Object inlining_context_qm();
extern Object install_free_references_in_byte_code_body();
extern Object interned_conclude_attribute_binding_symbol();
extern Object invalidate_static_evaulate_role_dispatcher();
extern Object lengthw();
extern Object lookup_or_generate_var_spot_index_for_local_name();
extern Object make_binary_stack_argument_nodes();
extern Object make_byte_code_body_1();
extern Object make_byte_code_stream_1();
extern Object make_class_type_specification();
extern Object make_compiler_code_body_entry_1();
extern Object make_dummy_stack_node();
extern Object make_evaluation_float_from_evaluation_long();
extern Object make_evaluation_long();
extern Object make_evaluation_quantity();
extern Object make_phrase_list();
extern Object make_procedure_byte_code_constants();
extern Object make_pseudo_instruction_stream_1();
extern Object make_stack_argument_nodes();
extern Object make_stack_node_1_1();
extern Object make_stack_node_combining_arguments();
extern Object make_stack_node_instruction_1_1();
extern Object make_type_specification_for_iteration_state();
extern Object make_type_specification_intersection();
extern Object make_type_specification_union();
extern Object mal_formed_stack_designation();
extern Object mal_formed_stack_expression();
extern Object maybe_add_no_item();
extern Object maybe_add_no_item_implies_unknown();
extern Object maybe_add_unknown();
extern Object memq_function();
extern Object merge_pseudo_instruction_stream();
extern Object merge_pseudo_instruction_streams();
extern Object more_general_argument_list_description_p();
extern Object most_general_argument_type_list();
extern Object most_general_primary_type();
extern Object mutate_global_property();
extern Object name_rooted_attribute_only_designation_p();
extern Object nary_operator_stack_implemented_as_binary();
extern Object node_type_produces_argument_type_p();
extern Object optimize_procedure_instructions();
extern Object pair_role_with_depth();
extern Object phrase_cons();
extern Object phrase_list_2();
extern Object phrase_list_3();
extern Object phrase_list_4();
extern Object primary_type_of_type_specification();
extern Object print_role();
extern Object quantifier_requires_previous_reference_p();
extern Object reclaim_byte_code_stream_1();
extern Object reclaim_compiler_code_body_entry_1();
extern Object reclaim_gensym_cons_1();
extern Object reclaim_goto_tag_entry_1();
extern Object reclaim_if_evaluation_value_1();
extern Object reclaim_managed_simple_long_array_of_length_1();
extern Object reclaim_stack_list_of_nodes();
extern Object reclaim_text_string();
extern Object record_free_reference();
extern Object record_free_references_of_role();
extern Object record_free_references_of_role_given_domain_name();
extern Object record_system_variable();
extern Object redundant_parameter_free_reference_qm();
extern Object register_tag_in_byte_code_stream();
extern Object remove_compiler_error_and_warning_frame_notes();
extern Object remove_spurious_free_references_for_function_compilation();
extern Object replenish_gensym_cons_pool();
extern Object resolve_procedure_byte_code_addresses();
extern Object resolve_stack_name_reference();
extern Object rewrite_conclude_actions_in_action_list();
extern Object rewrite_contexts_for_stack_compile();
extern Object rewrite_stack_node_trees_for_unknown();
extern Object role_can_be_cached_qm();
extern Object role_of_designation();
extern Object set_balanced_binary_tree_entry();
extern Object simple_role_of_role();
extern Object simple_role_p();
extern Object simulation_designation_can_be_cached_qm();
extern Object stable_name_of_class_p();
extern Object stable_name_p();
extern Object stack_evaluator_nodes_produce_types_p();
extern Object static_role_dispatcher_less_than();
extern Object string_eq_w();
extern Object text_string_p();
extern Object text_string_substring();
extern Object tformat();
extern Object truth_value_phrase_p();
extern Object truth_value_phrase_value();
extern Object twrite_beginning_of_wide_string();
extern Object twrite_compiler_message_header();
extern Object type_of_global_or_local_name();
extern Object type_specification_held_in_type();
extern Object type_specification_minimal_required_type();
extern Object type_specification_minus_type();
extern Object type_specification_not_subtype_p();
extern Object type_specification_of_designation();
extern Object type_specification_of_role();
extern Object type_specification_returning_datum_type();
extern Object type_specification_returning_datum_type_or_unknown();
extern Object type_specification_subtype_p();
extern Object type_specification_union_minus_type();
extern Object type_specifications_could_be_coerced_p();
extern Object type_specifications_could_intersect_p();
extern Object unauthorized_system_slot_p();
extern Object union_type_specification_p();
extern Object valid_datum_type_specification_p();
extern Object valid_type_specification_p();
extern Object validate_static_evaulate_role_dispatcher();
extern Object var_spot_index_for_local_name();
extern Object var_spot_index_or_global_name();
extern Object var_spot_type();
extern Object variable_spot_and_description_for_local_name();
extern Object write_byte_code_to_stream();

#endif

/* variables/constants */
extern Object Allow_inline_evaluate_role_instructions_p;
extern Object Already_mutated_evaluators;
extern Object Available_gensym_conses;
extern Object Built_in_functions;
extern Object Class_description_gkbprop;
extern Object Code_body_entries_in_compilation;
extern Object Collecting_free_references;
extern Object Compile_reference_to_system_slot;
extern Object Compiler_errors;
extern Object Compiler_free_references;
extern Object Compiler_warnings;
extern Object Conclude_attribute_binding_listed_next_symbol;
extern Object Conclude_attribute_binding_symbol_counter;
extern Object Conclude_attribute_binding_symbol_supply;
extern Object Conclude_parent_attribute_bindings;
extern Object Created_simple_float_array_pool_arrays;
extern Object Current_computation_frame;
extern Object Current_kb_specific_property_list_property_name;
extern Object Current_let_action_bindings;
extern Object Current_twriting_output_type;
extern Object Current_wide_string;
extern Object Current_wide_string_list;
#define Dispatch_instruction_number FIX((SI_Long)255L)
extern Object Evaluation_false_value;
extern Object Evaluation_true_value;
extern Object Expression_bound_local_names;
#define Falsity FIX((SI_Long)-1000L)
extern Object Fill_pointer_for_current_wide_string;
extern Object Frame_note_for_superseded_attributes_1;
extern Object Generate_source_annotation_info;
extern Object Goto_tags_in_compilation;
extern Object Inhibit_free_reference_recording;
extern Object Lexically_visible_code_bodies;
extern Object Lexically_visible_goto_tags;
extern Object Local_name_to_cached_designation_alist;
#define Maximum_length_for_user_text_strings FIX((SI_Long)100000000L)
extern Object New_goto_tag_counter;
extern Object Next_stack_frame_var_location;
extern Object No_specific_property_value;
extern Object Outermost_stack_frame_var_binding_qm;
extern Object Phrase_sequence_marker;
extern Object Phrase_structure_marker;
extern Object Rule_certainty_var;
extern Object Rule_class_description;
extern Object Rule_expiration_var;
extern Object Simple_float_array_pool_memory_usage;
extern Object Sorted_static_evaluate_role_dispatchers;
extern Object Stack_frame_vars_ok_in_procedure_qm;
extern Object Stack_nodes_to_reclaim;
extern Object Static_evaluate_role_dispatch_parent_prop;
extern Object Static_evaluate_role_dispatch_predicate_prop;
extern Object Symbol_properties_table;
extern Object Total_length_of_current_wide_string;
#define Truth FIX((SI_Long)1000L)
extern Object Unique_value_of_role_instruction_name_prop;
extern Object Unique_value_roles;
extern Object Vector_of_simple_float_array_pools;
