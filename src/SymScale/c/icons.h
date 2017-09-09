/* icons.h -- Header File for icons.c
 * Copyright (C) 1986-2017 Gensym Corporation.  All Rights Reserved.
 */


/* Symbol Definitions */
extern Object Qstar;
extern Object Qplus;
extern Object Qminus;
extern Object Qslash;
extern Object Qcons;

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

extern Object add_extrema_to_current_region(Object,Object,Object,Object,Object,Object,Object,Object);
extern Object allocate_managed_simple_vector(Object);
extern Object assq_function(Object,Object);
extern Object bitmap_memory_usage_for_icon_rendering(Object);
extern Object bitmap_size_parameters_for_icon_rendering(Object,Object,Object,Object,Object,Object,Object);
extern Object bytes_per_simple_vector(Object);
extern Object clear_optimized_constants(void);
extern Object clockwise_polygon_p(Object);
extern Object compute_arc_bounding_box(Object,Object,Object,Object,Object,Object);
extern Object compute_circle_bounding_box(Object,Object,Object,Object,Object,Object);
extern Object compute_extrema_for_text_drawing_element(Object,Object);
extern Object compute_rows_columns_given_tile_size(Object,Object,Object);
extern Object compute_tile_size_given_required_area(Object,Object);
extern Object convert_current_scratchpad_raster_to_stored_raster(Object,Object,Object,Object,Object);
extern Object copy_for_slot_value(Object);
extern Object copy_list_using_entity_conses_1(Object);
extern Object copy_list_using_slot_value_conses_1(Object);
extern Object copy_text_string(Object);
extern Object copy_tree_including_leaves_using_gensym_conses(Object);
extern Object copy_tree_using_entity_conses_1(Object);
extern Object copy_tree_using_slot_value_conses_1(Object);
extern Object count_bitmaps_needed_for_this_icon_rendering(Object,Object,Object,Object,Object,Object,Object);
extern Object create_action_button_description(int,...);
extern Object create_arrow_description(Object,Object);
extern Object create_filled_polygon_icon_description_element(Object);
extern Object create_gensym_logo_description(Object);
extern Object create_icon_description(int,...);
extern Object create_icon_rendering(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object decache_exact_size_icon_bitmaps(Object,Object);
extern Object decache_icon_rendering(Object);
extern Object decache_this_icon_rendering_p(Object,Object);
extern Object decompose_polygon(int,...);
extern Object decompose_polygon_1(Object,Object);
extern Object delete_entity_cons_1(Object,Object);
extern Object delete_entity_element_1(Object,Object);
extern Object delete_slot_value_cons_1(Object,Object);
extern Object delete_slot_value_element_1(Object,Object);
extern Object direct_structure_method(Object,Object);
extern Object divide_polygon(Object,Object);
extern Object entity_cons_1(Object,Object);
extern Object entity_cons_memory_usage(void);
extern Object entity_list_2(Object,Object);
extern Object entity_list_3(Object,Object,Object);
extern Object entity_list_4(Object,Object,Object,Object);
extern Object entity_list_trace_hook(Object);
extern Object extrema_for_line_drawing_element(Object,Object);
extern Object fill_managed_simple_vector(Object,Object,Object,Object);
extern Object find_image_data(Object);
extern Object gensym_cons_1(Object,Object);
extern Object gensym_list_2(Object,Object);
extern Object get_computed_values_plist(Object);
extern Object get_icon_background_layer_if_any(Object);
extern Object get_icon_stipple_if_any(Object);
extern Object get_or_make_icon_rendering(Object,Object);
extern Object get_polychrome_header_from_icon_description_if_any(Object);
extern Object get_savable_image_info_for_image_name(Object);
extern Object get_variable_specification_if_any(Object);
extern Object get_x_y_max_and_offset(Object,Object,Object,Object,Object,Object);
extern Object getfq_function_no_default(Object,Object);
extern Object help_substitute_values_for_variables(Object);
extern Object icon_decaching_parameters(Object);
extern Object icon_description_slot_init_form_p(Object);
extern Object icon_description_structure_memory_usage(void);
extern Object icon_owner_class_function(Object);
extern Object initialize_region_extrema(Object);
extern Object initialize_scratchpad_raster(Object,Object,Object,Object,Object);
extern Object invert_reflection_and_rotation(Object);
extern Object legal_reflection_and_rotation_symbol_p(Object);
extern Object lines_intersect_p(Object,Object,Object,Object,Object,Object,Object,Object);
extern Object load_and_initialize_type_description(Object,Object);
extern Object lookup_symbol_as_icon_variable(Object);
extern Object make_decacheable_icon_rendering(int,...);
extern Object make_entity_list_1(Object);
extern Object make_gensym_list_1(Object);
extern Object make_icon_description_1(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object make_permanent_icon_description_structure_internal(void);
extern Object make_region_bounds_and_raster_1(void);
extern Object make_rendering_structure(Object,Object);
extern Object make_slot_value_list_1(Object);
extern Object make_thread_array(Object);
extern Object map_to_color_value(Object);
extern Object memq_function(Object,Object);
extern Object multiply_reflection_and_rotation(Object,Object);
extern Object mutate_global_property(Object,Object,Object);
extern Object native_printing_p(void);
extern Object orient_and_scale_and_paint_arc_or_circle(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object orient_and_scale_and_paint_filled_polygon(Object,Object,Object,Object,Object,Object,Object);
extern Object orient_and_scale_and_paint_line(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object orient_and_scale_and_paint_point(Object,Object,Object,Object,Object,Object,Object,Object);
extern Object orient_and_scale_and_paint_polyline(Object,Object,Object,Object,Object,Object,Object,Object);
extern Object orient_and_scale_and_paint_rounded_rectangle(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object orient_and_scale_and_paint_solid_rectangle(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object orient_and_scale_and_paint_text(Object,Object,Object,Object,Object,Object,Object);
extern Object orient_and_scale_region_extrema(Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object outstanding_entity_conses(void);
extern Object outstanding_icon_description_count(void);
extern Object outstanding_slot_value_conses(void);
extern Object override_icon_description_for_system_defined_class(int,...);
extern Object override_icon_description_for_system_defined_class_ab(int,...);
extern Object paint_arc_or_circle_in_current_scratchpad_raster(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object paint_filled_polygon_in_current_scratchpad_raster(Object,Object);
extern Object paint_filled_triangle_in_current_scratchpad_raster(Object,Object,Object,Object,Object,Object,Object);
extern Object paint_icon_image_if_any(Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object paint_image_in_current_scratchpad_raster(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object paint_line_in_current_scratchpad_raster(Object,Object,Object,Object,Object,Object);
extern Object paint_one_bitmap_for_icon_on_scratchpad_raster(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object paint_point_in_current_scratchpad_raster(Object,Object,Object);
extern Object paint_solid_rectangle_in_current_scratchpad_raster(Object,Object,Object,Object,Object);
extern Object point_list_to_unsigned_point_list(Object);
extern Object printing_window_p(Object);
extern Object push_optimized_constant(Object);
extern Object raster_dimensions_given_max_and_offset(Object,Object,Object,Object,Object,Object);
extern Object reclaim_entity_cons_1(Object);
extern Object reclaim_entity_list_1(Object);
extern Object reclaim_entity_list_star_1(Object);
extern Object reclaim_entity_tree_1(Object);
extern Object reclaim_gensym_list_1(Object);
extern Object reclaim_gensym_tree_1(Object);
extern Object reclaim_icon_description(Object);
extern Object reclaim_icon_description_internal_1(Object);
extern Object reclaim_icon_description_of_slot_description(Object);
extern Object reclaim_icon_region_extrema_qm(Object);
extern Object reclaim_icon_rendering_and_raster(Object);
extern Object reclaim_icon_renderings(Object);
extern Object reclaim_line_drawing_description(Object);
extern Object reclaim_managed_simple_float_array_of_length_1(Object);
extern Object reclaim_managed_simple_vector(Object);
extern Object reclaim_slot_value(Object);
extern Object reclaim_slot_value_cons_1(Object);
extern Object reclaim_slot_value_list_1(Object);
extern Object reclaim_slot_value_list_function(Object);
extern Object reclaim_slot_value_list_star_1(Object);
extern Object reclaim_slot_value_tree_1(Object);
extern Object reclaim_text_string(Object);
extern Object record_direct_structure_method(Object,Object,Object);
extern Object record_system_variable(Object,Object,Object,Object,Object,Object,Object);
extern Object regenerate_optimized_constant(Object);
extern Object remove_icon_rendering_from_icon_description(Object,Object);
extern Object replenish_entity_cons_pool(void);
extern Object replenish_entity_list_pool(Object);
extern Object replenish_slot_value_cons_pool(void);
extern Object replenish_slot_value_list_pool(Object);
extern Object revert_if_g2gl_object_icon_substitution(Object);
extern Object rotate_point_in_line_drawing_description(Object,Object,Object,Object,Object);
extern Object scalef_function(Object,Object);
extern Object send_icp_end_message_block(void);
extern Object send_icp_region_extrema_for_stored_raster(Object,Object,Object,Object);
extern Object sense_of_vector_angle(Object,Object,Object,Object);
extern Object set_icon_owner_class(Object,Object);
extern Object simple_apply_for_icon(Object,Object);
extern Object simple_eval_for_icon(Object);
extern Object simple_polygon_p(Object);
extern Object single_color_icon_description_p(Object);
extern Object single_color_line_drawing_description_p(Object);
extern Object slot_value_cons_1(Object,Object);
extern Object slot_value_cons_memory_usage(void);
extern Object slot_value_list_2(Object,Object);
extern Object slot_value_list_3(Object,Object,Object);
extern Object slot_value_list_4(Object,Object,Object,Object);
extern Object slot_value_list_trace_hook(Object);
extern Object slowly_draw_image_data_on_current_scratchpad(Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object sorted_plist_match_p(Object,Object);
extern Object stipple_rectangle_in_current_scratchpad_raster(Object,Object,Object,Object,Object,Object);
extern Object string_eq_w(Object,Object);
extern Object substitute_sorted_computed_values_in_variable_spec_list(Object,Object);
extern Object substitute_values_for_variables_in_line_drawing_description(Object,Object);
extern Object text_string_p(Object);
extern Object time_to_decache_p(Object);
extern Object update_bitmap_count_and_decache_if_appropriate(Object,Object,Object,Object);
extern Object update_extrema_for_current_region(Object,Object);
extern Object update_object_pool_meters_list(Object);
extern Object valid_line_drawing_description_p(Object,Object,Object,Object);
extern Object variable_spec_eq(Object,Object);
extern Object window_supports_painting_this_image_data(Object,Object);

#else

extern Object add_extrema_to_current_region();
extern Object allocate_managed_simple_vector();
extern Object assq_function();
extern Object bitmap_memory_usage_for_icon_rendering();
extern Object bitmap_size_parameters_for_icon_rendering();
extern Object bytes_per_simple_vector();
extern Object clear_optimized_constants();
extern Object clockwise_polygon_p();
extern Object compute_arc_bounding_box();
extern Object compute_circle_bounding_box();
extern Object compute_extrema_for_text_drawing_element();
extern Object compute_rows_columns_given_tile_size();
extern Object compute_tile_size_given_required_area();
extern Object convert_current_scratchpad_raster_to_stored_raster();
extern Object copy_for_slot_value();
extern Object copy_list_using_entity_conses_1();
extern Object copy_list_using_slot_value_conses_1();
extern Object copy_text_string();
extern Object copy_tree_including_leaves_using_gensym_conses();
extern Object copy_tree_using_entity_conses_1();
extern Object copy_tree_using_slot_value_conses_1();
extern Object count_bitmaps_needed_for_this_icon_rendering();
extern Object create_action_button_description();
extern Object create_arrow_description();
extern Object create_filled_polygon_icon_description_element();
extern Object create_gensym_logo_description();
extern Object create_icon_description();
extern Object create_icon_rendering();
extern Object decache_exact_size_icon_bitmaps();
extern Object decache_icon_rendering();
extern Object decache_this_icon_rendering_p();
extern Object decompose_polygon();
extern Object decompose_polygon_1();
extern Object delete_entity_cons_1();
extern Object delete_entity_element_1();
extern Object delete_slot_value_cons_1();
extern Object delete_slot_value_element_1();
extern Object direct_structure_method();
extern Object divide_polygon();
extern Object entity_cons_1();
extern Object entity_cons_memory_usage();
extern Object entity_list_2();
extern Object entity_list_3();
extern Object entity_list_4();
extern Object entity_list_trace_hook();
extern Object extrema_for_line_drawing_element();
extern Object fill_managed_simple_vector();
extern Object find_image_data();
extern Object gensym_cons_1();
extern Object gensym_list_2();
extern Object get_computed_values_plist();
extern Object get_icon_background_layer_if_any();
extern Object get_icon_stipple_if_any();
extern Object get_or_make_icon_rendering();
extern Object get_polychrome_header_from_icon_description_if_any();
extern Object get_savable_image_info_for_image_name();
extern Object get_variable_specification_if_any();
extern Object get_x_y_max_and_offset();
extern Object getfq_function_no_default();
extern Object help_substitute_values_for_variables();
extern Object icon_decaching_parameters();
extern Object icon_description_slot_init_form_p();
extern Object icon_description_structure_memory_usage();
extern Object icon_owner_class_function();
extern Object initialize_region_extrema();
extern Object initialize_scratchpad_raster();
extern Object invert_reflection_and_rotation();
extern Object legal_reflection_and_rotation_symbol_p();
extern Object lines_intersect_p();
extern Object load_and_initialize_type_description();
extern Object lookup_symbol_as_icon_variable();
extern Object make_decacheable_icon_rendering();
extern Object make_entity_list_1();
extern Object make_gensym_list_1();
extern Object make_icon_description_1();
extern Object make_permanent_icon_description_structure_internal();
extern Object make_region_bounds_and_raster_1();
extern Object make_rendering_structure();
extern Object make_slot_value_list_1();
extern Object make_thread_array();
extern Object map_to_color_value();
extern Object memq_function();
extern Object multiply_reflection_and_rotation();
extern Object mutate_global_property();
extern Object native_printing_p();
extern Object orient_and_scale_and_paint_arc_or_circle();
extern Object orient_and_scale_and_paint_filled_polygon();
extern Object orient_and_scale_and_paint_line();
extern Object orient_and_scale_and_paint_point();
extern Object orient_and_scale_and_paint_polyline();
extern Object orient_and_scale_and_paint_rounded_rectangle();
extern Object orient_and_scale_and_paint_solid_rectangle();
extern Object orient_and_scale_and_paint_text();
extern Object orient_and_scale_region_extrema();
extern Object outstanding_entity_conses();
extern Object outstanding_icon_description_count();
extern Object outstanding_slot_value_conses();
extern Object override_icon_description_for_system_defined_class();
extern Object override_icon_description_for_system_defined_class_ab();
extern Object paint_arc_or_circle_in_current_scratchpad_raster();
extern Object paint_filled_polygon_in_current_scratchpad_raster();
extern Object paint_filled_triangle_in_current_scratchpad_raster();
extern Object paint_icon_image_if_any();
extern Object paint_image_in_current_scratchpad_raster();
extern Object paint_line_in_current_scratchpad_raster();
extern Object paint_one_bitmap_for_icon_on_scratchpad_raster();
extern Object paint_point_in_current_scratchpad_raster();
extern Object paint_solid_rectangle_in_current_scratchpad_raster();
extern Object point_list_to_unsigned_point_list();
extern Object printing_window_p();
extern Object push_optimized_constant();
extern Object raster_dimensions_given_max_and_offset();
extern Object reclaim_entity_cons_1();
extern Object reclaim_entity_list_1();
extern Object reclaim_entity_list_star_1();
extern Object reclaim_entity_tree_1();
extern Object reclaim_gensym_list_1();
extern Object reclaim_gensym_tree_1();
extern Object reclaim_icon_description();
extern Object reclaim_icon_description_internal_1();
extern Object reclaim_icon_description_of_slot_description();
extern Object reclaim_icon_region_extrema_qm();
extern Object reclaim_icon_rendering_and_raster();
extern Object reclaim_icon_renderings();
extern Object reclaim_line_drawing_description();
extern Object reclaim_managed_simple_float_array_of_length_1();
extern Object reclaim_managed_simple_vector();
extern Object reclaim_slot_value();
extern Object reclaim_slot_value_cons_1();
extern Object reclaim_slot_value_list_1();
extern Object reclaim_slot_value_list_function();
extern Object reclaim_slot_value_list_star_1();
extern Object reclaim_slot_value_tree_1();
extern Object reclaim_text_string();
extern Object record_direct_structure_method();
extern Object record_system_variable();
extern Object regenerate_optimized_constant();
extern Object remove_icon_rendering_from_icon_description();
extern Object replenish_entity_cons_pool();
extern Object replenish_entity_list_pool();
extern Object replenish_slot_value_cons_pool();
extern Object replenish_slot_value_list_pool();
extern Object revert_if_g2gl_object_icon_substitution();
extern Object rotate_point_in_line_drawing_description();
extern Object scalef_function();
extern Object send_icp_end_message_block();
extern Object send_icp_region_extrema_for_stored_raster();
extern Object sense_of_vector_angle();
extern Object set_icon_owner_class();
extern Object simple_apply_for_icon();
extern Object simple_eval_for_icon();
extern Object simple_polygon_p();
extern Object single_color_icon_description_p();
extern Object single_color_line_drawing_description_p();
extern Object slot_value_cons_1();
extern Object slot_value_cons_memory_usage();
extern Object slot_value_list_2();
extern Object slot_value_list_3();
extern Object slot_value_list_4();
extern Object slot_value_list_trace_hook();
extern Object slowly_draw_image_data_on_current_scratchpad();
extern Object sorted_plist_match_p();
extern Object stipple_rectangle_in_current_scratchpad_raster();
extern Object string_eq_w();
extern Object substitute_sorted_computed_values_in_variable_spec_list();
extern Object substitute_values_for_variables_in_line_drawing_description();
extern Object text_string_p();
extern Object time_to_decache_p();
extern Object update_bitmap_count_and_decache_if_appropriate();
extern Object update_extrema_for_current_region();
extern Object update_object_pool_meters_list();
extern Object valid_line_drawing_description_p();
extern Object variable_spec_eq();
extern Object window_supports_painting_this_image_data();

#endif

/* variables/constants */
DECLARE_VARIABLE_WITH_SYMBOL(Available_entity_conses, Qavailable_entity_conses);
DECLARE_VARIABLE_WITH_SYMBOL(Available_entity_conses_tail, Qavailable_entity_conses_tail);
extern Object Available_entity_conses_tail_vector;
extern Object Available_entity_conses_vector;
DECLARE_VARIABLE_WITH_SYMBOL(Available_slot_value_conses, Qavailable_slot_value_conses);
DECLARE_VARIABLE_WITH_SYMBOL(Available_slot_value_conses_tail, Qavailable_slot_value_conses_tail);
extern Object Available_slot_value_conses_tail_vector;
extern Object Available_slot_value_conses_vector;
extern Object Bytes_per_rtl_ptr;
DECLARE_VARIABLE_WITH_SYMBOL(Chain_of_available_icon_descriptions, Qchain_of_available_icon_descriptions);
extern Object Chain_of_available_icon_descriptions_vector;
extern Object Cons_pool_conses_to_make_at_a_time;
DECLARE_VARIABLE_WITH_SYMBOL(Current_background_color_value, Qcurrent_background_color_value);
DECLARE_VARIABLE_WITH_SYMBOL(Current_foreground_color_value, Qcurrent_foreground_color_value);
DECLARE_VARIABLE_WITH_SYMBOL(Current_icon_substitution_list, Qcurrent_icon_substitution_list);
DECLARE_VARIABLE_WITH_SYMBOL(Current_icon_untransformed_height, Qcurrent_icon_untransformed_height);
DECLARE_VARIABLE_WITH_SYMBOL(Current_icon_untransformed_width, Qcurrent_icon_untransformed_width);
DECLARE_VARIABLE_WITH_SYMBOL(Current_icon_variables_override_plist, Qcurrent_icon_variables_override_plist);
DECLARE_VARIABLE_WITH_SYMBOL(Current_icon_variables_plist, Qcurrent_icon_variables_plist);
DECLARE_VARIABLE_WITH_SYMBOL(Current_image_x_scale, Qcurrent_image_x_scale);
DECLARE_VARIABLE_WITH_SYMBOL(Current_image_y_scale, Qcurrent_image_y_scale);
DECLARE_VARIABLE_WITH_SYMBOL(Current_region_maximum_x, Qcurrent_region_maximum_x);
DECLARE_VARIABLE_WITH_SYMBOL(Current_region_maximum_y, Qcurrent_region_maximum_y);
DECLARE_VARIABLE_WITH_SYMBOL(Current_region_minimum_x, Qcurrent_region_minimum_x);
DECLARE_VARIABLE_WITH_SYMBOL(Current_region_minimum_y, Qcurrent_region_minimum_y);
DECLARE_VARIABLE_WITH_SYMBOL(Current_scratchpad_raster, Qcurrent_scratchpad_raster);
DECLARE_VARIABLE_WITH_SYMBOL(Current_scratchpad_raster_depth, Qcurrent_scratchpad_raster_depth);
DECLARE_VARIABLE_WITH_SYMBOL(Current_scratchpad_raster_height, Qcurrent_scratchpad_raster_height);
DECLARE_VARIABLE_WITH_SYMBOL(Current_scratchpad_raster_tiled_p, Qcurrent_scratchpad_raster_tiled_p);
DECLARE_VARIABLE_WITH_SYMBOL(Current_scratchpad_raster_type, Qcurrent_scratchpad_raster_type);
DECLARE_VARIABLE_WITH_SYMBOL(Current_scratchpad_raster_width, Qcurrent_scratchpad_raster_width);
DECLARE_VARIABLE_WITH_SYMBOL(Current_thread_index, Qcurrent_thread_index);
DECLARE_VARIABLE_WITH_SYMBOL(Current_window, Qcurrent_window);
DECLARE_VARIABLE_WITH_SYMBOL(Current_x_max_for_stored_raster_qm, Qcurrent_x_max_for_stored_raster_qm);
DECLARE_VARIABLE_WITH_SYMBOL(Current_x_offset_for_stored_raster_qm, Qcurrent_x_offset_for_stored_raster_qm);
DECLARE_VARIABLE_WITH_SYMBOL(Current_y_max_for_stored_raster_qm, Qcurrent_y_max_for_stored_raster_qm);
DECLARE_VARIABLE_WITH_SYMBOL(Current_y_offset_for_stored_raster_qm, Qcurrent_y_offset_for_stored_raster_qm);
DECLARE_VARIABLE_WITH_SYMBOL(Entity_cons_counter, Qentity_cons_counter);
extern Object Entity_cons_counter_vector;
DECLARE_VARIABLE_WITH_SYMBOL(G2gl_object_icon_substitutions_may_be_in_use_p, Qg2gl_object_icon_substitutions_may_be_in_use_p);
DECLARE_VARIABLE_WITH_SYMBOL(Global_temp_1, Qglobal_temp_1);
DECLARE_VARIABLE_WITH_SYMBOL(Global_temp_2, Qglobal_temp_2);
DECLARE_VARIABLE_WITH_SYMBOL(Global_temp_3, Qglobal_temp_3);
DECLARE_VARIABLE_WITH_SYMBOL(Icon_description_count, Qicon_description_count);
extern Object Icon_rendering_lru_queue;
DECLARE_VARIABLE_WITH_SYMBOL(Icon_renderings_being_bulk_decached, Qicon_renderings_being_bulk_decached);
#define Icp_window_protocol_supports_raster_stipples FIX((SI_Long)22L)
#define Icp_window_protocol_supports_un_decomposed_polygons FIX((SI_Long)18L)
extern Object Isqrt_of_most_positive_fixnum;
#define Maximum_polygon_points FIX((SI_Long)500L)
extern Object Minus_of_isqrt_of_most_positive_fixnum;
DECLARE_VARIABLE_WITH_SYMBOL(On_monochrome_raster_list_p, Qon_monochrome_raster_list_p);
DECLARE_VARIABLE_WITH_SYMBOL(Printing_icon_current_region_index_qm, Qprinting_icon_current_region_index_qm);
extern Object Reflection_and_rotation_multiplication_table_prop;
DECLARE_VARIABLE_WITH_SYMBOL(Scratchpad_raster, Qscratchpad_raster);
DECLARE_VARIABLE_WITH_SYMBOL(Send_image_data_immediately_qm, Qsend_image_data_immediately_qm);
DECLARE_VARIABLE_WITH_SYMBOL(Slot_value_cons_counter, Qslot_value_cons_counter);
extern Object Slot_value_cons_counter_vector;
DECLARE_VARIABLE_WITH_SYMBOL(Structure_being_reclaimed, Qstructure_being_reclaimed);
extern Object The_type_description_of_icon_description;
