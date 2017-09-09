/* cnct2.h -- Header File for cnct2.c
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
 */


/* Symbol Definitions */
extern Object Qeq;
extern Object Qopen;
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

extern Object activate_connection_frame_if_appropriate(Object,Object);
extern Object add_as_inferior_block(Object,Object);
extern Object add_connection_in_block(Object,Object);
extern Object add_loose_ends_as_subblocks_and_shift(Object,Object,Object,Object);
extern Object add_rectangle_to_region(Object,Object,Object,Object,Object);
extern Object add_stub(int,...);
extern Object add_stub_given_spec(Object,Object);
extern Object add_subblock(Object,Object);
extern Object adjust_connection_according_to_new_edge(Object,Object,Object,Object,Object,Object,Object);
extern Object adjust_connections_according_to_new_edge(Object,Object,Object,Object,Object);
extern Object adjust_delta_according_to_new_orientation(Object,Object,Object,Object);
extern Object adjust_points_for_connection_arrows(Object,Object,Object,Object,Object);
extern Object allocate_byte_vector_16(Object);
extern Object always_instantiate_connection_frame_for_this_class_qm(Object);
extern Object assq_function(Object,Object);
extern Object bounding_region_of_block_or_connection(Object);
extern Object bounding_region_of_fins_for_diagonal_connection_component(Object,Object,Object,Object,Object,Object);
extern Object break_out_of_debug_messages(void);
extern Object buggy_polyline_p(void);
extern Object bytes_per_simple_vector(Object);
extern Object change_color_of_connection(Object,Object,Object);
extern Object change_color_pattern_of_connection(Object,Object,Object);
extern Object change_connection_attribute(Object,Object,Object);
extern Object change_connection_deltas_for_object_being_dragged(Object,Object,Object,Object);
extern Object change_edges_of_block(Object,Object,Object,Object,Object);
extern Object change_icon_attribute(Object,Object,Object);
extern Object change_slot_value(int,...);
extern Object cleanup_for_connection(Object);
extern Object clear_optimized_constants(void);
extern Object clone_connection_attributes_plist(Object,Object);
extern Object clone_frame(int,...);
extern Object clone_stub_for_connection(Object,Object,Object,Object);
extern Object compute_arrow_points(Object,Object,Object,Object,Object,Object,Object,Object);
extern Object compute_connection_vertices(Object);
extern Object compute_delta_from_end_position(Object,Object,Object,Object);
extern Object compute_delta_from_end_position_link_1(Object,Object,Object,Object,Object);
extern Object compute_diagonal_connection_vertices(Object);
extern Object compute_miter_points(Object,Object);
extern Object compute_new_vertex(Object,Object,Object,Object,Object,Object);
extern Object compute_new_vertex_and_draw_diagonal_link(Object,Object,Object,Object,Object,Object,Object,Object);
extern Object compute_next_delta(Object,Object,Object,Object,Object,Object,Object,Object);
extern Object compute_next_delta_1(Object,Object,Object,Object,Object,Object);
extern Object compute_next_delta_swallowing_zeros(Object,Object,Object,Object,Object,Object,Object);
extern Object compute_orthogonal_connection_vertices(Object);
extern Object compute_scaled_line_pattern(Object,Object,Object);
extern Object compute_stripes(Object,Object,Object,Object,Object);
extern Object connection_arrow_height_1(Object,Object);
extern Object connection_arrow_width(Object);
extern Object connection_arrows_of_connection(Object);
extern Object connection_connected_to_block_p(Object,Object);
extern Object connection_fin_length(int,...);
extern Object connection_has_arrows_p(Object);
extern Object connection_has_classic_fins_p(Object);
extern Object connection_is_straight_qm(Object);
extern Object connection_line_pattern(Object);
extern Object connection_subrectangle_structure_structure_memory_usage(void);
extern Object connection_total_width(Object);
extern Object convert_to_magnification(Object);
extern Object copy_for_slot_value(Object);
extern Object copy_frame_serial_number(Object);
extern Object copy_list_using_gensym_conses_1(Object);
extern Object copy_out_current_wide_string(void);
extern Object copy_tree_using_gensym_conses_1(Object);
extern Object copy_unsaved_slots_from_connection_to_connection_frame(Object,Object);
extern Object decache_roles_for_entities_related_to_this_connection(Object);
extern Object decode_arrow_spec(Object,Object,Object,Object);
extern Object decode_arrow_spec_1(Object);
extern Object default_placement_of_connection_arrow(Object,Object);
extern Object delete_balanced_binary_tree_entry(Object,Object,Object,Object);
extern Object delete_connection_in_block(Object,Object,Object);
extern Object determine_extreme_edges_of_block(Object);
extern Object determine_subworkspace_connection_posts_for_object(Object,Object);
extern Object direct_structure_method(Object,Object);
extern Object draw_circle(int,...);
extern Object draw_connection(Object,Object);
extern Object draw_connection_1(Object,Object);
extern Object draw_connection_arrow(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object draw_connection_arrow_1(Object,Object,Object,Object,Object,Object);
extern Object draw_connection_arrows(Object,Object,Object,Object,Object,Object);
extern Object draw_connection_fins(Object,Object,Object,Object);
extern Object draw_connection_frame_in_xor(Object,Object,Object);
extern Object draw_connection_structure_in_xor(Object,Object,Object);
extern Object draw_connection_subrectangles(Object,Object,Object,Object,Object,Object,Object);
extern Object draw_connections_for_block(Object);
extern Object draw_diagonal_link(Object,Object,Object,Object,Object);
extern Object draw_fins_for_connection_component(Object,Object,Object,Object,Object,Object);
extern Object draw_fins_for_diagonal_connection_component(Object,Object,Object,Object,Object,Object,Object);
extern Object draw_fins_for_diagonal_connection_component_1(Object,Object,Object,Object,Object,Object,Object,Object);
extern Object draw_graphic_element(int,...);
extern Object draw_line(Object,Object,Object,Object,Object);
extern Object draw_polygon(int,...);
extern Object draw_subrectangle_for_connection(Object,Object);
extern Object draw_wide_polyline(Object,Object,Object,Object,Object);
extern Object enlarge_workspace_for_block_and_subblocks_as_necessary(Object,Object);
extern Object enlarge_workspace_if_necessary(int,...);
extern Object ensure_layer_positions(Object);
extern Object find_connection_or_block_below_this_connection(Object,Object);
extern Object float_cross(Object,Object,Object,Object);
extern Object float_delta_x_in_window(Object,Object);
extern Object float_distance(Object,Object);
extern Object float_dot(Object,Object,Object,Object);
extern Object float_length(Object,Object);
extern Object float_square(Object);
extern Object flush_subworkspace_connection_posts_for_object(Object,Object,Object);
extern Object generate_connection_subrectangle_structures(Object);
extern Object gensym_cons_1(Object,Object);
extern Object gensym_list_3(Object,Object,Object);
extern Object gensym_list_4(Object,Object,Object,Object);
extern Object get_block_at_other_end_of_connection(Object,Object);
extern Object get_connection_for_loose_end(Object);
extern Object get_connection_layer_position(Object);
extern Object get_direction_of_connection(int,...);
extern Object get_gensym_environment_variable(Object);
extern Object get_lookup_slot_value(Object,Object);
extern Object get_or_make_connection_frame_and_activate_if_appropriate(Object);
extern Object get_port_name_given_block_and_connection(int,...);
extern Object get_position_at_this_end_of_connection(Object,Object);
extern Object get_ruling_for_meter(Object);
extern Object get_slot_description_of_class_description_function(Object,Object,Object);
extern Object get_style_of_connection(Object);
extern Object get_superblock_of_connection(Object);
extern Object get_superblock_of_connection_frame(Object);
extern Object get_workspace_if_any(Object);
extern Object getfq_function_no_default(Object,Object);
extern Object icon_description_for_instance(Object);
extern Object increment_current_frame_serial_number(void);
extern Object initialize_connection_subrectangle_structures(Object,Object,Object,Object,Object,Object,Object,Object);
extern Object initialize_cumulative_scaled_widths(Object);
extern Object invalidate_color_of_block(Object,Object,Object);
extern Object invalidate_layer_positions(Object);
extern Object invalidate_region_for_block_or_connection(Object);
extern Object invalidate_region_of_workspace(int,...);
extern Object inverse_magnify(Object,Object);
extern Object invert_reflection_and_rotation(Object);
extern Object item_x_position(Object);
extern Object item_y_position(Object);
extern Object lastn(Object,Object);
extern Object length_of_arrow_shape(Object,Object,Object);
extern Object load_and_initialize_type_description(Object,Object);
extern Object local_edges_of_block_or_connection(Object);
extern Object lookup_global_or_kb_specific_property_value(Object,Object);
extern Object lookup_kb_specific_property_value(Object,Object);
extern Object lower_connection_frame_to_bottom(Object);
extern Object magnify_connections_on_block_in_workspace(Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object magnify_end_position(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object magnify_icon(Object,Object,Object,Object,Object,Object);
extern Object make_and_install_new_connection_frame(Object,Object);
extern Object make_connection_1(void);
extern Object make_connection_item_1(Object);
extern Object make_connection_neither_permanent_nor_transient(Object);
extern Object make_connection_permanent(Object);
extern Object make_connection_subrectangle_structure_1(Object);
extern Object make_connection_transient(Object);
extern Object make_empty_region(void);
extern Object make_entity(int,...);
extern Object make_frame(Object);
extern Object make_gensym_list_1(Object);
extern Object make_icon_slot_group_1(void);
extern Object make_new_connection_frame_for_connection(Object,Object);
extern Object make_permanent_connection_subrectangle_structure_structure_internal(void);
extern Object make_stub(int,...);
extern Object make_stub_new(int,...);
extern Object make_stubs(int,...);
extern Object map_over_connection_arrows(Object,Object,Object,Object);
extern Object map_over_connection_arrows_1(Object,Object,Object,Object,Object,Object,Object);
extern Object map_over_connection_arrows_2(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object map_to_color_value(Object);
extern Object memq_function(Object,Object);
extern Object mutate_global_property(Object,Object,Object);
extern Object mutate_kb_specific_property_value(Object,Object,Object);
extern Object new_draw_connection(Object,Object);
extern Object new_draw_connection_wrapper(Object,Object);
extern Object new_draw_line(Object,Object,Object,Object,Object);
extern Object note_change_or_deletion(Object,Object);
extern Object note_change_to_block_1(Object,Object);
extern Object note_change_to_connection_1(Object);
extern Object note_kb_state_change(Object,Object);
extern Object notify_user_1(Object);
extern Object old_draw_connection(Object,Object);
extern Object outstanding_connection_subrectangle_structure_count(void);
extern Object place_stub_loose_end_onto_workspace(Object,Object,Object);
extern Object printing_window_p(Object);
extern Object pull_in_endpoint(Object,Object,Object);
extern Object push_optimized_constant(Object);
extern Object put_kink_into_connection_if_straight_1(Object,Object);
extern Object reclaim_connection_item_1(Object);
extern Object reclaim_connection_subrectangle_structure_1(Object);
extern Object reclaim_connection_subrectangle_structures(Object);
extern Object reclaim_gensym_cons_1(Object);
extern Object reclaim_gensym_list_1(Object);
extern Object reclaim_gensym_tree_1(Object);
extern Object reclaim_list_of_block_snapshots(Object);
extern Object reclaim_region(Object);
extern Object recompute_selection_highlights(Object);
extern Object record_block_for_tformat(Object);
extern Object record_direct_structure_method(Object,Object,Object);
extern Object record_system_variable(Object,Object,Object,Object,Object,Object,Object);
extern Object redraw_transfer_representations_of_block(Object,Object);
extern Object reflect_and_rotate_block_in_workspace(Object,Object,Object,Object);
extern Object reflect_and_rotate_connections_on_block_in_workspace(Object,Object);
extern Object reflect_and_rotate_end_position(Object,Object,Object);
extern Object reflect_and_rotate_loose_ends_of_block_in_workspace(Object,Object,Object,Object);
extern Object reflect_and_rotate_point_in_workspace(Object,Object,Object,Object,Object);
extern Object reflect_and_rotate_side(Object,Object);
extern Object regenerate_optimized_constant(Object);
extern Object render_connection_in_xor_overlay_p_function(Object);
extern Object replace_connection_in_block(Object,Object,Object);
extern Object replenish_gensym_cons_pool(void);
extern Object rotate_and_reflect_icon(Object,Object,Object,Object,Object,Object);
extern Object rotate_and_reflect_icon_symbolically(Object,Object,Object,Object,Object);
extern Object rotate_point_in_line_drawing_description(Object,Object,Object,Object,Object);
extern Object rotated_by_90_p(Object);
extern Object scalef_function(Object,Object);
extern Object scope_cons(Object,Object);
extern Object send_ws_representations_connection_moved(Object);
extern Object send_ws_representations_item_insert_as_subblock(Object,Object,Object);
extern Object send_ws_representations_item_moved(Object,Object,Object);
extern Object send_ws_representations_item_rotated(Object,Object);
extern Object serve_first_connection_delta(Object,Object,Object,Object,Object,Object);
extern Object serve_next_connection_delta(Object,Object,Object,Object,Object,Object,Object);
extern Object set_balanced_binary_tree_entry(Object,Object,Object,Object,Object,Object,Object);
extern Object set_connections_of_neither_permanent_nor_transient_block_neither_permanent_nor_transient(Object);
extern Object set_connections_of_permanent_block_permanent(Object);
extern Object set_connections_of_transient_block_transient(Object);
extern Object set_current_background_color_value(Object);
extern Object set_input_end_of_connection(Object,Object,Object,Object);
extern Object set_input_end_of_connection_1(Object,Object,Object);
extern Object set_neither_permanent_nor_transient_and_propagate(Object,Object);
extern Object set_non_savable_lookup_slot_value(Object,Object,Object);
extern Object set_or_clear_connection_transient_if_necessary(Object,Object,Object);
extern Object set_or_clear_connection_transient_if_necessary_1(Object,Object);
extern Object set_output_end_of_connection(Object,Object,Object,Object);
extern Object set_output_end_of_connection_1(Object,Object,Object);
extern Object set_permanent_and_propagate(Object,Object);
extern Object set_transient_and_propagate(Object,Object);
extern Object shift_connection(Object,Object,Object,Object,Object,Object);
extern Object shift_end_position_of_connection(Object,Object,Object,Object,Object,Object);
extern Object slot_init_form_needs_evaluation_qm(Object);
extern Object sort_stripes(Object);
extern Object synchronize_transfer_mode(void);
extern Object tformat(int,...);
extern Object toggle_side_for_loose_end(Object,Object);
extern Object update_connection_images(Object,Object,Object);
extern Object update_connection_images_1(Object,Object,Object);
extern Object update_extreme_edges_from_connection(Object);
extern Object update_icon_views(Object);
extern Object update_images(int,...);
extern Object update_images_of_block(Object,Object,Object);
extern Object update_images_of_rectangle_of_block(Object,Object,Object,Object,Object,Object);
extern Object update_input_connections_of_entity(int,...);
extern Object update_new_subblock_activation_and_propagate(Object,Object);
extern Object update_new_subblock_connections_activation_and_propagate(Object,Object);
extern Object update_object_pool_meters_list(Object);
extern Object update_removed_subblock_connections_activation_and_propagate(Object);
extern Object update_runtime_structures_according_to_edit(int,...);
extern Object warn_of_missing_color_region(Object,Object);
extern Object warn_of_unnamed_color_region(Object,Object);
extern Object write_warning_message_header(Object);

#else

extern Object activate_connection_frame_if_appropriate();
extern Object add_as_inferior_block();
extern Object add_connection_in_block();
extern Object add_loose_ends_as_subblocks_and_shift();
extern Object add_rectangle_to_region();
extern Object add_stub();
extern Object add_stub_given_spec();
extern Object add_subblock();
extern Object adjust_connection_according_to_new_edge();
extern Object adjust_connections_according_to_new_edge();
extern Object adjust_delta_according_to_new_orientation();
extern Object adjust_points_for_connection_arrows();
extern Object allocate_byte_vector_16();
extern Object always_instantiate_connection_frame_for_this_class_qm();
extern Object assq_function();
extern Object bounding_region_of_block_or_connection();
extern Object bounding_region_of_fins_for_diagonal_connection_component();
extern Object break_out_of_debug_messages();
extern Object buggy_polyline_p();
extern Object bytes_per_simple_vector();
extern Object change_color_of_connection();
extern Object change_color_pattern_of_connection();
extern Object change_connection_attribute();
extern Object change_connection_deltas_for_object_being_dragged();
extern Object change_edges_of_block();
extern Object change_icon_attribute();
extern Object change_slot_value();
extern Object cleanup_for_connection();
extern Object clear_optimized_constants();
extern Object clone_connection_attributes_plist();
extern Object clone_frame();
extern Object clone_stub_for_connection();
extern Object compute_arrow_points();
extern Object compute_connection_vertices();
extern Object compute_delta_from_end_position();
extern Object compute_delta_from_end_position_link_1();
extern Object compute_diagonal_connection_vertices();
extern Object compute_miter_points();
extern Object compute_new_vertex();
extern Object compute_new_vertex_and_draw_diagonal_link();
extern Object compute_next_delta();
extern Object compute_next_delta_1();
extern Object compute_next_delta_swallowing_zeros();
extern Object compute_orthogonal_connection_vertices();
extern Object compute_scaled_line_pattern();
extern Object compute_stripes();
extern Object connection_arrow_height_1();
extern Object connection_arrow_width();
extern Object connection_arrows_of_connection();
extern Object connection_connected_to_block_p();
extern Object connection_fin_length();
extern Object connection_has_arrows_p();
extern Object connection_has_classic_fins_p();
extern Object connection_is_straight_qm();
extern Object connection_line_pattern();
extern Object connection_subrectangle_structure_structure_memory_usage();
extern Object connection_total_width();
extern Object convert_to_magnification();
extern Object copy_for_slot_value();
extern Object copy_frame_serial_number();
extern Object copy_list_using_gensym_conses_1();
extern Object copy_out_current_wide_string();
extern Object copy_tree_using_gensym_conses_1();
extern Object copy_unsaved_slots_from_connection_to_connection_frame();
extern Object decache_roles_for_entities_related_to_this_connection();
extern Object decode_arrow_spec();
extern Object decode_arrow_spec_1();
extern Object default_placement_of_connection_arrow();
extern Object delete_balanced_binary_tree_entry();
extern Object delete_connection_in_block();
extern Object determine_extreme_edges_of_block();
extern Object determine_subworkspace_connection_posts_for_object();
extern Object direct_structure_method();
extern Object draw_circle();
extern Object draw_connection();
extern Object draw_connection_1();
extern Object draw_connection_arrow();
extern Object draw_connection_arrow_1();
extern Object draw_connection_arrows();
extern Object draw_connection_fins();
extern Object draw_connection_frame_in_xor();
extern Object draw_connection_structure_in_xor();
extern Object draw_connection_subrectangles();
extern Object draw_connections_for_block();
extern Object draw_diagonal_link();
extern Object draw_fins_for_connection_component();
extern Object draw_fins_for_diagonal_connection_component();
extern Object draw_fins_for_diagonal_connection_component_1();
extern Object draw_graphic_element();
extern Object draw_line();
extern Object draw_polygon();
extern Object draw_subrectangle_for_connection();
extern Object draw_wide_polyline();
extern Object enlarge_workspace_for_block_and_subblocks_as_necessary();
extern Object enlarge_workspace_if_necessary();
extern Object ensure_layer_positions();
extern Object find_connection_or_block_below_this_connection();
extern Object float_cross();
extern Object float_delta_x_in_window();
extern Object float_distance();
extern Object float_dot();
extern Object float_length();
extern Object float_square();
extern Object flush_subworkspace_connection_posts_for_object();
extern Object generate_connection_subrectangle_structures();
extern Object gensym_cons_1();
extern Object gensym_list_3();
extern Object gensym_list_4();
extern Object get_block_at_other_end_of_connection();
extern Object get_connection_for_loose_end();
extern Object get_connection_layer_position();
extern Object get_direction_of_connection();
extern Object get_gensym_environment_variable();
extern Object get_lookup_slot_value();
extern Object get_or_make_connection_frame_and_activate_if_appropriate();
extern Object get_port_name_given_block_and_connection();
extern Object get_position_at_this_end_of_connection();
extern Object get_ruling_for_meter();
extern Object get_slot_description_of_class_description_function();
extern Object get_style_of_connection();
extern Object get_superblock_of_connection();
extern Object get_superblock_of_connection_frame();
extern Object get_workspace_if_any();
extern Object getfq_function_no_default();
extern Object icon_description_for_instance();
extern Object increment_current_frame_serial_number();
extern Object initialize_connection_subrectangle_structures();
extern Object initialize_cumulative_scaled_widths();
extern Object invalidate_color_of_block();
extern Object invalidate_layer_positions();
extern Object invalidate_region_for_block_or_connection();
extern Object invalidate_region_of_workspace();
extern Object inverse_magnify();
extern Object invert_reflection_and_rotation();
extern Object item_x_position();
extern Object item_y_position();
extern Object lastn();
extern Object length_of_arrow_shape();
extern Object load_and_initialize_type_description();
extern Object local_edges_of_block_or_connection();
extern Object lookup_global_or_kb_specific_property_value();
extern Object lookup_kb_specific_property_value();
extern Object lower_connection_frame_to_bottom();
extern Object magnify_connections_on_block_in_workspace();
extern Object magnify_end_position();
extern Object magnify_icon();
extern Object make_and_install_new_connection_frame();
extern Object make_connection_1();
extern Object make_connection_item_1();
extern Object make_connection_neither_permanent_nor_transient();
extern Object make_connection_permanent();
extern Object make_connection_subrectangle_structure_1();
extern Object make_connection_transient();
extern Object make_empty_region();
extern Object make_entity();
extern Object make_frame();
extern Object make_gensym_list_1();
extern Object make_icon_slot_group_1();
extern Object make_new_connection_frame_for_connection();
extern Object make_permanent_connection_subrectangle_structure_structure_internal();
extern Object make_stub();
extern Object make_stub_new();
extern Object make_stubs();
extern Object map_over_connection_arrows();
extern Object map_over_connection_arrows_1();
extern Object map_over_connection_arrows_2();
extern Object map_to_color_value();
extern Object memq_function();
extern Object mutate_global_property();
extern Object mutate_kb_specific_property_value();
extern Object new_draw_connection();
extern Object new_draw_connection_wrapper();
extern Object new_draw_line();
extern Object note_change_or_deletion();
extern Object note_change_to_block_1();
extern Object note_change_to_connection_1();
extern Object note_kb_state_change();
extern Object notify_user_1();
extern Object old_draw_connection();
extern Object outstanding_connection_subrectangle_structure_count();
extern Object place_stub_loose_end_onto_workspace();
extern Object printing_window_p();
extern Object pull_in_endpoint();
extern Object push_optimized_constant();
extern Object put_kink_into_connection_if_straight_1();
extern Object reclaim_connection_item_1();
extern Object reclaim_connection_subrectangle_structure_1();
extern Object reclaim_connection_subrectangle_structures();
extern Object reclaim_gensym_cons_1();
extern Object reclaim_gensym_list_1();
extern Object reclaim_gensym_tree_1();
extern Object reclaim_list_of_block_snapshots();
extern Object reclaim_region();
extern Object recompute_selection_highlights();
extern Object record_block_for_tformat();
extern Object record_direct_structure_method();
extern Object record_system_variable();
extern Object redraw_transfer_representations_of_block();
extern Object reflect_and_rotate_block_in_workspace();
extern Object reflect_and_rotate_connections_on_block_in_workspace();
extern Object reflect_and_rotate_end_position();
extern Object reflect_and_rotate_loose_ends_of_block_in_workspace();
extern Object reflect_and_rotate_point_in_workspace();
extern Object reflect_and_rotate_side();
extern Object regenerate_optimized_constant();
extern Object render_connection_in_xor_overlay_p_function();
extern Object replace_connection_in_block();
extern Object replenish_gensym_cons_pool();
extern Object rotate_and_reflect_icon();
extern Object rotate_and_reflect_icon_symbolically();
extern Object rotate_point_in_line_drawing_description();
extern Object rotated_by_90_p();
extern Object scalef_function();
extern Object scope_cons();
extern Object send_ws_representations_connection_moved();
extern Object send_ws_representations_item_insert_as_subblock();
extern Object send_ws_representations_item_moved();
extern Object send_ws_representations_item_rotated();
extern Object serve_first_connection_delta();
extern Object serve_next_connection_delta();
extern Object set_balanced_binary_tree_entry();
extern Object set_connections_of_neither_permanent_nor_transient_block_neither_permanent_nor_transient();
extern Object set_connections_of_permanent_block_permanent();
extern Object set_connections_of_transient_block_transient();
extern Object set_current_background_color_value();
extern Object set_input_end_of_connection();
extern Object set_input_end_of_connection_1();
extern Object set_neither_permanent_nor_transient_and_propagate();
extern Object set_non_savable_lookup_slot_value();
extern Object set_or_clear_connection_transient_if_necessary();
extern Object set_or_clear_connection_transient_if_necessary_1();
extern Object set_output_end_of_connection();
extern Object set_output_end_of_connection_1();
extern Object set_permanent_and_propagate();
extern Object set_transient_and_propagate();
extern Object shift_connection();
extern Object shift_end_position_of_connection();
extern Object slot_init_form_needs_evaluation_qm();
extern Object sort_stripes();
extern Object synchronize_transfer_mode();
extern Object tformat();
extern Object toggle_side_for_loose_end();
extern Object update_connection_images();
extern Object update_connection_images_1();
extern Object update_extreme_edges_from_connection();
extern Object update_icon_views();
extern Object update_images();
extern Object update_images_of_block();
extern Object update_images_of_rectangle_of_block();
extern Object update_input_connections_of_entity();
extern Object update_new_subblock_activation_and_propagate();
extern Object update_new_subblock_connections_activation_and_propagate();
extern Object update_object_pool_meters_list();
extern Object update_removed_subblock_connections_activation_and_propagate();
extern Object update_runtime_structures_according_to_edit();
extern Object warn_of_missing_color_region();
extern Object warn_of_unnamed_color_region();
extern Object write_warning_message_header();

#endif

/* variables/constants */
extern Object Available_gensym_conses;
extern Object Basic_arrow_shapes;
extern Object Buggy_polyline_p;
extern Object Chain_of_available_connection_subrectangle_structures;
extern Object Changing_colors_of_graphic_elements_qm;
extern Object Class_description_gkbprop;
extern Object Connection_class_description;
extern Object Connection_subrectangle_structure_count;
extern Object Connection_subrectangle_structures_for_drawing_kbprop;
extern Object Cumulative_x_scaled_connection_stripe_half_width;
extern Object Cumulative_x_scaled_connection_stripe_width;
extern Object Cumulative_y_scaled_connection_stripe_half_width;
extern Object Cumulative_y_scaled_connection_stripe_width;
extern Object Current_background_color_value;
extern Object Current_delta;
extern Object Current_drawing_priority;
extern Object Current_drawing_transfer_mode;
extern Object Current_foreground_color_value;
extern Object Current_image_plane;
extern Object Current_image_x_scale;
extern Object Current_image_y_scale;
extern Object Current_kb_specific_property_list_property_name;
extern Object Current_twriting_output_type;
extern Object Current_wide_string;
extern Object Current_wide_string_list;
extern Object Current_window;
extern Object Current_x_origin_of_drawing;
extern Object Current_y_origin_of_drawing;
extern Object Currently_working_on_drawing_workspace;
extern Object Debugging_reset;
extern Object Default_fin_length;
extern Object Default_stub_length;
extern Object Defer_notifications_qm;
extern Object Desired_distance_between_fins;
extern Object Desired_distance_between_fins_on_link;
extern Object Do_not_note_permanent_changes_p;
extern Object Dont_include_offset_for_end_position_qm;
extern Object Entity_class_description;
extern Object Extreme_bottom_edge_so_far;
extern Object Extreme_left_edge_so_far;
extern Object Extreme_right_edge_so_far;
extern Object Extreme_top_edge_so_far;
extern Object Fill_pointer_for_current_wide_string;
extern Object G2_has_v5_mode_windows_p;
extern Object Geometric_change_to_connection_is_temporary_p;
extern Object Global_draw_diagonally_qm;
#define Icp_window_protocol_supports_wide_polyline FIX((SI_Long)24L)
extern Object Init_orientation_horizontal_p;
extern Object Isqrt_of_most_positive_fixnum;
extern Object Kb_specific_property_names;
extern Object Loose_end_class_description;
extern Object Meter_class_description;
extern Object Minimum_distance_between_fins;
extern Object Minus_of_isqrt_of_most_positive_fixnum;
extern Object No_specific_property_value;
extern Object Note_as_kb_state_change_qm;
extern Object Note_blocks_in_tformat;
extern Object Noting_changes_to_kb_p;
extern Object Orientation_horizontal_p;
extern Object Releasing_kb_qm;
extern Object Scope_conses;
extern Object Snapshots_of_related_blocks;
extern Object Stub_length_to_use_qm;
extern Object Symbol_properties_table;
extern Object The_type_description_of_connection_subrectangle_structure;
extern Object Total_length_of_current_wide_string;
#define Transparent_color_value FIX((SI_Long)16777216L)
extern Object Warning_message_level;
extern Object Workspace_class_description;
extern Object Ws_protocol_handle_moves_from_edge_change_p;
