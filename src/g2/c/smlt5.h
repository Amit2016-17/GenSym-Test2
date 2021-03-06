/* smlt5.h -- Header File for smlt5.c
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
 */


/* Symbol Definitions */
extern Object Qfloat;
extern Object Qinteger;
extern Object Qquote;

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

extern Object accumulate_quantity_sparse_values(Object,Object,Object);
extern Object accumulate_sparse_values(Object,Object,Object);
extern Object add_class_to_environment(int,...);
extern Object add_externally_simulated_entity_to_simulation_model(Object);
extern Object add_grammar_rules_function(Object);
extern Object add_model_to_simulation(Object);
extern Object add_model_which_has_something_to_simulate(Object);
extern Object add_to_rederive_set(Object,Object);
extern Object add_to_variables_to_be_rederived(Object);
extern Object add_variable_to_simulation(Object);
extern Object add_variable_to_simulation_model(Object);
extern Object adjust_model_simulation_time_to_skip_paused_period(Object);
extern Object adjust_simulation_history_at_runtime_if_necessary(Object);
extern Object adjust_simulation_history_of_model_variables_if_necessary(Object);
extern Object alias_slot_name(int,...);
extern Object allocate_byte_vector_16(Object);
extern Object allocate_managed_float_box(void);
extern Object anything_to_simulate_qm(Object);
extern Object bad_g2_array_length_stack_error(Object,Object,Object);
extern Object bytes_per_double_float_simple_array(Object);
extern Object change_slot_value(int,...);
extern Object change_sparse_vector_length(Object,Object,Object);
extern Object change_vector_from_external_simulator(Object);
extern Object change_vector_to_external_simulator(Object);
extern Object check_array_length_compatible(Object,Object);
extern Object check_array_lengths_compatible(int,...);
extern Object check_float_matrix_1(Object,Object);
extern Object check_for_incompatible_from_to_arrays(Object,Object);
extern Object check_if_superior_classes_are_defined(Object,Object);
extern Object check_index_within_bounds(Object,Object);
extern Object check_lubksb_datatypes(Object,Object,Object,Object,Object,Object);
extern Object check_ludcmp_datatypes(int,...);
extern Object check_matrices_compatible_for_multiply(Object,Object,Object);
extern Object check_matrices_compatible_for_transpose(Object,Object);
extern Object check_matrix_row_type(Object,Object);
extern Object check_range_array(Object);
extern Object check_row_length_and_type_compatible(Object,Object,Object,Object);
extern Object cleanup_for_model_definition(Object);
extern Object clear_optimized_constants(void);
extern Object clear_simulation_history_at_runtime(Object);
extern Object clear_simulation_history_of_model_variables(Object);
extern Object collect_subclasses(Object);
extern Object compile_item_designations_for_model_for_slot(int,...);
extern Object copy_managed_float(Object);
extern Object copy_out_current_wide_string(void);
extern Object current_default_simulation_time_increment(void);
extern Object current_external_simulator_configuration(void);
extern Object current_integration_algorithm(void);
extern Object current_model_is_paused_qm(void);
extern Object current_send_all_values_at_beginning_of_cycle_qm(void);
extern Object current_simulation_procedure(void);
extern Object current_vector_from_external_simulator(void);
extern Object current_vector_to_external_simulator(void);
extern Object deinstall_system_table_for_simulation_parameters(Object);
extern Object delete_from_external_simulation_runtime_structures(Object);
extern Object delete_from_rederive_set(Object);
extern Object dont_wait_for_model_to_finish_function_qm(Object);
extern Object end_simulation_procedure_or_external_simulation_cycle(void);
extern Object evaluation_truth_value_true_p(Object);
extern Object evaluation_value_value(Object);
extern Object execute_sparse_vector_operation_according_to_type(Object,Object,Object,Object);
extern Object extend_sparse_vector_as_necessary(Object,Object,Object,Object);
extern Object float_accumulation_for_sparse_max(Object,Object,Object);
extern Object float_accumulation_for_sparse_min(Object,Object,Object);
extern Object float_accumulation_for_sparse_sum(Object,Object,Object);
extern Object float_accumulation_for_sparse_sum_abs(Object,Object,Object);
extern Object for_each_element_in_installation_set(Object,Object);
extern Object forward_model_install(Object,Object,Object);
extern Object forward_model_install_1(Object,Object,Object);
extern Object g2_array_aref(Object,Object);
extern Object g2_array_max(Object);
extern Object g2_array_min(Object);
extern Object g2_array_multiply(Object,Object);
extern Object g2_array_sum(Object);
extern Object g2_array_sum_abs(Object);
extern Object g2_float_scalar_multiply(Object,Object,Object);
extern Object g2_float_sparse_add(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2_float_sparse_gather(Object,Object,Object);
extern Object g2_float_sparse_max(Object);
extern Object g2_float_sparse_min(Object);
extern Object g2_float_sparse_multiply(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2_float_sparse_scatter(Object,Object,Object,Object,Object);
extern Object g2_float_sparse_sum(Object);
extern Object g2_float_sparse_sum_abs(Object);
extern Object g2_float_vector_add(Object,Object,Object);
extern Object g2_float_vector_copy(Object,Object);
extern Object g2_float_vector_equal(Object,Object);
extern Object g2_float_vector_multiply(Object,Object);
extern Object g2_initialize_lu_decompose(Object,Object,Object);
extern Object g2_initialize_lubksb(Object,Object,Object,Object);
extern Object g2_initialize_lubksb_1(Object,Object,Object,Object);
extern Object g2_initialize_matrix_add(Object,Object,Object);
extern Object g2_initialize_matrix_copy(Object,Object);
extern Object g2_initialize_matrix_equal(Object,Object);
extern Object g2_initialize_matrix_multiply(Object,Object,Object);
extern Object g2_initialize_matrix_transpose(Object,Object);
extern Object g2_integer_scalar_multiply(Object,Object,Object);
extern Object g2_integer_sparse_add(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2_integer_sparse_gather(Object,Object,Object);
extern Object g2_integer_sparse_max(Object);
extern Object g2_integer_sparse_min(Object);
extern Object g2_integer_sparse_multiply(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2_integer_sparse_scatter(Object,Object,Object,Object,Object);
extern Object g2_integer_sparse_sum(Object);
extern Object g2_integer_sparse_sum_abs(Object);
extern Object g2_integer_vector_add(Object,Object,Object);
extern Object g2_integer_vector_copy(Object,Object);
extern Object g2_integer_vector_equal(Object,Object);
extern Object g2_integer_vector_multiply(Object,Object);
extern Object g2_lu_backward_substitute_row(Object,Object,Object);
extern Object g2_lu_backward_substitute_row_1(Object,Object,Object);
extern Object g2_lu_compute_scaling(Object,Object,Object,Object,Object);
extern Object g2_lu_compute_scaling_1(Object,Object,Object,Object);
extern Object g2_lu_crout(Object,Object,Object,Object,Object);
extern Object g2_lu_crout_1(Object,Object,Object,Object);
extern Object g2_lu_crout_2(Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2_lu_forward_substitute_row(Object,Object,Object,Object,Object);
extern Object g2_lu_forward_substitute_row_1(Object,Object,Object,Object,Object);
extern Object g2_matrix_to_float_vector_multiply(Object,Object,Object,Object);
extern Object g2_matrix_to_integer_vector_multiply(Object,Object,Object,Object);
extern Object g2_matrix_to_matrix_multiply(Object,Object,Object,Object,Object,Object);
extern Object g2_matrix_to_quantity_vector_multiply(Object,Object,Object,Object);
extern Object g2_matrix_vector_to_vector_multiply(Object,Object,Object,Object);
extern Object g2_quantity_scalar_multiply(Object,Object,Object);
extern Object g2_quantity_sparse_add(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2_quantity_sparse_gather(Object,Object,Object);
extern Object g2_quantity_sparse_max(Object);
extern Object g2_quantity_sparse_min(Object);
extern Object g2_quantity_sparse_multiply(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2_quantity_sparse_scatter(Object,Object,Object,Object,Object);
extern Object g2_quantity_sparse_sum(Object);
extern Object g2_quantity_sparse_sum_abs(Object);
extern Object g2_quantity_to_integer_sparse_gather(Object,Object,Object);
extern Object g2_quantity_to_integer_sparse_scatter(Object,Object,Object,Object,Object);
extern Object g2_quantity_vector_add(Object,Object,Object);
extern Object g2_quantity_vector_copy(Object,Object);
extern Object g2_quantity_vector_equal(Object,Object);
extern Object g2_quantity_vector_multiply(Object,Object);
extern Object g2_scalar_multiply(Object,Object,Object);
extern Object g2_scalar_multiply_1(Object,Object,Object);
extern Object g2_sparse_add(Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2_sparse_gather(Object,Object,Object);
extern Object g2_sparse_get(Object,Object,Object);
extern Object g2_sparse_multiply(Object,Object,Object,Object,Object,Object,Object);
extern Object g2_sparse_scatter(Object,Object,Object,Object,Object);
extern Object g2_sparse_set(Object,Object,Object,Object);
extern Object g2_transpose_row(Object,Object,Object,Object,Object,Object,Object);
extern Object g2_vector_add(Object,Object,Object,Object);
extern Object g2_vector_add_new(Object,Object,Object);
extern Object g2_vector_copy(Object,Object);
extern Object g2_vector_equal(Object,Object);
extern Object g2_vector_multiply(Object,Object);
extern Object g2_vector_substract(Object,Object,Object);
extern Object generate_float_vector(Object);
extern Object gensym_cons_1(Object,Object);
extern Object gensym_list_2(Object,Object);
extern Object gensym_list_3(Object,Object,Object);
extern Object get_appropriate_model_definition_for_class(Object,Object,Object);
extern Object get_current_model_definition(void);
extern Object get_instance_with_name_if_any(Object,Object);
extern Object get_lookup_slot_value(Object,Object);
extern Object get_lookup_slot_value_given_default(Object,Object,Object);
extern Object get_matrix_row(Object,Object);
extern Object get_model_queue_for_model(Object);
extern Object get_model_runtime_info_for_variable(Object);
extern Object get_model_runtime_info_given_icp_socket(Object);
extern Object get_model_simulation_time(Object);
extern Object get_model_simulation_time_increment(Object);
extern Object get_model_to_which_item_belongs(Object,Object);
extern Object get_model_which_designates_item(Object);
extern Object get_non_override_variable_group_update_structure(Object);
extern Object get_quantity_element(Object,Object);
extern Object get_slot_value_if_any_function(Object,Object,Object);
extern Object getfq_function_no_default(Object,Object);
extern Object increment_simulation_time_for_current_model_qm(void);
extern Object initialize_after_reading_for_model_definition(Object);
extern Object initialize_default_simulation_time_increment_for_model(void);
extern Object initialize_for_model_definition(Object);
extern Object initialize_model_definition(Object);
extern Object initialize_model_runtime_info(int,...);
extern Object initialize_model_runtime_info_if_necessary(Object);
extern Object initialize_simulation_control_specifications(void);
extern Object initialize_simulator(int,...);
extern Object install_item_in_model_if_appropriate(Object,Object,Object);
extern Object install_item_in_model_if_models_used(Object);
extern Object install_items_of_class_in_model(Object);
extern Object install_superblock_in_model_if_appropriate(Object,Object);
extern Object install_system_table_for_simulation_parameters(Object);
extern Object installation_set_empty_qm(Object);
extern Object integer_accumulation_for_sparse_max(Object,Object,Object);
extern Object integer_accumulation_for_sparse_min(Object,Object,Object);
extern Object integer_accumulation_for_sparse_sum(Object,Object,Object);
extern Object integer_accumulation_for_sparse_sum_abs(Object,Object,Object);
extern Object item_matches_one_in_designation(Object,Object,Object);
extern Object lookup_global_or_kb_specific_property_value(Object,Object);
extern Object lookup_kb_specific_property_value(Object,Object);
extern Object make_and_initialize_variable_simulation_runtime_structure(Object);
extern Object make_error_text(Object,Object);
extern Object make_evaluation_quantity(Object);
extern Object make_sparse_vector_exact_size(Object,Object,Object,Object);
extern Object make_variable_simulation_runtime_structure_with_model(Object);
extern Object mark_entity_as_belonging_to_model_if_appropriate(Object,Object);
extern Object mark_variable_as_belonging_to_model(Object,Object);
extern Object memq_function(Object,Object);
extern Object model_item_designations_eq(Object,Object);
extern Object model_paused_qm(Object);
extern Object model_running_or_paused_qm(Object);
extern Object model_runtime_info_function_qm(Object);
extern Object multiply_row(Object,Object,Object,Object,Object,Object);
extern Object mutate_global_property(Object,Object,Object);
extern Object mutate_kb_specific_property_value(Object,Object,Object);
extern Object note_change_to_block_1(Object,Object);
extern Object note_kb_state_change(Object,Object);
extern Object notify_user(int,...);
extern Object pause_model(Object);
extern Object phrase_cons(Object,Object);
extern Object push_optimized_constant(Object);
extern Object put_external_simulator_configuration(Object,Object,Object);
extern Object put_external_simulator_configuration_for_model(Object,Object,Object);
extern Object put_integration_algorithm_for_model(Object,Object,Object);
extern Object put_items_belonging_to_this_model(Object,Object,Object);
extern Object put_simulation_procedure(Object,Object,Object);
extern Object put_simulation_procedure_for_model(Object,Object,Object);
extern Object put_simulator_on_qm(Object,Object,Object);
extern Object quantity_accumulation_for_sparse_max(Object,Object,Object);
extern Object quantity_accumulation_for_sparse_min(Object,Object,Object);
extern Object quantity_accumulation_for_sparse_sum(Object,Object,Object);
extern Object quantity_accumulation_for_sparse_sum_abs(Object,Object,Object);
extern Object raw_stack_error_named_error(Object,Object);
extern Object reclaim_evaluation_value(Object);
extern Object reclaim_gensym_list_1(Object);
extern Object reclaim_list_of_block_snapshots(Object);
extern Object reclaim_managed_simple_float_array_of_length_1(Object);
extern Object reclaim_model_runtime_info_1(Object);
extern Object reclaim_model_runtime_info_qm_value(Object,Object);
extern Object reclaim_variable_simulation_runtime_structure(Object);
extern Object record_block_for_tformat(Object);
extern Object record_system_variable(Object,Object,Object,Object,Object,Object,Object);
extern Object regenerate_optimized_constant(Object);
extern Object remove_from_variables_to_be_rederived(Object);
extern Object remove_model_from_simulation(Object);
extern Object remove_model_which_has_nothing_to_simulate(Object);
extern Object remove_variable_from_simulation(Object);
extern Object remove_variable_from_simulation_model(Object);
extern Object replenish_gensym_cons_pool(void);
extern Object reset_model(Object);
extern Object restart_simulator_after_procedure(Object);
extern Object restart_simulator_after_procedure_1(Object);
extern Object resume_model(Object);
extern Object schedule_data_server_accept_data_calls(void);
extern Object set_lookup_slot_value_1(Object,Object,Object);
extern Object set_model_simulation_time(Object,Object);
extern Object set_model_simulation_time_increment(Object,Object);
extern Object set_quantity_element(Object,Object,Object);
extern Object shutdown_simulator(int,...);
extern Object signal_invalid_vectors(Object,Object);
extern Object start_model(Object);
extern Object store_managed_number_function(Object,Object);
extern Object superior_frame(Object);
extern Object system_table_installed_p(Object);
extern Object tformat(int,...);
extern Object tformat_stack_error_text_string(int,...);
extern Object transpose_row(Object,Object,Object,Object,Object,Object,Object);
extern Object truncate_evaluation_float_function(Object,Object,Object);
extern Object update_anything_to_simulate_in_model_qm(Object);
extern Object update_frame_status(Object,Object,Object);
extern Object update_generic_simulation_formula_for_variable_or_parameter(Object);
extern Object update_model_definitions_for_item_or_class(Object,Object,Object);
extern Object update_models_used_p(void);
extern Object update_runtime_structures_according_to_edit(int,...);
extern Object update_shortest_simulation_time_increment_for_all_models(void);
extern Object warn_of_simulation_license_restrictions_if_necessary(void);
extern Object write_list_in_chicago_style(int,...);
extern Object zero_length_sparse_vector_error(Object);

#else

extern Object accumulate_quantity_sparse_values();
extern Object accumulate_sparse_values();
extern Object add_class_to_environment();
extern Object add_externally_simulated_entity_to_simulation_model();
extern Object add_grammar_rules_function();
extern Object add_model_to_simulation();
extern Object add_model_which_has_something_to_simulate();
extern Object add_to_rederive_set();
extern Object add_to_variables_to_be_rederived();
extern Object add_variable_to_simulation();
extern Object add_variable_to_simulation_model();
extern Object adjust_model_simulation_time_to_skip_paused_period();
extern Object adjust_simulation_history_at_runtime_if_necessary();
extern Object adjust_simulation_history_of_model_variables_if_necessary();
extern Object alias_slot_name();
extern Object allocate_byte_vector_16();
extern Object allocate_managed_float_box();
extern Object anything_to_simulate_qm();
extern Object bad_g2_array_length_stack_error();
extern Object bytes_per_double_float_simple_array();
extern Object change_slot_value();
extern Object change_sparse_vector_length();
extern Object change_vector_from_external_simulator();
extern Object change_vector_to_external_simulator();
extern Object check_array_length_compatible();
extern Object check_array_lengths_compatible();
extern Object check_float_matrix_1();
extern Object check_for_incompatible_from_to_arrays();
extern Object check_if_superior_classes_are_defined();
extern Object check_index_within_bounds();
extern Object check_lubksb_datatypes();
extern Object check_ludcmp_datatypes();
extern Object check_matrices_compatible_for_multiply();
extern Object check_matrices_compatible_for_transpose();
extern Object check_matrix_row_type();
extern Object check_range_array();
extern Object check_row_length_and_type_compatible();
extern Object cleanup_for_model_definition();
extern Object clear_optimized_constants();
extern Object clear_simulation_history_at_runtime();
extern Object clear_simulation_history_of_model_variables();
extern Object collect_subclasses();
extern Object compile_item_designations_for_model_for_slot();
extern Object copy_managed_float();
extern Object copy_out_current_wide_string();
extern Object current_default_simulation_time_increment();
extern Object current_external_simulator_configuration();
extern Object current_integration_algorithm();
extern Object current_model_is_paused_qm();
extern Object current_send_all_values_at_beginning_of_cycle_qm();
extern Object current_simulation_procedure();
extern Object current_vector_from_external_simulator();
extern Object current_vector_to_external_simulator();
extern Object deinstall_system_table_for_simulation_parameters();
extern Object delete_from_external_simulation_runtime_structures();
extern Object delete_from_rederive_set();
extern Object dont_wait_for_model_to_finish_function_qm();
extern Object end_simulation_procedure_or_external_simulation_cycle();
extern Object evaluation_truth_value_true_p();
extern Object evaluation_value_value();
extern Object execute_sparse_vector_operation_according_to_type();
extern Object extend_sparse_vector_as_necessary();
extern Object float_accumulation_for_sparse_max();
extern Object float_accumulation_for_sparse_min();
extern Object float_accumulation_for_sparse_sum();
extern Object float_accumulation_for_sparse_sum_abs();
extern Object for_each_element_in_installation_set();
extern Object forward_model_install();
extern Object forward_model_install_1();
extern Object g2_array_aref();
extern Object g2_array_max();
extern Object g2_array_min();
extern Object g2_array_multiply();
extern Object g2_array_sum();
extern Object g2_array_sum_abs();
extern Object g2_float_scalar_multiply();
extern Object g2_float_sparse_add();
extern Object g2_float_sparse_gather();
extern Object g2_float_sparse_max();
extern Object g2_float_sparse_min();
extern Object g2_float_sparse_multiply();
extern Object g2_float_sparse_scatter();
extern Object g2_float_sparse_sum();
extern Object g2_float_sparse_sum_abs();
extern Object g2_float_vector_add();
extern Object g2_float_vector_copy();
extern Object g2_float_vector_equal();
extern Object g2_float_vector_multiply();
extern Object g2_initialize_lu_decompose();
extern Object g2_initialize_lubksb();
extern Object g2_initialize_lubksb_1();
extern Object g2_initialize_matrix_add();
extern Object g2_initialize_matrix_copy();
extern Object g2_initialize_matrix_equal();
extern Object g2_initialize_matrix_multiply();
extern Object g2_initialize_matrix_transpose();
extern Object g2_integer_scalar_multiply();
extern Object g2_integer_sparse_add();
extern Object g2_integer_sparse_gather();
extern Object g2_integer_sparse_max();
extern Object g2_integer_sparse_min();
extern Object g2_integer_sparse_multiply();
extern Object g2_integer_sparse_scatter();
extern Object g2_integer_sparse_sum();
extern Object g2_integer_sparse_sum_abs();
extern Object g2_integer_vector_add();
extern Object g2_integer_vector_copy();
extern Object g2_integer_vector_equal();
extern Object g2_integer_vector_multiply();
extern Object g2_lu_backward_substitute_row();
extern Object g2_lu_backward_substitute_row_1();
extern Object g2_lu_compute_scaling();
extern Object g2_lu_compute_scaling_1();
extern Object g2_lu_crout();
extern Object g2_lu_crout_1();
extern Object g2_lu_crout_2();
extern Object g2_lu_forward_substitute_row();
extern Object g2_lu_forward_substitute_row_1();
extern Object g2_matrix_to_float_vector_multiply();
extern Object g2_matrix_to_integer_vector_multiply();
extern Object g2_matrix_to_matrix_multiply();
extern Object g2_matrix_to_quantity_vector_multiply();
extern Object g2_matrix_vector_to_vector_multiply();
extern Object g2_quantity_scalar_multiply();
extern Object g2_quantity_sparse_add();
extern Object g2_quantity_sparse_gather();
extern Object g2_quantity_sparse_max();
extern Object g2_quantity_sparse_min();
extern Object g2_quantity_sparse_multiply();
extern Object g2_quantity_sparse_scatter();
extern Object g2_quantity_sparse_sum();
extern Object g2_quantity_sparse_sum_abs();
extern Object g2_quantity_to_integer_sparse_gather();
extern Object g2_quantity_to_integer_sparse_scatter();
extern Object g2_quantity_vector_add();
extern Object g2_quantity_vector_copy();
extern Object g2_quantity_vector_equal();
extern Object g2_quantity_vector_multiply();
extern Object g2_scalar_multiply();
extern Object g2_scalar_multiply_1();
extern Object g2_sparse_add();
extern Object g2_sparse_gather();
extern Object g2_sparse_get();
extern Object g2_sparse_multiply();
extern Object g2_sparse_scatter();
extern Object g2_sparse_set();
extern Object g2_transpose_row();
extern Object g2_vector_add();
extern Object g2_vector_add_new();
extern Object g2_vector_copy();
extern Object g2_vector_equal();
extern Object g2_vector_multiply();
extern Object g2_vector_substract();
extern Object generate_float_vector();
extern Object gensym_cons_1();
extern Object gensym_list_2();
extern Object gensym_list_3();
extern Object get_appropriate_model_definition_for_class();
extern Object get_current_model_definition();
extern Object get_instance_with_name_if_any();
extern Object get_lookup_slot_value();
extern Object get_lookup_slot_value_given_default();
extern Object get_matrix_row();
extern Object get_model_queue_for_model();
extern Object get_model_runtime_info_for_variable();
extern Object get_model_runtime_info_given_icp_socket();
extern Object get_model_simulation_time();
extern Object get_model_simulation_time_increment();
extern Object get_model_to_which_item_belongs();
extern Object get_model_which_designates_item();
extern Object get_non_override_variable_group_update_structure();
extern Object get_quantity_element();
extern Object get_slot_value_if_any_function();
extern Object getfq_function_no_default();
extern Object increment_simulation_time_for_current_model_qm();
extern Object initialize_after_reading_for_model_definition();
extern Object initialize_default_simulation_time_increment_for_model();
extern Object initialize_for_model_definition();
extern Object initialize_model_definition();
extern Object initialize_model_runtime_info();
extern Object initialize_model_runtime_info_if_necessary();
extern Object initialize_simulation_control_specifications();
extern Object initialize_simulator();
extern Object install_item_in_model_if_appropriate();
extern Object install_item_in_model_if_models_used();
extern Object install_items_of_class_in_model();
extern Object install_superblock_in_model_if_appropriate();
extern Object install_system_table_for_simulation_parameters();
extern Object installation_set_empty_qm();
extern Object integer_accumulation_for_sparse_max();
extern Object integer_accumulation_for_sparse_min();
extern Object integer_accumulation_for_sparse_sum();
extern Object integer_accumulation_for_sparse_sum_abs();
extern Object item_matches_one_in_designation();
extern Object lookup_global_or_kb_specific_property_value();
extern Object lookup_kb_specific_property_value();
extern Object make_and_initialize_variable_simulation_runtime_structure();
extern Object make_error_text();
extern Object make_evaluation_quantity();
extern Object make_sparse_vector_exact_size();
extern Object make_variable_simulation_runtime_structure_with_model();
extern Object mark_entity_as_belonging_to_model_if_appropriate();
extern Object mark_variable_as_belonging_to_model();
extern Object memq_function();
extern Object model_item_designations_eq();
extern Object model_paused_qm();
extern Object model_running_or_paused_qm();
extern Object model_runtime_info_function_qm();
extern Object multiply_row();
extern Object mutate_global_property();
extern Object mutate_kb_specific_property_value();
extern Object note_change_to_block_1();
extern Object note_kb_state_change();
extern Object notify_user();
extern Object pause_model();
extern Object phrase_cons();
extern Object push_optimized_constant();
extern Object put_external_simulator_configuration();
extern Object put_external_simulator_configuration_for_model();
extern Object put_integration_algorithm_for_model();
extern Object put_items_belonging_to_this_model();
extern Object put_simulation_procedure();
extern Object put_simulation_procedure_for_model();
extern Object put_simulator_on_qm();
extern Object quantity_accumulation_for_sparse_max();
extern Object quantity_accumulation_for_sparse_min();
extern Object quantity_accumulation_for_sparse_sum();
extern Object quantity_accumulation_for_sparse_sum_abs();
extern Object raw_stack_error_named_error();
extern Object reclaim_evaluation_value();
extern Object reclaim_gensym_list_1();
extern Object reclaim_list_of_block_snapshots();
extern Object reclaim_managed_simple_float_array_of_length_1();
extern Object reclaim_model_runtime_info_1();
extern Object reclaim_model_runtime_info_qm_value();
extern Object reclaim_variable_simulation_runtime_structure();
extern Object record_block_for_tformat();
extern Object record_system_variable();
extern Object regenerate_optimized_constant();
extern Object remove_from_variables_to_be_rederived();
extern Object remove_model_from_simulation();
extern Object remove_model_which_has_nothing_to_simulate();
extern Object remove_variable_from_simulation();
extern Object remove_variable_from_simulation_model();
extern Object replenish_gensym_cons_pool();
extern Object reset_model();
extern Object restart_simulator_after_procedure();
extern Object restart_simulator_after_procedure_1();
extern Object resume_model();
extern Object schedule_data_server_accept_data_calls();
extern Object set_lookup_slot_value_1();
extern Object set_model_simulation_time();
extern Object set_model_simulation_time_increment();
extern Object set_quantity_element();
extern Object shutdown_simulator();
extern Object signal_invalid_vectors();
extern Object start_model();
extern Object store_managed_number_function();
extern Object superior_frame();
extern Object system_table_installed_p();
extern Object tformat();
extern Object tformat_stack_error_text_string();
extern Object transpose_row();
extern Object truncate_evaluation_float_function();
extern Object update_anything_to_simulate_in_model_qm();
extern Object update_frame_status();
extern Object update_generic_simulation_formula_for_variable_or_parameter();
extern Object update_model_definitions_for_item_or_class();
extern Object update_models_used_p();
extern Object update_runtime_structures_according_to_edit();
extern Object update_shortest_simulation_time_increment_for_all_models();
extern Object warn_of_simulation_license_restrictions_if_necessary();
extern Object write_list_in_chicago_style();
extern Object zero_length_sparse_vector_error();

#endif

/* variables/constants */
extern Object As_fast_as_possible_model_queue;
extern Object Available_gensym_conses;
extern Object Cache_g1_semantics_graph;
extern Object Cached_top_of_stack;
extern Object Class_description_gkbprop;
extern Object Connection_class_description;
extern Object Created_simple_float_array_pool_arrays;
extern Object Current_a_matrix;
extern Object Current_b_vector;
extern Object Current_g2_time;
extern Object Current_index_array;
extern Object Current_lu_matrix;
extern Object Current_model_definition_qm;
extern Object Current_model_queue_qm;
extern Object Current_model_runtime_info_qm;
extern Object Current_twriting_output_type;
extern Object Current_wide_string;
extern Object Current_wide_string_list;
extern Object Current_x_vector;
extern Object Default_min_to_extend_sparse_vector;
extern Object Do_not_note_permanent_changes_p;
extern Object Edit_type_alias_mapping;
extern Object Entity_class_description;
extern Object Evaluating_simulator_procedure_qm;
extern Object Evaluation_false_value;
extern Object Evaluation_true_value;
#define Falsity FIX((SI_Long)-1000L)
extern Object Fill_pointer_for_current_wide_string;
extern Object Float_array_class_description;
#define Fraction_modulus_of_compound_fixnum_simulation_time FIX((SI_Long)100000L)
extern Object G2_array_class_description;
extern Object G2_array_length_maximum;
extern Object Gensym_base_time_as_managed_float;
extern Object Inhibit_model_install_qm;
extern Object Install_item_in_model_if_appropriate;
extern Object Instances_specific_to_this_class_kbprop;
extern Object Integer_array_class_description;
extern Object Item_array_class_description;
extern Object Kb_specific_property_names;
extern Object Kb_workspace_class_description;
extern Object Main_model_runtime_info;
#define Managed_array_index_offset FIX((SI_Long)2L)
extern Object Managed_float_array_unique_marker;
extern Object Max_number_of_array_elements_to_do;
extern Object Maximum_in_place_array_size;
extern Object Model_definition_class_description;
extern Object Model_definitions_for_item_or_class_kbprop;
extern Object Models_used_p;
extern Object Note_as_kb_state_change_qm;
extern Object Note_blocks_in_tformat;
extern Object Noting_changes_to_kb_p;
extern Object Object_class_description;
extern Object Quantity_array_class_description;
extern Object Releasing_kb_qm;
extern Object Result_index;
extern Object Scope_conses;
extern Object Seconds_from_1900_to_1970;
extern Object Simple_float_array_pool_memory_usage;
extern Object Simulation_parameters;
extern Object Simulation_time_accumulator;
extern Object Simulation_time_managed_float;
extern Object Snapshots_of_related_blocks;
extern Object Subtract_arrays_instead_qm;
extern Object Synchronous_model_queue;
extern Object System_has_paused;
extern Object System_is_running;
extern Object Time_used_to_adjust_histories_qm;
extern Object Total_length_of_current_wide_string;
#define Truth FIX((SI_Long)1000L)
extern Object Variable_or_parameter_class_description;
extern Object Vector_of_simple_float_array_pools;
