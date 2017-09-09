/* pcnst.h -- Header File for pcnst.c
 * Copyright (C) 1986-2017 Gensym Corporation.  All Rights Reserved.
 */


/* Symbol Definitions */
extern Object Qand;
extern Object Qdelete;
extern Object Qfirst;
extern Object Qinteger;
extern Object Qlast;
extern Object Qnumber;
extern Object Qprint;
extern Object Qquote;
extern Object Qset;
extern Object Qsymbol;
extern Object Qthe;
extern Object Ktype;
extern Object Qunsigned_byte;
extern Object Qvariable;

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

extern Object assq_function(Object,Object);
extern Object class_type_specification_p(Object);
extern Object clone_annotation(Object);
extern Object collect_types_into_list_using_phrase_conses(Object);
extern Object compile_action_inform_feature(Object,Object);
extern Object compile_conclude_action(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object compile_connection_creation_details(Object,Object);
extern Object compile_connection_end_specifier(Object,Object);
extern Object compile_procedure_expression(int,...);
extern Object compile_procedure_inform_feature(Object);
extern Object compile_stack_expression(Object,Object);
extern Object compiler_bug(int,...);
extern Object compiler_dependence_warning(int,...);
extern Object compiler_error(int,...);
extern Object compiler_warning(int,...);
extern Object copy_list_using_phrase_conses(Object);
extern Object copy_tree_using_phrase_conses(Object);
extern Object create_pseudo_instruction_property_list(void);
extern Object decode_deactivate_details_in_phrase_rule(Object);
extern Object decode_print_details_as_phrase_rule(Object);
extern Object decode_show_details_as_phrase_list(Object);
extern Object dependent_compilation_p(int,...);
extern Object designation_operator_or_giver_of_value_p(Object);
extern Object emit_action_common_start_bytes(Object,Object);
extern Object emit_action_start_thread_bytes(Object,Object);
extern Object emit_already_consed_instruction_to_stream(Object,Object);
extern Object emit_coerce_matching_element_type_or_unknown_if_necessary(Object,Object,Object,Object);
extern Object emit_common_call_assignment_epilog_bytes(Object,Object,Object);
extern Object emit_common_call_epilog_bytes(Object,Object,Object);
extern Object emit_common_start_bytes(Object,Object);
extern Object emit_create_connection_action(Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object emit_funcall_instruction_byte_codes(int,...);
extern Object emit_pop_into_block_of_local_vars_byte_codes(Object,Object,Object);
extern Object emit_pop_into_surrounding_local_var_byte_codes(Object,Object);
extern Object emit_push_constant_byte_codes(Object,Object);
extern Object emit_push_from_block_of_local_vars_byte_codes(Object,Object,Object);
extern Object emit_push_from_surrounding_local_var_byte_codes(Object,Object);
extern Object emit_push_nones_byte_codes(Object,Object);
extern Object emit_push_value_or_none_from_surrounding_local_var_byte_codes(Object,Object);
extern Object emit_stack_node_tree(Object,Object);
extern Object emit_stack_node_tree_or_nil(Object,Object);
extern Object emit_type_check_byte_codes(Object,Object);
extern Object generate_new_variable_spot(int,...);
extern Object get_current_annotation_context(Object);
extern Object getfq_function_no_default(Object,Object);
extern Object indirectly_denoted_item_p(Object);
extern Object make_class_type_specification(Object);
extern Object make_phrase_list(Object);
extern Object maybe_add_unknown(Object,Object);
extern Object memq_function(Object,Object);
extern Object mutate_global_property(Object,Object,Object);
extern Object note_change_to_block_1(Object,Object);
extern Object op_code_for_stack_instruction(Object);
extern Object phrase_cons(Object,Object);
extern Object phrase_list_2(Object,Object);
extern Object phrase_list_3(Object,Object,Object);
extern Object phrase_list_4(Object,Object,Object,Object);
extern Object phrase_quote_if_non_nil(Object);
extern Object primary_type_of_type_specification(Object);
extern Object print_abort_instruction(Object);
extern Object print_activate_instruction(Object);
extern Object print_add_relation(Object);
extern Object print_call_assignment_instruction(Object);
extern Object print_call_instruction(Object);
extern Object print_change_item_color_instruction(Object);
extern Object print_change_item_color_pattern_instruction(Object);
extern Object print_change_nth_element_instruction(Object);
extern Object print_change_nth_element_to_no_value_instruction(Object);
extern Object print_change_system_attribute_instruction(Object);
extern Object print_change_the_text_of_instruction(Object);
extern Object print_conclude_has_no_current_value_instruction(Object);
extern Object print_conclude_has_no_value_instruction(Object);
extern Object print_constant(int,...);
extern Object print_create_by_cloning_statement(Object);
extern Object print_create_connection_instruction(Object);
extern Object print_create_connection_statement(Object);
extern Object print_create_explanation_instruction(Object);
extern Object print_create_explanation_statement(Object);
extern Object print_create_instruction(Object);
extern Object print_deactivate_instruction(Object);
extern Object print_delete_instruction(Object);
extern Object print_designation(Object);
extern Object print_focus_instruction(Object);
extern Object print_g2_list_insert_designation_instruction(Object);
extern Object print_g2_list_insert_expression_instruction(Object);
extern Object print_g2_list_insert_instruction(Object);
extern Object print_g2_list_remove_designation_instruction(Object);
extern Object print_g2_list_remove_expression_instruction(Object);
extern Object print_g2_list_remove_instruction(Object);
extern Object print_halt_instruction(Object);
extern Object print_hide_instruction(Object);
extern Object print_inform_instruction(Object);
extern Object print_invoke_instruction(Object);
extern Object print_make_permanent_instruction(Object);
extern Object print_make_subworkspace_instruction(Object);
extern Object print_make_transient_instruction(Object);
extern Object print_move_instruction(Object);
extern Object print_nupec_synchronize_instruction(Object);
extern Object print_pause_kb_instruction(Object);
extern Object print_print_instruction(Object);
extern Object print_reset_kb_instruction(Object);
extern Object print_resume_kb_instruction(Object);
extern Object print_rotate_instruction(Object);
extern Object print_set_heading_instruction(Object);
extern Object print_set_instruction(Object);
extern Object print_set_position_instruction(Object);
extern Object print_show_instruction(Object);
extern Object print_show_new_instruction(Object);
extern Object print_shut_down_g2_instruction(Object);
extern Object print_start_instruction(Object);
extern Object print_start_kb_instruction(Object);
extern Object print_transfer_instruction(Object);
extern Object print_update_instruction(Object);
extern Object procedure_compiler_missing_local_name_error(Object);
extern Object rebuild_deep_conclude_designation(Object);
extern Object rebuild_deep_conclude_designation_1(Object);
extern Object reclaim_create_pseudo_instruction_property_list(Object);
extern Object record_free_reference(Object,Object);
extern Object register_internal_constant_in_byte_code_stream(Object,Object);
extern Object role_name_of_role(Object);
extern Object role_of_designation(Object);
extern Object set_current_annotation_context(Object,Object);
extern Object set_pseudo_instruction_property(Object,Object,Object);
extern Object simple_role_of_role(Object);
extern Object stable_denoted_procedure_p(int,...);
extern Object stack_node_matches_element_type_p(Object,Object);
extern Object text_string_p(Object);
extern Object tformat(int,...);
extern Object twrite(Object);
extern Object twrite_beginning_of_wide_string(Object,Object);
extern Object twrite_parsably(Object);
extern Object twrite_reference_point_details(Object);
extern Object type_specification_minus_type(Object,Object);
extern Object type_specification_of_role(Object);
extern Object type_specification_subtype_p(Object,Object);
extern Object type_specifications_could_intersect_p(Object,Object);
extern Object variable_spot_and_description_for_local_name(Object);
extern Object write_byte_code_to_stream(Object,Object);
extern Object write_conclude_that_statement(Object);
extern Object write_expression(Object);
extern Object write_list_in_chicago_style(int,...);

#else

extern Object assq_function();
extern Object class_type_specification_p();
extern Object clone_annotation();
extern Object collect_types_into_list_using_phrase_conses();
extern Object compile_action_inform_feature();
extern Object compile_conclude_action();
extern Object compile_connection_creation_details();
extern Object compile_connection_end_specifier();
extern Object compile_procedure_expression();
extern Object compile_procedure_inform_feature();
extern Object compile_stack_expression();
extern Object compiler_bug();
extern Object compiler_dependence_warning();
extern Object compiler_error();
extern Object compiler_warning();
extern Object copy_list_using_phrase_conses();
extern Object copy_tree_using_phrase_conses();
extern Object create_pseudo_instruction_property_list();
extern Object decode_deactivate_details_in_phrase_rule();
extern Object decode_print_details_as_phrase_rule();
extern Object decode_show_details_as_phrase_list();
extern Object dependent_compilation_p();
extern Object designation_operator_or_giver_of_value_p();
extern Object emit_action_common_start_bytes();
extern Object emit_action_start_thread_bytes();
extern Object emit_already_consed_instruction_to_stream();
extern Object emit_coerce_matching_element_type_or_unknown_if_necessary();
extern Object emit_common_call_assignment_epilog_bytes();
extern Object emit_common_call_epilog_bytes();
extern Object emit_common_start_bytes();
extern Object emit_create_connection_action();
extern Object emit_funcall_instruction_byte_codes();
extern Object emit_pop_into_block_of_local_vars_byte_codes();
extern Object emit_pop_into_surrounding_local_var_byte_codes();
extern Object emit_push_constant_byte_codes();
extern Object emit_push_from_block_of_local_vars_byte_codes();
extern Object emit_push_from_surrounding_local_var_byte_codes();
extern Object emit_push_nones_byte_codes();
extern Object emit_push_value_or_none_from_surrounding_local_var_byte_codes();
extern Object emit_stack_node_tree();
extern Object emit_stack_node_tree_or_nil();
extern Object emit_type_check_byte_codes();
extern Object generate_new_variable_spot();
extern Object get_current_annotation_context();
extern Object getfq_function_no_default();
extern Object indirectly_denoted_item_p();
extern Object make_class_type_specification();
extern Object make_phrase_list();
extern Object maybe_add_unknown();
extern Object memq_function();
extern Object mutate_global_property();
extern Object note_change_to_block_1();
extern Object op_code_for_stack_instruction();
extern Object phrase_cons();
extern Object phrase_list_2();
extern Object phrase_list_3();
extern Object phrase_list_4();
extern Object phrase_quote_if_non_nil();
extern Object primary_type_of_type_specification();
extern Object print_abort_instruction();
extern Object print_activate_instruction();
extern Object print_add_relation();
extern Object print_call_assignment_instruction();
extern Object print_call_instruction();
extern Object print_change_item_color_instruction();
extern Object print_change_item_color_pattern_instruction();
extern Object print_change_nth_element_instruction();
extern Object print_change_nth_element_to_no_value_instruction();
extern Object print_change_system_attribute_instruction();
extern Object print_change_the_text_of_instruction();
extern Object print_conclude_has_no_current_value_instruction();
extern Object print_conclude_has_no_value_instruction();
extern Object print_constant();
extern Object print_create_by_cloning_statement();
extern Object print_create_connection_instruction();
extern Object print_create_connection_statement();
extern Object print_create_explanation_instruction();
extern Object print_create_explanation_statement();
extern Object print_create_instruction();
extern Object print_deactivate_instruction();
extern Object print_delete_instruction();
extern Object print_designation();
extern Object print_focus_instruction();
extern Object print_g2_list_insert_designation_instruction();
extern Object print_g2_list_insert_expression_instruction();
extern Object print_g2_list_insert_instruction();
extern Object print_g2_list_remove_designation_instruction();
extern Object print_g2_list_remove_expression_instruction();
extern Object print_g2_list_remove_instruction();
extern Object print_halt_instruction();
extern Object print_hide_instruction();
extern Object print_inform_instruction();
extern Object print_invoke_instruction();
extern Object print_make_permanent_instruction();
extern Object print_make_subworkspace_instruction();
extern Object print_make_transient_instruction();
extern Object print_move_instruction();
extern Object print_nupec_synchronize_instruction();
extern Object print_pause_kb_instruction();
extern Object print_print_instruction();
extern Object print_reset_kb_instruction();
extern Object print_resume_kb_instruction();
extern Object print_rotate_instruction();
extern Object print_set_heading_instruction();
extern Object print_set_instruction();
extern Object print_set_position_instruction();
extern Object print_show_instruction();
extern Object print_show_new_instruction();
extern Object print_shut_down_g2_instruction();
extern Object print_start_instruction();
extern Object print_start_kb_instruction();
extern Object print_transfer_instruction();
extern Object print_update_instruction();
extern Object procedure_compiler_missing_local_name_error();
extern Object rebuild_deep_conclude_designation();
extern Object rebuild_deep_conclude_designation_1();
extern Object reclaim_create_pseudo_instruction_property_list();
extern Object record_free_reference();
extern Object register_internal_constant_in_byte_code_stream();
extern Object role_name_of_role();
extern Object role_of_designation();
extern Object set_current_annotation_context();
extern Object set_pseudo_instruction_property();
extern Object simple_role_of_role();
extern Object stable_denoted_procedure_p();
extern Object stack_node_matches_element_type_p();
extern Object text_string_p();
extern Object tformat();
extern Object twrite();
extern Object twrite_beginning_of_wide_string();
extern Object twrite_parsably();
extern Object twrite_reference_point_details();
extern Object type_specification_minus_type();
extern Object type_specification_of_role();
extern Object type_specification_subtype_p();
extern Object type_specifications_could_intersect_p();
extern Object variable_spot_and_description_for_local_name();
extern Object write_byte_code_to_stream();
extern Object write_conclude_that_statement();
extern Object write_expression();
extern Object write_list_in_chicago_style();

#endif

/* variables/constants */
DECLARE_VARIABLE_WITH_SYMBOL(Allow_inline_evaluate_role_instructions_p, Qallow_inline_evaluate_role_instructions_p);
DECLARE_VARIABLE_WITH_SYMBOL(Call_statement_processed_qm, Qcall_statement_processed_qm);
DECLARE_VARIABLE_WITH_SYMBOL(Chart, Qchart);
DECLARE_VARIABLE_WITH_SYMBOL(Compile_reference_to_system_slot, Qcompile_reference_to_system_slot);
DECLARE_VARIABLE_WITH_SYMBOL(Current_computation_frame, Qcurrent_computation_frame);
DECLARE_VARIABLE_WITH_SYMBOL(Current_let_action_bindings, Qcurrent_let_action_bindings);
extern Object Deep_concludable_role_names;
DECLARE_VARIABLE_WITH_SYMBOL(Delete_connections_without_leaving_stubs_qm, Qdelete_connections_without_leaving_stubs_qm);
DECLARE_VARIABLE_WITH_SYMBOL(Generate_source_annotation_info, Qgenerate_source_annotation_info);
DECLARE_VARIABLE_WITH_SYMBOL(Lexically_visible_code_bodies, Qlexically_visible_code_bodies);
DECLARE_VARIABLE_WITH_SYMBOL(Noting_changes_to_kb_p, Qnoting_changes_to_kb_p);
#define Procedure_call_without_validated_environment_mask FIX((SI_Long)8L)
#define Procedure_can_invalidate_environment_mask FIX((SI_Long)1L)
DECLARE_VARIABLE_WITH_SYMBOL(Procedure_class_description, Qprocedure_class_description);
#define Procedure_contains_indirect_procedure_call_mask FIX((SI_Long)4L)
