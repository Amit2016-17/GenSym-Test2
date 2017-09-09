/* pcdbg.h -- Header File for pcdbg.c
 * Copyright (C) 1986-2017 Gensym Corporation.  All Rights Reserved.
 */


/* Symbol Definitions */
extern Object Qcons;
extern Object Qeq;
extern Object Kinitial_element;
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

extern Object add_bend_to_connection(Object,Object);
extern Object add_blocks_to_graphed_block_group(Object,Object);
extern Object add_class_to_environment(int,...);
extern Object add_new_connection_to_block(int,...);
extern Object add_parent_stub_to_graph_display_block(Object,Object,Object);
extern Object add_stub(int,...);
extern Object add_superior_node_stub_to_graph_display_block(Object,Object,Object);
extern Object add_to_workspace(int,...);
extern Object adjust_managed_array(int,...);
extern Object allocate_byte_vector_16(Object);
extern Object allocate_managed_array(int,...);
extern Object allocate_managed_simple_vector_for_skip_list(Object);
extern Object bytes_per_simple_vector(Object);
extern Object bytes_per_typed_simple_array(Object,Object);
extern Object called_detailed_procedure_graph(Object,Object);
extern Object called_procedure_invocations_for_graph(Object,Object);
extern Object called_procedure_invocations_for_graph_1(Object);
extern Object change_workspace_edges_after_including_margin(Object,Object,Object,Object,Object);
extern Object check_if_superior_classes_are_defined(Object,Object);
extern Object clear_graph_node_of_graphed_thing(Object);
extern Object clear_graph_node_of_graphed_thing_tree(Object);
extern Object clear_optimized_constants(void);
extern Object collect_non_procedure_root_invocations(void);
extern Object collect_non_procedure_root_invocations_in_queue(Object);
extern Object connect_superior_and_kid_frames(Object,Object,Object,Object,Object,Object);
extern Object connect_superior_and_kid_graph_display_nodes(Object,Object,Object,Object);
extern Object connection_item_name_or_names(Object);
extern Object constant_queue_next(Object,Object);
extern Object copy_list_using_gensym_conses_1(Object);
extern Object copy_list_using_graph_layout_conses_1(Object);
extern Object copy_out_current_wide_string(void);
extern Object copy_text_string(Object);
extern Object copy_tree_using_graph_layout_conses_1(Object);
extern Object delete_connection(int,...);
extern Object delete_frame(Object);
extern Object delete_gensym_element_1(Object,Object);
extern Object delete_graph_layout_cons_1(Object,Object);
extern Object delete_graph_layout_element_1(Object,Object);
extern Object delete_short_representation_frames_of_graph_node_tree(Object);
extern Object detailed_procedure_graph_short_representation(Object);
extern Object determine_node_positions(int,...);
extern Object direct_structure_method(Object,Object);
extern Object display_graph_node(Object,Object);
extern Object display_graph_on_workspace(Object);
extern Object dynamic_workspace_associated_structure_structure_memory_usage(void);
extern Object enlarge_workspace_if_necessary(int,...);
extern Object eval_cons_1(Object,Object);
extern Object eval_list_of_connected_blocks(Object,Object,Object);
extern Object execute_computation_instance(Object);
extern Object flatten_graph_node_of_graphed_thing(Object);
extern Object flatten_skip_list(Object);
extern Object force_process_drawing(void);
extern Object frame_hash_function(Object);
extern Object g2gl_call_invocation_p_function(Object);
extern Object gensym_cons_1(Object,Object);
extern Object get_and_clear_workspace_for_inspect_command(int,...);
extern Object get_block_at_other_end_of_connection(Object,Object);
extern Object get_connection_for_loose_end(Object);
extern Object get_left_connection_of_junction(Object,Object);
extern Object get_top_connection_of_junction(Object,Object);
extern Object get_workspace_for_graph_detailed_procedures(void);
extern Object graph_detailed_procedures(int,...);
extern Object graph_display_structure_memory_usage(void);
extern Object graph_frame_hierarchy_function(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object graph_layout_cons_1(Object,Object);
extern Object graph_layout_cons_memory_usage(void);
extern Object graph_layout_list_2(Object,Object);
extern Object graph_layout_list_3(Object,Object,Object);
extern Object graph_layout_list_4(Object,Object,Object,Object);
extern Object graph_layout_list_of_children_junctions(Object);
extern Object graph_layout_list_of_connected_child_short_representations(Object);
extern Object graph_layout_list_trace_hook(Object);
extern Object graph_node_children_can_be_included_in_block_group_p(Object,Object);
extern Object graph_node_freedom_to_shift_left_qm(Object,Object);
extern Object graph_node_freedom_to_shift_up_qm(Object,Object);
extern Object graph_node_of_graphed_thing_hash_vector_43_vector_memory_usage(void);
extern Object graph_node_structure_memory_usage(void);
extern Object graph_procedure_invocations(Object);
extern Object hash_detailed_procedure_graph(Object);
extern Object initialize_graph_display_maximum_height_array(Object,Object,Object);
extern Object join_two_connections(Object,Object);
extern Object list_callers_of_computation_instance(Object);
extern Object load_and_initialize_type_description(Object,Object);
extern Object lookup_global_or_kb_specific_property_value(Object,Object);
extern Object make_description_box(Object);
extern Object make_dynamic_workspace_associated_structure_1(void);
extern Object make_graph_display_1(Object,Object,Object,Object,Object,Object,Object,Object);
extern Object make_graph_layout_list_1(Object);
extern Object make_graph_node_1(Object,Object,Object,Object,Object);
extern Object make_graph_node_of_graphed_thing(void);
extern Object make_graph_node_of_graphed_thing_hash_vector(void);
extern Object make_graph_node_of_graphed_thing_tree_for_hash_skip_list_sentinel(Object,Object);
extern Object make_graphed_block_group(Object,Object,Object);
extern Object make_junction(Object,Object);
extern Object make_node_for_item(Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object make_or_update_node_for_item(Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object make_permanent_dynamic_workspace_associated_structure_structure_internal(void);
extern Object make_permanent_graph_display_structure_internal(void);
extern Object make_permanent_graph_node_of_graphed_thing_hash_vector_43_vector_internal(void);
extern Object make_permanent_graph_node_structure_internal(void);
extern Object make_short_representation(int,...);
extern Object make_skip_list_element_1(Object,Object,Object,Object);
extern Object make_thread_array(Object);
extern Object make_workspace(int,...);
extern Object maximum_graph_node_extent_to_bottom(Object);
extern Object maximum_graph_node_extent_to_left(Object);
extern Object maximum_graph_node_extent_to_right(Object);
extern Object maximum_graph_node_extent_to_top(Object);
extern Object maybe_collect_root_invocation_of_invocation(Object);
extern Object memq_function(Object,Object);
extern Object move_block_to_position(Object,Object,Object);
extern Object move_blocks_with_their_external_connections(Object,Object,Object,Object);
extern Object mutate_global_property(Object,Object,Object);
extern Object out_graph_node_of_graphed_thing_hash_vector_43_vectors(void);
extern Object outstanding_dynamic_workspace_associated_structure_count(void);
extern Object outstanding_graph_display_count(void);
extern Object outstanding_graph_layout_conses(void);
extern Object outstanding_graph_node_count(void);
extern Object pack_graph_node_to_left(Object);
extern Object pack_graph_node_to_top(Object);
extern Object position_node_horizontally(Object);
extern Object position_node_vertically(Object);
extern Object previous_actual_graph_node(Object,Object);
extern Object push_optimized_constant(Object);
extern Object put_workspace_on_pane_function(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object reclaim_associated_dynamic_structure_value(Object,Object);
extern Object reclaim_dynamic_workspace_associated_structure_1(Object);
extern Object reclaim_eval_list_1(Object);
extern Object reclaim_gensym_list_1(Object);
extern Object reclaim_graph_display_1(Object);
extern Object reclaim_graph_layout_cons_1(Object);
extern Object reclaim_graph_layout_list_1(Object);
extern Object reclaim_graph_layout_list_star_1(Object);
extern Object reclaim_graph_layout_tree_1(Object);
extern Object reclaim_graph_node_1(Object);
extern Object reclaim_graph_node_function(Object);
extern Object reclaim_graph_node_list(Object);
extern Object reclaim_graph_node_of_graphed_thing(Object);
extern Object reclaim_graph_node_of_graphed_thing_hash_vector(Object);
extern Object reclaim_graph_node_of_graphed_thing_tree_for_hash_nodes(Object,Object);
extern Object reclaim_if_managed_array(Object);
extern Object reclaim_managed_array(Object);
extern Object reclaim_skip_list_element(Object);
extern Object record_direct_structure_method(Object,Object,Object);
extern Object record_system_variable(Object,Object,Object,Object,Object,Object,Object);
extern Object regenerate_optimized_constant(Object);
extern Object remove_connections_to_sub_nodes(Object);
extern Object replenish_graph_layout_cons_pool(void);
extern Object replenish_graph_layout_list_pool(Object);
extern Object replenish_lookup_cons_pool(void);
extern Object replenish_vector_pool_cons_pool(void);
extern Object represent_items_in_graph(Object,Object,Object,Object,Object);
extern Object represented_in_graph_display_p(Object,Object);
extern Object root_invocation_of_invocation(Object);
extern Object schedule_or_reposition_graph_node(Object,Object);
extern Object scope_cons(Object,Object);
extern Object set_skip_list_entry(Object,Object,Object,Object,Object,Object,Object,Object);
extern Object shift_graph_node_and_children_to_right(Object,Object,Object);
extern Object shift_graph_node_and_children_toward_bottom(Object,Object,Object);
extern Object shrink_wrap_workspace(Object);
extern Object sub_nodes_connection(int,...);
extern Object superior_node_connection(Object);
extern Object sxhashw(Object);
extern Object symbol_name_text_string(Object);
extern Object tformat(int,...);
extern Object tformat_text_string(int,...);
extern Object toggle_side_for_loose_end(Object,Object);
extern Object twrite_beginning_of_wide_string(Object,Object);
extern Object twrite_detailed_short_representation_of_code_body_invocation(Object);
extern Object twrite_icp_socket_connection_name(Object);
extern Object update_connection_images(Object,Object,Object);
extern Object update_display_of_graph_nodes(Object);
extern Object update_display_of_graph_on_workspace(Object);
extern Object update_graph_display(Object);
extern Object update_graph_display_nodes(Object);
extern Object update_object_pool_meters_list(Object);
extern Object valid_computation_instance_p(Object);
extern Object write_byte_code_body(Object,Object);
extern Object write_code_bodies_from_slot(Object,Object);
extern Object write_code_body_environment(Object,Object);
extern Object write_disassembled_code_bodies(Object);
extern Object write_procedure_invocation_instance_from_slot(Object,Object);
extern Object write_stack_instruction(Object,Object,Object);

#else

extern Object add_bend_to_connection();
extern Object add_blocks_to_graphed_block_group();
extern Object add_class_to_environment();
extern Object add_new_connection_to_block();
extern Object add_parent_stub_to_graph_display_block();
extern Object add_stub();
extern Object add_superior_node_stub_to_graph_display_block();
extern Object add_to_workspace();
extern Object adjust_managed_array();
extern Object allocate_byte_vector_16();
extern Object allocate_managed_array();
extern Object allocate_managed_simple_vector_for_skip_list();
extern Object bytes_per_simple_vector();
extern Object bytes_per_typed_simple_array();
extern Object called_detailed_procedure_graph();
extern Object called_procedure_invocations_for_graph();
extern Object called_procedure_invocations_for_graph_1();
extern Object change_workspace_edges_after_including_margin();
extern Object check_if_superior_classes_are_defined();
extern Object clear_graph_node_of_graphed_thing();
extern Object clear_graph_node_of_graphed_thing_tree();
extern Object clear_optimized_constants();
extern Object collect_non_procedure_root_invocations();
extern Object collect_non_procedure_root_invocations_in_queue();
extern Object connect_superior_and_kid_frames();
extern Object connect_superior_and_kid_graph_display_nodes();
extern Object connection_item_name_or_names();
extern Object constant_queue_next();
extern Object copy_list_using_gensym_conses_1();
extern Object copy_list_using_graph_layout_conses_1();
extern Object copy_out_current_wide_string();
extern Object copy_text_string();
extern Object copy_tree_using_graph_layout_conses_1();
extern Object delete_connection();
extern Object delete_frame();
extern Object delete_gensym_element_1();
extern Object delete_graph_layout_cons_1();
extern Object delete_graph_layout_element_1();
extern Object delete_short_representation_frames_of_graph_node_tree();
extern Object detailed_procedure_graph_short_representation();
extern Object determine_node_positions();
extern Object direct_structure_method();
extern Object display_graph_node();
extern Object display_graph_on_workspace();
extern Object dynamic_workspace_associated_structure_structure_memory_usage();
extern Object enlarge_workspace_if_necessary();
extern Object eval_cons_1();
extern Object eval_list_of_connected_blocks();
extern Object execute_computation_instance();
extern Object flatten_graph_node_of_graphed_thing();
extern Object flatten_skip_list();
extern Object force_process_drawing();
extern Object frame_hash_function();
extern Object g2gl_call_invocation_p_function();
extern Object gensym_cons_1();
extern Object get_and_clear_workspace_for_inspect_command();
extern Object get_block_at_other_end_of_connection();
extern Object get_connection_for_loose_end();
extern Object get_left_connection_of_junction();
extern Object get_top_connection_of_junction();
extern Object get_workspace_for_graph_detailed_procedures();
extern Object graph_detailed_procedures();
extern Object graph_display_structure_memory_usage();
extern Object graph_frame_hierarchy_function();
extern Object graph_layout_cons_1();
extern Object graph_layout_cons_memory_usage();
extern Object graph_layout_list_2();
extern Object graph_layout_list_3();
extern Object graph_layout_list_4();
extern Object graph_layout_list_of_children_junctions();
extern Object graph_layout_list_of_connected_child_short_representations();
extern Object graph_layout_list_trace_hook();
extern Object graph_node_children_can_be_included_in_block_group_p();
extern Object graph_node_freedom_to_shift_left_qm();
extern Object graph_node_freedom_to_shift_up_qm();
extern Object graph_node_of_graphed_thing_hash_vector_43_vector_memory_usage();
extern Object graph_node_structure_memory_usage();
extern Object graph_procedure_invocations();
extern Object hash_detailed_procedure_graph();
extern Object initialize_graph_display_maximum_height_array();
extern Object join_two_connections();
extern Object list_callers_of_computation_instance();
extern Object load_and_initialize_type_description();
extern Object lookup_global_or_kb_specific_property_value();
extern Object make_description_box();
extern Object make_dynamic_workspace_associated_structure_1();
extern Object make_graph_display_1();
extern Object make_graph_layout_list_1();
extern Object make_graph_node_1();
extern Object make_graph_node_of_graphed_thing();
extern Object make_graph_node_of_graphed_thing_hash_vector();
extern Object make_graph_node_of_graphed_thing_tree_for_hash_skip_list_sentinel();
extern Object make_graphed_block_group();
extern Object make_junction();
extern Object make_node_for_item();
extern Object make_or_update_node_for_item();
extern Object make_permanent_dynamic_workspace_associated_structure_structure_internal();
extern Object make_permanent_graph_display_structure_internal();
extern Object make_permanent_graph_node_of_graphed_thing_hash_vector_43_vector_internal();
extern Object make_permanent_graph_node_structure_internal();
extern Object make_short_representation();
extern Object make_skip_list_element_1();
extern Object make_thread_array();
extern Object make_workspace();
extern Object maximum_graph_node_extent_to_bottom();
extern Object maximum_graph_node_extent_to_left();
extern Object maximum_graph_node_extent_to_right();
extern Object maximum_graph_node_extent_to_top();
extern Object maybe_collect_root_invocation_of_invocation();
extern Object memq_function();
extern Object move_block_to_position();
extern Object move_blocks_with_their_external_connections();
extern Object mutate_global_property();
extern Object out_graph_node_of_graphed_thing_hash_vector_43_vectors();
extern Object outstanding_dynamic_workspace_associated_structure_count();
extern Object outstanding_graph_display_count();
extern Object outstanding_graph_layout_conses();
extern Object outstanding_graph_node_count();
extern Object pack_graph_node_to_left();
extern Object pack_graph_node_to_top();
extern Object position_node_horizontally();
extern Object position_node_vertically();
extern Object previous_actual_graph_node();
extern Object push_optimized_constant();
extern Object put_workspace_on_pane_function();
extern Object reclaim_associated_dynamic_structure_value();
extern Object reclaim_dynamic_workspace_associated_structure_1();
extern Object reclaim_eval_list_1();
extern Object reclaim_gensym_list_1();
extern Object reclaim_graph_display_1();
extern Object reclaim_graph_layout_cons_1();
extern Object reclaim_graph_layout_list_1();
extern Object reclaim_graph_layout_list_star_1();
extern Object reclaim_graph_layout_tree_1();
extern Object reclaim_graph_node_1();
extern Object reclaim_graph_node_function();
extern Object reclaim_graph_node_list();
extern Object reclaim_graph_node_of_graphed_thing();
extern Object reclaim_graph_node_of_graphed_thing_hash_vector();
extern Object reclaim_graph_node_of_graphed_thing_tree_for_hash_nodes();
extern Object reclaim_if_managed_array();
extern Object reclaim_managed_array();
extern Object reclaim_skip_list_element();
extern Object record_direct_structure_method();
extern Object record_system_variable();
extern Object regenerate_optimized_constant();
extern Object remove_connections_to_sub_nodes();
extern Object replenish_graph_layout_cons_pool();
extern Object replenish_graph_layout_list_pool();
extern Object replenish_lookup_cons_pool();
extern Object replenish_vector_pool_cons_pool();
extern Object represent_items_in_graph();
extern Object represented_in_graph_display_p();
extern Object root_invocation_of_invocation();
extern Object schedule_or_reposition_graph_node();
extern Object scope_cons();
extern Object set_skip_list_entry();
extern Object shift_graph_node_and_children_to_right();
extern Object shift_graph_node_and_children_toward_bottom();
extern Object shrink_wrap_workspace();
extern Object sub_nodes_connection();
extern Object superior_node_connection();
extern Object sxhashw();
extern Object symbol_name_text_string();
extern Object tformat();
extern Object tformat_text_string();
extern Object toggle_side_for_loose_end();
extern Object twrite_beginning_of_wide_string();
extern Object twrite_detailed_short_representation_of_code_body_invocation();
extern Object twrite_icp_socket_connection_name();
extern Object update_connection_images();
extern Object update_display_of_graph_nodes();
extern Object update_display_of_graph_on_workspace();
extern Object update_graph_display();
extern Object update_graph_display_nodes();
extern Object update_object_pool_meters_list();
extern Object valid_computation_instance_p();
extern Object write_byte_code_body();
extern Object write_code_bodies_from_slot();
extern Object write_code_body_environment();
extern Object write_disassembled_code_bodies();
extern Object write_procedure_invocation_instance_from_slot();
extern Object write_stack_instruction();

#endif

/* variables/constants */
DECLARE_VARIABLE_WITH_SYMBOL(Available_graph_layout_conses, Qavailable_graph_layout_conses);
DECLARE_VARIABLE_WITH_SYMBOL(Available_graph_layout_conses_tail, Qavailable_graph_layout_conses_tail);
extern Object Available_graph_layout_conses_tail_vector;
extern Object Available_graph_layout_conses_vector;
DECLARE_VARIABLE_WITH_SYMBOL(Available_graph_node_of_graphed_thing_hash_vector_43_vectors, Qavailable_graph_node_of_graphed_thing_hash_vector_43_vectors);
extern Object Available_graph_node_of_graphed_thing_hash_vector_43_vectors_vector;
extern Object Available_lookup_conses_tail_vector;
extern Object Available_lookup_conses_vector;
extern Object Available_vector_pool_conses_tail_vector;
extern Object Available_vector_pool_conses_vector;
extern Object Bytes_per_rtl_ptr;
DECLARE_VARIABLE_WITH_SYMBOL(Chain_of_available_dynamic_workspace_associated_structures, Qchain_of_available_dynamic_workspace_associated_structures);
extern Object Chain_of_available_dynamic_workspace_associated_structures_vector;
DECLARE_VARIABLE_WITH_SYMBOL(Chain_of_available_graph_displays, Qchain_of_available_graph_displays);
extern Object Chain_of_available_graph_displays_vector;
DECLARE_VARIABLE_WITH_SYMBOL(Chain_of_available_graph_nodes, Qchain_of_available_graph_nodes);
extern Object Chain_of_available_graph_nodes_vector;
extern Object Class_description_gkbprop;
DECLARE_VARIABLE_WITH_SYMBOL(Computation_instance_at_breakpoint, Qcomputation_instance_at_breakpoint);
DECLARE_VARIABLE_WITH_SYMBOL(Connection_class_description, Qconnection_class_description);
extern Object Cons_pool_conses_to_make_at_a_time;
DECLARE_VARIABLE_WITH_SYMBOL(Count_of_graph_node_of_graphed_thing_hash_vector_43_vectors, Qcount_of_graph_node_of_graphed_thing_hash_vector_43_vectors);
DECLARE_VARIABLE_WITH_SYMBOL(Current_drawing_priority, Qcurrent_drawing_priority);
DECLARE_VARIABLE_WITH_SYMBOL(Current_graph_layout_hashing_function, Qcurrent_graph_layout_hashing_function);
extern Object Current_task_queue_vector;
DECLARE_VARIABLE_WITH_SYMBOL(Current_thread_index, Qcurrent_thread_index);
DECLARE_VARIABLE_WITH_SYMBOL(Current_twriting_output_type, Qcurrent_twriting_output_type);
DECLARE_VARIABLE_WITH_SYMBOL(Current_wide_string, Qcurrent_wide_string);
DECLARE_VARIABLE_WITH_SYMBOL(Current_wide_string_list, Qcurrent_wide_string_list);
DECLARE_VARIABLE_WITH_SYMBOL(Current_workstation_detail_pane, Qcurrent_workstation_detail_pane);
DECLARE_VARIABLE_WITH_SYMBOL(Default_junction_class_description, Qdefault_junction_class_description);
DECLARE_VARIABLE_WITH_SYMBOL(Disassemble_enabled_qm, Qdisassemble_enabled_qm);
DECLARE_VARIABLE_WITH_SYMBOL(Dynamic_workspace_associated_structure_count, Qdynamic_workspace_associated_structure_count);
DECLARE_VARIABLE_WITH_SYMBOL(Fill_pointer_for_current_wide_string, Qfill_pointer_for_current_wide_string);
DECLARE_VARIABLE_WITH_SYMBOL(Focus_for_graph_detailed_procedures, Qfocus_for_graph_detailed_procedures);
DECLARE_VARIABLE_WITH_SYMBOL(Graph_display_changed_during_update_qm, Qgraph_display_changed_during_update_qm);
DECLARE_VARIABLE_WITH_SYMBOL(Graph_display_count, Qgraph_display_count);
DECLARE_VARIABLE_WITH_SYMBOL(Graph_layout_cons_counter, Qgraph_layout_cons_counter);
extern Object Graph_layout_cons_counter_vector;
DECLARE_VARIABLE_WITH_SYMBOL(Graph_node_count, Qgraph_node_count);
DECLARE_VARIABLE_WITH_SYMBOL(Graph_nodes_needing_children_connections, Qgraph_nodes_needing_children_connections);
DECLARE_VARIABLE_WITH_SYMBOL(Graph_nodes_to_add_as_subblocks, Qgraph_nodes_to_add_as_subblocks);
DECLARE_VARIABLE_WITH_SYMBOL(Graphed_block_groups_to_move, Qgraphed_block_groups_to_move);
#define Highest_system_priority FIX((SI_Long)0L)
extern Object Immediate_task_queue_vector;
DECLARE_VARIABLE_WITH_SYMBOL(Loose_end_class_description, Qloose_end_class_description);
#define Lowest_system_priority FIX((SI_Long)11L)
#define Managed_array_index_offset FIX((SI_Long)2L)
DECLARE_VARIABLE_WITH_SYMBOL(Maximum_height, Qmaximum_height);
extern Object Maximum_in_place_array_size;
DECLARE_VARIABLE_WITH_SYMBOL(Non_procedure_root_invocations, Qnon_procedure_root_invocations);
extern Object Number_of_all_threads;
extern Object Original_graph_depth;
DECLARE_VARIABLE_WITH_SYMBOL(Pane_for_debugger_pause, Qpane_for_debugger_pause);
extern Object Procedure_invocations_lock;
DECLARE_VARIABLE_WITH_SYMBOL(Scope_conses, Qscope_conses);
DECLARE_VARIABLE_WITH_SYMBOL(Structure_being_reclaimed, Qstructure_being_reclaimed);
DECLARE_VARIABLE_WITH_SYMBOL(System_window, Qsystem_window);
extern Object The_type_description_of_dynamic_workspace_associated_structure;
extern Object The_type_description_of_graph_display;
extern Object The_type_description_of_graph_node;
extern Object Top_level_procedure_invocations_array;
DECLARE_VARIABLE_WITH_SYMBOL(Total_length_of_current_wide_string, Qtotal_length_of_current_wide_string);
