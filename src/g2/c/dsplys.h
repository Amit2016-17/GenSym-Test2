/* dsplys.h -- Header File for dsplys.c
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
 */


/* Symbol Definitions */
extern Object Qblock;
extern Object Qdouble_float;
extern Object Qeq;
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

extern Object activate_for_digital_clock(Object);
extern Object activate_for_readout_table(Object);
extern Object activate_g2_cell_array(Object);
extern Object activate_subclass_of_entity_for_dial(Object);
extern Object activate_subclass_of_entity_for_meter(Object);
extern Object add_class_to_environment(int,...);
extern Object add_frame_representation_if_necessary(Object,Object);
extern Object add_subblock(Object,Object);
extern Object alias_slot_name(int,...);
extern Object allocate_byte_vector_16(Object);
extern Object cancel_and_reclaim_scheduled_queue_element_1(Object);
extern Object change_slot_value(int,...);
extern Object check_if_superior_classes_are_defined(Object,Object);
extern Object clear_display_for_dial(Object);
extern Object clear_display_for_digital_clock(Object);
extern Object clear_display_for_meter(Object);
extern Object clear_display_for_readout_table(Object);
extern Object clear_event_detectors(Object);
extern Object clear_optimized_constants(void);
extern Object copy_for_slot_value(Object);
extern Object copy_frame_serial_number(Object);
extern Object copy_out_current_wide_string(void);
extern Object copy_text_string(Object);
extern Object deactivate_for_digital_clock(Object);
extern Object deactivate_for_readout_table(Object);
extern Object deactivate_g2_cell_array(Object);
extern Object deactivate_subclass_of_entity_for_dial(Object);
extern Object deactivate_subclass_of_entity_for_meter(Object);
extern Object delete_frame(Object);
extern Object delete_gensym_element_1(Object,Object);
extern Object denote_cell_array_element_for_dial(Object,Object,Object);
extern Object denote_cell_array_element_for_meter(Object,Object,Object);
extern Object denote_cell_array_element_for_readout_table(Object,Object,Object);
extern Object denote_component_of_block_1(Object,Object);
extern Object determine_standard_dial_ruling(Object,Object,Object);
extern Object determine_standard_meter_ruling(Object,Object,Object);
extern Object do_deferred_updates_to_representations_in_tables(void);
extern Object draw_for_dial_marking_label(Object);
extern Object draw_for_marker_for_meter(Object);
extern Object draw_for_pointer_for_dial(Object);
extern Object draw_for_ruling_for_dial(Object);
extern Object draw_for_ruling_for_meter(Object);
extern Object draw_graphic_element(int,...);
extern Object draw_icon_for_entity(Object);
extern Object eliminate_extra_rulings_for_dial(Object);
extern Object enter_part_description(Object);
extern Object evaluation_value_eql(int,...);
extern Object evaluation_value_value(Object);
extern Object expression_cell_updated_for_dial(Object,Object,Object,Object,Object);
extern Object expression_cell_updated_for_meter(Object,Object,Object,Object,Object);
extern Object expression_cell_updated_for_readout_table(Object,Object,Object,Object,Object);
extern Object future_task_schedule_2(Object);
extern Object generate_spot_for_aggregate(Object,Object);
extern Object generate_spot_for_dial(Object,Object);
extern Object generate_spot_for_dial_marking_label(Object,Object);
extern Object generate_spot_for_input_table(Object,Object,Object);
extern Object generate_spot_for_marker_for_meter(Object,Object);
extern Object generate_spot_for_meter(Object,Object);
extern Object generate_spot_for_pointer_for_dial(Object,Object);
extern Object generate_spot_for_ruling_for_dial(Object,Object);
extern Object generate_spot_for_ruling_for_meter(Object,Object);
extern Object gensym_cons_1(Object,Object);
extern Object gensym_list_2(Object,Object);
extern Object get_cached_value_for_cell_based_display(Object);
extern Object get_current_sexp_annotation_hash(void);
extern Object get_default_computation_style_of_class(void);
extern Object get_instance_with_name_if_any(Object,Object);
extern Object get_lookup_slot_value(Object,Object);
extern Object get_lookup_slot_value_given_default(Object,Object,Object);
extern Object get_marker_for_meter_if_any(Object);
extern Object get_pointer_for_dial_if_any(Object);
extern Object get_property_value_function(int,...);
extern Object get_ruling_for_dial(Object);
extern Object get_ruling_for_meter(Object);
extern Object get_slot_description_of_class_description_function(Object,Object,Object);
extern Object get_symbol_properties_function(Object);
extern Object get_type_of_slot_if_any(int,...);
extern Object getfq_function_no_default(Object,Object);
extern Object give_warning_1(int,...);
extern Object initialize_after_reading_for_dial(Object);
extern Object initialize_after_reading_for_marker_for_meter(Object);
extern Object initialize_after_reading_for_meter(Object);
extern Object initialize_after_reading_for_pointer_for_dial(Object);
extern Object initialize_after_reading_for_readout_table(Object);
extern Object initialize_for_dial(Object);
extern Object initialize_for_marker_for_meter(Object);
extern Object initialize_for_meter(Object);
extern Object initialize_for_pointer_for_dial(Object);
extern Object initialize_for_readout_table(Object);
extern Object install_event_detector(Object,Object,Object,Object);
extern Object item_color(Object,Object);
extern Object kind_of_cell_based_display_p(Object);
extern Object kind_of_display_p(Object);
extern Object lookup_global_or_kb_specific_property_value(Object,Object);
extern Object make_dial(Object);
extern Object make_dial_spot_1(void);
extern Object make_edit_state_1(void);
extern Object make_entity(int,...);
extern Object make_event_detector_1(Object,Object,Object,Object);
extern Object make_format_frame(Object);
extern Object make_frame(Object);
extern Object make_free_text_box(int,...);
extern Object make_initial_readout_table_expression_text(Object);
extern Object make_initial_readout_table_value_text(Object);
extern Object make_marking_label(Object,Object,Object);
extern Object make_meter(Object);
extern Object make_meter_spot_1(void);
extern Object make_or_reformat_marker_for_meter(Object,Object,Object);
extern Object make_or_reformat_pointer_for_dial(Object,Object,Object);
extern Object make_or_reformat_ruling_for_dial(Object,Object);
extern Object make_or_reformat_ruling_for_meter(Object,Object);
extern Object make_or_reformat_table(int,...);
extern Object make_permanent_queue_element_structure_internal(void);
extern Object make_permanent_schedule_task_structure_internal(void);
extern Object make_readout_table(Object);
extern Object make_readout_table_expression_text(Object,Object,Object);
extern Object make_readout_table_spot_1(void);
extern Object make_sexp_annotation_hash(void);
extern Object make_text_cell_for_slot(int,...);
extern Object map_to_color_value(Object);
extern Object mutate_global_property(Object,Object,Object);
extern Object note_change_to_block_1(Object,Object);
extern Object printing_window_p(Object);
extern Object push_last_spot(Object,Object,Object);
extern Object push_optimized_constant(Object);
extern Object put_parent_dial_for_pointer_where_slot_is_absent(Object,Object);
extern Object put_parent_dial_for_ruling_where_slot_is_absent(Object,Object);
extern Object put_parent_meter_for_marker_where_slot_is_absent(Object,Object);
extern Object put_parent_meter_for_ruling_where_slot_is_absent(Object,Object);
extern Object reclaim_angle_between_markings_in_radians_value(Object,Object);
extern Object reclaim_desired_high_value_for_dial_ruling_value(Object,Object);
extern Object reclaim_desired_high_value_for_meter_ruling_value(Object,Object);
extern Object reclaim_desired_low_value_for_dial_ruling_value(Object,Object);
extern Object reclaim_desired_low_value_for_meter_ruling_value(Object,Object);
extern Object reclaim_distance_between_markings_for_meter_value(Object,Object);
extern Object reclaim_edit_state_1(Object);
extern Object reclaim_event_detector_1(Object);
extern Object reclaim_gensym_list_1(Object);
extern Object reclaim_gensym_tree_1(Object);
extern Object reclaim_high_value_for_dial_ruling_value(Object,Object);
extern Object reclaim_high_value_for_meter_ruling_value(Object,Object);
extern Object reclaim_increment_per_dial_ruling_value(Object,Object);
extern Object reclaim_increment_per_meter_ruling_value(Object,Object);
extern Object reclaim_low_value_for_dial_ruling_value(Object,Object);
extern Object reclaim_low_value_for_meter_ruling_value(Object,Object);
extern Object reclaim_managed_number_or_value_function(Object);
extern Object reclaim_pointer_position_in_radians_qm_value(Object,Object);
extern Object reclaim_ruling_high_value_angle_in_radians_value(Object,Object);
extern Object reclaim_ruling_low_value_angle_in_radians_value(Object,Object);
extern Object reclaim_schedule_task_args(Object);
extern Object reclaim_slot_value(Object);
extern Object record_system_variable(Object,Object,Object,Object,Object,Object,Object);
extern Object rectangle_visible_p(Object);
extern Object regenerate_optimized_constant(Object);
extern Object register_expression_cell_during_compilation(int,...);
extern Object register_expression_cell_during_slot_putter(Object,Object,Object);
extern Object remove_as_subblock_if_necessary(int,...);
extern Object replenish_gensym_cons_pool(void);
extern Object scalef_function(Object,Object);
extern Object schedule_computation_instance_execution(Object,Object,Object);
extern Object schedule_expression_cell_execution_given_cell(Object,Object,Object);
extern Object send_ws_representations_item_virtual_attribute_change(Object,Object,Object);
extern Object set_balanced_binary_tree_entry(Object,Object,Object,Object,Object,Object,Object);
extern Object set_current_background_color_value(Object);
extern Object set_edges_of_block(Object,Object,Object,Object,Object);
extern Object set_non_savable_lookup_slot_value(Object,Object,Object);
extern Object spot_generator_for_readout_table_format(Object,Object);
extern Object store_managed_number_or_value_function(Object,Object);
extern Object text_string_p(Object);
extern Object trigger_and_clear_event_detectors(Object);
extern Object trigger_event_detector(Object);
extern Object twrite_beginning_of_wide_string(Object,Object);
extern Object update_all_representations_of_slot(Object,Object,Object,Object);
extern Object update_backward_chaining_displays_function(Object);
extern Object update_cell_based_display_computation_style(int,...);
extern Object update_cell_based_display_for_dial(Object,Object,Object,Object);
extern Object update_cell_based_display_for_meter(Object,Object,Object,Object);
extern Object update_cell_based_display_for_readout_table(Object,Object,Object,Object);
extern Object update_computation_style_for_trend_chart(Object,Object);
extern Object update_computation_style_with_display_settings(Object,Object);
extern Object update_display_for_dial(Object,Object,Object,Object);
extern Object update_display_for_digital_clock(Object,Object,Object,Object);
extern Object update_display_for_meter(Object,Object,Object,Object);
extern Object update_display_for_readout_table(Object,Object,Object,Object);
extern Object update_display_if_not_reprocessed(Object,Object);
extern Object update_frame_name_references(Object);
extern Object update_images_of_block(Object,Object,Object);
extern Object update_representations_of_slot_value(int,...);
extern Object variable_has_received_a_value(Object,Object);
extern Object variable_is_no_longer_available(Object,Object);
extern Object wake_up_code_body_invocation(Object);
extern Object wake_up_inference_background_collection(Object);
extern Object wake_up_variable(Object);
extern Object withdraw_backward_chaining(Object);
extern Object write_floating_point_number(int,...);

#else

extern Object activate_for_digital_clock();
extern Object activate_for_readout_table();
extern Object activate_g2_cell_array();
extern Object activate_subclass_of_entity_for_dial();
extern Object activate_subclass_of_entity_for_meter();
extern Object add_class_to_environment();
extern Object add_frame_representation_if_necessary();
extern Object add_subblock();
extern Object alias_slot_name();
extern Object allocate_byte_vector_16();
extern Object cancel_and_reclaim_scheduled_queue_element_1();
extern Object change_slot_value();
extern Object check_if_superior_classes_are_defined();
extern Object clear_display_for_dial();
extern Object clear_display_for_digital_clock();
extern Object clear_display_for_meter();
extern Object clear_display_for_readout_table();
extern Object clear_event_detectors();
extern Object clear_optimized_constants();
extern Object copy_for_slot_value();
extern Object copy_frame_serial_number();
extern Object copy_out_current_wide_string();
extern Object copy_text_string();
extern Object deactivate_for_digital_clock();
extern Object deactivate_for_readout_table();
extern Object deactivate_g2_cell_array();
extern Object deactivate_subclass_of_entity_for_dial();
extern Object deactivate_subclass_of_entity_for_meter();
extern Object delete_frame();
extern Object delete_gensym_element_1();
extern Object denote_cell_array_element_for_dial();
extern Object denote_cell_array_element_for_meter();
extern Object denote_cell_array_element_for_readout_table();
extern Object denote_component_of_block_1();
extern Object determine_standard_dial_ruling();
extern Object determine_standard_meter_ruling();
extern Object do_deferred_updates_to_representations_in_tables();
extern Object draw_for_dial_marking_label();
extern Object draw_for_marker_for_meter();
extern Object draw_for_pointer_for_dial();
extern Object draw_for_ruling_for_dial();
extern Object draw_for_ruling_for_meter();
extern Object draw_graphic_element();
extern Object draw_icon_for_entity();
extern Object eliminate_extra_rulings_for_dial();
extern Object enter_part_description();
extern Object evaluation_value_eql();
extern Object evaluation_value_value();
extern Object expression_cell_updated_for_dial();
extern Object expression_cell_updated_for_meter();
extern Object expression_cell_updated_for_readout_table();
extern Object future_task_schedule_2();
extern Object generate_spot_for_aggregate();
extern Object generate_spot_for_dial();
extern Object generate_spot_for_dial_marking_label();
extern Object generate_spot_for_input_table();
extern Object generate_spot_for_marker_for_meter();
extern Object generate_spot_for_meter();
extern Object generate_spot_for_pointer_for_dial();
extern Object generate_spot_for_ruling_for_dial();
extern Object generate_spot_for_ruling_for_meter();
extern Object gensym_cons_1();
extern Object gensym_list_2();
extern Object get_cached_value_for_cell_based_display();
extern Object get_current_sexp_annotation_hash();
extern Object get_default_computation_style_of_class();
extern Object get_instance_with_name_if_any();
extern Object get_lookup_slot_value();
extern Object get_lookup_slot_value_given_default();
extern Object get_marker_for_meter_if_any();
extern Object get_pointer_for_dial_if_any();
extern Object get_property_value_function();
extern Object get_ruling_for_dial();
extern Object get_ruling_for_meter();
extern Object get_slot_description_of_class_description_function();
extern Object get_symbol_properties_function();
extern Object get_type_of_slot_if_any();
extern Object getfq_function_no_default();
extern Object give_warning_1();
extern Object initialize_after_reading_for_dial();
extern Object initialize_after_reading_for_marker_for_meter();
extern Object initialize_after_reading_for_meter();
extern Object initialize_after_reading_for_pointer_for_dial();
extern Object initialize_after_reading_for_readout_table();
extern Object initialize_for_dial();
extern Object initialize_for_marker_for_meter();
extern Object initialize_for_meter();
extern Object initialize_for_pointer_for_dial();
extern Object initialize_for_readout_table();
extern Object install_event_detector();
extern Object item_color();
extern Object kind_of_cell_based_display_p();
extern Object kind_of_display_p();
extern Object lookup_global_or_kb_specific_property_value();
extern Object make_dial();
extern Object make_dial_spot_1();
extern Object make_edit_state_1();
extern Object make_entity();
extern Object make_event_detector_1();
extern Object make_format_frame();
extern Object make_frame();
extern Object make_free_text_box();
extern Object make_initial_readout_table_expression_text();
extern Object make_initial_readout_table_value_text();
extern Object make_marking_label();
extern Object make_meter();
extern Object make_meter_spot_1();
extern Object make_or_reformat_marker_for_meter();
extern Object make_or_reformat_pointer_for_dial();
extern Object make_or_reformat_ruling_for_dial();
extern Object make_or_reformat_ruling_for_meter();
extern Object make_or_reformat_table();
extern Object make_permanent_queue_element_structure_internal();
extern Object make_permanent_schedule_task_structure_internal();
extern Object make_readout_table();
extern Object make_readout_table_expression_text();
extern Object make_readout_table_spot_1();
extern Object make_sexp_annotation_hash();
extern Object make_text_cell_for_slot();
extern Object map_to_color_value();
extern Object mutate_global_property();
extern Object note_change_to_block_1();
extern Object printing_window_p();
extern Object push_last_spot();
extern Object push_optimized_constant();
extern Object put_parent_dial_for_pointer_where_slot_is_absent();
extern Object put_parent_dial_for_ruling_where_slot_is_absent();
extern Object put_parent_meter_for_marker_where_slot_is_absent();
extern Object put_parent_meter_for_ruling_where_slot_is_absent();
extern Object reclaim_angle_between_markings_in_radians_value();
extern Object reclaim_desired_high_value_for_dial_ruling_value();
extern Object reclaim_desired_high_value_for_meter_ruling_value();
extern Object reclaim_desired_low_value_for_dial_ruling_value();
extern Object reclaim_desired_low_value_for_meter_ruling_value();
extern Object reclaim_distance_between_markings_for_meter_value();
extern Object reclaim_edit_state_1();
extern Object reclaim_event_detector_1();
extern Object reclaim_gensym_list_1();
extern Object reclaim_gensym_tree_1();
extern Object reclaim_high_value_for_dial_ruling_value();
extern Object reclaim_high_value_for_meter_ruling_value();
extern Object reclaim_increment_per_dial_ruling_value();
extern Object reclaim_increment_per_meter_ruling_value();
extern Object reclaim_low_value_for_dial_ruling_value();
extern Object reclaim_low_value_for_meter_ruling_value();
extern Object reclaim_managed_number_or_value_function();
extern Object reclaim_pointer_position_in_radians_qm_value();
extern Object reclaim_ruling_high_value_angle_in_radians_value();
extern Object reclaim_ruling_low_value_angle_in_radians_value();
extern Object reclaim_schedule_task_args();
extern Object reclaim_slot_value();
extern Object record_system_variable();
extern Object rectangle_visible_p();
extern Object regenerate_optimized_constant();
extern Object register_expression_cell_during_compilation();
extern Object register_expression_cell_during_slot_putter();
extern Object remove_as_subblock_if_necessary();
extern Object replenish_gensym_cons_pool();
extern Object scalef_function();
extern Object schedule_computation_instance_execution();
extern Object schedule_expression_cell_execution_given_cell();
extern Object send_ws_representations_item_virtual_attribute_change();
extern Object set_balanced_binary_tree_entry();
extern Object set_current_background_color_value();
extern Object set_edges_of_block();
extern Object set_non_savable_lookup_slot_value();
extern Object spot_generator_for_readout_table_format();
extern Object store_managed_number_or_value_function();
extern Object text_string_p();
extern Object trigger_and_clear_event_detectors();
extern Object trigger_event_detector();
extern Object twrite_beginning_of_wide_string();
extern Object update_all_representations_of_slot();
extern Object update_backward_chaining_displays_function();
extern Object update_cell_based_display_computation_style();
extern Object update_cell_based_display_for_dial();
extern Object update_cell_based_display_for_meter();
extern Object update_cell_based_display_for_readout_table();
extern Object update_computation_style_for_trend_chart();
extern Object update_computation_style_with_display_settings();
extern Object update_display_for_dial();
extern Object update_display_for_digital_clock();
extern Object update_display_for_meter();
extern Object update_display_for_readout_table();
extern Object update_display_if_not_reprocessed();
extern Object update_frame_name_references();
extern Object update_images_of_block();
extern Object update_representations_of_slot_value();
extern Object variable_has_received_a_value();
extern Object variable_is_no_longer_available();
extern Object wake_up_code_body_invocation();
extern Object wake_up_inference_background_collection();
extern Object wake_up_variable();
extern Object withdraw_backward_chaining();
extern Object write_floating_point_number();

#endif

/* variables/constants */
extern Object Available_gensym_conses;
extern Object Backward_chaining_displays;
extern Object Chain_of_available_event_detectors;
extern Object Chain_of_available_queue_elements;
extern Object Chain_of_available_schedule_tasks;
extern Object Class_description_gkbprop;
extern Object Current_background_color_value;
extern Object Current_block_of_dependent_frame;
extern Object Current_computation_component_particulars;
extern Object Current_computation_frame;
extern Object Current_computation_slot_component_group;
extern Object Current_computation_style;
extern Object Current_edit_state;
extern Object Current_foreground_color_value;
extern Object Current_g2_time;
extern Object Current_image_x_scale;
extern Object Current_image_y_scale;
extern Object Current_kb_specific_property_list_property_name;
extern Object Current_part_description;
extern Object Current_real_time;
extern Object Current_schedule_task;
extern Object Current_task_queue_vector;
extern Object Current_twriting_output_type;
extern Object Current_wide_string;
extern Object Current_wide_string_list;
extern Object Current_window;
extern Object Current_x_origin_of_drawing;
extern Object Current_y_origin_of_drawing;
extern Object Deferred_task_queue_vector;
extern Object Dial_class_description;
extern Object Digital_clock_class_description;
extern Object Do_not_update_simulated_value_qm;
extern Object Fill_pointer_for_current_wide_string;
extern Object G2_expression_cell_class_description;
extern Object Generate_source_annotation_info;
extern Object Gensym_time;
extern Object Gensym_time_at_start;
extern Object Graph_class_description;
extern Object Isqrt_of_most_positive_fixnum;
extern Object Maintain_stack_of_current_part_descriptions_p;
#define Managed_array_index_offset FIX((SI_Long)2L)
extern Object Marker_for_meter_class_description;
extern Object Maximum_in_place_array_size;
extern Object Meter_class_description;
extern Object Minus_of_isqrt_of_most_positive_fixnum;
extern Object No_specific_property_value;
extern Object Noting_changes_to_kb_p;
extern Object Part_feature_exit_methods;
extern Object Part_feature_recall_stack;
extern Object Pointer_for_dial_class_description;
extern Object Priority_of_next_task;
extern Object Readout_table_class_description;
extern Object Ruling_for_dial_class_description;
extern Object Ruling_for_meter_class_description;
extern Object Stack_of_current_part_descriptions;
extern Object Stack_of_slot_value_changes;
extern Object Structure_being_reclaimed;
extern Object Suppress_updating_of_slot_value_representations_qm;
extern Object Suppress_use_of_stack_of_slot_value_changes_p;
extern Object Suppress_warning_message_header_qm;
extern Object Symbol_properties_table;
extern Object System_is_running;
extern Object The_only_dynamic_computation_style;
extern Object Total_length_of_current_wide_string;
extern Object Variable_class_description;
extern Object Warning_message_level;
