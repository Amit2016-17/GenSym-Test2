/* pccmp.h -- Header File for pccmp.c
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
 */


/* Symbol Definitions */
extern Object Qplus;
extern Object Qminus;
extern Object Qnum_le;
extern Object Qnum_eq;
extern Object Qnum_ge;
extern Object Qblock;
extern Object Qdelete;
extern Object Qdo;
extern Object Qerror;
extern Object Qfloat;
extern Object Qinline;
extern Object Qinteger;
extern Object Qnot;
extern Object Qnumber;
extern Object Qotherwise;
extern Object Qprint;
extern Object Qquote;
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

extern Object add_another_vector_for_phrase_conses(void);
extern Object add_compiler_error_and_warning_frame_notes(void);
extern Object add_md5_identifier(Object);
extern Object adjust_nesting_of_inlining_data_received_value_compilations(Object);
extern Object allocate_byte_vector(Object);
extern Object allocate_byte_vector_16(Object);
extern Object allocate_managed_array(int,...);
extern Object allocate_managed_array_static(int,...);
extern Object analyze_compiled_items_for_consistency(Object);
extern Object assq_function(Object,Object);
extern Object block_can_be_inlined_p(Object);
extern Object block_has_stable_heirarchy_p(Object);
extern Object block_is_optimizable_p(Object);
extern Object block_is_unstable_p(Object);
extern Object branch_if_known_tag_referencer(Object);
extern Object branch_if_known_tag_replacer(Object);
extern Object branch_if_not_true_tag_referencer(Object);
extern Object branch_if_not_true_tag_replacer(Object);
extern Object branch_if_true_tag_referencer(Object);
extern Object branch_if_true_tag_replacer(Object);
extern Object branch_tag_referencer(Object);
extern Object branch_tag_replacer(Object);
extern Object car_eq(Object,Object);
extern Object case_choices_can_be_integer_optimized_p(Object);
extern Object case_dispatch_tag_referencer(Object);
extern Object case_dispatch_tag_replacer(Object);
extern Object change_slot_value(int,...);
extern Object check_for_new_code_body_errors(void);
extern Object class_type_specification_p(Object);
extern Object clear_inlining_data(void);
extern Object clear_procedure_compilation_frame_flags(Object);
extern Object clone_annotation(Object);
extern Object coalesce_lookup_structures(int,...);
extern Object collect_data_tag_referencer(Object);
extern Object collect_data_tag_replacer(Object);
extern Object collect_description_into_list_using_phrase_conses(Object);
extern Object collect_forwardable_goto_tags(Object);
extern Object collect_goto_tag_addresses(Object);
extern Object collect_subclasses(Object);
extern Object collect_types_into_list_using_phrase_conses(Object);
extern Object compile_for_each_parallel(Object);
extern Object compile_inline_substitution(Object,Object,Object,Object);
extern Object compile_integer_optimized_case_statement(Object,Object);
extern Object compile_parallel_for_numeric_statement(Object);
extern Object compile_procedure_definition(Object,Object);
extern Object compile_procedure_expression(int,...);
extern Object compile_procedure_statement(Object);
extern Object compile_procedure_var_spot(Object,Object);
extern Object compile_sequential_for_numeric_statement(Object);
extern Object compile_stack_expression(Object,Object);
extern Object compile_stack_expression_into_nodes(Object,Object);
extern Object compile_system_action_statement(Object);
extern Object compile_system_call_assignment_statement(Object);
extern Object compile_system_call_statement(Object);
extern Object compile_time_selected_method_p(Object,Object,Object);
extern Object compile_unoptimized_case_statement(Object,Object,Object);
extern Object compiler_bug(int,...);
extern Object compiler_dependence_warning(int,...);
extern Object compiler_error(int,...);
extern Object compiler_warning(int,...);
extern Object compiler_warning_if_superseded_attribute(Object);
extern Object convert_description_list_to_managed_array(int,...);
extern Object convert_frame_internals_to_vectors_as_necessary(void);
extern Object convert_procedure_type_if_necessary(int,...);
extern Object convert_text_to_text_string(int,...);
extern Object copy_for_phrase(Object);
extern Object copy_for_slot_value(Object);
extern Object copy_list_using_phrase_conses(Object);
extern Object copy_out_current_wide_string(void);
extern Object copy_tree_using_phrase_conses(Object);
extern Object data_type_of_non_logical_datum(Object);
extern Object delete_frame(Object);
extern Object delete_frame_note_if_any(Object,Object);
extern Object denoted_name_of_type_p(Object,Object);
extern Object dependent_compilation_p(int,...);
extern Object destructure_statement_designation_locals_args_across_qm(Object);
extern Object do_deferred_updates_to_representations_in_tables(void);
extern Object domain_list_of_designation(Object);
extern Object domain_of_designation(Object);
extern Object emit_already_consed_instruction(Object);
extern Object emit_branch_or_jump(Object);
extern Object emit_branch_or_jump_if_not_true(Object,Object);
extern Object emit_branch_or_jump_if_true(Object,Object);
extern Object emit_byte_code_vector_for_procedure(Object,Object);
extern Object ensure_var_spot_receives_type(Object,Object,Object,Object);
extern Object environment_index_ok_in_this_context_qm(Object);
extern Object execute_antecedent_tag_referencer(Object);
extern Object execute_antecedent_tag_replacer(Object);
extern Object execute_simulation_formula_tag_referencer(Object);
extern Object execute_simulation_formula_tag_replacer(Object);
extern Object expand_jump_targets(Object);
extern Object extend_current_wide_string(Object);
extern Object fill_managed_array(Object,Object);
extern Object finalize_indexed_md5_context(Object,Object);
extern Object g2_cell_array_managed_array_function(Object);
extern Object g2_disable_inlining(void);
extern Object g2_enable_inlining(void);
extern Object g2_expression_cell_byte_code_body_function(Object);
extern Object generate_environment_descriptions(Object,Object,Object);
extern Object generate_list_of_lexically_visible_code_bodies(Object);
extern Object generate_new_goto_tag(void);
extern Object generate_new_variable_spot(int,...);
extern Object generate_var_spots_for_base_code_body_return(void);
extern Object gensym_cons_1(Object,Object);
extern Object gensym_list_2(Object,Object);
extern Object get_class_and_type_of_variable_designation(Object);
extern Object get_current_annotation_context(Object);
extern Object get_current_sexp_annotation_hash(void);
extern Object get_inline_call_number(Object);
extern Object get_instance_with_name_if_any(Object,Object);
extern Object get_lookup_slot_value_given_default(Object,Object,Object);
extern Object get_named_procedure_methods_for_class(Object,Object);
extern Object get_procedure_argument_descriptions_in_context(void);
extern Object get_procedure_in_context(void);
extern Object get_procedure_method_class_in_context(void);
extern Object get_procedure_method_name_in_context(void);
extern Object get_slot_description_of_class_description_function(Object,Object,Object);
extern Object get_slot_value_function(Object,Object,Object);
extern Object get_specific_method(Object,Object,Object,Object,Object,Object);
extern Object get_type_of_variable_designation(Object);
extern Object get_unique_name_for_frame_if_any(Object);
extern Object getfq_function_no_default(Object,Object);
extern Object goto_tag_entry_with_name(Object,Object);
extern Object in_inlining_context_qm(void);
extern Object indirectly_denoted_item_p(Object);
extern Object inlining_context_qm(void);
extern Object inlining_data_recieved_value_compilations_qm(void);
extern Object inner_block_cant_be_inlined_in_outer_block_qm(Object,Object);
extern Object install_free_references_in_byte_code_body(Object,Object);
extern Object instruction_address_for_tag(Object,Object);
extern Object intern_text_string(int,...);
extern Object jump_depth_for_tag_qm(Object);
extern Object jump_tag_referencer(Object);
extern Object jump_tag_replacer(Object);
extern Object list_to_managed_array(Object);
extern Object lookup_global_or_kb_specific_property_value(Object,Object);
extern Object lookup_kb_specific_property_value(Object,Object);
extern Object make_byte_code_body_1(Object,Object,Object,Object,Object);
extern Object make_byte_code_stream_1(void);
extern Object make_byte_code_stream_given_base_stream(Object);
extern Object make_class_type_specification(Object);
extern Object make_compiler_code_body_entry_1(Object,Object);
extern Object make_edit_state_1(void);
extern Object make_frame(Object);
extern Object make_phrase_list(Object);
extern Object make_procedure_byte_code_constants(Object);
extern Object make_pseudo_instruction_stream_1(void);
extern Object make_sexp_annotation_hash(void);
extern Object make_type_specification_for_iteration_state(void);
extern Object make_type_specification_intersection(Object,Object);
extern Object make_type_specification_union(Object,Object);
extern Object make_unique_slot_name_symbol(Object,Object);
extern Object mangle_symbol_using(int,...);
extern Object mangle_tag_in_context(Object);
extern Object maybe_add_unknown(Object,Object);
extern Object md5_id_string(Object);
extern Object memq_function(Object,Object);
extern Object merge_pseudo_instruction_stream(Object);
extern Object mutate_global_property(Object,Object,Object);
extern Object note_change_to_block_1(Object,Object);
extern Object note_change_to_dependent_frame_1(void);
extern Object obtain_simple_gensym_string(Object);
extern Object obtain_text_string(Object);
extern Object open_role_iteration_no_domain_tag_referencer(Object);
extern Object open_role_iteration_no_domain_tag_replacer(Object);
extern Object open_role_iteration_tag_referencer(Object);
extern Object open_role_iteration_tag_replacer(Object);
extern Object optimize_procedure_instructions(Object,Object);
extern Object phrase_cons(Object,Object);
extern Object phrase_cons_with_args_reversed(Object,Object);
extern Object phrase_list_2(Object,Object);
extern Object phrase_list_3(Object,Object,Object);
extern Object phrase_list_4(Object,Object,Object,Object);
extern Object print_assignment_statement(Object);
extern Object print_case_statement(Object);
extern Object print_constant(int,...);
extern Object print_create_connection_statement(Object);
extern Object print_create_explanation_statement(Object);
extern Object print_create_statement(Object);
extern Object print_description(Object);
extern Object print_designation(Object);
extern Object print_for_numeric_statement(Object);
extern Object print_on_error_statement(Object);
extern Object print_on_error_statement_new(Object);
extern Object print_role(Object);
extern Object print_signal_statement(Object);
extern Object print_signal_statement_new(Object);
extern Object procedure_compiler_duplicate_local_name_error(Object);
extern Object procedure_compiler_missing_local_name_error(Object);
extern Object procedure_has_empty_code_body_p(Object);
extern Object reclaim_byte_code_stream_1(Object);
extern Object reclaim_compiler_code_body_entry_1(Object);
extern Object reclaim_edit_state_1(Object);
extern Object reclaim_gensym_list_1(Object);
extern Object reclaim_gensym_string(Object);
extern Object reclaim_gensym_tree_1(Object);
extern Object reclaim_goto_tag_entry_1(Object);
extern Object reclaim_simple_gensym_string(Object);
extern Object reclaim_slot_value(Object);
extern Object reclaim_stack_list_of_nodes(Object);
extern Object reclaim_text_string(Object);
extern Object record_free_reference(Object,Object);
extern Object record_free_references_of_role(int,...);
extern Object record_goto_tags(Object);
extern Object record_new_goto_tag(Object);
extern Object register_error_handler_spec(Object);
extern Object register_goto_tag_address(Object,Object,Object);
extern Object register_method_declaration(Object,Object,Object);
extern Object remote_procedure_argument_description_function(Object);
extern Object remote_procedure_returned_values_description_function(Object);
extern Object remove_compiler_error_and_warning_frame_notes(void);
extern Object remove_dead_procedure_instructions(Object,Object);
extern Object remove_md5_identifier(Object);
extern Object replace_goto_tags_with_instruction_addresses(Object);
extern Object replenish_gensym_cons_pool(void);
extern Object resolve_procedure_byte_code_addresses(int,...);
extern Object restore_from_action_cache_or_branch_tag_referencer(Object);
extern Object restore_from_action_cache_or_branch_tag_replacer(Object);
extern Object role_of_designation(Object);
extern Object serve_next_iteration_value_tag_referencer(Object);
extern Object serve_next_iteration_value_tag_replacer(Object);
extern Object set_current_annotation_context(Object,Object);
extern Object set_lookup_slot_value_1(Object,Object,Object);
extern Object set_non_savable_lookup_slot_value(Object,Object,Object);
extern Object set_remote_procedure_argument_description_function(Object,Object);
extern Object set_remote_procedure_returned_values_description_function(Object,Object);
extern Object short_cut_branch_to_branch_procedure_instructions(Object);
extern Object simple_role_of_role(Object);
extern Object simple_role_p(Object);
extern Object stable_denoted_procedure_p(int,...);
extern Object stack_node_first_reference_to_var_spot(Object,Object);
extern Object stack_node_references_to_var_spot(Object,Object);
extern Object string_eq_w(Object,Object);
extern Object text_string_p(Object);
extern Object tformat(int,...);
extern Object tformat_text_string(int,...);
extern Object twrite(Object);
extern Object twrite_beginning_of_wide_string(Object,Object);
extern Object twrite_compiler_message_header(void);
extern Object twrite_general_string(Object);
extern Object twrite_symbol(int,...);
extern Object type_specification_minus_type(Object,Object);
extern Object type_specification_of_designation(Object);
extern Object type_specification_of_role(Object);
extern Object type_specification_subtype_p(Object,Object);
extern Object type_specifications_could_intersect_p(Object,Object);
extern Object unknown_type_compiler_error(Object,Object);
extern Object unregister_method_declaration(Object,Object,Object);
extern Object update_all_representations_of_slot(Object,Object,Object,Object);
extern Object update_frame_name_references(Object);
extern Object update_frame_status(Object,Object,Object);
extern Object update_indexed_md5_context(Object,Object);
extern Object valid_type_specification_p(Object);
extern Object var_spot_type(Object,Object);
extern Object variable_spot_and_description_for_local_name(Object);
extern Object warn_of_obsolete_time_stamp_type(Object);
extern Object warn_of_unreferenced_goto_tags(void);
extern Object wide_string_to_gensym_string(Object);
extern Object write_activate_statement(Object);
extern Object write_allow_other_processing_statement(Object);
extern Object write_begin_statement(Object);
extern Object write_call_assignment_statement(Object);
extern Object write_call_next_method_assignment_statement(Object);
extern Object write_call_next_method_statement(Object);
extern Object write_call_statement(Object);
extern Object write_collect_data_statement(Object);
extern Object write_conclude_that_statement(Object);
extern Object write_create_by_cloning_statement(Object);
extern Object write_create_statement(Object);
extern Object write_deactivate_statement(Object);
extern Object write_delete_statement(Object);
extern Object write_disable_statement(Object);
extern Object write_do_in_parallel_statement(Object);
extern Object write_do_in_parallel_until_one_completes_statement(Object);
extern Object write_enable_statement(Object);
extern Object write_exit_if_statement(Object);
extern Object write_expression(Object);
extern Object write_for_each_statement(Object);
extern Object write_go_to_statement(Object);
extern Object write_hide_statement(Object);
extern Object write_if_then_else_statement(Object);
extern Object write_if_then_statement(Object);
extern Object write_print_statement(Object);
extern Object write_procedure_statement(Object);
extern Object write_repeat_statement(Object);
extern Object write_reset_kb_statement(Object);
extern Object write_return_statement(Object);
extern Object write_show_statement(Object);
extern Object write_start_kb_statement(Object);
extern Object write_system_call_assignment_statement(Object);
extern Object write_system_call_statement(Object);
extern Object write_system_wait_statement(Object);
extern Object write_tag_statement(Object);
extern Object write_wait_for_statement(Object);
extern Object write_wait_until_event_statement(Object);
extern Object write_wait_until_statement(Object);

#else

extern Object add_another_vector_for_phrase_conses();
extern Object add_compiler_error_and_warning_frame_notes();
extern Object add_md5_identifier();
extern Object adjust_nesting_of_inlining_data_received_value_compilations();
extern Object allocate_byte_vector();
extern Object allocate_byte_vector_16();
extern Object allocate_managed_array();
extern Object allocate_managed_array_static();
extern Object analyze_compiled_items_for_consistency();
extern Object assq_function();
extern Object block_can_be_inlined_p();
extern Object block_has_stable_heirarchy_p();
extern Object block_is_optimizable_p();
extern Object block_is_unstable_p();
extern Object branch_if_known_tag_referencer();
extern Object branch_if_known_tag_replacer();
extern Object branch_if_not_true_tag_referencer();
extern Object branch_if_not_true_tag_replacer();
extern Object branch_if_true_tag_referencer();
extern Object branch_if_true_tag_replacer();
extern Object branch_tag_referencer();
extern Object branch_tag_replacer();
extern Object car_eq();
extern Object case_choices_can_be_integer_optimized_p();
extern Object case_dispatch_tag_referencer();
extern Object case_dispatch_tag_replacer();
extern Object change_slot_value();
extern Object check_for_new_code_body_errors();
extern Object class_type_specification_p();
extern Object clear_inlining_data();
extern Object clear_procedure_compilation_frame_flags();
extern Object clone_annotation();
extern Object coalesce_lookup_structures();
extern Object collect_data_tag_referencer();
extern Object collect_data_tag_replacer();
extern Object collect_description_into_list_using_phrase_conses();
extern Object collect_forwardable_goto_tags();
extern Object collect_goto_tag_addresses();
extern Object collect_subclasses();
extern Object collect_types_into_list_using_phrase_conses();
extern Object compile_for_each_parallel();
extern Object compile_inline_substitution();
extern Object compile_integer_optimized_case_statement();
extern Object compile_parallel_for_numeric_statement();
extern Object compile_procedure_definition();
extern Object compile_procedure_expression();
extern Object compile_procedure_statement();
extern Object compile_procedure_var_spot();
extern Object compile_sequential_for_numeric_statement();
extern Object compile_stack_expression();
extern Object compile_stack_expression_into_nodes();
extern Object compile_system_action_statement();
extern Object compile_system_call_assignment_statement();
extern Object compile_system_call_statement();
extern Object compile_time_selected_method_p();
extern Object compile_unoptimized_case_statement();
extern Object compiler_bug();
extern Object compiler_dependence_warning();
extern Object compiler_error();
extern Object compiler_warning();
extern Object compiler_warning_if_superseded_attribute();
extern Object convert_description_list_to_managed_array();
extern Object convert_frame_internals_to_vectors_as_necessary();
extern Object convert_procedure_type_if_necessary();
extern Object convert_text_to_text_string();
extern Object copy_for_phrase();
extern Object copy_for_slot_value();
extern Object copy_list_using_phrase_conses();
extern Object copy_out_current_wide_string();
extern Object copy_tree_using_phrase_conses();
extern Object data_type_of_non_logical_datum();
extern Object delete_frame();
extern Object delete_frame_note_if_any();
extern Object denoted_name_of_type_p();
extern Object dependent_compilation_p();
extern Object destructure_statement_designation_locals_args_across_qm();
extern Object do_deferred_updates_to_representations_in_tables();
extern Object domain_list_of_designation();
extern Object domain_of_designation();
extern Object emit_already_consed_instruction();
extern Object emit_branch_or_jump();
extern Object emit_branch_or_jump_if_not_true();
extern Object emit_branch_or_jump_if_true();
extern Object emit_byte_code_vector_for_procedure();
extern Object ensure_var_spot_receives_type();
extern Object environment_index_ok_in_this_context_qm();
extern Object execute_antecedent_tag_referencer();
extern Object execute_antecedent_tag_replacer();
extern Object execute_simulation_formula_tag_referencer();
extern Object execute_simulation_formula_tag_replacer();
extern Object expand_jump_targets();
extern Object extend_current_wide_string();
extern Object fill_managed_array();
extern Object finalize_indexed_md5_context();
extern Object g2_cell_array_managed_array_function();
extern Object g2_disable_inlining();
extern Object g2_enable_inlining();
extern Object g2_expression_cell_byte_code_body_function();
extern Object generate_environment_descriptions();
extern Object generate_list_of_lexically_visible_code_bodies();
extern Object generate_new_goto_tag();
extern Object generate_new_variable_spot();
extern Object generate_var_spots_for_base_code_body_return();
extern Object gensym_cons_1();
extern Object gensym_list_2();
extern Object get_class_and_type_of_variable_designation();
extern Object get_current_annotation_context();
extern Object get_current_sexp_annotation_hash();
extern Object get_inline_call_number();
extern Object get_instance_with_name_if_any();
extern Object get_lookup_slot_value_given_default();
extern Object get_named_procedure_methods_for_class();
extern Object get_procedure_argument_descriptions_in_context();
extern Object get_procedure_in_context();
extern Object get_procedure_method_class_in_context();
extern Object get_procedure_method_name_in_context();
extern Object get_slot_description_of_class_description_function();
extern Object get_slot_value_function();
extern Object get_specific_method();
extern Object get_type_of_variable_designation();
extern Object get_unique_name_for_frame_if_any();
extern Object getfq_function_no_default();
extern Object goto_tag_entry_with_name();
extern Object in_inlining_context_qm();
extern Object indirectly_denoted_item_p();
extern Object inlining_context_qm();
extern Object inlining_data_recieved_value_compilations_qm();
extern Object inner_block_cant_be_inlined_in_outer_block_qm();
extern Object install_free_references_in_byte_code_body();
extern Object instruction_address_for_tag();
extern Object intern_text_string();
extern Object jump_depth_for_tag_qm();
extern Object jump_tag_referencer();
extern Object jump_tag_replacer();
extern Object list_to_managed_array();
extern Object lookup_global_or_kb_specific_property_value();
extern Object lookup_kb_specific_property_value();
extern Object make_byte_code_body_1();
extern Object make_byte_code_stream_1();
extern Object make_byte_code_stream_given_base_stream();
extern Object make_class_type_specification();
extern Object make_compiler_code_body_entry_1();
extern Object make_edit_state_1();
extern Object make_frame();
extern Object make_phrase_list();
extern Object make_procedure_byte_code_constants();
extern Object make_pseudo_instruction_stream_1();
extern Object make_sexp_annotation_hash();
extern Object make_type_specification_for_iteration_state();
extern Object make_type_specification_intersection();
extern Object make_type_specification_union();
extern Object make_unique_slot_name_symbol();
extern Object mangle_symbol_using();
extern Object mangle_tag_in_context();
extern Object maybe_add_unknown();
extern Object md5_id_string();
extern Object memq_function();
extern Object merge_pseudo_instruction_stream();
extern Object mutate_global_property();
extern Object note_change_to_block_1();
extern Object note_change_to_dependent_frame_1();
extern Object obtain_simple_gensym_string();
extern Object obtain_text_string();
extern Object open_role_iteration_no_domain_tag_referencer();
extern Object open_role_iteration_no_domain_tag_replacer();
extern Object open_role_iteration_tag_referencer();
extern Object open_role_iteration_tag_replacer();
extern Object optimize_procedure_instructions();
extern Object phrase_cons();
extern Object phrase_cons_with_args_reversed();
extern Object phrase_list_2();
extern Object phrase_list_3();
extern Object phrase_list_4();
extern Object print_assignment_statement();
extern Object print_case_statement();
extern Object print_constant();
extern Object print_create_connection_statement();
extern Object print_create_explanation_statement();
extern Object print_create_statement();
extern Object print_description();
extern Object print_designation();
extern Object print_for_numeric_statement();
extern Object print_on_error_statement();
extern Object print_on_error_statement_new();
extern Object print_role();
extern Object print_signal_statement();
extern Object print_signal_statement_new();
extern Object procedure_compiler_duplicate_local_name_error();
extern Object procedure_compiler_missing_local_name_error();
extern Object procedure_has_empty_code_body_p();
extern Object reclaim_byte_code_stream_1();
extern Object reclaim_compiler_code_body_entry_1();
extern Object reclaim_edit_state_1();
extern Object reclaim_gensym_list_1();
extern Object reclaim_gensym_string();
extern Object reclaim_gensym_tree_1();
extern Object reclaim_goto_tag_entry_1();
extern Object reclaim_simple_gensym_string();
extern Object reclaim_slot_value();
extern Object reclaim_stack_list_of_nodes();
extern Object reclaim_text_string();
extern Object record_free_reference();
extern Object record_free_references_of_role();
extern Object record_goto_tags();
extern Object record_new_goto_tag();
extern Object register_error_handler_spec();
extern Object register_goto_tag_address();
extern Object register_method_declaration();
extern Object remote_procedure_argument_description_function();
extern Object remote_procedure_returned_values_description_function();
extern Object remove_compiler_error_and_warning_frame_notes();
extern Object remove_dead_procedure_instructions();
extern Object remove_md5_identifier();
extern Object replace_goto_tags_with_instruction_addresses();
extern Object replenish_gensym_cons_pool();
extern Object resolve_procedure_byte_code_addresses();
extern Object restore_from_action_cache_or_branch_tag_referencer();
extern Object restore_from_action_cache_or_branch_tag_replacer();
extern Object role_of_designation();
extern Object serve_next_iteration_value_tag_referencer();
extern Object serve_next_iteration_value_tag_replacer();
extern Object set_current_annotation_context();
extern Object set_lookup_slot_value_1();
extern Object set_non_savable_lookup_slot_value();
extern Object set_remote_procedure_argument_description_function();
extern Object set_remote_procedure_returned_values_description_function();
extern Object short_cut_branch_to_branch_procedure_instructions();
extern Object simple_role_of_role();
extern Object simple_role_p();
extern Object stable_denoted_procedure_p();
extern Object stack_node_first_reference_to_var_spot();
extern Object stack_node_references_to_var_spot();
extern Object string_eq_w();
extern Object text_string_p();
extern Object tformat();
extern Object tformat_text_string();
extern Object twrite();
extern Object twrite_beginning_of_wide_string();
extern Object twrite_compiler_message_header();
extern Object twrite_general_string();
extern Object twrite_symbol();
extern Object type_specification_minus_type();
extern Object type_specification_of_designation();
extern Object type_specification_of_role();
extern Object type_specification_subtype_p();
extern Object type_specifications_could_intersect_p();
extern Object unknown_type_compiler_error();
extern Object unregister_method_declaration();
extern Object update_all_representations_of_slot();
extern Object update_frame_name_references();
extern Object update_frame_status();
extern Object update_indexed_md5_context();
extern Object valid_type_specification_p();
extern Object var_spot_type();
extern Object variable_spot_and_description_for_local_name();
extern Object warn_of_obsolete_time_stamp_type();
extern Object warn_of_unreferenced_goto_tags();
extern Object wide_string_to_gensym_string();
extern Object write_activate_statement();
extern Object write_allow_other_processing_statement();
extern Object write_begin_statement();
extern Object write_call_assignment_statement();
extern Object write_call_next_method_assignment_statement();
extern Object write_call_next_method_statement();
extern Object write_call_statement();
extern Object write_collect_data_statement();
extern Object write_conclude_that_statement();
extern Object write_create_by_cloning_statement();
extern Object write_create_statement();
extern Object write_deactivate_statement();
extern Object write_delete_statement();
extern Object write_disable_statement();
extern Object write_do_in_parallel_statement();
extern Object write_do_in_parallel_until_one_completes_statement();
extern Object write_enable_statement();
extern Object write_exit_if_statement();
extern Object write_expression();
extern Object write_for_each_statement();
extern Object write_go_to_statement();
extern Object write_hide_statement();
extern Object write_if_then_else_statement();
extern Object write_if_then_statement();
extern Object write_print_statement();
extern Object write_procedure_statement();
extern Object write_repeat_statement();
extern Object write_reset_kb_statement();
extern Object write_return_statement();
extern Object write_show_statement();
extern Object write_start_kb_statement();
extern Object write_system_call_assignment_statement();
extern Object write_system_call_statement();
extern Object write_system_wait_statement();
extern Object write_tag_statement();
extern Object write_wait_for_statement();
extern Object write_wait_until_event_statement();
extern Object write_wait_until_statement();

#endif

/* variables/constants */
extern Object Available_gensym_conses;
extern Object Base_code_body_return_tag;
extern Object Call_statement_processed_qm;
extern Object Call_statements;
extern Object Class_description_gkbprop;
extern Object Code_body;
extern Object Code_body_entries_in_compilation;
extern Object Collecting_free_references;
extern Object Compiler_errors;
extern Object Compiler_free_references;
extern Object Compiler_warnings;
extern Object Current_block_of_dependent_frame;
extern Object Current_computation_component_particulars;
extern Object Current_computation_frame;
extern Object Current_edit_state;
extern Object Current_return_values_position;
extern Object Current_twriting_output_type;
extern Object Current_wide_string;
extern Object Current_wide_string_list;
extern Object Duplicate_local_names_already_reported;
extern Object Expression_bound_local_names;
extern Object Fill_pointer_for_current_wide_string;
extern Object Function_definition_class_description;
extern Object Generate_source_annotation_info;
extern Object Generated_var_spots_for_base_code_body_return;
extern Object Generic_simulation_formula_class_description;
extern Object Goto_tag_references_prop;
extern Object Goto_tag_replacer_prop;
extern Object Goto_tags_in_compilation;
extern Object Inlining_data;
extern Object Instances_specific_to_this_class_kbprop;
extern Object Kb_flags;
extern Object Kb_flags_from_last_kb_read;
extern Object Lexically_visible_code_bodies;
extern Object Lexically_visible_goto_tags;
extern Object List_of_module_pre_conflict_resolution_post_loading_functions;
extern Object List_of_switched_and_module_post_loading_functions;
#define Managed_array_index_offset FIX((SI_Long)2L)
extern Object Managed_array_unique_marker;
extern Object Maximum_in_place_array_size;
#define Maximum_number_of_lisp_call_arguments FIX((SI_Long)8L)
#define Maximum_number_of_lisp_call_return_values FIX((SI_Long)8L)
extern Object Method_class_description;
extern Object Method_declaration_class_description;
extern Object Missing_local_names_already_reported;
extern Object New_descriptions;
extern Object New_goto_tag_counter;
extern Object Next_stack_frame_var_location;
extern Object No_inlining_qm;
extern Object Noting_changes_to_kb_p;
extern Object Outermost_stack_frame_var_binding_qm;
extern Object Procedure_branch_short_cuts;
#define Procedure_call_without_validated_environment_mask FIX((SI_Long)8L)
#define Procedure_can_invalidate_environment_mask FIX((SI_Long)1L)
extern Object Procedure_class_description;
extern Object Procedure_code_bodies_slot_name;
#define Procedure_contains_indirect_procedure_call_mask FIX((SI_Long)4L)
#define Procedure_contains_wait_state_mask FIX((SI_Long)2L)
extern Object Remote_procedure_declaration_class_description;
extern Object Return_statement_processed_qm;
extern Object Returned_values_description;
extern Object Rule_class_description;
extern Object Scope_conses;
extern Object Simulation_subtable_class_description;
extern Object Stack_frame_vars_ok_in_procedure_qm;
extern Object Stack_nodes_to_reclaim;
extern Object Stack_of_slot_value_changes;
extern Object Suppress_updates_to_name_boxes;
extern Object Suppress_updating_of_slot_value_representations_qm;
extern Object Suppress_use_of_stack_of_slot_value_changes_p;
extern Object Text_of_definition_being_compiled;
extern Object Tightest_end_of_loop_tag;
extern Object Total_length_of_current_wide_string;
