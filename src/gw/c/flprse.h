/* flprse.h -- Header File for flprse.c
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
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

extern Object g2int_allocate_byte_vector_16(Object);
extern Object g2int_change_filename_sequence_to_1(Object,Object,Object);
extern Object g2int_coalesce_filename_items_1(Object);
extern Object g2int_coalesce_filename_sublists_1(Object);
extern Object g2int_coalesce_filename_tokens_1(Object);
extern Object g2int_coalesce_remainder_of_filename_sequence_1(Object);
extern Object g2int_coalesce_reversed_filename_list_1(Object);
extern Object g2int_copy_list_using_gensym_conses_1(Object);
extern Object g2int_copy_out_current_wide_string(void);
extern Object g2int_copy_text_string(Object);
extern Object g2int_direct_structure_method(Object,Object);
extern Object g2int_equalw(Object,Object);
extern Object g2int_error_in_filename_parse_1(Object,Object);
extern Object g2int_error_in_generalized_dos_filename_parser(Object);
extern Object g2int_error_in_unix_filename_parser(Object);
extern Object g2int_error_in_vms_filename_parser(Object);
extern Object g2int_extend_current_gensym_string(int,...);
extern Object g2int_final_generalized_dos_parser_node(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_final_unix_parser_node(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_final_vms_parser_node(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_generate_dos_namestring(Object);
extern Object g2int_generate_generalized_dos_namestring(Object);
extern Object g2int_generate_unix_namestring(Object);
extern Object g2int_generate_vms_namestring(Object);
extern Object g2int_generate_win32_namestring(Object);
extern Object g2int_gensym_cons_1(Object,Object);
extern Object g2int_gensym_list_2(Object,Object);
extern Object g2int_gensym_list_3(Object,Object,Object);
extern Object g2int_gensym_list_4(Object,Object,Object,Object);
extern Object g2int_getfq_function_no_default(Object,Object);
extern Object g2int_lengthw(Object);
extern Object g2int_load_and_initialize_type_description(Object,Object);
extern Object g2int_make_filename_parser_information_1(void);
extern Object g2int_make_gensym_list_1(Object);
extern Object g2int_make_gensym_pathname_structure_function(Object,Object,Object,Object,Object,Object);
extern Object g2int_make_permanent_filename_parser_information_structure_internal(void);
extern Object g2int_memq_function(Object,Object);
extern Object g2int_mutate_global_property(Object,Object,Object);
extern Object g2int_nstring_downcasew(Object);
extern Object g2int_nstring_upcasew(Object);
extern Object g2int_parse_dos_filename(Object);
extern Object g2int_parse_generalized_dos_filename(Object);
extern Object g2int_parse_generalized_dos_filename_node_100(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_generalized_dos_filename_node_101(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_generalized_dos_filename_node_102(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_generalized_dos_filename_node_103(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_generalized_dos_filename_node_104(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_generalized_dos_filename_node_105(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_generalized_dos_filename_node_106(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_generalized_dos_filename_node_108(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_generalized_dos_filename_node_110(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_generalized_dos_filename_node_111(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_unix_filename(Object);
extern Object g2int_parse_unix_filename_node_100(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_unix_filename_node_101(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_unix_filename_node_102(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_unix_filename_node_103(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_unix_filename_node_104(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_unix_filename_node_105(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_unix_filename_node_106(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_unix_filename_node_108(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_unix_filename_node_109(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_unix_filename_node_110(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_unix_filename_node_111(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_vms_filename(Object);
extern Object g2int_parse_vms_filename_node_101(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_vms_filename_node_102(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_vms_filename_node_103(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_vms_filename_node_104(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_vms_filename_node_105(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_vms_filename_node_106(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_vms_filename_node_107(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_vms_filename_node_108(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_vms_filename_node_109(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_vms_filename_node_110(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_vms_filename_node_111(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_vms_filename_node_112(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_vms_filename_node_113(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_vms_filename_node_114(Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_parse_win32_filename(Object);
extern Object g2int_read_positive_fixnum_from_string(Object,Object,Object);
extern Object g2int_reclaim_filename_parser_information(Object);
extern Object g2int_reclaim_filename_parser_information_internal_1(Object);
extern Object g2int_reclaim_gensym_list_1(Object);
extern Object g2int_reclaim_gensym_tree_1(Object);
extern Object g2int_reclaim_nascent_vms_directory(Object,Object);
extern Object g2int_reclaim_pathname_components(int,...);
extern Object g2int_reclaim_text_string(Object);
extern Object g2int_record_direct_structure_method(Object,Object,Object);
extern Object g2int_record_system_variable(Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_regenerate_optimized_constant(Object);
extern Object g2int_resume_previous_filename_sequence_1(Object);
extern Object g2int_stringeqw(Object,Object);
extern Object g2int_text_string_length(Object);
extern Object g2int_text_string_p(Object);
extern Object g2int_text_string_substring(Object,Object,Object);
extern Object g2int_tokenize_filename(int,...);
extern Object g2int_twrite(Object);
extern Object g2int_twrite_general_string(Object);
extern Object g2int_twrite_wide_character(Object);
extern Object g2int_wide_character_member(Object,Object);
extern Object g2int_wide_character_rassoc(Object,Object);
extern Object g2int_write_compound_component_for_namestring(Object,Object,Object,Object,Object,Object,Object);
extern Object g2int_write_known_special_character_for_namestring(Object);
extern Object g2int_write_monolithic_component_for_namestring(Object,Object,Object,Object);
extern Object g2int_write_special_character_for_namestring(Object);
extern Object g2int_write_special_characters_for_namestring(Object);

#else

extern Object g2int_allocate_byte_vector_16();
extern Object g2int_change_filename_sequence_to_1();
extern Object g2int_coalesce_filename_items_1();
extern Object g2int_coalesce_filename_sublists_1();
extern Object g2int_coalesce_filename_tokens_1();
extern Object g2int_coalesce_remainder_of_filename_sequence_1();
extern Object g2int_coalesce_reversed_filename_list_1();
extern Object g2int_copy_list_using_gensym_conses_1();
extern Object g2int_copy_out_current_wide_string();
extern Object g2int_copy_text_string();
extern Object g2int_direct_structure_method();
extern Object g2int_equalw();
extern Object g2int_error_in_filename_parse_1();
extern Object g2int_error_in_generalized_dos_filename_parser();
extern Object g2int_error_in_unix_filename_parser();
extern Object g2int_error_in_vms_filename_parser();
extern Object g2int_extend_current_gensym_string();
extern Object g2int_final_generalized_dos_parser_node();
extern Object g2int_final_unix_parser_node();
extern Object g2int_final_vms_parser_node();
extern Object g2int_generate_dos_namestring();
extern Object g2int_generate_generalized_dos_namestring();
extern Object g2int_generate_unix_namestring();
extern Object g2int_generate_vms_namestring();
extern Object g2int_generate_win32_namestring();
extern Object g2int_gensym_cons_1();
extern Object g2int_gensym_list_2();
extern Object g2int_gensym_list_3();
extern Object g2int_gensym_list_4();
extern Object g2int_getfq_function_no_default();
extern Object g2int_lengthw();
extern Object g2int_load_and_initialize_type_description();
extern Object g2int_make_filename_parser_information_1();
extern Object g2int_make_gensym_list_1();
extern Object g2int_make_gensym_pathname_structure_function();
extern Object g2int_make_permanent_filename_parser_information_structure_internal();
extern Object g2int_memq_function();
extern Object g2int_mutate_global_property();
extern Object g2int_nstring_downcasew();
extern Object g2int_nstring_upcasew();
extern Object g2int_parse_dos_filename();
extern Object g2int_parse_generalized_dos_filename();
extern Object g2int_parse_generalized_dos_filename_node_100();
extern Object g2int_parse_generalized_dos_filename_node_101();
extern Object g2int_parse_generalized_dos_filename_node_102();
extern Object g2int_parse_generalized_dos_filename_node_103();
extern Object g2int_parse_generalized_dos_filename_node_104();
extern Object g2int_parse_generalized_dos_filename_node_105();
extern Object g2int_parse_generalized_dos_filename_node_106();
extern Object g2int_parse_generalized_dos_filename_node_108();
extern Object g2int_parse_generalized_dos_filename_node_110();
extern Object g2int_parse_generalized_dos_filename_node_111();
extern Object g2int_parse_unix_filename();
extern Object g2int_parse_unix_filename_node_100();
extern Object g2int_parse_unix_filename_node_101();
extern Object g2int_parse_unix_filename_node_102();
extern Object g2int_parse_unix_filename_node_103();
extern Object g2int_parse_unix_filename_node_104();
extern Object g2int_parse_unix_filename_node_105();
extern Object g2int_parse_unix_filename_node_106();
extern Object g2int_parse_unix_filename_node_108();
extern Object g2int_parse_unix_filename_node_109();
extern Object g2int_parse_unix_filename_node_110();
extern Object g2int_parse_unix_filename_node_111();
extern Object g2int_parse_vms_filename();
extern Object g2int_parse_vms_filename_node_101();
extern Object g2int_parse_vms_filename_node_102();
extern Object g2int_parse_vms_filename_node_103();
extern Object g2int_parse_vms_filename_node_104();
extern Object g2int_parse_vms_filename_node_105();
extern Object g2int_parse_vms_filename_node_106();
extern Object g2int_parse_vms_filename_node_107();
extern Object g2int_parse_vms_filename_node_108();
extern Object g2int_parse_vms_filename_node_109();
extern Object g2int_parse_vms_filename_node_110();
extern Object g2int_parse_vms_filename_node_111();
extern Object g2int_parse_vms_filename_node_112();
extern Object g2int_parse_vms_filename_node_113();
extern Object g2int_parse_vms_filename_node_114();
extern Object g2int_parse_win32_filename();
extern Object g2int_read_positive_fixnum_from_string();
extern Object g2int_reclaim_filename_parser_information();
extern Object g2int_reclaim_filename_parser_information_internal_1();
extern Object g2int_reclaim_gensym_list_1();
extern Object g2int_reclaim_gensym_tree_1();
extern Object g2int_reclaim_nascent_vms_directory();
extern Object g2int_reclaim_pathname_components();
extern Object g2int_reclaim_text_string();
extern Object g2int_record_direct_structure_method();
extern Object g2int_record_system_variable();
extern Object g2int_regenerate_optimized_constant();
extern Object g2int_resume_previous_filename_sequence_1();
extern Object g2int_stringeqw();
extern Object g2int_text_string_length();
extern Object g2int_text_string_p();
extern Object g2int_text_string_substring();
extern Object g2int_tokenize_filename();
extern Object g2int_twrite();
extern Object g2int_twrite_general_string();
extern Object g2int_twrite_wide_character();
extern Object g2int_wide_character_member();
extern Object g2int_wide_character_rassoc();
extern Object g2int_write_compound_component_for_namestring();
extern Object g2int_write_known_special_character_for_namestring();
extern Object g2int_write_monolithic_component_for_namestring();
extern Object g2int_write_special_character_for_namestring();
extern Object g2int_write_special_characters_for_namestring();

#endif

/* variables/constants */
extern Object G2int_accept_any_version_component_p;
extern Object G2int_all_known_file_systems;
extern Object G2int_allow_extensionless_dos_filenames_p;
extern Object G2int_available_gensym_conses;
extern Object G2int_chain_of_available_filename_parser_informations;
extern Object G2int_character_case_mode_for_generalized_dos;
extern Object G2int_current_gensym_string;
extern Object G2int_current_twriting_output_type;
extern Object G2int_current_wide_string;
extern Object G2int_current_wide_string_list;
extern Object G2int_filename_parser_information_count;
extern Object G2int_filename_parser_of_file_system_prop;
extern Object G2int_filename_special_character_registry;
extern Object G2int_fill_pointer_for_current_gensym_string;
extern Object G2int_fill_pointer_for_current_wide_string;
extern Object G2int_last_deletable_token_in_namestring;
extern Object G2int_limit_dos_filename_component_lengths_p;
extern Object G2int_ltasteriskgt;
extern Object G2int_ltbackslashgt;
extern Object G2int_ltcolongt;
extern Object G2int_ltcommagt;
extern Object G2int_ltdotgt;
extern Object G2int_ltdouble_quotegt;
extern Object G2int_ltend_of_sequencegt;
extern Object G2int_ltexclamationgt;
extern Object G2int_lthyphengt;
extern Object G2int_ltleft_angle_bracketgt;
extern Object G2int_ltleft_bracketgt;
extern Object G2int_ltright_angle_bracketgt;
extern Object G2int_ltright_bracketgt;
extern Object G2int_ltsemicolongt;
extern Object G2int_ltsharp_signgt;
extern Object G2int_ltslashgt;
extern Object G2int_ltspacegt;
extern Object G2int_lttildegt;
extern Object G2int_namestring_generator_of_file_system_prop;
extern Object G2int_nodes_for_generalized_dos_filename_parser;
extern Object G2int_nodes_for_unix_filename_parser;
extern Object G2int_nodes_for_vms_filename_parser;
extern Object G2int_the_type_description_of_filename_parser_information;
extern Object G2int_total_length_of_current_gensym_string;
extern Object G2int_total_length_of_current_wide_string;
extern Object G2int_trace_filename_parsing_p;
extern Object G2int_vms_directory_filenames_can_dangle_p;
