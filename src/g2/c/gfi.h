/* gfi.h -- Header File for gfi.c
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
 */


/* Symbol Definitions */
extern Object Qeq;
extern Object Qfloat;
extern Object Kinitial_element;
extern Object Qinteger;
extern Object Qnumber;
extern Object Qopen;
extern Object Qquote;
extern Object Qsymbol;
extern Object Ktest;
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

extern Object accept_data_from_gfi_data_service(void);
extern Object activate_for_gfi_input_interface(Object);
extern Object activate_for_gfi_output_interface(Object);
extern Object add_any_gfi_input_incomplete_frame_notes(Object);
extern Object add_any_gfi_output_incomplete_frame_notes(Object);
extern Object add_frame_note(int,...);
extern Object add_gfi_nupec_snapshot_values_to_history(Object,Object,Object,Object);
extern Object add_grammar_rules_function(Object);
extern Object allocate_byte_vector_16(Object);
extern Object allocate_managed_array(int,...);
extern Object allocate_managed_float_array(int,...);
extern Object begin_collecting_data_for_gfi_data_service(Object,Object);
extern Object break_out_of_debug_messages(void);
extern Object bytes_per_double_float_simple_array(Object);
extern Object bytes_per_simple_vector(Object);
extern Object bytes_per_typed_simple_array(Object,Object);
extern Object cancel_and_reclaim_scheduled_queue_element_1(Object);
extern Object cascaded_ring_buffer_empty_qm(Object);
extern Object cascaded_ring_buffer_indices_same_p(Object,Object);
extern Object change_current_time_in_nupec_catch_up_mode(Object);
extern Object change_slot_value(int,...);
extern Object clear_gfi_spreadsheet_field_index(Object);
extern Object clear_gfi_spreadsheet_field_index_tree(Object);
extern Object clear_histories(Object);
extern Object clear_optimized_constants(void);
extern Object close_gfi_input_interface(Object);
extern Object close_gfi_output_interface(Object,Object);
extern Object collect_one_shot_data_for_gfi_data_service(Object);
extern Object collect_subclasses(Object);
extern Object come_up_with_text_conversion_style_structure(Object,Object);
extern Object copy_constant_wide_string_given_length(Object,Object);
extern Object copy_evaluation_value_1(Object);
extern Object copy_managed_float(Object);
extern Object copy_out_current_wide_string(void);
extern Object copy_text_string(Object);
extern Object copy_tree_using_gensym_conses_1(Object);
extern Object data_type_of_variable_or_parameter_datum(Object,Object);
extern Object deactivate_for_gfi_input_interface(Object);
extern Object deactivate_for_gfi_output_interface(Object);
extern Object def_data_server(int,...);
extern Object deinstall_gfi_true_value_update(Object,Object,Object);
extern Object delete_frame_note_if_any(Object,Object);
extern Object delete_gensym_element_1(Object,Object);
extern Object designation_denotes_item_p(Object,Object);
extern Object designation_operator_or_giver_of_value_p(Object);
extern Object direct_structure_method(Object,Object);
extern Object encode_gfi_input_line_g2_time(Object);
extern Object evaluate_designation(Object,Object);
extern Object expand_history_ring_buffer(Object);
extern Object export_and_emit_character(Object,Object,Object);
extern Object export_and_emit_text_string(Object,Object,Object);
extern Object extend_current_gensym_string(int,...);
extern Object flatten_binary_tree(Object);
extern Object flatten_gfi_spreadsheet_field_index(Object);
extern Object frame_hash_function(Object);
extern Object future_task_schedule_2(Object);
extern Object g2_stream_close(Object);
extern Object g2_stream_get_file_position(Object);
extern Object g2_stream_open_for_input(Object);
extern Object g2_stream_open_for_output(Object);
extern Object g2_stream_p(Object);
extern Object g2_stream_read_into_buffer(Object,Object,Object);
extern Object g2_stream_rename_file(Object,Object);
extern Object g2_stream_write_line_terminator_using_text_conversion_style(Object,Object);
extern Object generate_designation_for_block(Object);
extern Object generate_float_vector(Object);
extern Object gensym_cons_1(Object,Object);
extern Object gensym_decode_unix_time(Object);
extern Object gensym_encode_unix_time_as_managed_float(Object,Object,Object,Object,Object,Object);
extern Object get_current_value(Object,Object);
extern Object get_history_g2_time(int,...);
extern Object get_history_value_for_cascaded_ring_buffer(Object,Object);
extern Object get_lookup_slot_value(Object,Object);
extern Object get_lookup_slot_value_given_default(Object,Object,Object);
extern Object get_newest_active_element_index_for_cascaded_ring_buffer(Object);
extern Object get_oldest_active_element_index_for_cascaded_ring_buffer(Object);
extern Object get_or_make_up_designation_for_block(Object);
extern Object get_pathname_for_gfi_interface(Object,Object);
extern Object get_slot_value_function(Object,Object,Object);
extern Object getfq_function_no_default(Object,Object);
extern Object gfi_delete_from_queue(Object,Object);
extern Object gfi_input_find_non_white_space(int,...);
extern Object gfi_input_interface_non_default_slots_set_p(Object);
extern Object gfi_input_nupec_snapshot_values_periodically(Object,Object,Object,Object);
extern Object gfi_output_event_log_values_periodically(Object,Object);
extern Object gfi_output_event_log_values_periodically_task(Object,Object);
extern Object gfi_output_interface_non_default_slots_set_p(Object);
extern Object gfi_output_nupec_snapshot_values_periodically(Object,Object);
extern Object gfi_output_spreadsheet_values_periodically(Object,Object);
extern Object gfi_output_spreadsheet_values_periodically_task(Object,Object);
extern Object gfi_queue_item_structure_memory_usage(void);
extern Object gfi_read_line(Object);
extern Object gfi_requests_accept_data_calls(void);
extern Object gfi_spreadsheet_field_index_hash_vector_131_vector_memory_usage(void);
extern Object gfi_terpri(Object);
extern Object gfi_write_char(Object,Object);
extern Object gfi_write_string(Object,Object);
extern Object give_warning_1(int,...);
extern Object handle_gfi_output_interface_new_values(Object,Object,Object,Object,Object,Object);
extern Object increment_active_element_index_for_cascaded_ring_buffer(Object,Object);
extern Object initialize_after_reading_for_gfi_input_interface(Object);
extern Object initialize_after_reading_for_gfi_output_interface(Object);
extern Object initialize_for_gfi_input_interface(Object);
extern Object initialize_for_gfi_output_interface(Object);
extern Object initialize_gfi_data_server(void);
extern Object install_gfi_true_value_update(Object,Object,Object);
extern Object install_true_value_update(Object,Object,Object,Object,Object);
extern Object invoke_rules_for_attribute_change_chaining(Object,Object,Object,Object);
extern Object legal_gensym_string_p(int,...);
extern Object load_and_initialize_type_description(Object,Object);
extern Object lookup_global_or_kb_specific_property_value(Object,Object);
extern Object lookup_kb_specific_property_value(Object,Object);
extern Object make_gfi_queue_item_1(void);
extern Object make_gfi_spreadsheet_field_index(void);
extern Object make_gfi_spreadsheet_field_index_hash_vector(void);
extern Object make_history_ring_buffer_1(void);
extern Object make_or_reformat_cascaded_ring_buffer(Object,Object,Object,Object);
extern Object make_permanent_gfi_queue_item_structure_internal(void);
extern Object make_permanent_gfi_spreadsheet_field_index_hash_vector_131_vector_internal(void);
extern Object make_permanent_queue_element_structure_internal(void);
extern Object make_permanent_schedule_task_structure_internal(void);
extern Object match_shorter_substring_p(Object,Object,Object,Object,Object,Object);
extern Object memq_function(Object,Object);
extern Object most_recent_file_operation_status_as_text(void);
extern Object mutate_global_property(Object,Object,Object);
extern Object note_change_to_block_1(Object,Object);
extern Object notify_user_1(Object);
extern Object open_gfi_input_interface(Object);
extern Object open_gfi_output_interface(Object);
extern Object out_gfi_spreadsheet_field_index_hash_vector_131_vectors(void);
extern Object output_appropriate_gfi_time_stamp(Object,Object);
extern Object output_appropriate_nupec_gfi_default_time_stamp(Object);
extern Object output_appropriate_nupec_gfi_default_value(Object,Object);
extern Object output_gfi_explicit_time_stamp_to_stream(Object,Object);
extern Object output_gfi_queued_values_to_stream(Object,Object);
extern Object output_gfi_value(Object,Object,Object);
extern Object outstanding_gfi_queue_item_count(void);
extern Object parse_and_put_gfi_nupec_snapshot_values(Object,Object,Object);
extern Object parse_constant_designation(Object,Object);
extern Object parse_delimitter_then_designation(int,...);
extern Object parse_gfi_schedule_tree(void);
extern Object parse_nupec_snapshot_constant_designation(Object);
extern Object parse_nupec_snapshot_gfi_time_stamp(Object,Object,Object);
extern Object parse_nupec_snapshot_gfi_variable_or_parameter_value(Object,Object,Object);
extern Object prepare_gfi_input_interface_to_open(Object);
extern Object prepare_gfi_output_interface_to_open(Object);
extern Object print_constant(int,...);
extern Object print_decoded_time(Object,Object,Object,Object,Object,Object);
extern Object print_designation(Object);
extern Object push_optimized_constant(Object);
extern Object put_current_value(int,...);
extern Object put_file_status(Object,Object,Object);
extern Object put_gfi_input_file_format(Object,Object,Object);
extern Object put_gfi_input_file_pathname(Object,Object,Object);
extern Object put_gfi_input_time_stamp_format(Object,Object,Object);
extern Object put_gfi_input_variables_update_mode(Object,Object,Object);
extern Object put_gfi_input_when_active(Object,Object,Object);
extern Object put_gfi_output_file_format(Object,Object,Object);
extern Object put_gfi_output_file_pathname(Object,Object,Object);
extern Object put_gfi_output_file_update_frequency(Object,Object,Object);
extern Object put_gfi_output_time_stamp_format(Object,Object,Object);
extern Object put_gfi_output_values(Object,Object,Object);
extern Object put_gfi_output_when_active(Object,Object,Object);
extern Object put_gfi_value_of_designation_into_appropriate_place(Object,Object,Object);
extern Object put_ignore_gfi_input_base_time_qm(Object,Object,Object);
extern Object put_renamed_gfi_output_file_pathname(Object,Object,Object);
extern Object read_and_encode_gfi_input_base_time(Object);
extern Object read_and_encode_nupec_snapshot_time_stamp_or_symbol(Object,Object);
extern Object read_gfi_designation_from_string(Object,Object);
extern Object read_gfi_file_header(Object);
extern Object read_gfi_nupec_snapshot_value_from_input_line(Object,Object);
extern Object read_list_of_gfi_designations(Object);
extern Object read_number_from_string(Object,Object,Object);
extern Object read_one_gfi_input_line(Object);
extern Object read_symbol_from_text_string(int,...);
extern Object read_text_string_ending_in_a_delimitter_from_string(Object,Object,Object,Object);
extern Object read_text_string_from_string(Object,Object,Object);
extern Object read_text_string_with_or_without_quotes_from_string(Object,Object,Object);
extern Object read_time_stamp_from_string(Object,Object,Object);
extern Object read_truth_value_from_string(Object,Object,Object);
extern Object reclaim_binary_tree_element_1(Object);
extern Object reclaim_gensym_cons_1(Object);
extern Object reclaim_gensym_list_1(Object);
extern Object reclaim_gensym_tree_1(Object);
extern Object reclaim_gfi_last_value_value(Object,Object);
extern Object reclaim_gfi_list_of_new_spreadsheet_output_values_value(Object,Object);
extern Object reclaim_gfi_output_not_unique_designation_p_results_value(Object,Object);
extern Object reclaim_gfi_output_spreadsheet_field_index_hash_value(Object,Object);
extern Object reclaim_gfi_output_unique_designations_value(Object,Object);
extern Object reclaim_gfi_output_values_value(Object,Object);
extern Object reclaim_gfi_queue_item_1(Object);
extern Object reclaim_gfi_queue_of_new_output_values_contents(Object);
extern Object reclaim_gfi_spreadsheet_field_index(Object);
extern Object reclaim_gfi_spreadsheet_field_index_hash_vector(Object);
extern Object reclaim_gfi_spreadsheet_field_index_tree_for_hash_leaves(Object);
extern Object reclaim_history_buffer(Object);
extern Object reclaim_if_temporary_constant_function(Object);
extern Object reclaim_list_of_block_snapshots(Object);
extern Object reclaim_managed_float_array(Object);
extern Object reclaim_managed_number_or_value_function(Object);
extern Object reclaim_managed_simple_float_array_of_length_1(Object);
extern Object reclaim_managed_simple_long_array_of_length_1(Object);
extern Object reclaim_schedule_task_args(Object);
extern Object reclaim_slot_value(Object);
extern Object reclaim_temporary_constant_1(Object);
extern Object reclaim_text_string(Object);
extern Object reclaim_wide_string(Object);
extern Object record_block_for_tformat(Object);
extern Object record_direct_structure_method(Object,Object,Object);
extern Object record_system_variable(Object,Object,Object,Object,Object,Object,Object);
extern Object regenerate_optimized_constant(Object);
extern Object replace_gfi_nupec_snapshot_values_in_history(Object,Object,Object,Object);
extern Object replenish_gensym_cons_pool(void);
extern Object schedule_data_server_accept_data_calls(void);
extern Object schedule_gfi_output_tasks(Object);
extern Object serve_eval_list_of_designation_values(Object);
extern Object set_balanced_binary_tree_entry(Object,Object,Object,Object,Object,Object,Object);
extern Object set_external_variable_for_gfi(Object,Object,Object);
extern Object set_lookup_slot_value_1(Object,Object,Object);
extern Object set_non_savable_lookup_slot_value(Object,Object,Object);
extern Object set_slot_value_function(Object,Object,Object,Object);
extern Object shut_down_gfi_data_server(void);
extern Object skip_spaces_in_string(Object,Object,Object);
extern Object skip_to_after_gfi_delimitter_in_string(Object,Object,Object);
extern Object stop_collecting_data_for_gfi_data_service(Object);
extern Object store_managed_number_function(Object,Object);
extern Object store_managed_number_or_value_function(Object,Object);
extern Object string_equalw(Object,Object);
extern Object string_or_symbol_equal(Object,Object);
extern Object substring_equal(Object,Object,Object,Object,Object,Object);
extern Object supply_a_or_an(Object);
extern Object synchronize_gfi_input_file(Object,Object,Object);
extern Object text_string_length(Object);
extern Object text_string_p(Object);
extern Object text_string_substring(Object,Object,Object);
extern Object tformat(int,...);
extern Object tformat_text_string(int,...);
extern Object time_slice_expired_p(void);
extern Object tprint_gfi_time_stamp(Object);
extern Object twrite_beginning_of_wide_string(Object,Object);
extern Object twrite_fixnum(Object);
extern Object twrite_wide_character(Object);
extern Object type_specification_of_variable_or_parameter_value(Object);
extern Object unique_designation_p(Object);
extern Object update_frame_status(Object,Object,Object);
extern Object update_object_pool_meters_list(Object);
extern Object update_representations_of_slot_value(int,...);
extern Object warn_of_undefined_data_server(Object,Object);
extern Object warning_message_for_limit_reached_in_gfi_output(Object);
extern Object warning_message_for_non_frame_reference_for_gfi_designation(Object,Object);
extern Object warning_message_for_unnameable_variable(Object,Object,Object);
extern Object warning_message_for_wrong_reference_for_gfi_designation(Object,Object,Object);
extern Object wide_character_member(Object,Object);
extern Object withdraw_backward_chaining(Object);
extern Object write_designation_to_stream(Object,Object);
extern Object write_floating_point_number(int,...);
extern Object write_floating_point_number_simple_c_format(int,...);
extern Object write_gfi_nupec_snapshot_variable_state(Object,Object);
extern Object write_gfi_output_file_header(Object);
extern Object write_warning_message_header(Object);

#else

extern Object accept_data_from_gfi_data_service();
extern Object activate_for_gfi_input_interface();
extern Object activate_for_gfi_output_interface();
extern Object add_any_gfi_input_incomplete_frame_notes();
extern Object add_any_gfi_output_incomplete_frame_notes();
extern Object add_frame_note();
extern Object add_gfi_nupec_snapshot_values_to_history();
extern Object add_grammar_rules_function();
extern Object allocate_byte_vector_16();
extern Object allocate_managed_array();
extern Object allocate_managed_float_array();
extern Object begin_collecting_data_for_gfi_data_service();
extern Object break_out_of_debug_messages();
extern Object bytes_per_double_float_simple_array();
extern Object bytes_per_simple_vector();
extern Object bytes_per_typed_simple_array();
extern Object cancel_and_reclaim_scheduled_queue_element_1();
extern Object cascaded_ring_buffer_empty_qm();
extern Object cascaded_ring_buffer_indices_same_p();
extern Object change_current_time_in_nupec_catch_up_mode();
extern Object change_slot_value();
extern Object clear_gfi_spreadsheet_field_index();
extern Object clear_gfi_spreadsheet_field_index_tree();
extern Object clear_histories();
extern Object clear_optimized_constants();
extern Object close_gfi_input_interface();
extern Object close_gfi_output_interface();
extern Object collect_one_shot_data_for_gfi_data_service();
extern Object collect_subclasses();
extern Object come_up_with_text_conversion_style_structure();
extern Object copy_constant_wide_string_given_length();
extern Object copy_evaluation_value_1();
extern Object copy_managed_float();
extern Object copy_out_current_wide_string();
extern Object copy_text_string();
extern Object copy_tree_using_gensym_conses_1();
extern Object data_type_of_variable_or_parameter_datum();
extern Object deactivate_for_gfi_input_interface();
extern Object deactivate_for_gfi_output_interface();
extern Object def_data_server();
extern Object deinstall_gfi_true_value_update();
extern Object delete_frame_note_if_any();
extern Object delete_gensym_element_1();
extern Object designation_denotes_item_p();
extern Object designation_operator_or_giver_of_value_p();
extern Object direct_structure_method();
extern Object encode_gfi_input_line_g2_time();
extern Object evaluate_designation();
extern Object expand_history_ring_buffer();
extern Object export_and_emit_character();
extern Object export_and_emit_text_string();
extern Object extend_current_gensym_string();
extern Object flatten_binary_tree();
extern Object flatten_gfi_spreadsheet_field_index();
extern Object frame_hash_function();
extern Object future_task_schedule_2();
extern Object g2_stream_close();
extern Object g2_stream_get_file_position();
extern Object g2_stream_open_for_input();
extern Object g2_stream_open_for_output();
extern Object g2_stream_p();
extern Object g2_stream_read_into_buffer();
extern Object g2_stream_rename_file();
extern Object g2_stream_write_line_terminator_using_text_conversion_style();
extern Object generate_designation_for_block();
extern Object generate_float_vector();
extern Object gensym_cons_1();
extern Object gensym_decode_unix_time();
extern Object gensym_encode_unix_time_as_managed_float();
extern Object get_current_value();
extern Object get_history_g2_time();
extern Object get_history_value_for_cascaded_ring_buffer();
extern Object get_lookup_slot_value();
extern Object get_lookup_slot_value_given_default();
extern Object get_newest_active_element_index_for_cascaded_ring_buffer();
extern Object get_oldest_active_element_index_for_cascaded_ring_buffer();
extern Object get_or_make_up_designation_for_block();
extern Object get_pathname_for_gfi_interface();
extern Object get_slot_value_function();
extern Object getfq_function_no_default();
extern Object gfi_delete_from_queue();
extern Object gfi_input_find_non_white_space();
extern Object gfi_input_interface_non_default_slots_set_p();
extern Object gfi_input_nupec_snapshot_values_periodically();
extern Object gfi_output_event_log_values_periodically();
extern Object gfi_output_event_log_values_periodically_task();
extern Object gfi_output_interface_non_default_slots_set_p();
extern Object gfi_output_nupec_snapshot_values_periodically();
extern Object gfi_output_spreadsheet_values_periodically();
extern Object gfi_output_spreadsheet_values_periodically_task();
extern Object gfi_queue_item_structure_memory_usage();
extern Object gfi_read_line();
extern Object gfi_requests_accept_data_calls();
extern Object gfi_spreadsheet_field_index_hash_vector_131_vector_memory_usage();
extern Object gfi_terpri();
extern Object gfi_write_char();
extern Object gfi_write_string();
extern Object give_warning_1();
extern Object handle_gfi_output_interface_new_values();
extern Object increment_active_element_index_for_cascaded_ring_buffer();
extern Object initialize_after_reading_for_gfi_input_interface();
extern Object initialize_after_reading_for_gfi_output_interface();
extern Object initialize_for_gfi_input_interface();
extern Object initialize_for_gfi_output_interface();
extern Object initialize_gfi_data_server();
extern Object install_gfi_true_value_update();
extern Object install_true_value_update();
extern Object invoke_rules_for_attribute_change_chaining();
extern Object legal_gensym_string_p();
extern Object load_and_initialize_type_description();
extern Object lookup_global_or_kb_specific_property_value();
extern Object lookup_kb_specific_property_value();
extern Object make_gfi_queue_item_1();
extern Object make_gfi_spreadsheet_field_index();
extern Object make_gfi_spreadsheet_field_index_hash_vector();
extern Object make_history_ring_buffer_1();
extern Object make_or_reformat_cascaded_ring_buffer();
extern Object make_permanent_gfi_queue_item_structure_internal();
extern Object make_permanent_gfi_spreadsheet_field_index_hash_vector_131_vector_internal();
extern Object make_permanent_queue_element_structure_internal();
extern Object make_permanent_schedule_task_structure_internal();
extern Object match_shorter_substring_p();
extern Object memq_function();
extern Object most_recent_file_operation_status_as_text();
extern Object mutate_global_property();
extern Object note_change_to_block_1();
extern Object notify_user_1();
extern Object open_gfi_input_interface();
extern Object open_gfi_output_interface();
extern Object out_gfi_spreadsheet_field_index_hash_vector_131_vectors();
extern Object output_appropriate_gfi_time_stamp();
extern Object output_appropriate_nupec_gfi_default_time_stamp();
extern Object output_appropriate_nupec_gfi_default_value();
extern Object output_gfi_explicit_time_stamp_to_stream();
extern Object output_gfi_queued_values_to_stream();
extern Object output_gfi_value();
extern Object outstanding_gfi_queue_item_count();
extern Object parse_and_put_gfi_nupec_snapshot_values();
extern Object parse_constant_designation();
extern Object parse_delimitter_then_designation();
extern Object parse_gfi_schedule_tree();
extern Object parse_nupec_snapshot_constant_designation();
extern Object parse_nupec_snapshot_gfi_time_stamp();
extern Object parse_nupec_snapshot_gfi_variable_or_parameter_value();
extern Object prepare_gfi_input_interface_to_open();
extern Object prepare_gfi_output_interface_to_open();
extern Object print_constant();
extern Object print_decoded_time();
extern Object print_designation();
extern Object push_optimized_constant();
extern Object put_current_value();
extern Object put_file_status();
extern Object put_gfi_input_file_format();
extern Object put_gfi_input_file_pathname();
extern Object put_gfi_input_time_stamp_format();
extern Object put_gfi_input_variables_update_mode();
extern Object put_gfi_input_when_active();
extern Object put_gfi_output_file_format();
extern Object put_gfi_output_file_pathname();
extern Object put_gfi_output_file_update_frequency();
extern Object put_gfi_output_time_stamp_format();
extern Object put_gfi_output_values();
extern Object put_gfi_output_when_active();
extern Object put_gfi_value_of_designation_into_appropriate_place();
extern Object put_ignore_gfi_input_base_time_qm();
extern Object put_renamed_gfi_output_file_pathname();
extern Object read_and_encode_gfi_input_base_time();
extern Object read_and_encode_nupec_snapshot_time_stamp_or_symbol();
extern Object read_gfi_designation_from_string();
extern Object read_gfi_file_header();
extern Object read_gfi_nupec_snapshot_value_from_input_line();
extern Object read_list_of_gfi_designations();
extern Object read_number_from_string();
extern Object read_one_gfi_input_line();
extern Object read_symbol_from_text_string();
extern Object read_text_string_ending_in_a_delimitter_from_string();
extern Object read_text_string_from_string();
extern Object read_text_string_with_or_without_quotes_from_string();
extern Object read_time_stamp_from_string();
extern Object read_truth_value_from_string();
extern Object reclaim_binary_tree_element_1();
extern Object reclaim_gensym_cons_1();
extern Object reclaim_gensym_list_1();
extern Object reclaim_gensym_tree_1();
extern Object reclaim_gfi_last_value_value();
extern Object reclaim_gfi_list_of_new_spreadsheet_output_values_value();
extern Object reclaim_gfi_output_not_unique_designation_p_results_value();
extern Object reclaim_gfi_output_spreadsheet_field_index_hash_value();
extern Object reclaim_gfi_output_unique_designations_value();
extern Object reclaim_gfi_output_values_value();
extern Object reclaim_gfi_queue_item_1();
extern Object reclaim_gfi_queue_of_new_output_values_contents();
extern Object reclaim_gfi_spreadsheet_field_index();
extern Object reclaim_gfi_spreadsheet_field_index_hash_vector();
extern Object reclaim_gfi_spreadsheet_field_index_tree_for_hash_leaves();
extern Object reclaim_history_buffer();
extern Object reclaim_if_temporary_constant_function();
extern Object reclaim_list_of_block_snapshots();
extern Object reclaim_managed_float_array();
extern Object reclaim_managed_number_or_value_function();
extern Object reclaim_managed_simple_float_array_of_length_1();
extern Object reclaim_managed_simple_long_array_of_length_1();
extern Object reclaim_schedule_task_args();
extern Object reclaim_slot_value();
extern Object reclaim_temporary_constant_1();
extern Object reclaim_text_string();
extern Object reclaim_wide_string();
extern Object record_block_for_tformat();
extern Object record_direct_structure_method();
extern Object record_system_variable();
extern Object regenerate_optimized_constant();
extern Object replace_gfi_nupec_snapshot_values_in_history();
extern Object replenish_gensym_cons_pool();
extern Object schedule_data_server_accept_data_calls();
extern Object schedule_gfi_output_tasks();
extern Object serve_eval_list_of_designation_values();
extern Object set_balanced_binary_tree_entry();
extern Object set_external_variable_for_gfi();
extern Object set_lookup_slot_value_1();
extern Object set_non_savable_lookup_slot_value();
extern Object set_slot_value_function();
extern Object shut_down_gfi_data_server();
extern Object skip_spaces_in_string();
extern Object skip_to_after_gfi_delimitter_in_string();
extern Object stop_collecting_data_for_gfi_data_service();
extern Object store_managed_number_function();
extern Object store_managed_number_or_value_function();
extern Object string_equalw();
extern Object string_or_symbol_equal();
extern Object substring_equal();
extern Object supply_a_or_an();
extern Object synchronize_gfi_input_file();
extern Object text_string_length();
extern Object text_string_p();
extern Object text_string_substring();
extern Object tformat();
extern Object tformat_text_string();
extern Object time_slice_expired_p();
extern Object tprint_gfi_time_stamp();
extern Object twrite_beginning_of_wide_string();
extern Object twrite_fixnum();
extern Object twrite_wide_character();
extern Object type_specification_of_variable_or_parameter_value();
extern Object unique_designation_p();
extern Object update_frame_status();
extern Object update_object_pool_meters_list();
extern Object update_representations_of_slot_value();
extern Object warn_of_undefined_data_server();
extern Object warning_message_for_limit_reached_in_gfi_output();
extern Object warning_message_for_non_frame_reference_for_gfi_designation();
extern Object warning_message_for_unnameable_variable();
extern Object warning_message_for_wrong_reference_for_gfi_designation();
extern Object wide_character_member();
extern Object withdraw_backward_chaining();
extern Object write_designation_to_stream();
extern Object write_floating_point_number();
extern Object write_floating_point_number_simple_c_format();
extern Object write_gfi_nupec_snapshot_variable_state();
extern Object write_gfi_output_file_header();
extern Object write_warning_message_header();

#endif

/* variables/constants */
extern Object Available_gensym_conses;
extern Object Available_gfi_spreadsheet_field_index_hash_vector_131_vectors;
extern Object Cache_gfi_semantics_graph;
extern Object Chain_of_available_gfi_queue_items;
extern Object Chain_of_available_queue_elements;
extern Object Chain_of_available_schedule_tasks;
extern Object Class_description_gkbprop;
extern Object Count_of_gfi_spreadsheet_field_index_hash_vector_131_vectors;
extern Object Created_simple_float_array_pool_arrays;
extern Object Current_computation_flags;
extern Object Current_computation_frame;
extern Object Current_computation_instance;
extern Object Current_g2_time;
extern Object Current_gensym_string;
extern Object Current_index;
extern Object Current_real_time;
extern Object Current_schedule_task;
extern Object Current_task_queue_vector;
extern Object Current_twriting_output_type;
extern Object Current_wide_string;
extern Object Current_wide_string_list;
extern Object Data_server_kbprop;
extern Object Data_server_or_alias_qm_kbprop;
extern Object Data_server_parameters;
extern Object Debugging_reset;
extern Object Defer_notifications_qm;
extern Object Deferred_task_queue_vector;
extern Object End_of_file_reached_code;
#define Falsity FIX((SI_Long)-1000L)
extern Object Fill_pointer_for_current_gensym_string;
extern Object Fill_pointer_for_current_wide_string;
extern Object G2_operating_system;
extern Object G2_time_at_start;
extern Object Gensym_time;
extern Object Gensym_time_at_start;
#define Gfi_delimitter FIX((SI_Long)9L)
extern Object Gfi_designation_for_base_time;
extern Object Gfi_designation_for_base_time_string_length;
extern Object Gfi_input_white_space;
extern Object Gfi_list_of_converters;
extern Object Gfi_queue_item_count;
extern Object Gfi_title_for_base_time;
extern Object Gfi_title_for_base_time_string_length;
extern Object Instances_specific_to_this_class_kbprop;
extern Object Internal_status_of_most_recent_file_operation;
#define Managed_array_index_offset FIX((SI_Long)2L)
extern Object Managed_array_unique_marker;
#define Maximum_gfi_output_queue_count FIX((SI_Long)100L)
extern Object Maximum_in_place_array_size;
extern Object Maximum_significant_decimal_digits_in_gensym_float;
extern Object Most_negative_fixnum_as_float;
extern Object Most_positive_fixnum_as_float;
extern Object Note_blocks_in_tformat;
extern Object Noting_changes_to_kb_p;
extern Object Numeric_data_type_gkbprop;
extern Object Parameter_class_description;
extern Object Priority_of_next_task;
extern Object Quantitative_variable_class_description;
extern Object Queue_of_active_gfi_input_interface_objects;
extern Object Queue_of_active_gfi_output_interface_objects;
extern Object Queue_of_active_uninterruptable_gfi_input_interface_objects;
extern Object Queue_of_active_uninterruptable_gfi_output_interface_objects;
extern Object Scope_conses;
extern Object Simple_float_array_pool_memory_usage;
extern Object Smallest_ring_buffer_vector_size;
extern Object Snapshots_of_related_blocks;
extern Object Some_time_ago;
extern Object Structure_being_reclaimed;
extern Object Suppress_warning_message_header_qm;
extern Object System_is_running;
extern Object The_type_description_of_gfi_queue_item;
extern Object Time_slice_expired_p;
extern Object Timing_parameters;
extern Object Total_length_of_current_gensym_string;
extern Object Total_length_of_current_wide_string;
extern Object Variable_class_description;
extern Object Variable_or_parameter_class_description;
extern Object Variables_that_did_not_have_values;
extern Object Vector_of_simple_float_array_pools;
extern Object Warning_message_level;
