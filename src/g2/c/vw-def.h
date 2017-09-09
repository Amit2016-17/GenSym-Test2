/* vw-def.h -- Header File for vw-def.c
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
 */


/* Symbol Definitions */
extern Object Qdelete;
extern Object Qeq;
extern Object Kinitial_element;

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

extern Object access_error_structure_memory_usage(void);
extern Object add_class_to_environment(int,...);
extern Object add_item_to_workspace(int,...);
extern Object allocate_byte_vector_16(Object);
extern Object allocate_evaluation_sequence(Object);
extern Object allocate_managed_array(int,...);
extern Object assign_callback_representation_subscription_handle(Object);
extern Object bytes_per_simple_vector(Object);
extern Object bytes_per_typed_simple_array(Object,Object);
extern Object cache_evaluator_slot_info(Object);
extern Object callback_representation_fire_callback(Object,Object,Object);
extern Object chain_forward_for_attribute_if_necessary(Object,Object,Object);
extern Object check_if_superior_classes_are_defined(Object,Object);
extern Object children_of_thing(int,...);
extern Object class_subscription_structure_memory_usage(void);
extern Object class_subscriptions_structure_memory_usage(void);
extern Object cleanup_ws_representation(Object);
extern Object clear_optimized_constants(void);
extern Object clear_representation_handle(Object);
extern Object clear_representation_handle_tree(Object);
extern Object connection_structures(Object);
extern Object copy_frame_serial_number(Object);
extern Object copy_if_evaluation_value_1(Object);
extern Object copy_list_using_gensym_conses_1(Object);
extern Object copy_out_current_wide_string(void);
extern Object create_ws_representation_initial_state(Object);
extern Object create_ws_representation_updated_state(Object,Object);
extern Object deferred_update_structure_memory_usage(void);
extern Object delete_all_representations_for_icp_socket(Object);
extern Object delete_balanced_binary_tree_entry(Object,Object,Object,Object);
extern Object delete_frame(Object);
extern Object delete_gensym_element_1(Object,Object);
extern Object delete_item_access_cache(Object);
extern Object delete_representation(int,...);
extern Object demand_representation_callback_remote_procedure_name(Object);
extern Object denotation_gt_denotation_sequence(int,...);
extern Object direct_structure_method(Object,Object);
extern Object ensure_registration_on_network(Object,Object);
extern Object event_update_status_of_block_showing(Object,Object,Object);
extern Object export_color_pattern(Object);
extern Object flatten_binary_tree(Object);
extern Object flatten_representation_handle(Object);
extern Object gather_affected_representations(Object,Object,Object);
extern Object gensym_cons_1(Object,Object);
extern Object gensym_list_2(Object,Object);
extern Object gensym_list_3(Object,Object,Object);
extern Object gensym_list_4(Object,Object,Object,Object);
extern Object get_alias_for_slot_name_if_any(Object,Object);
extern Object get_attribute_description_evaluation_value(Object,Object);
extern Object get_attribute_description_from_class_description(Object,Object,Object);
extern Object get_denoted_evaluation_value(Object,Object);
extern Object get_first_item_like_child(Object);
extern Object get_interface_from_representation(Object);
extern Object get_or_make_connection_frame_and_activate_if_appropriate(Object);
extern Object get_reference_to_item(Object);
extern Object get_slot_description_of_class_description_function(Object,Object,Object);
extern Object get_thing_initial_info(Object);
extern Object get_thing_initial_info_with_all_children(Object,Object);
extern Object get_thing_updated_info(Object,Object);
extern Object get_thing_updated_info_with_all_children(Object,Object,Object);
extern Object get_topmost_child_of_block(Object);
extern Object getfq_function_no_default(Object,Object);
extern Object icp_connection_being_shutdown_qm(Object);
extern Object icp_connection_open_p(Object);
extern Object input_end_connections_and_output_stubs(Object,Object);
extern Object item_like_children(Object);
extern Object item_or_connection_being_deleted_p(Object);
extern Object javalink_versioned_call_data_evaluated_p(Object);
extern Object javalink_versioned_call_data_get_version(Object);
extern Object javalink_versioned_call_data_sendp(Object);
extern Object javalink_versioned_call_data_structure_memory_usage(void);
extern Object javalink_versioning_make_arg_list_copy(Object,Object);
extern Object javalink_versioning_reclaim_evaluated_version_bodies(Object);
extern Object load_and_initialize_type_description(Object,Object);
extern Object lookup_global_or_kb_specific_property_value(Object,Object);
extern Object lookup_kb_specific_property_value(Object,Object);
extern Object loose_end_connection_frame_p(Object);
extern Object make_access_error_1(Object,Object);
extern Object make_add_item_to_workspace_denotation(void);
extern Object make_attribute_access_on_non_frame_error(Object,Object,Object);
extern Object make_attribute_denotation(Object,Object,Object);
extern Object make_class_subscription_1(Object,Object,Object);
extern Object make_class_subscriptions_1(void);
extern Object make_conclude_into_non_v_or_p_error_message(Object);
extern Object make_conclude_no_value_into_non_variable_error_message(Object);
extern Object make_custom_event_denotation(Object);
extern Object make_default_text_string_for_access_error(Object);
extern Object make_deferred_update_1(void);
extern Object make_frame(Object);
extern Object make_gensym_list_1(Object);
extern Object make_inactive_item_in_attribute_error_message(Object,Object,Object,Object);
extern Object make_item_access_cache(void);
extern Object make_item_color_pattern_change_denotation(void);
extern Object make_item_event_denotation(Object);
extern Object make_javalink_versioned_call_data_1(void);
extern Object make_javalink_versioned_data(Object);
extern Object make_missing_implied_attribute_error_message(Object,Object);
extern Object make_named_dynamic_extent_description(Object,Object,Object,Object,Object,Object,Object);
extern Object make_no_such_class_error_message(Object);
extern Object make_no_such_virtual_attribute_error_message(Object,Object);
extern Object make_permanent_access_error_structure_internal(void);
extern Object make_permanent_class_subscription_structure_internal(void);
extern Object make_permanent_class_subscriptions_structure_internal(void);
extern Object make_permanent_deferred_update_structure_internal(void);
extern Object make_permanent_javalink_versioned_call_data_structure_internal(void);
extern Object make_permanent_representation_handle_hash_vector_109_vector_internal(void);
extern Object make_remote_procedure_item_info(Object,Object,Object,Object,Object,Object);
extern Object make_remote_procedure_name_function(Object);
extern Object make_remove_item_from_workspace_denotation(void);
extern Object make_representation(Object,Object,Object);
extern Object make_representation_handle_hash_vector(void);
extern Object make_representation_handle_table(void);
extern Object make_structure_from_dimensions(Object,Object,Object,Object);
extern Object make_variable_value_denotation(Object);
extern Object make_virtual_attribute_denotation(Object,Object);
extern Object match_subscriptions(Object,Object,Object);
extern Object mutate_global_property(Object,Object,Object);
extern Object mutate_representation_handle_tree_for_hash_tree_entry(Object,Object,Object);
extern Object new_callback_representation_subscription_handle(void);
extern Object note_change_to_block_1(Object,Object);
extern Object out_representation_handle_hash_vector_109_vectors(void);
extern Object output_connection_p_function(Object,Object);
extern Object outstanding_access_error_count(void);
extern Object outstanding_class_subscription_count(void);
extern Object outstanding_class_subscriptions_count(void);
extern Object outstanding_deferred_update_count(void);
extern Object outstanding_javalink_versioned_call_data_count(void);
extern Object push_optimized_constant(Object);
extern Object really_general_twrite(Object);
extern Object reclaim_access_error_1(Object);
extern Object reclaim_callback_representation_callback_serial_number_value(Object,Object);
extern Object reclaim_class_subscription_1(Object);
extern Object reclaim_class_subscriptions_1(Object);
extern Object reclaim_deferred_update_1(Object);
extern Object reclaim_denotation_function(Object);
extern Object reclaim_frame_serial_number(Object);
extern Object reclaim_gensym_list_1(Object);
extern Object reclaim_if_evaluation_value_1(Object);
extern Object reclaim_item_representation_denotation_value(Object,Object);
extern Object reclaim_item_representation_user_data_value_value(Object,Object);
extern Object reclaim_javalink_versioned_call_data_1(Object);
extern Object reclaim_javalink_versioned_call_data_arg_lists(Object);
extern Object reclaim_representation_address_value(Object,Object);
extern Object reclaim_representation_handle(Object);
extern Object reclaim_representation_handle_hash_vector(Object);
extern Object reclaim_represented_frame_value(Object,Object);
extern Object reclaim_rpc_argument_list(Object,Object);
extern Object reclaim_slot_value(Object);
extern Object record_direct_structure_method(Object,Object,Object);
extern Object record_system_variable(Object,Object,Object,Object,Object,Object,Object);
extern Object regenerate_optimized_constant(Object);
extern Object register_all_items_in_value(Object,Object);
extern Object remote_procedure_item_info_kind_function(Object);
extern Object remove_subscription(Object,Object);
extern Object replenish_gensym_cons_pool(void);
extern Object representation_handle_gethash(Object);
extern Object representation_handle_hash_vector_109_vector_memory_usage(void);
extern Object representation_handle_puthash(Object,Object);
extern Object representation_handle_remhash(Object);
extern Object reverse_item_like_children(Object);
extern Object send_item_representation_add_item_to_workspace_notification(Object,Object);
extern Object send_item_representation_add_or_remove_item_from_workspace_notification(Object,Object,Object);
extern Object send_item_representation_custom_event_notification(Object,Object);
extern Object send_item_representation_deletion_notification(Object);
extern Object send_item_representation_item_color_pattern_change_notification(Object,Object,Object);
extern Object send_item_representation_item_event_notification(Object);
extern Object send_item_representation_remove_item_from_workspace_notification(Object,Object);
extern Object send_representation_deletion_notification(Object);
extern Object send_rpc_start(Object,Object,Object,Object,Object);
extern Object send_versioned_ws_notification_internal(Object,Object,Object);
extern Object set_balanced_binary_tree_entry(Object,Object,Object,Object,Object,Object,Object);
extern Object set_evaluation_structure_slot(Object,Object,Object);
extern Object slot_value_number_p(Object);
extern Object start_local_representation_callback(Object,Object);
extern Object start_remote_representation_callback(Object,Object,Object);
extern Object store_callback_representation(Object);
extern Object text_string_p(Object);
extern Object tformat(int,...);
extern Object tformat_text_string(int,...);
extern Object transform_system_rpc_arguments(Object,Object,Object,Object,Object);
extern Object update_object_pool_meters_list(Object);
extern Object update_representation_dispatch(Object,Object,Object);
extern Object update_representation_with_denotation(Object,Object,Object);
extern Object update_represented_item_denotation_value(Object,Object,Object);
extern Object update_subscriptions(Object,Object,Object);
extern Object update_subscriptions_for_add_item_to_workspace(Object,Object);
extern Object update_subscriptions_for_color_change(Object,Object,Object);
extern Object update_subscriptions_for_custom_event(Object,Object,Object);
extern Object update_subscriptions_for_item_event(Object,Object);
extern Object update_subscriptions_for_remove_item_from_workspace(Object,Object);
extern Object update_subscriptions_from_slot_change(Object,Object,Object,Object);
extern Object update_subscriptions_from_variable_change(Object);
extern Object update_subscriptions_from_virtual_attribute_change(Object,Object,Object);
extern Object v5_tw_item_like_p(Object);
extern Object workspace_showing_on_ui_client_p(Object);
extern Object ws_has_ws_representation_p(Object);

#else

extern Object access_error_structure_memory_usage();
extern Object add_class_to_environment();
extern Object add_item_to_workspace();
extern Object allocate_byte_vector_16();
extern Object allocate_evaluation_sequence();
extern Object allocate_managed_array();
extern Object assign_callback_representation_subscription_handle();
extern Object bytes_per_simple_vector();
extern Object bytes_per_typed_simple_array();
extern Object cache_evaluator_slot_info();
extern Object callback_representation_fire_callback();
extern Object chain_forward_for_attribute_if_necessary();
extern Object check_if_superior_classes_are_defined();
extern Object children_of_thing();
extern Object class_subscription_structure_memory_usage();
extern Object class_subscriptions_structure_memory_usage();
extern Object cleanup_ws_representation();
extern Object clear_optimized_constants();
extern Object clear_representation_handle();
extern Object clear_representation_handle_tree();
extern Object connection_structures();
extern Object copy_frame_serial_number();
extern Object copy_if_evaluation_value_1();
extern Object copy_list_using_gensym_conses_1();
extern Object copy_out_current_wide_string();
extern Object create_ws_representation_initial_state();
extern Object create_ws_representation_updated_state();
extern Object deferred_update_structure_memory_usage();
extern Object delete_all_representations_for_icp_socket();
extern Object delete_balanced_binary_tree_entry();
extern Object delete_frame();
extern Object delete_gensym_element_1();
extern Object delete_item_access_cache();
extern Object delete_representation();
extern Object demand_representation_callback_remote_procedure_name();
extern Object denotation_gt_denotation_sequence();
extern Object direct_structure_method();
extern Object ensure_registration_on_network();
extern Object event_update_status_of_block_showing();
extern Object export_color_pattern();
extern Object flatten_binary_tree();
extern Object flatten_representation_handle();
extern Object gather_affected_representations();
extern Object gensym_cons_1();
extern Object gensym_list_2();
extern Object gensym_list_3();
extern Object gensym_list_4();
extern Object get_alias_for_slot_name_if_any();
extern Object get_attribute_description_evaluation_value();
extern Object get_attribute_description_from_class_description();
extern Object get_denoted_evaluation_value();
extern Object get_first_item_like_child();
extern Object get_interface_from_representation();
extern Object get_or_make_connection_frame_and_activate_if_appropriate();
extern Object get_reference_to_item();
extern Object get_slot_description_of_class_description_function();
extern Object get_thing_initial_info();
extern Object get_thing_initial_info_with_all_children();
extern Object get_thing_updated_info();
extern Object get_thing_updated_info_with_all_children();
extern Object get_topmost_child_of_block();
extern Object getfq_function_no_default();
extern Object icp_connection_being_shutdown_qm();
extern Object icp_connection_open_p();
extern Object input_end_connections_and_output_stubs();
extern Object item_like_children();
extern Object item_or_connection_being_deleted_p();
extern Object javalink_versioned_call_data_evaluated_p();
extern Object javalink_versioned_call_data_get_version();
extern Object javalink_versioned_call_data_sendp();
extern Object javalink_versioned_call_data_structure_memory_usage();
extern Object javalink_versioning_make_arg_list_copy();
extern Object javalink_versioning_reclaim_evaluated_version_bodies();
extern Object load_and_initialize_type_description();
extern Object lookup_global_or_kb_specific_property_value();
extern Object lookup_kb_specific_property_value();
extern Object loose_end_connection_frame_p();
extern Object make_access_error_1();
extern Object make_add_item_to_workspace_denotation();
extern Object make_attribute_access_on_non_frame_error();
extern Object make_attribute_denotation();
extern Object make_class_subscription_1();
extern Object make_class_subscriptions_1();
extern Object make_conclude_into_non_v_or_p_error_message();
extern Object make_conclude_no_value_into_non_variable_error_message();
extern Object make_custom_event_denotation();
extern Object make_default_text_string_for_access_error();
extern Object make_deferred_update_1();
extern Object make_frame();
extern Object make_gensym_list_1();
extern Object make_inactive_item_in_attribute_error_message();
extern Object make_item_access_cache();
extern Object make_item_color_pattern_change_denotation();
extern Object make_item_event_denotation();
extern Object make_javalink_versioned_call_data_1();
extern Object make_javalink_versioned_data();
extern Object make_missing_implied_attribute_error_message();
extern Object make_named_dynamic_extent_description();
extern Object make_no_such_class_error_message();
extern Object make_no_such_virtual_attribute_error_message();
extern Object make_permanent_access_error_structure_internal();
extern Object make_permanent_class_subscription_structure_internal();
extern Object make_permanent_class_subscriptions_structure_internal();
extern Object make_permanent_deferred_update_structure_internal();
extern Object make_permanent_javalink_versioned_call_data_structure_internal();
extern Object make_permanent_representation_handle_hash_vector_109_vector_internal();
extern Object make_remote_procedure_item_info();
extern Object make_remote_procedure_name_function();
extern Object make_remove_item_from_workspace_denotation();
extern Object make_representation();
extern Object make_representation_handle_hash_vector();
extern Object make_representation_handle_table();
extern Object make_structure_from_dimensions();
extern Object make_variable_value_denotation();
extern Object make_virtual_attribute_denotation();
extern Object match_subscriptions();
extern Object mutate_global_property();
extern Object mutate_representation_handle_tree_for_hash_tree_entry();
extern Object new_callback_representation_subscription_handle();
extern Object note_change_to_block_1();
extern Object out_representation_handle_hash_vector_109_vectors();
extern Object output_connection_p_function();
extern Object outstanding_access_error_count();
extern Object outstanding_class_subscription_count();
extern Object outstanding_class_subscriptions_count();
extern Object outstanding_deferred_update_count();
extern Object outstanding_javalink_versioned_call_data_count();
extern Object push_optimized_constant();
extern Object really_general_twrite();
extern Object reclaim_access_error_1();
extern Object reclaim_callback_representation_callback_serial_number_value();
extern Object reclaim_class_subscription_1();
extern Object reclaim_class_subscriptions_1();
extern Object reclaim_deferred_update_1();
extern Object reclaim_denotation_function();
extern Object reclaim_frame_serial_number();
extern Object reclaim_gensym_list_1();
extern Object reclaim_if_evaluation_value_1();
extern Object reclaim_item_representation_denotation_value();
extern Object reclaim_item_representation_user_data_value_value();
extern Object reclaim_javalink_versioned_call_data_1();
extern Object reclaim_javalink_versioned_call_data_arg_lists();
extern Object reclaim_representation_address_value();
extern Object reclaim_representation_handle();
extern Object reclaim_representation_handle_hash_vector();
extern Object reclaim_represented_frame_value();
extern Object reclaim_rpc_argument_list();
extern Object reclaim_slot_value();
extern Object record_direct_structure_method();
extern Object record_system_variable();
extern Object regenerate_optimized_constant();
extern Object register_all_items_in_value();
extern Object remote_procedure_item_info_kind_function();
extern Object remove_subscription();
extern Object replenish_gensym_cons_pool();
extern Object representation_handle_gethash();
extern Object representation_handle_hash_vector_109_vector_memory_usage();
extern Object representation_handle_puthash();
extern Object representation_handle_remhash();
extern Object reverse_item_like_children();
extern Object send_item_representation_add_item_to_workspace_notification();
extern Object send_item_representation_add_or_remove_item_from_workspace_notification();
extern Object send_item_representation_custom_event_notification();
extern Object send_item_representation_deletion_notification();
extern Object send_item_representation_item_color_pattern_change_notification();
extern Object send_item_representation_item_event_notification();
extern Object send_item_representation_remove_item_from_workspace_notification();
extern Object send_representation_deletion_notification();
extern Object send_rpc_start();
extern Object send_versioned_ws_notification_internal();
extern Object set_balanced_binary_tree_entry();
extern Object set_evaluation_structure_slot();
extern Object slot_value_number_p();
extern Object start_local_representation_callback();
extern Object start_remote_representation_callback();
extern Object store_callback_representation();
extern Object text_string_p();
extern Object tformat();
extern Object tformat_text_string();
extern Object transform_system_rpc_arguments();
extern Object update_object_pool_meters_list();
extern Object update_representation_dispatch();
extern Object update_representation_with_denotation();
extern Object update_represented_item_denotation_value();
extern Object update_subscriptions();
extern Object update_subscriptions_for_add_item_to_workspace();
extern Object update_subscriptions_for_color_change();
extern Object update_subscriptions_for_custom_event();
extern Object update_subscriptions_for_item_event();
extern Object update_subscriptions_for_remove_item_from_workspace();
extern Object update_subscriptions_from_slot_change();
extern Object update_subscriptions_from_variable_change();
extern Object update_subscriptions_from_virtual_attribute_change();
extern Object v5_tw_item_like_p();
extern Object workspace_showing_on_ui_client_p();
extern Object ws_has_ws_representation_p();

#endif

/* variables/constants */
extern Object Access_error_count;
extern Object Available_gensym_conses;
extern Object Available_representation_handle_hash_vector_109_vectors;
extern Object Bounding_box_class_description;
extern Object Chain_of_available_access_errors;
extern Object Chain_of_available_class_subscriptions;
extern Object Chain_of_available_class_subscriptionss;
extern Object Chain_of_available_deferred_updates;
extern Object Chain_of_available_javalink_versioned_call_datas;
extern Object Class_description_gkbprop;
extern Object Class_subscription_count;
extern Object Class_subscriptions_count;
extern Object Class_subscriptions_kbprop;
extern Object Connection_class_description;
extern Object Count_of_representation_handle_hash_vector_109_vectors;
extern Object Current_callback_representation_subscription_handle;
extern Object Current_computation_flags;
extern Object Current_frame_serial_number;
extern Object Current_kb_specific_property_list_property_name;
extern Object Current_lookup_data;
extern Object Current_twriting_output_type;
extern Object Current_wide_string;
extern Object Current_wide_string_list;
extern Object Deferred_update_count;
extern Object Fill_pointer_for_current_wide_string;
extern Object Fp_mutate_representation_handle_tree_for_hash_tree_entry;
extern Object G2_has_v5_mode_windows_p;
extern Object Javalink_versioned_call_data_count;
extern Object Kb_specific_property_names;
extern Object Kb_workspace_class_description;
extern Object Local_pseudo_socket;
#define Managed_array_index_offset FIX((SI_Long)2L)
extern Object Maximum_in_place_array_size;
extern Object Non_kb_workspace_class_description;
extern Object Notification_data_version_map;
extern Object Noting_changes_to_kb_p;
extern Object Representation_callback_remote_procedure_name_prop;
extern Object Structure_being_reclaimed;
extern Object The_representation_handle_hashtable;
extern Object The_type_description_of_access_error;
extern Object The_type_description_of_class_subscription;
extern Object The_type_description_of_class_subscriptions;
extern Object The_type_description_of_deferred_update;
extern Object The_type_description_of_javalink_versioned_call_data;
extern Object Total_length_of_current_wide_string;
