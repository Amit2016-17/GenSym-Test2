/* strms.c
 * Input file:  streams.lisp
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
 */

#include "user.h"
#include "strms.h"


/* COPY-LIST-USING-STREAMS-CONSES-FUNCTION */
Object copy_list_using_streams_conses_function(streams_list)
    Object streams_list;
{
    x_note_fn_call(38,0);
    return copy_list_using_gensym_conses_1(streams_list);
}

/* RECLAIM-STREAMS-LIST-FUNCTION */
Object reclaim_streams_list_function(streams_list)
    Object streams_list;
{
    x_note_fn_call(38,1);
    return reclaim_gensym_list_1(streams_list);
}

Object The_type_description_of_g2_stream_structure = UNBOUND;

Object Chain_of_available_g2_stream_structures = UNBOUND;

Object G2_stream_structure_count = UNBOUND;

/* G2-STREAM-STRUCTURE-STRUCTURE-MEMORY-USAGE */
Object g2_stream_structure_structure_memory_usage()
{
    Object temp;

    x_note_fn_call(38,2);
    temp = G2_stream_structure_count;
    temp = FIXNUM_TIMES(temp,bytes_per_simple_vector(FIX((SI_Long)5L)));
    return VALUES_1(temp);
}

/* OUTSTANDING-G2-STREAM-STRUCTURE-COUNT */
Object outstanding_g2_stream_structure_count()
{
    Object def_structure_g2_stream_structure_variable, count_1;
    SI_Long gensymed_symbol, gensymed_symbol_1;

    x_note_fn_call(38,3);
    gensymed_symbol = IFIX(G2_stream_structure_count);
    def_structure_g2_stream_structure_variable = 
	    Chain_of_available_g2_stream_structures;
    count_1 = FIX((SI_Long)0L);
  next_loop:
    if ( !TRUEP(def_structure_g2_stream_structure_variable))
	goto end_loop;
    def_structure_g2_stream_structure_variable = 
	    ISVREF(def_structure_g2_stream_structure_variable,(SI_Long)0L);
    count_1 = FIXNUM_ADD1(count_1);
    goto next_loop;
  end_loop:
    gensymed_symbol_1 = IFIX(count_1);
    goto end;
    gensymed_symbol_1 = IFIX(Qnil);
  end:;
    return VALUES_1(FIX(gensymed_symbol - gensymed_symbol_1));
}

/* RECLAIM-G2-STREAM-STRUCTURE-1 */
Object reclaim_g2_stream_structure_1(g2_stream_structure)
    Object g2_stream_structure;
{
    Object svref_new_value;

    x_note_fn_call(38,4);
    inline_note_reclaim_cons(g2_stream_structure,Nil);
    svref_new_value = Chain_of_available_g2_stream_structures;
    SVREF(g2_stream_structure,FIX((SI_Long)0L)) = svref_new_value;
    Chain_of_available_g2_stream_structures = g2_stream_structure;
    return VALUES_1(Nil);
}

/* RECLAIM-STRUCTURE-FOR-G2-STREAM-STRUCTURE */
Object reclaim_structure_for_g2_stream_structure(g2_stream_structure)
    Object g2_stream_structure;
{
    x_note_fn_call(38,5);
    return reclaim_g2_stream_structure_1(g2_stream_structure);
}

static Object Qg2_defstruct_structure_name_g2_stream_structure_g2_struct;  /* g2-defstruct-structure-name::g2-stream-structure-g2-struct */

/* MAKE-PERMANENT-G2-STREAM-STRUCTURE-STRUCTURE-INTERNAL */
Object make_permanent_g2_stream_structure_structure_internal()
{
    Object def_structure_g2_stream_structure_variable;
    Object g2_stream_structure_count_new_value;
    Object defstruct_g2_g2_stream_structure_variable, the_array;
    SI_Long gensymed_symbol, i, ab_loop_bind_;
    XDeclare_area(1);

    x_note_fn_call(38,6);
    def_structure_g2_stream_structure_variable = Nil;
    g2_stream_structure_count_new_value = 
	    FIXNUM_ADD1(G2_stream_structure_count);
    G2_stream_structure_count = g2_stream_structure_count_new_value;
    if (PUSH_AREA(Dynamic_area,0)) {
	defstruct_g2_g2_stream_structure_variable = Nil;
	gensymed_symbol = (SI_Long)5L;
	the_array = make_array(1,FIX(gensymed_symbol));
	i = (SI_Long)0L;
	ab_loop_bind_ = gensymed_symbol;
      next_loop:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	ISVREF(the_array,i) = Nil;
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:;
	defstruct_g2_g2_stream_structure_variable = the_array;
	SVREF(defstruct_g2_g2_stream_structure_variable,FIX((SI_Long)0L)) 
		= Qg2_defstruct_structure_name_g2_stream_structure_g2_struct;
	def_structure_g2_stream_structure_variable = 
		defstruct_g2_g2_stream_structure_variable;
    }
    POP_AREA(0);
    return VALUES_1(def_structure_g2_stream_structure_variable);
}

/* MAKE-G2-STREAM-STRUCTURE-INTERNAL-1 */
Object make_g2_stream_structure_internal_1(g2_stream_handle)
    Object g2_stream_handle;
{
    Object def_structure_g2_stream_structure_variable;

    x_note_fn_call(38,7);
    def_structure_g2_stream_structure_variable = 
	    Chain_of_available_g2_stream_structures;
    if (def_structure_g2_stream_structure_variable) {
	Chain_of_available_g2_stream_structures = 
		ISVREF(def_structure_g2_stream_structure_variable,(SI_Long)0L);
	SVREF(def_structure_g2_stream_structure_variable,FIX((SI_Long)0L)) 
		= Qg2_defstruct_structure_name_g2_stream_structure_g2_struct;
    }
    else
	def_structure_g2_stream_structure_variable = 
		make_permanent_g2_stream_structure_structure_internal();
    inline_note_allocate_cons(def_structure_g2_stream_structure_variable,Nil);
    SVREF(def_structure_g2_stream_structure_variable,FIX((SI_Long)1L)) = 
	    g2_stream_handle;
    return VALUES_1(def_structure_g2_stream_structure_variable);
}

static Object Qdos;                /* dos */

static Object Qhp9000s300;         /* hp9000s300 */

/* INITIALIZE-MAXIMUM-FILE-NAME-LENGTH? */
Object initialize_maximum_file_name_length_qm()
{
    x_note_fn_call(38,8);
    if (EQ(G2_operating_system,Qdos))
	return VALUES_1(FIX((SI_Long)8L));
    else if (EQ(G2_machine_type,Qhp9000s300))
	return VALUES_1(FIX((SI_Long)14L));
    else
	return VALUES_1(Nil);
}

Object Maximum_file_name_length_qm = UNBOUND;

Object File_system_for_interception_qm = UNBOUND;

static Object Qidentical_g2_streams_p;  /* identical-g2-streams-p */

/* G2-STREAM-ENTER-INTO-STREAM-TABLES */
Object g2_stream_enter_into_stream_tables(namestring_1,new_stream)
    Object namestring_1, new_stream;
{
    Object gensym_modify_macro_using_test_arg_1;
    Object gensym_modify_macro_using_test_arg_2, car_1, cdr_1, test;
    Object key_result, x_element, ab_loop_list_, ab_loop_it_;
    Object g2_stream_all_open_streams_new_value, new_pathname_qm;
    Object empty_pathname;
    char temp;

    x_note_fn_call(38,9);
    gensym_modify_macro_using_test_arg_1 = new_stream;
    gensym_modify_macro_using_test_arg_2 = 
	    SYMBOL_FUNCTION(Qidentical_g2_streams_p);
    car_1 = gensym_modify_macro_using_test_arg_1;
    cdr_1 = G2_stream_all_open_streams;
    test = gensym_modify_macro_using_test_arg_2;
    key_result = car_1;
    x_element = Nil;
    ab_loop_list_ = cdr_1;
    ab_loop_it_ = Nil;
  next_loop:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    x_element = M_CAR(ab_loop_list_);
    ab_loop_list_ = M_CDR(ab_loop_list_);
    ab_loop_it_ = FUNCALL_2(test,key_result,x_element);
    if (ab_loop_it_) {
	temp = TRUEP(ab_loop_it_);
	goto end;
    }
    goto next_loop;
  end_loop:
    temp = TRUEP(Qnil);
  end:;
    g2_stream_all_open_streams_new_value = temp ? cdr_1 : 
	    gensym_cons_1(car_1,cdr_1);
    G2_stream_all_open_streams = g2_stream_all_open_streams_new_value;
    new_pathname_qm = gensym_pathname(namestring_1);
    if (new_pathname_qm) {
	augment_pathname_from_file_system(new_pathname_qm,namestring_1);
	SVREF(new_pathname_qm,FIX((SI_Long)7L)) = new_stream;
	All_gensym_pathnames_containing_open_streams = 
		gensym_cons_1(new_pathname_qm,
		All_gensym_pathnames_containing_open_streams);
    }
    else {
	empty_pathname = gensym_make_pathname_with_copied_components(Nil,
		Nil,Nil,namestring_1,Nil,Nil,Nil);
	SVREF(empty_pathname,FIX((SI_Long)7L)) = new_stream;
	All_gensym_pathnames_containing_open_streams = 
		gensym_cons_1(empty_pathname,
		All_gensym_pathnames_containing_open_streams);
    }
    return VALUES_1(new_stream);
}

static Object Qab_gensym;          /* gensym */

/* G2-STREAM-DELETE-FROM-LIST-OF-OPEN-STREAMS */
Object g2_stream_delete_from_list_of_open_streams(old_stream)
    Object old_stream;
{
    Object gensym_pop_store, cons_1, next_cons, cdr_new_value;
    Object cons_containing_stream, successive_cdr;

    x_note_fn_call(38,10);
    if (identical_g2_streams_p(CAR(G2_stream_all_open_streams),old_stream)) {
	gensym_pop_store = Nil;
	cons_1 = G2_stream_all_open_streams;
	if (cons_1) {
	    gensym_pop_store = M_CAR(cons_1);
	    next_cons = M_CDR(cons_1);
	    inline_note_reclaim_cons(cons_1,Qab_gensym);
	    cdr_new_value = Available_gensym_conses;
	    M_CDR(cons_1) = cdr_new_value;
	    Available_gensym_conses = cons_1;
	}
	else
	    next_cons = Nil;
	G2_stream_all_open_streams = next_cons;
	return VALUES_1(gensym_pop_store);
    }
    else {
	cons_containing_stream = Nil;
	successive_cdr = G2_stream_all_open_streams;
      next_loop:
	if ( !TRUEP(successive_cdr))
	    goto end_loop;
	cons_containing_stream = CDR(successive_cdr);
	if (identical_g2_streams_p(CAR(cons_containing_stream),old_stream)) {
	    cdr_new_value = CDDR(successive_cdr);
	    M_CDR(successive_cdr) = cdr_new_value;
	    reclaim_gensym_cons_1(cons_containing_stream);
	    return VALUES_1(Nil);
	}
	successive_cdr = M_CDR(successive_cdr);
	goto next_loop;
      end_loop:
	return VALUES_1(Qnil);
    }
}

/* DELETE-FROM-LIST-OF-ACTIVE-PATHNAMES */
Object delete_from_list_of_active_pathnames(old_stream)
    Object old_stream;
{
    Object gensym_pop_store, cons_1, next_cons, cdr_new_value;
    Object cons_containing_stream, successive_cdr;

    x_note_fn_call(38,11);
    if (All_gensym_pathnames_containing_open_streams) {
	if (identical_g2_streams_p(ISVREF(CAR(All_gensym_pathnames_containing_open_streams),
		(SI_Long)7L),old_stream)) {
	    gensym_pop_store = Nil;
	    cons_1 = All_gensym_pathnames_containing_open_streams;
	    if (cons_1) {
		gensym_pop_store = M_CAR(cons_1);
		next_cons = M_CDR(cons_1);
		inline_note_reclaim_cons(cons_1,Qab_gensym);
		cdr_new_value = Available_gensym_conses;
		M_CDR(cons_1) = cdr_new_value;
		Available_gensym_conses = cons_1;
	    }
	    else
		next_cons = Nil;
	    All_gensym_pathnames_containing_open_streams = next_cons;
	    return reclaim_gensym_pathname(gensym_pop_store);
	}
	else {
	    cons_containing_stream = Nil;
	    successive_cdr = All_gensym_pathnames_containing_open_streams;
	  next_loop:
	    if ( !TRUEP(successive_cdr))
		goto end_loop;
	    cons_containing_stream = CDR(successive_cdr);
	    if (identical_g2_streams_p(ISVREF(CAR(cons_containing_stream),
		    (SI_Long)7L),old_stream)) {
		cdr_new_value = CDDR(successive_cdr);
		M_CDR(successive_cdr) = cdr_new_value;
		reclaim_gensym_pathname(CAR(cons_containing_stream));
		reclaim_gensym_cons_1(cons_containing_stream);
		return VALUES_1(Nil);
	    }
	    successive_cdr = M_CDR(successive_cdr);
	    goto next_loop;
	  end_loop:
	    return VALUES_1(Qnil);
	}
    }
    else
	return VALUES_1(Nil);
}

/* G2-STREAM-FIND-ACTIVE-PATHNAME */
Object g2_stream_find_active_pathname(stream)
    Object stream;
{
    Object loop_sublist, pathname_1, ab_loop_it_;

    x_note_fn_call(38,12);
    loop_sublist = All_gensym_pathnames_containing_open_streams;
    pathname_1 = Nil;
    ab_loop_it_ = Nil;
  next_loop:
    if ( !TRUEP(loop_sublist))
	goto end_loop;
    pathname_1 = M_CAR(loop_sublist);
    loop_sublist = M_CDR(loop_sublist);
    ab_loop_it_ = identical_g2_streams_p(ISVREF(pathname_1,(SI_Long)7L),
	    stream) ? pathname_1 : Qnil;
    if (ab_loop_it_)
	return VALUES_1(ab_loop_it_);
    goto next_loop;
  end_loop:
    return VALUES_1(Qnil);
}

/* G2-STREAM-REMOVE-ENTRY-FROM-STREAM-TABLES */
Object g2_stream_remove_entry_from_stream_tables(old_stream)
    Object old_stream;
{
    x_note_fn_call(38,13);
    delete_from_list_of_active_pathnames(old_stream);
    return g2_stream_delete_from_list_of_open_streams(old_stream);
}

Object File_already_exists_code = UNBOUND;

Object End_of_file_reached_code = UNBOUND;

Object File_operation_succeeded_code = UNBOUND;

Object File_not_found_code = UNBOUND;

Object File_at_unknown_host_code = UNBOUND;

Object File_directory_not_found_code = UNBOUND;

Object File_host_not_responding_code = UNBOUND;

Object Filename_parse_failed_code = UNBOUND;

Object File_op_not_supported_code = UNBOUND;

Object Unknown_error_during_file_op_code = UNBOUND;

Object Error_creating_disk_query_code = UNBOUND;

Object Error_spawning_disk_query_code = UNBOUND;

Object Error_parsing_disk_query_code = UNBOUND;

Object Directory_spec_too_long_code = UNBOUND;

Object Failed_to_build_dir_structure_code = UNBOUND;

Object Failed_to_open_dir_structure_code = UNBOUND;

Object Append_of_non_existent_file_code = UNBOUND;

Object Bad_regular_expression_code = UNBOUND;

Object Failed_to_open_device_list_code = UNBOUND;

Object Unknown_error_during_file_op_message = UNBOUND;

Object Unknown_error_during_file_op_with_code_message = UNBOUND;

Object G2_stream_error_string_table = UNBOUND;

Object Internal_status_of_most_recent_file_operation = UNBOUND;

/* MOST-RECENTLY-ENCOUNTERED-FILE-ALREADY-EXISTS-ERROR-P */
Object most_recently_encountered_file_already_exists_error_p()
{
    Object temp;

    x_note_fn_call(38,14);
    temp = EQL(Internal_status_of_most_recent_file_operation,
	    File_already_exists_code) ? T : Nil;
    return VALUES_1(temp);
}

Object Cached_unknown_error_string_with_code_qm = UNBOUND;

/* MOST-RECENT-FILE-OPERATION-STATUS-AS-TEXT */
Object most_recent_file_operation_status_as_text()
{
    Object temp, error_text_qm;

    x_note_fn_call(38,15);
    temp = assq_function(Internal_status_of_most_recent_file_operation,
	    G2_stream_error_string_table);
    error_text_qm = CDR(temp);
    if (error_text_qm)
	return copy_text_string(error_text_qm);
    else {
	if (Cached_unknown_error_string_with_code_qm)
	    reclaim_text_string(Cached_unknown_error_string_with_code_qm);
	Cached_unknown_error_string_with_code_qm = tformat_text_string(2,
		Unknown_error_during_file_op_with_code_message,
		Internal_status_of_most_recent_file_operation);
	return copy_text_string(Cached_unknown_error_string_with_code_qm);
    }
}

/* G2-STREAM-P */
Object g2_stream_p(thing)
    Object thing;
{
    Object stream_qm, ab_loop_list_;

    x_note_fn_call(38,16);
    stream_qm = Nil;
    ab_loop_list_ = G2_stream_all_open_streams;
  next_loop:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    stream_qm = M_CAR(ab_loop_list_);
    ab_loop_list_ = M_CDR(ab_loop_list_);
    if (stream_qm && identical_g2_streams_p(thing,stream_qm))
	return VALUES_1(T);
    goto next_loop;
  end_loop:
    return VALUES_1(Nil);
    return VALUES_1(Qnil);
}

/* IDENTICAL-G2-STREAMS-P */
Object identical_g2_streams_p(g2_stream_1,g2_stream_2)
    Object g2_stream_1, g2_stream_2;
{
    Object temp;

    x_note_fn_call(38,17);
    temp = EQL(g2_stream_1,g2_stream_2) ? T : Nil;
    return VALUES_1(temp);
}

/* G2-STREAM-EOF-P */
Object g2_stream_eof_p(g2_stream)
    Object g2_stream;
{
    x_note_fn_call(38,18);
    g2_stream = ISVREF(g2_stream,(SI_Long)1L);
    if (g2ext_str_eof_p(IFIX(g2_stream)) == (SI_Long)0L)
	return VALUES_1(Nil);
    else
	return VALUES_1(T);
}

/* G2-STREAM-RECLAIM */
Object g2_stream_reclaim(g2_stream_structure)
    Object g2_stream_structure;
{
    x_note_fn_call(38,19);
    return reclaim_g2_stream_structure_1(g2_stream_structure);
}

/* G2-STREAM-CLOSE */
Object g2_stream_close(g2_stream_structure)
    Object g2_stream_structure;
{
    SI_Long status;

    x_note_fn_call(38,20);
    status = g2ext_str_close(IFIX(ISVREF(g2_stream_structure,(SI_Long)1L)));
    g2_stream_remove_entry_from_stream_tables(g2_stream_structure);
    reclaim_g2_stream_structure_1(g2_stream_structure);
    if (status == IFIX(G2_stream_foreign_file_op_success)) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(T);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

/* G2-STREAM-FLUSH */
Object g2_stream_flush(g2_stream)
    Object g2_stream;
{
    SI_Long status;

    x_note_fn_call(38,21);
    g2_stream = ISVREF(g2_stream,(SI_Long)1L);
    status = g2ext_str_flush(IFIX(g2_stream));
    if (status == IFIX(G2_stream_foreign_file_op_success)) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(T);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

/* G2-STREAM-SYNC */
Object g2_stream_sync(g2_stream)
    Object g2_stream;
{
    SI_Long status;

    x_note_fn_call(38,22);
    g2_stream = ISVREF(g2_stream,(SI_Long)1L);
    status = g2ext_str_sync(IFIX(g2_stream));
    if (status == IFIX(G2_stream_foreign_file_op_success)) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(T);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

static Object Qmiscellaneous_parameters;  /* miscellaneous-parameters */

static Object Quse_unicode_for_filenames_qm_from_system_table;  /* use-unicode-for-filenames?-from-system-table */

/* USE-UNICODE-FOR-FILENAMES */
Object use_unicode_for_filenames()
{
    x_note_fn_call(38,23);
    if (BOUNDP(Qmiscellaneous_parameters) && 
	    SYMBOL_VALUE(Qmiscellaneous_parameters))
	return FUNCALL_SYMBOL_0(Quse_unicode_for_filenames_qm_from_system_table);
    else
	return VALUES_1(Nil);
}

/* G2-STREAM-OPEN-FOR-INPUT */
Object g2_stream_open_for_input(namestring_1)
    Object namestring_1;
{
    Object stream_or_error, temp, g2_stream_structure;

    x_note_fn_call(38,24);
    stream_or_error = Nil || use_unicode_for_filenames() ? 
	    c_g2_stream_open_wide(namestring_1,
	    G2_stream_open_mode_for_input) : c_g2_stream_open(namestring_1,
	    G2_stream_open_mode_for_input);
    if (FIXNUM_EQ(stream_or_error,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	temp = Nil;
    }
    else {
	g2_stream_structure = 
		make_g2_stream_structure_internal_1(stream_or_error);
	g2_stream_enter_into_stream_tables(namestring_1,g2_stream_structure);
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	temp = g2_stream_structure;
    }
    return VALUES_1(temp);
}

/* G2-STREAM-OPEN-FOR-INPUT-RAW */
Object g2_stream_open_for_input_raw(namestring_1)
    Object namestring_1;
{
    Object stream_or_error, temp, g2_stream_structure;

    x_note_fn_call(38,25);
    stream_or_error = T || use_unicode_for_filenames() ? 
	    c_g2_stream_open_wide(namestring_1,
	    G2_stream_open_mode_for_input) : c_g2_stream_open(namestring_1,
	    G2_stream_open_mode_for_input);
    if (FIXNUM_EQ(stream_or_error,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	temp = Nil;
    }
    else {
	g2_stream_structure = 
		make_g2_stream_structure_internal_1(stream_or_error);
	g2_stream_enter_into_stream_tables(namestring_1,g2_stream_structure);
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	temp = g2_stream_structure;
    }
    return VALUES_1(temp);
}

/* G2-STREAM-OPEN-FOR-OUTPUT */
Object g2_stream_open_for_output(namestring_1)
    Object namestring_1;
{
    Object stream_or_error, temp, g2_stream_structure;

    x_note_fn_call(38,26);
    stream_or_error = Nil || use_unicode_for_filenames() ? 
	    c_g2_stream_open_wide(namestring_1,
	    G2_stream_open_mode_for_output) : 
	    c_g2_stream_open(namestring_1,G2_stream_open_mode_for_output);
    if (FIXNUM_EQ(stream_or_error,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	temp = Nil;
    }
    else {
	g2_stream_structure = 
		make_g2_stream_structure_internal_1(stream_or_error);
	g2_stream_enter_into_stream_tables(namestring_1,g2_stream_structure);
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	temp = g2_stream_structure;
    }
    return VALUES_1(temp);
}

/* G2-STREAM-OPEN-FOR-BINARY-INPUT */
Object g2_stream_open_for_binary_input(namestring_1)
    Object namestring_1;
{
    Object stream_or_error, temp, g2_stream_structure;

    x_note_fn_call(38,27);
    stream_or_error = Nil || use_unicode_for_filenames() ? 
	    c_g2_stream_open_wide(namestring_1,
	    G2_stream_open_mode_for_binary_input) : 
	    c_g2_stream_open(namestring_1,
	    G2_stream_open_mode_for_binary_input);
    if (FIXNUM_EQ(stream_or_error,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	temp = Nil;
    }
    else {
	g2_stream_structure = 
		make_g2_stream_structure_internal_1(stream_or_error);
	g2_stream_enter_into_stream_tables(namestring_1,g2_stream_structure);
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	temp = g2_stream_structure;
    }
    return VALUES_1(temp);
}

/* G2-STREAM-OPEN-FOR-BINARY-OUTPUT */
Object g2_stream_open_for_binary_output(namestring_1)
    Object namestring_1;
{
    Object stream_or_error, temp, g2_stream_structure;

    x_note_fn_call(38,28);
    stream_or_error = Nil || use_unicode_for_filenames() ? 
	    c_g2_stream_open_wide(namestring_1,
	    G2_stream_open_mode_for_binary_output) : 
	    c_g2_stream_open(namestring_1,
	    G2_stream_open_mode_for_binary_output);
    if (FIXNUM_EQ(stream_or_error,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	temp = Nil;
    }
    else {
	g2_stream_structure = 
		make_g2_stream_structure_internal_1(stream_or_error);
	g2_stream_enter_into_stream_tables(namestring_1,g2_stream_structure);
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	temp = g2_stream_structure;
    }
    return VALUES_1(temp);
}

/* G2-STREAM-OPEN */
Object g2_stream_open(filename,mode)
    Object filename, mode;
{
    x_note_fn_call(38,29);
    if (use_unicode_for_filenames())
	return c_g2_stream_open_wide(filename,mode);
    else
	return c_g2_stream_open(filename,mode);
}

/* G2-STREAM-OPEN-FOR-APPENDING */
Object g2_stream_open_for_appending(namestring_1,create_if_does_not_exist_qm)
    Object namestring_1, create_if_does_not_exist_qm;
{
    Object stream_or_error, g2_stream_structure;

    x_note_fn_call(38,30);
    if ( !TRUEP(create_if_does_not_exist_qm)) {
	if ( !TRUEP(g2_stream_probe_file_for_exist(namestring_1))) {
	    Internal_status_of_most_recent_file_operation = 
		    Append_of_non_existent_file_code;
	    return VALUES_1(Nil);
	}
    }
    stream_or_error = g2_stream_open(namestring_1,
	    G2_stream_open_mode_for_appending);
    if (FIXNUM_EQ(stream_or_error,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	g2_stream_structure = 
		make_g2_stream_structure_internal_1(stream_or_error);
	g2_stream_enter_into_stream_tables(namestring_1,g2_stream_structure);
	return VALUES_1(g2_stream_structure);
    }
}

/* G2-STREAM-OPEN-FOR-RANDOM-ACCESS-BINARY-IO */
Object g2_stream_open_for_random_access_binary_io(namestring_1)
    Object namestring_1;
{
    Object stream_or_error, g2_stream_structure;

    x_note_fn_call(38,31);
    stream_or_error = g2_stream_open(namestring_1,
	    G2_stream_open_mode_for_binary_update);
    if (FIXNUM_EQ(stream_or_error,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	g2_stream_structure = 
		make_g2_stream_structure_internal_1(stream_or_error);
	g2_stream_enter_into_stream_tables(namestring_1,g2_stream_structure);
	return VALUES_1(g2_stream_structure);
    }
}

/* G2-STREAM-OPEN-FOR-RANDOM-ACCESS-IO */
Object g2_stream_open_for_random_access_io(namestring_1)
    Object namestring_1;
{
    Object stream_or_error, g2_stream_structure;

    x_note_fn_call(38,32);
    stream_or_error = g2_stream_open(namestring_1,
	    G2_stream_open_mode_for_update);
    if (FIXNUM_EQ(stream_or_error,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	g2_stream_structure = 
		make_g2_stream_structure_internal_1(stream_or_error);
	g2_stream_enter_into_stream_tables(namestring_1,g2_stream_structure);
	return VALUES_1(g2_stream_structure);
    }
}

/* G2-STREAM-OPEN-FOR-RANDOM-ACCESS-BINARY-INPUT */
Object g2_stream_open_for_random_access_binary_input(namestring_1)
    Object namestring_1;
{
    Object stream_or_error, g2_stream_structure;

    x_note_fn_call(38,33);
    stream_or_error = g2_stream_open(namestring_1,
	    G2_stream_open_mode_for_binary_input);
    if (FIXNUM_EQ(stream_or_error,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	g2_stream_structure = 
		make_g2_stream_structure_internal_1(stream_or_error);
	g2_stream_enter_into_stream_tables(namestring_1,g2_stream_structure);
	return VALUES_1(g2_stream_structure);
    }
}

/* G2-STREAM-OPEN-FOR-BINARY-APPENDING */
Object g2_stream_open_for_binary_appending(namestring_1,
	    create_if_does_not_exist_qm)
    Object namestring_1, create_if_does_not_exist_qm;
{
    Object stream_or_error, g2_stream_structure;

    x_note_fn_call(38,34);
    if ( !TRUEP(create_if_does_not_exist_qm)) {
	if ( !TRUEP(g2_stream_probe_file_for_exist(namestring_1))) {
	    Internal_status_of_most_recent_file_operation = 
		    Append_of_non_existent_file_code;
	    return VALUES_1(Nil);
	}
    }
    stream_or_error = g2_stream_open(namestring_1,
	    G2_stream_open_mode_for_binary_appending);
    if (FIXNUM_EQ(stream_or_error,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	g2_stream_structure = 
		make_g2_stream_structure_internal_1(stream_or_error);
	g2_stream_enter_into_stream_tables(namestring_1,g2_stream_structure);
	return VALUES_1(g2_stream_structure);
    }
}

/* G2-STREAM-FLIP-BIDIRECTIONAL-MODE */
Object g2_stream_flip_bidirectional_mode(g2_stream)
    Object g2_stream;
{
    SI_Long result_1;

    x_note_fn_call(38,35);
    g2_stream = ISVREF(g2_stream,(SI_Long)1L);
    result_1 = g2ext_str_flip_bidir_mode(IFIX(g2_stream));
    if ((SI_Long)0L == result_1) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(T);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

static Object Qunix;               /* unix */

static Object Qconvert_file_strings_to_uppercase_p;  /* convert-file-strings-to-uppercase-p */

/* G2-STREAM-PROBE-FILE-FOR-EXIST */
Object g2_stream_probe_file_for_exist(filename_string)
    Object filename_string;
{
    Object filename_string_to_use, need_to_reclaim_filename_string_p;
    Object current_local_filename_parser, current_local_namestring_generator;
    Object convert_file_strings_to_uppercase_p, pathname_needing_home;
    Object found_it_p;
    Declare_special(1);
    Object result;

    x_note_fn_call(38,36);
    filename_string_to_use = filename_string;
    need_to_reclaim_filename_string_p = Nil;
    if (EQ(Local_file_system,Qunix) && IFIX(lengthw(filename_string)) > 
	    (SI_Long)0L && UBYTE_16_ISAREF_1(filename_string,(SI_Long)0L) 
	    == (SI_Long)126L) {
	current_local_filename_parser = Local_filename_parser;
	current_local_namestring_generator = Local_namestring_generator;
	convert_file_strings_to_uppercase_p = 
		getfq_function_no_default(INLINE_SYMBOL_PLIST(current_local_filename_parser),
		Qconvert_file_strings_to_uppercase_p);
	PUSH_SPECIAL(Convert_file_strings_to_uppercase_p,convert_file_strings_to_uppercase_p,
		0);
	  pathname_needing_home = 
		  convert_to_gensym_pathname(filename_string,
		  current_local_filename_parser,
		  current_local_namestring_generator);
	  if (pathname_needing_home) {
	      supply_home_to_unix_pathname(pathname_needing_home);
	      filename_string_to_use = gensym_namestring(1,
		      pathname_needing_home);
	      need_to_reclaim_filename_string_p = T;
	      reclaim_gensym_pathname(pathname_needing_home);
	  }
	  else {
	      Internal_status_of_most_recent_file_operation = 
		      Filename_parse_failed_code;
	      result = VALUES_1(Nil);
	      POP_SPECIAL();
	      goto end_g2_stream_probe_file_for_exist;
	  }
	POP_SPECIAL();
    }
    found_it_p = g2_probe_file_internal(filename_string_to_use);
    Internal_status_of_most_recent_file_operation = 
	    File_operation_succeeded_code;
    if (need_to_reclaim_filename_string_p)
	reclaim_text_string(filename_string_to_use);
    result = VALUES_1(found_it_p);
  end_g2_stream_probe_file_for_exist:
    return result;
}

/* G2-PROBE-FILE-INTERNAL */
Object g2_probe_file_internal(filename_string_to_use)
    Object filename_string_to_use;
{
    x_note_fn_call(38,37);
    if (use_unicode_for_filenames())
	return VALUES_1(IFIX(c_g2_probe_file_wide(filename_string_to_use)) 
		== (SI_Long)0L ? T : Nil);
    else
	return VALUES_1(IFIX(c_g2_probe_file(filename_string_to_use)) == 
		(SI_Long)0L ? T : Nil);
}

static Object Qg2_defstruct_structure_name_gensym_pathname_g2_struct;  /* g2-defstruct-structure-name::gensym-pathname-g2-struct */

/* G2-STREAM-PROBE-FILE-FOR-READ */
Object g2_stream_probe_file_for_read(filename_string)
    Object filename_string;
{
    Object filename_string_to_use, need_to_reclaim_filename_string_p;
    Object current_local_filename_parser, current_local_namestring_generator;
    Object convert_file_strings_to_uppercase_p, pathname_needing_home;
    Object pathname_used_p, namestring_1, stream_or_nil, temp, found_it_p;
    Declare_special(1);
    Object result;

    x_note_fn_call(38,38);
    filename_string_to_use = filename_string;
    need_to_reclaim_filename_string_p = Nil;
    if (EQ(Local_file_system,Qunix) && IFIX(lengthw(filename_string)) > 
	    (SI_Long)0L && UBYTE_16_ISAREF_1(filename_string,(SI_Long)0L) 
	    == (SI_Long)126L) {
	current_local_filename_parser = Local_filename_parser;
	current_local_namestring_generator = Local_namestring_generator;
	convert_file_strings_to_uppercase_p = 
		getfq_function_no_default(INLINE_SYMBOL_PLIST(current_local_filename_parser),
		Qconvert_file_strings_to_uppercase_p);
	PUSH_SPECIAL(Convert_file_strings_to_uppercase_p,convert_file_strings_to_uppercase_p,
		0);
	  pathname_needing_home = 
		  convert_to_gensym_pathname(filename_string,
		  current_local_filename_parser,
		  current_local_namestring_generator);
	  if (pathname_needing_home) {
	      supply_home_to_unix_pathname(pathname_needing_home);
	      filename_string_to_use = gensym_namestring(1,
		      pathname_needing_home);
	      need_to_reclaim_filename_string_p = T;
	      reclaim_gensym_pathname(pathname_needing_home);
	  }
	  else {
	      Internal_status_of_most_recent_file_operation = 
		      Filename_parse_failed_code;
	      result = VALUES_1(Nil);
	      POP_SPECIAL();
	      goto end_g2_stream_probe_file_for_read;
	  }
	POP_SPECIAL();
    }
    pathname_used_p = SIMPLE_VECTOR_P(filename_string_to_use) ? 
	    (EQ(ISVREF(filename_string_to_use,(SI_Long)0L),
	    Qg2_defstruct_structure_name_gensym_pathname_g2_struct) ? T : 
	    Nil) : Qnil;
    namestring_1 = SIMPLE_VECTOR_P(filename_string_to_use) && 
	    EQ(ISVREF(filename_string_to_use,(SI_Long)0L),
	    Qg2_defstruct_structure_name_gensym_pathname_g2_struct) ? 
	    gensym_namestring(1,filename_string_to_use) : 
	    filename_string_to_use;
    stream_or_nil = g2_stream_open_for_input(namestring_1);
    temp = stream_or_nil ? T : Nil;
    if (pathname_used_p)
	reclaim_text_string(namestring_1);
    if (stream_or_nil)
	g2_stream_close(stream_or_nil);
    found_it_p = temp;
    Internal_status_of_most_recent_file_operation = 
	    File_operation_succeeded_code;
    if (need_to_reclaim_filename_string_p)
	reclaim_text_string(filename_string_to_use);
    result = VALUES_1(found_it_p);
  end_g2_stream_probe_file_for_read:
    return result;
}

static Object Qunbound_in_protected_let;  /* unbound-in-protected-let */

/* G2-STREAM-PROBE-FILE-FOR-WRITE */
Object g2_stream_probe_file_for_write(filename_string)
    Object filename_string;
{
    Object filename_string_to_use, need_to_reclaim_filename_string_p;
    Object current_local_filename_parser, current_local_namestring_generator;
    Object convert_file_strings_to_uppercase_p, pathname_needing_home;
    volatile Object stream_qm;
    Object temp, found_it_p;
    Declare_stack_pointer;
    Declare_catch(1);
    Declare_special(1);
    Object result;

    x_note_fn_call(38,39);
    SAVE_STACK();
    filename_string_to_use = filename_string;
    need_to_reclaim_filename_string_p = Nil;
    if (EQ(Local_file_system,Qunix) && IFIX(lengthw(filename_string)) > 
	    (SI_Long)0L && UBYTE_16_ISAREF_1(filename_string,(SI_Long)0L) 
	    == (SI_Long)126L) {
	current_local_filename_parser = Local_filename_parser;
	current_local_namestring_generator = Local_namestring_generator;
	convert_file_strings_to_uppercase_p = 
		getfq_function_no_default(INLINE_SYMBOL_PLIST(current_local_filename_parser),
		Qconvert_file_strings_to_uppercase_p);
	PUSH_SPECIAL(Convert_file_strings_to_uppercase_p,convert_file_strings_to_uppercase_p,
		0);
	  pathname_needing_home = 
		  convert_to_gensym_pathname(filename_string,
		  current_local_filename_parser,
		  current_local_namestring_generator);
	  if (pathname_needing_home) {
	      supply_home_to_unix_pathname(pathname_needing_home);
	      filename_string_to_use = gensym_namestring(1,
		      pathname_needing_home);
	      need_to_reclaim_filename_string_p = T;
	      reclaim_gensym_pathname(pathname_needing_home);
	  }
	  else {
	      Internal_status_of_most_recent_file_operation = 
		      Filename_parse_failed_code;
	      result = VALUES_1(Nil);
	      POP_SPECIAL();
	      goto end_g2_stream_probe_file_for_write;
	  }
	POP_SPECIAL();
    }
    if (g2_stream_probe_file_for_exist(filename_string_to_use)) {
	stream_qm = Qunbound_in_protected_let;
	if (PUSH_UNWIND_PROTECT(0)) {
	    temp = g2_stream_open_for_appending(filename_string_to_use,Nil);
	    Internal_status_of_most_recent_file_operation = 
		    FIX(g2ext_g2_stream_get_error_number());
	    stream_qm = temp;
	    if (stream_qm) {
		Internal_status_of_most_recent_file_operation = 
			File_operation_succeeded_code;
		temp = T;
	    }
	    else
		temp = Nil;
	    SAVE_VALUES(VALUES_1(temp));
	}
	POP_UNWIND_PROTECT(0);
	if (stream_qm) {
	    if ( !EQ(stream_qm,Qunbound_in_protected_let))
		g2_stream_close(stream_qm);
	}
	CONTINUE_UNWINDING(0);
	result = RESTORE_VALUES();
	found_it_p = result;
    }
    else {
	stream_qm = Qunbound_in_protected_let;
	if (PUSH_UNWIND_PROTECT(0)) {
	    temp = g2_stream_open_for_output(filename_string_to_use);
	    Internal_status_of_most_recent_file_operation = 
		    FIX(g2ext_g2_stream_get_error_number());
	    stream_qm = temp;
	    if (stream_qm) {
		Internal_status_of_most_recent_file_operation = 
			File_operation_succeeded_code;
		temp = T;
	    }
	    else
		temp = Nil;
	    SAVE_VALUES(VALUES_1(temp));
	}
	POP_UNWIND_PROTECT(0);
	if (stream_qm) {
	    if ( !EQ(stream_qm,Qunbound_in_protected_let)) {
		g2_stream_close(stream_qm);
		g2_stream_delete_file(filename_string_to_use);
	    }
	}
	CONTINUE_UNWINDING(0);
	result = RESTORE_VALUES();
	found_it_p = result;
    }
    if (need_to_reclaim_filename_string_p)
	reclaim_text_string(filename_string_to_use);
    result = VALUES_1(found_it_p);
  end_g2_stream_probe_file_for_write:
    RESTORE_STACK();
    return result;
}

/* G2-STREAM-READ-CHAR */
Object g2_stream_read_char(g2_input_stream)
    Object g2_input_stream;
{
    SI_Long ascii;

    x_note_fn_call(38,40);
    g2_input_stream = ISVREF(g2_input_stream,(SI_Long)1L);
    ascii = g2ext_str_read_char(IFIX(g2_input_stream));
    if (ascii >= (SI_Long)0L) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(CODE_CHAR(FIX(ascii)));
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		End_of_file_reached_code;
	return VALUES_1(Nil);
    }
}

/* G2-STREAM-READ-NON-CR-CHAR */
Object g2_stream_read_non_cr_char(g2_input_stream)
    Object g2_input_stream;
{
    SI_Long ascii, thing;

    x_note_fn_call(38,41);
    g2_input_stream = ISVREF(g2_input_stream,(SI_Long)1L);
    ascii = g2ext_str_read_non_cr_char(IFIX(g2_input_stream));
    if (ascii >= (SI_Long)0L) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	thing = ascii;
	if (CHARACTERP(FIX(thing)))
	    return VALUES_1(CHAR_CODE(FIX(thing)));
	else
	    return VALUES_1(FIX(thing));
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		End_of_file_reached_code;
	return VALUES_1(Nil);
    }
}

/* G2-STREAM-READ-ASCII-BYTE */
Object g2_stream_read_ascii_byte(g2_input_stream)
    Object g2_input_stream;
{
    SI_Long ascii;

    x_note_fn_call(38,42);
    g2_input_stream = ISVREF(g2_input_stream,(SI_Long)1L);
    ascii = g2ext_str_read_char(IFIX(g2_input_stream));
    if (ascii >= (SI_Long)0L) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(FIX(ascii));
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		End_of_file_reached_code;
	return VALUES_1(Nil);
    }
}

/* G2-STREAM-READ-INTO-STRING-IN-C */
Object g2_stream_read_into_string_in_c(g2_input_stream,string_1,
	    number_of_characters,start_index)
    Object g2_input_stream, string_1, number_of_characters, start_index;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,43);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(string_1);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = string_1;
    temp = FIX(g2ext_g2_stream_read_string(IFIX(g2_input_stream),
	    ISTRING(temp),IFIX(number_of_characters),IFIX(start_index)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

/* G2-STREAM-READ-INTO-STRING */
Object g2_stream_read_into_string(g2_input_stream,buffer_as_gensym_string,
	    number_of_characters,start_index)
    Object g2_input_stream, buffer_as_gensym_string, number_of_characters;
    Object start_index;
{
    Object character_qm;
    SI_Long index_1, ab_loop_bind_, ascii, char_arg_2;

    x_note_fn_call(38,44);
    g2_input_stream = ISVREF(g2_input_stream,(SI_Long)1L);
    if (ARRAY_HAS_FILL_POINTER_P(buffer_as_gensym_string)) {
	index_1 = (SI_Long)0L;
	ab_loop_bind_ = IFIX(number_of_characters);
	character_qm = Nil;
      next_loop:
	if (index_1 >= ab_loop_bind_)
	    goto end_loop;
	ascii = g2ext_str_read_char(IFIX(g2_input_stream));
	if (ascii >= (SI_Long)0L) {
	    Internal_status_of_most_recent_file_operation = 
		    File_operation_succeeded_code;
	    character_qm = CODE_CHAR(FIX(ascii));
	}
	else {
	    Internal_status_of_most_recent_file_operation = 
		    End_of_file_reached_code;
	    character_qm = Nil;
	}
	if (CHARACTERP(character_qm)) {
	    char_arg_2 = IFIX(start_index) + index_1;
	    SET_ICHAR(buffer_as_gensym_string,char_arg_2,
		    ICHAR_CODE(character_qm));
	}
	else
	    return VALUES_1(FIX(index_1));
	index_1 = index_1 + (SI_Long)1L;
	goto next_loop;
      end_loop:
	return VALUES_1(FIX(index_1));
	return VALUES_1(Qnil);
    }
    else
	return g2_stream_read_into_string_in_c(g2_input_stream,
		buffer_as_gensym_string,number_of_characters,start_index);
}

static Object Qwide_string;        /* wide-string */

/* G2-STREAM-READ-LINE-INTERNAL-LOOP */
Object g2_stream_read_line_internal_loop(g2_input_stream,character_qm)
    Object g2_input_stream, character_qm;
{
    Object thing, temp, schar_arg_2, schar_new_value, temp_1;
    SI_Long ascii, thing_1;

    x_note_fn_call(38,45);
    if ( !TRUEP(character_qm))
	return VALUES_1(Nil);
  next_loop:
    if ( !TRUEP(character_qm))
	goto end_loop;
    if ((SI_Long)10L == IFIX(character_qm))
	goto end_loop;
    if (EQ(Current_twriting_output_type,Qwide_string)) {
	thing = character_qm;
	twrite_wide_character(CHARACTERP(thing) ? CHAR_CODE(thing) : thing);
    }
    else {
	if ( !FIXNUM_LT(Fill_pointer_for_current_gensym_string,
		Total_length_of_current_gensym_string))
	    extend_current_gensym_string(0);
	temp = Current_gensym_string;
	schar_arg_2 = Fill_pointer_for_current_gensym_string;
	thing = character_qm;
	schar_new_value = CODE_CHAR(CHARACTERP(thing) ? CHAR_CODE(thing) : 
		thing);
	SET_SCHAR(temp,schar_arg_2,schar_new_value);
	temp = FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
	Fill_pointer_for_current_gensym_string = temp;
    }
    ascii = g2ext_str_read_non_cr_char(IFIX(g2_input_stream));
    if (ascii >= (SI_Long)0L) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	thing_1 = ascii;
	character_qm = CHARACTERP(FIX(thing_1)) ? CHAR_CODE(FIX(thing_1)) :
		 FIX(thing_1);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		End_of_file_reached_code;
	character_qm = Nil;
    }
    goto next_loop;
  end_loop:
    temp_1 = character_qm;
    if (temp_1)
	return VALUES_1(temp_1);
    else if (g2ext_str_eof_p(IFIX(g2_input_stream)) == (SI_Long)0L)
	return VALUES_1(Nil);
    else
	return VALUES_1(T);
    return VALUES_1(Qnil);
}

static Object Qdo_not_use;         /* do-not-use */

/* G2-STREAM-READ-LINE */
Object g2_stream_read_line(g2_input_stream)
    Object g2_input_stream;
{
    Object valid_line_p, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object temp, temp_1, line;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1, ascii, thing;
    Declare_special(5);

    x_note_fn_call(38,46);
    g2_input_stream = ISVREF(g2_input_stream,(SI_Long)1L);
    valid_line_p = Nil;
    current_wide_string_list = Qdo_not_use;
    PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,4);
      wide_string_bv16 = allocate_byte_vector_16(FIX((SI_Long)2048L + 
	      (SI_Long)3L));
      bv16_length = IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wide_string_bv16));
      aref_arg_2 = bv16_length - (SI_Long)2L;
      aref_new_value = (SI_Long)2048L & (SI_Long)65535L;
      UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,aref_new_value);
      aref_arg_2 = bv16_length - (SI_Long)1L;
      aref_new_value = (SI_Long)57344L | (SI_Long)0L;
      UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,aref_new_value);
      UBYTE_16_ISASET_1(wide_string_bv16,(SI_Long)2048L,(SI_Long)0L);
      current_wide_string = wide_string_bv16;
      PUSH_SPECIAL(Current_wide_string,current_wide_string,3);
	fill_pointer_for_current_wide_string = FIX((SI_Long)0L);
	PUSH_SPECIAL(Fill_pointer_for_current_wide_string,fill_pointer_for_current_wide_string,
		2);
	  length_1 = IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
	  total_length_of_current_wide_string = 
		  FIX(UBYTE_16_ISAREF_1(Current_wide_string,length_1 - 
		  (SI_Long)2L) + ((UBYTE_16_ISAREF_1(Current_wide_string,
		  length_1 - (SI_Long)1L) & (SI_Long)8191L) << (SI_Long)16L));
	  PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
		  1);
	    current_twriting_output_type = Qwide_string;
	    PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
		    0);
	      temp = g2_input_stream;
	      ascii = g2ext_str_read_non_cr_char(IFIX(g2_input_stream));
	      if (ascii >= (SI_Long)0L) {
		  Internal_status_of_most_recent_file_operation = 
			  File_operation_succeeded_code;
		  thing = ascii;
		  temp_1 = CHARACTERP(FIX(thing)) ? CHAR_CODE(FIX(thing)) :
			   FIX(thing);
	      }
	      else {
		  Internal_status_of_most_recent_file_operation = 
			  End_of_file_reached_code;
		  temp_1 = Nil;
	      }
	      valid_line_p = g2_stream_read_line_internal_loop(temp,temp_1);
	      line = copy_out_current_wide_string();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
      POP_SPECIAL();
    POP_SPECIAL();
    if (valid_line_p)
	return VALUES_1(line);
    else {
	reclaim_text_string(line);
	return VALUES_1(Nil);
    }
}

/* G2-STREAM-READ-INTO-BUFFER */
Object g2_stream_read_into_buffer(buffer_string,buffer_length,g2_input_stream)
    Object buffer_string, buffer_length, g2_input_stream;
{
    Object number_of_characters_read;

    x_note_fn_call(38,47);
    g2_input_stream = ISVREF(g2_input_stream,(SI_Long)1L);
    number_of_characters_read = 
	    g2_stream_read_into_string_in_c(g2_input_stream,buffer_string,
	    buffer_length,FIX((SI_Long)0L));
    if (IFIX(number_of_characters_read) > (SI_Long)0L) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(number_of_characters_read);
    }
    else if (g2ext_str_eof_p(IFIX(g2_input_stream)) == (SI_Long)0L ? 
	    TRUEP(Nil) : TRUEP(T)) {
	Internal_status_of_most_recent_file_operation = 
		End_of_file_reached_code;
	return VALUES_1(FIX((SI_Long)0L));
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

/* G2-STREAM-READ-INTO-BYTE-VECTOR */
Object g2_stream_read_into_byte_vector(stream,byte_vector,
	    number_of_characters_init,start_index_init)
    Object stream, byte_vector, number_of_characters_init, start_index_init;
{
    Object string_buffer, aref_new_value;
    SI_Long number_of_characters, start_index, buffer_size, characters_read;
    SI_Long chars_to_read, temp, byte_vector_start_index, string_index;
    SI_Long ab_loop_bind_, aref_arg_2;

    x_note_fn_call(38,48);
    number_of_characters = IFIX(number_of_characters_init);
    start_index = IFIX(start_index_init);
    buffer_size = (SI_Long)1024L;
    string_buffer = obtain_simple_gensym_string(FIX(buffer_size));
    characters_read = (SI_Long)0L;
    chars_to_read = (SI_Long)0L;
  next_loop:
    if ( !(characters_read < number_of_characters))
	goto end_loop;
    temp = number_of_characters - characters_read;
    chars_to_read = MIN(buffer_size,temp);
    g2_stream_read_into_string(stream,string_buffer,FIX(chars_to_read),
	    FIX((SI_Long)0L));
    byte_vector_start_index = start_index + characters_read;
    string_index = (SI_Long)0L;
    ab_loop_bind_ = chars_to_read;
  next_loop_1:
    if (string_index >= ab_loop_bind_)
	goto end_loop_1;
    aref_arg_2 = byte_vector_start_index + string_index;
    aref_new_value = CHAR_CODE(CHR(ISCHAR(string_buffer,string_index)));
    UBYTE_8_ISASET_1(byte_vector,aref_arg_2,IFIX(aref_new_value));
    string_index = string_index + (SI_Long)1L;
    goto next_loop_1;
  end_loop_1:;
    characters_read = characters_read + chars_to_read;
    goto next_loop;
  end_loop:;
    reclaim_simple_gensym_string(string_buffer);
    return VALUES_1(FIX(number_of_characters));
}

/* G2-STREAM-READ-INTO-WIDE-STRING-BUFFER */
Object g2_stream_read_into_wide_string_buffer(wide_string_buffer,
	    buffer_length,g2_input_stream)
    Object wide_string_buffer, buffer_length, g2_input_stream;
{
    SI_Long number_of_characters_read;

    x_note_fn_call(38,49);
    g2_input_stream = ISVREF(g2_input_stream,(SI_Long)1L);
    number_of_characters_read = 
	    g2ext_g2_stream_read_wide_buffer(IFIX(g2_input_stream),
	    UBYTE_16_SARRAY_TO_USHORT_PTR(wide_string_buffer),
	    IFIX(buffer_length),(SI_Long)0L);
    if (number_of_characters_read > (SI_Long)0L) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(FIX(number_of_characters_read));
    }
    else if (g2ext_str_eof_p(IFIX(g2_input_stream)) == (SI_Long)0L ? 
	    TRUEP(Nil) : TRUEP(T)) {
	Internal_status_of_most_recent_file_operation = 
		End_of_file_reached_code;
	return VALUES_1(FIX((SI_Long)0L));
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

/* G2-STREAM-READ-OCTETS-INTO-WIDE-STRING-BUFFER */
Object g2_stream_read_octets_into_wide_string_buffer(wide_string_buffer,
	    buffer_length,g2_input_stream)
    Object wide_string_buffer, buffer_length, g2_input_stream;
{
    SI_Long number_of_characters_read;

    x_note_fn_call(38,50);
    g2_input_stream = ISVREF(g2_input_stream,(SI_Long)1L);
    number_of_characters_read = 
	    g2ext_g2_stream_read_octets_wide(IFIX(g2_input_stream),
	    UBYTE_16_SARRAY_TO_USHORT_PTR(wide_string_buffer),
	    IFIX(buffer_length),(SI_Long)0L);
    if (number_of_characters_read > (SI_Long)0L) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(FIX(number_of_characters_read));
    }
    else if (g2ext_str_eof_p(IFIX(g2_input_stream)) == (SI_Long)0L ? 
	    TRUEP(Nil) : TRUEP(T)) {
	Internal_status_of_most_recent_file_operation = 
		End_of_file_reached_code;
	return VALUES_1(FIX((SI_Long)0L));
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

Object Buffer_for_read_file_into_string = UNBOUND;

/* READ-TEXT-FILE-INTO-WIDE-STRING */
Object read_text_file_into_wide_string(filename)
    Object filename;
{
    Object text_stream_qm, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object length_2, keep_going_p, accumulated_length, chars_to_read;
    Object chars_read, incff_1_arg, temp;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    Declare_special(5);

    x_note_fn_call(38,51);
    text_stream_qm = g2_stream_open_for_input(filename);
    if (text_stream_qm) {
	current_wide_string_list = Qdo_not_use;
	PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,4);
	  wide_string_bv16 = allocate_byte_vector_16(FIX((SI_Long)2048L + 
		  (SI_Long)3L));
	  bv16_length = IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wide_string_bv16));
	  aref_arg_2 = bv16_length - (SI_Long)2L;
	  aref_new_value = (SI_Long)2048L & (SI_Long)65535L;
	  UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,aref_new_value);
	  aref_arg_2 = bv16_length - (SI_Long)1L;
	  aref_new_value = (SI_Long)57344L | (SI_Long)0L;
	  UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,aref_new_value);
	  UBYTE_16_ISASET_1(wide_string_bv16,(SI_Long)2048L,(SI_Long)0L);
	  current_wide_string = wide_string_bv16;
	  PUSH_SPECIAL(Current_wide_string,current_wide_string,3);
	    fill_pointer_for_current_wide_string = FIX((SI_Long)0L);
	    PUSH_SPECIAL(Fill_pointer_for_current_wide_string,fill_pointer_for_current_wide_string,
		    2);
	      length_1 = IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
	      total_length_of_current_wide_string = 
		      FIX(UBYTE_16_ISAREF_1(Current_wide_string,length_1 - 
		      (SI_Long)2L) + 
		      ((UBYTE_16_ISAREF_1(Current_wide_string,length_1 - 
		      (SI_Long)1L) & (SI_Long)8191L) << (SI_Long)16L));
	      PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
		      1);
		current_twriting_output_type = Qwide_string;
		PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
			0);
		  length_2 = g2_stream_file_length(text_stream_qm);
		  keep_going_p = T;
		  accumulated_length = FIX((SI_Long)0L);
		  chars_to_read = FIXNUM_MIN(length_2,
			  Read_file_into_string_buffer_size);
		  chars_read = Nil;
		next_loop:
		  if ( !TRUEP(keep_going_p))
		      goto end_loop;
		  chars_read = 
			  g2_stream_read_into_buffer(Buffer_for_read_file_into_string,
			  chars_to_read,text_stream_qm);
		  if ( !FIXNUMP(chars_read) || IFIX(chars_read) <= (SI_Long)0L)
		      keep_going_p = Nil;
		  else if (FIXNUM_GT(chars_read,
			  FIXNUM_MINUS(Maximum_wide_string_length,
			  accumulated_length))) {
		      twrite_portion_of_gensym_string_unparsably(Buffer_for_read_file_into_string,
			      FIX((SI_Long)0L),
			      FIX(IFIX(FIXNUM_MINUS(Maximum_wide_string_length,
			      accumulated_length)) - (SI_Long)2L));
		      keep_going_p = Nil;
		  }
		  else {
		      incff_1_arg = chars_read;
		      accumulated_length = FIXNUM_ADD(accumulated_length,
			      incff_1_arg);
		      twrite_portion_of_gensym_string_unparsably(Buffer_for_read_file_into_string,
			      FIX((SI_Long)0L),chars_read);
		      temp = FIXNUM_MINUS(length_2,accumulated_length);
		      chars_to_read = FIXNUM_MIN(temp,
			      Read_file_into_string_buffer_size);
		      keep_going_p = (SI_Long)0L == IFIX(chars_to_read) ? 
			      T : Nil;
		  }
		  goto next_loop;
		end_loop:;
		  temp = copy_out_current_wide_string();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
	g2_stream_close(text_stream_qm);
	return VALUES_1(temp);
    }
    else {
	wide_string_bv16 = allocate_byte_vector_16(FIX((SI_Long)0L + 
		(SI_Long)3L));
	bv16_length = IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wide_string_bv16));
	aref_arg_2 = bv16_length - (SI_Long)2L;
	aref_new_value = (SI_Long)0L & (SI_Long)65535L;
	UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,aref_new_value);
	aref_arg_2 = bv16_length - (SI_Long)1L;
	aref_new_value = (SI_Long)57344L | (SI_Long)0L;
	UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,aref_new_value);
	UBYTE_16_ISASET_1(wide_string_bv16,(SI_Long)0L,(SI_Long)0L);
	return VALUES_1(wide_string_bv16);
    }
}

/* G2-STREAM-WRITE-CHAR */
Object g2_stream_write_char(character_1,g2_output_stream)
    Object character_1, g2_output_stream;
{
    SI_Long gensymed_symbol, temp, result_1;

    x_note_fn_call(38,52);
    g2_output_stream = ISVREF(g2_output_stream,(SI_Long)1L);
    if (FIXNUMP(character_1)) {
	gensymed_symbol = (SI_Long)255L & IFIX(character_1);
	temp = gensymed_symbol;
    }
    else
	temp = IFIX(CHAR_CODE(character_1));
    result_1 = g2ext_str_write_char(temp,IFIX(g2_output_stream));
    if (result_1 >= (SI_Long)0L) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(character_1);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

static Object string_constant;     /* "" */

/* G2-STREAM-TERPRI */
Object g2_stream_terpri(g2_output_stream)
    Object g2_output_stream;
{
    SI_Long result_1;

    x_note_fn_call(38,53);
    g2_output_stream = ISVREF(g2_output_stream,(SI_Long)1L);
    result_1 = IFIX(c_g2_stream_write_string(string_constant,
	    g2_output_stream,G2_stream_terminate_string_with_cr));
    if (result_1 >= (SI_Long)0L) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(T);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

/* G2-STREAM-WRITE-ASCII-BYTE */
Object g2_stream_write_ascii_byte(ascii_byte,g2_output_stream)
    Object ascii_byte, g2_output_stream;
{
    SI_Long result_1;

    x_note_fn_call(38,54);
    g2_output_stream = ISVREF(g2_output_stream,(SI_Long)1L);
    result_1 = g2ext_str_write_char(IFIX(ascii_byte),IFIX(g2_output_stream));
    if (result_1 >= (SI_Long)0L) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(ascii_byte);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

/* G2-STREAM-WRITE-STRING */
Object g2_stream_write_string(string_1,g2_output_stream)
    Object string_1, g2_output_stream;
{
    SI_Long result_1;

    x_note_fn_call(38,55);
    g2_output_stream = ISVREF(g2_output_stream,(SI_Long)1L);
    result_1 = IFIX(c_g2_stream_write_string(string_1,g2_output_stream,
	    G2_stream_do_not_terminate_string_with_cr));
    if (result_1 >= IFIX(G2_stream_foreign_file_op_success))
	return VALUES_1(string_1);
    else
	return VALUES_1(Nil);
}

/* WRITE-GENSYM-PATHNAME */
Object write_gensym_pathname(gensym_pathname_1)
    Object gensym_pathname_1;
{
    Object namestring_1;

    x_note_fn_call(38,56);
    namestring_1 = gensym_namestring_as_text_string(1,gensym_pathname_1);
    twrite_general_string(namestring_1);
    return reclaim_text_string(namestring_1);
}

/* G2-STREAM-WRITE-LINE */
Object g2_stream_write_line(string_1,g2_output_stream)
    Object string_1, g2_output_stream;
{
    SI_Long result_1;

    x_note_fn_call(38,57);
    g2_output_stream = ISVREF(g2_output_stream,(SI_Long)1L);
    result_1 = IFIX(c_g2_stream_write_string(string_1,g2_output_stream,
	    G2_stream_terminate_string_with_cr));
    if (result_1 >= IFIX(G2_stream_foreign_file_op_success))
	return VALUES_1(string_1);
    else
	return VALUES_1(Nil);
}

/* G2-STREAM-WRITE-FROM-STRING-IN-C */
Object g2_stream_write_from_string_in_c(g2_input_stream,string_1,
	    number_of_characters,start_index)
    Object g2_input_stream, string_1, number_of_characters, start_index;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,58);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(string_1);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = string_1;
    temp = FIX(g2ext_g2_stream_write_buffer(IFIX(g2_input_stream),
	    ISTRING(temp),IFIX(number_of_characters),IFIX(start_index)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

/* G2-STREAM-WRITE-FROM-BUFFER */
Object g2_stream_write_from_buffer(buffer,buffer_length,g2_output_stream)
    Object buffer, buffer_length, g2_output_stream;
{
    Object number_of_characters_written;

    x_note_fn_call(38,59);
    g2_output_stream = ISVREF(g2_output_stream,(SI_Long)1L);
    number_of_characters_written = 
	    g2_stream_write_from_string_in_c(g2_output_stream,buffer,
	    buffer_length,FIX((SI_Long)0L));
    if (FIXNUM_EQ(number_of_characters_written,buffer_length)) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(T);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

/* G2-STREAM-WRITE-FROM-WIDE-STRING-BUFFER */
Object g2_stream_write_from_wide_string_buffer(wide_string_buffer,
	    buffer_length,g2_output_stream)
    Object wide_string_buffer, buffer_length, g2_output_stream;
{
    SI_Long number_of_characters_written;

    x_note_fn_call(38,60);
    g2_output_stream = ISVREF(g2_output_stream,(SI_Long)1L);
    number_of_characters_written = 
	    g2ext_g2_stream_write_wide_buffer(IFIX(g2_output_stream),
	    UBYTE_16_SARRAY_TO_USHORT_PTR(wide_string_buffer),
	    IFIX(buffer_length),(SI_Long)0L);
    if (number_of_characters_written == IFIX(buffer_length)) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(T);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

/* WRITE-TEXT-STRING-TO-STREAM */
Object write_text_string_to_stream(text_string,stream)
    Object text_string, stream;
{
    Object message_length, message_char;
    SI_Long index_1, ab_loop_bind_;

    x_note_fn_call(38,61);
    message_length = text_string_length(text_string);
    index_1 = (SI_Long)0L;
    ab_loop_bind_ = IFIX(message_length);
    message_char = Nil;
  next_loop:
    if (index_1 >= ab_loop_bind_)
	goto end_loop;
    message_char = FIX(UBYTE_16_ISAREF_1(text_string,index_1));
    if (newline_p(message_char)) {
	if ( !TRUEP(g2_stream_terpri(stream)))
	    return VALUES_1(Nil);
    }
    else if ( !TRUEP(write_wide_character_to_stream_in_utf_g(message_char,
	    stream)))
	return VALUES_1(Nil);
    index_1 = index_1 + (SI_Long)1L;
    goto next_loop;
  end_loop:
    return VALUES_1(T);
    return VALUES_1(Qnil);
}

static Object Qgensym_string;      /* gensym-string */

/* WRITE-WIDE-CHARACTER-TO-STREAM-IN-UTF-G */
Object write_wide_character_to_stream_in_utf_g(wide_character,stream)
    Object wide_character, stream;
{
    Object current_gensym_string, fill_pointer_for_current_gensym_string;
    Object total_length_of_current_gensym_string, current_twriting_output_type;
    Object unicode, code, extended_code, unicode_1, code_1, temp;
    Object gensym_character_code_qm, gensym_character_code, extended_code_qm;
    Object char_1, simple_gensym_character_code, character_or_character_code;
    Object escape_character_qm, thing, temp_2, schar_arg_2, schar_new_value;
    Object kanji_code, octet_1_qm, quotient, remainder_1;
    Object simple_or_wide_character, extended_character_or_character_code_qm;
    Object extended_escape_character_qm, temporary_gensym_string;
    SI_Long row, gensym_full_row, gensymed_symbol, gensymed_symbol_1, octet_2;
    SI_Long octet_3, thing_1, simple_or_wide_character_1;
    char temp_1;
    Declare_special(4);
    Object result;

    x_note_fn_call(38,62);
    current_gensym_string = obtain_simple_gensym_string(FIX((SI_Long)2048L));
    PUSH_SPECIAL(Current_gensym_string,current_gensym_string,3);
      fill_pointer_for_current_gensym_string = FIX((SI_Long)0L);
      PUSH_SPECIAL(Fill_pointer_for_current_gensym_string,fill_pointer_for_current_gensym_string,
	      2);
	total_length_of_current_gensym_string = FIX((SI_Long)2048L);
	PUSH_SPECIAL(Total_length_of_current_gensym_string,total_length_of_current_gensym_string,
		1);
	  current_twriting_output_type = Qgensym_string;
	  PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
		  0);
	    unicode = wide_character;
	    code = Nil;
	    extended_code = Nil;
	    unicode_1 = unicode;
	    extended_code = Nil;
	    code_1 = unicode_1;
	    if (IFIX(code_1) < (SI_Long)127L &&  !((SI_Long)64L == 
		    IFIX(code_1) || (SI_Long)126L == IFIX(code_1) || 
		    (SI_Long)92L == IFIX(code_1))) {
		code = unicode_1;
		temp = code;
	    }
	    else {
		row = IFIX(unicode_1) >>  -  - (SI_Long)8L;
		gensym_full_row = 
			UBYTE_8_ISAREF_1(Unicode_to_gensym_full_row_map,row);
		if ( !(gensym_full_row == IFIX(Invalid_gensym_full_row))) {
		    gensymed_symbol = gensym_full_row << (SI_Long)8L;
		    gensymed_symbol_1 = (SI_Long)255L & IFIX(unicode_1);
		    gensym_character_code_qm = FIX(gensymed_symbol + 
			    gensymed_symbol_1);
		}
		else
		    gensym_character_code_qm = Nil;
		if (gensym_character_code_qm) {
		    temp_1 = IFIX(gensym_character_code_qm) < 
			    (SI_Long)256L ? 
			    TRUEP(ISVREF(Iso_latin1_special_character_code_map,
			    IFIX(gensym_character_code_qm))) : TRUEP(Nil);
		    if (temp_1);
		    else if (FIXNUM_EQ(gensym_character_code_qm,
			    Gensym_code_for_capital_ligature_oe))
			temp_1 = 'W';
		    else if (FIXNUM_EQ(gensym_character_code_qm,
			    Gensym_code_for_small_ligature_oe))
			temp_1 = 'w';
		    else if (FIXNUM_EQ(gensym_character_code_qm,
			    Gensym_code_for_bullet))
			temp_1 = '*';
		    else if (FIXNUM_EQ(gensym_character_code_qm,
			    Gensym_code_for_small_letter_f_with_hook))
			temp_1 = '&';
		    else if (FIXNUM_EQ(gensym_character_code_qm,
			    Gensym_code_for_trade_mark_sign))
			temp_1 = ':';
		    else
			temp_1 = TRUEP(Qnil);
		    if (temp_1);
		    else
			temp_1 = (SI_Long)8192L <= 
				IFIX(gensym_character_code_qm) ? 
				IFIX(gensym_character_code_qm) <= 
				(SI_Long)8447L : TRUEP(Qnil);
		}
		else
		    temp_1 = TRUEP(Nil);
		if (temp_1) {
		    code = gensym_character_code_qm;
		    temp = code;
		}
		else
		    temp = Nil;
		if (temp);
		else {
		    code = map_unicode_to_gensym_han_character_code(unicode_1);
		    temp = code;
		    if (temp);
		    else {
			row = IFIX(unicode_1) >>  -  - (SI_Long)8L;
			gensym_full_row = 
				UBYTE_8_ISAREF_1(Unicode_to_gensym_full_row_map,
				row);
			if ( !(gensym_full_row == 
				IFIX(Invalid_gensym_full_row))) {
			    gensymed_symbol = gensym_full_row << (SI_Long)8L;
			    gensymed_symbol_1 = (SI_Long)255L & 
				    IFIX(unicode_1);
			    code = FIX(gensymed_symbol + gensymed_symbol_1);
			}
			else
			    code = Nil;
			temp = code;
			if (temp);
			else {
			    gensymed_symbol = (SI_Long)63488L;
			    gensymed_symbol_1 = (SI_Long)255L & 
				    IFIX(unicode_1);
			    extended_code = FIX(gensymed_symbol + 
				    gensymed_symbol_1);
			    code = FIX((SI_Long)63232L + (IFIX(unicode_1) 
				    >>  -  - (SI_Long)8L));
			    temp = code;
			}
		    }
		}
	    }
	    result = VALUES_2(temp,extended_code);
	    MVS_2(result,gensym_character_code,extended_code_qm);
	    char_1 = Nil;
	    if (FIXNUM_EQ(gensym_character_code,Gensym_code_for_linebreak))
		result = VALUES_2(Gensym_char_or_code_for_linebreak,
			Gensym_esc_for_linebreak_qm);
	    else if (FIXNUM_EQ(gensym_character_code,
		    Gensym_code_for_paragraph_break))
		result = VALUES_2(Gensym_char_or_code_for_paragraph_break,
			Gensym_esc_for_paragraph_break_qm);
	    else {
		if ((SI_Long)32L <= IFIX(gensym_character_code) && 
			IFIX(gensym_character_code) <= (SI_Long)126L) {
		    simple_gensym_character_code = gensym_character_code;
		    temp_1 =  !(FIXNUM_EQ(simple_gensym_character_code,
			    FIX((SI_Long)64L)) || 
			    FIXNUM_EQ(simple_gensym_character_code,
			    FIX((SI_Long)126L)) || 
			    FIXNUM_EQ(simple_gensym_character_code,
			    FIX((SI_Long)92L)));
		}
		else
		    temp_1 = TRUEP(Nil);
		if (temp_1) {
		    temp = CODE_CHAR(gensym_character_code);
		    result = VALUES_2(temp,Nil);
		}
		else {
		    temp = IFIX(gensym_character_code) < (SI_Long)256L ? 
			    ISVREF(Iso_latin1_special_character_code_map,
			    IFIX(gensym_character_code)) : Nil;
		    if (temp);
		    else if (FIXNUM_EQ(gensym_character_code,
			    Gensym_code_for_capital_ligature_oe))
			temp = CHR('W');
		    else if (FIXNUM_EQ(gensym_character_code,
			    Gensym_code_for_small_ligature_oe))
			temp = CHR('w');
		    else if (FIXNUM_EQ(gensym_character_code,
			    Gensym_code_for_bullet))
			temp = CHR('*');
		    else if (FIXNUM_EQ(gensym_character_code,
			    Gensym_code_for_small_letter_f_with_hook))
			temp = CHR('&');
		    else if (FIXNUM_EQ(gensym_character_code,
			    Gensym_code_for_trade_mark_sign))
			temp = CHR(':');
		    else
			temp = Qnil;
		    char_1 = temp;
		    if (char_1)
			result = VALUES_2(char_1,CHR('~'));
		    else
			result = VALUES_2(gensym_character_code,CHR('\\'));
		}
	    }
	    MVS_2(result,character_or_character_code,escape_character_qm);
	    if ( !TRUEP(escape_character_qm)) {
		if (EQ(Current_twriting_output_type,Qwide_string)) {
		    thing = character_or_character_code;
		    twrite_wide_character(CHARACTERP(thing) ? 
			    CHAR_CODE(thing) : thing);
		}
		else {
		    if ( !FIXNUM_LT(Fill_pointer_for_current_gensym_string,
			    Total_length_of_current_gensym_string))
			extend_current_gensym_string(0);
		    temp_2 = Current_gensym_string;
		    schar_arg_2 = Fill_pointer_for_current_gensym_string;
		    thing = character_or_character_code;
		    schar_new_value = CODE_CHAR(CHARACTERP(thing) ? 
			    CHAR_CODE(thing) : thing);
		    SET_SCHAR(temp_2,schar_arg_2,schar_new_value);
		    temp_2 = 
			    FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
		    Fill_pointer_for_current_gensym_string = temp_2;
		}
	    }
	    else if (CHAR_EQ(escape_character_qm,CHR('\\'))) {
		kanji_code = character_or_character_code;
		octet_1_qm = Nil;
		octet_2 = (SI_Long)0L;
		octet_3 = (SI_Long)0L;
		if (EQ(Current_twriting_output_type,Qwide_string)) {
		    thing_1 = (SI_Long)92L;
		    twrite_wide_character(CHARACTERP(FIX(thing_1)) ? 
			    CHAR_CODE(FIX(thing_1)) : FIX(thing_1));
		}
		else {
		    if ( !FIXNUM_LT(Fill_pointer_for_current_gensym_string,
			    Total_length_of_current_gensym_string))
			extend_current_gensym_string(0);
		    temp_2 = Current_gensym_string;
		    schar_arg_2 = Fill_pointer_for_current_gensym_string;
		    thing_1 = (SI_Long)92L;
		    schar_new_value = CODE_CHAR(CHARACTERP(FIX(thing_1)) ? 
			    CHAR_CODE(FIX(thing_1)) : FIX(thing_1));
		    SET_SCHAR(temp_2,schar_arg_2,schar_new_value);
		    temp_2 = 
			    FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
		    Fill_pointer_for_current_gensym_string = temp_2;
		}
		code_1 = kanji_code;
		result = chestnut_floorf_function(FIX(IFIX(code_1) & 
			(SI_Long)8191L),FIX((SI_Long)95L));
		MVS_2(result,quotient,remainder_1);
		octet_2 = IFIX(quotient) + (SI_Long)40L;
		octet_3 = IFIX(remainder_1) + (SI_Long)32L;
		octet_1_qm =  !(IFIX(code_1) >>  -  - (SI_Long)13L == 
			(SI_Long)1L) ? FIX((IFIX(code_1) >>  -  - 
			(SI_Long)13L) + (SI_Long)32L) : Nil;
		if (octet_1_qm) {
		    simple_or_wide_character = octet_1_qm;
		    if (EQ(Current_twriting_output_type,Qwide_string)) {
			thing = simple_or_wide_character;
			twrite_wide_character(CHARACTERP(thing) ? 
				CHAR_CODE(thing) : thing);
		    }
		    else {
			if ( 
				!FIXNUM_LT(Fill_pointer_for_current_gensym_string,
				Total_length_of_current_gensym_string))
			    extend_current_gensym_string(0);
			temp_2 = Current_gensym_string;
			schar_arg_2 = Fill_pointer_for_current_gensym_string;
			thing = simple_or_wide_character;
			schar_new_value = CODE_CHAR(CHARACTERP(thing) ? 
				CHAR_CODE(thing) : thing);
			SET_SCHAR(temp_2,schar_arg_2,schar_new_value);
			temp_2 = 
				FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
			Fill_pointer_for_current_gensym_string = temp_2;
		    }
		}
		simple_or_wide_character_1 = octet_2;
		if (EQ(Current_twriting_output_type,Qwide_string)) {
		    thing_1 = simple_or_wide_character_1;
		    twrite_wide_character(CHARACTERP(FIX(thing_1)) ? 
			    CHAR_CODE(FIX(thing_1)) : FIX(thing_1));
		}
		else {
		    if ( !FIXNUM_LT(Fill_pointer_for_current_gensym_string,
			    Total_length_of_current_gensym_string))
			extend_current_gensym_string(0);
		    temp_2 = Current_gensym_string;
		    schar_arg_2 = Fill_pointer_for_current_gensym_string;
		    thing_1 = simple_or_wide_character_1;
		    schar_new_value = CODE_CHAR(CHARACTERP(FIX(thing_1)) ? 
			    CHAR_CODE(FIX(thing_1)) : FIX(thing_1));
		    SET_SCHAR(temp_2,schar_arg_2,schar_new_value);
		    temp_2 = 
			    FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
		    Fill_pointer_for_current_gensym_string = temp_2;
		}
		simple_or_wide_character_1 = octet_3;
		if (EQ(Current_twriting_output_type,Qwide_string)) {
		    thing_1 = simple_or_wide_character_1;
		    twrite_wide_character(CHARACTERP(FIX(thing_1)) ? 
			    CHAR_CODE(FIX(thing_1)) : FIX(thing_1));
		}
		else {
		    if ( !FIXNUM_LT(Fill_pointer_for_current_gensym_string,
			    Total_length_of_current_gensym_string))
			extend_current_gensym_string(0);
		    temp_2 = Current_gensym_string;
		    schar_arg_2 = Fill_pointer_for_current_gensym_string;
		    thing_1 = simple_or_wide_character_1;
		    schar_new_value = CODE_CHAR(CHARACTERP(FIX(thing_1)) ? 
			    CHAR_CODE(FIX(thing_1)) : FIX(thing_1));
		    SET_SCHAR(temp_2,schar_arg_2,schar_new_value);
		    temp_2 = 
			    FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
		    Fill_pointer_for_current_gensym_string = temp_2;
		}
	    }
	    else {
		if (EQ(Current_twriting_output_type,Qwide_string)) {
		    thing = escape_character_qm;
		    twrite_wide_character(CHARACTERP(thing) ? 
			    CHAR_CODE(thing) : thing);
		}
		else {
		    if ( !FIXNUM_LT(Fill_pointer_for_current_gensym_string,
			    Total_length_of_current_gensym_string))
			extend_current_gensym_string(0);
		    temp_2 = Current_gensym_string;
		    schar_arg_2 = Fill_pointer_for_current_gensym_string;
		    thing = escape_character_qm;
		    schar_new_value = CODE_CHAR(CHARACTERP(thing) ? 
			    CHAR_CODE(thing) : thing);
		    SET_SCHAR(temp_2,schar_arg_2,schar_new_value);
		    temp_2 = 
			    FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
		    Fill_pointer_for_current_gensym_string = temp_2;
		}
		if (EQ(Current_twriting_output_type,Qwide_string)) {
		    thing = character_or_character_code;
		    twrite_wide_character(CHARACTERP(thing) ? 
			    CHAR_CODE(thing) : thing);
		}
		else {
		    if ( !FIXNUM_LT(Fill_pointer_for_current_gensym_string,
			    Total_length_of_current_gensym_string))
			extend_current_gensym_string(0);
		    temp_2 = Current_gensym_string;
		    schar_arg_2 = Fill_pointer_for_current_gensym_string;
		    thing = character_or_character_code;
		    schar_new_value = CODE_CHAR(CHARACTERP(thing) ? 
			    CHAR_CODE(thing) : thing);
		    SET_SCHAR(temp_2,schar_arg_2,schar_new_value);
		    temp_2 = 
			    FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
		    Fill_pointer_for_current_gensym_string = temp_2;
		}
	    }
	    if (extended_code_qm) {
		char_1 = Nil;
		if (FIXNUM_EQ(extended_code_qm,Gensym_code_for_linebreak))
		    result = VALUES_2(Gensym_char_or_code_for_linebreak,
			    Gensym_esc_for_linebreak_qm);
		else if (FIXNUM_EQ(extended_code_qm,
			Gensym_code_for_paragraph_break))
		    result = VALUES_2(Gensym_char_or_code_for_paragraph_break,
			    Gensym_esc_for_paragraph_break_qm);
		else {
		    if ((SI_Long)32L <= IFIX(extended_code_qm) && 
			    IFIX(extended_code_qm) <= (SI_Long)126L) {
			simple_gensym_character_code = extended_code_qm;
			temp_1 =  !(FIXNUM_EQ(simple_gensym_character_code,
				FIX((SI_Long)64L)) || 
				FIXNUM_EQ(simple_gensym_character_code,
				FIX((SI_Long)126L)) || 
				FIXNUM_EQ(simple_gensym_character_code,
				FIX((SI_Long)92L)));
		    }
		    else
			temp_1 = TRUEP(Nil);
		    if (temp_1) {
			temp = CODE_CHAR(extended_code_qm);
			result = VALUES_2(temp,Nil);
		    }
		    else {
			temp = IFIX(extended_code_qm) < (SI_Long)256L ? 
				ISVREF(Iso_latin1_special_character_code_map,
				IFIX(extended_code_qm)) : Nil;
			if (temp);
			else if (FIXNUM_EQ(extended_code_qm,
				Gensym_code_for_capital_ligature_oe))
			    temp = CHR('W');
			else if (FIXNUM_EQ(extended_code_qm,
				Gensym_code_for_small_ligature_oe))
			    temp = CHR('w');
			else if (FIXNUM_EQ(extended_code_qm,
				Gensym_code_for_bullet))
			    temp = CHR('*');
			else if (FIXNUM_EQ(extended_code_qm,
				Gensym_code_for_small_letter_f_with_hook))
			    temp = CHR('&');
			else if (FIXNUM_EQ(extended_code_qm,
				Gensym_code_for_trade_mark_sign))
			    temp = CHR(':');
			else
			    temp = Qnil;
			char_1 = temp;
			if (char_1)
			    result = VALUES_2(char_1,CHR('~'));
			else
			    result = VALUES_2(extended_code_qm,CHR('\\'));
		    }
		}
		MVS_2(result,extended_character_or_character_code_qm,
			extended_escape_character_qm);
		if ( !TRUEP(extended_escape_character_qm)) {
		    if (EQ(Current_twriting_output_type,Qwide_string)) {
			thing = extended_character_or_character_code_qm;
			twrite_wide_character(CHARACTERP(thing) ? 
				CHAR_CODE(thing) : thing);
		    }
		    else {
			if ( 
				!FIXNUM_LT(Fill_pointer_for_current_gensym_string,
				Total_length_of_current_gensym_string))
			    extend_current_gensym_string(0);
			temp_2 = Current_gensym_string;
			schar_arg_2 = Fill_pointer_for_current_gensym_string;
			thing = extended_character_or_character_code_qm;
			schar_new_value = CODE_CHAR(CHARACTERP(thing) ? 
				CHAR_CODE(thing) : thing);
			SET_SCHAR(temp_2,schar_arg_2,schar_new_value);
			temp_2 = 
				FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
			Fill_pointer_for_current_gensym_string = temp_2;
		    }
		}
		else if (CHAR_EQ(extended_escape_character_qm,CHR('\\'))) {
		    kanji_code = extended_character_or_character_code_qm;
		    octet_1_qm = Nil;
		    octet_2 = (SI_Long)0L;
		    octet_3 = (SI_Long)0L;
		    if (EQ(Current_twriting_output_type,Qwide_string)) {
			thing_1 = (SI_Long)92L;
			twrite_wide_character(CHARACTERP(FIX(thing_1)) ? 
				CHAR_CODE(FIX(thing_1)) : FIX(thing_1));
		    }
		    else {
			if ( 
				!FIXNUM_LT(Fill_pointer_for_current_gensym_string,
				Total_length_of_current_gensym_string))
			    extend_current_gensym_string(0);
			temp_2 = Current_gensym_string;
			schar_arg_2 = Fill_pointer_for_current_gensym_string;
			thing_1 = (SI_Long)92L;
			schar_new_value = 
				CODE_CHAR(CHARACTERP(FIX(thing_1)) ? 
				CHAR_CODE(FIX(thing_1)) : FIX(thing_1));
			SET_SCHAR(temp_2,schar_arg_2,schar_new_value);
			temp_2 = 
				FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
			Fill_pointer_for_current_gensym_string = temp_2;
		    }
		    code_1 = kanji_code;
		    result = chestnut_floorf_function(FIX(IFIX(code_1) & 
			    (SI_Long)8191L),FIX((SI_Long)95L));
		    MVS_2(result,quotient,remainder_1);
		    octet_2 = IFIX(quotient) + (SI_Long)40L;
		    octet_3 = IFIX(remainder_1) + (SI_Long)32L;
		    octet_1_qm =  !(IFIX(code_1) >>  -  - (SI_Long)13L == 
			    (SI_Long)1L) ? FIX((IFIX(code_1) >>  -  - 
			    (SI_Long)13L) + (SI_Long)32L) : Nil;
		    if (octet_1_qm) {
			simple_or_wide_character = octet_1_qm;
			if (EQ(Current_twriting_output_type,Qwide_string)) {
			    thing = simple_or_wide_character;
			    twrite_wide_character(CHARACTERP(thing) ? 
				    CHAR_CODE(thing) : thing);
			}
			else {
			    if ( 
				    !FIXNUM_LT(Fill_pointer_for_current_gensym_string,
				    Total_length_of_current_gensym_string))
				extend_current_gensym_string(0);
			    temp_2 = Current_gensym_string;
			    schar_arg_2 = 
				    Fill_pointer_for_current_gensym_string;
			    thing = simple_or_wide_character;
			    schar_new_value = CODE_CHAR(CHARACTERP(thing) ?
				     CHAR_CODE(thing) : thing);
			    SET_SCHAR(temp_2,schar_arg_2,schar_new_value);
			    temp_2 = 
				    FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
			    Fill_pointer_for_current_gensym_string = temp_2;
			}
		    }
		    simple_or_wide_character_1 = octet_2;
		    if (EQ(Current_twriting_output_type,Qwide_string)) {
			thing_1 = simple_or_wide_character_1;
			twrite_wide_character(CHARACTERP(FIX(thing_1)) ? 
				CHAR_CODE(FIX(thing_1)) : FIX(thing_1));
		    }
		    else {
			if ( 
				!FIXNUM_LT(Fill_pointer_for_current_gensym_string,
				Total_length_of_current_gensym_string))
			    extend_current_gensym_string(0);
			temp_2 = Current_gensym_string;
			schar_arg_2 = Fill_pointer_for_current_gensym_string;
			thing_1 = simple_or_wide_character_1;
			schar_new_value = 
				CODE_CHAR(CHARACTERP(FIX(thing_1)) ? 
				CHAR_CODE(FIX(thing_1)) : FIX(thing_1));
			SET_SCHAR(temp_2,schar_arg_2,schar_new_value);
			temp_2 = 
				FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
			Fill_pointer_for_current_gensym_string = temp_2;
		    }
		    simple_or_wide_character_1 = octet_3;
		    if (EQ(Current_twriting_output_type,Qwide_string)) {
			thing_1 = simple_or_wide_character_1;
			twrite_wide_character(CHARACTERP(FIX(thing_1)) ? 
				CHAR_CODE(FIX(thing_1)) : FIX(thing_1));
		    }
		    else {
			if ( 
				!FIXNUM_LT(Fill_pointer_for_current_gensym_string,
				Total_length_of_current_gensym_string))
			    extend_current_gensym_string(0);
			temp_2 = Current_gensym_string;
			schar_arg_2 = Fill_pointer_for_current_gensym_string;
			thing_1 = simple_or_wide_character_1;
			schar_new_value = 
				CODE_CHAR(CHARACTERP(FIX(thing_1)) ? 
				CHAR_CODE(FIX(thing_1)) : FIX(thing_1));
			SET_SCHAR(temp_2,schar_arg_2,schar_new_value);
			temp_2 = 
				FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
			Fill_pointer_for_current_gensym_string = temp_2;
		    }
		}
		else {
		    if (EQ(Current_twriting_output_type,Qwide_string)) {
			thing = extended_escape_character_qm;
			twrite_wide_character(CHARACTERP(thing) ? 
				CHAR_CODE(thing) : thing);
		    }
		    else {
			if ( 
				!FIXNUM_LT(Fill_pointer_for_current_gensym_string,
				Total_length_of_current_gensym_string))
			    extend_current_gensym_string(0);
			temp_2 = Current_gensym_string;
			schar_arg_2 = Fill_pointer_for_current_gensym_string;
			thing = extended_escape_character_qm;
			schar_new_value = CODE_CHAR(CHARACTERP(thing) ? 
				CHAR_CODE(thing) : thing);
			SET_SCHAR(temp_2,schar_arg_2,schar_new_value);
			temp_2 = 
				FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
			Fill_pointer_for_current_gensym_string = temp_2;
		    }
		    if (EQ(Current_twriting_output_type,Qwide_string)) {
			thing = extended_character_or_character_code_qm;
			twrite_wide_character(CHARACTERP(thing) ? 
				CHAR_CODE(thing) : thing);
		    }
		    else {
			if ( 
				!FIXNUM_LT(Fill_pointer_for_current_gensym_string,
				Total_length_of_current_gensym_string))
			    extend_current_gensym_string(0);
			temp_2 = Current_gensym_string;
			schar_arg_2 = Fill_pointer_for_current_gensym_string;
			thing = extended_character_or_character_code_qm;
			schar_new_value = CODE_CHAR(CHARACTERP(thing) ? 
				CHAR_CODE(thing) : thing);
			SET_SCHAR(temp_2,schar_arg_2,schar_new_value);
			temp_2 = 
				FIXNUM_ADD1(Fill_pointer_for_current_gensym_string);
			Fill_pointer_for_current_gensym_string = temp_2;
		    }
		}
	    }
	    temporary_gensym_string = copy_out_current_gensym_string();
	  POP_SPECIAL();
	POP_SPECIAL();
      POP_SPECIAL();
    POP_SPECIAL();
    temp = g2_stream_write_string(temporary_gensym_string,stream);
    reclaim_gensym_string(temporary_gensym_string);
    return VALUES_1(temp);
}

/* WRITE-WIDE-STRING-INTO-TEXT-FILE */
Object write_wide_string_into_text_file(wide_string,filename)
    Object wide_string, filename;
{
    Object text_stream_qm;

    x_note_fn_call(38,63);
    text_stream_qm = g2_stream_open_for_output(filename);
    if (text_stream_qm) {
	g2_stream_write_string(wide_string,text_stream_qm);
	return g2_stream_close(text_stream_qm);
    }
    else
	return VALUES_1(Nil);
}

/* C-G2_STREAM_DELETE_FILE */
Object c_g2_stream_delete_file(namestring_1)
    Object namestring_1;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,64);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(namestring_1);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = namestring_1;
    temp = FIX(g2ext_str_delete_file(ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

/* C-G2_STREAM_DELETE_FILE_WIDE */
Object c_g2_stream_delete_file_wide(namestring_1)
    Object namestring_1;
{
    Object temp;

    x_note_fn_call(38,65);
    temp = 
	    FIX(g2ext_str_delete_file_s16(UBYTE_16_SARRAY_TO_USHORT_PTR(namestring_1)));
    return VALUES_1(temp);
}

/* G2-DELETE-FILE-INTERNAL */
Object g2_delete_file_internal(filename_string_to_use)
    Object filename_string_to_use;
{
    x_note_fn_call(38,66);
    if (use_unicode_for_filenames())
	return c_g2_stream_delete_file_wide(filename_string_to_use);
    else
	return c_g2_stream_delete_file(filename_string_to_use);
}

/* G2-STREAM-DELETE-FILE */
Object g2_stream_delete_file(namestring_1)
    Object namestring_1;
{
    Object status;

    x_note_fn_call(38,67);
    status = g2_delete_file_internal(namestring_1);
    if (FIXNUM_EQ(status,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(T);
    }
}

/* C-G2_STREAM_RENAME_FILE */
Object c_g2_stream_rename_file(old_namestring,new_namestring)
    Object old_namestring, new_namestring;
{
    Object gensymed_symbol, gensymed_symbol_1, temp;
    char *temp_1;

    x_note_fn_call(38,68);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(old_namestring);
    gensymed_symbol_1 = copy_foreign_string_arg_if_appropriate(new_namestring);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = old_namestring;
    temp_1 = ISTRING(temp);
    temp = gensymed_symbol_1;
    if (temp);
    else
	temp = new_namestring;
    temp = FIX(g2ext_str_rename_file(temp_1,ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    if (gensymed_symbol_1)
	reclaim_gensym_string(gensymed_symbol_1);
    return VALUES_1(temp);
}

/* C-G2_STREAM_RENAME_FILE_WIDE */
Object c_g2_stream_rename_file_wide(old_namestring,new_namestring)
    Object old_namestring, new_namestring;
{
    Object temp;

    x_note_fn_call(38,69);
    temp = 
	    FIX(g2ext_str_rename_file_s16(UBYTE_16_SARRAY_TO_USHORT_PTR(old_namestring),
	    UBYTE_16_SARRAY_TO_USHORT_PTR(new_namestring)));
    return VALUES_1(temp);
}

/* G2-RENAME-FILE-INTERNAL */
Object g2_rename_file_internal(old_namestring,new_namestring)
    Object old_namestring, new_namestring;
{
    x_note_fn_call(38,70);
    if (use_unicode_for_filenames())
	return c_g2_stream_rename_file_wide(old_namestring,new_namestring);
    else
	return c_g2_stream_rename_file(old_namestring,new_namestring);
}

/* G2-STREAM-RENAME-FILE */
Object g2_stream_rename_file(old_namestring,new_namestring)
    Object old_namestring, new_namestring;
{
    Object status;

    x_note_fn_call(38,71);
    status = g2_rename_file_internal(old_namestring,new_namestring);
    if (FIXNUM_EQ(status,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(T);
    }
}

/* C-G2_STREAM_COPY_FILE */
Object c_g2_stream_copy_file(old_namestring,new_namestring)
    Object old_namestring, new_namestring;
{
    Object gensymed_symbol, gensymed_symbol_1, temp;
    char *temp_1;

    x_note_fn_call(38,72);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(old_namestring);
    gensymed_symbol_1 = copy_foreign_string_arg_if_appropriate(new_namestring);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = old_namestring;
    temp_1 = ISTRING(temp);
    temp = gensymed_symbol_1;
    if (temp);
    else
	temp = new_namestring;
    temp = FIX(g2ext_str_copy_file(temp_1,ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    if (gensymed_symbol_1)
	reclaim_gensym_string(gensymed_symbol_1);
    return VALUES_1(temp);
}

/* C-G2_STREAM_COPY_FILE_WIDE */
Object c_g2_stream_copy_file_wide(old_namestring,new_namestring)
    Object old_namestring, new_namestring;
{
    Object temp;

    x_note_fn_call(38,73);
    temp = 
	    FIX(g2ext_str_copy_file_s16(UBYTE_16_SARRAY_TO_USHORT_PTR(old_namestring),
	    UBYTE_16_SARRAY_TO_USHORT_PTR(new_namestring)));
    return VALUES_1(temp);
}

/* G2-COPY-FILE-INTERNAL */
Object g2_copy_file_internal(old_namestring,new_namestring)
    Object old_namestring, new_namestring;
{
    x_note_fn_call(38,74);
    if (use_unicode_for_filenames())
	return c_g2_stream_copy_file_wide(old_namestring,new_namestring);
    else
	return c_g2_stream_copy_file(old_namestring,new_namestring);
}

/* G2-STREAM-COPY-FILE */
Object g2_stream_copy_file(old_namestring,new_namestring)
    Object old_namestring, new_namestring;
{
    Object status;

    x_note_fn_call(38,75);
    status = g2_copy_file_internal(old_namestring,new_namestring);
    if (FIXNUM_EQ(status,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(T);
    }
}

Object G2_stream_directory_buffer_length = UNBOUND;

Object G2_stream_directory_buffer = UNBOUND;

Object G2_stream_directory_initialized_p = UNBOUND;

Object Unique_temp_filename = UNBOUND;

/* C-MAKE_UNIQUE_FILENAME */
Object c_make_unique_filename(id_suggestion,buffer_size,buffer)
    Object id_suggestion, buffer_size, buffer;
{
    Object gensymed_symbol, gensymed_symbol_1, temp;
    char *temp_1;

    x_note_fn_call(38,76);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(id_suggestion);
    gensymed_symbol_1 = copy_foreign_string_arg_if_appropriate(buffer);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = id_suggestion;
    temp_1 = ISTRING(temp);
    temp = gensymed_symbol_1;
    if (temp);
    else
	temp = buffer;
    temp = FIX(g2ext_make_unique_filename(temp_1,IFIX(buffer_size),
	    ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    if (gensymed_symbol_1)
	reclaim_gensym_string(gensymed_symbol_1);
    return VALUES_1(temp);
}

/* MAKE-UNIQUE-FILE-NAME */
Object make_unique_file_name(identifier)
    Object identifier;
{
    Object status;

    x_note_fn_call(38,77);
    status = c_make_unique_filename(identifier,Size_for_temp_filename,
	    Unique_temp_filename);
    if ((SI_Long)1L == IFIX(status))
	return copy_null_terminated_string_as_text_string(Unique_temp_filename);
    else if ((SI_Long)-1L == IFIX(status))
	return VALUES_1(Nil);
    else if ((SI_Long)-2L == IFIX(status))
	return VALUES_1(Nil);
    else
	return VALUES_1(Nil);
}

Object The_type_description_of_regular_expression_node = UNBOUND;

Object Chain_of_available_regular_expression_nodes = UNBOUND;

Object Regular_expression_node_count = UNBOUND;

/* REGULAR-EXPRESSION-NODE-STRUCTURE-MEMORY-USAGE */
Object regular_expression_node_structure_memory_usage()
{
    Object temp;

    x_note_fn_call(38,78);
    temp = Regular_expression_node_count;
    temp = FIXNUM_TIMES(temp,bytes_per_simple_vector(FIX((SI_Long)2L)));
    return VALUES_1(temp);
}

/* OUTSTANDING-REGULAR-EXPRESSION-NODE-COUNT */
Object outstanding_regular_expression_node_count()
{
    Object def_structure_regular_expression_node_variable, count_1;
    SI_Long gensymed_symbol, gensymed_symbol_1;

    x_note_fn_call(38,79);
    gensymed_symbol = IFIX(Regular_expression_node_count);
    def_structure_regular_expression_node_variable = 
	    Chain_of_available_regular_expression_nodes;
    count_1 = FIX((SI_Long)0L);
  next_loop:
    if ( !TRUEP(def_structure_regular_expression_node_variable))
	goto end_loop;
    def_structure_regular_expression_node_variable = 
	    ISVREF(def_structure_regular_expression_node_variable,(SI_Long)0L);
    count_1 = FIXNUM_ADD1(count_1);
    goto next_loop;
  end_loop:
    gensymed_symbol_1 = IFIX(count_1);
    goto end;
    gensymed_symbol_1 = IFIX(Qnil);
  end:;
    return VALUES_1(FIX(gensymed_symbol - gensymed_symbol_1));
}

/* UNUSED-NODE-RECLAIMER-1 */
Object unused_node_reclaimer_1(regular_expression_node)
    Object regular_expression_node;
{
    Object svref_new_value;

    x_note_fn_call(38,80);
    inline_note_reclaim_cons(regular_expression_node,Nil);
    svref_new_value = Chain_of_available_regular_expression_nodes;
    SVREF(regular_expression_node,FIX((SI_Long)0L)) = svref_new_value;
    Chain_of_available_regular_expression_nodes = regular_expression_node;
    return VALUES_1(Nil);
}

/* RECLAIM-STRUCTURE-FOR-REGULAR-EXPRESSION-NODE */
Object reclaim_structure_for_regular_expression_node(regular_expression_node)
    Object regular_expression_node;
{
    x_note_fn_call(38,81);
    return unused_node_reclaimer_1(regular_expression_node);
}

static Object Qg2_defstruct_structure_name_regular_expression_node_g2_struct;  /* g2-defstruct-structure-name::regular-expression-node-g2-struct */

/* MAKE-PERMANENT-REGULAR-EXPRESSION-NODE-STRUCTURE-INTERNAL */
Object make_permanent_regular_expression_node_structure_internal()
{
    Object def_structure_regular_expression_node_variable;
    Object regular_expression_node_count_new_value;
    Object defstruct_g2_regular_expression_node_variable, the_array;
    SI_Long gensymed_symbol, i, ab_loop_bind_;
    XDeclare_area(1);

    x_note_fn_call(38,82);
    def_structure_regular_expression_node_variable = Nil;
    regular_expression_node_count_new_value = 
	    FIXNUM_ADD1(Regular_expression_node_count);
    Regular_expression_node_count = regular_expression_node_count_new_value;
    if (PUSH_AREA(Dynamic_area,0)) {
	defstruct_g2_regular_expression_node_variable = Nil;
	gensymed_symbol = (SI_Long)2L;
	the_array = make_array(1,FIX(gensymed_symbol));
	i = (SI_Long)0L;
	ab_loop_bind_ = gensymed_symbol;
      next_loop:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	ISVREF(the_array,i) = Nil;
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:;
	defstruct_g2_regular_expression_node_variable = the_array;
	SVREF(defstruct_g2_regular_expression_node_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_regular_expression_node_g2_struct;
	def_structure_regular_expression_node_variable = 
		defstruct_g2_regular_expression_node_variable;
    }
    POP_AREA(0);
    return VALUES_1(def_structure_regular_expression_node_variable);
}

/* MAKE-REGULAR-EXPRESSION-NODE-1 */
Object make_regular_expression_node_1()
{
    Object def_structure_regular_expression_node_variable;

    x_note_fn_call(38,83);
    def_structure_regular_expression_node_variable = 
	    Chain_of_available_regular_expression_nodes;
    if (def_structure_regular_expression_node_variable) {
	Chain_of_available_regular_expression_nodes = 
		ISVREF(def_structure_regular_expression_node_variable,
		(SI_Long)0L);
	SVREF(def_structure_regular_expression_node_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_regular_expression_node_g2_struct;
    }
    else
	def_structure_regular_expression_node_variable = 
		make_permanent_regular_expression_node_structure_internal();
    inline_note_allocate_cons(def_structure_regular_expression_node_variable,
	    Nil);
    SVREF(def_structure_regular_expression_node_variable,FIX((SI_Long)1L)) 
	    = Nil;
    return VALUES_1(def_structure_regular_expression_node_variable);
}

Object The_type_description_of_regular_expression_node_for_single_character = UNBOUND;

Object Chain_of_available_regular_expression_node_for_single_characters = UNBOUND;

Object Regular_expression_node_for_single_character_count = UNBOUND;

/* REGULAR-EXPRESSION-NODE-FOR-SINGLE-CHARACTER-STRUCTURE-MEMORY-USAGE */
Object regular_expression_node_for_single_character_structure_memory_usage()
{
    Object temp;

    x_note_fn_call(38,84);
    temp = Regular_expression_node_for_single_character_count;
    temp = FIXNUM_TIMES(temp,bytes_per_simple_vector(FIX((SI_Long)3L)));
    return VALUES_1(temp);
}

/* OUTSTANDING-REGULAR-EXPRESSION-NODE-FOR-SINGLE-CHARACTER-COUNT */
Object outstanding_regular_expression_node_for_single_character_count()
{
    Object def_structure_regular_expression_node_for_single_character_variable;
    Object count_1;
    SI_Long gensymed_symbol, gensymed_symbol_1;

    x_note_fn_call(38,85);
    gensymed_symbol = IFIX(Regular_expression_node_for_single_character_count);
    def_structure_regular_expression_node_for_single_character_variable = 
	    Chain_of_available_regular_expression_node_for_single_characters;
    count_1 = FIX((SI_Long)0L);
  next_loop:
    if ( 
	    !TRUEP(def_structure_regular_expression_node_for_single_character_variable))
	goto end_loop;
    def_structure_regular_expression_node_for_single_character_variable = 
	    ISVREF(def_structure_regular_expression_node_for_single_character_variable,
	    (SI_Long)0L);
    count_1 = FIXNUM_ADD1(count_1);
    goto next_loop;
  end_loop:
    gensymed_symbol_1 = IFIX(count_1);
    goto end;
    gensymed_symbol_1 = IFIX(Qnil);
  end:;
    return VALUES_1(FIX(gensymed_symbol - gensymed_symbol_1));
}

/* RECLAIM-REGULAR-EXPRESSION-NODE-FOR-SINGLE-CHARACTER-1 */
Object reclaim_regular_expression_node_for_single_character_1(regular_expression_node_for_single_character)
    Object regular_expression_node_for_single_character;
{
    Object svref_new_value;

    x_note_fn_call(38,86);
    inline_note_reclaim_cons(regular_expression_node_for_single_character,Nil);
    svref_new_value = 
	    Chain_of_available_regular_expression_node_for_single_characters;
    SVREF(regular_expression_node_for_single_character,FIX((SI_Long)0L)) = 
	    svref_new_value;
    Chain_of_available_regular_expression_node_for_single_characters = 
	    regular_expression_node_for_single_character;
    return VALUES_1(Nil);
}

/* RECLAIM-STRUCTURE-FOR-REGULAR-EXPRESSION-NODE-FOR-SINGLE-CHARACTER */
Object reclaim_structure_for_regular_expression_node_for_single_character(regular_expression_node_for_single_character)
    Object regular_expression_node_for_single_character;
{
    x_note_fn_call(38,87);
    return reclaim_regular_expression_node_for_single_character_1(regular_expression_node_for_single_character);
}

static Object Qg2_defstruct_structure_name_regular_expression_node_for_single_character_g2_struct;  /* g2-defstruct-structure-name::regular-expression-node-for-single-character-g2-struct */

/* MAKE-PERMANENT-REGULAR-EXPRESSION-NODE-FOR-SINGLE-CHARACTER-STRUCTURE-INTERNAL */
Object make_permanent_regular_expression_node_for_single_character_structure_internal()
{
    Object def_structure_regular_expression_node_for_single_character_variable;
    Object regular_expression_node_for_single_character_count_new_value;
    Object defstruct_g2_regular_expression_node_for_single_character_variable;
    Object the_array;
    SI_Long gensymed_symbol, i, ab_loop_bind_;
    XDeclare_area(1);

    x_note_fn_call(38,88);
    def_structure_regular_expression_node_for_single_character_variable = Nil;
    regular_expression_node_for_single_character_count_new_value = 
	    FIXNUM_ADD1(Regular_expression_node_for_single_character_count);
    Regular_expression_node_for_single_character_count = 
	    regular_expression_node_for_single_character_count_new_value;
    if (PUSH_AREA(Dynamic_area,0)) {
	defstruct_g2_regular_expression_node_for_single_character_variable 
		= Nil;
	gensymed_symbol = (SI_Long)3L;
	the_array = make_array(1,FIX(gensymed_symbol));
	i = (SI_Long)0L;
	ab_loop_bind_ = gensymed_symbol;
      next_loop:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	ISVREF(the_array,i) = Nil;
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:;
	defstruct_g2_regular_expression_node_for_single_character_variable 
		= the_array;
	SVREF(defstruct_g2_regular_expression_node_for_single_character_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_regular_expression_node_for_single_character_g2_struct;
	SVREF(defstruct_g2_regular_expression_node_for_single_character_variable,
		FIX((SI_Long)1L)) = Nil;
	def_structure_regular_expression_node_for_single_character_variable 
		= 
		defstruct_g2_regular_expression_node_for_single_character_variable;
    }
    POP_AREA(0);
    return VALUES_1(def_structure_regular_expression_node_for_single_character_variable);
}

/* MAKE-REGULAR-EXPRESSION-NODE-FOR-SINGLE-CHARACTER-1 */
Object make_regular_expression_node_for_single_character_1(single_character_in_regular_expression)
    Object single_character_in_regular_expression;
{
    Object def_structure_regular_expression_node_for_single_character_variable;

    x_note_fn_call(38,89);
    def_structure_regular_expression_node_for_single_character_variable = 
	    Chain_of_available_regular_expression_node_for_single_characters;
    if (def_structure_regular_expression_node_for_single_character_variable) {
	Chain_of_available_regular_expression_node_for_single_characters = 
		ISVREF(def_structure_regular_expression_node_for_single_character_variable,
		(SI_Long)0L);
	SVREF(def_structure_regular_expression_node_for_single_character_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_regular_expression_node_for_single_character_g2_struct;
    }
    else
	def_structure_regular_expression_node_for_single_character_variable 
		= 
		make_permanent_regular_expression_node_for_single_character_structure_internal();
    inline_note_allocate_cons(def_structure_regular_expression_node_for_single_character_variable,
	    Nil);
    SVREF(def_structure_regular_expression_node_for_single_character_variable,
	    FIX((SI_Long)2L)) = single_character_in_regular_expression;
    SVREF(def_structure_regular_expression_node_for_single_character_variable,
	    FIX((SI_Long)1L)) = Nil;
    return VALUES_1(def_structure_regular_expression_node_for_single_character_variable);
}

Object The_type_description_of_regular_expression_node_for_single_wild_character = UNBOUND;

Object Chain_of_available_regular_expression_node_for_single_wild_characters = UNBOUND;

Object Regular_expression_node_for_single_wild_character_count = UNBOUND;

/* REGULAR-EXPRESSION-NODE-FOR-SINGLE-WILD-CHARACTER-STRUCTURE-MEMORY-USAGE */
Object regular_expression_node_for_single_wild_character_structure_memory_usage()
{
    Object temp;

    x_note_fn_call(38,90);
    temp = Regular_expression_node_for_single_wild_character_count;
    temp = FIXNUM_TIMES(temp,bytes_per_simple_vector(FIX((SI_Long)2L)));
    return VALUES_1(temp);
}

/* OUTSTANDING-REGULAR-EXPRESSION-NODE-FOR-SINGLE-WILD-CHARACTER-COUNT */
Object outstanding_regular_expression_node_for_single_wild_character_count()
{
    Object def_structure_regular_expression_node_for_single_wild_character_variable;
    Object count_1;
    SI_Long gensymed_symbol, gensymed_symbol_1;

    x_note_fn_call(38,91);
    gensymed_symbol = 
	    IFIX(Regular_expression_node_for_single_wild_character_count);
    def_structure_regular_expression_node_for_single_wild_character_variable 
	    = 
	    Chain_of_available_regular_expression_node_for_single_wild_characters;
    count_1 = FIX((SI_Long)0L);
  next_loop:
    if ( 
	    !TRUEP(def_structure_regular_expression_node_for_single_wild_character_variable))
	goto end_loop;
    def_structure_regular_expression_node_for_single_wild_character_variable 
	    = 
	    ISVREF(def_structure_regular_expression_node_for_single_wild_character_variable,
	    (SI_Long)0L);
    count_1 = FIXNUM_ADD1(count_1);
    goto next_loop;
  end_loop:
    gensymed_symbol_1 = IFIX(count_1);
    goto end;
    gensymed_symbol_1 = IFIX(Qnil);
  end:;
    return VALUES_1(FIX(gensymed_symbol - gensymed_symbol_1));
}

/* RECLAIM-REGULAR-EXPRESSION-NODE-FOR-SINGLE-WILD-CHARACTER-1 */
Object reclaim_regular_expression_node_for_single_wild_character_1(regular_expression_node_for_single_wild_character)
    Object regular_expression_node_for_single_wild_character;
{
    Object svref_new_value;

    x_note_fn_call(38,92);
    inline_note_reclaim_cons(regular_expression_node_for_single_wild_character,
	    Nil);
    svref_new_value = 
	    Chain_of_available_regular_expression_node_for_single_wild_characters;
    SVREF(regular_expression_node_for_single_wild_character,
	    FIX((SI_Long)0L)) = svref_new_value;
    Chain_of_available_regular_expression_node_for_single_wild_characters 
	    = regular_expression_node_for_single_wild_character;
    return VALUES_1(Nil);
}

/* RECLAIM-STRUCTURE-FOR-REGULAR-EXPRESSION-NODE-FOR-SINGLE-WILD-CHARACTER */
Object reclaim_structure_for_regular_expression_node_for_single_wild_character(regular_expression_node_for_single_wild_character)
    Object regular_expression_node_for_single_wild_character;
{
    x_note_fn_call(38,93);
    return reclaim_regular_expression_node_for_single_wild_character_1(regular_expression_node_for_single_wild_character);
}

static Object Qg2_defstruct_structure_name_regular_expression_node_for_single_wild_character_g2_struct;  /* g2-defstruct-structure-name::regular-expression-node-for-single-wild-character-g2-struct */

/* MAKE-PERMANENT-REGULAR-EXPRESSION-NODE-FOR-SINGLE-WILD-CHARACTER-STRUCTURE-INTERNAL */
Object make_permanent_regular_expression_node_for_single_wild_character_structure_internal()
{
    Object def_structure_regular_expression_node_for_single_wild_character_variable;
    Object regular_expression_node_for_single_wild_character_count_new_value;
    Object defstruct_g2_regular_expression_node_for_single_wild_character_variable;
    Object the_array;
    SI_Long gensymed_symbol, i, ab_loop_bind_;
    XDeclare_area(1);

    x_note_fn_call(38,94);
    def_structure_regular_expression_node_for_single_wild_character_variable 
	    = Nil;
    regular_expression_node_for_single_wild_character_count_new_value = 
	    FIXNUM_ADD1(Regular_expression_node_for_single_wild_character_count);
    Regular_expression_node_for_single_wild_character_count = 
	    regular_expression_node_for_single_wild_character_count_new_value;
    if (PUSH_AREA(Dynamic_area,0)) {
	defstruct_g2_regular_expression_node_for_single_wild_character_variable 
		= Nil;
	gensymed_symbol = (SI_Long)2L;
	the_array = make_array(1,FIX(gensymed_symbol));
	i = (SI_Long)0L;
	ab_loop_bind_ = gensymed_symbol;
      next_loop:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	ISVREF(the_array,i) = Nil;
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:;
	defstruct_g2_regular_expression_node_for_single_wild_character_variable 
		= the_array;
	SVREF(defstruct_g2_regular_expression_node_for_single_wild_character_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_regular_expression_node_for_single_wild_character_g2_struct;
	SVREF(defstruct_g2_regular_expression_node_for_single_wild_character_variable,
		FIX((SI_Long)1L)) = Nil;
	def_structure_regular_expression_node_for_single_wild_character_variable 
		= 
		defstruct_g2_regular_expression_node_for_single_wild_character_variable;
    }
    POP_AREA(0);
    return VALUES_1(def_structure_regular_expression_node_for_single_wild_character_variable);
}

/* MAKE-REGULAR-EXPRESSION-NODE-FOR-SINGLE-WILD-CHARACTER-1 */
Object make_regular_expression_node_for_single_wild_character_1()
{
    Object def_structure_regular_expression_node_for_single_wild_character_variable;

    x_note_fn_call(38,95);
    def_structure_regular_expression_node_for_single_wild_character_variable 
	    = 
	    Chain_of_available_regular_expression_node_for_single_wild_characters;
    if (def_structure_regular_expression_node_for_single_wild_character_variable) 
		{
	Chain_of_available_regular_expression_node_for_single_wild_characters 
		= 
		ISVREF(def_structure_regular_expression_node_for_single_wild_character_variable,
		(SI_Long)0L);
	SVREF(def_structure_regular_expression_node_for_single_wild_character_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_regular_expression_node_for_single_wild_character_g2_struct;
    }
    else
	def_structure_regular_expression_node_for_single_wild_character_variable 
		= 
		make_permanent_regular_expression_node_for_single_wild_character_structure_internal();
    inline_note_allocate_cons(def_structure_regular_expression_node_for_single_wild_character_variable,
	    Nil);
    SVREF(def_structure_regular_expression_node_for_single_wild_character_variable,
	    FIX((SI_Long)1L)) = Nil;
    return VALUES_1(def_structure_regular_expression_node_for_single_wild_character_variable);
}

Object The_type_description_of_multiply_wild_regular_expression_node = UNBOUND;

Object Chain_of_available_multiply_wild_regular_expression_nodes = UNBOUND;

Object Multiply_wild_regular_expression_node_count = UNBOUND;

/* MULTIPLY-WILD-REGULAR-EXPRESSION-NODE-STRUCTURE-MEMORY-USAGE */
Object multiply_wild_regular_expression_node_structure_memory_usage()
{
    Object temp;

    x_note_fn_call(38,96);
    temp = Multiply_wild_regular_expression_node_count;
    temp = FIXNUM_TIMES(temp,bytes_per_simple_vector(FIX((SI_Long)4L)));
    return VALUES_1(temp);
}

/* OUTSTANDING-MULTIPLY-WILD-REGULAR-EXPRESSION-NODE-COUNT */
Object outstanding_multiply_wild_regular_expression_node_count()
{
    Object def_structure_multiply_wild_regular_expression_node_variable;
    Object count_1;
    SI_Long gensymed_symbol, gensymed_symbol_1;

    x_note_fn_call(38,97);
    gensymed_symbol = IFIX(Multiply_wild_regular_expression_node_count);
    def_structure_multiply_wild_regular_expression_node_variable = 
	    Chain_of_available_multiply_wild_regular_expression_nodes;
    count_1 = FIX((SI_Long)0L);
  next_loop:
    if ( !TRUEP(def_structure_multiply_wild_regular_expression_node_variable))
	goto end_loop;
    def_structure_multiply_wild_regular_expression_node_variable = 
	    ISVREF(def_structure_multiply_wild_regular_expression_node_variable,
	    (SI_Long)0L);
    count_1 = FIXNUM_ADD1(count_1);
    goto next_loop;
  end_loop:
    gensymed_symbol_1 = IFIX(count_1);
    goto end;
    gensymed_symbol_1 = IFIX(Qnil);
  end:;
    return VALUES_1(FIX(gensymed_symbol - gensymed_symbol_1));
}

/* RECLAIM-MULTIPLY-WILD-REGULAR-EXPRESSION-NODE-1 */
Object reclaim_multiply_wild_regular_expression_node_1(multiply_wild_regular_expression_node)
    Object multiply_wild_regular_expression_node;
{
    Object svref_new_value;

    x_note_fn_call(38,98);
    inline_note_reclaim_cons(multiply_wild_regular_expression_node,Nil);
    svref_new_value = 
	    Chain_of_available_multiply_wild_regular_expression_nodes;
    SVREF(multiply_wild_regular_expression_node,FIX((SI_Long)0L)) = 
	    svref_new_value;
    Chain_of_available_multiply_wild_regular_expression_nodes = 
	    multiply_wild_regular_expression_node;
    return VALUES_1(Nil);
}

/* RECLAIM-STRUCTURE-FOR-MULTIPLY-WILD-REGULAR-EXPRESSION-NODE */
Object reclaim_structure_for_multiply_wild_regular_expression_node(multiply_wild_regular_expression_node)
    Object multiply_wild_regular_expression_node;
{
    x_note_fn_call(38,99);
    return reclaim_multiply_wild_regular_expression_node_1(multiply_wild_regular_expression_node);
}

static Object Qg2_defstruct_structure_name_multiply_wild_regular_expression_node_g2_struct;  /* g2-defstruct-structure-name::multiply-wild-regular-expression-node-g2-struct */

/* MAKE-PERMANENT-MULTIPLY-WILD-REGULAR-EXPRESSION-NODE-STRUCTURE-INTERNAL */
Object make_permanent_multiply_wild_regular_expression_node_structure_internal()
{
    Object def_structure_multiply_wild_regular_expression_node_variable;
    Object multiply_wild_regular_expression_node_count_new_value;
    Object defstruct_g2_multiply_wild_regular_expression_node_variable;
    Object the_array;
    SI_Long gensymed_symbol, i, ab_loop_bind_;
    XDeclare_area(1);

    x_note_fn_call(38,100);
    def_structure_multiply_wild_regular_expression_node_variable = Nil;
    multiply_wild_regular_expression_node_count_new_value = 
	    FIXNUM_ADD1(Multiply_wild_regular_expression_node_count);
    Multiply_wild_regular_expression_node_count = 
	    multiply_wild_regular_expression_node_count_new_value;
    if (PUSH_AREA(Dynamic_area,0)) {
	defstruct_g2_multiply_wild_regular_expression_node_variable = Nil;
	gensymed_symbol = (SI_Long)4L;
	the_array = make_array(1,FIX(gensymed_symbol));
	i = (SI_Long)0L;
	ab_loop_bind_ = gensymed_symbol;
      next_loop:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	ISVREF(the_array,i) = Nil;
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:;
	defstruct_g2_multiply_wild_regular_expression_node_variable = 
		the_array;
	SVREF(defstruct_g2_multiply_wild_regular_expression_node_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_multiply_wild_regular_expression_node_g2_struct;
	SVREF(defstruct_g2_multiply_wild_regular_expression_node_variable,
		FIX((SI_Long)1L)) = Nil;
	def_structure_multiply_wild_regular_expression_node_variable = 
		defstruct_g2_multiply_wild_regular_expression_node_variable;
    }
    POP_AREA(0);
    return VALUES_1(def_structure_multiply_wild_regular_expression_node_variable);
}

/* MAKE-MULTIPLY-WILD-REGULAR-EXPRESSION-NODE-1 */
Object make_multiply_wild_regular_expression_node_1()
{
    Object def_structure_multiply_wild_regular_expression_node_variable;

    x_note_fn_call(38,101);
    def_structure_multiply_wild_regular_expression_node_variable = 
	    Chain_of_available_multiply_wild_regular_expression_nodes;
    if (def_structure_multiply_wild_regular_expression_node_variable) {
	Chain_of_available_multiply_wild_regular_expression_nodes = 
		ISVREF(def_structure_multiply_wild_regular_expression_node_variable,
		(SI_Long)0L);
	SVREF(def_structure_multiply_wild_regular_expression_node_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_multiply_wild_regular_expression_node_g2_struct;
    }
    else
	def_structure_multiply_wild_regular_expression_node_variable = 
		make_permanent_multiply_wild_regular_expression_node_structure_internal();
    inline_note_allocate_cons(def_structure_multiply_wild_regular_expression_node_variable,
	    Nil);
    SVREF(def_structure_multiply_wild_regular_expression_node_variable,
	    FIX((SI_Long)1L)) = Nil;
    return VALUES_1(def_structure_multiply_wild_regular_expression_node_variable);
}

Object The_type_description_of_regular_expression_node_for_wild_characters = UNBOUND;

Object Chain_of_available_regular_expression_node_for_wild_characterss = UNBOUND;

Object Regular_expression_node_for_wild_characters_count = UNBOUND;

/* REGULAR-EXPRESSION-NODE-FOR-WILD-CHARACTERS-STRUCTURE-MEMORY-USAGE */
Object regular_expression_node_for_wild_characters_structure_memory_usage()
{
    Object temp;

    x_note_fn_call(38,102);
    temp = Regular_expression_node_for_wild_characters_count;
    temp = FIXNUM_TIMES(temp,bytes_per_simple_vector(FIX((SI_Long)4L)));
    return VALUES_1(temp);
}

/* OUTSTANDING-REGULAR-EXPRESSION-NODE-FOR-WILD-CHARACTERS-COUNT */
Object outstanding_regular_expression_node_for_wild_characters_count()
{
    Object def_structure_regular_expression_node_for_wild_characters_variable;
    Object count_1;
    SI_Long gensymed_symbol, gensymed_symbol_1;

    x_note_fn_call(38,103);
    gensymed_symbol = IFIX(Regular_expression_node_for_wild_characters_count);
    def_structure_regular_expression_node_for_wild_characters_variable = 
	    Chain_of_available_regular_expression_node_for_wild_characterss;
    count_1 = FIX((SI_Long)0L);
  next_loop:
    if ( 
	    !TRUEP(def_structure_regular_expression_node_for_wild_characters_variable))
	goto end_loop;
    def_structure_regular_expression_node_for_wild_characters_variable = 
	    ISVREF(def_structure_regular_expression_node_for_wild_characters_variable,
	    (SI_Long)0L);
    count_1 = FIXNUM_ADD1(count_1);
    goto next_loop;
  end_loop:
    gensymed_symbol_1 = IFIX(count_1);
    goto end;
    gensymed_symbol_1 = IFIX(Qnil);
  end:;
    return VALUES_1(FIX(gensymed_symbol - gensymed_symbol_1));
}

/* RECLAIM-REGULAR-EXPRESSION-NODE-FOR-WILD-CHARACTERS-1 */
Object reclaim_regular_expression_node_for_wild_characters_1(regular_expression_node_for_wild_characters)
    Object regular_expression_node_for_wild_characters;
{
    Object svref_new_value;

    x_note_fn_call(38,104);
    inline_note_reclaim_cons(regular_expression_node_for_wild_characters,Nil);
    svref_new_value = 
	    Chain_of_available_regular_expression_node_for_wild_characterss;
    SVREF(regular_expression_node_for_wild_characters,FIX((SI_Long)0L)) = 
	    svref_new_value;
    Chain_of_available_regular_expression_node_for_wild_characterss = 
	    regular_expression_node_for_wild_characters;
    return VALUES_1(Nil);
}

/* RECLAIM-STRUCTURE-FOR-REGULAR-EXPRESSION-NODE-FOR-WILD-CHARACTERS */
Object reclaim_structure_for_regular_expression_node_for_wild_characters(regular_expression_node_for_wild_characters)
    Object regular_expression_node_for_wild_characters;
{
    x_note_fn_call(38,105);
    return reclaim_regular_expression_node_for_wild_characters_1(regular_expression_node_for_wild_characters);
}

static Object Qg2_defstruct_structure_name_regular_expression_node_for_wild_characters_g2_struct;  /* g2-defstruct-structure-name::regular-expression-node-for-wild-characters-g2-struct */

/* MAKE-PERMANENT-REGULAR-EXPRESSION-NODE-FOR-WILD-CHARACTERS-STRUCTURE-INTERNAL */
Object make_permanent_regular_expression_node_for_wild_characters_structure_internal()
{
    Object def_structure_regular_expression_node_for_wild_characters_variable;
    Object temp;
    Object defstruct_g2_regular_expression_node_for_wild_characters_variable;
    Object the_array;
    SI_Long gensymed_symbol, gensymed_symbol_1, i, ab_loop_bind_;
    XDeclare_area(1);

    x_note_fn_call(38,106);
    def_structure_regular_expression_node_for_wild_characters_variable = Nil;
    temp = FIXNUM_ADD1(Regular_expression_node_for_wild_characters_count);
    Regular_expression_node_for_wild_characters_count = temp;
    if (PUSH_AREA(Dynamic_area,0)) {
	gensymed_symbol = (SI_Long)1L;
      next_loop:
	defstruct_g2_regular_expression_node_for_wild_characters_variable 
		= Nil;
	gensymed_symbol_1 = (SI_Long)4L;
	the_array = make_array(1,FIX(gensymed_symbol_1));
	i = (SI_Long)0L;
	ab_loop_bind_ = gensymed_symbol_1;
      next_loop_1:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	ISVREF(the_array,i) = Nil;
	i = i + (SI_Long)1L;
	goto next_loop_1;
      end_loop:;
	defstruct_g2_regular_expression_node_for_wild_characters_variable 
		= the_array;
	SVREF(defstruct_g2_regular_expression_node_for_wild_characters_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_regular_expression_node_for_wild_characters_g2_struct;
	SVREF(defstruct_g2_regular_expression_node_for_wild_characters_variable,
		FIX((SI_Long)1L)) = Nil;
	SVREF(defstruct_g2_regular_expression_node_for_wild_characters_variable,
		FIX((SI_Long)2L)) = Nil;
	SVREF(defstruct_g2_regular_expression_node_for_wild_characters_variable,
		FIX((SI_Long)3L)) = Nil;
	def_structure_regular_expression_node_for_wild_characters_variable 
		= 
		defstruct_g2_regular_expression_node_for_wild_characters_variable;
	SVREF(def_structure_regular_expression_node_for_wild_characters_variable,
		FIX((SI_Long)2L)) = Nil;
	SVREF(def_structure_regular_expression_node_for_wild_characters_variable,
		FIX((SI_Long)3L)) = Nil;
	if (gensymed_symbol >= (SI_Long)1L)
	    goto end_loop_1;
	temp = Chain_of_available_regular_expression_node_for_wild_characterss;
	SVREF(def_structure_regular_expression_node_for_wild_characters_variable,
		FIX((SI_Long)0L)) = temp;
	Chain_of_available_regular_expression_node_for_wild_characterss = 
		def_structure_regular_expression_node_for_wild_characters_variable;
	gensymed_symbol = gensymed_symbol + (SI_Long)1L;
	goto next_loop;
      end_loop_1:;
    }
    POP_AREA(0);
    return VALUES_1(def_structure_regular_expression_node_for_wild_characters_variable);
}

/* MAKE-REGULAR-EXPRESSION-NODE-FOR-WILD-CHARACTERS-1 */
Object make_regular_expression_node_for_wild_characters_1()
{
    Object def_structure_regular_expression_node_for_wild_characters_variable;

    x_note_fn_call(38,107);
    def_structure_regular_expression_node_for_wild_characters_variable = 
	    Chain_of_available_regular_expression_node_for_wild_characterss;
    if (def_structure_regular_expression_node_for_wild_characters_variable) {
	Chain_of_available_regular_expression_node_for_wild_characterss = 
		ISVREF(def_structure_regular_expression_node_for_wild_characters_variable,
		(SI_Long)0L);
	SVREF(def_structure_regular_expression_node_for_wild_characters_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_regular_expression_node_for_wild_characters_g2_struct;
    }
    else
	def_structure_regular_expression_node_for_wild_characters_variable 
		= 
		make_permanent_regular_expression_node_for_wild_characters_structure_internal();
    inline_note_allocate_cons(def_structure_regular_expression_node_for_wild_characters_variable,
	    Nil);
    SVREF(def_structure_regular_expression_node_for_wild_characters_variable,
	    FIX((SI_Long)1L)) = Nil;
    return VALUES_1(def_structure_regular_expression_node_for_wild_characters_variable);
}

Object The_type_description_of_regular_expression_node_for_set_of_characters = UNBOUND;

Object Chain_of_available_regular_expression_node_for_set_of_characterss = UNBOUND;

Object Regular_expression_node_for_set_of_characters_count = UNBOUND;

/* REGULAR-EXPRESSION-NODE-FOR-SET-OF-CHARACTERS-STRUCTURE-MEMORY-USAGE */
Object regular_expression_node_for_set_of_characters_structure_memory_usage()
{
    Object temp;

    x_note_fn_call(38,108);
    temp = Regular_expression_node_for_set_of_characters_count;
    temp = FIXNUM_TIMES(temp,bytes_per_simple_vector(FIX((SI_Long)6L)));
    return VALUES_1(temp);
}

/* OUTSTANDING-REGULAR-EXPRESSION-NODE-FOR-SET-OF-CHARACTERS-COUNT */
Object outstanding_regular_expression_node_for_set_of_characters_count()
{
    Object def_structure_regular_expression_node_for_set_of_characters_variable;
    Object count_1;
    SI_Long gensymed_symbol, gensymed_symbol_1;

    x_note_fn_call(38,109);
    gensymed_symbol = 
	    IFIX(Regular_expression_node_for_set_of_characters_count);
    def_structure_regular_expression_node_for_set_of_characters_variable = 
	    Chain_of_available_regular_expression_node_for_set_of_characterss;
    count_1 = FIX((SI_Long)0L);
  next_loop:
    if ( 
	    !TRUEP(def_structure_regular_expression_node_for_set_of_characters_variable))
	goto end_loop;
    def_structure_regular_expression_node_for_set_of_characters_variable = 
	    ISVREF(def_structure_regular_expression_node_for_set_of_characters_variable,
	    (SI_Long)0L);
    count_1 = FIXNUM_ADD1(count_1);
    goto next_loop;
  end_loop:
    gensymed_symbol_1 = IFIX(count_1);
    goto end;
    gensymed_symbol_1 = IFIX(Qnil);
  end:;
    return VALUES_1(FIX(gensymed_symbol - gensymed_symbol_1));
}

/* RECLAIM-REGULAR-EXPRESSION-NODE-FOR-SET-OF-CHARACTERS-1 */
Object reclaim_regular_expression_node_for_set_of_characters_1(regular_expression_node_for_set_of_characters)
    Object regular_expression_node_for_set_of_characters;
{
    Object svref_new_value;

    x_note_fn_call(38,110);
    inline_note_reclaim_cons(regular_expression_node_for_set_of_characters,
	    Nil);
    svref_new_value = 
	    Chain_of_available_regular_expression_node_for_set_of_characterss;
    SVREF(regular_expression_node_for_set_of_characters,FIX((SI_Long)0L)) 
	    = svref_new_value;
    Chain_of_available_regular_expression_node_for_set_of_characterss = 
	    regular_expression_node_for_set_of_characters;
    return VALUES_1(Nil);
}

/* RECLAIM-STRUCTURE-FOR-REGULAR-EXPRESSION-NODE-FOR-SET-OF-CHARACTERS */
Object reclaim_structure_for_regular_expression_node_for_set_of_characters(regular_expression_node_for_set_of_characters)
    Object regular_expression_node_for_set_of_characters;
{
    x_note_fn_call(38,111);
    return reclaim_regular_expression_node_for_set_of_characters_1(regular_expression_node_for_set_of_characters);
}

static Object Qg2_defstruct_structure_name_regular_expression_node_for_set_of_characters_g2_struct;  /* g2-defstruct-structure-name::regular-expression-node-for-set-of-characters-g2-struct */

/* MAKE-PERMANENT-REGULAR-EXPRESSION-NODE-FOR-SET-OF-CHARACTERS-STRUCTURE-INTERNAL */
Object make_permanent_regular_expression_node_for_set_of_characters_structure_internal()
{
    Object def_structure_regular_expression_node_for_set_of_characters_variable;
    Object temp;
    Object defstruct_g2_regular_expression_node_for_set_of_characters_variable;
    Object the_array;
    SI_Long gensymed_symbol, gensymed_symbol_1, i, ab_loop_bind_;
    XDeclare_area(1);

    x_note_fn_call(38,112);
    def_structure_regular_expression_node_for_set_of_characters_variable = Nil;
    temp = FIXNUM_ADD1(Regular_expression_node_for_set_of_characters_count);
    Regular_expression_node_for_set_of_characters_count = temp;
    if (PUSH_AREA(Dynamic_area,0)) {
	gensymed_symbol = (SI_Long)1L;
      next_loop:
	defstruct_g2_regular_expression_node_for_set_of_characters_variable 
		= Nil;
	gensymed_symbol_1 = (SI_Long)6L;
	the_array = make_array(1,FIX(gensymed_symbol_1));
	i = (SI_Long)0L;
	ab_loop_bind_ = gensymed_symbol_1;
      next_loop_1:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	ISVREF(the_array,i) = Nil;
	i = i + (SI_Long)1L;
	goto next_loop_1;
      end_loop:;
	defstruct_g2_regular_expression_node_for_set_of_characters_variable 
		= the_array;
	SVREF(defstruct_g2_regular_expression_node_for_set_of_characters_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_regular_expression_node_for_set_of_characters_g2_struct;
	SVREF(defstruct_g2_regular_expression_node_for_set_of_characters_variable,
		FIX((SI_Long)1L)) = Nil;
	SVREF(defstruct_g2_regular_expression_node_for_set_of_characters_variable,
		FIX((SI_Long)2L)) = Nil;
	SVREF(defstruct_g2_regular_expression_node_for_set_of_characters_variable,
		FIX((SI_Long)3L)) = Nil;
	def_structure_regular_expression_node_for_set_of_characters_variable 
		= 
		defstruct_g2_regular_expression_node_for_set_of_characters_variable;
	SVREF(def_structure_regular_expression_node_for_set_of_characters_variable,
		FIX((SI_Long)2L)) = Nil;
	SVREF(def_structure_regular_expression_node_for_set_of_characters_variable,
		FIX((SI_Long)3L)) = Nil;
	if (gensymed_symbol >= (SI_Long)1L)
	    goto end_loop_1;
	temp = 
		Chain_of_available_regular_expression_node_for_set_of_characterss;
	SVREF(def_structure_regular_expression_node_for_set_of_characters_variable,
		FIX((SI_Long)0L)) = temp;
	Chain_of_available_regular_expression_node_for_set_of_characterss 
		= 
		def_structure_regular_expression_node_for_set_of_characters_variable;
	gensymed_symbol = gensymed_symbol + (SI_Long)1L;
	goto next_loop;
      end_loop_1:;
    }
    POP_AREA(0);
    return VALUES_1(def_structure_regular_expression_node_for_set_of_characters_variable);
}

/* MAKE-REGULAR-EXPRESSION-NODE-FOR-SET-OF-CHARACTERS-1 */
Object make_regular_expression_node_for_set_of_characters_1()
{
    Object def_structure_regular_expression_node_for_set_of_characters_variable;

    x_note_fn_call(38,113);
    def_structure_regular_expression_node_for_set_of_characters_variable = 
	    Chain_of_available_regular_expression_node_for_set_of_characterss;
    if (def_structure_regular_expression_node_for_set_of_characters_variable) {
	Chain_of_available_regular_expression_node_for_set_of_characterss 
		= 
		ISVREF(def_structure_regular_expression_node_for_set_of_characters_variable,
		(SI_Long)0L);
	SVREF(def_structure_regular_expression_node_for_set_of_characters_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_regular_expression_node_for_set_of_characters_g2_struct;
    }
    else
	def_structure_regular_expression_node_for_set_of_characters_variable 
		= 
		make_permanent_regular_expression_node_for_set_of_characters_structure_internal();
    inline_note_allocate_cons(def_structure_regular_expression_node_for_set_of_characters_variable,
	    Nil);
    SVREF(def_structure_regular_expression_node_for_set_of_characters_variable,
	    FIX((SI_Long)1L)) = Nil;
    SVREF(def_structure_regular_expression_node_for_set_of_characters_variable,
	    FIX((SI_Long)4L)) = Nil;
    SVREF(def_structure_regular_expression_node_for_set_of_characters_variable,
	    FIX((SI_Long)5L)) = Nil;
    return VALUES_1(def_structure_regular_expression_node_for_set_of_characters_variable);
}

Object The_type_description_of_regular_expression_node_for_subexpression = UNBOUND;

Object Chain_of_available_regular_expression_node_for_subexpressions = UNBOUND;

Object Regular_expression_node_for_subexpression_count = UNBOUND;

/* REGULAR-EXPRESSION-NODE-FOR-SUBEXPRESSION-STRUCTURE-MEMORY-USAGE */
Object regular_expression_node_for_subexpression_structure_memory_usage()
{
    Object temp;

    x_note_fn_call(38,114);
    temp = Regular_expression_node_for_subexpression_count;
    temp = FIXNUM_TIMES(temp,bytes_per_simple_vector(FIX((SI_Long)8L)));
    return VALUES_1(temp);
}

/* OUTSTANDING-REGULAR-EXPRESSION-NODE-FOR-SUBEXPRESSION-COUNT */
Object outstanding_regular_expression_node_for_subexpression_count()
{
    Object def_structure_regular_expression_node_for_subexpression_variable;
    Object count_1;
    SI_Long gensymed_symbol, gensymed_symbol_1;

    x_note_fn_call(38,115);
    gensymed_symbol = IFIX(Regular_expression_node_for_subexpression_count);
    def_structure_regular_expression_node_for_subexpression_variable = 
	    Chain_of_available_regular_expression_node_for_subexpressions;
    count_1 = FIX((SI_Long)0L);
  next_loop:
    if ( 
	    !TRUEP(def_structure_regular_expression_node_for_subexpression_variable))
	goto end_loop;
    def_structure_regular_expression_node_for_subexpression_variable = 
	    ISVREF(def_structure_regular_expression_node_for_subexpression_variable,
	    (SI_Long)0L);
    count_1 = FIXNUM_ADD1(count_1);
    goto next_loop;
  end_loop:
    gensymed_symbol_1 = IFIX(count_1);
    goto end;
    gensymed_symbol_1 = IFIX(Qnil);
  end:;
    return VALUES_1(FIX(gensymed_symbol - gensymed_symbol_1));
}

/* RECLAIM-REGULAR-EXPRESSION-NODE-FOR-SUBEXPRESSION-1 */
Object reclaim_regular_expression_node_for_subexpression_1(regular_expression_node_for_subexpression)
    Object regular_expression_node_for_subexpression;
{
    Object svref_new_value;

    x_note_fn_call(38,116);
    inline_note_reclaim_cons(regular_expression_node_for_subexpression,Nil);
    svref_new_value = 
	    Chain_of_available_regular_expression_node_for_subexpressions;
    SVREF(regular_expression_node_for_subexpression,FIX((SI_Long)0L)) = 
	    svref_new_value;
    Chain_of_available_regular_expression_node_for_subexpressions = 
	    regular_expression_node_for_subexpression;
    return VALUES_1(Nil);
}

/* RECLAIM-STRUCTURE-FOR-REGULAR-EXPRESSION-NODE-FOR-SUBEXPRESSION */
Object reclaim_structure_for_regular_expression_node_for_subexpression(regular_expression_node_for_subexpression)
    Object regular_expression_node_for_subexpression;
{
    x_note_fn_call(38,117);
    return reclaim_regular_expression_node_for_subexpression_1(regular_expression_node_for_subexpression);
}

static Object Qg2_defstruct_structure_name_regular_expression_node_for_subexpression_g2_struct;  /* g2-defstruct-structure-name::regular-expression-node-for-subexpression-g2-struct */

/* MAKE-PERMANENT-REGULAR-EXPRESSION-NODE-FOR-SUBEXPRESSION-STRUCTURE-INTERNAL */
Object make_permanent_regular_expression_node_for_subexpression_structure_internal()
{
    Object def_structure_regular_expression_node_for_subexpression_variable;
    Object temp;
    Object defstruct_g2_regular_expression_node_for_subexpression_variable;
    Object the_array;
    SI_Long gensymed_symbol, gensymed_symbol_1, i, ab_loop_bind_;
    XDeclare_area(1);

    x_note_fn_call(38,118);
    def_structure_regular_expression_node_for_subexpression_variable = Nil;
    temp = FIXNUM_ADD1(Regular_expression_node_for_subexpression_count);
    Regular_expression_node_for_subexpression_count = temp;
    if (PUSH_AREA(Dynamic_area,0)) {
	gensymed_symbol = (SI_Long)1L;
      next_loop:
	defstruct_g2_regular_expression_node_for_subexpression_variable = Nil;
	gensymed_symbol_1 = (SI_Long)8L;
	the_array = make_array(1,FIX(gensymed_symbol_1));
	i = (SI_Long)0L;
	ab_loop_bind_ = gensymed_symbol_1;
      next_loop_1:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	ISVREF(the_array,i) = Nil;
	i = i + (SI_Long)1L;
	goto next_loop_1;
      end_loop:;
	defstruct_g2_regular_expression_node_for_subexpression_variable = 
		the_array;
	SVREF(defstruct_g2_regular_expression_node_for_subexpression_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_regular_expression_node_for_subexpression_g2_struct;
	SVREF(defstruct_g2_regular_expression_node_for_subexpression_variable,
		FIX((SI_Long)1L)) = Nil;
	SVREF(defstruct_g2_regular_expression_node_for_subexpression_variable,
		FIX((SI_Long)2L)) = Nil;
	SVREF(defstruct_g2_regular_expression_node_for_subexpression_variable,
		FIX((SI_Long)3L)) = Nil;
	def_structure_regular_expression_node_for_subexpression_variable = 
		defstruct_g2_regular_expression_node_for_subexpression_variable;
	SVREF(def_structure_regular_expression_node_for_subexpression_variable,
		FIX((SI_Long)2L)) = Nil;
	SVREF(def_structure_regular_expression_node_for_subexpression_variable,
		FIX((SI_Long)3L)) = Nil;
	if (gensymed_symbol >= (SI_Long)1L)
	    goto end_loop_1;
	temp = Chain_of_available_regular_expression_node_for_subexpressions;
	SVREF(def_structure_regular_expression_node_for_subexpression_variable,
		FIX((SI_Long)0L)) = temp;
	Chain_of_available_regular_expression_node_for_subexpressions = 
		def_structure_regular_expression_node_for_subexpression_variable;
	gensymed_symbol = gensymed_symbol + (SI_Long)1L;
	goto next_loop;
      end_loop_1:;
    }
    POP_AREA(0);
    return VALUES_1(def_structure_regular_expression_node_for_subexpression_variable);
}

/* MAKE-REGULAR-EXPRESSION-NODE-FOR-SUBEXPRESSION-1 */
Object make_regular_expression_node_for_subexpression_1(compiled_regular_subexpression)
    Object compiled_regular_subexpression;
{
    Object def_structure_regular_expression_node_for_subexpression_variable;

    x_note_fn_call(38,119);
    def_structure_regular_expression_node_for_subexpression_variable = 
	    Chain_of_available_regular_expression_node_for_subexpressions;
    if (def_structure_regular_expression_node_for_subexpression_variable) {
	Chain_of_available_regular_expression_node_for_subexpressions = 
		ISVREF(def_structure_regular_expression_node_for_subexpression_variable,
		(SI_Long)0L);
	SVREF(def_structure_regular_expression_node_for_subexpression_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_regular_expression_node_for_subexpression_g2_struct;
    }
    else
	def_structure_regular_expression_node_for_subexpression_variable = 
		make_permanent_regular_expression_node_for_subexpression_structure_internal();
    inline_note_allocate_cons(def_structure_regular_expression_node_for_subexpression_variable,
	    Nil);
    SVREF(def_structure_regular_expression_node_for_subexpression_variable,
	    FIX((SI_Long)4L)) = compiled_regular_subexpression;
    SVREF(def_structure_regular_expression_node_for_subexpression_variable,
	    FIX((SI_Long)1L)) = Nil;
    SVREF(def_structure_regular_expression_node_for_subexpression_variable,
	    FIX((SI_Long)5L)) = Nil;
    SVREF(def_structure_regular_expression_node_for_subexpression_variable,
	    FIX((SI_Long)6L)) = Nil;
    SVREF(def_structure_regular_expression_node_for_subexpression_variable,
	    FIX((SI_Long)7L)) = Nil;
    return VALUES_1(def_structure_regular_expression_node_for_subexpression_variable);
}

Object First_subexpression_node_for_reclaiming_qm = UNBOUND;

/* RECLAIM-REGULAR-EXPRESSION-NODE */
Object reclaim_regular_expression_node(node)
    Object node;
{
    Object character_set_qm, regular_subexpression_qm, backtracking_nodes_qm;

    x_note_fn_call(38,120);
    if (SIMPLE_VECTOR_P(node) && EQ(ISVREF(node,(SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_single_character_g2_struct))
	return reclaim_regular_expression_node_for_single_character_1(node);
    else if (SIMPLE_VECTOR_P(node) && EQ(ISVREF(node,(SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_single_wild_character_g2_struct))
	return reclaim_regular_expression_node_for_single_wild_character_1(node);
    else if (SIMPLE_VECTOR_P(node) && EQ(ISVREF(node,(SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_wild_characters_g2_struct))
	return reclaim_regular_expression_node_for_wild_characters_1(node);
    else if (SIMPLE_VECTOR_P(node) && EQ(ISVREF(node,(SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_set_of_characters_g2_struct)) 
		{
	character_set_qm = ISVREF(node,(SI_Long)4L);
	if (character_set_qm)
	    reclaim_gensym_list_1(character_set_qm);
	return reclaim_regular_expression_node_for_set_of_characters_1(node);
    }
    else if (SIMPLE_VECTOR_P(node) && EQ(ISVREF(node,(SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_subexpression_g2_struct)) 
		{
	regular_subexpression_qm = ISVREF(node,(SI_Long)4L);
	if (regular_subexpression_qm)
	    reclaim_regular_expression_node(regular_subexpression_qm);
	backtracking_nodes_qm = ISVREF(node,(SI_Long)5L);
	if (backtracking_nodes_qm)
	    reclaim_gensym_list_1(backtracking_nodes_qm);
	return VALUES_1(SVREF(node,FIX((SI_Long)6L)) = Nil);
    }
    else
	return VALUES_1(Qnil);
}

/* RECLAIM-COMPILED-REGULAR-EXPRESSION */
Object reclaim_compiled_regular_expression(compiled_expression)
    Object compiled_expression;
{
    Object this_node_qm;

    x_note_fn_call(38,121);
    this_node_qm = compiled_expression;
  next_loop:
    if ( !TRUEP(this_node_qm))
	goto end_loop;
    reclaim_regular_expression_node(this_node_qm);
    this_node_qm = ISVREF(this_node_qm,(SI_Long)1L);
    goto next_loop;
  end_loop:
    return VALUES_1(Qnil);
}

Object Single_escape_character_for_gensym_filenames = UNBOUND;

static Object list_constant;       /* # */

/* WILD-REGULAR-EXPRESSION-STRING-P */
Object wild_regular_expression_string_p(possibly_wild_string)
    Object possibly_wild_string;
{
    Object this_char, escape_mode_p;
    SI_Long index_1, ab_loop_bind_;

    x_note_fn_call(38,122);
    index_1 = (SI_Long)0L;
    ab_loop_bind_ = IFIX(lengthw(possibly_wild_string));
    this_char = Nil;
    escape_mode_p = Nil;
  next_loop:
    if (index_1 >= ab_loop_bind_)
	goto end_loop;
    this_char = FIX(UBYTE_16_ISAREF_1(possibly_wild_string,index_1));
    if (wide_character_member(this_char,list_constant)) {
	if (escape_mode_p)
	    escape_mode_p = Nil;
	else
	    return VALUES_1(T);
    }
    else if (FIXNUM_EQ(Single_escape_character_for_gensym_filenames,
		this_char)) {
	if (escape_mode_p)
	    escape_mode_p = Nil;
	else
	    escape_mode_p = T;
    }
    else
	escape_mode_p = Nil;
    index_1 = index_1 + (SI_Long)1L;
    goto next_loop;
  end_loop:
    return VALUES_1(Qnil);
}

/* COMPILE-REGULAR-EXPRESSION */
Object compile_regular_expression(expression_string)
    Object expression_string;
{
    Object expression_length;

    x_note_fn_call(38,123);
    expression_length = lengthw(expression_string);
    return compile_regular_expression_1(expression_string,FIX((SI_Long)0L),
	    expression_length);
}

/* COMPILE-REGULAR-EXPRESSION-1 */
Object compile_regular_expression_1(expression_string,start_index,
	    expression_length)
    Object expression_string, start_index, expression_length;
{
    Object this_char, first_node_qm, previous_node_qm;
    Object gathering_set_of_characters_p, single_character_escape_mode_p, temp;
    Object gensym_push_modify_macro_arg, car_1, cdr_1, svref_new_value;
    Object new_node;
    SI_Long current_index, ab_loop_bind_;

    x_note_fn_call(38,124);
    current_index = IFIX(start_index);
    ab_loop_bind_ = IFIX(expression_length);
    this_char = Nil;
    first_node_qm = Nil;
    previous_node_qm = Nil;
    gathering_set_of_characters_p = Nil;
    single_character_escape_mode_p = Nil;
  next_loop:
    if (current_index >= ab_loop_bind_)
	goto end_loop;
    this_char = FIX(UBYTE_16_ISAREF_1(expression_string,current_index));
    temp = this_char;
    if ( !(FIXNUM_LE(FIX((SI_Long)-128L),temp) && FIXNUM_LE(temp,
	    FIX((SI_Long)127L)))) {
	if (gathering_set_of_characters_p) {
	    single_character_escape_mode_p = Nil;
	    gensym_push_modify_macro_arg = this_char;
	    car_1 = gensym_push_modify_macro_arg;
	    cdr_1 = ISVREF(previous_node_qm,(SI_Long)4L);
	    svref_new_value = gensym_cons_1(car_1,cdr_1);
	    SVREF(previous_node_qm,FIX((SI_Long)4L)) = svref_new_value;
	}
	else {
	    single_character_escape_mode_p = Nil;
	    new_node = 
		    make_regular_expression_node_for_single_character_1(this_char);
	    if (previous_node_qm)
		SVREF(previous_node_qm,FIX((SI_Long)1L)) = new_node;
	    previous_node_qm = new_node;
	}
    }
    else
	switch (INTEGER_TO_CHAR(temp)) {
	  case 42:
	    if (gathering_set_of_characters_p) {
		single_character_escape_mode_p = Nil;
		gensym_push_modify_macro_arg = this_char;
		car_1 = gensym_push_modify_macro_arg;
		cdr_1 = ISVREF(previous_node_qm,(SI_Long)4L);
		svref_new_value = gensym_cons_1(car_1,cdr_1);
		SVREF(previous_node_qm,FIX((SI_Long)4L)) = svref_new_value;
	    }
	    else if (single_character_escape_mode_p) {
		single_character_escape_mode_p = Nil;
		new_node = 
			make_regular_expression_node_for_single_character_1(this_char);
		if (previous_node_qm)
		    SVREF(previous_node_qm,FIX((SI_Long)1L)) = new_node;
		previous_node_qm = new_node;
	    }
	    else if (SIMPLE_VECTOR_P(previous_node_qm) && 
		    EQ(ISVREF(previous_node_qm,(SI_Long)0L),
		    Qg2_defstruct_structure_name_regular_expression_node_for_wild_characters_g2_struct));
	    else if (SIMPLE_VECTOR_P(previous_node_qm) && 
		    EQ(ISVREF(previous_node_qm,(SI_Long)0L),
		    Qg2_defstruct_structure_name_regular_expression_node_for_set_of_characters_g2_struct) 
		    &&  !TRUEP(ISVREF(previous_node_qm,(SI_Long)5L)))
		SVREF(previous_node_qm,FIX((SI_Long)5L)) = T;
	    else {
		new_node = 
			make_regular_expression_node_for_wild_characters_1();
		if (previous_node_qm)
		    SVREF(previous_node_qm,FIX((SI_Long)1L)) = new_node;
		previous_node_qm = new_node;
	    }
	    break;
	  case 63:
	    if (gathering_set_of_characters_p) {
		single_character_escape_mode_p = Nil;
		gensym_push_modify_macro_arg = this_char;
		car_1 = gensym_push_modify_macro_arg;
		cdr_1 = ISVREF(previous_node_qm,(SI_Long)4L);
		svref_new_value = gensym_cons_1(car_1,cdr_1);
		SVREF(previous_node_qm,FIX((SI_Long)4L)) = svref_new_value;
	    }
	    else if (single_character_escape_mode_p) {
		single_character_escape_mode_p = Nil;
		new_node = 
			make_regular_expression_node_for_single_character_1(this_char);
		if (previous_node_qm)
		    SVREF(previous_node_qm,FIX((SI_Long)1L)) = new_node;
		previous_node_qm = new_node;
	    }
	    else {
		new_node = 
			make_regular_expression_node_for_single_wild_character_1();
		if (previous_node_qm)
		    SVREF(previous_node_qm,FIX((SI_Long)1L)) = new_node;
		previous_node_qm = new_node;
	    }
	    break;
	  case 123:
	    if (gathering_set_of_characters_p) {
		single_character_escape_mode_p = Nil;
		gensym_push_modify_macro_arg = this_char;
		car_1 = gensym_push_modify_macro_arg;
		cdr_1 = ISVREF(previous_node_qm,(SI_Long)4L);
		svref_new_value = gensym_cons_1(car_1,cdr_1);
		SVREF(previous_node_qm,FIX((SI_Long)4L)) = svref_new_value;
	    }
	    else if (single_character_escape_mode_p) {
		single_character_escape_mode_p = Nil;
		new_node = 
			make_regular_expression_node_for_single_character_1(this_char);
		if (previous_node_qm)
		    SVREF(previous_node_qm,FIX((SI_Long)1L)) = new_node;
		previous_node_qm = new_node;
	    }
	    else {
		new_node = 
			make_regular_expression_node_for_set_of_characters_1();
		if (previous_node_qm)
		    SVREF(previous_node_qm,FIX((SI_Long)1L)) = new_node;
		previous_node_qm = new_node;
		gathering_set_of_characters_p = T;
	    }
	    break;
	  case 125:
	    if (gathering_set_of_characters_p && 
		    single_character_escape_mode_p) {
		single_character_escape_mode_p = Nil;
		gensym_push_modify_macro_arg = this_char;
		car_1 = gensym_push_modify_macro_arg;
		cdr_1 = ISVREF(previous_node_qm,(SI_Long)4L);
		svref_new_value = gensym_cons_1(car_1,cdr_1);
		SVREF(previous_node_qm,FIX((SI_Long)4L)) = svref_new_value;
	    }
	    else if (gathering_set_of_characters_p)
		gathering_set_of_characters_p = Nil;
	    else {
		single_character_escape_mode_p = Nil;
		new_node = 
			make_regular_expression_node_for_single_character_1(this_char);
		if (previous_node_qm)
		    SVREF(previous_node_qm,FIX((SI_Long)1L)) = new_node;
		previous_node_qm = new_node;
	    }
	    break;
	  case 33:
	    if (gathering_set_of_characters_p && 
		    single_character_escape_mode_p) {
		single_character_escape_mode_p = Nil;
		gensym_push_modify_macro_arg = this_char;
		car_1 = gensym_push_modify_macro_arg;
		cdr_1 = ISVREF(previous_node_qm,(SI_Long)4L);
		svref_new_value = gensym_cons_1(car_1,cdr_1);
		SVREF(previous_node_qm,FIX((SI_Long)4L)) = svref_new_value;
	    }
	    else if (single_character_escape_mode_p) {
		single_character_escape_mode_p = Nil;
		new_node = 
			make_regular_expression_node_for_single_character_1(this_char);
		if (previous_node_qm)
		    SVREF(previous_node_qm,FIX((SI_Long)1L)) = new_node;
		previous_node_qm = new_node;
	    }
	    else
		single_character_escape_mode_p = T;
	    break;
	  default:
	    if (gathering_set_of_characters_p) {
		single_character_escape_mode_p = Nil;
		gensym_push_modify_macro_arg = this_char;
		car_1 = gensym_push_modify_macro_arg;
		cdr_1 = ISVREF(previous_node_qm,(SI_Long)4L);
		svref_new_value = gensym_cons_1(car_1,cdr_1);
		SVREF(previous_node_qm,FIX((SI_Long)4L)) = svref_new_value;
	    }
	    else {
		single_character_escape_mode_p = Nil;
		new_node = 
			make_regular_expression_node_for_single_character_1(this_char);
		if (previous_node_qm)
		    SVREF(previous_node_qm,FIX((SI_Long)1L)) = new_node;
		previous_node_qm = new_node;
	    }
	    break;
	}
    if ( !TRUEP(first_node_qm)) {
	if (previous_node_qm)
	    first_node_qm = previous_node_qm;
    }
    current_index = current_index + (SI_Long)1L;
    goto next_loop;
  end_loop:
    return VALUES_2(first_node_qm,Nil);
    return VALUES_1(Qnil);
}

/* REGULAR-EXPRESSION-NODE-MATCHES-SINGLE-CHAR-P */
Object regular_expression_node_matches_single_char_p(node,char_1)
    Object node, char_1;
{
    Object temp, subexpression_qm;

    x_note_fn_call(38,125);
    if (SIMPLE_VECTOR_P(node) && EQ(ISVREF(node,(SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_single_character_g2_struct)) 
		{
	temp = ISVREF(node,(SI_Long)2L);
	return VALUES_1(EQL(char_1,temp) ? T : Nil);
    }
    else if (SIMPLE_VECTOR_P(node) && EQ(ISVREF(node,(SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_single_wild_character_g2_struct))
	return VALUES_1(T);
    else if (SIMPLE_VECTOR_P(node) && EQ(ISVREF(node,(SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_wild_characters_g2_struct))
	return VALUES_1(T);
    else if (SIMPLE_VECTOR_P(node) && EQ(ISVREF(node,(SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_set_of_characters_g2_struct))
	return wide_character_member(char_1,ISVREF(node,(SI_Long)4L));
    else if (SIMPLE_VECTOR_P(node) && EQ(ISVREF(node,(SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_subexpression_g2_struct)) 
		{
	subexpression_qm = ISVREF(node,(SI_Long)4L);
	if (subexpression_qm)
	    return regular_expression_node_matches_single_char_p(subexpression_qm,
		    char_1);
	else
	    return VALUES_1(Nil);
    }
    else
	return VALUES_1(Qnil);
}

/* COMPILED-REGULAR-EXPRESSION-MATCHES-ZERO-CHARACTERS-P */
Object compiled_regular_expression_matches_zero_characters_p(compiled_expression)
    Object compiled_expression;
{
    Object possibly_wild_node;

    x_note_fn_call(38,126);
    possibly_wild_node = compiled_expression;
  next_loop:
    if ( !TRUEP(possibly_wild_node))
	goto end_loop;
    if ( !(SIMPLE_VECTOR_P(possibly_wild_node) && 
	    EQ(ISVREF(possibly_wild_node,(SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_wild_characters_g2_struct) 
	    || SIMPLE_VECTOR_P(possibly_wild_node) && 
	    EQ(ISVREF(possibly_wild_node,(SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_set_of_characters_g2_struct) 
	    && ISVREF(possibly_wild_node,(SI_Long)5L) || 
	    SIMPLE_VECTOR_P(possibly_wild_node) && 
	    EQ(ISVREF(possibly_wild_node,(SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_subexpression_g2_struct) 
	    && ISVREF(possibly_wild_node,(SI_Long)7L)))
	return VALUES_1(Nil);
    possibly_wild_node = ISVREF(possibly_wild_node,(SI_Long)1L);
    goto next_loop;
  end_loop:
    return VALUES_1(T);
    return VALUES_1(Qnil);
}

static Object array_constant;      /* # */

/* MATCH-REGULAR-EXPRESSION */
Object match_regular_expression(compiled_expression,string_to_match)
    Object compiled_expression, string_to_match;
{
    Object final_index_in_string_to_match;
    Object first_subexpression_node_for_reclaiming_qm;
    Object index_of_first_non_matching_char_qm, backtracking_nodes_qm;
    Object this_subexpression_node_qm, backtracking_subnodes_qm, temp;
    Declare_special(1);
    Object result;

    x_note_fn_call(38,127);
    if (string_eq_w(string_to_match,array_constant) || 
	    IFIX(lengthw(string_to_match)) > (SI_Long)0L && 
	    UBYTE_16_ISAREF_1(string_to_match,(SI_Long)0L) == (SI_Long)0L)
	return compiled_regular_expression_matches_zero_characters_p(compiled_expression);
    final_index_in_string_to_match = 
	    FIXNUM_SUB1(position_in_wide_string(FIX((SI_Long)0L),
	    string_to_match));
    first_subexpression_node_for_reclaiming_qm = Nil;
    PUSH_SPECIAL(First_subexpression_node_for_reclaiming_qm,first_subexpression_node_for_reclaiming_qm,
	    0);
      result = match_regular_expression_given_backtracking_nodes(compiled_expression,
	      string_to_match,final_index_in_string_to_match,Nil);
      MVS_2(result,index_of_first_non_matching_char_qm,backtracking_nodes_qm);
      if (First_subexpression_node_for_reclaiming_qm) {
	  this_subexpression_node_qm = 
		  First_subexpression_node_for_reclaiming_qm;
	next_loop:
	  if ( !TRUEP(this_subexpression_node_qm))
	      goto end_loop;
	  backtracking_subnodes_qm = ISVREF(this_subexpression_node_qm,
		  (SI_Long)5L);
	  if (backtracking_subnodes_qm) {
	      reclaim_gensym_list_1(backtracking_subnodes_qm);
	      SVREF(this_subexpression_node_qm,FIX((SI_Long)5L)) = Nil;
	  }
	  temp = ISVREF(this_subexpression_node_qm,(SI_Long)6L);
	  SVREF(this_subexpression_node_qm,FIX((SI_Long)6L)) = Nil;
	  this_subexpression_node_qm = temp;
	  goto next_loop;
	end_loop:;
      }
      if (backtracking_nodes_qm)
	  reclaim_gensym_list_1(backtracking_nodes_qm);
      if (index_of_first_non_matching_char_qm)
	  result = VALUES_1(T);
      else
	  result = VALUES_1(Nil);
    POP_SPECIAL();
    return result;
}

/* MINIMUM-NUMBER-OF-CHARACTERS-REQUIRED-FOR-MATCH */
Object minimum_number_of_characters_required_for_match(compiled_regular_expression)
    Object compiled_regular_expression;
{
    Object this_node_qm, ab_loopvar_, temp, subexpression_qm;

    x_note_fn_call(38,128);
    this_node_qm = compiled_regular_expression;
    ab_loopvar_ = FIX((SI_Long)0L);
  next_loop:
    if ( !TRUEP(this_node_qm))
	goto end_loop;
    if (SIMPLE_VECTOR_P(this_node_qm) && EQ(ISVREF(this_node_qm,
	    (SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_single_character_g2_struct))
	temp = FIX((SI_Long)1L);
    else if (SIMPLE_VECTOR_P(this_node_qm) && EQ(ISVREF(this_node_qm,
	    (SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_single_wild_character_g2_struct))
	temp = FIX((SI_Long)1L);
    else if (SIMPLE_VECTOR_P(this_node_qm) && EQ(ISVREF(this_node_qm,
	    (SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_wild_characters_g2_struct))
	temp = FIX((SI_Long)0L);
    else if (SIMPLE_VECTOR_P(this_node_qm) && EQ(ISVREF(this_node_qm,
	    (SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_set_of_characters_g2_struct))
	temp = ISVREF(this_node_qm,(SI_Long)5L) ? FIX((SI_Long)0L) : 
		FIX((SI_Long)1L);
    else if (SIMPLE_VECTOR_P(this_node_qm) && EQ(ISVREF(this_node_qm,
	    (SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_subexpression_g2_struct)) 
		{
	if (ISVREF(this_node_qm,(SI_Long)7L))
	    temp = FIX((SI_Long)0L);
	else {
	    subexpression_qm = ISVREF(this_node_qm,(SI_Long)4L);
	    temp = subexpression_qm ? 
		    minimum_number_of_characters_required_for_match(subexpression_qm) 
		    : FIX((SI_Long)0L);
	}
    }
    else
	temp = FIX((SI_Long)0L);
    ab_loopvar_ = add(temp,ab_loopvar_);
    this_node_qm = ISVREF(this_node_qm,(SI_Long)1L);
    goto next_loop;
  end_loop:
    return VALUES_1(ab_loopvar_);
    return VALUES_1(Qnil);
}

/* MATCH-REGULAR-EXPRESSION-GIVEN-BACKTRACKING-NODES */
Object match_regular_expression_given_backtracking_nodes(compiled_expression,
	    string_to_match,final_index_in_string_to_match,
	    resumable_wild_character_match_nodes_qm)
    Object compiled_expression, string_to_match;
    Object final_index_in_string_to_match;
    Object resumable_wild_character_match_nodes_qm;
{
    Object current_index, this_char, this_node_qm, need_to_backtrack_p;
    Object match_failed_p, next_node_qm, characters_in_set;
    Object final_index_of_member_of_set_qm, temp, temp_1, resumable_node_qm;
    Object this_match_index, final_match_index, gensym_pop_store, cons_1;
    Object next_cons;
    SI_Long backwards_index, subindex, ab_loop_bind_;

    x_note_fn_call(38,129);
    current_index = FIX((SI_Long)0L);
    this_char = Nil;
    this_node_qm = compiled_expression;
    need_to_backtrack_p = Nil;
    match_failed_p = Nil;
  next_loop:
    this_char = FIX(UBYTE_16_ISAREF_1(string_to_match,IFIX(current_index)));
    if ( !TRUEP(this_node_qm))
	goto end_loop;
    if (SIMPLE_VECTOR_P(this_node_qm) && EQ(ISVREF(this_node_qm,
	    (SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_wild_characters_g2_struct)) 
		{
	next_node_qm = ISVREF(this_node_qm,(SI_Long)1L);
	if (next_node_qm) {
	    backwards_index = IFIX(final_index_in_string_to_match);
	  next_loop_1:
	    if (IFIX(current_index) >= backwards_index || 
		    regular_expression_node_matches_single_char_p(next_node_qm,
		    FIX(UBYTE_16_ISAREF_1(string_to_match,backwards_index))))
		goto end_loop_1;
	    backwards_index = backwards_index - (SI_Long)1L;
	    goto next_loop_1;
	  end_loop_1:
	    if (backwards_index > IFIX(current_index)) {
		ISVREF(this_node_qm,(SI_Long)2L) = FIX(backwards_index);
		SVREF(this_node_qm,FIX((SI_Long)3L)) = current_index;
		resumable_wild_character_match_nodes_qm = 
			gensym_cons_1(this_node_qm,
			resumable_wild_character_match_nodes_qm);
	    }
	    current_index = FIX(backwards_index);
	    this_node_qm = next_node_qm;
	}
	else
	    goto end_loop;
    }
    else if (SIMPLE_VECTOR_P(this_node_qm) && EQ(ISVREF(this_node_qm,
	    (SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_single_wild_character_g2_struct)) 
		{
	this_node_qm = ISVREF(this_node_qm,(SI_Long)1L);
	current_index = add1(current_index);
    }
    else if (SIMPLE_VECTOR_P(this_node_qm) && EQ(ISVREF(this_node_qm,
	    (SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_set_of_characters_g2_struct) 
	    && ISVREF(this_node_qm,(SI_Long)5L)) {
	characters_in_set = ISVREF(this_node_qm,(SI_Long)4L);
	subindex = IFIX(current_index);
	ab_loop_bind_ = IFIX(final_index_in_string_to_match);
      next_loop_2:
	if (subindex > ab_loop_bind_)
	    goto end_loop_2;
	if ( 
		!TRUEP(wide_character_member(FIX(UBYTE_16_ISAREF_1(string_to_match,
		subindex)),characters_in_set))) {
	    final_index_of_member_of_set_qm = FIX(subindex);
	    goto end;
	}
	subindex = subindex + (SI_Long)1L;
	goto next_loop_2;
      end_loop_2:
	final_index_of_member_of_set_qm = Nil;
	goto end;
	final_index_of_member_of_set_qm = Qnil;
      end:;
	next_node_qm = ISVREF(this_node_qm,(SI_Long)1L);
	if (final_index_of_member_of_set_qm) {
	    backwards_index = IFIX(final_index_of_member_of_set_qm);
	  next_loop_3:
	    if (IFIX(current_index) == backwards_index || next_node_qm && 
		    regular_expression_node_matches_single_char_p(next_node_qm,
		    FIX(UBYTE_16_ISAREF_1(string_to_match,backwards_index))))
		goto end_loop_3;
	    backwards_index = backwards_index - (SI_Long)1L;
	    goto next_loop_3;
	  end_loop_3:
	    if (backwards_index > IFIX(current_index)) {
		ISVREF(this_node_qm,(SI_Long)2L) = FIX(backwards_index);
		SVREF(this_node_qm,FIX((SI_Long)3L)) = current_index;
		resumable_wild_character_match_nodes_qm = 
			gensym_cons_1(this_node_qm,
			resumable_wild_character_match_nodes_qm);
	    }
	    this_node_qm = next_node_qm;
	    current_index = FIX(backwards_index);
	}
	else {
	    if (next_node_qm) {
		temp = add1(final_index_in_string_to_match);
		SVREF(this_node_qm,FIX((SI_Long)2L)) = temp;
		SVREF(this_node_qm,FIX((SI_Long)3L)) = current_index;
		resumable_wild_character_match_nodes_qm = 
			gensym_cons_1(this_node_qm,
			resumable_wild_character_match_nodes_qm);
	    }
	    this_node_qm = next_node_qm;
	    current_index = add1(final_index_in_string_to_match);
	}
    }
    else if (SIMPLE_VECTOR_P(this_node_qm) && EQ(ISVREF(this_node_qm,
	    (SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_set_of_characters_g2_struct)) 
		{
	if (wide_character_member(this_char,ISVREF(this_node_qm,
		    (SI_Long)4L))) {
	    this_node_qm = ISVREF(this_node_qm,(SI_Long)1L);
	    current_index = add1(current_index);
	}
	else
	    need_to_backtrack_p = T;
    }
    else if (SIMPLE_VECTOR_P(this_node_qm) && EQ(ISVREF(this_node_qm,
	    (SI_Long)0L),
	    Qg2_defstruct_structure_name_regular_expression_node_for_single_character_g2_struct)) 
		{
	temp_1 = ISVREF(this_node_qm,(SI_Long)2L);
	if (EQL(this_char,temp_1)) {
	    this_node_qm = ISVREF(this_node_qm,(SI_Long)1L);
	    current_index = add1(current_index);
	}
	else
	    need_to_backtrack_p = T;
    }
    if (FIXNUM_GT(current_index,final_index_in_string_to_match)) {
	if (this_node_qm) {
	    if ( 
		    !TRUEP(compiled_regular_expression_matches_zero_characters_p(this_node_qm)))
		need_to_backtrack_p = T;
	}
    }
    if (need_to_backtrack_p) {
	need_to_backtrack_p = Nil;
	resumable_node_qm = CAR(resumable_wild_character_match_nodes_qm);
	if (resumable_node_qm) {
	    this_match_index = FIXNUM_SUB1(ISVREF(resumable_node_qm,
		    (SI_Long)2L));
	    final_match_index = ISVREF(resumable_node_qm,(SI_Long)3L);
	    if (FIXNUM_EQ(this_match_index,final_match_index)) {
		gensym_pop_store = Nil;
		cons_1 = resumable_wild_character_match_nodes_qm;
		if (cons_1) {
		    gensym_pop_store = M_CAR(cons_1);
		    next_cons = M_CDR(cons_1);
		    inline_note_reclaim_cons(cons_1,Qab_gensym);
		    temp = Available_gensym_conses;
		    M_CDR(cons_1) = temp;
		    Available_gensym_conses = cons_1;
		}
		else
		    next_cons = Nil;
		resumable_wild_character_match_nodes_qm = next_cons;
	    }
	    else
		SVREF(resumable_node_qm,FIX((SI_Long)2L)) = this_match_index;
	    current_index = this_match_index;
	    this_node_qm = ISVREF(resumable_node_qm,(SI_Long)1L);
	}
	else {
	    match_failed_p = T;
	    goto end_loop;
	}
    }
    else if (FIXNUM_GT(current_index,final_index_in_string_to_match))
	goto end_loop;
    else if ( !TRUEP(this_node_qm)) {
	match_failed_p = T;
	goto end_loop;
    }
    goto next_loop;
  end_loop:
    return VALUES_2(match_failed_p ? Nil : current_index,
	    resumable_wild_character_match_nodes_qm);
    return VALUES_1(Qnil);
}

/* C-G2_STREAM_OPENDIR */
Object c_g2_stream_opendir(dirspec,filespec)
    Object dirspec, filespec;
{
    Object gensymed_symbol, gensymed_symbol_1, temp;
    char *temp_1;

    x_note_fn_call(38,130);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(dirspec);
    gensymed_symbol_1 = copy_foreign_string_arg_if_appropriate(filespec);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = dirspec;
    temp_1 = ISTRING(temp);
    temp = gensymed_symbol_1;
    if (temp);
    else
	temp = filespec;
    temp = FIX(g2ext_str_opendir(temp_1,ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    if (gensymed_symbol_1)
	reclaim_gensym_string(gensymed_symbol_1);
    return VALUES_1(temp);
}

/* C-G2_STREAM_READDIR */
Object c_g2_stream_readdir(buffer,include_version_p,include_unreadable_p)
    Object buffer, include_version_p, include_unreadable_p;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,131);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(buffer);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = buffer;
    temp = FIX(g2ext_str_readdir(ISTRING(temp),IFIX(include_version_p),
	    IFIX(include_unreadable_p)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

/* C-G2_STREAM_READ_SUBDIRS */
Object c_g2_stream_read_subdirs(buffer,include_version_p,include_unreadable_p)
    Object buffer, include_version_p, include_unreadable_p;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,132);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(buffer);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = buffer;
    temp = FIX(g2ext_str_read_subdirs(ISTRING(temp),
	    IFIX(include_version_p),IFIX(include_unreadable_p)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

/* G2-STREAM-READ-SUBDIRS */
Object g2_stream_read_subdirs(text_string_buffer,include_version_flag,
	    include_unreadable_flag)
    Object text_string_buffer, include_version_flag, include_unreadable_flag;
{
    Object buffer_length, temporary_simple_gensym_string, temp;

    x_note_fn_call(38,133);
    buffer_length = lengthw(text_string_buffer);
    temporary_simple_gensym_string = 
	    obtain_simple_gensym_string(buffer_length);
    temp = c_g2_stream_read_subdirs(temporary_simple_gensym_string,
	    include_version_flag,include_unreadable_flag);
    copy_null_terminated_text_string(2,temporary_simple_gensym_string,
	    text_string_buffer);
    reclaim_simple_gensym_string(temporary_simple_gensym_string);
    return VALUES_1(temp);
}

/* G2-STREAM-READDIR */
Object g2_stream_readdir(text_string_buffer,include_version_flag,
	    include_unreadable_flag)
    Object text_string_buffer, include_version_flag, include_unreadable_flag;
{
    Object buffer_length, temporary_simple_gensym_string, temp;

    x_note_fn_call(38,134);
    buffer_length = lengthw(text_string_buffer);
    temporary_simple_gensym_string = 
	    obtain_simple_gensym_string(buffer_length);
    temp = c_g2_stream_readdir(temporary_simple_gensym_string,
	    include_version_flag,include_unreadable_flag);
    copy_null_terminated_text_string(2,temporary_simple_gensym_string,
	    text_string_buffer);
    reclaim_simple_gensym_string(temporary_simple_gensym_string);
    return VALUES_1(temp);
}

/* VERSION-CAN-OCCUR-IN-TRUENAME-P */
Object version_can_occur_in_truename_p(version_qm)
    Object version_qm;
{
    Object length_of_version_string, ab_loop_it_;
    SI_Long index_1, ab_loop_bind_, gensymed_symbol;
    char temp;

    x_note_fn_call(38,135);
    if (version_qm) {
	length_of_version_string = lengthw(version_qm);
	if (IFIX(length_of_version_string) >= (SI_Long)1L) {
	    temp = IFIX(length_of_version_string) == (SI_Long)2L ? 
		    UBYTE_16_ISAREF_1(version_qm,(SI_Long)1L) == 
		    (SI_Long)48L : TRUEP(Qnil);
	    if (temp);
	    else {
		index_1 = (SI_Long)1L;
		ab_loop_bind_ = IFIX(length_of_version_string);
		ab_loop_it_ = Nil;
	      next_loop:
		if (index_1 >= ab_loop_bind_)
		    goto end_loop;
		gensymed_symbol = UBYTE_16_ISAREF_1(version_qm,index_1);
		ab_loop_it_ =  !((SI_Long)48L <= gensymed_symbol && 
			gensymed_symbol <= (SI_Long)57L ? 
			TRUEP(FIX(gensymed_symbol - (SI_Long)48L)) : 
			TRUEP(Nil)) ? T : Nil;
		if (ab_loop_it_) {
		    temp = TRUEP(ab_loop_it_);
		    goto end;
		}
		index_1 = index_1 + (SI_Long)1L;
		goto next_loop;
	      end_loop:
		temp = TRUEP(Qnil);
	      end:;
	    }
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    return VALUES_1( !temp ? T : Nil);
}

Object Match_regular_expression_for_g2_stream_directory_hook = UNBOUND;

/* MATCH-REGULAR-EXPRESSION-FOR-G2-STREAM-DIRECTORY */
Object match_regular_expression_for_g2_stream_directory(compiled_matching_name_spec,
	    g2_stream_directory_buffer,compiled_unix_version_match_spec_qm)
    Object compiled_matching_name_spec, g2_stream_directory_buffer;
    Object compiled_unix_version_match_spec_qm;
{
    Object temp_1;
    char temp;
    Declare_special(1);
    Object result;

    x_note_fn_call(38,136);
    PUSH_SPECIAL(G2_stream_directory_buffer,g2_stream_directory_buffer,0);
      temp = TRUEP(match_regular_expression(compiled_matching_name_spec,
	      G2_stream_directory_buffer));
      if (temp);
      else if (Match_regular_expression_for_g2_stream_directory_hook) {
	  temp_1 = Match_regular_expression_for_g2_stream_directory_hook;
	  temp = TRUEP(FUNCALL_1(temp_1,copy_null_terminated_text_string(1,
		  G2_stream_directory_buffer)));
      }
      else
	  temp = TRUEP(Nil);
      if (temp) {
	  if (compiled_unix_version_match_spec_qm)
	      result = VALUES_1( 
		      !TRUEP(match_regular_expression(compiled_unix_version_match_spec_qm,
		      G2_stream_directory_buffer)) ? T : Nil);
	  else
	      result = VALUES_1(T);
      }
      else
	  result = VALUES_1(Nil);
    POP_SPECIAL();
    return result;
}

static Object Qg2_stream_filtered_directory;  /* g2-stream-filtered-directory */

static Object string_constant_1;   /* "*~a" */

static Object Qvms;                /* vms */

static Object array_constant_1;    /* # */

static Object string_constant_2;   /* "*.*~a" */

static Object array_constant_2;    /* # */

static Object Qwin32;              /* win32 */

static Object Qgeneralized_dos;    /* generalized-dos */

static Object array_constant_3;    /* # */

static Object array_constant_4;    /* # */

static Object string_constant_3;   /* "~a~a" */

static Object string_constant_4;   /* "~a;*" */

static Object array_constant_5;    /* # */

static Object string_constant_5;   /* "~a~a~a" */

/* G2-STREAM-FILTERED-DIRECTORY-USING-CSTREAMS-1 */
Object g2_stream_filtered_directory_using_cstreams_1(dirspec,filespec,
	    version_qm,file_system,subdirectories_only_p,
	    include_unreadable_files_p)
    Object dirspec, filespec, version_qm, file_system, subdirectories_only_p;
    Object include_unreadable_files_p;
{
    Object wild_version_p, version_or_empty_string, tag_temp, temp;
    volatile Object complete_name_spec;
    Object invertible_version_p, include_version_flag, include_unreadable_flag;
    volatile Object filespec_for_match_pattern;
    volatile Object compiled_matching_name_spec_qm;
    volatile Object filespec_for_unix_version_match_qm;
    volatile Object compiled_unix_version_match_spec_qm;
    Object directory_list;
    volatile Object complete_directory_spec;
    char temp_1;
    Declare_stack_pointer;
    Declare_catch(2);
    Object result;

    x_note_fn_call(38,137);
    SAVE_STACK();
    wild_version_p = version_qm ? 
	    wild_regular_expression_string_p(version_qm) : Qnil;
    version_or_empty_string = version_qm;
    if (version_or_empty_string);
    else
	version_or_empty_string = array_constant;
    if (wild_regular_expression_string_p(filespec) || wild_version_p) {
	tag_temp = UNIQUE_TAG(Qg2_stream_filtered_directory);
	if (PUSH_CATCH(tag_temp,1)) {
	    temp = lengthw(dirspec);
	    temp_1 = FIXNUM_GT(temp,G2_stream_directory_buffer_length);
	    if (temp_1);
	    else {
		temp = lengthw(filespec);
		temp_1 = FIXNUM_GT(temp,G2_stream_directory_buffer_length);
	    }
	    if (temp_1) {
		Internal_status_of_most_recent_file_operation = 
			Directory_spec_too_long_code;
		result = VALUES_1(Nil);
		THROW(tag_temp,result);
	    }
	    if ( !TRUEP(G2_stream_directory_initialized_p)) {
		if (g2ext_str_initdir() == IFIX(G2_stream_directory_success))
		    G2_stream_directory_initialized_p = T;
		else {
		    Internal_status_of_most_recent_file_operation = 
			    Failed_to_build_dir_structure_code;
		    result = VALUES_1(Nil);
		    THROW(tag_temp,result);
		}
	    }
	    complete_name_spec = Qunbound_in_protected_let;
	    invertible_version_p = Qunbound_in_protected_let;
	    include_version_flag = Qunbound_in_protected_let;
	    include_unreadable_flag = Qunbound_in_protected_let;
	    filespec_for_match_pattern = Qunbound_in_protected_let;
	    compiled_matching_name_spec_qm = Qunbound_in_protected_let;
	    filespec_for_unix_version_match_qm = Qunbound_in_protected_let;
	    compiled_unix_version_match_spec_qm = Qunbound_in_protected_let;
	    if (PUSH_UNWIND_PROTECT(0)) {
		if (EQ(file_system,Qunix))
		    complete_name_spec = tformat_text_string(2,
			    string_constant_1,version_or_empty_string);
		else if (EQ(file_system,Qvms)) {
		    if (wild_version_p)
			complete_name_spec = 
				copy_constant_wide_string_given_length(array_constant_1,
				FIX((SI_Long)5L));
		    else if (version_qm)
			complete_name_spec = tformat_text_string(2,
				string_constant_2,version_qm);
		    else
			complete_name_spec = 
				copy_constant_wide_string_given_length(array_constant_2,
				FIX((SI_Long)5L));
		}
		else if (EQ(file_system,Qwin32) || EQ(file_system,Qdos) || 
			EQ(file_system,Qgeneralized_dos))
		    complete_name_spec = 
			    copy_constant_wide_string_given_length(array_constant_3,
			    FIX((SI_Long)1L));
		else
		    complete_name_spec = 
			    copy_constant_wide_string_given_length(array_constant_4,
			    FIX((SI_Long)3L));
		invertible_version_p = version_qm ? 
			version_can_occur_in_truename_p(version_qm) : Qnil;
		include_version_flag = version_qm ? FIX((SI_Long)1L) : 
			FIX((SI_Long)0L);
		include_unreadable_flag = include_unreadable_files_p ? 
			FIX((SI_Long)1L) : FIX((SI_Long)0L);
		if (EQ(file_system,Qunix))
		    filespec_for_match_pattern = tformat_text_string(3,
			    string_constant_3,filespec,
			    version_or_empty_string);
		else if (EQ(file_system,Qvms))
		    filespec_for_match_pattern = nstring_upcasew( 
			    !TRUEP(version_qm) || wild_version_p || 
			    invertible_version_p ? tformat_text_string(3,
			    string_constant_3,filespec,
			    version_or_empty_string) : 
			    tformat_text_string(2,string_constant_4,filespec));
		else if (EQ(file_system,Qwin32) || EQ(file_system,Qdos) || 
			EQ(file_system,Qgeneralized_dos))
		    filespec_for_match_pattern = copy_text_string(filespec);
		else
		    filespec_for_match_pattern = copy_text_string(filespec);
		compiled_matching_name_spec_qm = 
			compile_regular_expression(filespec_for_match_pattern);
		filespec_for_unix_version_match_qm = EQ(file_system,Qunix) 
			&& IFIX(lengthw(version_or_empty_string)) == 
			(SI_Long)0L ? tformat_text_string(3,
			string_constant_3,filespec,array_constant_5) : Qnil;
		compiled_unix_version_match_spec_qm = 
			filespec_for_unix_version_match_qm ? 
			compile_regular_expression(filespec_for_unix_version_match_qm) 
			: Qnil;
		if ( !TRUEP(compiled_matching_name_spec_qm)) {
		    Internal_status_of_most_recent_file_operation = 
			    Bad_regular_expression_code;
		    result = VALUES_1(Nil);
		    THROW(tag_temp,result);
		}
		if ( !FIXNUM_EQ(c_g2_stream_opendir(dirspec,
			complete_name_spec),G2_stream_directory_success)) {
		    Internal_status_of_most_recent_file_operation = 
			    Failed_to_open_dir_structure_code;
		    result = VALUES_1(Nil);
		    THROW(tag_temp,result);
		}
		directory_list = Nil;
	      next_loop:
		if (FIXNUM_NE(subdirectories_only_p ? 
			g2_stream_read_subdirs(G2_stream_directory_buffer,
			include_version_flag,include_unreadable_flag) : 
			g2_stream_readdir(G2_stream_directory_buffer,
			include_version_flag,include_unreadable_flag),
			G2_stream_directory_success))
		    goto end_loop;
		if (match_regular_expression_for_g2_stream_directory(compiled_matching_name_spec_qm,
			G2_stream_directory_buffer,
			compiled_unix_version_match_spec_qm)) {
		    temp = copy_null_terminated_text_string(1,
			    G2_stream_directory_buffer);
		    directory_list = gensym_cons_1(temp,directory_list);
		}
		goto next_loop;
	      end_loop:
		Internal_status_of_most_recent_file_operation = 
			File_operation_succeeded_code;
		g2ext_str_closedir();
		SAVE_VALUES(VALUES_1(directory_list));
		goto end;
		SAVE_VALUES(VALUES_1(Qnil));
	      end:;
	    }
	    POP_UNWIND_PROTECT(0);
	    if (compiled_unix_version_match_spec_qm) {
		if ( !EQ(compiled_unix_version_match_spec_qm,
			Qunbound_in_protected_let))
		    reclaim_compiled_regular_expression(compiled_unix_version_match_spec_qm);
	    }
	    if (filespec_for_unix_version_match_qm) {
		if ( !EQ(filespec_for_unix_version_match_qm,
			Qunbound_in_protected_let))
		    reclaim_text_string(filespec_for_unix_version_match_qm);
	    }
	    if (compiled_matching_name_spec_qm) {
		if ( !EQ(compiled_matching_name_spec_qm,
			Qunbound_in_protected_let))
		    reclaim_compiled_regular_expression(compiled_matching_name_spec_qm);
	    }
	    if (filespec_for_match_pattern) {
		if ( !EQ(filespec_for_match_pattern,Qunbound_in_protected_let))
		    reclaim_text_string(filespec_for_match_pattern);
	    }
	    if (complete_name_spec) {
		if ( !EQ(complete_name_spec,Qunbound_in_protected_let))
		    reclaim_text_string(complete_name_spec);
	    }
	    CONTINUE_UNWINDING(0);
	    result = RESTORE_VALUES();
	}
	else
	    result = CATCH_VALUES();
	POP_CATCH(1);
	RESTORE_STACK();
	return result;
    }
    else {
	complete_directory_spec = Qunbound_in_protected_let;
	if (PUSH_UNWIND_PROTECT(0)) {
	    complete_directory_spec = tformat_text_string(4,
		    string_constant_5,dirspec,filespec,
		    version_or_empty_string);
	    if (g2_stream_probe_file_for_read(complete_directory_spec) && 
		    IFIX(lengthw(filespec)) > (SI_Long)0L)
		SAVE_VALUES(gensym_cons_1(tformat_text_string(3,
			string_constant_3,filespec,
			version_or_empty_string),Nil));
	    else
		SAVE_VALUES(VALUES_1(Nil));
	}
	POP_UNWIND_PROTECT(0);
	if (complete_directory_spec) {
	    if ( !EQ(complete_directory_spec,Qunbound_in_protected_let))
		reclaim_text_string(complete_directory_spec);
	}
	CONTINUE_UNWINDING(0);
	result = RESTORE_VALUES();
	RESTORE_STACK();
	return result;
    }
}

/* G2-STREAM-DIRECTORY */
Object g2_stream_directory(dirspec,filespec,version_qm,file_system,
	    include_unreadable_files_p)
    Object dirspec, filespec, version_qm, file_system;
    Object include_unreadable_files_p;
{
    Object dirspec_to_use, need_to_reclaim_dirspec_p, pathname_needing_home;
    Object temp;

    x_note_fn_call(38,138);
    dirspec_to_use = dirspec;
    need_to_reclaim_dirspec_p = Nil;
    if (EQ(Local_file_system,Qunix) && IFIX(lengthw(dirspec)) > 
	    (SI_Long)0L && UBYTE_16_ISAREF_1(dirspec,(SI_Long)0L) == 
	    (SI_Long)126L) {
	pathname_needing_home = gensym_pathname(dirspec_to_use);
	supply_home_to_unix_pathname(pathname_needing_home);
	dirspec_to_use = gensym_namestring(1,pathname_needing_home);
	need_to_reclaim_dirspec_p = T;
	reclaim_gensym_pathname(pathname_needing_home);
    }
    temp = g2_stream_filtered_directory_using_cstreams_1(dirspec_to_use,
	    filespec,version_qm,file_system,Nil,include_unreadable_files_p);
    if (need_to_reclaim_dirspec_p)
	reclaim_text_string(dirspec_to_use);
    return VALUES_1(temp);
}

/* G2-STREAM-SUBDIRECTORIES */
Object g2_stream_subdirectories(dirspec,filespec,version_qm,file_system,
	    include_unreadable_files_p)
    Object dirspec, filespec, version_qm, file_system;
    Object include_unreadable_files_p;
{
    Object dirspec_to_use, need_to_reclaim_dirspec_p, pathname_needing_home;
    Object temp;

    x_note_fn_call(38,139);
    dirspec_to_use = dirspec;
    need_to_reclaim_dirspec_p = Nil;
    if (EQ(Local_file_system,Qunix) && IFIX(lengthw(dirspec)) > 
	    (SI_Long)0L && UBYTE_16_ISAREF_1(dirspec,(SI_Long)0L) == 
	    (SI_Long)126L) {
	pathname_needing_home = gensym_pathname(dirspec_to_use);
	supply_home_to_unix_pathname(pathname_needing_home);
	dirspec_to_use = gensym_namestring(1,pathname_needing_home);
	need_to_reclaim_dirspec_p = T;
	reclaim_gensym_pathname(pathname_needing_home);
    }
    temp = g2_stream_filtered_directory_using_cstreams_1(dirspec_to_use,
	    filespec,version_qm,file_system,T,include_unreadable_files_p);
    if (need_to_reclaim_dirspec_p)
	reclaim_text_string(dirspec_to_use);
    return VALUES_1(temp);
}

Object G2_stream_device_buffer_length = UNBOUND;

Object G2_stream_device_buffer = UNBOUND;

/* C-G2_STREAM_GET_NEXT_DEVICE */
Object c_g2_stream_get_next_device(buffer)
    Object buffer;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,140);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(buffer);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = buffer;
    temp = FIX(g2ext_str_get_next_device(ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

/* G2-STREAM-DEVICES */
Object g2_stream_devices()
{
    Object device_list, read_status, temp;
    SI_Long open_status;

    x_note_fn_call(38,141);
    device_list = Nil;
    open_status = g2ext_str_open_device_list();
    if (open_status == IFIX(Foreign_function_failure))
	Internal_status_of_most_recent_file_operation = 
		Failed_to_open_device_list_code;
    else {
	read_status = Nil;
      next_loop:
	read_status = c_g2_stream_get_next_device(G2_stream_device_buffer);
	if ( !FIXNUM_EQ(read_status,Foreign_function_success))
	    goto end_loop;
	temp = copy_null_terminated_text_string(1,G2_stream_device_buffer);
	device_list = gensym_cons_1(temp,device_list);
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	goto next_loop;
      end_loop:;
    }
    return VALUES_1(device_list);
}

/* C-G2_STREAM_DIRECTORY_P */
Object c_g2_stream_directory_p(namestring_1)
    Object namestring_1;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,142);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(namestring_1);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = namestring_1;
    temp = FIX(g2ext_str_directory_p(ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

static Object list_constant_1;     /* # */

/* PATHNAME-IS-ROOT-DIRECTORY-P */
Object pathname_is_root_directory_p(gensym_pathname_1)
    Object gensym_pathname_1;
{
    Object gensym_pathname_directory, gensym_pathname_name;
    Object gensym_pathname_type, gensym_pathname_version, temp;

    x_note_fn_call(38,143);
    gensym_pathname_directory = ISVREF(gensym_pathname_1,(SI_Long)3L);
    gensym_pathname_name = ISVREF(gensym_pathname_1,(SI_Long)4L);
    gensym_pathname_type = ISVREF(gensym_pathname_1,(SI_Long)5L);
    gensym_pathname_version = ISVREF(gensym_pathname_1,(SI_Long)6L);
    if (EQUAL(gensym_pathname_directory,list_constant_1) &&  
	    !TRUEP(gensym_pathname_name) &&  !TRUEP(gensym_pathname_type)) {
	temp =  !TRUEP(gensym_pathname_version) ? T : Nil;
	if (temp);
	else
	    temp = EQ(gensym_pathname_version,Kunspecific) ? T : Nil;
    }
    else
	temp = Nil;
    return VALUES_1(temp);
}

/* G2-STREAM-DIRECTORY-P */
Object g2_stream_directory_p(namestring_1)
    Object namestring_1;
{
    Object directory_pathname_qm, temp, result_1;
    char temp_1;

    x_note_fn_call(38,144);
    if (EQ(Qvms,Local_file_system)) {
	directory_pathname_qm = parse_vms_filename(namestring_1);
	if (directory_pathname_qm) {
	    temp = pathname_is_root_directory_p(directory_pathname_qm);
	    reclaim_gensym_pathname(directory_pathname_qm);
	    temp_1 = TRUEP(temp);
	}
	else
	    temp_1 = TRUEP(Nil);
    }
    else
	temp_1 = TRUEP(Nil);
    if (temp_1);
    else if (EQ(Qwin32,Local_file_system)) {
	directory_pathname_qm = parse_win32_filename(namestring_1);
	if (directory_pathname_qm) {
	    temp = pathname_is_root_directory_p(directory_pathname_qm);
	    reclaim_gensym_pathname(directory_pathname_qm);
	    temp_1 = TRUEP(temp);
	}
	else
	    temp_1 = TRUEP(Nil);
    }
    else
	temp_1 = TRUEP(Nil);
    if (temp_1);
    else if (EQ(Qdos,Local_file_system)) {
	directory_pathname_qm = parse_dos_filename(namestring_1);
	if (directory_pathname_qm) {
	    temp = pathname_is_root_directory_p(directory_pathname_qm);
	    reclaim_gensym_pathname(directory_pathname_qm);
	    temp_1 = TRUEP(temp);
	}
	else
	    temp_1 = TRUEP(Nil);
    }
    else
	temp_1 = TRUEP(Nil);
    result_1 = temp_1 ? G2_stream_directory_p_success : 
	    c_g2_stream_directory_p(namestring_1);
    if (FIXNUM_EQ(result_1,G2_stream_directory_p_success))
	return VALUES_1(T);
    else
	return VALUES_1(Nil);
}

/* C-G2_CREATE_DIRECTORY */
Object c_g2_create_directory(namestring_1,create_parents_p,mask)
    Object namestring_1, create_parents_p, mask;
{
    Object gensymed_symbol, gensymed_symbol_1, temp;
    char *temp_1;

    x_note_fn_call(38,145);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(namestring_1);
    gensymed_symbol_1 = copy_foreign_string_arg_if_appropriate(mask);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = namestring_1;
    temp_1 = ISTRING(temp);
    temp = gensymed_symbol_1;
    if (temp);
    else
	temp = mask;
    temp = FIX(g2ext_create_directory(temp_1,IFIX(create_parents_p),
	    ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    if (gensymed_symbol_1)
	reclaim_gensym_string(gensymed_symbol_1);
    return VALUES_1(temp);
}

/* C-G2_STREAM_GET_DEFAULT_DIR */
Object c_g2_stream_get_default_dir(buff)
    Object buff;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,146);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(buff);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = buff;
    temp = FIX(g2ext_str_get_default_dir(ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

/* G2-STREAM-GET-DEFAULT-DIRECTORY */
Object g2_stream_get_default_directory()
{
    Object result_code, text_result_qm;

    x_note_fn_call(38,147);
    result_code = 
	    c_g2_stream_get_default_dir(Gensym_environment_variable_buffer);
    Internal_status_of_most_recent_file_operation = 
	    FIX(g2ext_g2_stream_get_error_number());
    if ( !(FIXNUMP(result_code) && FIXNUM_LE(FIX((SI_Long)-128L),
	    result_code) && FIXNUM_LE(result_code,FIX((SI_Long)127L))))
	text_result_qm = Nil;
    else
	switch (INTEGER_TO_CHAR(result_code)) {
	  case 0:
	    text_result_qm = 
		    copy_null_terminated_string_as_text_string(Gensym_environment_variable_buffer);
	    break;
	  case -1:
	    text_result_qm = Nil;
	    break;
	  default:
	    text_result_qm = Nil;
	    break;
	}
    if (text_result_qm) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(text_result_qm);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

/* C-G2_STREAM_CHANGE_DEFAULT_DIR */
Object c_g2_stream_change_default_dir(new_dir)
    Object new_dir;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,148);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(new_dir);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = new_dir;
    temp = FIX(g2ext_str_change_default_dir(ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

/* G2-STREAM-CHANGE-DEFAULT-DIRECTORY */
Object g2_stream_change_default_directory(namestring_1)
    Object namestring_1;
{
    Object status;

    x_note_fn_call(38,149);
    status = c_g2_stream_change_default_dir(namestring_1);
    if (FIXNUM_EQ(status,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(T);
    }
}

/* G2-STREAM-FILE-LENGTH */
Object g2_stream_file_length(g2_stream)
    Object g2_stream;
{
    SI_Long file_length_or_error;

    x_note_fn_call(38,150);
    g2_stream = ISVREF(g2_stream,(SI_Long)1L);
    file_length_or_error = g2ext_str_file_length(IFIX(g2_stream));
    if (file_length_or_error < (SI_Long)0L) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(FIX(file_length_or_error));
    }
}

/* G2-STREAM-FILE-NON-EMPTY */
Object g2_stream_file_non_empty(g2_stream)
    Object g2_stream;
{
    SI_Long non_empty_or_error;

    x_note_fn_call(38,151);
    g2_stream = ISVREF(g2_stream,(SI_Long)1L);
    non_empty_or_error = g2ext_str_file_non_empty(IFIX(g2_stream));
    if (non_empty_or_error < (SI_Long)0L) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(non_empty_or_error == (SI_Long)1L ? T : Nil);
    }
}

/* G2-STREAM-SET-FILE-POSITION */
Object g2_stream_set_file_position(g2_stream,new_position,seek_mode)
    Object g2_stream, new_position, seek_mode;
{
    SI_Long result_1;

    x_note_fn_call(38,152);
    g2_stream = ISVREF(g2_stream,(SI_Long)1L);
    result_1 = g2ext_str_set_file_position(IFIX(g2_stream),
	    IFIX(new_position),IFIX(seek_mode));
    if ((SI_Long)0L == result_1) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(T);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

/* G2-STREAM-GET-FILE-POSITION */
Object g2_stream_get_file_position(g2_stream)
    Object g2_stream;
{
    SI_Long file_position_1;

    x_note_fn_call(38,153);
    g2_stream = ISVREF(g2_stream,(SI_Long)1L);
    file_position_1 = g2ext_str_get_file_position(IFIX(g2_stream));
    if (file_position_1 < (SI_Long)0L) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(FIX(file_position_1));
    }
}

/* C-G2_STREAM_GET_VERSION */
Object c_g2_stream_get_version(namestring_1)
    Object namestring_1;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,154);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(namestring_1);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = namestring_1;
    temp = FIX(g2ext_str_get_version(ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

/* G2-STREAM-GET-VERSION */
Object g2_stream_get_version(namestring_1)
    Object namestring_1;
{
    Object version_qm;

    x_note_fn_call(38,155);
    version_qm = c_g2_stream_get_version(namestring_1);
    if (FIXNUM_EQ(version_qm,G2_stream_foreign_file_op_failure)) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(version_qm);
    }
}

/* C-G2_STREAM_GET_DEVICE */
Object c_g2_stream_get_device(namestring_1,buffer)
    Object namestring_1, buffer;
{
    Object gensymed_symbol, gensymed_symbol_1, temp;
    char *temp_1;

    x_note_fn_call(38,156);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(namestring_1);
    gensymed_symbol_1 = copy_foreign_string_arg_if_appropriate(buffer);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = namestring_1;
    temp_1 = ISTRING(temp);
    temp = gensymed_symbol_1;
    if (temp);
    else
	temp = buffer;
    temp = FIX(g2ext_str_get_device(temp_1,ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    if (gensymed_symbol_1)
	reclaim_gensym_string(gensymed_symbol_1);
    return VALUES_1(temp);
}

/* G2-STREAM-GET-DEVICE */
Object g2_stream_get_device(namestring_1)
    Object namestring_1;
{
    Object status, text_result_qm;

    x_note_fn_call(38,157);
    status = c_g2_stream_get_device(namestring_1,
	    Gensym_environment_variable_buffer);
    if ( !(FIXNUMP(status) && FIXNUM_LE(FIX((SI_Long)-128L),status) && 
	    FIXNUM_LE(status,FIX((SI_Long)127L))))
	text_result_qm = Nil;
    else
	switch (INTEGER_TO_CHAR(status)) {
	  case 0:
	    text_result_qm = 
		    copy_null_terminated_string_as_text_string(Gensym_environment_variable_buffer);
	    break;
	  case -1:
	    text_result_qm = Nil;
	    break;
	  default:
	    text_result_qm = Nil;
	    break;
	}
    if (text_result_qm) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(text_result_qm);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

/* C-G2_STREAM_DIR_DISK_SPACE */
Object c_g2_stream_dir_disk_space(dirstring)
    Object dirstring;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,158);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(dirstring);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = dirstring;
    temp = FIX(g2ext_str_avail_disk_space(ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

/* G2-STREAM-AVAILABLE-DISK-SPACE-IN-DEVICE */
Object g2_stream_available_disk_space_in_device(filestring)
    Object filestring;
{
    Object disk_space_or_error_code;

    x_note_fn_call(38,159);
    disk_space_or_error_code = c_g2_stream_dir_disk_space(filestring);
    if (IFIX(disk_space_or_error_code) >= (SI_Long)0L) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(disk_space_or_error_code);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		disk_space_or_error_code;
	return VALUES_1(Nil);
    }
}

/* C-G2_STREAM_FILE_TIMESTAMP */
Object c_g2_stream_file_timestamp(filename,mode)
    Object filename, mode;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,160);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(filename);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = filename;
    temp = DOUBLE_TO_DOUBLE_FLOAT(g2ext_str_file_timestamp(ISTRING(temp),
	    IFIX(mode)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

Object Number_of_seconds_between_lisp_and_unix_antiquity = UNBOUND;

/* G2-STREAM-FILE-MODIFICATION-DATE */
Object g2_stream_file_modification_date(filestring)
    Object filestring;
{
    Object timestamp_or_status, amf_available_array_cons_qm, amf_array, temp;
    Object svref_new_value, amf_result, incff_1_arg, new_float;
    double arg, arg_1, aref_new_value;
    XDeclare_area(1);
    XDeclare_frontier(1);
    Object result;

    x_note_fn_call(38,161);
    if (PUSH_LOCAL_ALLOCATION(Local_area,0,0)) {
	timestamp_or_status = c_g2_stream_file_timestamp(filestring,
		File_timestamp_modification_mode);
	arg = DOUBLE_FLOAT_TO_DOUBLE(timestamp_or_status);
	arg_1 = -1.0;
	if (arg == arg_1 &&  !inline_nanp_for_comparison(arg) &&  
		!inline_nanp_for_comparison(arg_1)) {
	    Internal_status_of_most_recent_file_operation = 
		    FIX(g2ext_g2_stream_get_error_number());
	    result = VALUES_1(Nil);
	}
	else {
	    Internal_status_of_most_recent_file_operation = 
		    File_operation_succeeded_code;
	    amf_available_array_cons_qm = 
		    ISVREF(Vector_of_simple_float_array_pools,(SI_Long)1L);
	    if (amf_available_array_cons_qm) {
		amf_array = M_CAR(amf_available_array_cons_qm);
		temp = Vector_of_simple_float_array_pools;
		svref_new_value = M_CDR(amf_available_array_cons_qm);
		SVREF(temp,FIX((SI_Long)1L)) = svref_new_value;
		inline_note_reclaim_cons(amf_available_array_cons_qm,
			Qab_gensym);
		temp = Available_gensym_conses;
		M_CDR(amf_available_array_cons_qm) = temp;
		Available_gensym_conses = amf_available_array_cons_qm;
		amf_result = amf_array;
	    }
	    else {
		temp = FIXNUM_ADD1(Created_simple_float_array_pool_arrays);
		Created_simple_float_array_pool_arrays = temp;
		incff_1_arg = 
			bytes_per_double_float_simple_array(FIX((SI_Long)1L));
		temp = FIXNUM_ADD(Simple_float_array_pool_memory_usage,
			incff_1_arg);
		Simple_float_array_pool_memory_usage = temp;
		amf_result = generate_float_vector(FIX((SI_Long)1L));
	    }
	    new_float = amf_result;
	    aref_new_value = DOUBLE_FLOAT_TO_DOUBLE(timestamp_or_status);
	    DFLOAT_ISASET_1(new_float,(SI_Long)0L,aref_new_value);
	    result = VALUES_1(new_float);
	}
    }
    POP_LOCAL_ALLOCATION(0,0);
    return result;
}

/* G2-STREAM-FILE-ACCESS-DATE */
Object g2_stream_file_access_date(filestring)
    Object filestring;
{
    Object timestamp_or_status, amf_available_array_cons_qm, amf_array, temp;
    Object svref_new_value, amf_result, incff_1_arg, new_float;
    double arg, arg_1, aref_new_value;
    XDeclare_area(1);
    XDeclare_frontier(1);
    Object result;

    x_note_fn_call(38,162);
    if (PUSH_LOCAL_ALLOCATION(Local_area,0,0)) {
	timestamp_or_status = c_g2_stream_file_timestamp(filestring,
		File_timestamp_access_mode);
	arg = DOUBLE_FLOAT_TO_DOUBLE(timestamp_or_status);
	arg_1 = -1.0;
	if (arg == arg_1 &&  !inline_nanp_for_comparison(arg) &&  
		!inline_nanp_for_comparison(arg_1)) {
	    Internal_status_of_most_recent_file_operation = 
		    FIX(g2ext_g2_stream_get_error_number());
	    result = VALUES_1(Nil);
	}
	else {
	    Internal_status_of_most_recent_file_operation = 
		    File_operation_succeeded_code;
	    amf_available_array_cons_qm = 
		    ISVREF(Vector_of_simple_float_array_pools,(SI_Long)1L);
	    if (amf_available_array_cons_qm) {
		amf_array = M_CAR(amf_available_array_cons_qm);
		temp = Vector_of_simple_float_array_pools;
		svref_new_value = M_CDR(amf_available_array_cons_qm);
		SVREF(temp,FIX((SI_Long)1L)) = svref_new_value;
		inline_note_reclaim_cons(amf_available_array_cons_qm,
			Qab_gensym);
		temp = Available_gensym_conses;
		M_CDR(amf_available_array_cons_qm) = temp;
		Available_gensym_conses = amf_available_array_cons_qm;
		amf_result = amf_array;
	    }
	    else {
		temp = FIXNUM_ADD1(Created_simple_float_array_pool_arrays);
		Created_simple_float_array_pool_arrays = temp;
		incff_1_arg = 
			bytes_per_double_float_simple_array(FIX((SI_Long)1L));
		temp = FIXNUM_ADD(Simple_float_array_pool_memory_usage,
			incff_1_arg);
		Simple_float_array_pool_memory_usage = temp;
		amf_result = generate_float_vector(FIX((SI_Long)1L));
	    }
	    new_float = amf_result;
	    aref_new_value = DOUBLE_FLOAT_TO_DOUBLE(timestamp_or_status);
	    DFLOAT_ISASET_1(new_float,(SI_Long)0L,aref_new_value);
	    result = VALUES_1(new_float);
	}
    }
    POP_LOCAL_ALLOCATION(0,0);
    return result;
}

/* G2-STREAM-FILE-STATUS-CHANGE-DATE */
Object g2_stream_file_status_change_date(filestring)
    Object filestring;
{
    Object timestamp_or_status, amf_available_array_cons_qm, amf_array, temp;
    Object svref_new_value, amf_result, incff_1_arg, new_float;
    double arg, arg_1, aref_new_value;
    XDeclare_area(1);
    XDeclare_frontier(1);
    Object result;

    x_note_fn_call(38,163);
    if (PUSH_LOCAL_ALLOCATION(Local_area,0,0)) {
	timestamp_or_status = c_g2_stream_file_timestamp(filestring,
		File_timestamp_status_change_mode);
	arg = DOUBLE_FLOAT_TO_DOUBLE(timestamp_or_status);
	arg_1 = -1.0;
	if (arg == arg_1 &&  !inline_nanp_for_comparison(arg) &&  
		!inline_nanp_for_comparison(arg_1)) {
	    Internal_status_of_most_recent_file_operation = 
		    FIX(g2ext_g2_stream_get_error_number());
	    result = VALUES_1(Nil);
	}
	else {
	    Internal_status_of_most_recent_file_operation = 
		    File_operation_succeeded_code;
	    amf_available_array_cons_qm = 
		    ISVREF(Vector_of_simple_float_array_pools,(SI_Long)1L);
	    if (amf_available_array_cons_qm) {
		amf_array = M_CAR(amf_available_array_cons_qm);
		temp = Vector_of_simple_float_array_pools;
		svref_new_value = M_CDR(amf_available_array_cons_qm);
		SVREF(temp,FIX((SI_Long)1L)) = svref_new_value;
		inline_note_reclaim_cons(amf_available_array_cons_qm,
			Qab_gensym);
		temp = Available_gensym_conses;
		M_CDR(amf_available_array_cons_qm) = temp;
		Available_gensym_conses = amf_available_array_cons_qm;
		amf_result = amf_array;
	    }
	    else {
		temp = FIXNUM_ADD1(Created_simple_float_array_pool_arrays);
		Created_simple_float_array_pool_arrays = temp;
		incff_1_arg = 
			bytes_per_double_float_simple_array(FIX((SI_Long)1L));
		temp = FIXNUM_ADD(Simple_float_array_pool_memory_usage,
			incff_1_arg);
		Simple_float_array_pool_memory_usage = temp;
		amf_result = generate_float_vector(FIX((SI_Long)1L));
	    }
	    new_float = amf_result;
	    aref_new_value = DOUBLE_FLOAT_TO_DOUBLE(timestamp_or_status);
	    DFLOAT_ISASET_1(new_float,(SI_Long)0L,aref_new_value);
	    result = VALUES_1(new_float);
	}
    }
    POP_LOCAL_ALLOCATION(0,0);
    return result;
}

/* C-G2_STREAM_FILE_ACCESS_CHECK */
Object c_g2_stream_file_access_check(filename,mode)
    Object filename, mode;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,164);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(filename);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = filename;
    temp = FIX(g2ext_str_file_access_check(ISTRING(temp),IFIX(mode)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

/* G2-STREAM-FILE-IS-READABLE-P */
Object g2_stream_file_is_readable_p(filestring)
    Object filestring;
{
    Object status;

    x_note_fn_call(38,165);
    status = c_g2_stream_file_access_check(filestring,
	    File_access_check_read_mode);
    if (IFIX(status) == (SI_Long)-1L) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1( !(IFIX(status) == (SI_Long)0L) ? T : Nil);
    }
}

/* G2-STREAM-FILE-IS-WRITABLE-P */
Object g2_stream_file_is_writable_p(filestring)
    Object filestring;
{
    Object status;

    x_note_fn_call(38,166);
    status = c_g2_stream_file_access_check(filestring,
	    File_access_check_write_mode);
    if (IFIX(status) == (SI_Long)-1L) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1( !(IFIX(status) == (SI_Long)0L) ? T : Nil);
    }
}

/* G2-STREAM-FILE-IS-EXECUTABLE-P */
Object g2_stream_file_is_executable_p(filestring)
    Object filestring;
{
    Object status;

    x_note_fn_call(38,167);
    status = c_g2_stream_file_access_check(filestring,
	    File_access_check_execute_mode);
    if (IFIX(status) == (SI_Long)-1L) {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1( !(IFIX(status) == (SI_Long)0L) ? T : Nil);
    }
}

/* VERIFY-EXECUTABLE */
Object verify_executable(filename)
    Object filename;
{
    Object temp;

    x_note_fn_call(38,168);
    if (g2_stream_probe_file_for_read(filename) &&  
	    !TRUEP(g2_stream_directory_p(filename))) {
	temp =  !EQ(G2_operating_system,Qunix) ? T : Nil;
	if (temp)
	    return VALUES_1(temp);
	else
	    return g2_stream_file_is_executable_p(filename);
    }
    else
	return VALUES_1(Nil);
}

Object All_write_locks = UNBOUND;

/* C-G2_STREAM_GET_WRITE_LOCK */
Object c_g2_stream_get_write_lock(namestring_1,g2_identification,buffer)
    Object namestring_1, g2_identification, buffer;
{
    Object gensymed_symbol, gensymed_symbol_1, gensymed_symbol_2, temp;
    char *temp_1, *temp_2;

    x_note_fn_call(38,169);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(namestring_1);
    gensymed_symbol_1 = 
	    copy_foreign_string_arg_if_appropriate(g2_identification);
    gensymed_symbol_2 = copy_foreign_string_arg_if_appropriate(buffer);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = namestring_1;
    temp_1 = ISTRING(temp);
    temp = gensymed_symbol_1;
    if (temp);
    else
	temp = g2_identification;
    temp_2 = ISTRING(temp);
    temp = gensymed_symbol_2;
    if (temp);
    else
	temp = buffer;
    temp = FIX(g2ext_str_get_write_lock(temp_1,temp_2,ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    if (gensymed_symbol_1)
	reclaim_gensym_string(gensymed_symbol_1);
    if (gensymed_symbol_2)
	reclaim_gensym_string(gensymed_symbol_2);
    return VALUES_1(temp);
}

/* C-G2_STREAM_RELEASE_WRITE_LOCK */
Object c_g2_stream_release_write_lock(namestring_1,g2_identification)
    Object namestring_1, g2_identification;
{
    Object gensymed_symbol, gensymed_symbol_1, temp;
    char *temp_1;

    x_note_fn_call(38,170);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(namestring_1);
    gensymed_symbol_1 = 
	    copy_foreign_string_arg_if_appropriate(g2_identification);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = namestring_1;
    temp_1 = ISTRING(temp);
    temp = gensymed_symbol_1;
    if (temp);
    else
	temp = g2_identification;
    temp = FIX(g2ext_str_release_write_lock(temp_1,ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    if (gensymed_symbol_1)
	reclaim_gensym_string(gensymed_symbol_1);
    return VALUES_1(temp);
}

/* G2-STREAM-GET-WRITE-LOCK */
Object g2_stream_get_write_lock(namestring_1,g2_identification)
    Object namestring_1, g2_identification;
{
    Object status, text_result_qm;

    x_note_fn_call(38,171);
    status = c_g2_stream_get_write_lock(namestring_1,g2_identification,
	    Gensym_environment_variable_buffer);
    text_result_qm = (SI_Long)0L == IFIX(status) ? 
	    copy_null_terminated_string_as_text_string(Gensym_environment_variable_buffer) 
	    : Nil;
    Internal_status_of_most_recent_file_operation = 
	    File_operation_succeeded_code;
    return VALUES_1(text_result_qm);
}

/* G2-STREAM-RELEASE-WRITE-LOCK */
Object g2_stream_release_write_lock(namestring_1,g2_identification)
    Object namestring_1, g2_identification;
{
    Object result_1;

    x_note_fn_call(38,172);
    result_1 = c_g2_stream_release_write_lock(namestring_1,g2_identification);
    if (zerop(result_1)) {
	Internal_status_of_most_recent_file_operation = 
		File_operation_succeeded_code;
	return VALUES_1(T);
    }
    else {
	Internal_status_of_most_recent_file_operation = 
		FIX(g2ext_g2_stream_get_error_number());
	return VALUES_1(Nil);
    }
}

static Object string_constant_6;   /* "Failed to obtain write lock for ~A: ~A" */

/* OBTAIN-WRITE-LOCK-FOR-KB */
Object obtain_write_lock_for_kb(filename)
    Object filename;
{
    Object error_string_qm, temp;

    x_note_fn_call(38,173);
    error_string_qm = g2_stream_get_write_lock(filename,
	    g2_identification_for_write_locks());
    if (error_string_qm) {
	temp = tformat_text_string(3,string_constant_6,filename,
		error_string_qm);
	reclaim_text_string(error_string_qm);
    }
    else
	temp = Nil;
    return VALUES_1(temp);
}

/* RELEASE-WRITE-LOCK-FOR-KB */
Object release_write_lock_for_kb(filename)
    Object filename;
{
    Object tail, recorded_string;

    x_note_fn_call(38,174);
    tail = member_equal(filename,All_write_locks);
    if (tail) {
	recorded_string = CAR(tail);
	All_write_locks = delete_gensym_element_1(recorded_string,
		All_write_locks);
	g2_stream_release_write_lock(recorded_string,
		g2_identification_for_write_locks());
	reclaim_gensym_string(recorded_string);
    }
    return VALUES_1(Nil);
}

/* TRY-TO-OBTAIN-WRITE-LOCK-FOR-KB */
Object try_to_obtain_write_lock_for_kb(filename)
    Object filename;
{
    Object namestring_1, error_string_qm;

    x_note_fn_call(38,175);
    namestring_1 = namestring_as_gensym_string(filename);
    error_string_qm = obtain_write_lock_for_kb(namestring_1);
    if ( !TRUEP(error_string_qm))
	All_write_locks = gensym_cons_1(namestring_1,All_write_locks);
    return VALUES_1(error_string_qm);
}

/* RELEASE-ALL-KB-WRITE-LOCKS */
Object release_all_kb_write_locks()
{
    Object filename;

    x_note_fn_call(38,176);
    filename = Nil;
  next_loop:
    if ( !TRUEP(All_write_locks))
	goto end_loop;
    filename = FIRST(All_write_locks);
    release_write_lock_for_kb(filename);
    goto next_loop;
  end_loop:;
    return VALUES_1(Nil);
}

/* C-G2_STREAM_LOGICAL_NAME_P */
Object c_g2_stream_logical_name_p(device_component)
    Object device_component;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,177);
    gensymed_symbol = copy_foreign_string_arg_if_appropriate(device_component);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = device_component;
    temp = FIX(g2ext_str_logical_name_p(ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

/* G2-STREAM-LOGICAL-NAME-P */
Object g2_stream_logical_name_p(device_component)
    Object device_component;
{
    x_note_fn_call(38,178);
    if (text_string_p(device_component)) {
	if (IFIX(c_g2_stream_logical_name_p(device_component)) == (SI_Long)1L)
	    return VALUES_1(T);
	else
	    return VALUES_1(Nil);
    }
    else
	return VALUES_1(Nil);
}

/* C-G2_STREAM_MAX_FILENAME */
Object c_g2_stream_max_filename(directory_namestring_1)
    Object directory_namestring_1;
{
    Object gensymed_symbol, temp;

    x_note_fn_call(38,179);
    gensymed_symbol = 
	    copy_foreign_string_arg_if_appropriate(directory_namestring_1);
    temp = gensymed_symbol;
    if (temp);
    else
	temp = directory_namestring_1;
    temp = FIX(g2ext_str_max_filename(ISTRING(temp)));
    if (gensymed_symbol)
	reclaim_gensym_string(gensymed_symbol);
    return VALUES_1(temp);
}

/* G2-STREAM-MAXIMUM-FILE-NAME-LENGTH */
Object g2_stream_maximum_file_name_length(directory_namestring_1)
    Object directory_namestring_1;
{
    Object limit_or_flag;

    x_note_fn_call(38,180);
    limit_or_flag = c_g2_stream_max_filename(directory_namestring_1);
    if (IFIX(limit_or_flag) > (SI_Long)0L)
	return VALUES_1(limit_or_flag);
    else
	return VALUES_1(Nil);
}

/* GET-PATHNAME-FOR-LAUNCH-TIME-LOAD-FROM-COMMAND-LINE */
Object get_pathname_for_launch_time_load_from_command_line(command_line_keyword,
	    type_of_file_to_load,list_of_permitted_pathnames_or_t)
    Object command_line_keyword, type_of_file_to_load;
    Object list_of_permitted_pathnames_or_t;
{
    Object namestring_from_command_line_qm, temp;
    volatile Object pathname_from_command_line;
    Object temp_1;
    volatile Object pathname_from_command_line_with_default_version;
    Object permitted_pathname, ab_loop_list_, ab_loop_it_;
    Declare_stack_pointer;
    Declare_catch(2);
    Object result;

    x_note_fn_call(38,181);
    SAVE_STACK();
    namestring_from_command_line_qm = get_command_line_keyword_argument(1,
	    command_line_keyword);
    if (namestring_from_command_line_qm) {
	if (EQ(list_of_permitted_pathnames_or_t,T)) {
	    temp = gensym_probe_file(namestring_from_command_line_qm);
	    if (temp);
	    else {
		pathname_from_command_line = Qunbound_in_protected_let;
		if (PUSH_UNWIND_PROTECT(1)) {
		    pathname_from_command_line = 
			    gensym_pathname(namestring_from_command_line_qm);
		    if (ISVREF(pathname_from_command_line,(SI_Long)5L))
			temp_1 = Nil;
		    else {
			pathname_from_command_line_with_default_version = 
				Qunbound_in_protected_let;
			if (PUSH_UNWIND_PROTECT(0)) {
			    pathname_from_command_line_with_default_version 
				    = 
				    gensym_make_pathname_with_copied_components(Nil,
				    Nil,Nil,Nil,type_of_file_to_load,Nil,
				    pathname_from_command_line);
			    temp_1 = 
				    gensym_probe_file(pathname_from_command_line_with_default_version);
			    SAVE_VALUES(VALUES_1(temp_1));
			}
			POP_UNWIND_PROTECT(0);
			if (pathname_from_command_line_with_default_version) {
			    if ( 
				    !EQ(pathname_from_command_line_with_default_version,
				    Qunbound_in_protected_let))
				reclaim_gensym_pathname(pathname_from_command_line_with_default_version);
			}
			CONTINUE_UNWINDING(0);
			result = RESTORE_VALUES();
			temp_1 = result;
		    }
		    SAVE_VALUES(VALUES_1(temp_1));
		}
		POP_UNWIND_PROTECT(1);
		if (pathname_from_command_line) {
		    if ( !EQ(pathname_from_command_line,
			    Qunbound_in_protected_let))
			reclaim_gensym_pathname(pathname_from_command_line);
		}
		CONTINUE_UNWINDING(1);
		result = RESTORE_VALUES();
		temp = result;
	    }
	}
	else {
	    pathname_from_command_line = Qunbound_in_protected_let;
	    if (PUSH_UNWIND_PROTECT(0)) {
		pathname_from_command_line = 
			gensym_merge_pathnames_function(namestring_from_command_line_qm,
			Process_specific_system_pathname,Nil);
		permitted_pathname = Nil;
		ab_loop_list_ = list_of_permitted_pathnames_or_t;
		ab_loop_it_ = Nil;
	      next_loop:
		if ( !TRUEP(ab_loop_list_))
		    goto end_loop;
		permitted_pathname = M_CAR(ab_loop_list_);
		ab_loop_list_ = M_CDR(ab_loop_list_);
		ab_loop_it_ = 
			gensym_pathnames_equal_enough_p(pathname_from_command_line,
			permitted_pathname) ? 
			gensym_probe_file(pathname_from_command_line) : Qnil;
		if (ab_loop_it_) {
		    temp_1 = ab_loop_it_;
		    goto end;
		}
		goto next_loop;
	      end_loop:
		temp_1 = Qnil;
	      end:;
		SAVE_VALUES(VALUES_1(temp_1));
	    }
	    POP_UNWIND_PROTECT(0);
	    if (pathname_from_command_line) {
		if ( !EQ(pathname_from_command_line,Qunbound_in_protected_let))
		    reclaim_gensym_pathname(pathname_from_command_line);
	    }
	    CONTINUE_UNWINDING(0);
	    result = RESTORE_VALUES();
	    temp = result;
	}
    }
    else
	temp = Nil;
    temp_1 = namestring_from_command_line_qm ? 
	    copy_text_string(namestring_from_command_line_qm) : Nil;
    result = VALUES_2(temp,temp_1);
    RESTORE_STACK();
    return result;
}

/* GET-PATHNAME-FOR-LAUNCH-TIME-LOAD-FROM-ENVIRONMENT-VARS */
Object get_pathname_for_launch_time_load_from_environment_vars(environment_var_name,
	    type_of_file_to_load,list_of_permitted_pathnames_or_t)
    Object environment_var_name, type_of_file_to_load;
    Object list_of_permitted_pathnames_or_t;
{
    Object namestring_from_environment_vars_qm, temp;
    volatile Object pathname_from_environment_vars;
    volatile Object pathname_from_environment_vars_with_default_version;
    Object permitted_pathname, ab_loop_list_, ab_loop_it_;
    Declare_stack_pointer;
    Declare_catch(2);
    Object result;

    x_note_fn_call(38,182);
    SAVE_STACK();
    namestring_from_environment_vars_qm = 
	    get_gensym_environment_variable(environment_var_name);
    if (namestring_from_environment_vars_qm) {
	if (EQ(list_of_permitted_pathnames_or_t,T)) {
	    temp = gensym_probe_file(namestring_from_environment_vars_qm);
	    if (temp);
	    else {
		pathname_from_environment_vars = Qunbound_in_protected_let;
		if (PUSH_UNWIND_PROTECT(1)) {
		    pathname_from_environment_vars = 
			    gensym_pathname(namestring_from_environment_vars_qm);
		    if (ISVREF(pathname_from_environment_vars,(SI_Long)5L))
			temp = Nil;
		    else {
			pathname_from_environment_vars_with_default_version 
				= Qunbound_in_protected_let;
			if (PUSH_UNWIND_PROTECT(0)) {
			    pathname_from_environment_vars_with_default_version 
				    = 
				    gensym_make_pathname_with_copied_components(Nil,
				    Nil,Nil,Nil,type_of_file_to_load,Nil,
				    pathname_from_environment_vars);
			    temp = 
				    gensym_probe_file(pathname_from_environment_vars_with_default_version);
			    SAVE_VALUES(VALUES_1(temp));
			}
			POP_UNWIND_PROTECT(0);
			if (pathname_from_environment_vars_with_default_version) 
				    {
			    if ( 
				    !EQ(pathname_from_environment_vars_with_default_version,
				    Qunbound_in_protected_let))
				reclaim_gensym_pathname(pathname_from_environment_vars_with_default_version);
			}
			CONTINUE_UNWINDING(0);
			result = RESTORE_VALUES();
			temp = result;
		    }
		    SAVE_VALUES(VALUES_1(temp));
		}
		POP_UNWIND_PROTECT(1);
		if (pathname_from_environment_vars) {
		    if ( !EQ(pathname_from_environment_vars,
			    Qunbound_in_protected_let))
			reclaim_gensym_pathname(pathname_from_environment_vars);
		}
		CONTINUE_UNWINDING(1);
		result = RESTORE_VALUES();
		temp = result;
	    }
	}
	else {
	    pathname_from_environment_vars = Qunbound_in_protected_let;
	    if (PUSH_UNWIND_PROTECT(0)) {
		pathname_from_environment_vars = 
			gensym_merge_pathnames_function(namestring_from_environment_vars_qm,
			Process_specific_system_pathname,Nil);
		permitted_pathname = Nil;
		ab_loop_list_ = list_of_permitted_pathnames_or_t;
		ab_loop_it_ = Nil;
	      next_loop:
		if ( !TRUEP(ab_loop_list_))
		    goto end_loop;
		permitted_pathname = M_CAR(ab_loop_list_);
		ab_loop_list_ = M_CDR(ab_loop_list_);
		ab_loop_it_ = 
			gensym_pathnames_equal_enough_p(pathname_from_environment_vars,
			permitted_pathname) ? 
			gensym_probe_file(pathname_from_environment_vars) :
			 Qnil;
		if (ab_loop_it_) {
		    temp = ab_loop_it_;
		    goto end;
		}
		goto next_loop;
	      end_loop:
		temp = Qnil;
	      end:;
		SAVE_VALUES(VALUES_1(temp));
	    }
	    POP_UNWIND_PROTECT(0);
	    if (pathname_from_environment_vars) {
		if ( !EQ(pathname_from_environment_vars,
			Qunbound_in_protected_let))
		    reclaim_gensym_pathname(pathname_from_environment_vars);
	    }
	    CONTINUE_UNWINDING(0);
	    result = RESTORE_VALUES();
	    temp = result;
	}
    }
    else
	temp = Nil;
    result = VALUES_2(temp,namestring_from_environment_vars_qm);
    RESTORE_STACK();
    return result;
}

static Object Kenvironment_variable;  /* :environment-variable */

static Object Kcommand_line;       /* :command-line */

/* PROVIDE-PATHNAME-FOR-LAUNCH-TIME-LOAD-ASKING-OS */
Object provide_pathname_for_launch_time_load_asking_os(command_line_keyword,
	    environment_variable_name,type_of_file_to_load,
	    default_pathname_for_file_to_load_qm,
	    list_of_permitted_pathnames,provide_desired_namestring_p)
    Object command_line_keyword, environment_variable_name;
    Object type_of_file_to_load, default_pathname_for_file_to_load_qm;
    Object list_of_permitted_pathnames, provide_desired_namestring_p;
{
    Object pathname_to_provide_qm, explicitly_specified_namestring_1_qm;
    Object explicitly_specified_namestring_2_qm, using_default_pathname_qm;
    Object original_inadequate_pathame_structure;
    Object explicitly_specified_namestring_qm;
    Object source_of_namestring_specification;
    Object result;

    x_note_fn_call(38,183);
    pathname_to_provide_qm = Nil;
    explicitly_specified_namestring_1_qm = Nil;
    explicitly_specified_namestring_2_qm = Nil;
    using_default_pathname_qm = Nil;
    result = get_pathname_for_launch_time_load_from_command_line(command_line_keyword,
	    type_of_file_to_load,list_of_permitted_pathnames);
    MVS_2(result,pathname_to_provide_qm,explicitly_specified_namestring_1_qm);
    if ( !TRUEP(pathname_to_provide_qm)) {
	result = get_pathname_for_launch_time_load_from_environment_vars(environment_variable_name,
		type_of_file_to_load,list_of_permitted_pathnames);
	MVS_2(result,pathname_to_provide_qm,
		explicitly_specified_namestring_2_qm);
	if ( !TRUEP(pathname_to_provide_qm)) {
	    pathname_to_provide_qm = default_pathname_for_file_to_load_qm ?
		     
		    gensym_probe_file(default_pathname_for_file_to_load_qm) 
		    : Qnil;
	    if (pathname_to_provide_qm)
		using_default_pathname_qm = T;
	}
    }
    if (pathname_to_provide_qm) {
	if ( 
		!TRUEP(sufficient_pathname_for_launch_time_load_p(pathname_to_provide_qm))) 
		    {
	    if (default_pathname_for_file_to_load_qm) {
		original_inadequate_pathame_structure = pathname_to_provide_qm;
		pathname_to_provide_qm = 
			gensym_merge_pathnames_function(pathname_to_provide_qm,
			default_pathname_for_file_to_load_qm,Nil);
		reclaim_gensym_pathname(original_inadequate_pathame_structure);
	    }
	}
    }
    explicitly_specified_namestring_qm = explicitly_specified_namestring_2_qm;
    if (explicitly_specified_namestring_qm);
    else
	explicitly_specified_namestring_qm = 
		explicitly_specified_namestring_1_qm;
    if (explicitly_specified_namestring_2_qm)
	source_of_namestring_specification = Kenvironment_variable;
    else if (using_default_pathname_qm)
	source_of_namestring_specification = Kdirectory;
    else
	source_of_namestring_specification = Kcommand_line;
    if (explicitly_specified_namestring_2_qm && 
	    text_string_p(explicitly_specified_namestring_1_qm))
	reclaim_text_string(explicitly_specified_namestring_1_qm);
    if (provide_desired_namestring_p)
	return VALUES_3(pathname_to_provide_qm,
		explicitly_specified_namestring_qm,
		source_of_namestring_specification);
    else {
	if (text_string_p(explicitly_specified_namestring_qm))
	    reclaim_text_string(explicitly_specified_namestring_qm);
	return VALUES_3(pathname_to_provide_qm,Nil,Nil);
    }
}

static Object list_constant_2;     /* # */

/* PROVIDE-PATHNAME-FOR-LAUNCH-TIME-LOAD */
Object provide_pathname_for_launch_time_load(default_pathname_for_file_to_load_qm,
	    disabling_file_pathname,command_line_keyword,
	    environment_variable_name,type_of_file_to_load,
	    provide_desired_namestring_p)
    Object default_pathname_for_file_to_load_qm, disabling_file_pathname;
    Object command_line_keyword, environment_variable_name;
    Object type_of_file_to_load, provide_desired_namestring_p;
{
    volatile Object namestring_of_disabling_file;
    volatile Object pathname_used_p;
    volatile Object namestring_1;
    volatile Object stream_to_disabling_file_qm;
    volatile Object list_of_permitted_pathnames;
    Object line_in_disabling_file_qm, line_length, start_index_qm;
    Object end_index_qm;
    volatile Object permitted_pathname_qm;
    Object ab_loopvar_, ab_loopvar__1, ab_loopvar__2, this_char;
    volatile Object permitted_namestring;
    Object permitted_pathname, ab_loop_list_;
    SI_Long index_1, ab_loop_bind_;
    char temp;
    Declare_stack_pointer;
    Declare_catch(4);
    Object result;

    x_note_fn_call(38,184);
    SAVE_STACK();
    namestring_of_disabling_file = Qunbound_in_protected_let;
    if (PUSH_UNWIND_PROTECT(3)) {
	namestring_of_disabling_file = gensym_namestring(1,
		disabling_file_pathname);
	pathname_used_p = Qunbound_in_protected_let;
	namestring_1 = Qunbound_in_protected_let;
	stream_to_disabling_file_qm = Qunbound_in_protected_let;
	if (PUSH_UNWIND_PROTECT(2)) {
	    pathname_used_p = 
		    SIMPLE_VECTOR_P(namestring_of_disabling_file) ? 
		    (EQ(ISVREF(namestring_of_disabling_file,(SI_Long)0L),
		    Qg2_defstruct_structure_name_gensym_pathname_g2_struct) 
		    ? T : Nil) : Qnil;
	    namestring_1 = SIMPLE_VECTOR_P(namestring_of_disabling_file) 
		    && EQ(ISVREF(namestring_of_disabling_file,(SI_Long)0L),
		    Qg2_defstruct_structure_name_gensym_pathname_g2_struct) 
		    ? gensym_namestring(1,namestring_of_disabling_file) : 
		    namestring_of_disabling_file;
	    stream_to_disabling_file_qm = 
		    g2_stream_open_for_input_raw(namestring_1);
	    if (stream_to_disabling_file_qm) {
		list_of_permitted_pathnames = Qunbound_in_protected_let;
		if (PUSH_UNWIND_PROTECT(1)) {
		    line_in_disabling_file_qm = 
			    g2_stream_read_line(stream_to_disabling_file_qm);
		    line_length = Nil;
		    start_index_qm = Nil;
		    end_index_qm = Nil;
		    permitted_pathname_qm = Nil;
		    ab_loopvar_ = Nil;
		    ab_loopvar__1 = Nil;
		    ab_loopvar__2 = Nil;
		  next_loop:
		    line_length = Nil;
		    start_index_qm = Nil;
		    end_index_qm = Nil;
		    permitted_pathname_qm = Nil;
		    if ( !TRUEP(line_in_disabling_file_qm))
			goto end_loop;
		    line_length = lengthw(line_in_disabling_file_qm);
		    index_1 = (SI_Long)0L;
		    ab_loop_bind_ = IFIX(line_length);
		    this_char = Nil;
		  next_loop_1:
		    if (index_1 >= ab_loop_bind_)
			goto end_loop_1;
		    this_char = 
			    FIX(UBYTE_16_ISAREF_1(line_in_disabling_file_qm,
			    index_1));
		    if (start_index_qm) {
			if (wide_character_member(this_char,list_constant_2)) {
			    end_index_qm = FIX(index_1);
			    goto end;
			}
		    }
		    else if ( !TRUEP(wide_character_member(this_char,
			    list_constant_2)))
			start_index_qm = FIX(index_1);
		    index_1 = index_1 + (SI_Long)1L;
		    goto next_loop_1;
		  end_loop_1:
		    end_index_qm = line_length;
		  end:;
		    if (start_index_qm) {
			permitted_namestring = Qunbound_in_protected_let;
			if (PUSH_UNWIND_PROTECT(0)) {
			    permitted_namestring = 
				    text_string_substring(line_in_disabling_file_qm,
				    start_index_qm,end_index_qm);
			    permitted_pathname_qm = 
				    gensym_pathname(permitted_namestring);
			    SAVE_VALUES(VALUES_1(permitted_pathname_qm));
			}
			POP_UNWIND_PROTECT(0);
			if (permitted_namestring) {
			    if ( !EQ(permitted_namestring,
				    Qunbound_in_protected_let))
				reclaim_text_string(permitted_namestring);
			}
			CONTINUE_UNWINDING(0);
			result = RESTORE_VALUES();
			temp = TRUEP(result);
		    }
		    else
			temp = TRUEP(Nil);
		    if (temp) {
			ab_loopvar__2 = 
				gensym_cons_1(permitted_pathname_qm,Nil);
			if (ab_loopvar__1)
			    M_CDR(ab_loopvar__1) = ab_loopvar__2;
			else
			    ab_loopvar_ = ab_loopvar__2;
			ab_loopvar__1 = ab_loopvar__2;
		    }
		    reclaim_text_string(line_in_disabling_file_qm);
		    line_in_disabling_file_qm = 
			    g2_stream_read_line(stream_to_disabling_file_qm);
		    goto next_loop;
		  end_loop:
		    list_of_permitted_pathnames = ab_loopvar_;
		    goto end_1;
		    list_of_permitted_pathnames = Qnil;
		  end_1:;
		    SAVE_VALUES(provide_pathname_for_launch_time_load_asking_os(command_line_keyword,
			    environment_variable_name,type_of_file_to_load,
			    default_pathname_for_file_to_load_qm,
			    list_of_permitted_pathnames,
			    provide_desired_namestring_p));
		}
		POP_UNWIND_PROTECT(1);
		if (list_of_permitted_pathnames) {
		    if ( !EQ(list_of_permitted_pathnames,
			    Qunbound_in_protected_let)) {
			permitted_pathname = Nil;
			ab_loop_list_ = list_of_permitted_pathnames;
		      next_loop_2:
			if ( !TRUEP(ab_loop_list_))
			    goto end_loop_2;
			permitted_pathname = M_CAR(ab_loop_list_);
			ab_loop_list_ = M_CDR(ab_loop_list_);
			reclaim_gensym_pathname(permitted_pathname);
			goto next_loop_2;
		      end_loop_2:
			reclaim_gensym_list_1(list_of_permitted_pathnames);
		    }
		}
		CONTINUE_UNWINDING(1);
	    }
	    else
		SAVE_VALUES(provide_pathname_for_launch_time_load_asking_os(command_line_keyword,
			environment_variable_name,type_of_file_to_load,
			default_pathname_for_file_to_load_qm,T,
			provide_desired_namestring_p));
	}
	POP_UNWIND_PROTECT(2);
	if (stream_to_disabling_file_qm) {
	    if ( !EQ(stream_to_disabling_file_qm,Qunbound_in_protected_let))
		g2_stream_close(stream_to_disabling_file_qm);
	}
	if (namestring_1) {
	    if ( !EQ(namestring_1,Qunbound_in_protected_let)) {
		if (pathname_used_p)
		    reclaim_text_string(namestring_1);
	    }
	}
	CONTINUE_UNWINDING(2);
    }
    POP_UNWIND_PROTECT(3);
    if (namestring_of_disabling_file) {
	if ( !EQ(namestring_of_disabling_file,Qunbound_in_protected_let))
	    reclaim_text_string(namestring_of_disabling_file);
    }
    CONTINUE_UNWINDING(3);
    result = RESTORE_VALUES();
    RESTORE_STACK();
    return result;
}

/* SUFFICIENT-PATHNAME-FOR-LAUNCH-TIME-LOAD-P */
Object sufficient_pathname_for_launch_time_load_p(pathname_1)
    Object pathname_1;
{
    x_note_fn_call(38,185);
    if (ISVREF(pathname_1,(SI_Long)3L))
	return VALUES_1(ISVREF(pathname_1,(SI_Long)4L));
    else
	return VALUES_1(Nil);
}

/* GENSYM-DELETE-FILE */
Object gensym_delete_file(convertible_thing)
    Object convertible_thing;
{
    Object current_local_filename_parser, current_local_namestring_generator;
    Object convert_file_strings_to_uppercase_p;
    volatile Object pathname_qm;
    volatile Object namestring_1;
    Declare_stack_pointer;
    Declare_catch(2);
    Declare_special(1);
    Object result;

    x_note_fn_call(38,186);
    SAVE_STACK();
    current_local_filename_parser = Local_filename_parser;
    current_local_namestring_generator = Local_namestring_generator;
    convert_file_strings_to_uppercase_p = 
	    getfq_function_no_default(INLINE_SYMBOL_PLIST(current_local_filename_parser),
	    Qconvert_file_strings_to_uppercase_p);
    PUSH_SPECIAL(Convert_file_strings_to_uppercase_p,convert_file_strings_to_uppercase_p,
	    0);
      pathname_qm = Qunbound_in_protected_let;
      if (PUSH_UNWIND_PROTECT(1)) {
	  pathname_qm = convert_to_gensym_pathname(convertible_thing,
		  current_local_filename_parser,
		  current_local_namestring_generator);
	  if (pathname_qm) {
	      namestring_1 = Qunbound_in_protected_let;
	      if (PUSH_UNWIND_PROTECT(0)) {
		  namestring_1 = gensym_namestring(1,pathname_qm);
		  SAVE_VALUES(g2_stream_delete_file(namestring_1));
	      }
	      POP_UNWIND_PROTECT(0);
	      if (namestring_1) {
		  if ( !EQ(namestring_1,Qunbound_in_protected_let))
		      reclaim_text_string(namestring_1);
	      }
	      CONTINUE_UNWINDING(0);
	  }
	  else
	      SAVE_VALUES(VALUES_1(Nil));
      }
      POP_UNWIND_PROTECT(1);
      if (pathname_qm) {
	  if ( !EQ(pathname_qm,Qunbound_in_protected_let)) {
	      if (pathname_qm)
		  reclaim_gensym_pathname(pathname_qm);
	  }
      }
      CONTINUE_UNWINDING(1);
      result = RESTORE_VALUES();
    POP_SPECIAL();
    RESTORE_STACK();
    return result;
}

/* GENSYM-CLOSE-AND-DELETE-FILE */
Object gensym_close_and_delete_file(stream)
    Object stream;
{
    Object current_local_filename_parser, current_local_namestring_generator;
    Object convert_file_strings_to_uppercase_p;
    volatile Object pathname_qm;
    volatile Object namestring_1;
    Declare_stack_pointer;
    Declare_catch(2);
    Declare_special(1);
    Object result;

    x_note_fn_call(38,187);
    SAVE_STACK();
    current_local_filename_parser = Local_filename_parser;
    current_local_namestring_generator = Local_namestring_generator;
    convert_file_strings_to_uppercase_p = 
	    getfq_function_no_default(INLINE_SYMBOL_PLIST(current_local_filename_parser),
	    Qconvert_file_strings_to_uppercase_p);
    PUSH_SPECIAL(Convert_file_strings_to_uppercase_p,convert_file_strings_to_uppercase_p,
	    0);
      pathname_qm = Qunbound_in_protected_let;
      if (PUSH_UNWIND_PROTECT(1)) {
	  pathname_qm = convert_to_gensym_pathname(stream,
		  current_local_filename_parser,
		  current_local_namestring_generator);
	  if (pathname_qm) {
	      namestring_1 = Qunbound_in_protected_let;
	      if (PUSH_UNWIND_PROTECT(0)) {
		  namestring_1 = gensym_namestring(1,pathname_qm);
		  g2_stream_close(stream);
		  SAVE_VALUES(g2_stream_delete_file(namestring_1));
	      }
	      POP_UNWIND_PROTECT(0);
	      if (namestring_1) {
		  if ( !EQ(namestring_1,Qunbound_in_protected_let))
		      reclaim_text_string(namestring_1);
	      }
	      CONTINUE_UNWINDING(0);
	  }
	  else
	      SAVE_VALUES(VALUES_1(Nil));
      }
      POP_UNWIND_PROTECT(1);
      if (pathname_qm) {
	  if ( !EQ(pathname_qm,Qunbound_in_protected_let)) {
	      if (pathname_qm)
		  reclaim_gensym_pathname(pathname_qm);
	  }
      }
      CONTINUE_UNWINDING(1);
      result = RESTORE_VALUES();
    POP_SPECIAL();
    RESTORE_STACK();
    return result;
}

/* GENSYM-DIRECTORY */
Object gensym_directory varargs_1(int, n)
{
    Object convertible_thing;
    Object include_unreadable_files_p, current_local_filename_parser;
    Object current_local_namestring_generator;
    Object convert_file_strings_to_uppercase_p;
    volatile Object directory_pathname_qm;
    volatile Object directory_substring;
    volatile Object name_and_type_substring;
    volatile Object version_substring_qm;
    Object file_system, list_of_defaulted_filenames_qm, defaulted_filename;
    Object ab_loop_list_, merged_pathname_qm, ab_loopvar_, ab_loopvar__1;
    Object ab_loopvar__2;
    Declare_varargs_nonrelocating;
    Declare_stack_pointer;
    Declare_catch(2);
    Declare_special(1);
    Object result;

    x_note_fn_call(38,188);
    INIT_ARGS_nonrelocating();
    convertible_thing = REQUIRED_ARG_nonrelocating();
    SAVE_STACK();
    include_unreadable_files_p = OPTIONAL_ARG_P_nonrelocating() ? 
	    OPTIONAL_ARG_nonrelocating() : T;
    END_ARGS_nonrelocating();
    current_local_filename_parser = Local_filename_parser;
    current_local_namestring_generator = Local_namestring_generator;
    convert_file_strings_to_uppercase_p = 
	    getfq_function_no_default(INLINE_SYMBOL_PLIST(current_local_filename_parser),
	    Qconvert_file_strings_to_uppercase_p);
    PUSH_SPECIAL(Convert_file_strings_to_uppercase_p,convert_file_strings_to_uppercase_p,
	    0);
      directory_pathname_qm = Qunbound_in_protected_let;
      if (PUSH_UNWIND_PROTECT(1)) {
	  directory_pathname_qm = 
		  convert_to_gensym_pathname(convertible_thing,
		  current_local_filename_parser,
		  current_local_namestring_generator);
	  if (directory_pathname_qm) {
	      directory_substring = Qunbound_in_protected_let;
	      name_and_type_substring = Qunbound_in_protected_let;
	      version_substring_qm = Qunbound_in_protected_let;
	      file_system = Qunbound_in_protected_let;
	      if (PUSH_UNWIND_PROTECT(0)) {
		  directory_substring = 
			  gensym_directory_and_above_namestring(2,
			  directory_pathname_qm,Nil);
		  name_and_type_substring = 
			  gensym_name_and_type_namestring(2,
			  directory_pathname_qm,Nil);
		  version_substring_qm = ISVREF(directory_pathname_qm,
			  (SI_Long)6L) ? gensym_version_namestring(2,
			  directory_pathname_qm,Nil) : Nil;
		  file_system = ISVREF(directory_pathname_qm,(SI_Long)8L);
		  list_of_defaulted_filenames_qm = 
			  g2_stream_directory(directory_substring,
			  name_and_type_substring,version_substring_qm,
			  file_system,include_unreadable_files_p);
		  if (list_of_defaulted_filenames_qm) {
		      defaulted_filename = Nil;
		      ab_loop_list_ = list_of_defaulted_filenames_qm;
		      merged_pathname_qm = Nil;
		      ab_loopvar_ = Nil;
		      ab_loopvar__1 = Nil;
		      ab_loopvar__2 = Nil;
		    next_loop:
		      if ( !TRUEP(ab_loop_list_))
			  goto end_loop;
		      defaulted_filename = M_CAR(ab_loop_list_);
		      ab_loop_list_ = M_CDR(ab_loop_list_);
		      merged_pathname_qm = 
			      gensym_merge_pathnames_function(defaulted_filename,
			      directory_substring,Nil);
		      if (merged_pathname_qm) {
			  ab_loopvar__2 = 
				  gensym_cons_1(canonicize_host_name_from_file_system(merged_pathname_qm),
				  Nil);
			  if (ab_loopvar__1)
			      M_CDR(ab_loopvar__1) = ab_loopvar__2;
			  else
			      ab_loopvar_ = ab_loopvar__2;
			  ab_loopvar__1 = ab_loopvar__2;
		      }
		      reclaim_text_string(defaulted_filename);
		      goto next_loop;
		    end_loop:
		      reclaim_gensym_list_1(list_of_defaulted_filenames_qm);
		      SAVE_VALUES(VALUES_1(ab_loopvar_));
		      goto end;
		      SAVE_VALUES(VALUES_1(Qnil));
		    end:;
		  }
		  else
		      SAVE_VALUES(VALUES_1(Nil));
	      }
	      POP_UNWIND_PROTECT(0);
	      if (version_substring_qm) {
		  if ( !EQ(version_substring_qm,Qunbound_in_protected_let))
		      reclaim_text_string(version_substring_qm);
	      }
	      if (name_and_type_substring) {
		  if ( !EQ(name_and_type_substring,Qunbound_in_protected_let))
		      reclaim_text_string(name_and_type_substring);
	      }
	      if (directory_substring) {
		  if ( !EQ(directory_substring,Qunbound_in_protected_let))
		      reclaim_text_string(directory_substring);
	      }
	      CONTINUE_UNWINDING(0);
	  }
	  else
	      SAVE_VALUES(VALUES_1(Nil));
      }
      POP_UNWIND_PROTECT(1);
      if (directory_pathname_qm) {
	  if ( !EQ(directory_pathname_qm,Qunbound_in_protected_let)) {
	      if (directory_pathname_qm)
		  reclaim_gensym_pathname(directory_pathname_qm);
	  }
      }
      CONTINUE_UNWINDING(1);
      result = RESTORE_VALUES();
    POP_SPECIAL();
    RESTORE_STACK();
    return result;
}

/* GENSYM-SUBDIRECTORIES */
Object gensym_subdirectories varargs_1(int, n)
{
    Object convertible_thing;
    Object include_unreadable_files_p, current_local_filename_parser;
    Object current_local_namestring_generator;
    Object convert_file_strings_to_uppercase_p;
    volatile Object directory_pathname_qm;
    volatile Object directory_substring;
    volatile Object name_and_type_substring;
    volatile Object version_substring_qm;
    Object file_system, list_of_defaulted_filenames_qm, defaulted_filename;
    Object ab_loop_list_, merged_pathname_qm, ab_loopvar_, ab_loopvar__1;
    Object ab_loopvar__2;
    Declare_varargs_nonrelocating;
    Declare_stack_pointer;
    Declare_catch(2);
    Declare_special(1);
    Object result;

    x_note_fn_call(38,189);
    INIT_ARGS_nonrelocating();
    convertible_thing = REQUIRED_ARG_nonrelocating();
    SAVE_STACK();
    include_unreadable_files_p = OPTIONAL_ARG_P_nonrelocating() ? 
	    OPTIONAL_ARG_nonrelocating() : T;
    END_ARGS_nonrelocating();
    current_local_filename_parser = Local_filename_parser;
    current_local_namestring_generator = Local_namestring_generator;
    convert_file_strings_to_uppercase_p = 
	    getfq_function_no_default(INLINE_SYMBOL_PLIST(current_local_filename_parser),
	    Qconvert_file_strings_to_uppercase_p);
    PUSH_SPECIAL(Convert_file_strings_to_uppercase_p,convert_file_strings_to_uppercase_p,
	    0);
      directory_pathname_qm = Qunbound_in_protected_let;
      if (PUSH_UNWIND_PROTECT(1)) {
	  directory_pathname_qm = 
		  convert_to_gensym_pathname(convertible_thing,
		  current_local_filename_parser,
		  current_local_namestring_generator);
	  if (directory_pathname_qm) {
	      directory_substring = Qunbound_in_protected_let;
	      name_and_type_substring = Qunbound_in_protected_let;
	      version_substring_qm = Qunbound_in_protected_let;
	      file_system = Qunbound_in_protected_let;
	      if (PUSH_UNWIND_PROTECT(0)) {
		  directory_substring = 
			  gensym_directory_and_above_namestring(2,
			  directory_pathname_qm,Nil);
		  name_and_type_substring = 
			  gensym_name_and_type_namestring(2,
			  directory_pathname_qm,Nil);
		  version_substring_qm = ISVREF(directory_pathname_qm,
			  (SI_Long)6L) ? gensym_version_namestring(2,
			  directory_pathname_qm,Nil) : Nil;
		  file_system = ISVREF(directory_pathname_qm,(SI_Long)8L);
		  list_of_defaulted_filenames_qm = 
			  g2_stream_subdirectories(directory_substring,
			  name_and_type_substring,version_substring_qm,
			  file_system,include_unreadable_files_p);
		  if (list_of_defaulted_filenames_qm) {
		      defaulted_filename = Nil;
		      ab_loop_list_ = list_of_defaulted_filenames_qm;
		      merged_pathname_qm = Nil;
		      ab_loopvar_ = Nil;
		      ab_loopvar__1 = Nil;
		      ab_loopvar__2 = Nil;
		    next_loop:
		      if ( !TRUEP(ab_loop_list_))
			  goto end_loop;
		      defaulted_filename = M_CAR(ab_loop_list_);
		      ab_loop_list_ = M_CDR(ab_loop_list_);
		      merged_pathname_qm = 
			      gensym_merge_pathnames_function(defaulted_filename,
			      directory_substring,Nil);
		      if (merged_pathname_qm) {
			  ab_loopvar__2 = 
				  gensym_cons_1(canonicize_host_name_from_file_system(merged_pathname_qm),
				  Nil);
			  if (ab_loopvar__1)
			      M_CDR(ab_loopvar__1) = ab_loopvar__2;
			  else
			      ab_loopvar_ = ab_loopvar__2;
			  ab_loopvar__1 = ab_loopvar__2;
		      }
		      reclaim_text_string(defaulted_filename);
		      goto next_loop;
		    end_loop:
		      reclaim_gensym_list_1(list_of_defaulted_filenames_qm);
		      SAVE_VALUES(VALUES_1(ab_loopvar_));
		      goto end;
		      SAVE_VALUES(VALUES_1(Qnil));
		    end:;
		  }
		  else
		      SAVE_VALUES(VALUES_1(Nil));
	      }
	      POP_UNWIND_PROTECT(0);
	      if (version_substring_qm) {
		  if ( !EQ(version_substring_qm,Qunbound_in_protected_let))
		      reclaim_text_string(version_substring_qm);
	      }
	      if (name_and_type_substring) {
		  if ( !EQ(name_and_type_substring,Qunbound_in_protected_let))
		      reclaim_text_string(name_and_type_substring);
	      }
	      if (directory_substring) {
		  if ( !EQ(directory_substring,Qunbound_in_protected_let))
		      reclaim_text_string(directory_substring);
	      }
	      CONTINUE_UNWINDING(0);
	  }
	  else
	      SAVE_VALUES(VALUES_1(Nil));
      }
      POP_UNWIND_PROTECT(1);
      if (directory_pathname_qm) {
	  if ( !EQ(directory_pathname_qm,Qunbound_in_protected_let)) {
	      if (directory_pathname_qm)
		  reclaim_gensym_pathname(directory_pathname_qm);
	  }
      }
      CONTINUE_UNWINDING(1);
      result = RESTORE_VALUES();
    POP_SPECIAL();
    RESTORE_STACK();
    return result;
}

/* ALL-SUBDIRECTORIES-IN-DIRECTORY */
Object all_subdirectories_in_directory(directory_spec)
    Object directory_spec;
{
    volatile Object directory_pathname_qm;
    volatile Object directory_string;
    Object canonical_wild_directory_pathname_qm;
    Declare_stack_pointer;
    Declare_catch(1);
    Object result;

    x_note_fn_call(38,190);
    SAVE_STACK();
    directory_pathname_qm = Qunbound_in_protected_let;
    directory_string = Qunbound_in_protected_let;
    if (PUSH_UNWIND_PROTECT(0)) {
	directory_pathname_qm = gensym_pathname(directory_spec);
	directory_string = gensym_device_and_directory_namestring(1,
		directory_pathname_qm);
	if (directory_pathname_qm) {
	    canonical_wild_directory_pathname_qm = 
		    make_canonical_wild_directory_pathname_if_possible(directory_pathname_qm,
		    directory_string);
	    if (canonical_wild_directory_pathname_qm) {
		reclaim_gensym_pathname(directory_pathname_qm);
		directory_pathname_qm = canonical_wild_directory_pathname_qm;
	    }
	}
	SAVE_VALUES(gensym_subdirectories(1,directory_pathname_qm));
    }
    POP_UNWIND_PROTECT(0);
    if (directory_string) {
	if ( !EQ(directory_string,Qunbound_in_protected_let))
	    reclaim_text_string(directory_string);
    }
    if (directory_pathname_qm) {
	if ( !EQ(directory_pathname_qm,Qunbound_in_protected_let))
	    reclaim_gensym_pathname(directory_pathname_qm);
    }
    CONTINUE_UNWINDING(0);
    result = RESTORE_VALUES();
    RESTORE_STACK();
    return result;
}

/* RECLAIM-GENSYM-DIRECTORY-RESULTS */
Object reclaim_gensym_directory_results(directory_results_qm)
    Object directory_results_qm;
{
    Object pathname_1, ab_loop_list_;

    x_note_fn_call(38,191);
    if (directory_results_qm) {
	pathname_1 = Nil;
	ab_loop_list_ = directory_results_qm;
      next_loop:
	if ( !TRUEP(ab_loop_list_))
	    goto end_loop;
	pathname_1 = M_CAR(ab_loop_list_);
	ab_loop_list_ = M_CDR(ab_loop_list_);
	reclaim_gensym_pathname(pathname_1);
	goto next_loop;
      end_loop:
	reclaim_gensym_list_1(directory_results_qm);
	return VALUES_1(Qnil);
    }
    else
	return VALUES_1(Nil);
}

/* FILESTRING-NAMES-REAL-DIRECTORY-P */
Object filestring_names_real_directory_p(filestring)
    Object filestring;
{
    Object dwim_directory_pathname, directory_as_file_namestring, temp;

    x_note_fn_call(38,192);
    dwim_directory_pathname = gensym_file_as_directory(filestring);
    if (dwim_directory_pathname);
    else
	dwim_directory_pathname = gensym_pathname(filestring);
    directory_as_file_namestring = gensym_namestring(1,
	    dwim_directory_pathname);
    temp = g2_stream_directory_p(directory_as_file_namestring);
    reclaim_gensym_pathname(dwim_directory_pathname);
    reclaim_text_string(directory_as_file_namestring);
    return VALUES_1(temp);
}

static Object array_constant_6;    /* # */

/* INITIALIZE-PROCESS-SPECIFIC-SYSTEM-PATHNAME */
Object initialize_process_specific_system_pathname()
{
    volatile Object default_directory;
    Declare_stack_pointer;
    Declare_catch(1);
    Object result;

    x_note_fn_call(38,193);
    SAVE_STACK();
    default_directory = Qunbound_in_protected_let;
    if (PUSH_UNWIND_PROTECT(0)) {
	default_directory = g2_stream_get_default_directory();
	SAVE_VALUES(gensym_make_pathname_function(7,Nil,Nil,Nil,
		array_constant_6,Nil,Nil,default_directory));
    }
    POP_UNWIND_PROTECT(0);
    if (default_directory) {
	if ( !EQ(default_directory,Qunbound_in_protected_let))
	    reclaim_text_string(default_directory);
    }
    CONTINUE_UNWINDING(0);
    result = RESTORE_VALUES();
    RESTORE_STACK();
    return result;
}

static Object Kabsolute;           /* :absolute */

static Object Krelative;           /* :relative */

/* SUPPLY-ABSOLUTE-DIRECTORY-SUBCOMPONENTS */
Object supply_absolute_directory_subcomponents(pathname_1)
    Object pathname_1;
{
    Object relative_directory;
    volatile Object absolute_directory_string_qm;
    volatile Object absolute_directory_pathname;
    Object absolute_directory, component, ab_loop_list_, ab_loopvar_;
    Object ab_loopvar__1, ab_loopvar__2, gensym_pop_store, cons_1, next_cons;
    Object temp;
    Declare_stack_pointer;
    Declare_catch(2);
    Object result;

    x_note_fn_call(38,194);
    SAVE_STACK();
    relative_directory = ISVREF(pathname_1,(SI_Long)3L);
    if ( !EQ(CAR(relative_directory),Kabsolute)) {
	absolute_directory_string_qm = Qunbound_in_protected_let;
	if (PUSH_UNWIND_PROTECT(1)) {
	    absolute_directory_string_qm = g2_stream_get_default_directory();
	    if (absolute_directory_string_qm) {
		absolute_directory_pathname = Qunbound_in_protected_let;
		absolute_directory = Qunbound_in_protected_let;
		if (PUSH_UNWIND_PROTECT(0)) {
		    absolute_directory_pathname = 
			    gensym_merge_pathnames_function(absolute_directory_string_qm,
			    pathname_1,Nil);
		    component = Nil;
		    ab_loop_list_ = ISVREF(absolute_directory_pathname,
			    (SI_Long)3L);
		    ab_loopvar_ = Nil;
		    ab_loopvar__1 = Nil;
		    ab_loopvar__2 = Nil;
		  next_loop:
		    if ( !TRUEP(ab_loop_list_))
			goto end_loop;
		    component = M_CAR(ab_loop_list_);
		    ab_loop_list_ = M_CDR(ab_loop_list_);
		    ab_loopvar__2 = gensym_cons_1(SYMBOLP(component) ? 
			    component : copy_text_string(component),Nil);
		    if (ab_loopvar__1)
			M_CDR(ab_loopvar__1) = ab_loopvar__2;
		    else
			ab_loopvar_ = ab_loopvar__2;
		    ab_loopvar__1 = ab_loopvar__2;
		    goto next_loop;
		  end_loop:
		    absolute_directory = ab_loopvar_;
		    goto end;
		    absolute_directory = Qnil;
		  end:;
		    if (EQ(CAR(relative_directory),Krelative)) {
			gensym_pop_store = Nil;
			cons_1 = ISVREF(pathname_1,(SI_Long)3L);
			if (cons_1) {
			    gensym_pop_store = M_CAR(cons_1);
			    next_cons = M_CDR(cons_1);
			    inline_note_reclaim_cons(cons_1,Qab_gensym);
			    temp = Available_gensym_conses;
			    M_CDR(cons_1) = temp;
			    Available_gensym_conses = cons_1;
			}
			else
			    next_cons = Nil;
			SVREF(pathname_1,FIX((SI_Long)3L)) = next_cons;
		    }
		    temp = nconc2(absolute_directory,ISVREF(pathname_1,
			    (SI_Long)3L));
		    SAVE_VALUES(VALUES_1(SVREF(pathname_1,
			    FIX((SI_Long)3L)) = temp));
		}
		POP_UNWIND_PROTECT(0);
		if (absolute_directory_pathname) {
		    if ( !EQ(absolute_directory_pathname,
			    Qunbound_in_protected_let))
			reclaim_gensym_pathname(absolute_directory_pathname);
		}
		CONTINUE_UNWINDING(0);
	    }
	    else
		SAVE_VALUES(VALUES_1(Nil));
	}
	POP_UNWIND_PROTECT(1);
	if (absolute_directory_string_qm) {
	    if ( !EQ(absolute_directory_string_qm,Qunbound_in_protected_let))
		reclaim_text_string(absolute_directory_string_qm);
	}
	CONTINUE_UNWINDING(1);
	result = RESTORE_VALUES();
	RESTORE_STACK();
	return result;
    }
    else {
	RESTORE_STACK();
	return VALUES_1(Nil);
    }
}

static Object list_constant_3;     /* # */

/* AUGMENT-PATHNAME-FROM-FILE-SYSTEM */
Object augment_pathname_from_file_system(pathname_1,namestring_1)
    Object pathname_1, namestring_1;
{
    Object temp, svref_new_value;

    x_note_fn_call(38,195);
    if ( !TRUEP(memq_function(ISVREF(pathname_1,(SI_Long)8L),
		list_constant_3))) {
	temp = ISVREF(pathname_1,(SI_Long)6L);
	if ( !(INTEGERP(temp) || text_string_p(ISVREF(pathname_1,
		(SI_Long)6L)))) {
	    svref_new_value = g2_stream_get_version(namestring_1);
	    SVREF(pathname_1,FIX((SI_Long)6L)) = svref_new_value;
	}
    }
    svref_new_value = coalesce_directory_components(ISVREF(pathname_1,
	    (SI_Long)3L));
    SVREF(pathname_1,FIX((SI_Long)3L)) = svref_new_value;
    maybe_supply_home_to_possible_unix_pathname(pathname_1);
    if ( !(EQ(ISVREF(pathname_1,(SI_Long)8L),Qvms) && ISVREF(pathname_1,
	    (SI_Long)2L)))
	supply_absolute_directory_subcomponents(pathname_1);
    if ( !TRUEP(memq_function(ISVREF(pathname_1,(SI_Long)8L),
		list_constant_3))) {
	if ( !TRUEP(ISVREF(pathname_1,(SI_Long)2L))) {
	    svref_new_value = g2_stream_get_device(namestring_1);
	    SVREF(pathname_1,FIX((SI_Long)2L)) = svref_new_value;
	}
    }
    return VALUES_1(pathname_1);
}

static Object string_constant_7;   /* "." */

static Object string_constant_8;   /* "[]" */

/* GENSYM-MAXIMUM-FILE-NAME-LENGTH */
Object gensym_maximum_file_name_length(convertible_thing)
    Object convertible_thing;
{
    Object current_local_filename_parser, current_local_namestring_generator;
    Object convert_file_strings_to_uppercase_p, pathname_qm;
    volatile Object directory_namestring_1;
    Object temp;
    Declare_stack_pointer;
    Declare_catch(1);
    Declare_special(1);
    Object result;

    x_note_fn_call(38,196);
    SAVE_STACK();
    current_local_filename_parser = Local_filename_parser;
    current_local_namestring_generator = Local_namestring_generator;
    convert_file_strings_to_uppercase_p = 
	    getfq_function_no_default(INLINE_SYMBOL_PLIST(current_local_filename_parser),
	    Qconvert_file_strings_to_uppercase_p);
    PUSH_SPECIAL(Convert_file_strings_to_uppercase_p,convert_file_strings_to_uppercase_p,
	    0);
      pathname_qm = convert_to_gensym_pathname(convertible_thing,
	      current_local_filename_parser,
	      current_local_namestring_generator);
      if (pathname_qm) {
	  directory_namestring_1 = Qunbound_in_protected_let;
	  if (PUSH_UNWIND_PROTECT(0)) {
	      directory_namestring_1 = gensym_directory_namestring(1,
		      pathname_qm);
	      if (EQUAL(directory_namestring_1,string_constant)) {
		  temp = ISVREF(pathname_qm,(SI_Long)8L);
		  if (EQ(temp,Qunix))
		      SAVE_VALUES(g2_stream_maximum_file_name_length(string_constant_7));
		  else if (EQ(temp,Qvms))
		      SAVE_VALUES(g2_stream_maximum_file_name_length(string_constant_8));
		  else if (EQ(temp,Qdos) || EQ(temp,Qwin32) || EQ(temp,
			  Qgeneralized_dos))
		      SAVE_VALUES(g2_stream_maximum_file_name_length(string_constant_7));
		  else
		      SAVE_VALUES(VALUES_1(Nil));
	      }
	      else
		  SAVE_VALUES(g2_stream_maximum_file_name_length(directory_namestring_1));
	  }
	  POP_UNWIND_PROTECT(0);
	  if (directory_namestring_1) {
	      if ( !EQ(directory_namestring_1,Qunbound_in_protected_let))
		  reclaim_text_string(directory_namestring_1);
	  }
	  CONTINUE_UNWINDING(0);
	  result = RESTORE_VALUES();
      }
      else
	  result = VALUES_1(Nil);
    POP_SPECIAL();
    RESTORE_STACK();
    return result;
}

Object Root_name_for_temp_file = UNBOUND;

Object Maximum_number_of_tries_to_create_temp_file = UNBOUND;

/* FIND-AND-OPEN-TEMP-FILE */
Object find_and_open_temp_file(default_pathname_for_temp_file)
    Object default_pathname_for_temp_file;
{
    Object tag_temp, tagbody, next_case;
    volatile Object base_namestring_for_temp_file;
    volatile Object pathname_for_temp_file;
    volatile Object pathname_with_intended_name_qm;
    volatile Object temp_namestring;
    Object stream_qm;
    volatile SI_Long counter_for_temp_file_truename;
    Declare_stack_pointer;
    Declare_catch(4);
    Object result;

    x_note_fn_call(38,197);
    SAVE_STACK();
    counter_for_temp_file_truename = (SI_Long)-1L;
    tag_temp = UNIQUE_TAG(Qnil);
    if (PUSH_CATCH(tag_temp,3)) {
	tagbody = UNIQUE_TAG(Qtagbody);
	next_case = FIX((SI_Long)0L);
	while (next_case) {
	    if (PUSH_CATCH(tagbody,2)) {
		switch (INTEGER_TO_LONG(next_case)) {
		  case 0:
		  next_loop:
		  case 1:
		    if ( !(counter_for_temp_file_truename < 
			    IFIX(Maximum_number_of_tries_to_create_temp_file))) 
				{
			result = VALUES_1(FIX((SI_Long)2L));
			THROW(tagbody,result);
		    }
		    base_namestring_for_temp_file = Qunbound_in_protected_let;
		    pathname_for_temp_file = Qunbound_in_protected_let;
		    pathname_with_intended_name_qm = Qunbound_in_protected_let;
		    if (PUSH_UNWIND_PROTECT(1)) {
			base_namestring_for_temp_file = 
				tformat_text_string(2,
				Root_name_for_temp_file,
				counter_for_temp_file_truename == 
				(SI_Long)-1L ? 
				FIX(counter_for_temp_file_truename) : 
				FIX(counter_for_temp_file_truename));
			pathname_for_temp_file = 
				gensym_merge_pathnames_function(base_namestring_for_temp_file,
				default_pathname_for_temp_file,Nil);
			pathname_with_intended_name_qm = 
				gensym_probe_file(pathname_for_temp_file);
			if ( !TRUEP(pathname_with_intended_name_qm)) {
			    temp_namestring = Qunbound_in_protected_let;
			    if (PUSH_UNWIND_PROTECT(0)) {
				temp_namestring = gensym_namestring(1,
					pathname_for_temp_file);
				stream_qm = 
					g2_stream_open_for_binary_output(temp_namestring);
				if (stream_qm) {
				    result = VALUES_1(stream_qm);
				    THROW(tag_temp,result);
				}
				else if ( 
					!TRUEP(most_recently_encountered_file_already_exists_error_p())) 
					    {
				    result = VALUES_1(FIX((SI_Long)2L));
				    THROW(tagbody,result);
				}
			    }
			    POP_UNWIND_PROTECT(0);
			    if (temp_namestring) {
				if ( !EQ(temp_namestring,
					Qunbound_in_protected_let))
				    reclaim_text_string(temp_namestring);
			    }
			    CONTINUE_UNWINDING(0);
			}
		    }
		    POP_UNWIND_PROTECT(1);
		    if (pathname_with_intended_name_qm) {
			if ( !EQ(pathname_with_intended_name_qm,
				Qunbound_in_protected_let))
			    reclaim_gensym_pathname(pathname_with_intended_name_qm);
		    }
		    if (pathname_for_temp_file) {
			if ( !EQ(pathname_for_temp_file,
				Qunbound_in_protected_let))
			    reclaim_gensym_pathname(pathname_for_temp_file);
		    }
		    if (base_namestring_for_temp_file) {
			if ( !EQ(base_namestring_for_temp_file,
				Qunbound_in_protected_let))
			    reclaim_text_string(base_namestring_for_temp_file);
		    }
		    CONTINUE_UNWINDING(1);
		    counter_for_temp_file_truename = 
			    counter_for_temp_file_truename + (SI_Long)1L;
		    result = VALUES_1(FIX((SI_Long)1L));
		    THROW(tagbody,result);
		  end_loop:
		  case 2:;
		}
		next_case = Qnil;
	    }
	    else
		next_case = CATCH_VALUES();
	    POP_CATCH(2);
	}
	result = VALUES_1(Qnil);
    }
    else
	result = CATCH_VALUES();
    POP_CATCH(3);
    RESTORE_STACK();
    return result;
}

/* GENSYM-PROBE-FILE-FOR-TRUTH-VALUE */
Object gensym_probe_file_for_truth_value(convertible_thing)
    Object convertible_thing;
{
    Object current_local_filename_parser, current_local_namestring_generator;
    Object convert_file_strings_to_uppercase_p;
    volatile Object pathname_qm;
    Object temp, namestring_qm;
    Declare_stack_pointer;
    Declare_catch(1);
    Declare_special(1);
    Object result;

    x_note_fn_call(38,198);
    SAVE_STACK();
    current_local_filename_parser = Local_filename_parser;
    current_local_namestring_generator = Local_namestring_generator;
    convert_file_strings_to_uppercase_p = 
	    getfq_function_no_default(INLINE_SYMBOL_PLIST(current_local_filename_parser),
	    Qconvert_file_strings_to_uppercase_p);
    PUSH_SPECIAL(Convert_file_strings_to_uppercase_p,convert_file_strings_to_uppercase_p,
	    0);
      pathname_qm = Qunbound_in_protected_let;
      if (PUSH_UNWIND_PROTECT(0)) {
	  pathname_qm = convert_to_gensym_pathname(convertible_thing,
		  current_local_filename_parser,
		  current_local_namestring_generator);
	  if (pathname_qm) {
	      temp = ISVREF(pathname_qm,(SI_Long)10L);
	      namestring_qm = FUNCALL_1(temp,pathname_qm);
	      if (namestring_qm) {
		  temp = g2_stream_p(convertible_thing);
		  if (temp);
		  else
		      temp = g2_stream_probe_file_for_read(namestring_qm);
		  SAVE_VALUES(VALUES_1(temp));
		  reclaim_text_string(namestring_qm);
	      }
	      else
		  SAVE_VALUES(VALUES_1(Nil));
	  }
	  else
	      SAVE_VALUES(VALUES_1(Nil));
      }
      POP_UNWIND_PROTECT(0);
      if (pathname_qm) {
	  if ( !EQ(pathname_qm,Qunbound_in_protected_let)) {
	      if (pathname_qm)
		  reclaim_gensym_pathname(pathname_qm);
	  }
      }
      CONTINUE_UNWINDING(0);
      result = RESTORE_VALUES();
    POP_SPECIAL();
    RESTORE_STACK();
    return result;
}

/* GENSYM-PROBE-FILE */
Object gensym_probe_file(convertible_thing)
    Object convertible_thing;
{
    Object current_local_filename_parser, current_local_namestring_generator;
    Object convert_file_strings_to_uppercase_p, pathname_qm, temp;
    Object namestring_qm;
    Declare_special(1);
    Object result;

    x_note_fn_call(38,199);
    current_local_filename_parser = Local_filename_parser;
    current_local_namestring_generator = Local_namestring_generator;
    convert_file_strings_to_uppercase_p = 
	    getfq_function_no_default(INLINE_SYMBOL_PLIST(current_local_filename_parser),
	    Qconvert_file_strings_to_uppercase_p);
    PUSH_SPECIAL(Convert_file_strings_to_uppercase_p,convert_file_strings_to_uppercase_p,
	    0);
      pathname_qm = convert_to_gensym_pathname(convertible_thing,
	      current_local_filename_parser,
	      current_local_namestring_generator);
      if (pathname_qm) {
	  temp = ISVREF(pathname_qm,(SI_Long)10L);
	  namestring_qm = FUNCALL_1(temp,pathname_qm);
	  if (namestring_qm) {
	      if (g2_stream_p(convertible_thing))
		  temp = pathname_qm;
	      else if (g2_stream_probe_file_for_read(namestring_qm)) {
		  augment_pathname_from_file_system(pathname_qm,namestring_qm);
		  temp = pathname_qm;
	      }
	      else {
		  reclaim_gensym_pathname(pathname_qm);
		  temp = Nil;
	      }
	      reclaim_text_string(namestring_qm);
	      result = VALUES_1(temp);
	  }
	  else {
	      reclaim_gensym_pathname(pathname_qm);
	      result = VALUES_1(Nil);
	  }
      }
      else
	  result = VALUES_1(Nil);
    POP_SPECIAL();
    return result;
}

/* GENSYM-PROBE-FILE-FOR-WRITE */
Object gensym_probe_file_for_write(convertible_thing)
    Object convertible_thing;
{
    Object current_local_filename_parser, current_local_namestring_generator;
    Object convert_file_strings_to_uppercase_p, pathname_qm;
    volatile Object namestring_qm;
    Object temp;
    Declare_stack_pointer;
    Declare_catch(1);
    Declare_special(1);
    Object result;

    x_note_fn_call(38,200);
    SAVE_STACK();
    current_local_filename_parser = Local_filename_parser;
    current_local_namestring_generator = Local_namestring_generator;
    convert_file_strings_to_uppercase_p = 
	    getfq_function_no_default(INLINE_SYMBOL_PLIST(current_local_filename_parser),
	    Qconvert_file_strings_to_uppercase_p);
    PUSH_SPECIAL(Convert_file_strings_to_uppercase_p,convert_file_strings_to_uppercase_p,
	    0);
      pathname_qm = convert_to_gensym_pathname(convertible_thing,
	      current_local_filename_parser,
	      current_local_namestring_generator);
      if (pathname_qm) {
	  namestring_qm = Qunbound_in_protected_let;
	  if (PUSH_UNWIND_PROTECT(0)) {
	      temp = ISVREF(pathname_qm,(SI_Long)10L);
	      namestring_qm = FUNCALL_1(temp,pathname_qm);
	      if (namestring_qm && 
		      g2_stream_probe_file_for_write(namestring_qm)) {
		  augment_pathname_from_file_system(pathname_qm,namestring_qm);
		  SAVE_VALUES(VALUES_1(pathname_qm));
	      }
	      else {
		  reclaim_gensym_pathname(pathname_qm);
		  SAVE_VALUES(VALUES_1(Nil));
	      }
	  }
	  POP_UNWIND_PROTECT(0);
	  if (namestring_qm) {
	      if ( !EQ(namestring_qm,Qunbound_in_protected_let))
		  reclaim_text_string(namestring_qm);
	  }
	  CONTINUE_UNWINDING(0);
	  result = RESTORE_VALUES();
      }
      else
	  result = VALUES_1(Nil);
    POP_SPECIAL();
    RESTORE_STACK();
    return result;
}

/* GENSYM-RENAME-FILE */
Object gensym_rename_file(old_convertible_thing,new_convertible_thing)
    Object old_convertible_thing, new_convertible_thing;
{
    volatile Object rename_succeeded_p;
    Object current_local_filename_parser, current_local_namestring_generator;
    Object convert_file_strings_to_uppercase_p;
    volatile Object old_pathname_qm;
    volatile Object old_truename_qm;
    volatile Object new_pathname_qm;
    volatile Object old_namestring;
    volatile Object new_namestring;
    Object temp, temp_1, temp_2;
    Declare_stack_pointer;
    Declare_catch(4);
    Declare_special(1);
    Object result;

    x_note_fn_call(38,201);
    SAVE_STACK();
    rename_succeeded_p = Nil;
    current_local_filename_parser = Local_filename_parser;
    current_local_namestring_generator = Local_namestring_generator;
    convert_file_strings_to_uppercase_p = 
	    getfq_function_no_default(INLINE_SYMBOL_PLIST(current_local_filename_parser),
	    Qconvert_file_strings_to_uppercase_p);
    PUSH_SPECIAL(Convert_file_strings_to_uppercase_p,convert_file_strings_to_uppercase_p,
	    0);
      old_pathname_qm = Qunbound_in_protected_let;
      if (PUSH_UNWIND_PROTECT(3)) {
	  old_pathname_qm = 
		  convert_to_gensym_pathname(old_convertible_thing,
		  current_local_filename_parser,
		  current_local_namestring_generator);
	  if (old_pathname_qm) {
	      old_truename_qm = Qunbound_in_protected_let;
	      if (PUSH_UNWIND_PROTECT(2)) {
		  old_truename_qm = gensym_probe_file(old_pathname_qm);
		  if (old_truename_qm) {
		      new_pathname_qm = Qunbound_in_protected_let;
		      if (PUSH_UNWIND_PROTECT(1)) {
			  new_pathname_qm = 
				  gensym_merge_pathnames_function(new_convertible_thing,
				  old_pathname_qm,Nil);
			  if (new_pathname_qm) {
			      old_namestring = Qunbound_in_protected_let;
			      new_namestring = Qunbound_in_protected_let;
			      if (PUSH_UNWIND_PROTECT(0)) {
				  old_namestring = gensym_namestring(1,
					  old_pathname_qm);
				  new_namestring = gensym_namestring(1,
					  new_pathname_qm);
				  rename_succeeded_p = 
					  g2_stream_rename_file(old_namestring,
					  new_namestring);
				  if (rename_succeeded_p) {
				      temp = new_pathname_qm;
				      temp_1 = old_truename_qm;
				      temp_2 = 
					      gensym_probe_file(new_pathname_qm);
				      SAVE_VALUES(VALUES_3(temp,temp_1,
					      temp_2));
				  }
				  else
				      SAVE_VALUES(VALUES_3(Nil,Nil,Nil));
			      }
			      POP_UNWIND_PROTECT(0);
			      if (new_namestring) {
				  if ( !EQ(new_namestring,
					  Qunbound_in_protected_let))
				      reclaim_text_string(new_namestring);
			      }
			      if (old_namestring) {
				  if ( !EQ(old_namestring,
					  Qunbound_in_protected_let))
				      reclaim_text_string(old_namestring);
			      }
			      CONTINUE_UNWINDING(0);
			  }
			  else
			      SAVE_VALUES(VALUES_3(Nil,Nil,Nil));
		      }
		      POP_UNWIND_PROTECT(1);
		      if (new_pathname_qm) {
			  if ( !EQ(new_pathname_qm,
				      Qunbound_in_protected_let)) {
			      if ( !TRUEP(rename_succeeded_p))
				  reclaim_gensym_pathname(new_pathname_qm);
			  }
		      }
		      CONTINUE_UNWINDING(1);
		  }
		  else
		      SAVE_VALUES(VALUES_3(Nil,Nil,Nil));
	      }
	      POP_UNWIND_PROTECT(2);
	      if (old_truename_qm) {
		  if ( !EQ(old_truename_qm,Qunbound_in_protected_let)) {
		      if ( !TRUEP(rename_succeeded_p))
			  reclaim_gensym_pathname(old_truename_qm);
		  }
	      }
	      CONTINUE_UNWINDING(2);
	  }
	  else
	      SAVE_VALUES(VALUES_3(Nil,Nil,Nil));
      }
      POP_UNWIND_PROTECT(3);
      if (old_pathname_qm) {
	  if ( !EQ(old_pathname_qm,Qunbound_in_protected_let)) {
	      if (old_pathname_qm)
		  reclaim_gensym_pathname(old_pathname_qm);
	  }
      }
      CONTINUE_UNWINDING(3);
      result = RESTORE_VALUES();
    POP_SPECIAL();
    RESTORE_STACK();
    return result;
}

/* GENSYM-RENAME-FILE-INDIFFERENT-TO-RETURN-VALUES */
Object gensym_rename_file_indifferent_to_return_values(old_convertible_thing,
	    new_convertible_thing)
    Object old_convertible_thing, new_convertible_thing;
{
    Object current_local_filename_parser, current_local_namestring_generator;
    Object convert_file_strings_to_uppercase_p;
    volatile Object old_pathname_qm;
    volatile Object new_pathname_qm;
    volatile Object old_namestring;
    volatile Object new_namestring;
    Declare_stack_pointer;
    Declare_catch(2);
    Declare_special(1);
    Object result;

    x_note_fn_call(38,202);
    SAVE_STACK();
    current_local_filename_parser = Local_filename_parser;
    current_local_namestring_generator = Local_namestring_generator;
    convert_file_strings_to_uppercase_p = 
	    getfq_function_no_default(INLINE_SYMBOL_PLIST(current_local_filename_parser),
	    Qconvert_file_strings_to_uppercase_p);
    PUSH_SPECIAL(Convert_file_strings_to_uppercase_p,convert_file_strings_to_uppercase_p,
	    0);
      old_pathname_qm = Qunbound_in_protected_let;
      if (PUSH_UNWIND_PROTECT(1)) {
	  old_pathname_qm = 
		  convert_to_gensym_pathname(old_convertible_thing,
		  current_local_filename_parser,
		  current_local_namestring_generator);
	  if (old_pathname_qm) {
	      new_pathname_qm = Qunbound_in_protected_let;
	      old_namestring = Qunbound_in_protected_let;
	      new_namestring = Qunbound_in_protected_let;
	      if (PUSH_UNWIND_PROTECT(0)) {
		  new_pathname_qm = 
			  gensym_merge_pathnames_function(new_convertible_thing,
			  old_pathname_qm,Nil);
		  old_namestring = gensym_namestring(1,old_pathname_qm);
		  new_namestring = gensym_namestring(1,new_pathname_qm);
		  if (g2_stream_probe_file_for_exist(new_namestring))
		      g2_stream_delete_file(new_namestring);
		  SAVE_VALUES(g2_stream_rename_file(old_namestring,
			  new_namestring));
	      }
	      POP_UNWIND_PROTECT(0);
	      if (new_namestring) {
		  if ( !EQ(new_namestring,Qunbound_in_protected_let))
		      reclaim_text_string(new_namestring);
	      }
	      if (old_namestring) {
		  if ( !EQ(old_namestring,Qunbound_in_protected_let))
		      reclaim_text_string(old_namestring);
	      }
	      if (new_pathname_qm) {
		  if ( !EQ(new_pathname_qm,Qunbound_in_protected_let))
		      reclaim_gensym_pathname(new_pathname_qm);
	      }
	      CONTINUE_UNWINDING(0);
	  }
	  else
	      SAVE_VALUES(VALUES_1(Nil));
      }
      POP_UNWIND_PROTECT(1);
      if (old_pathname_qm) {
	  if ( !EQ(old_pathname_qm,Qunbound_in_protected_let)) {
	      if (old_pathname_qm)
		  reclaim_gensym_pathname(old_pathname_qm);
	  }
      }
      CONTINUE_UNWINDING(1);
      result = RESTORE_VALUES();
    POP_SPECIAL();
    RESTORE_STACK();
    return result;
}

/* ENCODE-PATHNAME-OS */
Object encode_pathname_os(os)
    Object os;
{
    x_note_fn_call(38,203);
    if (EQ(os,Qunix))
	return VALUES_1(FIX((SI_Long)1L));
    else if (EQ(os,Qwin32))
	return VALUES_1(FIX((SI_Long)2L));
    else if (EQ(os,Qdos))
	return VALUES_1(FIX((SI_Long)3L));
    else if (EQ(os,Qvms))
	return VALUES_1(FIX((SI_Long)4L));
    else
	return VALUES_1(FIX((SI_Long)1L));
}

/* DECODE-PATHNAME-OS */
Object decode_pathname_os(encoded_os)
    Object encoded_os;
{
    x_note_fn_call(38,204);
    if ( !(FIXNUMP(encoded_os) && FIXNUM_LE(FIX((SI_Long)-128L),
	    encoded_os) && FIXNUM_LE(encoded_os,FIX((SI_Long)127L))))
	return VALUES_1(Qunix);
    else
	switch (INTEGER_TO_CHAR(encoded_os)) {
	  case 0:
	    return VALUES_1(G2_operating_system);
	  case 1:
	    return VALUES_1(Qunix);
	  case 2:
	    return VALUES_1(Qwin32);
	  case 3:
	    return VALUES_1(Qdos);
	  case 4:
	    return VALUES_1(Qvms);
	  default:
	    return VALUES_1(Qunix);
	}
}

static Object Qfilename_parser_of_file_system;  /* filename-parser-of-file-system */

static Object Qparse_unix_filename;  /* parse-unix-filename */

/* OS-PATHNAME-PARSER */
Object os_pathname_parser(os)
    Object os;
{
    Object temp;

    x_note_fn_call(38,205);
    temp = getfq_function_no_default(INLINE_SYMBOL_PLIST(os),
	    Qfilename_parser_of_file_system);
    if (temp)
	return VALUES_1(temp);
    else
	return VALUES_1(Qparse_unix_filename);
}

/* OS-PATHNAME-DIRECTORY */
Object os_pathname_directory(pathname_1,os)
    Object pathname_1, os;
{
    Object pathname_gp, temp, defaults_gp, directory_gp;

    x_note_fn_call(38,206);
    if (SIMPLE_VECTOR_P(pathname_1) && EQ(ISVREF(pathname_1,(SI_Long)0L),
	    Qg2_defstruct_structure_name_gensym_pathname_g2_struct))
	pathname_gp = copy_gensym_pathname(pathname_1);
    else {
	temp = SYMBOL_FUNCTION(os_pathname_parser(os));
	pathname_gp = FUNCALL_1(temp,pathname_1);
    }
    temp = SYMBOL_FUNCTION(os_pathname_parser(os));
    defaults_gp = FUNCALL_1(temp,string_constant);
    directory_gp = 
	    gensym_make_pathname_with_copied_components(ISVREF(pathname_gp,
	    (SI_Long)1L),ISVREF(pathname_gp,(SI_Long)2L),
	    ISVREF(pathname_gp,(SI_Long)3L),Nil,Nil,Nil,defaults_gp);
    temp = gensym_namestring(1,directory_gp);
    reclaim_gensym_pathname(pathname_gp);
    reclaim_gensym_pathname(defaults_gp);
    reclaim_gensym_pathname(directory_gp);
    return VALUES_1(temp);
}

/* OS-PATHNAME-NONDIRECTORY */
Object os_pathname_nondirectory(pathname_1,os)
    Object pathname_1, os;
{
    Object pathname_gp, temp, defaults_gp, directory_gp;

    x_note_fn_call(38,207);
    if (SIMPLE_VECTOR_P(pathname_1) && EQ(ISVREF(pathname_1,(SI_Long)0L),
	    Qg2_defstruct_structure_name_gensym_pathname_g2_struct))
	pathname_gp = copy_gensym_pathname(pathname_1);
    else {
	temp = SYMBOL_FUNCTION(os_pathname_parser(os));
	pathname_gp = FUNCALL_1(temp,pathname_1);
    }
    temp = SYMBOL_FUNCTION(os_pathname_parser(os));
    defaults_gp = FUNCALL_1(temp,string_constant);
    directory_gp = gensym_make_pathname_with_copied_components(Nil,Nil,Nil,
	    ISVREF(pathname_gp,(SI_Long)4L),ISVREF(pathname_gp,
	    (SI_Long)5L),ISVREF(pathname_gp,(SI_Long)6L),defaults_gp);
    temp = gensym_namestring(1,directory_gp);
    reclaim_gensym_pathname(pathname_gp);
    reclaim_gensym_pathname(defaults_gp);
    reclaim_gensym_pathname(directory_gp);
    return VALUES_1(temp);
}

/* FILE-SIZE? */
Object file_size_qm(gensym_pathname_1)
    Object gensym_pathname_1;
{
    volatile Object pathname_used_p;
    volatile Object namestring_1;
    volatile Object stream_qm;
    Declare_stack_pointer;
    Declare_catch(1);
    Object result;

    x_note_fn_call(38,208);
    SAVE_STACK();
    pathname_used_p = Qunbound_in_protected_let;
    namestring_1 = Qunbound_in_protected_let;
    stream_qm = Qunbound_in_protected_let;
    if (PUSH_UNWIND_PROTECT(0)) {
	pathname_used_p = SIMPLE_VECTOR_P(gensym_pathname_1) ? 
		(EQ(ISVREF(gensym_pathname_1,(SI_Long)0L),
		Qg2_defstruct_structure_name_gensym_pathname_g2_struct) ? 
		T : Nil) : Qnil;
	namestring_1 = SIMPLE_VECTOR_P(gensym_pathname_1) && 
		EQ(ISVREF(gensym_pathname_1,(SI_Long)0L),
		Qg2_defstruct_structure_name_gensym_pathname_g2_struct) ? 
		gensym_namestring(1,gensym_pathname_1) : gensym_pathname_1;
	stream_qm = 
		g2_stream_open_for_random_access_binary_input(namestring_1);
	if (stream_qm)
	    SAVE_VALUES(g2_stream_file_length(stream_qm));
	else
	    SAVE_VALUES(VALUES_1(Nil));
    }
    POP_UNWIND_PROTECT(0);
    if (stream_qm) {
	if ( !EQ(stream_qm,Qunbound_in_protected_let))
	    g2_stream_close(stream_qm);
    }
    if (namestring_1) {
	if ( !EQ(namestring_1,Qunbound_in_protected_let)) {
	    if (pathname_used_p)
		reclaim_text_string(namestring_1);
	}
    }
    CONTINUE_UNWINDING(0);
    result = RESTORE_VALUES();
    RESTORE_STACK();
    return result;
}

static Object Qg2_directory_pathname;  /* g2-directory-pathname */

/* LIST-DIRECTORY */
Object list_directory(directory_string)
    Object directory_string;
{
    volatile Object directory_pathname_qm;
    Object wild_pathname;
    volatile Object gensym_pathnames;
    Object accept_any_version_component_p;
    Object canonical_wild_directory_pathname_qm, gensym_pathname_1;
    Object ab_loop_list_, pathname_1, filename_qm, modtime_qm, dir_qm, size_qm;
    Object ab_loopvar_, ab_loopvar__1, ab_loopvar__2;
    volatile Object filestring;
    Object temp;
    Declare_stack_pointer;
    Declare_catch(2);
    Declare_special(1);
    Object result;

    x_note_fn_call(38,209);
    SAVE_STACK();
    directory_pathname_qm = Qunbound_in_protected_let;
    wild_pathname = Qunbound_in_protected_let;
    gensym_pathnames = Qunbound_in_protected_let;
    if (PUSH_UNWIND_PROTECT(1)) {
	accept_any_version_component_p = T;
	PUSH_SPECIAL(Accept_any_version_component_p,accept_any_version_component_p,
		0);
	  directory_pathname_qm = gensym_pathname(directory_string);
	POP_SPECIAL();
	canonical_wild_directory_pathname_qm = 
		make_canonical_wild_directory_pathname_if_possible(directory_pathname_qm,
		directory_string);
	if (canonical_wild_directory_pathname_qm) {
	    reclaim_gensym_pathname(directory_pathname_qm);
	    directory_pathname_qm = canonical_wild_directory_pathname_qm;
	}
	wild_pathname = directory_pathname_qm;
	gensym_pathnames = gensym_directory(2,wild_pathname,Nil);
	if (FIXNUM_NE(Internal_status_of_most_recent_file_operation,
		File_operation_succeeded_code))
	    SAVE_VALUES(most_recent_file_operation_status_as_text());
	else {
	    gensym_pathname_1 = Nil;
	    ab_loop_list_ = gensym_pathnames;
	    pathname_1 = Nil;
	    filename_qm = Nil;
	    modtime_qm = Nil;
	    dir_qm = Nil;
	    size_qm = Nil;
	    ab_loopvar_ = Nil;
	    ab_loopvar__1 = Nil;
	    ab_loopvar__2 = Nil;
	  next_loop:
	    if ( !TRUEP(ab_loop_list_))
		goto end_loop;
	    gensym_pathname_1 = M_CAR(ab_loop_list_);
	    ab_loop_list_ = M_CDR(ab_loop_list_);
	    pathname_1 = gensym_namestring(1,gensym_pathname_1);
	    if (ISVREF(gensym_pathname_1,(SI_Long)4L)) {
		filestring = Qunbound_in_protected_let;
		if (PUSH_UNWIND_PROTECT(0)) {
		    filestring = gensym_file_namestring(1,gensym_pathname_1);
		    temp = import_text_string(2,filestring,
			    Qg2_directory_pathname);
		    SAVE_VALUES(VALUES_1(temp));
		}
		POP_UNWIND_PROTECT(0);
		if (filestring) {
		    if ( !EQ(filestring,Qunbound_in_protected_let))
			reclaim_text_string(filestring);
		}
		CONTINUE_UNWINDING(0);
		result = RESTORE_VALUES();
		filename_qm = result;
	    }
	    else
		filename_qm = Nil;
	    modtime_qm = g2_stream_file_modification_date(pathname_1);
	    dir_qm = g2_stream_directory_p(pathname_1);
	    size_qm = dir_qm ? FIX((SI_Long)0L) : 
		    file_size_qm(gensym_pathname_1);
	    if (filename_qm && modtime_qm && size_qm) {
		ab_loopvar__2 = 
			gensym_cons_1(nconc2(gensym_list_2(filename_qm,
			modtime_qm), !TRUEP(dir_qm) ? 
			gensym_cons_1(size_qm,Nil) : Nil),Nil);
		if (ab_loopvar__1)
		    M_CDR(ab_loopvar__1) = ab_loopvar__2;
		else
		    ab_loopvar_ = ab_loopvar__2;
		ab_loopvar__1 = ab_loopvar__2;
	    }
	    goto next_loop;
	  end_loop:
	    SAVE_VALUES(VALUES_1(ab_loopvar_));
	    goto end;
	    SAVE_VALUES(VALUES_1(Qnil));
	  end:;
	}
    }
    POP_UNWIND_PROTECT(1);
    if (gensym_pathnames) {
	if ( !EQ(gensym_pathnames,Qunbound_in_protected_let))
	    reclaim_path_list_of_gensym_pathnames(gensym_pathnames);
    }
    if (directory_pathname_qm) {
	if ( !EQ(directory_pathname_qm,Qunbound_in_protected_let))
	    reclaim_gensym_pathname(directory_pathname_qm);
    }
    CONTINUE_UNWINDING(1);
    result = RESTORE_VALUES();
    RESTORE_STACK();
    return result;
}

/* RECLAIM-DIRECTORY-LISTING */
Object reclaim_directory_listing(listing)
    Object listing;
{
    Object entry, ab_loop_list_, name, time_1, temp;

    x_note_fn_call(38,210);
    if (CONSP(listing)) {
	entry = Nil;
	ab_loop_list_ = listing;
	name = Nil;
	time_1 = Nil;
      next_loop:
	if ( !TRUEP(ab_loop_list_))
	    goto end_loop;
	entry = M_CAR(ab_loop_list_);
	ab_loop_list_ = M_CDR(ab_loop_list_);
	name = CAR(entry);
	temp = CDR(entry);
	time_1 = CAR(temp);
	reclaim_text_string(name);
	reclaim_managed_simple_float_array_of_length_1(time_1);
	reclaim_gensym_list_1(entry);
	goto next_loop;
      end_loop:;
	return reclaim_gensym_list_1(listing);
    }
    else if (text_string_p(listing))
	return reclaim_text_string(listing);
    else
	return VALUES_1(Qnil);
}

/* RECLAIM-PATH-LIST-OF-GENSYM-PATHNAMES */
Object reclaim_path_list_of_gensym_pathnames(gensym_pathname_list)
    Object gensym_pathname_list;
{
    Object gp, ab_loop_list_;

    x_note_fn_call(38,211);
    gp = Nil;
    ab_loop_list_ = gensym_pathname_list;
  next_loop:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    gp = M_CAR(ab_loop_list_);
    ab_loop_list_ = M_CDR(ab_loop_list_);
    reclaim_gensym_pathname(gp);
    goto next_loop;
  end_loop:;
    reclaim_gensym_list_1(gensym_pathname_list);
    return VALUES_1(Nil);
}

/* PARENT-DIRECTORY-PATHNAME */
Object parent_directory_pathname(pathname_1)
    Object pathname_1;
{
    Object default_directory, gensym_pathname_1, host, device, directory_1;
    Object has_name_qm, parent, directory_star, gensym_pop_store, cons_1;
    Object next_cons, cdr_new_value, last_1, name_star, gp, temp;

    x_note_fn_call(38,212);
    default_directory = g2_stream_get_default_directory();
    gensym_pathname_1 = gensym_merge_pathnames_function(pathname_1,
	    default_directory,Nil);
    host = ISVREF(gensym_pathname_1,(SI_Long)1L);
    device = ISVREF(gensym_pathname_1,(SI_Long)2L);
    directory_1 = ISVREF(gensym_pathname_1,(SI_Long)3L);
    has_name_qm = ISVREF(gensym_pathname_1,(SI_Long)4L);
    if (has_name_qm);
    else
	has_name_qm = ISVREF(gensym_pathname_1,(SI_Long)5L);
    if (EQUAL(directory_1,list_constant_1))
	parent = has_name_qm ? 
		gensym_make_pathname_with_copied_components(host,device,
		directory_1,Nil,Nil,Nil,Nil) : Nil;
    else if ( !TRUEP(directory_1))
	parent = Nil;
    else {
	directory_star = 
		nreverse(copy_list_using_gensym_conses_1(directory_1));
	gensym_pop_store = Nil;
	cons_1 = directory_star;
	if (cons_1) {
	    gensym_pop_store = M_CAR(cons_1);
	    next_cons = M_CDR(cons_1);
	    inline_note_reclaim_cons(cons_1,Qab_gensym);
	    cdr_new_value = Available_gensym_conses;
	    M_CDR(cons_1) = cdr_new_value;
	    Available_gensym_conses = cons_1;
	}
	else
	    next_cons = Nil;
	directory_star = next_cons;
	last_1 = gensym_pop_store;
	name_star = has_name_qm ? last_1 : Nil;
	directory_star = nreverse(directory_star);
	gp = gensym_make_pathname_with_copied_components(host,device,
		directory_star,Nil,Nil,Nil,Nil);
	reclaim_gensym_list_1(directory_star);
	if (name_star) {
	    temp = gensym_merge_pathnames_function(gp,name_star,Nil);
	    reclaim_gensym_pathname(gp);
	    parent = temp;
	}
	else
	    parent = gp;
    }
    reclaim_text_string(default_directory);
    reclaim_gensym_pathname(gensym_pathname_1);
    return VALUES_1(parent);
}

/* CANONICAL-DIRECTORY-PATHNAME */
Object canonical_directory_pathname(pathname_1)
    Object pathname_1;
{
    Object default_directory, gensym_pathname_1, host, device, directory_1;
    Object has_name_qm, directory_star, gensym_pop_store, cons_1, next_cons;
    Object cdr_new_value, name_star, temp;

    x_note_fn_call(38,213);
    default_directory = g2_stream_get_default_directory();
    gensym_pathname_1 = gensym_merge_pathnames_function(pathname_1,
	    default_directory,Nil);
    host = ISVREF(gensym_pathname_1,(SI_Long)1L);
    device = ISVREF(gensym_pathname_1,(SI_Long)2L);
    directory_1 = ISVREF(gensym_pathname_1,(SI_Long)3L);
    has_name_qm = ISVREF(gensym_pathname_1,(SI_Long)4L);
    if (has_name_qm);
    else
	has_name_qm = ISVREF(gensym_pathname_1,(SI_Long)5L);
    reclaim_text_string(default_directory);
    if (has_name_qm)
	return VALUES_1(gensym_pathname_1);
    else if (EQUAL(directory_1,list_constant_1))
	return VALUES_1(gensym_pathname_1);
    else if ( !TRUEP(directory_1))
	return VALUES_1(gensym_pathname_1);
    else {
	directory_star = 
		nreverse(copy_list_using_gensym_conses_1(directory_1));
	gensym_pop_store = Nil;
	cons_1 = directory_star;
	if (cons_1) {
	    gensym_pop_store = M_CAR(cons_1);
	    next_cons = M_CDR(cons_1);
	    inline_note_reclaim_cons(cons_1,Qab_gensym);
	    cdr_new_value = Available_gensym_conses;
	    M_CDR(cons_1) = cdr_new_value;
	    Available_gensym_conses = cons_1;
	}
	else
	    next_cons = Nil;
	directory_star = next_cons;
	name_star = gensym_pop_store;
	directory_star = nreverse(directory_star);
	temp = gensym_make_pathname_with_copied_components(host,device,
		directory_star,name_star,Nil,Nil,Nil);
	reclaim_gensym_list_1(directory_star);
	reclaim_gensym_pathname(gensym_pathname_1);
	return VALUES_1(temp);
    }
}

/* DEFAULT-ROOT-DIRECTORY */
Object default_root_directory()
{
    Object default_directory, default_directory_gp, root_directory_gp, temp;

    x_note_fn_call(38,214);
    default_directory = g2_stream_get_default_directory();
    default_directory_gp = gensym_pathname(default_directory);
    root_directory_gp = 
	    gensym_make_pathname_with_copied_components(ISVREF(default_directory_gp,
	    (SI_Long)1L),ISVREF(default_directory_gp,(SI_Long)2L),
	    list_constant_1,Nil,Nil,Nil,Nil);
    temp = gensym_namestring(1,root_directory_gp);
    reclaim_gensym_pathname(root_directory_gp);
    reclaim_gensym_pathname(default_directory_gp);
    reclaim_text_string(default_directory);
    return VALUES_1(temp);
}

static Object array_constant_7;    /* # */

static Object array_constant_8;    /* # */

/* PATHNAME-SEPARATOR-AS-STRING */
Object pathname_separator_as_string()
{
    x_note_fn_call(38,215);
    if (EQ(G2_operating_system,Qwin32) || EQ(G2_operating_system,Qdos))
	return VALUES_1(array_constant_7);
    else
	return VALUES_1(array_constant_8);
}

void streams_INIT()
{
    Object star_features_star_new_value, temp;
    Object reclaim_structure_for_g2_stream_structure_1;
    Object reclaim_structure_for_regular_expression_node_1;
    Object reclaim_structure_for_regular_expression_node_for_single_character_1;
    Object reclaim_structure_for_regular_expression_node_for_single_wild_character_1;
    Object reclaim_structure_for_multiply_wild_regular_expression_node_1;
    Object reclaim_structure_for_regular_expression_node_for_wild_characters_1;
    Object reclaim_structure_for_regular_expression_node_for_set_of_characters_1;
    Object reclaim_structure_for_regular_expression_node_for_subexpression_1;
    Object list_constant_56, Qlist_directory, AB_package, string_constant_76;
    Object list_constant_57, Qpathnames, Qprocess_specific_system_pathname;
    Object Qinitialize_process_specific_system_pathname, Kfuncall;
    Object Qfile_access_check_execute_mode, Qfile_access_check_write_mode;
    Object Qfile_access_check_read_mode, float_constant;
    Object Qnumber_of_seconds_between_lisp_and_unix_antiquity;
    Object Qfile_timestamp_status_change_mode, Qfile_timestamp_access_mode;
    Object Qfile_timestamp_modification_mode, Qg2_stream_directory_p_success;
    Object Qforeign_function_failure, Qforeign_function_success, Qstreams;
    Object Qfirst_subexpression_node_for_reclaiming_qm;
    Object Qregular_expression_node_for_subexpression, Qreclaim_structure;
    Object Qoutstanding_regular_expression_node_for_subexpression_count;
    Object Qregular_expression_node_for_subexpression_structure_memory_usage;
    Object Qutilities2, Qregular_expression_node_for_subexpression_count;
    Object Qchain_of_available_regular_expression_node_for_subexpressions;
    Object string_constant_75, Qtype_description_of_type;
    Object Qtype_description_of_unique_type_name_of_gensym_structure;
    Object string_constant_74, Qunique_structure_type_of_ab_name_qm;
    Object Qab_name_of_unique_structure_type;
    Object G2_DEFSTRUCT_STRUCTURE_NAME_package;
    Object Qregular_expression_node_for_set_of_characters;
    Object Qoutstanding_regular_expression_node_for_set_of_characters_count;
    Object Qregular_expression_node_for_set_of_characters_structure_memory_usage;
    Object Qregular_expression_node_for_set_of_characters_count;
    Object Qchain_of_available_regular_expression_node_for_set_of_characterss;
    Object string_constant_73, string_constant_72;
    Object Qregular_expression_node_for_wild_characters;
    Object Qoutstanding_regular_expression_node_for_wild_characters_count;
    Object Qregular_expression_node_for_wild_characters_structure_memory_usage;
    Object Qregular_expression_node_for_wild_characters_count;
    Object Qchain_of_available_regular_expression_node_for_wild_characterss;
    Object string_constant_71, string_constant_70;
    Object Qmultiply_wild_regular_expression_node;
    Object Qoutstanding_multiply_wild_regular_expression_node_count;
    Object Qmultiply_wild_regular_expression_node_structure_memory_usage;
    Object Qmultiply_wild_regular_expression_node_count;
    Object Qchain_of_available_multiply_wild_regular_expression_nodes;
    Object string_constant_69, string_constant_68;
    Object Qregular_expression_node_for_single_wild_character;
    Object Qoutstanding_regular_expression_node_for_single_wild_character_count;
    Object Qregular_expression_node_for_single_wild_character_structure_memory_usage;
    Object Qregular_expression_node_for_single_wild_character_count;
    Object Qchain_of_available_regular_expression_node_for_single_wild_characters;
    Object string_constant_67, string_constant_66;
    Object Qregular_expression_node_for_single_character;
    Object Qoutstanding_regular_expression_node_for_single_character_count;
    Object Qregular_expression_node_for_single_character_structure_memory_usage;
    Object Qregular_expression_node_for_single_character_count;
    Object Qchain_of_available_regular_expression_node_for_single_characters;
    Object string_constant_65, string_constant_64, Qregular_expression_node;
    Object Qoutstanding_regular_expression_node_count;
    Object Qregular_expression_node_structure_memory_usage;
    Object Qregular_expression_node_count;
    Object Qchain_of_available_regular_expression_nodes, string_constant_63;
    Object string_constant_62, Qsize_for_temp_filename;
    Object Qg2_stream_directory_success;
    Object Qg2_stream_do_not_terminate_string_with_cr;
    Object Qg2_stream_terminate_string_with_cr;
    Object Qread_file_into_string_buffer_size;
    Object Qcached_unknown_error_string_with_code_qm;
    Object Qinternal_status_of_most_recent_file_operation, list_constant_55;
    Object list_constant_54, list_constant_53, list_constant_52;
    Object list_constant_51, list_constant_50, list_constant_49;
    Object list_constant_48, list_constant_47, list_constant_46;
    Object list_constant_45, list_constant_44, list_constant_43;
    Object list_constant_42, list_constant_41, list_constant_40;
    Object list_constant_39, list_constant_38, list_constant_37;
    Object list_constant_36, list_constant_35, list_constant_34;
    Object list_constant_33, list_constant_32, list_constant_31;
    Object list_constant_30, list_constant_29, list_constant_28;
    Object list_constant_27, list_constant_26, list_constant_25;
    Object list_constant_24, list_constant_23, list_constant_22;
    Object list_constant_21, list_constant_20, list_constant_19;
    Object list_constant_18, list_constant_17, list_constant_16;
    Object list_constant_15, list_constant_14, list_constant_13;
    Object list_constant_12, list_constant_11, list_constant_10;
    Object list_constant_9, list_constant_8, list_constant_7, list_constant_6;
    Object list_constant_5, list_constant_4, string_constant_61;
    Object string_constant_60, string_constant_59, string_constant_58;
    Object string_constant_57, string_constant_56, string_constant_55;
    Object string_constant_54, string_constant_53, string_constant_52;
    Object string_constant_51, string_constant_50, string_constant_49;
    Object string_constant_48, string_constant_47, string_constant_46;
    Object string_constant_45, string_constant_44, string_constant_43;
    Object string_constant_42, string_constant_41, string_constant_40;
    Object string_constant_39, string_constant_38, string_constant_37;
    Object string_constant_36, string_constant_35, string_constant_34;
    Object string_constant_33, string_constant_32, string_constant_31;
    Object string_constant_30, string_constant_29, string_constant_28;
    Object string_constant_27, string_constant_26, string_constant_25;
    Object string_constant_24, string_constant_23, string_constant_22;
    Object string_constant_21, string_constant_20, string_constant_11;
    Object string_constant_19, string_constant_18, string_constant_17;
    Object string_constant_16, string_constant_15, string_constant_14;
    Object string_constant_13, string_constant_12;
    Object Qunknown_error_during_file_op_with_code_message;
    Object Qall_gensym_pathnames_containing_open_streams;
    Object Qg2_stream_all_open_streams, Qg2_stream_structure;
    Object Qoutstanding_g2_stream_structure_count;
    Object Qg2_stream_structure_structure_memory_usage;
    Object Qg2_stream_structure_count;
    Object Qchain_of_available_g2_stream_structures, string_constant_10;
    Object string_constant_9, Kc_streams;

    x_note_fn_call(38,216);
    SET_PACKAGE("AB");
    Kc_streams = STATIC_SYMBOL("C-STREAMS",Pkeyword);
    star_features_star_new_value = adjoin(2,Kc_streams,Features);
    Features = star_features_star_new_value;
    G2_DEFSTRUCT_STRUCTURE_NAME_package = 
	    STATIC_PACKAGE("G2-DEFSTRUCT-STRUCTURE-NAME");
    Qg2_defstruct_structure_name_g2_stream_structure_g2_struct = 
	    STATIC_SYMBOL("G2-STREAM-STRUCTURE-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    AB_package = STATIC_PACKAGE("AB");
    Qg2_stream_structure = STATIC_SYMBOL("G2-STREAM-STRUCTURE",AB_package);
    Qab_name_of_unique_structure_type = 
	    STATIC_SYMBOL("AB-NAME-OF-UNIQUE-STRUCTURE-TYPE",AB_package);
    mutate_global_property(Qg2_defstruct_structure_name_g2_stream_structure_g2_struct,
	    Qg2_stream_structure,Qab_name_of_unique_structure_type);
    Qunique_structure_type_of_ab_name_qm = 
	    STATIC_SYMBOL("UNIQUE-STRUCTURE-TYPE-OF-AB-NAME\?",AB_package);
    mutate_global_property(Qg2_stream_structure,
	    Qg2_defstruct_structure_name_g2_stream_structure_g2_struct,
	    Qunique_structure_type_of_ab_name_qm);
    if (The_type_description_of_g2_stream_structure == UNBOUND)
	The_type_description_of_g2_stream_structure = Nil;
    string_constant_9 = 
	    STATIC_STRING("43Dy8l83oy1n83oy8m8k1l8m0000001l1n8n831oy1l830Hykpk0k0");
    temp = The_type_description_of_g2_stream_structure;
    The_type_description_of_g2_stream_structure = 
	    load_and_initialize_type_description(temp,
	    regenerate_optimized_constant(string_constant_9));
    Qtype_description_of_unique_type_name_of_gensym_structure = 
	    STATIC_SYMBOL("TYPE-DESCRIPTION-OF-UNIQUE-TYPE-NAME-OF-GENSYM-STRUCTURE",
	    AB_package);
    mutate_global_property(Qg2_defstruct_structure_name_g2_stream_structure_g2_struct,
	    The_type_description_of_g2_stream_structure,
	    Qtype_description_of_unique_type_name_of_gensym_structure);
    Qtype_description_of_type = STATIC_SYMBOL("TYPE-DESCRIPTION-OF-TYPE",
	    AB_package);
    mutate_global_property(Qg2_stream_structure,
	    The_type_description_of_g2_stream_structure,
	    Qtype_description_of_type);
    Qoutstanding_g2_stream_structure_count = 
	    STATIC_SYMBOL("OUTSTANDING-G2-STREAM-STRUCTURE-COUNT",AB_package);
    Qg2_stream_structure_structure_memory_usage = 
	    STATIC_SYMBOL("G2-STREAM-STRUCTURE-STRUCTURE-MEMORY-USAGE",
	    AB_package);
    string_constant_10 = STATIC_STRING("1q83oy8o836-y09k9l");
    clear_optimized_constants();
    push_optimized_constant(Qoutstanding_g2_stream_structure_count);
    push_optimized_constant(Qg2_stream_structure_structure_memory_usage);
    update_object_pool_meters_list(regenerate_optimized_constant(string_constant_10));
    Qchain_of_available_g2_stream_structures = 
	    STATIC_SYMBOL("CHAIN-OF-AVAILABLE-G2-STREAM-STRUCTURES",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qchain_of_available_g2_stream_structures,
	    Chain_of_available_g2_stream_structures);
    Qutilities2 = STATIC_SYMBOL("UTILITIES2",AB_package);
    record_system_variable(Qchain_of_available_g2_stream_structures,
	    Qutilities2,Nil,Qnil,Qt,Qnil,Qnil);
    Qg2_stream_structure_count = STATIC_SYMBOL("G2-STREAM-STRUCTURE-COUNT",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qg2_stream_structure_count,
	    G2_stream_structure_count);
    record_system_variable(Qg2_stream_structure_count,Qutilities2,
	    FIX((SI_Long)0L),Qnil,Qt,Qnil,Qnil);
    SET_SYMBOL_FUNCTION(Qg2_stream_structure_structure_memory_usage,
	    STATIC_FUNCTION(g2_stream_structure_structure_memory_usage,NIL,
	    FALSE,0,0));
    SET_SYMBOL_FUNCTION(Qoutstanding_g2_stream_structure_count,
	    STATIC_FUNCTION(outstanding_g2_stream_structure_count,NIL,
	    FALSE,0,0));
    Qreclaim_structure = STATIC_SYMBOL("RECLAIM-STRUCTURE",AB_package);
    reclaim_structure_for_g2_stream_structure_1 = 
	    STATIC_FUNCTION(reclaim_structure_for_g2_stream_structure,NIL,
	    FALSE,1,1);
    record_direct_structure_method(Qreclaim_structure,Qg2_stream_structure,
	    reclaim_structure_for_g2_stream_structure_1);
    Qdos = STATIC_SYMBOL("DOS",AB_package);
    Qhp9000s300 = STATIC_SYMBOL("HP9000S300",AB_package);
    if (Maximum_file_name_length_qm == UNBOUND)
	Maximum_file_name_length_qm = initialize_maximum_file_name_length_qm();
    if (File_system_for_interception_qm == UNBOUND)
	File_system_for_interception_qm = Nil;
    Qg2_stream_all_open_streams = 
	    STATIC_SYMBOL("G2-STREAM-ALL-OPEN-STREAMS",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qg2_stream_all_open_streams,
	    G2_stream_all_open_streams);
    Qstreams = STATIC_SYMBOL("STREAMS",AB_package);
    record_system_variable(Qg2_stream_all_open_streams,Qstreams,Nil,Qnil,
	    Qt,Qnil,Qnil);
    Qall_gensym_pathnames_containing_open_streams = 
	    STATIC_SYMBOL("ALL-GENSYM-PATHNAMES-CONTAINING-OPEN-STREAMS",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qall_gensym_pathnames_containing_open_streams,
	    All_gensym_pathnames_containing_open_streams);
    record_system_variable(Qall_gensym_pathnames_containing_open_streams,
	    Qstreams,Nil,Qnil,Qt,Qnil,Qnil);
    Qidentical_g2_streams_p = STATIC_SYMBOL("IDENTICAL-G2-STREAMS-P",
	    AB_package);
    Qab_gensym = STATIC_SYMBOL("GENSYM",AB_package);
    File_already_exists_code = FIX((SI_Long)17L);
    End_of_file_reached_code = FIX((SI_Long)0L);
    File_operation_succeeded_code = FIX((SI_Long)-1L);
    File_not_found_code = FIX((SI_Long)-2L);
    File_at_unknown_host_code = FIX((SI_Long)-3L);
    File_directory_not_found_code = FIX((SI_Long)-4L);
    File_host_not_responding_code = FIX((SI_Long)-5L);
    Filename_parse_failed_code = FIX((SI_Long)-6L);
    File_op_not_supported_code = FIX((SI_Long)-7L);
    Unknown_error_during_file_op_code = FIX((SI_Long)-8L);
    Error_creating_disk_query_code = FIX((SI_Long)-10L);
    Error_spawning_disk_query_code = FIX((SI_Long)-11L);
    Error_parsing_disk_query_code = FIX((SI_Long)-12L);
    Directory_spec_too_long_code = FIX((SI_Long)-13L);
    Failed_to_build_dir_structure_code = FIX((SI_Long)-14L);
    Failed_to_open_dir_structure_code = FIX((SI_Long)-15L);
    Append_of_non_existent_file_code = FIX((SI_Long)-16L);
    Bad_regular_expression_code = FIX((SI_Long)-17L);
    Failed_to_open_device_list_code = FIX((SI_Long)-18L);
    string_constant_11 = STATIC_STRING("Unspecified error occurred");
    Unknown_error_during_file_op_message = string_constant_11;
    Qunknown_error_during_file_op_with_code_message = 
	    STATIC_SYMBOL("UNKNOWN-ERROR-DURING-FILE-OP-WITH-CODE-MESSAGE",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qunknown_error_during_file_op_with_code_message,
	    Unknown_error_during_file_op_with_code_message);
    string_constant_12 = STATIC_STRING("Unspecified error (~a) occurred");
    SET_SYMBOL_VALUE(Qunknown_error_during_file_op_with_code_message,
	    string_constant_12);
    string_constant_13 = STATIC_STRING("Unknown file access status");
    list_constant_23 = STATIC_CONS(FIX((SI_Long)-1L),string_constant_13);
    string_constant_14 = STATIC_STRING("File not found");
    list_constant_24 = STATIC_CONS(FIX((SI_Long)-2L),string_constant_14);
    string_constant_15 = STATIC_STRING("Unknown host for file");
    list_constant_25 = STATIC_CONS(FIX((SI_Long)-3L),string_constant_15);
    string_constant_16 = STATIC_STRING("Directory not found for file");
    list_constant_26 = STATIC_CONS(FIX((SI_Long)-4L),string_constant_16);
    string_constant_17 = STATIC_STRING("File host not responding");
    list_constant_27 = STATIC_CONS(FIX((SI_Long)-5L),string_constant_17);
    string_constant_18 = STATIC_STRING("Filename parse failed");
    list_constant_28 = STATIC_CONS(FIX((SI_Long)-6L),string_constant_18);
    string_constant_19 = STATIC_STRING("File operation not supported");
    list_constant_29 = STATIC_CONS(FIX((SI_Long)-7L),string_constant_19);
    list_constant_30 = STATIC_CONS(FIX((SI_Long)-8L),string_constant_11);
    string_constant_20 = STATIC_STRING("Error creating disk query");
    list_constant_31 = STATIC_CONS(FIX((SI_Long)-10L),string_constant_20);
    string_constant_21 = STATIC_STRING("Error spawning disk query");
    list_constant_32 = STATIC_CONS(FIX((SI_Long)-11L),string_constant_21);
    string_constant_22 = STATIC_STRING("Error parsing disk query results");
    list_constant_33 = STATIC_CONS(FIX((SI_Long)-12L),string_constant_22);
    string_constant_23 = STATIC_STRING("Directory spec is too long");
    list_constant_34 = STATIC_CONS(FIX((SI_Long)-13L),string_constant_23);
    string_constant_24 = STATIC_STRING("Failed to build dir structure");
    list_constant_35 = STATIC_CONS(FIX((SI_Long)-14L),string_constant_24);
    string_constant_25 = STATIC_STRING("Failed to open dir structure");
    list_constant_36 = STATIC_CONS(FIX((SI_Long)-15L),string_constant_25);
    string_constant_26 = STATIC_STRING("File to append does not exist");
    list_constant_37 = STATIC_CONS(FIX((SI_Long)-16L),string_constant_26);
    string_constant_27 = STATIC_STRING("Bad regular expression");
    list_constant_38 = STATIC_CONS(FIX((SI_Long)-17L),string_constant_27);
    string_constant_28 = STATIC_STRING("End of file reached");
    list_constant_39 = STATIC_CONS(FIX((SI_Long)0L),string_constant_28);
    string_constant_29 = STATIC_STRING("Could not open device list");
    list_constant_40 = STATIC_CONS(FIX((SI_Long)-18L),string_constant_29);
    string_constant_30 = STATIC_STRING("No permission to access the file");
    list_constant_41 = STATIC_CONS(FIX((SI_Long)1L),string_constant_30);
    string_constant_31 = STATIC_STRING("No such file or directory");
    list_constant_42 = STATIC_CONS(FIX((SI_Long)2L),string_constant_31);
    string_constant_32 = STATIC_STRING("No such process");
    list_constant_43 = STATIC_CONS(FIX((SI_Long)3L),string_constant_32);
    string_constant_33 = STATIC_STRING("Interrupted system call");
    list_constant_44 = STATIC_CONS(FIX((SI_Long)4L),string_constant_33);
    string_constant_34 = STATIC_STRING("I/O error");
    list_constant_45 = STATIC_CONS(FIX((SI_Long)5L),string_constant_34);
    string_constant_35 = STATIC_STRING("No such device or address");
    list_constant_46 = STATIC_CONS(FIX((SI_Long)6L),string_constant_35);
    string_constant_36 = STATIC_STRING("Argument list too long");
    list_constant_47 = STATIC_CONS(FIX((SI_Long)7L),string_constant_36);
    string_constant_37 = STATIC_STRING("Exec format error");
    list_constant_48 = STATIC_CONS(FIX((SI_Long)8L),string_constant_37);
    string_constant_38 = STATIC_STRING("Bad file number");
    list_constant_49 = STATIC_CONS(FIX((SI_Long)9L),string_constant_38);
    string_constant_39 = STATIC_STRING("No children");
    list_constant_50 = STATIC_CONS(FIX((SI_Long)10L),string_constant_39);
    string_constant_40 = STATIC_STRING("No more processes");
    list_constant_51 = STATIC_CONS(FIX((SI_Long)11L),string_constant_40);
    string_constant_41 = STATIC_STRING("Not enough core");
    list_constant_52 = STATIC_CONS(FIX((SI_Long)12L),string_constant_41);
    string_constant_42 = STATIC_STRING("Permission denied");
    list_constant_53 = STATIC_CONS(FIX((SI_Long)13L),string_constant_42);
    string_constant_43 = STATIC_STRING("Bad address");
    list_constant_4 = STATIC_CONS(FIX((SI_Long)14L),string_constant_43);
    string_constant_44 = STATIC_STRING("Block device required");
    list_constant_5 = STATIC_CONS(FIX((SI_Long)15L),string_constant_44);
    string_constant_45 = STATIC_STRING("Mount device busy");
    list_constant_6 = STATIC_CONS(FIX((SI_Long)16L),string_constant_45);
    string_constant_46 = STATIC_STRING("The file already exists");
    list_constant_7 = STATIC_CONS(FIX((SI_Long)17L),string_constant_46);
    string_constant_47 = STATIC_STRING("Cross-device link");
    list_constant_8 = STATIC_CONS(FIX((SI_Long)18L),string_constant_47);
    string_constant_48 = STATIC_STRING("There is no such device");
    list_constant_9 = STATIC_CONS(FIX((SI_Long)19L),string_constant_48);
    string_constant_49 = STATIC_STRING("Not a directory");
    list_constant_10 = STATIC_CONS(FIX((SI_Long)20L),string_constant_49);
    string_constant_50 = STATIC_STRING("You are trying to access a directory");
    list_constant_11 = STATIC_CONS(FIX((SI_Long)21L),string_constant_50);
    string_constant_51 = STATIC_STRING("Invalid argument");
    list_constant_12 = STATIC_CONS(FIX((SI_Long)22L),string_constant_51);
    string_constant_52 = STATIC_STRING("File table overflow");
    list_constant_13 = STATIC_CONS(FIX((SI_Long)23L),string_constant_52);
    string_constant_53 = STATIC_STRING("Too many open files");
    list_constant_14 = STATIC_CONS(FIX((SI_Long)24L),string_constant_53);
    string_constant_54 = STATIC_STRING("Not a typewriter");
    list_constant_15 = STATIC_CONS(FIX((SI_Long)25L),string_constant_54);
    string_constant_55 = STATIC_STRING("Text file busy");
    list_constant_16 = STATIC_CONS(FIX((SI_Long)26L),string_constant_55);
    string_constant_56 = STATIC_STRING("File too large");
    list_constant_17 = STATIC_CONS(FIX((SI_Long)27L),string_constant_56);
    string_constant_57 = STATIC_STRING("No space left on device");
    list_constant_18 = STATIC_CONS(FIX((SI_Long)28L),string_constant_57);
    string_constant_58 = STATIC_STRING("Illegal seek");
    list_constant_19 = STATIC_CONS(FIX((SI_Long)29L),string_constant_58);
    string_constant_59 = STATIC_STRING("Read-only file system");
    list_constant_20 = STATIC_CONS(FIX((SI_Long)30L),string_constant_59);
    string_constant_60 = STATIC_STRING("Too many links");
    list_constant_21 = STATIC_CONS(FIX((SI_Long)31L),string_constant_60);
    string_constant_61 = STATIC_STRING("Broken pipe");
    list_constant_22 = STATIC_CONS(FIX((SI_Long)32L),string_constant_61);
    list_constant_54 = STATIC_LIST((SI_Long)19L,list_constant_4,
	    list_constant_5,list_constant_6,list_constant_7,
	    list_constant_8,list_constant_9,list_constant_10,
	    list_constant_11,list_constant_12,list_constant_13,
	    list_constant_14,list_constant_15,list_constant_16,
	    list_constant_17,list_constant_18,list_constant_19,
	    list_constant_20,list_constant_21,list_constant_22);
    list_constant_55 = STATIC_LIST_STAR((SI_Long)32L,list_constant_23,
	    list_constant_24,list_constant_25,list_constant_26,
	    list_constant_27,list_constant_28,list_constant_29,
	    list_constant_30,list_constant_31,list_constant_32,
	    list_constant_33,list_constant_34,list_constant_35,
	    list_constant_36,list_constant_37,list_constant_38,
	    list_constant_39,list_constant_40,list_constant_41,
	    list_constant_42,list_constant_43,list_constant_44,
	    list_constant_45,list_constant_46,list_constant_47,
	    list_constant_48,list_constant_49,list_constant_50,
	    list_constant_51,list_constant_52,list_constant_53,
	    list_constant_54);
    if (G2_stream_error_string_table == UNBOUND)
	G2_stream_error_string_table = list_constant_55;
    Qinternal_status_of_most_recent_file_operation = 
	    STATIC_SYMBOL("INTERNAL-STATUS-OF-MOST-RECENT-FILE-OPERATION",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qinternal_status_of_most_recent_file_operation,
	    Internal_status_of_most_recent_file_operation);
    record_system_variable(Qinternal_status_of_most_recent_file_operation,
	    Qstreams,FIX((SI_Long)-1L),Qnil,Qt,Qnil,Qnil);
    Qcached_unknown_error_string_with_code_qm = 
	    STATIC_SYMBOL("CACHED-UNKNOWN-ERROR-STRING-WITH-CODE\?",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qcached_unknown_error_string_with_code_qm,
	    Cached_unknown_error_string_with_code_qm);
    record_system_variable(Qcached_unknown_error_string_with_code_qm,
	    Qstreams,Nil,Qnil,Qt,Qnil,Qnil);
    SET_SYMBOL_FUNCTION(Qidentical_g2_streams_p,
	    STATIC_FUNCTION(identical_g2_streams_p,NIL,FALSE,2,2));
    Qmiscellaneous_parameters = STATIC_SYMBOL("MISCELLANEOUS-PARAMETERS",
	    AB_package);
    Quse_unicode_for_filenames_qm_from_system_table = 
	    STATIC_SYMBOL("USE-UNICODE-FOR-FILENAMES\?-FROM-SYSTEM-TABLE",
	    AB_package);
    Qunix = STATIC_SYMBOL("UNIX",AB_package);
    Qconvert_file_strings_to_uppercase_p = 
	    STATIC_SYMBOL("CONVERT-FILE-STRINGS-TO-UPPERCASE-P",AB_package);
    Qg2_defstruct_structure_name_gensym_pathname_g2_struct = 
	    STATIC_SYMBOL("GENSYM-PATHNAME-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qunbound_in_protected_let = STATIC_SYMBOL("UNBOUND-IN-PROTECTED-LET",
	    AB_package);
    Qwide_string = STATIC_SYMBOL("WIDE-STRING",AB_package);
    Qdo_not_use = STATIC_SYMBOL("DO-NOT-USE",AB_package);
    Qread_file_into_string_buffer_size = 
	    STATIC_SYMBOL("READ-FILE-INTO-STRING-BUFFER-SIZE",AB_package);
    SET_SYMBOL_VALUE(Qread_file_into_string_buffer_size,FIX((SI_Long)2048L));
    if (Buffer_for_read_file_into_string == UNBOUND)
	Buffer_for_read_file_into_string = make_string(1,
		Read_file_into_string_buffer_size);
    Qg2_stream_terminate_string_with_cr = 
	    STATIC_SYMBOL("G2-STREAM-TERMINATE-STRING-WITH-CR",AB_package);
    SET_SYMBOL_VALUE(Qg2_stream_terminate_string_with_cr,FIX((SI_Long)1L));
    Qg2_stream_do_not_terminate_string_with_cr = 
	    STATIC_SYMBOL("G2-STREAM-DO-NOT-TERMINATE-STRING-WITH-CR",
	    AB_package);
    SET_SYMBOL_VALUE(Qg2_stream_do_not_terminate_string_with_cr,
	    FIX((SI_Long)0L));
    string_constant = STATIC_STRING("");
    Qgensym_string = STATIC_SYMBOL("GENSYM-STRING",AB_package);
    Qg2_stream_directory_success = 
	    STATIC_SYMBOL("G2-STREAM-DIRECTORY-SUCCESS",AB_package);
    SET_SYMBOL_VALUE(Qg2_stream_directory_success,FIX((SI_Long)1L));
    G2_stream_directory_buffer_length = FIX((SI_Long)255L);
    if (G2_stream_directory_buffer == UNBOUND)
	G2_stream_directory_buffer = obtain_text_string(FIX((SI_Long)255L));
    G2_stream_directory_initialized_p = Nil;
    Qsize_for_temp_filename = STATIC_SYMBOL("SIZE-FOR-TEMP-FILENAME",
	    AB_package);
    SET_SYMBOL_VALUE(Qsize_for_temp_filename,FIX((SI_Long)270L));
    if (Unique_temp_filename == UNBOUND)
	Unique_temp_filename = make_string(1,Size_for_temp_filename);
    Qg2_defstruct_structure_name_regular_expression_node_g2_struct = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qregular_expression_node = STATIC_SYMBOL("REGULAR-EXPRESSION-NODE",
	    AB_package);
    mutate_global_property(Qg2_defstruct_structure_name_regular_expression_node_g2_struct,
	    Qregular_expression_node,Qab_name_of_unique_structure_type);
    mutate_global_property(Qregular_expression_node,
	    Qg2_defstruct_structure_name_regular_expression_node_g2_struct,
	    Qunique_structure_type_of_ab_name_qm);
    if (The_type_description_of_regular_expression_node == UNBOUND)
	The_type_description_of_regular_expression_node = Nil;
    string_constant_62 = 
	    STATIC_STRING("43Dy8l83Cy1n83Cy8m8k1l8m0000001l1m8q834Eykmk0k0");
    temp = The_type_description_of_regular_expression_node;
    The_type_description_of_regular_expression_node = 
	    load_and_initialize_type_description(temp,
	    regenerate_optimized_constant(string_constant_62));
    mutate_global_property(Qg2_defstruct_structure_name_regular_expression_node_g2_struct,
	    The_type_description_of_regular_expression_node,
	    Qtype_description_of_unique_type_name_of_gensym_structure);
    mutate_global_property(Qregular_expression_node,
	    The_type_description_of_regular_expression_node,
	    Qtype_description_of_type);
    Qoutstanding_regular_expression_node_count = 
	    STATIC_SYMBOL("OUTSTANDING-REGULAR-EXPRESSION-NODE-COUNT",
	    AB_package);
    Qregular_expression_node_structure_memory_usage = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-STRUCTURE-MEMORY-USAGE",
	    AB_package);
    string_constant_63 = STATIC_STRING("1q83Cy8o8370y09k9l");
    clear_optimized_constants();
    push_optimized_constant(Qoutstanding_regular_expression_node_count);
    push_optimized_constant(Qregular_expression_node_structure_memory_usage);
    update_object_pool_meters_list(regenerate_optimized_constant(string_constant_63));
    Qchain_of_available_regular_expression_nodes = 
	    STATIC_SYMBOL("CHAIN-OF-AVAILABLE-REGULAR-EXPRESSION-NODES",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qchain_of_available_regular_expression_nodes,
	    Chain_of_available_regular_expression_nodes);
    record_system_variable(Qchain_of_available_regular_expression_nodes,
	    Qutilities2,Nil,Qnil,Qt,Qnil,Qnil);
    Qregular_expression_node_count = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-COUNT",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qregular_expression_node_count,
	    Regular_expression_node_count);
    record_system_variable(Qregular_expression_node_count,Qutilities2,
	    FIX((SI_Long)0L),Qnil,Qt,Qnil,Qnil);
    SET_SYMBOL_FUNCTION(Qregular_expression_node_structure_memory_usage,
	    STATIC_FUNCTION(regular_expression_node_structure_memory_usage,
	    NIL,FALSE,0,0));
    SET_SYMBOL_FUNCTION(Qoutstanding_regular_expression_node_count,
	    STATIC_FUNCTION(outstanding_regular_expression_node_count,NIL,
	    FALSE,0,0));
    reclaim_structure_for_regular_expression_node_1 = 
	    STATIC_FUNCTION(reclaim_structure_for_regular_expression_node,
	    NIL,FALSE,1,1);
    record_direct_structure_method(Qreclaim_structure,
	    Qregular_expression_node,
	    reclaim_structure_for_regular_expression_node_1);
    Qg2_defstruct_structure_name_regular_expression_node_for_single_character_g2_struct 
	    = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SINGLE-CHARACTER-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qregular_expression_node_for_single_character = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SINGLE-CHARACTER",
	    AB_package);
    mutate_global_property(Qg2_defstruct_structure_name_regular_expression_node_for_single_character_g2_struct,
	    Qregular_expression_node_for_single_character,
	    Qab_name_of_unique_structure_type);
    mutate_global_property(Qregular_expression_node_for_single_character,
	    Qg2_defstruct_structure_name_regular_expression_node_for_single_character_g2_struct,
	    Qunique_structure_type_of_ab_name_qm);
    if (The_type_description_of_regular_expression_node_for_single_character 
	    == UNBOUND)
	The_type_description_of_regular_expression_node_for_single_character 
		= Nil;
    string_constant_64 = 
	    STATIC_STRING("43Dy8l83-Xy1o83-Xy83Cy8m8k1l83Cy0000001n1m8p83Cy1n8n832Dy1l833uy1m8q833Wyknk0k0");
    temp = 
	    The_type_description_of_regular_expression_node_for_single_character;
    The_type_description_of_regular_expression_node_for_single_character = 
	    load_and_initialize_type_description(temp,
	    regenerate_optimized_constant(string_constant_64));
    mutate_global_property(Qg2_defstruct_structure_name_regular_expression_node_for_single_character_g2_struct,
	    The_type_description_of_regular_expression_node_for_single_character,
	    Qtype_description_of_unique_type_name_of_gensym_structure);
    mutate_global_property(Qregular_expression_node_for_single_character,
	    The_type_description_of_regular_expression_node_for_single_character,
	    Qtype_description_of_type);
    Qoutstanding_regular_expression_node_for_single_character_count = 
	    STATIC_SYMBOL("OUTSTANDING-REGULAR-EXPRESSION-NODE-FOR-SINGLE-CHARACTER-COUNT",
	    AB_package);
    Qregular_expression_node_for_single_character_structure_memory_usage = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SINGLE-CHARACTER-STRUCTURE-MEMORY-USAGE",
	    AB_package);
    string_constant_65 = STATIC_STRING("1q83-Xy8o8372y09k9l");
    clear_optimized_constants();
    push_optimized_constant(Qoutstanding_regular_expression_node_for_single_character_count);
    push_optimized_constant(Qregular_expression_node_for_single_character_structure_memory_usage);
    update_object_pool_meters_list(regenerate_optimized_constant(string_constant_65));
    Qchain_of_available_regular_expression_node_for_single_characters = 
	    STATIC_SYMBOL("CHAIN-OF-AVAILABLE-REGULAR-EXPRESSION-NODE-FOR-SINGLE-CHARACTERS",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qchain_of_available_regular_expression_node_for_single_characters,
	    Chain_of_available_regular_expression_node_for_single_characters);
    record_system_variable(Qchain_of_available_regular_expression_node_for_single_characters,
	    Qutilities2,Nil,Qnil,Qt,Qnil,Qnil);
    Qregular_expression_node_for_single_character_count = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SINGLE-CHARACTER-COUNT",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qregular_expression_node_for_single_character_count,
	    Regular_expression_node_for_single_character_count);
    record_system_variable(Qregular_expression_node_for_single_character_count,
	    Qutilities2,FIX((SI_Long)0L),Qnil,Qt,Qnil,Qnil);
    SET_SYMBOL_FUNCTION(Qregular_expression_node_for_single_character_structure_memory_usage,
	    STATIC_FUNCTION(regular_expression_node_for_single_character_structure_memory_usage,
	    NIL,FALSE,0,0));
    SET_SYMBOL_FUNCTION(Qoutstanding_regular_expression_node_for_single_character_count,
	    STATIC_FUNCTION(outstanding_regular_expression_node_for_single_character_count,
	    NIL,FALSE,0,0));
    reclaim_structure_for_regular_expression_node_for_single_character_1 = 
	    STATIC_FUNCTION(reclaim_structure_for_regular_expression_node_for_single_character,
	    NIL,FALSE,1,1);
    record_direct_structure_method(Qreclaim_structure,
	    Qregular_expression_node_for_single_character,
	    reclaim_structure_for_regular_expression_node_for_single_character_1);
    Qg2_defstruct_structure_name_regular_expression_node_for_single_wild_character_g2_struct 
	    = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SINGLE-WILD-CHARACTER-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qregular_expression_node_for_single_wild_character = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SINGLE-WILD-CHARACTER",
	    AB_package);
    mutate_global_property(Qg2_defstruct_structure_name_regular_expression_node_for_single_wild_character_g2_struct,
	    Qregular_expression_node_for_single_wild_character,
	    Qab_name_of_unique_structure_type);
    mutate_global_property(Qregular_expression_node_for_single_wild_character,
	    Qg2_defstruct_structure_name_regular_expression_node_for_single_wild_character_g2_struct,
	    Qunique_structure_type_of_ab_name_qm);
    if (The_type_description_of_regular_expression_node_for_single_wild_character 
	    == UNBOUND)
	The_type_description_of_regular_expression_node_for_single_wild_character 
		= Nil;
    string_constant_66 = 
	    STATIC_STRING("43Dy8l83-Yy1o83-Yy83Cy8m8k1l83Cy0000001n1m8p83Cy1n8n832Ey01m8q833Xykmk0k0");
    temp = 
	    The_type_description_of_regular_expression_node_for_single_wild_character;
    The_type_description_of_regular_expression_node_for_single_wild_character 
	    = load_and_initialize_type_description(temp,
	    regenerate_optimized_constant(string_constant_66));
    mutate_global_property(Qg2_defstruct_structure_name_regular_expression_node_for_single_wild_character_g2_struct,
	    The_type_description_of_regular_expression_node_for_single_wild_character,
	    Qtype_description_of_unique_type_name_of_gensym_structure);
    mutate_global_property(Qregular_expression_node_for_single_wild_character,
	    The_type_description_of_regular_expression_node_for_single_wild_character,
	    Qtype_description_of_type);
    Qoutstanding_regular_expression_node_for_single_wild_character_count = 
	    STATIC_SYMBOL("OUTSTANDING-REGULAR-EXPRESSION-NODE-FOR-SINGLE-WILD-CHARACTER-COUNT",
	    AB_package);
    Qregular_expression_node_for_single_wild_character_structure_memory_usage 
	    = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SINGLE-WILD-CHARACTER-STRUCTURE-MEMORY-USAGE",
	    AB_package);
    string_constant_67 = STATIC_STRING("1q83-Yy8o8373y09k9l");
    clear_optimized_constants();
    push_optimized_constant(Qoutstanding_regular_expression_node_for_single_wild_character_count);
    push_optimized_constant(Qregular_expression_node_for_single_wild_character_structure_memory_usage);
    update_object_pool_meters_list(regenerate_optimized_constant(string_constant_67));
    Qchain_of_available_regular_expression_node_for_single_wild_characters 
	    = 
	    STATIC_SYMBOL("CHAIN-OF-AVAILABLE-REGULAR-EXPRESSION-NODE-FOR-SINGLE-WILD-CHARACTERS",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qchain_of_available_regular_expression_node_for_single_wild_characters,
	    Chain_of_available_regular_expression_node_for_single_wild_characters);
    record_system_variable(Qchain_of_available_regular_expression_node_for_single_wild_characters,
	    Qutilities2,Nil,Qnil,Qt,Qnil,Qnil);
    Qregular_expression_node_for_single_wild_character_count = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SINGLE-WILD-CHARACTER-COUNT",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qregular_expression_node_for_single_wild_character_count,
	    Regular_expression_node_for_single_wild_character_count);
    record_system_variable(Qregular_expression_node_for_single_wild_character_count,
	    Qutilities2,FIX((SI_Long)0L),Qnil,Qt,Qnil,Qnil);
    SET_SYMBOL_FUNCTION(Qregular_expression_node_for_single_wild_character_structure_memory_usage,
	    STATIC_FUNCTION(regular_expression_node_for_single_wild_character_structure_memory_usage,
	    NIL,FALSE,0,0));
    SET_SYMBOL_FUNCTION(Qoutstanding_regular_expression_node_for_single_wild_character_count,
	    STATIC_FUNCTION(outstanding_regular_expression_node_for_single_wild_character_count,
	    NIL,FALSE,0,0));
    reclaim_structure_for_regular_expression_node_for_single_wild_character_1 
	    = 
	    STATIC_FUNCTION(reclaim_structure_for_regular_expression_node_for_single_wild_character,
	    NIL,FALSE,1,1);
    record_direct_structure_method(Qreclaim_structure,
	    Qregular_expression_node_for_single_wild_character,
	    reclaim_structure_for_regular_expression_node_for_single_wild_character_1);
    Qg2_defstruct_structure_name_multiply_wild_regular_expression_node_g2_struct 
	    = 
	    STATIC_SYMBOL("MULTIPLY-WILD-REGULAR-EXPRESSION-NODE-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qmultiply_wild_regular_expression_node = 
	    STATIC_SYMBOL("MULTIPLY-WILD-REGULAR-EXPRESSION-NODE",AB_package);
    mutate_global_property(Qg2_defstruct_structure_name_multiply_wild_regular_expression_node_g2_struct,
	    Qmultiply_wild_regular_expression_node,
	    Qab_name_of_unique_structure_type);
    mutate_global_property(Qmultiply_wild_regular_expression_node,
	    Qg2_defstruct_structure_name_multiply_wild_regular_expression_node_g2_struct,
	    Qunique_structure_type_of_ab_name_qm);
    if (The_type_description_of_multiply_wild_regular_expression_node == 
	    UNBOUND)
	The_type_description_of_multiply_wild_regular_expression_node = Nil;
    string_constant_68 = 
	    STATIC_STRING("43Dy8l83Jy1o83Jy83Cy8m8k1l83Cy0000001l1m8p83Cykok0k0");
    temp = The_type_description_of_multiply_wild_regular_expression_node;
    The_type_description_of_multiply_wild_regular_expression_node = 
	    load_and_initialize_type_description(temp,
	    regenerate_optimized_constant(string_constant_68));
    mutate_global_property(Qg2_defstruct_structure_name_multiply_wild_regular_expression_node_g2_struct,
	    The_type_description_of_multiply_wild_regular_expression_node,
	    Qtype_description_of_unique_type_name_of_gensym_structure);
    mutate_global_property(Qmultiply_wild_regular_expression_node,
	    The_type_description_of_multiply_wild_regular_expression_node,
	    Qtype_description_of_type);
    Qoutstanding_multiply_wild_regular_expression_node_count = 
	    STATIC_SYMBOL("OUTSTANDING-MULTIPLY-WILD-REGULAR-EXPRESSION-NODE-COUNT",
	    AB_package);
    Qmultiply_wild_regular_expression_node_structure_memory_usage = 
	    STATIC_SYMBOL("MULTIPLY-WILD-REGULAR-EXPRESSION-NODE-STRUCTURE-MEMORY-USAGE",
	    AB_package);
    string_constant_69 = STATIC_STRING("1q83Jy8o836oy09k9l");
    clear_optimized_constants();
    push_optimized_constant(Qoutstanding_multiply_wild_regular_expression_node_count);
    push_optimized_constant(Qmultiply_wild_regular_expression_node_structure_memory_usage);
    update_object_pool_meters_list(regenerate_optimized_constant(string_constant_69));
    Qchain_of_available_multiply_wild_regular_expression_nodes = 
	    STATIC_SYMBOL("CHAIN-OF-AVAILABLE-MULTIPLY-WILD-REGULAR-EXPRESSION-NODES",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qchain_of_available_multiply_wild_regular_expression_nodes,
	    Chain_of_available_multiply_wild_regular_expression_nodes);
    record_system_variable(Qchain_of_available_multiply_wild_regular_expression_nodes,
	    Qutilities2,Nil,Qnil,Qt,Qnil,Qnil);
    Qmultiply_wild_regular_expression_node_count = 
	    STATIC_SYMBOL("MULTIPLY-WILD-REGULAR-EXPRESSION-NODE-COUNT",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qmultiply_wild_regular_expression_node_count,
	    Multiply_wild_regular_expression_node_count);
    record_system_variable(Qmultiply_wild_regular_expression_node_count,
	    Qutilities2,FIX((SI_Long)0L),Qnil,Qt,Qnil,Qnil);
    SET_SYMBOL_FUNCTION(Qmultiply_wild_regular_expression_node_structure_memory_usage,
	    STATIC_FUNCTION(multiply_wild_regular_expression_node_structure_memory_usage,
	    NIL,FALSE,0,0));
    SET_SYMBOL_FUNCTION(Qoutstanding_multiply_wild_regular_expression_node_count,
	    STATIC_FUNCTION(outstanding_multiply_wild_regular_expression_node_count,
	    NIL,FALSE,0,0));
    reclaim_structure_for_multiply_wild_regular_expression_node_1 = 
	    STATIC_FUNCTION(reclaim_structure_for_multiply_wild_regular_expression_node,
	    NIL,FALSE,1,1);
    record_direct_structure_method(Qreclaim_structure,
	    Qmultiply_wild_regular_expression_node,
	    reclaim_structure_for_multiply_wild_regular_expression_node_1);
    Qg2_defstruct_structure_name_regular_expression_node_for_wild_characters_g2_struct 
	    = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-WILD-CHARACTERS-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qregular_expression_node_for_wild_characters = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-WILD-CHARACTERS",
	    AB_package);
    mutate_global_property(Qg2_defstruct_structure_name_regular_expression_node_for_wild_characters_g2_struct,
	    Qregular_expression_node_for_wild_characters,
	    Qab_name_of_unique_structure_type);
    mutate_global_property(Qregular_expression_node_for_wild_characters,
	    Qg2_defstruct_structure_name_regular_expression_node_for_wild_characters_g2_struct,
	    Qunique_structure_type_of_ab_name_qm);
    if (The_type_description_of_regular_expression_node_for_wild_characters 
	    == UNBOUND)
	The_type_description_of_regular_expression_node_for_wild_characters 
		= Nil;
    string_constant_70 = 
	    STATIC_STRING("43Dy8l83-ay1p83-ay83Jy83Cy8m8k1l83Jy0000001n1m8p83Jy1n8n832Gy01m8q833Zykok0k0");
    temp = The_type_description_of_regular_expression_node_for_wild_characters;
    The_type_description_of_regular_expression_node_for_wild_characters = 
	    load_and_initialize_type_description(temp,
	    regenerate_optimized_constant(string_constant_70));
    mutate_global_property(Qg2_defstruct_structure_name_regular_expression_node_for_wild_characters_g2_struct,
	    The_type_description_of_regular_expression_node_for_wild_characters,
	    Qtype_description_of_unique_type_name_of_gensym_structure);
    mutate_global_property(Qregular_expression_node_for_wild_characters,
	    The_type_description_of_regular_expression_node_for_wild_characters,
	    Qtype_description_of_type);
    Qoutstanding_regular_expression_node_for_wild_characters_count = 
	    STATIC_SYMBOL("OUTSTANDING-REGULAR-EXPRESSION-NODE-FOR-WILD-CHARACTERS-COUNT",
	    AB_package);
    Qregular_expression_node_for_wild_characters_structure_memory_usage = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-WILD-CHARACTERS-STRUCTURE-MEMORY-USAGE",
	    AB_package);
    string_constant_71 = STATIC_STRING("1q83-ay8o8375y09k9l");
    clear_optimized_constants();
    push_optimized_constant(Qoutstanding_regular_expression_node_for_wild_characters_count);
    push_optimized_constant(Qregular_expression_node_for_wild_characters_structure_memory_usage);
    update_object_pool_meters_list(regenerate_optimized_constant(string_constant_71));
    Qchain_of_available_regular_expression_node_for_wild_characterss = 
	    STATIC_SYMBOL("CHAIN-OF-AVAILABLE-REGULAR-EXPRESSION-NODE-FOR-WILD-CHARACTERSS",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qchain_of_available_regular_expression_node_for_wild_characterss,
	    Chain_of_available_regular_expression_node_for_wild_characterss);
    record_system_variable(Qchain_of_available_regular_expression_node_for_wild_characterss,
	    Qutilities2,Nil,Qnil,Qt,Qnil,Qnil);
    Qregular_expression_node_for_wild_characters_count = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-WILD-CHARACTERS-COUNT",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qregular_expression_node_for_wild_characters_count,
	    Regular_expression_node_for_wild_characters_count);
    record_system_variable(Qregular_expression_node_for_wild_characters_count,
	    Qutilities2,FIX((SI_Long)0L),Qnil,Qt,Qnil,Qnil);
    SET_SYMBOL_FUNCTION(Qregular_expression_node_for_wild_characters_structure_memory_usage,
	    STATIC_FUNCTION(regular_expression_node_for_wild_characters_structure_memory_usage,
	    NIL,FALSE,0,0));
    SET_SYMBOL_FUNCTION(Qoutstanding_regular_expression_node_for_wild_characters_count,
	    STATIC_FUNCTION(outstanding_regular_expression_node_for_wild_characters_count,
	    NIL,FALSE,0,0));
    reclaim_structure_for_regular_expression_node_for_wild_characters_1 = 
	    STATIC_FUNCTION(reclaim_structure_for_regular_expression_node_for_wild_characters,
	    NIL,FALSE,1,1);
    record_direct_structure_method(Qreclaim_structure,
	    Qregular_expression_node_for_wild_characters,
	    reclaim_structure_for_regular_expression_node_for_wild_characters_1);
    Qg2_defstruct_structure_name_regular_expression_node_for_set_of_characters_g2_struct 
	    = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SET-OF-CHARACTERS-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qregular_expression_node_for_set_of_characters = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SET-OF-CHARACTERS",
	    AB_package);
    mutate_global_property(Qg2_defstruct_structure_name_regular_expression_node_for_set_of_characters_g2_struct,
	    Qregular_expression_node_for_set_of_characters,
	    Qab_name_of_unique_structure_type);
    mutate_global_property(Qregular_expression_node_for_set_of_characters,
	    Qg2_defstruct_structure_name_regular_expression_node_for_set_of_characters_g2_struct,
	    Qunique_structure_type_of_ab_name_qm);
    if (The_type_description_of_regular_expression_node_for_set_of_characters 
	    == UNBOUND)
	The_type_description_of_regular_expression_node_for_set_of_characters 
		= Nil;
    string_constant_72 = 
	    STATIC_STRING("43Dy8l83-Wy1p83-Wy83Jy83Cy8m8k1l83Jy0000001n1m8p83Jy1n8n832Cy01m8q833Vykqk0k0");
    temp = 
	    The_type_description_of_regular_expression_node_for_set_of_characters;
    The_type_description_of_regular_expression_node_for_set_of_characters 
	    = load_and_initialize_type_description(temp,
	    regenerate_optimized_constant(string_constant_72));
    mutate_global_property(Qg2_defstruct_structure_name_regular_expression_node_for_set_of_characters_g2_struct,
	    The_type_description_of_regular_expression_node_for_set_of_characters,
	    Qtype_description_of_unique_type_name_of_gensym_structure);
    mutate_global_property(Qregular_expression_node_for_set_of_characters,
	    The_type_description_of_regular_expression_node_for_set_of_characters,
	    Qtype_description_of_type);
    Qoutstanding_regular_expression_node_for_set_of_characters_count = 
	    STATIC_SYMBOL("OUTSTANDING-REGULAR-EXPRESSION-NODE-FOR-SET-OF-CHARACTERS-COUNT",
	    AB_package);
    Qregular_expression_node_for_set_of_characters_structure_memory_usage 
	    = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SET-OF-CHARACTERS-STRUCTURE-MEMORY-USAGE",
	    AB_package);
    string_constant_73 = STATIC_STRING("1q83-Wy8o8371y09k9l");
    clear_optimized_constants();
    push_optimized_constant(Qoutstanding_regular_expression_node_for_set_of_characters_count);
    push_optimized_constant(Qregular_expression_node_for_set_of_characters_structure_memory_usage);
    update_object_pool_meters_list(regenerate_optimized_constant(string_constant_73));
    Qchain_of_available_regular_expression_node_for_set_of_characterss = 
	    STATIC_SYMBOL("CHAIN-OF-AVAILABLE-REGULAR-EXPRESSION-NODE-FOR-SET-OF-CHARACTERSS",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qchain_of_available_regular_expression_node_for_set_of_characterss,
	    Chain_of_available_regular_expression_node_for_set_of_characterss);
    record_system_variable(Qchain_of_available_regular_expression_node_for_set_of_characterss,
	    Qutilities2,Nil,Qnil,Qt,Qnil,Qnil);
    Qregular_expression_node_for_set_of_characters_count = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SET-OF-CHARACTERS-COUNT",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qregular_expression_node_for_set_of_characters_count,
	    Regular_expression_node_for_set_of_characters_count);
    record_system_variable(Qregular_expression_node_for_set_of_characters_count,
	    Qutilities2,FIX((SI_Long)0L),Qnil,Qt,Qnil,Qnil);
    SET_SYMBOL_FUNCTION(Qregular_expression_node_for_set_of_characters_structure_memory_usage,
	    STATIC_FUNCTION(regular_expression_node_for_set_of_characters_structure_memory_usage,
	    NIL,FALSE,0,0));
    SET_SYMBOL_FUNCTION(Qoutstanding_regular_expression_node_for_set_of_characters_count,
	    STATIC_FUNCTION(outstanding_regular_expression_node_for_set_of_characters_count,
	    NIL,FALSE,0,0));
    reclaim_structure_for_regular_expression_node_for_set_of_characters_1 
	    = 
	    STATIC_FUNCTION(reclaim_structure_for_regular_expression_node_for_set_of_characters,
	    NIL,FALSE,1,1);
    record_direct_structure_method(Qreclaim_structure,
	    Qregular_expression_node_for_set_of_characters,
	    reclaim_structure_for_regular_expression_node_for_set_of_characters_1);
    Qg2_defstruct_structure_name_regular_expression_node_for_subexpression_g2_struct 
	    = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SUBEXPRESSION-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qregular_expression_node_for_subexpression = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SUBEXPRESSION",
	    AB_package);
    mutate_global_property(Qg2_defstruct_structure_name_regular_expression_node_for_subexpression_g2_struct,
	    Qregular_expression_node_for_subexpression,
	    Qab_name_of_unique_structure_type);
    mutate_global_property(Qregular_expression_node_for_subexpression,
	    Qg2_defstruct_structure_name_regular_expression_node_for_subexpression_g2_struct,
	    Qunique_structure_type_of_ab_name_qm);
    if (The_type_description_of_regular_expression_node_for_subexpression 
	    == UNBOUND)
	The_type_description_of_regular_expression_node_for_subexpression 
		= Nil;
    string_constant_74 = 
	    STATIC_STRING("43Dy8l83-Zy1p83-Zy83Jy83Cy8m8k1l83Jy0000001n1m8p83Jy1n8n832Fy1l83*ky1m8q833Yyksk0k0");
    temp = The_type_description_of_regular_expression_node_for_subexpression;
    The_type_description_of_regular_expression_node_for_subexpression = 
	    load_and_initialize_type_description(temp,
	    regenerate_optimized_constant(string_constant_74));
    mutate_global_property(Qg2_defstruct_structure_name_regular_expression_node_for_subexpression_g2_struct,
	    The_type_description_of_regular_expression_node_for_subexpression,
	    Qtype_description_of_unique_type_name_of_gensym_structure);
    mutate_global_property(Qregular_expression_node_for_subexpression,
	    The_type_description_of_regular_expression_node_for_subexpression,
	    Qtype_description_of_type);
    Qoutstanding_regular_expression_node_for_subexpression_count = 
	    STATIC_SYMBOL("OUTSTANDING-REGULAR-EXPRESSION-NODE-FOR-SUBEXPRESSION-COUNT",
	    AB_package);
    Qregular_expression_node_for_subexpression_structure_memory_usage = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SUBEXPRESSION-STRUCTURE-MEMORY-USAGE",
	    AB_package);
    string_constant_75 = STATIC_STRING("1q83-Zy8o8374y09k9l");
    clear_optimized_constants();
    push_optimized_constant(Qoutstanding_regular_expression_node_for_subexpression_count);
    push_optimized_constant(Qregular_expression_node_for_subexpression_structure_memory_usage);
    update_object_pool_meters_list(regenerate_optimized_constant(string_constant_75));
    Qchain_of_available_regular_expression_node_for_subexpressions = 
	    STATIC_SYMBOL("CHAIN-OF-AVAILABLE-REGULAR-EXPRESSION-NODE-FOR-SUBEXPRESSIONS",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qchain_of_available_regular_expression_node_for_subexpressions,
	    Chain_of_available_regular_expression_node_for_subexpressions);
    record_system_variable(Qchain_of_available_regular_expression_node_for_subexpressions,
	    Qutilities2,Nil,Qnil,Qt,Qnil,Qnil);
    Qregular_expression_node_for_subexpression_count = 
	    STATIC_SYMBOL("REGULAR-EXPRESSION-NODE-FOR-SUBEXPRESSION-COUNT",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qregular_expression_node_for_subexpression_count,
	    Regular_expression_node_for_subexpression_count);
    record_system_variable(Qregular_expression_node_for_subexpression_count,
	    Qutilities2,FIX((SI_Long)0L),Qnil,Qt,Qnil,Qnil);
    SET_SYMBOL_FUNCTION(Qregular_expression_node_for_subexpression_structure_memory_usage,
	    STATIC_FUNCTION(regular_expression_node_for_subexpression_structure_memory_usage,
	    NIL,FALSE,0,0));
    SET_SYMBOL_FUNCTION(Qoutstanding_regular_expression_node_for_subexpression_count,
	    STATIC_FUNCTION(outstanding_regular_expression_node_for_subexpression_count,
	    NIL,FALSE,0,0));
    reclaim_structure_for_regular_expression_node_for_subexpression_1 = 
	    STATIC_FUNCTION(reclaim_structure_for_regular_expression_node_for_subexpression,
	    NIL,FALSE,1,1);
    record_direct_structure_method(Qreclaim_structure,
	    Qregular_expression_node_for_subexpression,
	    reclaim_structure_for_regular_expression_node_for_subexpression_1);
    Qfirst_subexpression_node_for_reclaiming_qm = 
	    STATIC_SYMBOL("FIRST-SUBEXPRESSION-NODE-FOR-RECLAIMING\?",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qfirst_subexpression_node_for_reclaiming_qm,
	    First_subexpression_node_for_reclaiming_qm);
    record_system_variable(Qfirst_subexpression_node_for_reclaiming_qm,
	    Qstreams,Nil,Qnil,Qt,Qnil,Qnil);
    if (Single_escape_character_for_gensym_filenames == UNBOUND)
	Single_escape_character_for_gensym_filenames = FIX((SI_Long)33L);
    list_constant = STATIC_LIST((SI_Long)4L,FIX((SI_Long)42L),
	    FIX((SI_Long)63L),FIX((SI_Long)123L),FIX((SI_Long)125L));
    list_constant_56 = STATIC_LIST((SI_Long)2L,Qunsigned_byte,
	    FIX((SI_Long)16L));
    array_constant = STATIC_ARRAY(list_constant_56,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant,(SI_Long)7L,(SI_Long)57344L);
    if (Match_regular_expression_for_g2_stream_directory_hook == UNBOUND)
	Match_regular_expression_for_g2_stream_directory_hook = Nil;
    Qg2_stream_filtered_directory = 
	    STATIC_SYMBOL("G2-STREAM-FILTERED-DIRECTORY",AB_package);
    string_constant_1 = STATIC_STRING("*~a");
    Qvms = STATIC_SYMBOL("VMS",AB_package);
    array_constant_1 = STATIC_ARRAY(list_constant_56,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_1,(SI_Long)0L,(SI_Long)42L);
    UBYTE_16_ISASET_1(array_constant_1,(SI_Long)1L,(SI_Long)46L);
    UBYTE_16_ISASET_1(array_constant_1,(SI_Long)2L,(SI_Long)42L);
    UBYTE_16_ISASET_1(array_constant_1,(SI_Long)3L,(SI_Long)59L);
    UBYTE_16_ISASET_1(array_constant_1,(SI_Long)4L,(SI_Long)42L);
    UBYTE_16_ISASET_1(array_constant_1,(SI_Long)6L,(SI_Long)5L);
    UBYTE_16_ISASET_1(array_constant_1,(SI_Long)7L,(SI_Long)57344L);
    string_constant_2 = STATIC_STRING("*.*~a");
    array_constant_2 = STATIC_ARRAY(list_constant_56,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)0L,(SI_Long)42L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)1L,(SI_Long)46L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)2L,(SI_Long)42L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)3L,(SI_Long)59L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)4L,(SI_Long)48L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)6L,(SI_Long)5L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)7L,(SI_Long)57344L);
    Qwin32 = STATIC_SYMBOL("WIN32",AB_package);
    Qgeneralized_dos = STATIC_SYMBOL("GENERALIZED-DOS",AB_package);
    array_constant_3 = STATIC_ARRAY(list_constant_56,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)0L,(SI_Long)42L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)6L,(SI_Long)1L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)7L,(SI_Long)57344L);
    array_constant_4 = STATIC_ARRAY(list_constant_56,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)0L,(SI_Long)42L);
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)1L,(SI_Long)46L);
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)2L,(SI_Long)42L);
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)6L,(SI_Long)3L);
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)7L,(SI_Long)57344L);
    string_constant_3 = STATIC_STRING("~a~a");
    string_constant_4 = STATIC_STRING("~a;*");
    array_constant_5 = STATIC_ARRAY(list_constant_56,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)0L,(SI_Long)126L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)6L,(SI_Long)1L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)7L,(SI_Long)57344L);
    string_constant_5 = STATIC_STRING("~a~a~a");
    Qforeign_function_success = STATIC_SYMBOL("FOREIGN-FUNCTION-SUCCESS",
	    AB_package);
    SET_SYMBOL_VALUE(Qforeign_function_success,FIX((SI_Long)0L));
    Qforeign_function_failure = STATIC_SYMBOL("FOREIGN-FUNCTION-FAILURE",
	    AB_package);
    SET_SYMBOL_VALUE(Qforeign_function_failure,FIX((SI_Long)-1L));
    G2_stream_device_buffer_length = FIX((SI_Long)256L);
    if (G2_stream_device_buffer == UNBOUND)
	G2_stream_device_buffer = 
		obtain_simple_gensym_string(FIX((SI_Long)256L));
    Qg2_stream_directory_p_success = 
	    STATIC_SYMBOL("G2-STREAM-DIRECTORY-P-SUCCESS",AB_package);
    SET_SYMBOL_VALUE(Qg2_stream_directory_p_success,FIX((SI_Long)1L));
    Kabsolute = STATIC_SYMBOL("ABSOLUTE",Pkeyword);
    list_constant_1 = STATIC_CONS(Kabsolute,Qnil);
    Qfile_timestamp_modification_mode = 
	    STATIC_SYMBOL("FILE-TIMESTAMP-MODIFICATION-MODE",AB_package);
    SET_SYMBOL_VALUE(Qfile_timestamp_modification_mode,FIX((SI_Long)0L));
    Qfile_timestamp_access_mode = 
	    STATIC_SYMBOL("FILE-TIMESTAMP-ACCESS-MODE",AB_package);
    SET_SYMBOL_VALUE(Qfile_timestamp_access_mode,FIX((SI_Long)1L));
    Qfile_timestamp_status_change_mode = 
	    STATIC_SYMBOL("FILE-TIMESTAMP-STATUS-CHANGE-MODE",AB_package);
    SET_SYMBOL_VALUE(Qfile_timestamp_status_change_mode,FIX((SI_Long)2L));
    Qnumber_of_seconds_between_lisp_and_unix_antiquity = 
	    STATIC_SYMBOL("NUMBER-OF-SECONDS-BETWEEN-LISP-AND-UNIX-ANTIQUITY",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qnumber_of_seconds_between_lisp_and_unix_antiquity,
	    Number_of_seconds_between_lisp_and_unix_antiquity);
    float_constant = STATIC_FLOAT(2.2089888E+9);
    SET_SYMBOL_VALUE(Qnumber_of_seconds_between_lisp_and_unix_antiquity,
	    float_constant);
    Qfile_access_check_read_mode = 
	    STATIC_SYMBOL("FILE-ACCESS-CHECK-READ-MODE",AB_package);
    SET_SYMBOL_VALUE(Qfile_access_check_read_mode,FIX((SI_Long)0L));
    Qfile_access_check_write_mode = 
	    STATIC_SYMBOL("FILE-ACCESS-CHECK-WRITE-MODE",AB_package);
    SET_SYMBOL_VALUE(Qfile_access_check_write_mode,FIX((SI_Long)1L));
    Qfile_access_check_execute_mode = 
	    STATIC_SYMBOL("FILE-ACCESS-CHECK-EXECUTE-MODE",AB_package);
    SET_SYMBOL_VALUE(Qfile_access_check_execute_mode,FIX((SI_Long)2L));
    if (All_write_locks == UNBOUND)
	All_write_locks = Nil;
    string_constant_6 = 
	    STATIC_STRING("Failed to obtain write lock for ~A: ~A");
    Kenvironment_variable = STATIC_SYMBOL("ENVIRONMENT-VARIABLE",Pkeyword);
    Kcommand_line = STATIC_SYMBOL("COMMAND-LINE",Pkeyword);
    list_constant_2 = STATIC_LIST((SI_Long)2L,FIX((SI_Long)32L),
	    FIX((SI_Long)9L));
    array_constant_6 = STATIC_ARRAY(list_constant_56,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_6,(SI_Long)0L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_6,(SI_Long)1L,(SI_Long)50L);
    UBYTE_16_ISASET_1(array_constant_6,(SI_Long)6L,(SI_Long)2L);
    UBYTE_16_ISASET_1(array_constant_6,(SI_Long)7L,(SI_Long)57344L);
    Qprocess_specific_system_pathname = 
	    STATIC_SYMBOL("PROCESS-SPECIFIC-SYSTEM-PATHNAME",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qprocess_specific_system_pathname,
	    Process_specific_system_pathname);
    Qpathnames = STATIC_SYMBOL("PATHNAMES",AB_package);
    Kfuncall = STATIC_SYMBOL("FUNCALL",Pkeyword);
    Qinitialize_process_specific_system_pathname = 
	    STATIC_SYMBOL("INITIALIZE-PROCESS-SPECIFIC-SYSTEM-PATHNAME",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qinitialize_process_specific_system_pathname,
	    STATIC_FUNCTION(initialize_process_specific_system_pathname,
	    NIL,FALSE,0,0));
    list_constant_57 = STATIC_LIST((SI_Long)2L,Kfuncall,
	    Qinitialize_process_specific_system_pathname);
    record_system_variable(Qprocess_specific_system_pathname,Qpathnames,
	    list_constant_57,Qnil,Qnil,Qnil,Qnil);
    Krelative = STATIC_SYMBOL("RELATIVE",Pkeyword);
    list_constant_3 = STATIC_LIST((SI_Long)4L,Qunix,Qwin32,Qdos,
	    Qgeneralized_dos);
    string_constant_7 = STATIC_STRING(".");
    string_constant_8 = STATIC_STRING("[]");
    string_constant_76 = STATIC_STRING("g2temp~a");
    if (Root_name_for_temp_file == UNBOUND)
	Root_name_for_temp_file = string_constant_76;
    if (Maximum_number_of_tries_to_create_temp_file == UNBOUND)
	Maximum_number_of_tries_to_create_temp_file = FIX((SI_Long)1000L);
    Qfilename_parser_of_file_system = 
	    STATIC_SYMBOL("FILENAME-PARSER-OF-FILE-SYSTEM",AB_package);
    Qparse_unix_filename = STATIC_SYMBOL("PARSE-UNIX-FILENAME",AB_package);
    Qg2_directory_pathname = STATIC_SYMBOL("G2-DIRECTORY-PATHNAME",AB_package);
    Qlist_directory = STATIC_SYMBOL("LIST-DIRECTORY",AB_package);
    SET_SYMBOL_FUNCTION(Qlist_directory,STATIC_FUNCTION(list_directory,NIL,
	    FALSE,1,1));
    array_constant_7 = STATIC_ARRAY(list_constant_56,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_7,(SI_Long)0L,(SI_Long)92L);
    UBYTE_16_ISASET_1(array_constant_7,(SI_Long)6L,(SI_Long)1L);
    UBYTE_16_ISASET_1(array_constant_7,(SI_Long)7L,(SI_Long)57344L);
    array_constant_8 = STATIC_ARRAY(list_constant_56,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_8,(SI_Long)0L,(SI_Long)47L);
    UBYTE_16_ISASET_1(array_constant_8,(SI_Long)6L,(SI_Long)1L);
    UBYTE_16_ISASET_1(array_constant_8,(SI_Long)7L,(SI_Long)57344L);
}
