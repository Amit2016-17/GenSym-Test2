/* flprse.h -- Header File for flprse.c
 * Copyright (C) 1986-2017 Gensym Corporation.  All Rights Reserved.
 */


/* Symbol Definitions */
extern Object Kelement_type;
extern Object Kinitial_contents;
extern Object Knewest;
extern Object Kprevious;
extern Object Ktest;
extern Object Qunsigned_byte;
extern Object Kunspecific;
extern Object Kup;
extern Object Kwild;
extern Object Kwild_inferiors;

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

extern Object allocate_byte_vector_16(Object);
extern Object bytes_per_simple_vector(Object);
extern Object change_filename_sequence_to_1(Object,Object,Object);
extern Object clear_optimized_constants(void);
extern Object coalesce_filename_items_1(Object);
extern Object coalesce_filename_sublists_1(Object);
extern Object coalesce_filename_tokens_1(Object);
extern Object coalesce_remainder_of_filename_sequence_1(Object);
extern Object coalesce_reversed_filename_list_1(Object);
extern Object copy_list_using_path_conses_1(Object);
extern Object copy_out_current_wide_string(void);
extern Object copy_text_string(Object);
extern Object direct_structure_method(Object,Object);
extern Object equalw(Object,Object);
extern Object error_in_filename_parse_1(Object,Object);
extern Object error_in_generalized_dos_filename_parser(Object);
extern Object error_in_unix_filename_parser(Object);
extern Object error_in_vms_filename_parser(Object);
extern Object extend_current_gensym_string(int,...);
extern Object filename_parser_information_structure_memory_usage(void);
extern Object final_generalized_dos_parser_node(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object final_unix_parser_node(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object final_vms_parser_node(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object generate_dos_namestring(Object);
extern Object generate_generalized_dos_namestring(Object);
extern Object generate_unix_namestring(Object);
extern Object generate_vms_namestring(Object);
extern Object generate_win32_namestring(Object);
extern Object getfq_function_no_default(Object,Object);
extern Object lengthw(Object);
extern Object load_and_initialize_type_description(Object,Object);
extern Object make_filename_parser_information_1(void);
extern Object make_gensym_pathname_structure_function(Object,Object,Object,Object,Object,Object);
extern Object make_path_list_1(Object);
extern Object make_permanent_filename_parser_information_structure_internal(void);
extern Object make_thread_array(Object);
extern Object memq_function(Object,Object);
extern Object mutate_global_property(Object,Object,Object);
extern Object nstring_downcasew(Object);
extern Object nstring_upcasew(Object);
extern Object outstanding_filename_parser_information_count(void);
extern Object parse_dos_filename(Object);
extern Object parse_generalized_dos_filename(Object);
extern Object parse_generalized_dos_filename_node_100(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_generalized_dos_filename_node_101(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_generalized_dos_filename_node_102(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_generalized_dos_filename_node_103(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_generalized_dos_filename_node_104(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_generalized_dos_filename_node_105(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_generalized_dos_filename_node_106(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_generalized_dos_filename_node_108(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_generalized_dos_filename_node_110(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_generalized_dos_filename_node_111(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_unix_filename(Object);
extern Object parse_unix_filename_node_100(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_unix_filename_node_101(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_unix_filename_node_102(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_unix_filename_node_103(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_unix_filename_node_104(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_unix_filename_node_105(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_unix_filename_node_106(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_unix_filename_node_108(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_unix_filename_node_109(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_unix_filename_node_110(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_unix_filename_node_111(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_vms_filename(Object);
extern Object parse_vms_filename_node_101(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_vms_filename_node_102(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_vms_filename_node_103(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_vms_filename_node_104(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_vms_filename_node_105(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_vms_filename_node_106(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_vms_filename_node_107(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_vms_filename_node_108(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_vms_filename_node_109(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_vms_filename_node_110(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_vms_filename_node_111(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_vms_filename_node_112(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_vms_filename_node_113(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_vms_filename_node_114(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object parse_win32_filename(Object);
extern Object path_cons_1(Object,Object);
extern Object path_list_2(Object,Object);
extern Object path_list_3(Object,Object,Object);
extern Object path_list_4(Object,Object,Object,Object);
extern Object push_optimized_constant(Object);
extern Object read_positive_fixnum_from_string(Object,Object,Object);
extern Object reclaim_filename_parser_information(Object);
extern Object reclaim_filename_parser_information_internal_1(Object);
extern Object reclaim_gensym_tree_1(Object);
extern Object reclaim_nascent_vms_directory(Object,Object);
extern Object reclaim_path_list_1(Object);
extern Object reclaim_path_tree_1(Object);
extern Object reclaim_pathname_components(int,...);
extern Object reclaim_text_string(Object);
extern Object record_direct_structure_method(Object,Object,Object);
extern Object record_system_variable(Object,Object,Object,Object,Object,Object,Object);
extern Object regenerate_optimized_constant(Object);
extern Object resume_previous_filename_sequence_1(Object);
extern Object string_eq_w(Object,Object);
extern Object text_string_length(Object);
extern Object text_string_p(Object);
extern Object text_string_substring(Object,Object,Object);
extern Object tokenize_filename(int,...);
extern Object twrite(Object);
extern Object twrite_general_string(Object);
extern Object twrite_wide_character(Object);
extern Object update_object_pool_meters_list(Object);
extern Object wide_character_member(Object,Object);
extern Object wide_character_rassoc(Object,Object);
extern Object write_compound_component_for_namestring(Object,Object,Object,Object,Object,Object,Object);
extern Object write_known_special_character_for_namestring(Object);
extern Object write_monolithic_component_for_namestring(Object,Object,Object,Object);
extern Object write_special_character_for_namestring(Object);
extern Object write_special_characters_for_namestring(Object);

#else

extern Object allocate_byte_vector_16();
extern Object bytes_per_simple_vector();
extern Object change_filename_sequence_to_1();
extern Object clear_optimized_constants();
extern Object coalesce_filename_items_1();
extern Object coalesce_filename_sublists_1();
extern Object coalesce_filename_tokens_1();
extern Object coalesce_remainder_of_filename_sequence_1();
extern Object coalesce_reversed_filename_list_1();
extern Object copy_list_using_path_conses_1();
extern Object copy_out_current_wide_string();
extern Object copy_text_string();
extern Object direct_structure_method();
extern Object equalw();
extern Object error_in_filename_parse_1();
extern Object error_in_generalized_dos_filename_parser();
extern Object error_in_unix_filename_parser();
extern Object error_in_vms_filename_parser();
extern Object extend_current_gensym_string();
extern Object filename_parser_information_structure_memory_usage();
extern Object final_generalized_dos_parser_node();
extern Object final_unix_parser_node();
extern Object final_vms_parser_node();
extern Object generate_dos_namestring();
extern Object generate_generalized_dos_namestring();
extern Object generate_unix_namestring();
extern Object generate_vms_namestring();
extern Object generate_win32_namestring();
extern Object getfq_function_no_default();
extern Object lengthw();
extern Object load_and_initialize_type_description();
extern Object make_filename_parser_information_1();
extern Object make_gensym_pathname_structure_function();
extern Object make_path_list_1();
extern Object make_permanent_filename_parser_information_structure_internal();
extern Object make_thread_array();
extern Object memq_function();
extern Object mutate_global_property();
extern Object nstring_downcasew();
extern Object nstring_upcasew();
extern Object outstanding_filename_parser_information_count();
extern Object parse_dos_filename();
extern Object parse_generalized_dos_filename();
extern Object parse_generalized_dos_filename_node_100();
extern Object parse_generalized_dos_filename_node_101();
extern Object parse_generalized_dos_filename_node_102();
extern Object parse_generalized_dos_filename_node_103();
extern Object parse_generalized_dos_filename_node_104();
extern Object parse_generalized_dos_filename_node_105();
extern Object parse_generalized_dos_filename_node_106();
extern Object parse_generalized_dos_filename_node_108();
extern Object parse_generalized_dos_filename_node_110();
extern Object parse_generalized_dos_filename_node_111();
extern Object parse_unix_filename();
extern Object parse_unix_filename_node_100();
extern Object parse_unix_filename_node_101();
extern Object parse_unix_filename_node_102();
extern Object parse_unix_filename_node_103();
extern Object parse_unix_filename_node_104();
extern Object parse_unix_filename_node_105();
extern Object parse_unix_filename_node_106();
extern Object parse_unix_filename_node_108();
extern Object parse_unix_filename_node_109();
extern Object parse_unix_filename_node_110();
extern Object parse_unix_filename_node_111();
extern Object parse_vms_filename();
extern Object parse_vms_filename_node_101();
extern Object parse_vms_filename_node_102();
extern Object parse_vms_filename_node_103();
extern Object parse_vms_filename_node_104();
extern Object parse_vms_filename_node_105();
extern Object parse_vms_filename_node_106();
extern Object parse_vms_filename_node_107();
extern Object parse_vms_filename_node_108();
extern Object parse_vms_filename_node_109();
extern Object parse_vms_filename_node_110();
extern Object parse_vms_filename_node_111();
extern Object parse_vms_filename_node_112();
extern Object parse_vms_filename_node_113();
extern Object parse_vms_filename_node_114();
extern Object parse_win32_filename();
extern Object path_cons_1();
extern Object path_list_2();
extern Object path_list_3();
extern Object path_list_4();
extern Object push_optimized_constant();
extern Object read_positive_fixnum_from_string();
extern Object reclaim_filename_parser_information();
extern Object reclaim_filename_parser_information_internal_1();
extern Object reclaim_gensym_tree_1();
extern Object reclaim_nascent_vms_directory();
extern Object reclaim_path_list_1();
extern Object reclaim_path_tree_1();
extern Object reclaim_pathname_components();
extern Object reclaim_text_string();
extern Object record_direct_structure_method();
extern Object record_system_variable();
extern Object regenerate_optimized_constant();
extern Object resume_previous_filename_sequence_1();
extern Object string_eq_w();
extern Object text_string_length();
extern Object text_string_p();
extern Object text_string_substring();
extern Object tokenize_filename();
extern Object twrite();
extern Object twrite_general_string();
extern Object twrite_wide_character();
extern Object update_object_pool_meters_list();
extern Object wide_character_member();
extern Object wide_character_rassoc();
extern Object write_compound_component_for_namestring();
extern Object write_known_special_character_for_namestring();
extern Object write_monolithic_component_for_namestring();
extern Object write_special_character_for_namestring();
extern Object write_special_characters_for_namestring();

#endif

/* variables/constants */
DECLARE_VARIABLE_WITH_SYMBOL(Accept_any_version_component_p, Qaccept_any_version_component_p);
DECLARE_VARIABLE_WITH_SYMBOL(All_known_file_systems, Qall_known_file_systems);
DECLARE_VARIABLE_WITH_SYMBOL(Allow_extensionless_dos_filenames_p, Qallow_extensionless_dos_filenames_p);
extern Object Available_path_conses_tail_vector;
extern Object Available_path_conses_vector;
DECLARE_VARIABLE_WITH_SYMBOL(Chain_of_available_filename_parser_informations, Qchain_of_available_filename_parser_informations);
extern Object Chain_of_available_filename_parser_informations_vector;
DECLARE_VARIABLE_WITH_SYMBOL(Character_case_mode_for_generalized_dos, Qcharacter_case_mode_for_generalized_dos);
DECLARE_VARIABLE_WITH_SYMBOL(Convert_file_strings_to_uppercase_p, Qconvert_file_strings_to_uppercase_p);
DECLARE_VARIABLE_WITH_SYMBOL(Current_gensym_string, Qcurrent_gensym_string);
DECLARE_VARIABLE_WITH_SYMBOL(Current_thread_index, Qcurrent_thread_index);
DECLARE_VARIABLE_WITH_SYMBOL(Current_twriting_output_type, Qcurrent_twriting_output_type);
DECLARE_VARIABLE_WITH_SYMBOL(Current_wide_string, Qcurrent_wide_string);
DECLARE_VARIABLE_WITH_SYMBOL(Current_wide_string_list, Qcurrent_wide_string_list);
DECLARE_VARIABLE_WITH_SYMBOL(Filename_parser_information_count, Qfilename_parser_information_count);
extern Object Filename_parser_of_file_system_prop;
DECLARE_VARIABLE_WITH_SYMBOL(Filename_special_character_registry, Qfilename_special_character_registry);
DECLARE_VARIABLE_WITH_SYMBOL(Fill_pointer_for_current_gensym_string, Qfill_pointer_for_current_gensym_string);
DECLARE_VARIABLE_WITH_SYMBOL(Fill_pointer_for_current_wide_string, Qfill_pointer_for_current_wide_string);
DECLARE_VARIABLE_WITH_SYMBOL(Last_deletable_token_in_namestring, Qlast_deletable_token_in_namestring);
DECLARE_VARIABLE_WITH_SYMBOL(Limit_dos_filename_component_lengths_p, Qlimit_dos_filename_component_lengths_p);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_asterisk_gt, Qlt_asterisk_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_backslash_gt, Qlt_backslash_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_colon_gt, Qlt_colon_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_comma_gt, Qlt_comma_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_dot_gt, Qlt_dot_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_double_quote_gt, Qlt_double_quote_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_end_of_sequence_gt, Qlt_end_of_sequence_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_exclamation_gt, Qlt_exclamation_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_hyphen_gt, Qlt_hyphen_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_left_angle_bracket_gt, Qlt_left_angle_bracket_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_left_bracket_gt, Qlt_left_bracket_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_right_angle_bracket_gt, Qlt_right_angle_bracket_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_right_bracket_gt, Qlt_right_bracket_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_semicolon_gt, Qlt_semicolon_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_sharp_sign_gt, Qlt_sharp_sign_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_slash_gt, Qlt_slash_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_space_gt, Qlt_space_gt);
DECLARE_VARIABLE_WITH_SYMBOL(Lt_tilde_gt, Qlt_tilde_gt);
extern Object Namestring_generator_of_file_system_prop;
DECLARE_VARIABLE_WITH_SYMBOL(Nodes_for_generalized_dos_filename_parser, Qnodes_for_generalized_dos_filename_parser);
DECLARE_VARIABLE_WITH_SYMBOL(Nodes_for_unix_filename_parser, Qnodes_for_unix_filename_parser);
DECLARE_VARIABLE_WITH_SYMBOL(Nodes_for_vms_filename_parser, Qnodes_for_vms_filename_parser);
extern Object The_type_description_of_filename_parser_information;
DECLARE_VARIABLE_WITH_SYMBOL(Total_length_of_current_gensym_string, Qtotal_length_of_current_gensym_string);
DECLARE_VARIABLE_WITH_SYMBOL(Total_length_of_current_wide_string, Qtotal_length_of_current_wide_string);
DECLARE_VARIABLE_WITH_SYMBOL(Trace_filename_parsing_p, Qtrace_filename_parsing_p);
DECLARE_VARIABLE_WITH_SYMBOL(Vms_directory_filenames_can_dangle_p, Qvms_directory_filenames_can_dangle_p);
