/* grphtl.h -- Header File for grphtl.c
 * Copyright (C) 1986-2017 Gensym Corporation.  All Rights Reserved.
 */


/* Symbol Definitions */
extern Object Qminus;
extern Object Qquote;
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

extern Object add_cascaded_ring_buffer_client(Object,Object);
extern Object add_class_to_environment(int,...);
extern Object add_delta_to_history_buffer_base_time(Object,Object);
extern Object add_generic_history_as_client_to_history_of_variable(Object);
extern Object add_to_cascaded_history(Object,Object);
extern Object add_zone_cache_element(Object,Object,Object);
extern Object add_zone_cache_element_index(Object,Object,Object);
extern Object allocate_extremum_cache(Object,Object,Object);
extern Object allocate_managed_array(int,...);
extern Object bytes_per_double_float_simple_array(Object);
extern Object bytes_per_simple_vector(Object);
extern Object check_frame_like_value_range(Object,Object,Object);
extern Object check_if_superior_classes_are_defined(Object,Object);
extern Object chestnut_floorf_function(Object,Object);
extern Object chestnut_modf_function(Object,Object);
extern Object cleanup_float_function_floats(void);
extern Object cleanup_for_generic_history(Object);
extern Object clear_history_buffer(Object);
extern Object clear_optimized_constants(void);
extern Object clone_frame(int,...);
extern Object compute_extremum_for_interval(Object,Object,Object,Object);
extern Object compute_extremum_for_zone(Object,Object,Object,Object,Object);
extern Object compute_update_interval_spec(Object);
extern Object copy_cascaded_ring_buffer(Object);
extern Object copy_extremum_cache(Object,Object);
extern Object copy_for_phrase(Object);
extern Object copy_for_slot_value(Object);
extern Object copy_frame_for_generic_history(Object);
extern Object copy_generic_history_data(Object,Object);
extern Object copy_managed_float(Object);
extern Object copy_text_string(Object);
extern Object delete_extremum_cache(Object,Object);
extern Object delete_frame(Object);
extern Object direct_structure_method(Object,Object);
extern Object evaluate_designation(Object,Object);
extern Object exceptional_float_flavor_qm(Object);
extern Object extremum_cache_structure_memory_usage(void);
extern Object fixnum_to_time_function(Object);
extern Object frame_serial_number_setf_helper_1(Object,Object);
extern Object generate_float_vector(Object);
extern Object generic_history_index(Object,Object,Object,Object);
extern Object generic_history_maximum_value_index(Object,Object,Object);
extern Object generic_history_minimum_value_index(Object,Object,Object);
extern Object generic_history_supports_indexed_access_p(Object);
extern Object generic_history_valid_p(Object);
extern Object get_cascaded_ring_buffer_for_designation(int,...);
extern Object get_cascaded_ring_buffer_for_history(int,...);
extern Object get_history_g2_time(int,...);
extern Object get_history_index_by_binary_search(Object,Object,Object);
extern Object get_lookup_slot_value(Object,Object);
extern Object get_lookup_slot_value_given_default(Object,Object,Object);
extern Object get_next_highest_prime(Object);
extern Object get_variable_for_designation(Object);
extern Object get_zone_start(Object,Object,Object);
extern Object getfq_function_no_default(Object,Object);
extern Object give_warning_1(int,...);
extern Object history_size_is_constant_qm(Object,Object);
extern Object init_ez_float(void);
extern Object initialize_generic_history(Object,Object);
extern Object invalidate_extrema_caches(Object);
extern Object invalidate_history_indices(Object);
extern Object load_and_initialize_type_description(Object,Object);
extern Object lookup_zone_cache_element(Object,Object);
extern Object make_2d_display_time(void);
extern Object make_2d_display_value(void);
extern Object make_extremum_cache_1(void);
extern Object make_frame(Object);
extern Object make_frame_like_category_default(int,...);
extern Object make_frame_like_category_parse_result(Object,Object,Object);
extern Object make_or_reformat_cascaded_ring_buffer(Object,Object,Object,Object);
extern Object make_permanent_extremum_cache_structure_internal(void);
extern Object make_thread_array(Object);
extern Object make_zone_cache_element_most_recent(Object,Object,Object);
extern Object memq_function(Object,Object);
extern Object mutate_global_property(Object,Object,Object);
extern Object new_cascaded_history(int,...);
extern Object new_constant_history(Object);
extern Object new_variable_history(Object,Object,Object);
extern Object normalize_to_gensym_float(Object);
extern Object note_change_to_dependent_frame_1(void);
extern Object outstanding_extremum_cache_count(void);
extern Object phrase_cons_with_args_reversed(Object,Object);
extern Object push_optimized_constant(Object);
extern Object reclaim_cascaded_history(int,...);
extern Object reclaim_constant_history(int,...);
extern Object reclaim_extremum_cache_1(Object);
extern Object reclaim_frame_serial_number(Object);
extern Object reclaim_generic_history(int,...);
extern Object reclaim_generic_history_data_serial_number_value(Object,Object);
extern Object reclaim_generic_history_internal(Object);
extern Object reclaim_history_buffer(Object);
extern Object reclaim_if_managed_array(Object);
extern Object reclaim_managed_simple_float_array_of_length_1(Object);
extern Object reclaim_slot_value_cons_1(Object);
extern Object reclaim_slot_value_list_1(Object);
extern Object reclaim_slot_value_tree_1(Object);
extern Object reclaim_temporary_constant_1(Object);
extern Object reclaim_variable_history(int,...);
extern Object record_direct_structure_method(Object,Object,Object);
extern Object record_system_variable(Object,Object,Object,Object,Object,Object,Object);
extern Object regenerate_optimized_constant(Object);
extern Object remove_cascaded_ring_buffer_client(Object,Object);
extern Object remove_generic_history_as_client_to_history_of_variable(Object);
extern Object remove_zone_cache_element_index(Object,Object);
extern Object reset_cascaded_history(Object);
extern Object reset_constant_history(Object);
extern Object reset_extremum_cache(Object,Object);
extern Object reset_generic_history(Object);
extern Object reset_generic_history_internal(Object);
extern Object reset_variable_history(Object);
extern Object slot_value_cons_1(Object,Object);
extern Object slot_value_list_3(Object,Object,Object);
extern Object slot_value_list_4(Object,Object,Object,Object);
extern Object smallest_lesser_factor(Object);
extern Object store_history_value(Object,Object,Object,Object,Object);
extern Object text_string_p(Object);
extern Object update_cascaded_history_expiration(Object,Object,Object);
extern Object update_generic_history_for_change_to_cascaded_ring_buffer(Object);
extern Object update_generic_history_for_clock_discontinuity(Object,Object);
extern Object update_history_for_cell_array_change(Object,Object,Object,Object);
extern Object update_object_pool_meters_list(Object);
extern Object update_whole_interval_extremum_cache(Object,Object,Object,Object);
extern Object validate_generic_history(Object);
extern Object validate_variable_history(Object);

#else

extern Object add_cascaded_ring_buffer_client();
extern Object add_class_to_environment();
extern Object add_delta_to_history_buffer_base_time();
extern Object add_generic_history_as_client_to_history_of_variable();
extern Object add_to_cascaded_history();
extern Object add_zone_cache_element();
extern Object add_zone_cache_element_index();
extern Object allocate_extremum_cache();
extern Object allocate_managed_array();
extern Object bytes_per_double_float_simple_array();
extern Object bytes_per_simple_vector();
extern Object check_frame_like_value_range();
extern Object check_if_superior_classes_are_defined();
extern Object chestnut_floorf_function();
extern Object chestnut_modf_function();
extern Object cleanup_float_function_floats();
extern Object cleanup_for_generic_history();
extern Object clear_history_buffer();
extern Object clear_optimized_constants();
extern Object clone_frame();
extern Object compute_extremum_for_interval();
extern Object compute_extremum_for_zone();
extern Object compute_update_interval_spec();
extern Object copy_cascaded_ring_buffer();
extern Object copy_extremum_cache();
extern Object copy_for_phrase();
extern Object copy_for_slot_value();
extern Object copy_frame_for_generic_history();
extern Object copy_generic_history_data();
extern Object copy_managed_float();
extern Object copy_text_string();
extern Object delete_extremum_cache();
extern Object delete_frame();
extern Object direct_structure_method();
extern Object evaluate_designation();
extern Object exceptional_float_flavor_qm();
extern Object extremum_cache_structure_memory_usage();
extern Object fixnum_to_time_function();
extern Object frame_serial_number_setf_helper_1();
extern Object generate_float_vector();
extern Object generic_history_index();
extern Object generic_history_maximum_value_index();
extern Object generic_history_minimum_value_index();
extern Object generic_history_supports_indexed_access_p();
extern Object generic_history_valid_p();
extern Object get_cascaded_ring_buffer_for_designation();
extern Object get_cascaded_ring_buffer_for_history();
extern Object get_history_g2_time();
extern Object get_history_index_by_binary_search();
extern Object get_lookup_slot_value();
extern Object get_lookup_slot_value_given_default();
extern Object get_next_highest_prime();
extern Object get_variable_for_designation();
extern Object get_zone_start();
extern Object getfq_function_no_default();
extern Object give_warning_1();
extern Object history_size_is_constant_qm();
extern Object init_ez_float();
extern Object initialize_generic_history();
extern Object invalidate_extrema_caches();
extern Object invalidate_history_indices();
extern Object load_and_initialize_type_description();
extern Object lookup_zone_cache_element();
extern Object make_2d_display_time();
extern Object make_2d_display_value();
extern Object make_extremum_cache_1();
extern Object make_frame();
extern Object make_frame_like_category_default();
extern Object make_frame_like_category_parse_result();
extern Object make_or_reformat_cascaded_ring_buffer();
extern Object make_permanent_extremum_cache_structure_internal();
extern Object make_thread_array();
extern Object make_zone_cache_element_most_recent();
extern Object memq_function();
extern Object mutate_global_property();
extern Object new_cascaded_history();
extern Object new_constant_history();
extern Object new_variable_history();
extern Object normalize_to_gensym_float();
extern Object note_change_to_dependent_frame_1();
extern Object outstanding_extremum_cache_count();
extern Object phrase_cons_with_args_reversed();
extern Object push_optimized_constant();
extern Object reclaim_cascaded_history();
extern Object reclaim_constant_history();
extern Object reclaim_extremum_cache_1();
extern Object reclaim_frame_serial_number();
extern Object reclaim_generic_history();
extern Object reclaim_generic_history_data_serial_number_value();
extern Object reclaim_generic_history_internal();
extern Object reclaim_history_buffer();
extern Object reclaim_if_managed_array();
extern Object reclaim_managed_simple_float_array_of_length_1();
extern Object reclaim_slot_value_cons_1();
extern Object reclaim_slot_value_list_1();
extern Object reclaim_slot_value_tree_1();
extern Object reclaim_temporary_constant_1();
extern Object reclaim_variable_history();
extern Object record_direct_structure_method();
extern Object record_system_variable();
extern Object regenerate_optimized_constant();
extern Object remove_cascaded_ring_buffer_client();
extern Object remove_generic_history_as_client_to_history_of_variable();
extern Object remove_zone_cache_element_index();
extern Object reset_cascaded_history();
extern Object reset_constant_history();
extern Object reset_extremum_cache();
extern Object reset_generic_history();
extern Object reset_generic_history_internal();
extern Object reset_variable_history();
extern Object slot_value_cons_1();
extern Object slot_value_list_3();
extern Object slot_value_list_4();
extern Object smallest_lesser_factor();
extern Object store_history_value();
extern Object text_string_p();
extern Object update_cascaded_history_expiration();
extern Object update_generic_history_for_change_to_cascaded_ring_buffer();
extern Object update_generic_history_for_clock_discontinuity();
extern Object update_history_for_cell_array_change();
extern Object update_object_pool_meters_list();
extern Object update_whole_interval_extremum_cache();
extern Object validate_generic_history();
extern Object validate_variable_history();

#endif

/* variables/constants */
extern Object Available_float_array_conses_tail_vector;
extern Object Available_float_array_conses_vector;
DECLARE_VARIABLE_WITH_SYMBOL(Calling_float_function_cleverly_p, Qcalling_float_function_cleverly_p);
DECLARE_VARIABLE_WITH_SYMBOL(Chain_of_available_extremum_caches, Qchain_of_available_extremum_caches);
extern Object Chain_of_available_extremum_caches_vector;
DECLARE_VARIABLE_WITH_SYMBOL(Created_simple_float_array_pool_arrays, Qcreated_simple_float_array_pool_arrays);
DECLARE_VARIABLE_WITH_SYMBOL(Current_block_of_dependent_frame, Qcurrent_block_of_dependent_frame);
DECLARE_VARIABLE_WITH_SYMBOL(Current_computation_flags, Qcurrent_computation_flags);
DECLARE_VARIABLE_WITH_SYMBOL(Current_g2_time, Qcurrent_g2_time);
DECLARE_VARIABLE_WITH_SYMBOL(Current_thread_index, Qcurrent_thread_index);
extern Object Enumeration_grammar_category_members_prop;
DECLARE_VARIABLE_WITH_SYMBOL(Extremum_cache_count, Qextremum_cache_count);
extern Object Frame_like_category_cases_prop;
DECLARE_VARIABLE_WITH_SYMBOL(G2_machine_type, Qg2_machine_type);
#define Managed_array_index_offset FIX((SI_Long)2L)
extern Object Managed_array_unique_marker;
#define Mask_for_ieee_exponent FIX((SI_Long)32752L)
extern Object Max_timespan;
extern Object Maximum_in_place_array_size;
DECLARE_VARIABLE_WITH_SYMBOL(Noting_changes_to_kb_p, Qnoting_changes_to_kb_p);
DECLARE_VARIABLE_WITH_SYMBOL(Outstanding_float_function_floats, Qoutstanding_float_function_floats);
DECLARE_VARIABLE_WITH_SYMBOL(Partition_float_union, Qpartition_float_union);
extern Object Recent_defaults_made;
DECLARE_VARIABLE_WITH_SYMBOL(Simple_float_array_pool_memory_usage, Qsimple_float_array_pool_memory_usage);
DECLARE_VARIABLE_WITH_SYMBOL(Structure_being_reclaimed, Qstructure_being_reclaimed);
DECLARE_VARIABLE_WITH_SYMBOL(Superior_frame_being_cloned_qm, Qsuperior_frame_being_cloned_qm);
DECLARE_VARIABLE_WITH_SYMBOL(System_has_paused, Qsystem_has_paused);
DECLARE_VARIABLE_WITH_SYMBOL(System_is_running, Qsystem_is_running);
extern Object The_type_description_of_extremum_cache;
DECLARE_VARIABLE_WITH_SYMBOL(Trace_validate_p, Qtrace_validate_p);
DECLARE_VARIABLE_WITH_SYMBOL(Variable_class_description, Qvariable_class_description);
DECLARE_VARIABLE_WITH_SYMBOL(Variable_or_parameter_class_description, Qvariable_or_parameter_class_description);
DECLARE_VARIABLE_WITH_SYMBOL(Variables_that_did_not_have_values, Qvariables_that_did_not_have_values);
DECLARE_VARIABLE_WITH_SYMBOL(Vector_of_simple_float_array_pools, Qvector_of_simple_float_array_pools);
DECLARE_VARIABLE_WITH_SYMBOL(Warning_message_level, Qwarning_message_level);
