/* gthrd.h -- Header File for gthrd.c
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
 */


/* Symbol Definitions */

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

extern Object g2int_allocate_managed_simple_vector(Object);
extern Object g2int_c_get_peer_address_string(Object,Object,Object);
extern Object g2int_c_get_peer_hostname(Object,Object,Object);
extern Object g2int_cleanup_and_unwind_one_thread_frame_with_needed_contour(Object);
extern Object g2int_cleanup_thread_if_necessary(Object);
extern Object g2int_clear_thread_pool(Object);
extern Object g2int_copy_for_thread_tree(Object);
extern Object g2int_copy_gensym_string(Object);
extern Object g2int_copy_text_between_marks(Object,Object);
extern Object g2int_delete_gensym_element_1(Object,Object);
extern Object g2int_direct_structure_method(Object,Object);
extern Object g2int_do_print_thread(Object);
extern Object g2int_end_io_wait(void);
extern Object g2int_end_io_wait_1(Object);
extern Object g2int_feed_running_threads(void);
extern Object g2int_feed_thread_tree(Object);
extern Object g2int_generate_thread_number(void);
extern Object g2int_gensym_cons_1(Object,Object);
extern Object g2int_gensym_string_substring(Object,Object,Object);
extern Object g2int_getfq_function_no_default(Object,Object);
extern Object g2int_give_thread_quantum(void);
extern Object g2int_load_and_initialize_type_description(Object,Object);
extern Object g2int_m_socket_close_it_weblink_socket_1(Object,Object);
extern Object g2int_m_thread_child_created_thread_1(Object,Object,Object);
extern Object g2int_m_thread_child_destroyed_thread_1(Object,Object,Object);
extern Object g2int_m_thread_finalize_thread_1(Object,Object);
extern Object g2int_m_thread_initialize_thread_1(Object,Object);
extern Object g2int_make_permanent_thread_structure_internal(void);
extern Object g2int_make_permanent_weblink_socket_structure_internal(void);
extern Object g2int_make_root_thread(void);
extern Object g2int_make_text_safe_for_c(Object);
extern Object g2int_make_text_string_from_c_string_in_foreign_string_pad(void);
extern Object g2int_make_thread_1_1(Object,Object);
extern Object g2int_make_weblink_socket_1(void);
extern Object g2int_mark_copy(Object);
extern Object g2int_mark_kill(Object);
extern Object g2int_mark_move(Object,Object);
extern Object g2int_mark_set(Object,Object);
extern Object g2int_memq_function(Object,Object);
extern Object g2int_mutate_global_property(Object,Object,Object);
extern Object g2int_note_issue_with_socket(Object,Object);
extern Object g2int_null_thread_contour_wrapper(void);
extern Object g2int_peer_address_string_of_socket(Object);
extern Object g2int_peer_name_of_socket(Object);
extern Object g2int_position_of_mark(Object);
extern Object g2int_prolog_thread_function(Object,Object,Object);
extern Object g2int_ps(void);
extern Object g2int_ps_1(Object,Object);
extern Object g2int_reclaim_event_tree(Object);
extern Object g2int_reclaim_gensym_list_1(Object);
extern Object g2int_reclaim_gensym_string(Object);
extern Object g2int_reclaim_gensym_tree_1(Object);
extern Object g2int_reclaim_managed_simple_vector(Object);
extern Object g2int_reclaim_plist_tree_of_resource_buffer(Object);
extern Object g2int_reclaim_sockets(Object);
extern Object g2int_reclaim_thread_1(Object);
extern Object g2int_reclaim_weblink_socket_1(Object);
extern Object g2int_record_direct_structure_method(Object,Object,Object);
extern Object g2int_record_system_variable(Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_regenerate_optimized_constant(Object);
extern Object g2int_shutdown_thread_tree(void);
extern Object g2int_shutdown_thread_tree_1(Object);
extern Object g2int_slowly_lookup_next_method(Object,Object);
extern Object g2int_socket_close_it(Object);
extern Object g2int_socket_deinstall(Object);
extern Object g2int_socket_install(Object,Object);
extern Object g2int_socket_poll_status(Object);
extern Object g2int_socket_write_region(Object,Object,Object);
extern Object g2int_tformat_gensym_string(int,...);
extern Object g2int_thread_backtrace(void);
extern Object g2int_thread_child_created(Object,Object);
extern Object g2int_thread_child_destroyed(Object,Object);
extern Object g2int_thread_dequeue_event(Object);
extern Object g2int_thread_enqueue_event(Object,Object);
extern Object g2int_thread_exit_1(void);
extern Object g2int_thread_finalize(Object);
extern Object g2int_thread_format(int,...);
extern Object g2int_thread_initialize(Object);
extern Object g2int_thread_kill(Object);
extern Object g2int_thread_resume(Object);
extern Object g2int_thread_resume_if_necessary(Object);
extern Object g2int_thread_string_substring(Object,Object,Object);
extern Object g2int_thread_suspend(Object);

#else

extern Object g2int_allocate_managed_simple_vector();
extern Object g2int_c_get_peer_address_string();
extern Object g2int_c_get_peer_hostname();
extern Object g2int_cleanup_and_unwind_one_thread_frame_with_needed_contour();
extern Object g2int_cleanup_thread_if_necessary();
extern Object g2int_clear_thread_pool();
extern Object g2int_copy_for_thread_tree();
extern Object g2int_copy_gensym_string();
extern Object g2int_copy_text_between_marks();
extern Object g2int_delete_gensym_element_1();
extern Object g2int_direct_structure_method();
extern Object g2int_do_print_thread();
extern Object g2int_end_io_wait();
extern Object g2int_end_io_wait_1();
extern Object g2int_feed_running_threads();
extern Object g2int_feed_thread_tree();
extern Object g2int_generate_thread_number();
extern Object g2int_gensym_cons_1();
extern Object g2int_gensym_string_substring();
extern Object g2int_getfq_function_no_default();
extern Object g2int_give_thread_quantum();
extern Object g2int_load_and_initialize_type_description();
extern Object g2int_m_socket_close_it_weblink_socket_1();
extern Object g2int_m_thread_child_created_thread_1();
extern Object g2int_m_thread_child_destroyed_thread_1();
extern Object g2int_m_thread_finalize_thread_1();
extern Object g2int_m_thread_initialize_thread_1();
extern Object g2int_make_permanent_thread_structure_internal();
extern Object g2int_make_permanent_weblink_socket_structure_internal();
extern Object g2int_make_root_thread();
extern Object g2int_make_text_safe_for_c();
extern Object g2int_make_text_string_from_c_string_in_foreign_string_pad();
extern Object g2int_make_thread_1_1();
extern Object g2int_make_weblink_socket_1();
extern Object g2int_mark_copy();
extern Object g2int_mark_kill();
extern Object g2int_mark_move();
extern Object g2int_mark_set();
extern Object g2int_memq_function();
extern Object g2int_mutate_global_property();
extern Object g2int_note_issue_with_socket();
extern Object g2int_null_thread_contour_wrapper();
extern Object g2int_peer_address_string_of_socket();
extern Object g2int_peer_name_of_socket();
extern Object g2int_position_of_mark();
extern Object g2int_prolog_thread_function();
extern Object g2int_ps();
extern Object g2int_ps_1();
extern Object g2int_reclaim_event_tree();
extern Object g2int_reclaim_gensym_list_1();
extern Object g2int_reclaim_gensym_string();
extern Object g2int_reclaim_gensym_tree_1();
extern Object g2int_reclaim_managed_simple_vector();
extern Object g2int_reclaim_plist_tree_of_resource_buffer();
extern Object g2int_reclaim_sockets();
extern Object g2int_reclaim_thread_1();
extern Object g2int_reclaim_weblink_socket_1();
extern Object g2int_record_direct_structure_method();
extern Object g2int_record_system_variable();
extern Object g2int_regenerate_optimized_constant();
extern Object g2int_shutdown_thread_tree();
extern Object g2int_shutdown_thread_tree_1();
extern Object g2int_slowly_lookup_next_method();
extern Object g2int_socket_close_it();
extern Object g2int_socket_deinstall();
extern Object g2int_socket_install();
extern Object g2int_socket_poll_status();
extern Object g2int_socket_write_region();
extern Object g2int_tformat_gensym_string();
extern Object g2int_thread_backtrace();
extern Object g2int_thread_child_created();
extern Object g2int_thread_child_destroyed();
extern Object g2int_thread_dequeue_event();
extern Object g2int_thread_enqueue_event();
extern Object g2int_thread_exit_1();
extern Object g2int_thread_finalize();
extern Object g2int_thread_format();
extern Object g2int_thread_initialize();
extern Object g2int_thread_kill();
extern Object g2int_thread_resume();
extern Object g2int_thread_resume_if_necessary();
extern Object g2int_thread_string_substring();
extern Object g2int_thread_suspend();

#endif

/* variables/constants */
extern Object G2int_all_sockets;
extern Object G2int_available_gensym_conses;
extern Object G2int_chain_of_available_threads;
extern Object G2int_chain_of_available_weblink_sockets;
extern Object G2int_current_foreign_string_pad;
extern Object G2int_current_thread;
#define G2int_errno_again FIX((SI_Long)11L)
#define G2int_errno_would_block FIX((SI_Long)35L)
extern Object G2int_lisp_process_cleanups;
extern Object G2int_number_of_running_threads;
extern Object G2int_root_thread;
extern Object G2int_structure_being_reclaimed;
extern Object G2int_sum_of_running_threads;
extern Object G2int_the_last_thread_number;
extern Object G2int_the_type_description_of_thread;
extern Object G2int_the_type_description_of_weblink_socket;
extern Object G2int_thread_count;
extern Object G2int_thread_return_value_pad;
extern Object G2int_trace_quantum;
extern Object G2int_weblink_socket_count;
