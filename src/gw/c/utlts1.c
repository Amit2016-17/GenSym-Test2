/* utlts1.c
 * Input file:  utilities1.lisp
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
 */

#include "user.h"
#include "utlts1.h"


Object G2int_string_allocation_schemes = UNBOUND;

Object G2int_maximum_gensym_string_length = UNBOUND;

Object G2int_maximum_gensym_string_length_exceeded_message = UNBOUND;

/* MAXIMUM-GENSYM-STRING-LENGTH-ERROR */
Object g2int_maximum_gensym_string_length_error(length_1)
    Object length_1;
{
    Object temp;

    x_note_fn_call(21,0);
    temp = g2int_signal_gsi_maximum_gensym_string_length_error(length_1,
	    G2int_maximum_gensym_string_length);
    return VALUES_1(temp);
}

/* NEW-SHORT-SIMPLE-GENSYM-STRING-VECTOR */
Object g2int_new_short_simple_gensym_string_vector(initial_element)
    Object initial_element;
{
    Object temp;

    x_note_fn_call(21,1);
    temp = make_array(3,
	    FIXNUM_ADD1(G2int_maximum_suggested_length_for_simple_gensym_strings),
	    Kinitial_element,initial_element);
    return VALUES_1(temp);
}

/* NEW-PARTIAL-BUFFER-GENSYM-STRING-VECTOR */
Object g2int_new_partial_buffer_gensym_string_vector(initial_element)
    Object initial_element;
{
    Object temp;

    x_note_fn_call(21,2);
    temp = make_array(3,
	    FIXNUM_ADD1(g2int_partial_buffer_pool_index_given_length(G2int_maximum_gensym_string_length,
	    G2int_string_allocation_schemes)),Kinitial_element,
	    initial_element);
    return VALUES_1(temp);
}

Object G2int_short_simple_gensym_strings = UNBOUND;

Object G2int_long_simple_gensym_strings = UNBOUND;

Object G2int_adjustable_gensym_strings = UNBOUND;

Object G2int_short_simple_gensym_string_counts = UNBOUND;

Object G2int_long_simple_gensym_string_counts = UNBOUND;

Object G2int_adjustable_gensym_string_counts = UNBOUND;

Object G2int_simple_gensym_string_counter = UNBOUND;

Object G2int_simple_gensym_string_byte_use_counter = UNBOUND;

/* SUM-RECLAIMED-STRINGS */
Object g2int_sum_reclaimed_strings(vector_1)
    Object vector_1;
{
    Object incff_1_arg, temp;
    SI_Long sum1, index_1, ab_loop_bind_;

    x_note_fn_call(21,3);
    sum1 = (SI_Long)0L;
    index_1 = (SI_Long)0L;
    ab_loop_bind_ = IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(vector_1));
  next_loop:
    if (index_1 >= ab_loop_bind_)
	goto end_loop;
    incff_1_arg = length(ISVREF(vector_1,index_1));
    sum1 = sum1 + IFIX(incff_1_arg);
    index_1 = index_1 + (SI_Long)1L;
    goto next_loop;
  end_loop:
    temp = FIX(sum1);
    goto end;
    temp = Qnil;
  end:;
    return VALUES_1(temp);
}

/* OUTSTANDING-SIMPLE-GENSYM-STRINGS */
Object g2int_outstanding_simple_gensym_strings()
{
    Object temp, temp_1;

    x_note_fn_call(21,4);
    temp = G2int_simple_gensym_string_counter;
    temp_1 = g2int_sum_reclaimed_strings(G2int_short_simple_gensym_strings);
    temp_1 = FIXNUM_MINUS(temp,FIXNUM_ADD(temp_1,
	    g2int_sum_reclaimed_strings(G2int_long_simple_gensym_strings)));
    return VALUES_1(temp_1);
}

/* COMPUTE-MEMORY-USED-BY-SIMPLE-GENSYM-STRINGS */
Object g2int_compute_memory_used_by_simple_gensym_strings()
{
    x_note_fn_call(21,5);
    return VALUES_1(G2int_simple_gensym_string_byte_use_counter);
}

Object G2int_string_pool_number_to_malloc = UNBOUND;

Object G2int_largest_non_malloced_string_pool_index = UNBOUND;

static Object Qg2int_gensym;       /* gensym */

static Object Qg2int_simple_gensym_string;  /* simple-gensym-string */

/* OBTAIN-SIMPLE-GENSYM-STRING */
Object g2int_obtain_simple_gensym_string(length_1)
    Object length_1;
{
    Object pool_qm, temp, temp_1, svref_new_value, string_1, trailing_cons_qm;
    Object pool_cons;
    SI_Long pool_index, temp_2;

    x_note_fn_call(21,6);
    if (FIXNUM_LE(length_1,
	    G2int_maximum_suggested_length_for_simple_gensym_strings)) {
	pool_qm = ISVREF(G2int_short_simple_gensym_strings,IFIX(length_1));
	if (pool_qm) {
	    temp = M_CAR(pool_qm);
	    temp_1 = G2int_short_simple_gensym_strings;
	    svref_new_value = M_CDR(pool_qm);
	    SVREF(temp_1,length_1) = svref_new_value;
	    inline_note_reclaim_cons(pool_qm,Qg2int_gensym);
	    temp_1 = G2int_available_gensym_conses;
	    M_CDR(pool_qm) = temp_1;
	    G2int_available_gensym_conses = pool_qm;
	    string_1 = temp;
	}
	else
	    string_1 = g2int_allocate_new_simple_gensym_string(length_1,Nil);
    }
    else if (FIXNUM_GT(length_1,G2int_maximum_gensym_string_length))
	string_1 = g2int_maximum_gensym_string_length_error(length_1);
    else {
	pool_index = 
		IFIX(g2int_partial_buffer_pool_index_given_length(length_1,
		G2int_string_allocation_schemes));
	trailing_cons_qm = Nil;
	pool_cons = ISVREF(G2int_long_simple_gensym_strings,pool_index);
      next_loop:
	if ( !TRUEP(pool_cons))
	    goto end_loop;
	if (FIXNUM_EQ(length_1,SIMPLE_ARRAY_ANY_1_LENGTH(M_CAR(pool_cons)))) {
	    if (trailing_cons_qm) {
		temp_1 = M_CDR(pool_cons);
		M_CDR(trailing_cons_qm) = temp_1;
	    }
	    else {
		temp_1 = G2int_long_simple_gensym_strings;
		svref_new_value = M_CDR(pool_cons);
		ISVREF(temp_1,pool_index) = svref_new_value;
	    }
	    temp = M_CAR(pool_cons);
	    inline_note_reclaim_cons(pool_cons,Qg2int_gensym);
	    temp_1 = G2int_available_gensym_conses;
	    M_CDR(pool_cons) = temp_1;
	    G2int_available_gensym_conses = pool_cons;
	    string_1 = temp;
	    goto end;
	}
	trailing_cons_qm = pool_cons;
	pool_cons = M_CDR(pool_cons);
	goto next_loop;
      end_loop:
	if (IFIX(G2int_string_pool_number_to_malloc) == (SI_Long)-1L || 
		pool_index < IFIX(G2int_string_pool_number_to_malloc))
	    string_1 = g2int_allocate_new_simple_gensym_string(length_1,Nil);
	else {
	    temp_2 = IFIX(G2int_largest_non_malloced_string_pool_index);
	    G2int_largest_non_malloced_string_pool_index = FIX(MAX(temp_2,
		    pool_index));
	    string_1 = g2int_allocate_new_simple_gensym_string(length_1,T);
	}
	goto end;
	string_1 = Qnil;
      end:;
    }
    inline_note_allocate_cons(string_1,Qg2int_simple_gensym_string);
    return VALUES_1(string_1);
}

/* OBTAIN-SIMPLE-GENSYM-STRING-OF-QUANTIZED-LENGTH */
Object g2int_obtain_simple_gensym_string_of_quantized_length(length_1)
    Object length_1;
{
    Object temp, rounded_up_length, string_1;

    x_note_fn_call(21,7);
    if (FIXNUM_LE(length_1,
	    G2int_maximum_suggested_length_for_simple_gensym_strings))
	return g2int_obtain_simple_gensym_string(length_1);
    else {
	temp = 
		g2int_buffer_size_and_pool_for_partial_buffer(FIXNUM_ADD1(length_1),
		G2int_string_allocation_schemes);
	rounded_up_length = temp;
	string_1 = g2int_obtain_simple_gensym_string(rounded_up_length);
	temp = CHR('\000');
	SET_SCHAR(string_1,length_1,temp);
	return VALUES_1(string_1);
    }
}

Object G2int_log_simple_string_data = UNBOUND;

Object G2int_log_simple_string_reclaims = UNBOUND;

Object G2int_min_string_length_to_report = UNBOUND;

Object G2int_string_report_frequency = UNBOUND;

Object G2int_string_allocations_until_next_report = UNBOUND;

Object G2int_string_reclaims_until_next_report = UNBOUND;

Object G2int_string_chars_to_print = UNBOUND;

/* SET-MALLOCED-STRING-THRESHHOLD */
Object g2int_set_malloced_string_threshhold(length_1)
    Object length_1;
{
    Object rounded_up_length, pool_index;
    Object result;

    x_note_fn_call(21,8);
    if (IFIX(length_1) == (SI_Long)-1L) {
	G2int_string_pool_number_to_malloc = FIX((SI_Long)-1L);
	return VALUES_1(G2int_string_pool_number_to_malloc);
    }
    else {
	result = g2int_buffer_size_and_pool_for_partial_buffer(length_1,
		G2int_string_allocation_schemes);
	MVS_2(result,rounded_up_length,pool_index);
	if (FIXNUM_GT(pool_index,G2int_largest_non_malloced_string_pool_index))
	    G2int_string_pool_number_to_malloc = pool_index;
	return VALUES_1(rounded_up_length);
    }
}

/* FREE-MALLOCED-STRINGS */
Object free_malloced_strings()
{
    Object array_list, array, ab_loop_list_, temp, decff_1_arg;
    SI_Long pool_index, ab_loop_bind_;

    x_note_fn_call(21,9);
    if (IFIX(G2int_string_pool_number_to_malloc) >= (SI_Long)0L) {
	pool_index = IFIX(G2int_string_pool_number_to_malloc);
	ab_loop_bind_ = IFIX(length(G2int_long_simple_gensym_strings));
      next_loop:
	if (pool_index >= ab_loop_bind_)
	    goto end_loop;
	array_list = ISVREF(G2int_long_simple_gensym_strings,pool_index);
	array = Nil;
	ab_loop_list_ = array_list;
      next_loop_1:
	if ( !TRUEP(ab_loop_list_))
	    goto end_loop_1;
	array = M_CAR(ab_loop_list_);
	ab_loop_list_ = M_CDR(ab_loop_list_);
	temp = FIXNUM_SUB1(G2int_simple_gensym_string_counter);
	G2int_simple_gensym_string_counter = temp;
	decff_1_arg = g2int_bytes_per_simple_string(length(array));
	temp = FIXNUM_MINUS(G2int_simple_gensym_string_byte_use_counter,
		decff_1_arg);
	G2int_simple_gensym_string_byte_use_counter = temp;
	g2rtl_free_malloced_array_internal(array);
	goto next_loop_1;
      end_loop_1:;
	g2int_reclaim_gensym_list_1(array_list);
	temp = G2int_long_simple_gensym_strings;
	ISVREF(temp,pool_index) = Nil;
	temp = G2int_long_simple_gensym_string_counts;
	ISVREF(temp,pool_index) = FIX((SI_Long)0L);
	pool_index = pool_index + (SI_Long)1L;
	goto next_loop;
      end_loop:
	return VALUES_1(Qnil);
    }
    else
	return VALUES_1(Nil);
}

/* ALLOCATE-NEW-SIMPLE-GENSYM-STRING */
Object g2int_allocate_new_simple_gensym_string(length_1,malloc_p)
    Object length_1, malloc_p;
{
    Object temp, incff_1_arg, temp_1, svref_new_value, temp_2;
    XDeclare_area(1);

    x_note_fn_call(21,10);
    if (FIXNUM_GT(length_1,G2int_maximum_gensym_string_length))
	g2int_maximum_gensym_string_length_error(length_1);
    temp = FIXNUM_ADD1(G2int_simple_gensym_string_counter);
    G2int_simple_gensym_string_counter = temp;
    incff_1_arg = g2int_bytes_per_simple_string(length_1);
    temp = FIXNUM_ADD(G2int_simple_gensym_string_byte_use_counter,incff_1_arg);
    G2int_simple_gensym_string_byte_use_counter = temp;
    if (FIXNUM_LE(length_1,
	    G2int_maximum_suggested_length_for_simple_gensym_strings)) {
	temp = G2int_short_simple_gensym_string_counts;
	temp_1 = FIXNUM_ADD1(ISVREF(temp,IFIX(length_1)));
	SVREF(temp,length_1) = temp_1;
    }
    else {
	temp = G2int_long_simple_gensym_string_counts;
	temp_1 = g2int_partial_buffer_pool_index_given_length(length_1,
		G2int_string_allocation_schemes);
	svref_new_value = FIXNUM_ADD1(ISVREF(temp,IFIX(temp_1)));
	SVREF(temp,temp_1) = svref_new_value;
    }
    if (malloc_p)
	temp_2 = g2rtl_make_malloced_string(IFIX(length_1));
    else {
	if (PUSH_AREA(Dynamic_area,0))
	    temp_2 = make_string(1,length_1);
	POP_AREA(0);
    }
    return VALUES_1(temp_2);
}

Object G2int_current_custom_reclamation_stampqm = UNBOUND;

/* RECLAIM-SIMPLE-GENSYM-STRING */
Object g2int_reclaim_simple_gensym_string(simple_gensym_string)
    Object simple_gensym_string;
{
    Object string_pool_vector, temp, ab_loop_iter_flag_, temp_1, decff_1_arg;
    Object svref_new_value, new_cons, gensymed_symbol;
    SI_Long gensym_string_length, index_1, schar_arg_2, i, ab_loop_bind_, j;
    SI_Long ab_loop_bind__1;
    char short_string_qm;
    char schar_new_value;

    x_note_fn_call(21,11);
    inline_note_reclaim_cons(simple_gensym_string,Qg2int_simple_gensym_string);
    gensym_string_length = 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(simple_gensym_string));
    short_string_qm = gensym_string_length <= 
	    IFIX(G2int_maximum_suggested_length_for_simple_gensym_strings);
    string_pool_vector = short_string_qm ? 
	    G2int_short_simple_gensym_strings : 
	    G2int_long_simple_gensym_strings;
    index_1 = short_string_qm ? gensym_string_length : 
	    IFIX(g2int_partial_buffer_pool_index_given_length(FIX(gensym_string_length),
	    G2int_string_allocation_schemes));
    if (gensym_string_length > (SI_Long)0L) {
	temp = CHR('&');
	SET_SCHAR(simple_gensym_string,FIX((SI_Long)0L),temp);
	schar_arg_2 = gensym_string_length - (SI_Long)1L;
	SET_ISCHAR(simple_gensym_string,schar_arg_2,'&');
	if (G2int_current_custom_reclamation_stampqm) {
	    i = (SI_Long)0L;
	    ab_loop_bind_ = 
		    IFIX(length(G2int_current_custom_reclamation_stampqm));
	    j = (SI_Long)1L;
	    ab_loop_bind__1 = gensym_string_length - (SI_Long)1L;
	    ab_loop_iter_flag_ = T;
	  next_loop:
	    if (i >= ab_loop_bind_)
		goto end_loop;
	    if ( !TRUEP(ab_loop_iter_flag_))
		j = j + (SI_Long)1L;
	    if (j >= ab_loop_bind__1)
		goto end_loop;
	    schar_new_value = 
		    ICHAR(G2int_current_custom_reclamation_stampqm,i);
	    SET_ISCHAR(simple_gensym_string,j,schar_new_value);
	    ab_loop_iter_flag_ = Nil;
	    i = i + (SI_Long)1L;
	    goto next_loop;
	  end_loop:;
	}
    }
    if (G2int_free_malloced_arrays && 
	    IFIX(G2int_string_pool_number_to_malloc) <= index_1 &&  
	    !(IFIX(G2int_string_pool_number_to_malloc) == (SI_Long)-1L) && 
	     !short_string_qm) {
	temp_1 = FIXNUM_SUB1(G2int_simple_gensym_string_counter);
	G2int_simple_gensym_string_counter = temp_1;
	decff_1_arg = 
		g2int_bytes_per_simple_string(length(simple_gensym_string));
	temp_1 = FIXNUM_MINUS(G2int_simple_gensym_string_byte_use_counter,
		decff_1_arg);
	G2int_simple_gensym_string_byte_use_counter = temp_1;
	temp_1 = G2int_long_simple_gensym_string_counts;
	svref_new_value = FIXNUM_SUB1(ISVREF(temp_1,index_1));
	ISVREF(temp_1,index_1) = svref_new_value;
	g2rtl_free_malloced_array_internal(simple_gensym_string);
    }
    else {
	new_cons = G2int_available_gensym_conses;
	if (new_cons) {
	    G2int_available_gensym_conses = M_CDR(new_cons);
	    gensymed_symbol = new_cons;
	}
	else
	    gensymed_symbol = Nil;
	if ( !TRUEP(gensymed_symbol))
	    gensymed_symbol = g2int_replenish_gensym_cons_pool();
	M_CAR(gensymed_symbol) = simple_gensym_string;
	temp_1 = ISVREF(string_pool_vector,index_1);
	M_CDR(gensymed_symbol) = temp_1;
	inline_note_allocate_cons(gensymed_symbol,Qg2int_gensym);
	ISVREF(string_pool_vector,index_1) = gensymed_symbol;
    }
    return VALUES_1(Nil);
}

Object G2int_adjustable_gensym_string_counter = UNBOUND;

Object G2int_adjustable_gensym_string_byte_use_counter = UNBOUND;

/* OUTSTANDING-ADJUSTABLE-GENSYM-STRINGS */
Object g2int_outstanding_adjustable_gensym_strings()
{
    Object temp;

    x_note_fn_call(21,12);
    temp = G2int_adjustable_gensym_string_counter;
    temp = FIXNUM_MINUS(temp,
	    g2int_sum_reclaimed_strings(G2int_adjustable_gensym_strings));
    return VALUES_1(temp);
}

/* COMPUTE-MEMORY-USED-BY-ADJUSTABLE-GENSYM-STRINGS */
Object g2int_compute_memory_used_by_adjustable_gensym_strings()
{
    x_note_fn_call(21,13);
    return VALUES_1(G2int_adjustable_gensym_string_byte_use_counter);
}

/* OBTAIN-ADJUSTABLE-GENSYM-STRING */
Object g2int_obtain_adjustable_gensym_string()
{
    Object temp;

    x_note_fn_call(21,14);
    temp = 
	    g2int_obtain_long_enough_adjustable_gensym_string(FIX((SI_Long)1024L));
    return VALUES_1(temp);
}

static Object Qg2int_adjustable_gensym_string;  /* adjustable-gensym-string */

/* OBTAIN-LONG-ENOUGH-ADJUSTABLE-GENSYM-STRING */
Object g2int_obtain_long_enough_adjustable_gensym_string(length_1)
    Object length_1;
{
    Object pool_qm, temp, temp_1, svref_new_value, string_1;
    SI_Long pool_index;

    x_note_fn_call(21,15);
    if (FIXNUM_GT(length_1,G2int_maximum_gensym_string_length))
	g2int_maximum_gensym_string_length_error(length_1);
    pool_index = 
	    IFIX(g2int_partial_buffer_pool_index_given_length(length_1,
	    G2int_string_allocation_schemes));
    pool_qm = ISVREF(G2int_adjustable_gensym_strings,pool_index);
    if (pool_qm) {
	temp = M_CAR(pool_qm);
	temp_1 = G2int_adjustable_gensym_strings;
	svref_new_value = M_CDR(pool_qm);
	ISVREF(temp_1,pool_index) = svref_new_value;
	inline_note_reclaim_cons(pool_qm,Qg2int_gensym);
	temp_1 = G2int_available_gensym_conses;
	M_CDR(pool_qm) = temp_1;
	G2int_available_gensym_conses = pool_qm;
	string_1 = temp;
    }
    else
	string_1 = 
		g2int_allocate_new_adjustable_gensym_string(g2int_buffer_size_for_partial_buffer(length_1,
		G2int_string_allocation_schemes));
    SET_FILL_POINTER(string_1,length_1);
    temp_1 = CODE_CHAR(FIX((SI_Long)0L));
    SET_CHAR(string_1,length_1,temp_1);
    inline_note_allocate_cons(string_1,Qg2int_adjustable_gensym_string);
    return VALUES_1(string_1);
}

/* ALLOCATE-NEW-ADJUSTABLE-GENSYM-STRING */
Object g2int_allocate_new_adjustable_gensym_string(length_1)
    Object length_1;
{
    Object temp, svref_arg_2, svref_new_value, temp_2;
    SI_Long temp_1, incff_1_arg;
    SI_Long adjustable_gensym_string_byte_use_counter_new_value;
    XDeclare_area(1);

    x_note_fn_call(21,16);
    temp = FIXNUM_ADD1(G2int_adjustable_gensym_string_counter);
    G2int_adjustable_gensym_string_counter = temp;
    temp_1 = IFIX(length_1) / IFIX(G2int_bytes_per_rtl_ptr);
    incff_1_arg = (SI_Long)36L + IFIX(FIXNUM_TIMES(FIX(temp_1),
	    G2int_bytes_per_rtl_ptr));
    adjustable_gensym_string_byte_use_counter_new_value = 
	    IFIX(G2int_adjustable_gensym_string_byte_use_counter) + 
	    incff_1_arg;
    G2int_adjustable_gensym_string_byte_use_counter = 
	    FIX(adjustable_gensym_string_byte_use_counter_new_value);
    temp = G2int_adjustable_gensym_string_counts;
    svref_arg_2 = g2int_partial_buffer_pool_index_given_length(length_1,
	    G2int_string_allocation_schemes);
    svref_new_value = FIXNUM_ADD1(ISVREF(temp,IFIX(svref_arg_2)));
    SVREF(temp,svref_arg_2) = svref_new_value;
    if (PUSH_AREA(Dynamic_area,0))
	temp_2 = make_array(7,length_1,Kelement_type,Qstring_char,
		Kfill_pointer,length_1,Kadjustable,T);
    POP_AREA(0);
    return VALUES_1(temp_2);
}

/* RECLAIM-ADJUSTABLE-GENSYM-STRING */
Object g2int_reclaim_adjustable_gensym_string(adjustable_gensym_string)
    Object adjustable_gensym_string;
{
    Object length_1, temp, svref_arg_1, new_cons, gensymed_symbol;
    Object cdr_new_value;
    SI_Long pool_index;

    x_note_fn_call(21,17);
    inline_note_reclaim_cons(adjustable_gensym_string,
	    Qg2int_adjustable_gensym_string);
    length_1 = array_dimension(adjustable_gensym_string,FIX((SI_Long)0L));
    pool_index = 
	    IFIX(g2int_partial_buffer_pool_index_given_length(length_1,
	    G2int_string_allocation_schemes));
    if (IFIX(length_1) > (SI_Long)0L) {
	temp = CHR('\?');
	SET_CHAR(adjustable_gensym_string,FIX((SI_Long)0L),temp);
    }
    svref_arg_1 = G2int_adjustable_gensym_strings;
    new_cons = G2int_available_gensym_conses;
    if (new_cons) {
	G2int_available_gensym_conses = M_CDR(new_cons);
	gensymed_symbol = new_cons;
    }
    else
	gensymed_symbol = Nil;
    if ( !TRUEP(gensymed_symbol))
	gensymed_symbol = g2int_replenish_gensym_cons_pool();
    M_CAR(gensymed_symbol) = adjustable_gensym_string;
    cdr_new_value = ISVREF(G2int_adjustable_gensym_strings,pool_index);
    M_CDR(gensymed_symbol) = cdr_new_value;
    inline_note_allocate_cons(gensymed_symbol,Qg2int_gensym);
    return VALUES_1(ISVREF(svref_arg_1,pool_index) = gensymed_symbol);
}

/* RECLAIM-GENSYM-STRING */
Object g2int_reclaim_gensym_string(gensym_string)
    Object gensym_string;
{
    x_note_fn_call(21,18);
    if (SIMPLE_STRING_P(gensym_string))
	g2int_reclaim_simple_gensym_string(gensym_string);
    else
	g2int_reclaim_adjustable_gensym_string(gensym_string);
    return VALUES_1(Nil);
}

/* RECLAIM-IF-GENSYM-STRING-FUNCTION */
Object g2int_reclaim_if_gensym_string_function(thing)
    Object thing;
{
    x_note_fn_call(21,19);
    if (STRINGP(thing))
	return g2int_reclaim_gensym_string(thing);
    else
	return VALUES_1(Nil);
}

/* RECLAIM-GENSYM-STRINGS-IN-LIST */
Object g2int_reclaim_gensym_strings_in_list(list_1)
    Object list_1;
{
    Object gensym_string, ab_loop_list_;

    x_note_fn_call(21,20);
    gensym_string = Nil;
    ab_loop_list_ = list_1;
  next_loop:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    gensym_string = M_CAR(ab_loop_list_);
    ab_loop_list_ = M_CDR(ab_loop_list_);
    if (STRINGP(gensym_string))
	g2int_reclaim_gensym_string(gensym_string);
    goto next_loop;
  end_loop:;
    return VALUES_1(Nil);
}

/* GENSYM-STRING-SUBSTRING */
Object g2int_gensym_string_substring(string_1,start_qm,end_qm)
    Object string_1, start_qm, end_qm;
{
    Object end, start, new_string, temp, ab_loop_iter_flag_;
    SI_Long i, ab_loop_bind_, j;
    char string_is_simple_qm;
    char schar_new_value;

    x_note_fn_call(21,21);
    string_is_simple_qm =  !ARRAY_HAS_FILL_POINTER_P(string_1);
    end = end_qm;
    if (end);
    else
	end = string_is_simple_qm ? SIMPLE_ARRAY_ANY_1_LENGTH(string_1) : 
		length(string_1);
    start = start_qm;
    if (start);
    else
	start = FIX((SI_Long)0L);
    new_string = g2int_obtain_simple_gensym_string(FIXNUM_MINUS(end,start));
    temp = start_qm;
    if (temp);
    else
	temp = FIX((SI_Long)0L);
    i = IFIX(temp);
    ab_loop_bind_ = IFIX(end);
    j = (SI_Long)0L;
    ab_loop_iter_flag_ = T;
  next_loop:
    if (i >= ab_loop_bind_)
	goto end_loop;
    if ( !TRUEP(ab_loop_iter_flag_))
	j = j + (SI_Long)1L;
    schar_new_value = string_is_simple_qm ? ISCHAR(string_1,i) : 
	    ICHAR(string_1,i);
    SET_ISCHAR(new_string,j,schar_new_value);
    ab_loop_iter_flag_ = Nil;
    i = i + (SI_Long)1L;
    goto next_loop;
  end_loop:
    return VALUES_1(new_string);
    return VALUES_1(Qnil);
}

/* RECLAIM-GENSYM-TREE-WITH-TEXT-STRINGS */
Object g2int_reclaim_gensym_tree_with_text_strings(tree)
    Object tree;
{
    Object tail, car_1, next_tail;

    x_note_fn_call(21,22);
    tail = tree;
    car_1 = Nil;
    next_tail = Nil;
  next_loop:
    if (ATOM(tail))
	goto end_loop;
    car_1 = CAR(tail);
    next_tail = CDR(tail);
    g2int_reclaim_gensym_tree_with_text_strings(car_1);
    g2int_reclaim_gensym_cons_1(tail);
    tail = next_tail;
    goto next_loop;
  end_loop:
    if (g2int_text_string_p(tail))
	g2int_reclaim_text_string(tail);
    else if (STRINGP(tail))
	g2int_reclaim_gensym_string(tail);
    return VALUES_1(Nil);
}

/* COPY-GENSYM-TREE-WITH-TEXT-STRINGS */
Object g2int_copy_gensym_tree_with_text_strings(tree)
    Object tree;
{
    Object temp;

    x_note_fn_call(21,23);
    if (CONSP(tree)) {
	temp = g2int_copy_gensym_tree_with_text_strings(CAR(tree));
	return g2int_gensym_cons_1(temp,
		g2int_copy_gensym_tree_with_text_strings(CDR(tree)));
    }
    else if (g2int_text_string_p(tree) || STRINGP(tree))
	return g2int_copy_text_string(tree);
    else
	return VALUES_1(tree);
}

/* COPY-NULL-TERMINATED-STRING-AS-GENSYM-STRING */
Object g2int_copy_null_terminated_string_as_gensym_string(string_1)
    Object string_1;
{
    Object length_if_null_terminated_qm;

    x_note_fn_call(21,24);
    length_if_null_terminated_qm = 
	    g2int_length_of_null_terminated_string(string_1);
    if (length_if_null_terminated_qm)
	return g2int_gensym_string_substring(string_1,FIX((SI_Long)0L),
		length_if_null_terminated_qm);
    else
	return g2int_copy_gensym_string(string_1);
}

/* LENGTH-OF-NULL-TERMINATED-STRING */
Object g2int_length_of_null_terminated_string(string_1)
    Object string_1;
{
    SI_Long string_length, i, ab_loop_bind_;
    char string_is_simple_qm;

    x_note_fn_call(21,25);
    string_is_simple_qm =  !ARRAY_HAS_FILL_POINTER_P(string_1);
    string_length = string_is_simple_qm ? 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(string_1)) : IFIX(length(string_1));
    i = (SI_Long)0L;
    ab_loop_bind_ = string_length;
  next_loop:
    if (i >= ab_loop_bind_)
	goto end_loop;
    if (CHAR_EQ(string_is_simple_qm ? CHR(ISCHAR(string_1,i)) : 
	    CHR(ICHAR(string_1,i)),CHR('\000')))
	return VALUES_1(FIX(i));
    i = i + (SI_Long)1L;
    goto next_loop;
  end_loop:
    return VALUES_1(Qnil);
}

/* REQUIRE-SIMPLE-GENSYM-STRING */
Object g2int_require_simple_gensym_string(gensym_string)
    Object gensym_string;
{
    Object temp;

    x_note_fn_call(21,26);
    if ( !ARRAY_HAS_FILL_POINTER_P(gensym_string))
	temp = gensym_string;
    else {
	temp = g2int_copy_gensym_string(gensym_string);
	g2int_reclaim_gensym_string(gensym_string);
    }
    return VALUES_1(temp);
}

Object G2int_current_gensym_string = UNBOUND;

Object G2int_fill_pointer_for_current_gensym_string = UNBOUND;

Object G2int_total_length_of_current_gensym_string = UNBOUND;

Object G2int_current_twriting_output_type = UNBOUND;

/* COPY-CURRENT-GENSYM-STRING */
Object g2int_copy_current_gensym_string(truncate_if_overly_long_qm)
    Object truncate_if_overly_long_qm;
{
    Object length_1, simple_qm, new_gensym_string, adjustable_gensym_string;
    SI_Long i, ab_loop_bind_;
    char temp;

    x_note_fn_call(21,27);
    length_1 = G2int_fill_pointer_for_current_gensym_string;
    simple_qm = T;
    if (simple_qm)
	new_gensym_string = g2int_obtain_simple_gensym_string(length_1);
    else {
	adjustable_gensym_string = 
		g2int_obtain_long_enough_adjustable_gensym_string(length_1);
	SET_FILL_POINTER(adjustable_gensym_string,length_1);
	new_gensym_string = adjustable_gensym_string;
    }
    if (simple_qm) {
	i = (SI_Long)0L;
	ab_loop_bind_ = IFIX(length_1);
      next_loop:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	temp = ISCHAR(G2int_current_gensym_string,i);
	SET_ISCHAR(new_gensym_string,i,temp);
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:;
    }
    else {
	i = (SI_Long)0L;
	ab_loop_bind_ = IFIX(length_1);
      next_loop_1:
	if (i >= ab_loop_bind_)
	    goto end_loop_1;
	temp = ISCHAR(G2int_current_gensym_string,i);
	SET_ICHAR(new_gensym_string,i,temp);
	i = i + (SI_Long)1L;
	goto next_loop_1;
      end_loop_1:;
    }
    return VALUES_1(new_gensym_string);
}

/* COPY-OUT-CURRENT-GENSYM-STRING */
Object g2int_copy_out_current_gensym_string()
{
    Object temp;

    x_note_fn_call(21,28);
    temp = g2int_copy_current_gensym_string(Nil);
    g2int_reclaim_gensym_string(G2int_current_gensym_string);
    return VALUES_1(temp);
}

/* COPY-GENSYM-STRING */
Object g2int_copy_gensym_string(string_1)
    Object string_1;
{
    Object new_gensym_string;
    SI_Long string_length, i, ab_loop_bind_;
    char string_is_simple_qm;
    char schar_new_value;

    x_note_fn_call(21,29);
    string_is_simple_qm =  !ARRAY_HAS_FILL_POINTER_P(string_1);
    string_length = string_is_simple_qm ? 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(string_1)) : IFIX(length(string_1));
    new_gensym_string = g2int_obtain_simple_gensym_string(FIX(string_length));
    if (string_is_simple_qm) {
	i = (SI_Long)0L;
	ab_loop_bind_ = string_length;
      next_loop:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	schar_new_value = ISCHAR(string_1,i);
	SET_ISCHAR(new_gensym_string,i,schar_new_value);
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:;
    }
    else {
	i = (SI_Long)0L;
	ab_loop_bind_ = string_length;
      next_loop_1:
	if (i >= ab_loop_bind_)
	    goto end_loop_1;
	schar_new_value = ICHAR(string_1,i);
	SET_ISCHAR(new_gensym_string,i,schar_new_value);
	i = i + (SI_Long)1L;
	goto next_loop_1;
      end_loop_1:;
    }
    return VALUES_1(new_gensym_string);
}

/* COPY-PARTIAL-GENSYM-STRING */
Object g2int_copy_partial_gensym_string(string_1,part_length)
    Object string_1, part_length;
{
    Object new_gensym_string;
    SI_Long i, ab_loop_bind_;
    char string_is_simple_qm;
    char schar_new_value;

    x_note_fn_call(21,30);
    string_is_simple_qm =  !ARRAY_HAS_FILL_POINTER_P(string_1);
    new_gensym_string = g2int_obtain_simple_gensym_string(part_length);
    if (string_is_simple_qm) {
	i = (SI_Long)0L;
	ab_loop_bind_ = IFIX(part_length);
      next_loop:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	schar_new_value = ISCHAR(string_1,i);
	SET_ISCHAR(new_gensym_string,i,schar_new_value);
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:;
    }
    else {
	i = (SI_Long)0L;
	ab_loop_bind_ = IFIX(part_length);
      next_loop_1:
	if (i >= ab_loop_bind_)
	    goto end_loop_1;
	schar_new_value = ICHAR(string_1,i);
	SET_ISCHAR(new_gensym_string,i,schar_new_value);
	i = i + (SI_Long)1L;
	goto next_loop_1;
      end_loop_1:;
    }
    return VALUES_1(new_gensym_string);
}

/* COPY-GENSYM-STRING-PORTION */
Object g2int_copy_gensym_string_portion(string_1,start,end)
    Object string_1, start, end;
{
    Object part_length, new_gensym_string, ab_loop_iter_flag_;
    SI_Long i, ab_loop_bind_, j;
    char string_is_simple_qm;
    char schar_new_value;

    x_note_fn_call(21,31);
    string_is_simple_qm =  !ARRAY_HAS_FILL_POINTER_P(string_1);
    part_length = FIXNUM_MINUS(end,start);
    new_gensym_string = g2int_obtain_simple_gensym_string(part_length);
    if (string_is_simple_qm) {
	i = IFIX(start);
	ab_loop_bind_ = IFIX(end);
	j = (SI_Long)0L;
	ab_loop_iter_flag_ = T;
      next_loop:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	if ( !TRUEP(ab_loop_iter_flag_))
	    j = j + (SI_Long)1L;
	schar_new_value = ISCHAR(string_1,i);
	SET_ISCHAR(new_gensym_string,j,schar_new_value);
	ab_loop_iter_flag_ = Nil;
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:;
    }
    else {
	i = IFIX(start);
	ab_loop_bind_ = IFIX(end);
	j = (SI_Long)0L;
	ab_loop_iter_flag_ = T;
      next_loop_1:
	if (i >= ab_loop_bind_)
	    goto end_loop_1;
	if ( !TRUEP(ab_loop_iter_flag_))
	    j = j + (SI_Long)1L;
	schar_new_value = ICHAR(string_1,i);
	SET_ISCHAR(new_gensym_string,j,schar_new_value);
	ab_loop_iter_flag_ = Nil;
	i = i + (SI_Long)1L;
	goto next_loop_1;
      end_loop_1:;
    }
    return VALUES_1(new_gensym_string);
}

/* COPY-GENSYM-STRING-INTO-SIMPLE-OR-ADJUSTABLE-GENSYM-STRING */
Object g2int_copy_gensym_string_into_simple_or_adjustable_gensym_string(string_1)
    Object string_1;
{
    Object new_gensym_string;
    SI_Long string_length, i, ab_loop_bind_;
    char string_is_simple_qm, new_string_is_simple_qm;
    char temp;

    x_note_fn_call(21,32);
    string_is_simple_qm =  !ARRAY_HAS_FILL_POINTER_P(string_1);
    string_length = string_is_simple_qm ? 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(string_1)) : IFIX(length(string_1));
    new_gensym_string = g2int_obtain_simple_gensym_string(FIX(string_length));
    new_string_is_simple_qm =  !ARRAY_HAS_FILL_POINTER_P(new_gensym_string);
    if (string_is_simple_qm) {
	if (new_string_is_simple_qm) {
	    i = (SI_Long)0L;
	    ab_loop_bind_ = string_length;
	  next_loop:
	    if (i >= ab_loop_bind_)
		goto end_loop;
	    temp = ISCHAR(string_1,i);
	    SET_ISCHAR(new_gensym_string,i,temp);
	    i = i + (SI_Long)1L;
	    goto next_loop;
	  end_loop:;
	}
	else {
	    i = (SI_Long)0L;
	    ab_loop_bind_ = string_length;
	  next_loop_1:
	    if (i >= ab_loop_bind_)
		goto end_loop_1;
	    temp = ISCHAR(string_1,i);
	    SET_ICHAR(new_gensym_string,i,temp);
	    i = i + (SI_Long)1L;
	    goto next_loop_1;
	  end_loop_1:;
	}
    }
    else if (new_string_is_simple_qm) {
	i = (SI_Long)0L;
	ab_loop_bind_ = string_length;
      next_loop_2:
	if (i >= ab_loop_bind_)
	    goto end_loop_2;
	temp = ICHAR(string_1,i);
	SET_ISCHAR(new_gensym_string,i,temp);
	i = i + (SI_Long)1L;
	goto next_loop_2;
      end_loop_2:;
    }
    else {
	i = (SI_Long)0L;
	ab_loop_bind_ = string_length;
      next_loop_3:
	if (i >= ab_loop_bind_)
	    goto end_loop_3;
	temp = ICHAR(string_1,i);
	SET_ICHAR(new_gensym_string,i,temp);
	i = i + (SI_Long)1L;
	goto next_loop_3;
      end_loop_3:;
    }
    return VALUES_1(new_gensym_string);
}

/* COPY-PORTION-OF-STRING-INTO-SIMPLE-GENSYM-STRING */
Object g2int_copy_portion_of_string_into_simple_gensym_string(source_string,
	    source_start,source_end,destination_string,destination_start)
    Object source_string, source_start, source_end, destination_string;
    Object destination_start;
{
    Object ab_loop_iter_flag_;
    SI_Long i, ab_loop_bind_, j;
    char source_string_is_simple_qm;
    char schar_new_value;

    x_note_fn_call(21,33);
    source_string_is_simple_qm =  !ARRAY_HAS_FILL_POINTER_P(source_string);
    if (source_string_is_simple_qm) {
	i = IFIX(source_start);
	ab_loop_bind_ = IFIX(source_end);
	j = IFIX(destination_start);
	ab_loop_iter_flag_ = T;
      next_loop:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	if ( !TRUEP(ab_loop_iter_flag_))
	    j = j + (SI_Long)1L;
	schar_new_value = ISCHAR(source_string,i);
	SET_ISCHAR(destination_string,j,schar_new_value);
	ab_loop_iter_flag_ = Nil;
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:
	return VALUES_1(Qnil);
    }
    else {
	i = IFIX(source_start);
	ab_loop_bind_ = IFIX(source_end);
	j = IFIX(destination_start);
	ab_loop_iter_flag_ = T;
      next_loop_1:
	if (i >= ab_loop_bind_)
	    goto end_loop_1;
	if ( !TRUEP(ab_loop_iter_flag_))
	    j = j + (SI_Long)1L;
	schar_new_value = ICHAR(source_string,i);
	SET_ISCHAR(destination_string,j,schar_new_value);
	ab_loop_iter_flag_ = Nil;
	i = i + (SI_Long)1L;
	goto next_loop_1;
      end_loop_1:
	return VALUES_1(Qnil);
    }
}

/* COPY-PORTION-OF-STRING-INTO-GENSYM-STRING */
Object g2int_copy_portion_of_string_into_gensym_string(source_string,
	    source_start,source_end,destination_string,destination_start)
    Object source_string, source_start, source_end, destination_string;
    Object destination_start;
{
    Object ab_loop_iter_flag_;
    SI_Long i, ab_loop_bind_, j;
    char source_string_is_simple_qm;
    char char_new_value;

    x_note_fn_call(21,34);
    source_string_is_simple_qm =  !ARRAY_HAS_FILL_POINTER_P(source_string);
    if (source_string_is_simple_qm) {
	i = IFIX(source_start);
	ab_loop_bind_ = IFIX(source_end);
	j = IFIX(destination_start);
	ab_loop_iter_flag_ = T;
      next_loop:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	if ( !TRUEP(ab_loop_iter_flag_))
	    j = j + (SI_Long)1L;
	char_new_value = ISCHAR(source_string,i);
	SET_ICHAR(destination_string,j,char_new_value);
	ab_loop_iter_flag_ = Nil;
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:
	return VALUES_1(Qnil);
    }
    else {
	i = IFIX(source_start);
	ab_loop_bind_ = IFIX(source_end);
	j = IFIX(destination_start);
	ab_loop_iter_flag_ = T;
      next_loop_1:
	if (i >= ab_loop_bind_)
	    goto end_loop_1;
	if ( !TRUEP(ab_loop_iter_flag_))
	    j = j + (SI_Long)1L;
	char_new_value = ICHAR(source_string,i);
	SET_ICHAR(destination_string,j,char_new_value);
	ab_loop_iter_flag_ = Nil;
	i = i + (SI_Long)1L;
	goto next_loop_1;
      end_loop_1:
	return VALUES_1(Qnil);
    }
}

Object G2int_write_symbols_parsablyqm = UNBOUND;

static Object Qg2int_wide_string;  /* wide-string */

/* TWRITE-CHARACTER */
Object g2int_twrite_character(simple_character)
    Object simple_character;
{
    Object thing, temp, schar_arg_2, schar_new_value;

    x_note_fn_call(21,35);
    if (EQ(G2int_current_twriting_output_type,Qg2int_wide_string)) {
	thing = simple_character;
	return g2int_twrite_wide_character(CHARACTERP(thing) ? 
		CHAR_CODE(thing) : thing);
    }
    else {
	if ( !FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
		G2int_total_length_of_current_gensym_string))
	    g2int_extend_current_gensym_string(0);
	temp = G2int_current_gensym_string;
	schar_arg_2 = G2int_fill_pointer_for_current_gensym_string;
	thing = simple_character;
	schar_new_value = CODE_CHAR(CHARACTERP(thing) ? CHAR_CODE(thing) : 
		thing);
	SET_SCHAR(temp,schar_arg_2,schar_new_value);
	temp = FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
	G2int_fill_pointer_for_current_gensym_string = temp;
	return VALUES_1(G2int_fill_pointer_for_current_gensym_string);
    }
}

Object G2int_extend_current_gensym_string_error_message = UNBOUND;

/* EXTEND-CURRENT-GENSYM-STRING */
Object g2int_extend_current_gensym_string varargs_1(int, n)
{
    Object minimum_new_total_length_qm, temp, minimum_new_total_length, temp_1;
    Object new_total_length, new_gensym_string;
    SI_Long temp_2, i, ab_loop_bind_;
    char schar_new_value;
    Declare_varargs_nonrelocating;

    x_note_fn_call(21,36);
    INIT_ARGS_nonrelocating();
    minimum_new_total_length_qm = OPTIONAL_ARG_P_nonrelocating() ? 
	    OPTIONAL_ARG_nonrelocating() : Nil;
    END_ARGS_nonrelocating();
    temp = minimum_new_total_length_qm;
    if (temp);
    else
	temp = FIXNUM_ADD1(G2int_total_length_of_current_gensym_string);
    if (NUM_GT(temp,G2int_maximum_length_for_user_gensym_strings))
	g2int_signal_gsi_extend_current_gensym_string_error();
    minimum_new_total_length = minimum_new_total_length_qm;
    if (minimum_new_total_length);
    else
	minimum_new_total_length = FIX((SI_Long)0L);
    temp_1 = G2int_maximum_gensym_string_length;
    temp_2 = IFIX(G2int_total_length_of_current_gensym_string) * 
	    (SI_Long)3L / (SI_Long)2L;
    temp = FIX(temp_2);
    temp = FIXNUM_MAX(temp,minimum_new_total_length);
    new_total_length = FIXNUM_MIN(temp_1,temp);
    new_gensym_string = g2int_obtain_simple_gensym_string(new_total_length);
    i = (SI_Long)0L;
    ab_loop_bind_ = IFIX(G2int_fill_pointer_for_current_gensym_string);
  next_loop:
    if (i >= ab_loop_bind_)
	goto end_loop;
    schar_new_value = ISCHAR(G2int_current_gensym_string,i);
    SET_ISCHAR(new_gensym_string,i,schar_new_value);
    i = i + (SI_Long)1L;
    goto next_loop;
  end_loop:;
    g2int_reclaim_simple_gensym_string(G2int_current_gensym_string);
    G2int_current_gensym_string = new_gensym_string;
    G2int_total_length_of_current_gensym_string = new_total_length;
    return VALUES_1(G2int_total_length_of_current_gensym_string);
}

/* TWRITE-N-SPACES */
Object g2int_twrite_n_spaces(spaces_count)
    Object spaces_count;
{
    Object temp, schar_arg_2, schar_new_value;
    SI_Long ab_loop_repeat_, thing;

    x_note_fn_call(21,37);
    ab_loop_repeat_ = IFIX(spaces_count);
  next_loop:
    if ( !((SI_Long)0L < ab_loop_repeat_))
	goto end_loop;
    ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
    if (EQ(G2int_current_twriting_output_type,Qg2int_wide_string)) {
	thing = (SI_Long)32L;
	g2int_twrite_wide_character(CHARACTERP(FIX(thing)) ? 
		CHAR_CODE(FIX(thing)) : FIX(thing));
    }
    else {
	if ( !FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
		G2int_total_length_of_current_gensym_string))
	    g2int_extend_current_gensym_string(0);
	temp = G2int_current_gensym_string;
	schar_arg_2 = G2int_fill_pointer_for_current_gensym_string;
	thing = (SI_Long)32L;
	schar_new_value = CODE_CHAR(CHARACTERP(FIX(thing)) ? 
		CHAR_CODE(FIX(thing)) : FIX(thing));
	SET_SCHAR(temp,schar_arg_2,schar_new_value);
	temp = FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
	G2int_fill_pointer_for_current_gensym_string = temp;
    }
    goto next_loop;
  end_loop:
    return VALUES_1(Qnil);
}

/* TWRITE-SPACES-IF-NECESSARY */
Object g2int_twrite_spaces_if_necessary(minimum_width,actual_width)
    Object minimum_width, actual_width;
{
    x_note_fn_call(21,38);
    if (FIXNUM_GT(minimum_width,actual_width))
	return g2int_twrite_n_spaces(FIXNUM_MINUS(minimum_width,actual_width));
    else
	return VALUES_1(Nil);
}

Object G2int_calling_tformat_for_give_warningqm = UNBOUND;

Object G2int_write_symbols_in_lower_caseqm = UNBOUND;

Object G2int_write_strings_parsablyqm = UNBOUND;

static Object string_constant;     /* "-9223372036854775808" */

/* TWRITE */
Object g2int_twrite(x)
    Object x;
{
    Object temp, thing, temp_1, schar_arg_2, schar_new_value;
    Object write_strings_parsably_qm;
    SI_int64 positive_long;
    Declare_special(1);
    XDeclare_area(1);
    XDeclare_frontier(1);

    x_note_fn_call(21,39);
    if (SYMBOLP(x))
	temp = g2int_twrite_symbol(2,x, 
		!TRUEP(G2int_write_symbols_in_lower_caseqm) ? T : Nil);
    else if (FIXNUMP(x))
	temp = g2int_twrite_fixnum(x);
    else if (g2int_text_string_p(x) || STRINGP(x))
	temp = g2int_twrite_general_string(x);
    else if (INLINE_DOUBLE_FLOAT_VECTOR_P(x) != (SI_Long)0L && 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(x)) == (SI_Long)1L)
	temp = g2int_write_floating_point_number_simple_c_format(1,
		DOUBLE_TO_DOUBLE_FLOAT(DFLOAT_ISAREF_1(x,(SI_Long)0L)));
    else if (FLOATP(x))
	temp = g2int_write_floating_point_number_simple_c_format(1,x);
    else if (CHARACTERP(x)) {
	if (EQ(G2int_current_twriting_output_type,Qg2int_wide_string)) {
	    thing = x;
	    temp = g2int_twrite_wide_character(CHARACTERP(thing) ? 
		    CHAR_CODE(thing) : thing);
	}
	else {
	    if ( !FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
		    G2int_total_length_of_current_gensym_string))
		g2int_extend_current_gensym_string(0);
	    temp_1 = G2int_current_gensym_string;
	    schar_arg_2 = G2int_fill_pointer_for_current_gensym_string;
	    thing = x;
	    schar_new_value = CODE_CHAR(CHARACTERP(thing) ? 
		    CHAR_CODE(thing) : thing);
	    SET_SCHAR(temp_1,schar_arg_2,schar_new_value);
	    temp_1 = FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
	    G2int_fill_pointer_for_current_gensym_string = temp_1;
	    temp = G2int_fill_pointer_for_current_gensym_string;
	}
    }
    else if (INLINE_LONG_P(x) != (SI_Long)0L) {
	if (PUSH_LOCAL_ALLOCATION(Local_area,0,0)) {
	    if (NUM_EQ(x,G2int_most_negative_int64)) {
		write_strings_parsably_qm = Nil;
		PUSH_SPECIAL(G2int_write_strings_parsablyqm,write_strings_parsably_qm,
			0);
		  temp = g2int_twrite_general_string(string_constant);
		POP_SPECIAL();
	    }
	    else {
		temp = FIX((SI_Long)0L);
		if (NUM_LT(x,temp)) {
		    if (EQ(G2int_current_twriting_output_type,
			    Qg2int_wide_string))
			g2int_twrite_wide_character(FIX((SI_Long)45L));
		    else {
			if ( 
				!FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
				G2int_total_length_of_current_gensym_string))
			    g2int_extend_current_gensym_string(0);
			temp_1 = G2int_current_gensym_string;
			schar_arg_2 = 
				G2int_fill_pointer_for_current_gensym_string;
			temp = CHR('-');
			SET_SCHAR(temp_1,schar_arg_2,temp);
			temp_1 = 
				FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
			G2int_fill_pointer_for_current_gensym_string = temp_1;
		    }
		    temp = negate(x);
		    positive_long = INTEGER_TO_INT64(temp);
		}
		else
		    positive_long = INTEGER_TO_INT64(x);
		temp = 
			g2int_twrite_positive_bignum_in_radix(INT64_TO_INTEGER(positive_long),
			FIX((SI_Long)10L));
	    }
	}
	POP_LOCAL_ALLOCATION(0,0);
    }
    else if (INTEGERP(x))
	temp = Nil;
    else if (G2int_calling_tformat_for_give_warningqm)
	temp = g2int_write_random_s_expression(x);
    else
	temp = g2int_write_random_s_expression(x);
    return VALUES_1(temp);
}

/* TWRITE-PARSABLY */
Object g2int_twrite_parsably(x)
    Object x;
{
    Object write_symbols_parsably_qm, write_strings_parsably_qm, temp;
    Declare_special(2);

    x_note_fn_call(21,40);
    write_symbols_parsably_qm = T;
    write_strings_parsably_qm = T;
    PUSH_SPECIAL(G2int_write_strings_parsablyqm,write_strings_parsably_qm,1);
      PUSH_SPECIAL(G2int_write_symbols_parsablyqm,write_symbols_parsably_qm,0);
	temp = g2int_twrite(x);
      POP_SPECIAL();
    POP_SPECIAL();
    return VALUES_1(temp);
}

/* TWRITE-LINE-BREAK */
Object g2int_twrite_line_break()
{
    x_note_fn_call(21,41);
    return g2int_twrite_line_separator();
}

Object G2int_note_blocks_in_tformat = UNBOUND;

Object G2int_tformat_fresh_line_is_newline_p = UNBOUND;

Object G2int_in_text_for_item_or_value_p = UNBOUND;

static Object string_constant_1;   /* ";" */

static Object string_constant_2;   /* "," */

static Object string_constant_3;   /* " " */

static Object string_constant_4;   /* "or" */

static Object string_constant_5;   /* "and" */

static Object list_constant;       /* # */

/* TFORMAT */
Object g2int_tformat varargs_1(int, n)
{
    Object control_string;
    Object arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg_index;
    Object write_symbols_in_lower_case_qm, directive_colon_p;
    Object directive_atsign_p, i, string_length, character_1, thing_1, temp_1;
    Object schar_arg_2, schar_new_value, temp_2, arg, temp_3, temp_4;
    SI_Long temp, thing_2, i_1, ab_loop_bind_;
    char gensym_string_p, gensym_string_is_simple_qm;
    char thing;
    char temp_5;
    Declare_varargs_nonrelocating;
    Declare_special(1);
    Object result;

    x_note_fn_call(21,42);
    INIT_ARGS_nonrelocating();
    control_string = REQUIRED_ARG_nonrelocating();
    arg1 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg2 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg3 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg4 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg5 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg6 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg7 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg8 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg9 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    END_ARGS_nonrelocating();
    arg_index = FIX((SI_Long)0L);
    write_symbols_in_lower_case_qm = Nil;
    PUSH_SPECIAL(G2int_write_symbols_in_lower_caseqm,write_symbols_in_lower_case_qm,
	    0);
      directive_colon_p = Nil;
      directive_atsign_p = Nil;
      i = FIX((SI_Long)0L);
      gensym_string_p = STRINGP(control_string);
      gensym_string_is_simple_qm =  !ARRAY_HAS_FILL_POINTER_P(control_string);
      string_length = gensym_string_p ? (gensym_string_is_simple_qm ? 
	      SIMPLE_ARRAY_ANY_1_LENGTH(control_string) : 
	      length(control_string)) : g2int_lengthw(control_string);
      character_1 = Nil;
    next_loop:
      if (FIXNUM_EQ(i,string_length))
	  goto end_loop;
      if (gensym_string_p) {
	  thing = gensym_string_is_simple_qm ? 
		  CHARACTER_TO_CHAR(SCHAR(control_string,i)) : 
		  CHARACTER_TO_CHAR(CHAR(control_string,i));
	  character_1 = CHARACTERP(CHAR_TO_CHARACTER(thing)) ? 
		  CHAR_CODE(CHAR_TO_CHARACTER(thing)) : 
		  CHAR_TO_CHARACTER(thing);
      }
      else
	  character_1 = g2int_charw_function(control_string,i);
      i = FIXNUM_ADD1(i);
      temp = IFIX(character_1);
      if ( !((SI_Long)-128L <= temp && temp <= (SI_Long)127L)) {
	  if (EQ(G2int_current_twriting_output_type,Qg2int_wide_string)) {
	      thing_1 = character_1;
	      g2int_twrite_wide_character(CHARACTERP(thing_1) ? 
		      CHAR_CODE(thing_1) : thing_1);
	  }
	  else {
	      if ( !FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
		      G2int_total_length_of_current_gensym_string))
		  g2int_extend_current_gensym_string(0);
	      temp_1 = G2int_current_gensym_string;
	      schar_arg_2 = G2int_fill_pointer_for_current_gensym_string;
	      thing_1 = character_1;
	      schar_new_value = CODE_CHAR(CHARACTERP(thing_1) ? 
		      CHAR_CODE(thing_1) : thing_1);
	      SET_SCHAR(temp_1,schar_arg_2,schar_new_value);
	      temp_1 = 
		      FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
	      G2int_fill_pointer_for_current_gensym_string = temp_1;
	  }
      }
      else
	  switch ((char)temp) {
	    case 10:
	      if (EQ(G2int_current_twriting_output_type,Qg2int_wide_string)) {
		  thing_2 = (SI_Long)8232L;
		  g2int_twrite_wide_character(CHARACTERP(FIX(thing_2)) ? 
			  CHAR_CODE(FIX(thing_2)) : FIX(thing_2));
	      }
	      else {
		  if ( 
			  !FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
			  G2int_total_length_of_current_gensym_string))
		      g2int_extend_current_gensym_string(0);
		  temp_1 = G2int_current_gensym_string;
		  schar_arg_2 = G2int_fill_pointer_for_current_gensym_string;
		  thing_2 = (SI_Long)8232L;
		  schar_new_value = CODE_CHAR(CHARACTERP(FIX(thing_2)) ? 
			  CHAR_CODE(FIX(thing_2)) : FIX(thing_2));
		  SET_SCHAR(temp_1,schar_arg_2,schar_new_value);
		  temp_1 = 
			  FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
		  G2int_fill_pointer_for_current_gensym_string = temp_1;
	      }
	      break;
	    case 126:
	      if (FIXNUM_EQ(i,string_length))
		  goto end_loop;
	      directive_colon_p = Nil;
	      directive_atsign_p = Nil;
	    next_loop_1:
	      if (gensym_string_p) {
		  thing = gensym_string_is_simple_qm ? 
			  CHARACTER_TO_CHAR(SCHAR(control_string,i)) : 
			  CHARACTER_TO_CHAR(CHAR(control_string,i));
		  character_1 = CHARACTERP(CHAR_TO_CHARACTER(thing)) ? 
			  CHAR_CODE(CHAR_TO_CHARACTER(thing)) : 
			  CHAR_TO_CHARACTER(thing);
	      }
	      else
		  character_1 = g2int_charw_function(control_string,i);
	      i = FIXNUM_ADD1(i);
	      temp = IFIX(character_1);
	      if ( !((SI_Long)-128L <= temp && temp <= (SI_Long)127L)) {
		  temp_2 = character_1;
		  goto end;
	      }
	      else
		  switch ((char)temp) {
		    case 58:
		      directive_colon_p = T;
		      break;
		    case 64:
		      directive_atsign_p = T;
		      break;
		    default:
		      temp_2 = character_1;
		      goto end;
		      break;
		  }
	      goto next_loop_1;
	    end_loop_1:
	      temp_2 = Qnil;
	    end:
	      if (! !(FIXNUMP(temp_2) && FIXNUM_LE(FIX((SI_Long)-128L),
		      temp_2) && FIXNUM_LE(temp_2,FIX((SI_Long)127L))))
		  switch (INTEGER_TO_CHAR(temp_2)) {
		    case 65:
		    case 97:
		    case 83:
		    case 115:
		    case 67:
		    case 99:
		    case 68:
		    case 100:
		    case 66:
		    case 98:
		    case 79:
		    case 111:
		    case 88:
		    case 120:
		    case 70:
		    case 102:
		    case 78:
		    case 110:
		    case 76:
		    case 108:
		      arg_index = FIXNUM_ADD1(arg_index);
		      temp_2 = arg_index;
		      if ( !(FIXNUMP(temp_2) && 
			      FIXNUM_LE(FIX((SI_Long)-128L),temp_2) && 
			      FIXNUM_LE(temp_2,FIX((SI_Long)127L))))
			  arg = Nil;
		      else
			  switch (INTEGER_TO_CHAR(temp_2)) {
			    case 1:
			      arg = arg1;
			      break;
			    case 2:
			      arg = arg2;
			      break;
			    case 3:
			      arg = arg3;
			      break;
			    case 4:
			      arg = arg4;
			      break;
			    case 5:
			      arg = arg5;
			      break;
			    case 6:
			      arg = arg6;
			      break;
			    case 7:
			      arg = arg7;
			      break;
			    case 8:
			      arg = arg8;
			      break;
			    case 9:
			      arg = arg9;
			      break;
			    default:
			      arg = Nil;
			      break;
			  }
		      temp_2 = character_1;
		      if (! !(FIXNUM_LE(FIX((SI_Long)-128L),temp_2) && 
			      FIXNUM_LE(temp_2,FIX((SI_Long)127L))))
			  switch (INTEGER_TO_CHAR(temp_2)) {
			    case 65:
			    case 97:
			      g2int_twrite(arg);
			      break;
			    case 83:
			    case 115:
			      g2int_twrite_parsably(arg);
			      break;
			    case 67:
			    case 99:
			      if (EQ(G2int_current_twriting_output_type,
				      Qg2int_wide_string)) {
				  thing_1 = arg;
				  g2int_twrite_wide_character(CHARACTERP(thing_1) 
					  ? CHAR_CODE(thing_1) : thing_1);
			      }
			      else {
				  if ( 
					  !FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
					  G2int_total_length_of_current_gensym_string))
				      g2int_extend_current_gensym_string(0);
				  temp_1 = G2int_current_gensym_string;
				  schar_arg_2 = 
					  G2int_fill_pointer_for_current_gensym_string;
				  thing_1 = arg;
				  schar_new_value = 
					  CODE_CHAR(CHARACTERP(thing_1) ? 
					  CHAR_CODE(thing_1) : thing_1);
				  SET_SCHAR(temp_1,schar_arg_2,
					  schar_new_value);
				  temp_1 = 
					  FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
				  G2int_fill_pointer_for_current_gensym_string 
					  = temp_1;
			      }
			      break;
			    case 68:
			    case 100:
			      g2int_twrite(arg);
			      break;
			    case 66:
			    case 98:
			    case 79:
			    case 111:
			    case 88:
			    case 120:
			      temp_2 = character_1;
			      if ( !(FIXNUM_LE(FIX((SI_Long)-128L),temp_2) 
				      && FIXNUM_LE(temp_2,FIX((SI_Long)127L))))
				  temp_2 = FIX((SI_Long)16L);
			      else
				  switch (INTEGER_TO_CHAR(temp_2)) {
				    case 66:
				    case 98:
				      temp_2 = FIX((SI_Long)2L);
				      break;
				    case 79:
				    case 111:
				      temp_2 = FIX((SI_Long)8L);
				      break;
				    default:
				      temp_2 = FIX((SI_Long)16L);
				      break;
				  }
			      g2int_twrite_positive_fixnum_in_radix(arg,
				      temp_2);
			      break;
			    case 70:
			    case 102:
			      g2int_twrite(arg);
			      break;
			    case 78:
			    case 110:
			      if (gensym_string_p) {
				  thing = gensym_string_is_simple_qm ? 
					  CHARACTER_TO_CHAR(SCHAR(control_string,
					  i)) : 
					  CHARACTER_TO_CHAR(CHAR(control_string,
					  i));
				  character_1 = 
					  CHARACTERP(CHAR_TO_CHARACTER(thing)) 
					  ? 
					  CHAR_CODE(CHAR_TO_CHARACTER(thing)) 
					  : CHAR_TO_CHARACTER(thing);
			      }
			      else
				  character_1 = 
					  g2int_charw_function(control_string,
					  i);
			      i = FIXNUM_ADD1(i);
			      temp = IFIX(character_1);
			      if (! !((SI_Long)-128L <= temp && temp <= 
				      (SI_Long)127L))
				  switch ((char)temp) {
				    case 70:
				    case 102:
				      if (G2int_in_text_for_item_or_value_p)
					  g2int_twrite_designation_for_item(arg);
				      else if (g2int_framep_function(arg) 
					      && g2int_block_p_function(arg)) {
					  g2int_twrite(g2int_get_or_make_up_designation_for_block(arg));
					  if (g2int_framep_function(arg) 
						  && 
						  g2int_block_p_function(arg) 
						  && 
						  G2int_note_blocks_in_tformat)
					      inline_funcall_1(G2int_note_blocks_in_tformat,
						      arg);
				      }
				      else
					  g2int_twrite(arg);
				      break;
				    case 65:
				    case 97:
				      g2int_write_block_or_evaluation_value(arg);
				      break;
				    case 78:
				    case 110:
				      g2int_write_name_denotation(arg);
				      break;
				    case 68:
				    case 100:
				      g2int_print_designation(arg);
				      break;
				    case 69:
				    case 101:
				      g2int_write_expression(arg);
				      break;
				    case 84:
				    case 116:
				      g2int_write_type_specification(arg);
				      break;
				    case 86:
				    case 118:
				      g2int_write_evaluation_value(1,arg);
				      break;
				    case 80:
				    case 112:
				      g2int_write_gensym_pathname(arg);
				      break;
				    case 87:
				    case 119:
				      g2int_write_error_text(arg);
				      break;
				    case 67:
				    case 99:
				      arg_index = FIXNUM_ADD1(arg_index);
				      temp_2 = arg_index;
				      if ( !(FIXNUMP(temp_2) && 
					      FIXNUM_LE(FIX((SI_Long)-128L),
					      temp_2) && FIXNUM_LE(temp_2,
					      FIX((SI_Long)127L))))
					  temp_2 = Nil;
				      else
					  switch (INTEGER_TO_CHAR(temp_2)) {
					    case 1:
					      temp_2 = arg1;
					      break;
					    case 2:
					      temp_2 = arg2;
					      break;
					    case 3:
					      temp_2 = arg3;
					      break;
					    case 4:
					      temp_2 = arg4;
					      break;
					    case 5:
					      temp_2 = arg5;
					      break;
					    case 6:
					      temp_2 = arg6;
					      break;
					    case 7:
					      temp_2 = arg7;
					      break;
					    case 8:
					      temp_2 = arg8;
					      break;
					    case 9:
					      temp_2 = arg9;
					      break;
					    default:
					      temp_2 = Nil;
					      break;
					  }
				      g2int_print_constant(2,arg,temp_2);
				      break;
				    case 83:
				    case 115:
				      arg_index = FIXNUM_ADD1(arg_index);
				      temp_2 = arg_index;
				      if ( !(FIXNUMP(temp_2) && 
					      FIXNUM_LE(FIX((SI_Long)-128L),
					      temp_2) && FIXNUM_LE(temp_2,
					      FIX((SI_Long)127L))))
					  temp_2 = Nil;
				      else
					  switch (INTEGER_TO_CHAR(temp_2)) {
					    case 1:
					      temp_2 = arg1;
					      break;
					    case 2:
					      temp_2 = arg2;
					      break;
					    case 3:
					      temp_2 = arg3;
					      break;
					    case 4:
					      temp_2 = arg4;
					      break;
					    case 5:
					      temp_2 = arg5;
					      break;
					    case 6:
					      temp_2 = arg6;
					      break;
					    case 7:
					      temp_2 = arg7;
					      break;
					    case 8:
					      temp_2 = arg8;
					      break;
					    case 9:
					      temp_2 = arg9;
					      break;
					    default:
					      temp_2 = Nil;
					      break;
					  }
				      g2int_write_name_denotation_for_slot(arg,
					      temp_2);
				      break;
				    case 81:
				    case 113:
				      arg_index = FIXNUM_ADD1(arg_index);
				      temp_2 = arg_index;
				      if ( !(FIXNUMP(temp_2) && 
					      FIXNUM_LE(FIX((SI_Long)-128L),
					      temp_2) && FIXNUM_LE(temp_2,
					      FIX((SI_Long)127L))))
					  temp_2 = Nil;
				      else
					  switch (INTEGER_TO_CHAR(temp_2)) {
					    case 1:
					      temp_2 = arg1;
					      break;
					    case 2:
					      temp_2 = arg2;
					      break;
					    case 3:
					      temp_2 = arg3;
					      break;
					    case 4:
					      temp_2 = arg4;
					      break;
					    case 5:
					      temp_2 = arg5;
					      break;
					    case 6:
					      temp_2 = arg6;
					      break;
					    case 7:
					      temp_2 = arg7;
					      break;
					    case 8:
					      temp_2 = arg8;
					      break;
					    case 9:
					      temp_2 = arg9;
					      break;
					    default:
					      temp_2 = Nil;
					      break;
					  }
				      g2int_write_name_denotation_components(arg,
					      temp_2);
				      break;
				    case 82:
				    case 114:
				      if (g2int_framep_function(arg) && 
					      g2int_block_p_function(arg) 
					      && G2int_note_blocks_in_tformat)
					  inline_funcall_1(G2int_note_blocks_in_tformat,
						  arg);
				      arg_index = FIXNUM_ADD1(arg_index);
				      temp_2 = arg_index;
				      if ( !(FIXNUMP(temp_2) && 
					      FIXNUM_LE(FIX((SI_Long)-128L),
					      temp_2) && FIXNUM_LE(temp_2,
					      FIX((SI_Long)127L))))
					  temp_2 = Nil;
				      else
					  switch (INTEGER_TO_CHAR(temp_2)) {
					    case 1:
					      temp_2 = arg1;
					      break;
					    case 2:
					      temp_2 = arg2;
					      break;
					    case 3:
					      temp_2 = arg3;
					      break;
					    case 4:
					      temp_2 = arg4;
					      break;
					    case 5:
					      temp_2 = arg5;
					      break;
					    case 6:
					      temp_2 = arg6;
					      break;
					    case 7:
					      temp_2 = arg7;
					      break;
					    case 8:
					      temp_2 = arg8;
					      break;
					    case 9:
					      temp_2 = arg9;
					      break;
					    default:
					      temp_2 = Nil;
					      break;
					  }
				      g2int_twrite(temp_2);
				      break;
				    case 66:
				    case 98:
				      break;
				    default:
				      break;
				  }
			      break;
			    case 76:
			    case 108:
			      temp_2 = LISTP(arg) ? arg : Nil;
			      if (gensym_string_p) {
				  thing = gensym_string_is_simple_qm ? 
					  CHARACTER_TO_CHAR(SCHAR(control_string,
					  i)) : 
					  CHARACTER_TO_CHAR(CHAR(control_string,
					  i));
				  character_1 = 
					  CHARACTERP(CHAR_TO_CHARACTER(thing)) 
					  ? 
					  CHAR_CODE(CHAR_TO_CHARACTER(thing)) 
					  : CHAR_TO_CHARACTER(thing);
			      }
			      else
				  character_1 = 
					  g2int_charw_function(control_string,
					  i);
			      i = FIXNUM_ADD1(i);
			      temp = IFIX(character_1);
			      if ( !((SI_Long)-128L <= temp && temp <= 
				      (SI_Long)127L))
				  temp_3 = Nil;
			      else
				  switch ((char)temp) {
				    case 59:
				      temp_3 = string_constant_1;
				      break;
				    case 44:
				      temp_3 = string_constant_2;
				      break;
				    case 32:
				      temp_3 = string_constant_3;
				      break;
				    default:
				      temp_3 = Nil;
				      break;
				  }
			      if (gensym_string_p) {
				  thing = gensym_string_is_simple_qm ? 
					  CHARACTER_TO_CHAR(SCHAR(control_string,
					  i)) : 
					  CHARACTER_TO_CHAR(CHAR(control_string,
					  i));
				  character_1 = 
					  CHARACTERP(CHAR_TO_CHARACTER(thing)) 
					  ? 
					  CHAR_CODE(CHAR_TO_CHARACTER(thing)) 
					  : CHAR_TO_CHARACTER(thing);
			      }
			      else
				  character_1 = 
					  g2int_charw_function(control_string,
					  i);
			      i = FIXNUM_ADD1(i);
			      temp = IFIX(character_1);
			      if ( !((SI_Long)-128L <= temp && temp <= 
				      (SI_Long)127L))
				  temp_4 = Nil;
			      else
				  switch ((char)temp) {
				    case 124:
				      temp_4 = string_constant_4;
				      break;
				    case 38:
				      temp_4 = string_constant_5;
				      break;
				    case 45:
				      temp_4 = Nil;
				      break;
				    default:
				      temp_4 = Nil;
				      break;
				  }
			      g2int_write_symbol_list(4,temp_2,temp_3,
				      temp_4, !LISTP(arg) ? arg : Nil);
			      break;
			    default:
			      break;
			  }
		      break;
		    case 40:
		      G2int_write_symbols_in_lower_caseqm = T;
		      break;
		    case 41:
		      G2int_write_symbols_in_lower_caseqm = Nil;
		      break;
		    case 37:
		      g2int_twrite_line_separator();
		      break;
		    case 38:
		      if (G2int_tformat_fresh_line_is_newline_p)
			  g2int_twrite_line_separator();
		      else if (EQ(G2int_current_twriting_output_type,
			      Qg2int_wide_string)) {
			  thing_2 = (SI_Long)32L;
			  g2int_twrite_wide_character(CHARACTERP(FIX(thing_2)) 
				  ? CHAR_CODE(FIX(thing_2)) : FIX(thing_2));
		      }
		      else {
			  if ( 
				  !FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
				  G2int_total_length_of_current_gensym_string))
			      g2int_extend_current_gensym_string(0);
			  temp_1 = G2int_current_gensym_string;
			  schar_arg_2 = 
				  G2int_fill_pointer_for_current_gensym_string;
			  thing_2 = (SI_Long)32L;
			  schar_new_value = 
				  CODE_CHAR(CHARACTERP(FIX(thing_2)) ? 
				  CHAR_CODE(FIX(thing_2)) : FIX(thing_2));
			  SET_SCHAR(temp_1,schar_arg_2,schar_new_value);
			  temp_1 = 
				  FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
			  G2int_fill_pointer_for_current_gensym_string = 
				  temp_1;
		      }
		      break;
		    case 10:
		    next_loop_2:
		      if (FIXNUM_EQ(i,string_length))
			  goto end_loop_2;
		      if (gensym_string_p) {
			  thing = gensym_string_is_simple_qm ? 
				  CHARACTER_TO_CHAR(SCHAR(control_string,
				  i)) : 
				  CHARACTER_TO_CHAR(CHAR(control_string,i));
			  character_1 = 
				  CHARACTERP(CHAR_TO_CHARACTER(thing)) ? 
				  CHAR_CODE(CHAR_TO_CHARACTER(thing)) : 
				  CHAR_TO_CHARACTER(thing);
		      }
		      else
			  character_1 = g2int_charw_function(control_string,i);
		      i = FIXNUM_ADD1(i);
		      if ( !TRUEP(g2int_wide_character_member(character_1,
			      list_constant)))
			  goto end_loop_2;
		      goto next_loop_2;
		    end_loop_2:
		      i = FIXNUM_SUB1(i);
		      break;
		    case 91:
		      arg_index = FIXNUM_ADD1(arg_index);
		      temp_2 = arg_index;
		      if ( !(FIXNUMP(temp_2) && 
			      FIXNUM_LE(FIX((SI_Long)-128L),temp_2) && 
			      FIXNUM_LE(temp_2,FIX((SI_Long)127L))))
			  arg = Nil;
		      else
			  switch (INTEGER_TO_CHAR(temp_2)) {
			    case 1:
			      arg = arg1;
			      break;
			    case 2:
			      arg = arg2;
			      break;
			    case 3:
			      arg = arg3;
			      break;
			    case 4:
			      arg = arg4;
			      break;
			    case 5:
			      arg = arg5;
			      break;
			    case 6:
			      arg = arg6;
			      break;
			    case 7:
			      arg = arg7;
			      break;
			    case 8:
			      arg = arg8;
			      break;
			    case 9:
			      arg = arg9;
			      break;
			    default:
			      arg = Nil;
			      break;
			  }
		      if (directive_atsign_p) {
			  if (arg)
			      arg_index = FIXNUM_SUB1(arg_index);
			  else {
			    next_loop_3:
			      if (FIXNUM_EQ(i,string_length))
				  goto end_loop_3;
			      if (gensym_string_p) {
				  thing = gensym_string_is_simple_qm ? 
					  CHARACTER_TO_CHAR(SCHAR(control_string,
					  i)) : 
					  CHARACTER_TO_CHAR(CHAR(control_string,
					  i));
				  character_1 = 
					  CHARACTERP(CHAR_TO_CHARACTER(thing)) 
					  ? 
					  CHAR_CODE(CHAR_TO_CHARACTER(thing)) 
					  : CHAR_TO_CHARACTER(thing);
			      }
			      else
				  character_1 = 
					  g2int_charw_function(control_string,
					  i);
			      i = FIXNUM_ADD1(i);
			      temp = IFIX(character_1);
			      if (! !((SI_Long)-128L <= temp && temp <= 
				      (SI_Long)127L))
				  switch ((char)temp) {
				    case 126:
				      if (FIXNUM_EQ(i,string_length))
					  goto end_1;
				      directive_colon_p = Nil;
				      directive_atsign_p = Nil;
				    next_loop_4:
				      if (gensym_string_p) {
					  thing = 
						  gensym_string_is_simple_qm 
						  ? 
						  CHARACTER_TO_CHAR(SCHAR(control_string,
						  i)) : 
						  CHARACTER_TO_CHAR(CHAR(control_string,
						  i));
					  character_1 = 
						  CHARACTERP(CHAR_TO_CHARACTER(thing)) 
						  ? 
						  CHAR_CODE(CHAR_TO_CHARACTER(thing)) 
						  : CHAR_TO_CHARACTER(thing);
				      }
				      else
					  character_1 = 
						  g2int_charw_function(control_string,
						  i);
				      i = FIXNUM_ADD1(i);
				      temp = IFIX(character_1);
				      if ( !((SI_Long)-128L <= temp && 
					      temp <= (SI_Long)127L)) {
					  temp_2 = character_1;
					  goto end_2;
				      }
				      else
					  switch ((char)temp) {
					    case 58:
					      directive_colon_p = T;
					      break;
					    case 64:
					      directive_atsign_p = T;
					      break;
					    default:
					      temp_2 = character_1;
					      goto end_2;
					      break;
					  }
				      goto next_loop_4;
				    end_loop_4:
				      temp_2 = Qnil;
				    end_2:
				      if (! !(FIXNUMP(temp_2) && 
					      FIXNUM_LE(FIX((SI_Long)-128L),
					      temp_2) && FIXNUM_LE(temp_2,
					      FIX((SI_Long)127L))))
					  switch (INTEGER_TO_CHAR(temp_2)) {
					    case 93:
					      goto end_1;
					      break;
					    default:
					      break;
					  }
				      break;
				    default:
				      break;
				  }
			      goto next_loop_3;
			    end_loop_3:
			      goto end_1;
			    end_1:;
			  }
		      }
		      else if (directive_colon_p) {
			  if (arg) {
			    next_loop_5:
			      if (FIXNUM_EQ(i,string_length))
				  goto end_loop_5;
			      if (gensym_string_p) {
				  thing = gensym_string_is_simple_qm ? 
					  CHARACTER_TO_CHAR(SCHAR(control_string,
					  i)) : 
					  CHARACTER_TO_CHAR(CHAR(control_string,
					  i));
				  character_1 = 
					  CHARACTERP(CHAR_TO_CHARACTER(thing)) 
					  ? 
					  CHAR_CODE(CHAR_TO_CHARACTER(thing)) 
					  : CHAR_TO_CHARACTER(thing);
			      }
			      else
				  character_1 = 
					  g2int_charw_function(control_string,
					  i);
			      i = FIXNUM_ADD1(i);
			      temp = IFIX(character_1);
			      if (! !((SI_Long)-128L <= temp && temp <= 
				      (SI_Long)127L))
				  switch ((char)temp) {
				    case 126:
				      if (FIXNUM_EQ(i,string_length))
					  goto end_3;
				      directive_colon_p = Nil;
				      directive_atsign_p = Nil;
				    next_loop_6:
				      if (gensym_string_p) {
					  thing = 
						  gensym_string_is_simple_qm 
						  ? 
						  CHARACTER_TO_CHAR(SCHAR(control_string,
						  i)) : 
						  CHARACTER_TO_CHAR(CHAR(control_string,
						  i));
					  character_1 = 
						  CHARACTERP(CHAR_TO_CHARACTER(thing)) 
						  ? 
						  CHAR_CODE(CHAR_TO_CHARACTER(thing)) 
						  : CHAR_TO_CHARACTER(thing);
				      }
				      else
					  character_1 = 
						  g2int_charw_function(control_string,
						  i);
				      i = FIXNUM_ADD1(i);
				      temp = IFIX(character_1);
				      if ( !((SI_Long)-128L <= temp && 
					      temp <= (SI_Long)127L)) {
					  temp_2 = character_1;
					  goto end_4;
				      }
				      else
					  switch ((char)temp) {
					    case 58:
					      directive_colon_p = T;
					      break;
					    case 64:
					      directive_atsign_p = T;
					      break;
					    default:
					      temp_2 = character_1;
					      goto end_4;
					      break;
					  }
				      goto next_loop_6;
				    end_loop_6:
				      temp_2 = Qnil;
				    end_4:
				      if (! !(FIXNUMP(temp_2) && 
					      FIXNUM_LE(FIX((SI_Long)-128L),
					      temp_2) && FIXNUM_LE(temp_2,
					      FIX((SI_Long)127L))))
					  switch (INTEGER_TO_CHAR(temp_2)) {
					    case 59:
					      goto end_3;
					      break;
					    case 93:
					      goto end_3;
					      break;
					    default:
					      break;
					  }
				      break;
				    default:
				      break;
				  }
			      goto next_loop_5;
			    end_loop_5:
			      goto end_3;
			    end_3:;
			  }
		      }
		      else {
			  i_1 = (SI_Long)0L;
			  ab_loop_bind_ = IFIX(arg);
			next_loop_7:
			  if (i_1 >= ab_loop_bind_)
			      goto end_loop_7;
			next_loop_8:
			  if (i_1 == IFIX(string_length))
			      goto end_loop_8;
			  if (gensym_string_p) {
			      thing = gensym_string_is_simple_qm ? 
				      ISCHAR(control_string,i_1) : 
				      ICHAR(control_string,i_1);
			      character_1 = 
				      CHARACTERP(CHAR_TO_CHARACTER(thing)) 
				      ? 
				      CHAR_CODE(CHAR_TO_CHARACTER(thing)) :
				       CHAR_TO_CHARACTER(thing);
			  }
			  else
			      character_1 = 
				      g2int_charw_function(control_string,
				      FIX(i_1));
			  i_1 = i_1 + (SI_Long)1L;
			  temp = IFIX(character_1);
			  if (! !((SI_Long)-128L <= temp && temp <= 
				  (SI_Long)127L))
			      switch ((char)temp) {
				case 126:
				  if (i_1 == IFIX(string_length)) {
				      temp_5 = TRUEP(Nil);
				      goto end_5;
				  }
				  directive_colon_p = Nil;
				  directive_atsign_p = Nil;
				next_loop_9:
				  if (gensym_string_p) {
				      thing = gensym_string_is_simple_qm ? 
					      ISCHAR(control_string,i_1) : 
					      ICHAR(control_string,i_1);
				      character_1 = 
					      CHARACTERP(CHAR_TO_CHARACTER(thing)) 
					      ? 
					      CHAR_CODE(CHAR_TO_CHARACTER(thing)) 
					      : CHAR_TO_CHARACTER(thing);
				  }
				  else
				      character_1 = 
					      g2int_charw_function(control_string,
					      FIX(i_1));
				  i_1 = i_1 + (SI_Long)1L;
				  temp = IFIX(character_1);
				  if ( !((SI_Long)-128L <= temp && temp <= 
					  (SI_Long)127L)) {
				      temp_2 = character_1;
				      goto end_6;
				  }
				  else
				      switch ((char)temp) {
					case 58:
					  directive_colon_p = T;
					  break;
					case 64:
					  directive_atsign_p = T;
					  break;
					default:
					  temp_2 = character_1;
					  goto end_6;
					  break;
				      }
				  goto next_loop_9;
				end_loop_9:
				  temp_2 = Qnil;
				end_6:
				  if (! !(FIXNUMP(temp_2) && 
					  FIXNUM_LE(FIX((SI_Long)-128L),
					  temp_2) && FIXNUM_LE(temp_2,
					  FIX((SI_Long)127L))))
				      switch (INTEGER_TO_CHAR(temp_2)) {
					case 59:
					  temp_5 = TRUEP(T);
					  goto end_5;
					  break;
					case 93:
					  temp_5 = TRUEP(Nil);
					  goto end_5;
					  break;
					default:
					  break;
				      }
				  break;
				default:
				  break;
			      }
			  goto next_loop_8;
			end_loop_8:
			  temp_5 = TRUEP(Nil);
			  goto end_5;
			  temp_5 = TRUEP(Qnil);
			end_5:
			  if ( !temp_5)
			      goto end_7;
			  i_1 = i_1 + (SI_Long)1L;
			  goto next_loop_7;
			end_loop_7:
			end_7:;
		      }
		      break;
		    case 59:
		    next_loop_10:
		      if (FIXNUM_EQ(i,string_length))
			  goto end_loop_10;
		      if (gensym_string_p) {
			  thing = gensym_string_is_simple_qm ? 
				  CHARACTER_TO_CHAR(SCHAR(control_string,
				  i)) : 
				  CHARACTER_TO_CHAR(CHAR(control_string,i));
			  character_1 = 
				  CHARACTERP(CHAR_TO_CHARACTER(thing)) ? 
				  CHAR_CODE(CHAR_TO_CHARACTER(thing)) : 
				  CHAR_TO_CHARACTER(thing);
		      }
		      else
			  character_1 = g2int_charw_function(control_string,i);
		      i = FIXNUM_ADD1(i);
		      temp = IFIX(character_1);
		      if (! !((SI_Long)-128L <= temp && temp <= (SI_Long)127L))
			  switch ((char)temp) {
			    case 126:
			      if (FIXNUM_EQ(i,string_length))
				  goto end_8;
			      directive_colon_p = Nil;
			      directive_atsign_p = Nil;
			    next_loop_11:
			      if (gensym_string_p) {
				  thing = gensym_string_is_simple_qm ? 
					  CHARACTER_TO_CHAR(SCHAR(control_string,
					  i)) : 
					  CHARACTER_TO_CHAR(CHAR(control_string,
					  i));
				  character_1 = 
					  CHARACTERP(CHAR_TO_CHARACTER(thing)) 
					  ? 
					  CHAR_CODE(CHAR_TO_CHARACTER(thing)) 
					  : CHAR_TO_CHARACTER(thing);
			      }
			      else
				  character_1 = 
					  g2int_charw_function(control_string,
					  i);
			      i = FIXNUM_ADD1(i);
			      temp = IFIX(character_1);
			      if ( !((SI_Long)-128L <= temp && temp <= 
				      (SI_Long)127L)) {
				  temp_2 = character_1;
				  goto end_9;
			      }
			      else
				  switch ((char)temp) {
				    case 58:
				      directive_colon_p = T;
				      break;
				    case 64:
				      directive_atsign_p = T;
				      break;
				    default:
				      temp_2 = character_1;
				      goto end_9;
				      break;
				  }
			      goto next_loop_11;
			    end_loop_11:
			      temp_2 = Qnil;
			    end_9:
			      if (! !(FIXNUMP(temp_2) && 
				      FIXNUM_LE(FIX((SI_Long)-128L),
				      temp_2) && FIXNUM_LE(temp_2,
				      FIX((SI_Long)127L))))
				  switch (INTEGER_TO_CHAR(temp_2)) {
				    case 93:
				      goto end_8;
				      break;
				    default:
				      break;
				  }
			      break;
			    default:
			      break;
			  }
		      goto next_loop_10;
		    end_loop_10:
		      goto end_8;
		    end_8:
		      break;
		    case 93:
		      break;
		    case 126:
		      if (EQ(G2int_current_twriting_output_type,
			      Qg2int_wide_string)) {
			  thing_2 = (SI_Long)126L;
			  g2int_twrite_wide_character(CHARACTERP(FIX(thing_2)) 
				  ? CHAR_CODE(FIX(thing_2)) : FIX(thing_2));
		      }
		      else {
			  if ( 
				  !FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
				  G2int_total_length_of_current_gensym_string))
			      g2int_extend_current_gensym_string(0);
			  temp_1 = G2int_current_gensym_string;
			  schar_arg_2 = 
				  G2int_fill_pointer_for_current_gensym_string;
			  thing_2 = (SI_Long)126L;
			  schar_new_value = 
				  CODE_CHAR(CHARACTERP(FIX(thing_2)) ? 
				  CHAR_CODE(FIX(thing_2)) : FIX(thing_2));
			  SET_SCHAR(temp_1,schar_arg_2,schar_new_value);
			  temp_1 = 
				  FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
			  G2int_fill_pointer_for_current_gensym_string = 
				  temp_1;
		      }
		      break;
		    default:
		      break;
		  }
	      break;
	    default:
	      if (EQ(G2int_current_twriting_output_type,Qg2int_wide_string)) {
		  thing_1 = character_1;
		  g2int_twrite_wide_character(CHARACTERP(thing_1) ? 
			  CHAR_CODE(thing_1) : thing_1);
	      }
	      else {
		  if ( 
			  !FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
			  G2int_total_length_of_current_gensym_string))
		      g2int_extend_current_gensym_string(0);
		  temp_1 = G2int_current_gensym_string;
		  schar_arg_2 = G2int_fill_pointer_for_current_gensym_string;
		  thing_1 = character_1;
		  schar_new_value = CODE_CHAR(CHARACTERP(thing_1) ? 
			  CHAR_CODE(thing_1) : thing_1);
		  SET_SCHAR(temp_1,schar_arg_2,schar_new_value);
		  temp_1 = 
			  FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
		  G2int_fill_pointer_for_current_gensym_string = temp_1;
	      }
	      break;
	  }
      goto next_loop;
    end_loop:
      result = VALUES_1(Qnil);
    POP_SPECIAL();
    return result;
}

static Object Qg2int_gensym_string;  /* gensym-string */

/* TFORMAT-GENSYM-STRING */
Object g2int_tformat_gensym_string varargs_1(int, n)
{
    Object control_string;
    Object arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9;
    Object current_gensym_string, fill_pointer_for_current_gensym_string;
    Object total_length_of_current_gensym_string, current_twriting_output_type;
    Declare_varargs_nonrelocating;
    Declare_special(4);
    Object result;

    x_note_fn_call(21,43);
    INIT_ARGS_nonrelocating();
    control_string = REQUIRED_ARG_nonrelocating();
    arg1 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg2 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg3 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg4 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg5 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg6 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg7 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg8 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg9 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    END_ARGS_nonrelocating();
    current_gensym_string = 
	    g2int_obtain_simple_gensym_string(FIX((SI_Long)2048L));
    PUSH_SPECIAL(G2int_current_gensym_string,current_gensym_string,3);
      fill_pointer_for_current_gensym_string = FIX((SI_Long)0L);
      PUSH_SPECIAL(G2int_fill_pointer_for_current_gensym_string,fill_pointer_for_current_gensym_string,
	      2);
	total_length_of_current_gensym_string = FIX((SI_Long)2048L);
	PUSH_SPECIAL(G2int_total_length_of_current_gensym_string,total_length_of_current_gensym_string,
		1);
	  current_twriting_output_type = Qg2int_gensym_string;
	  PUSH_SPECIAL(G2int_current_twriting_output_type,current_twriting_output_type,
		  0);
	    g2int_tformat(10,control_string,arg1,arg2,arg3,arg4,arg5,arg6,
		    arg7,arg8,arg9);
	    result = g2int_copy_out_current_gensym_string();
	  POP_SPECIAL();
	POP_SPECIAL();
      POP_SPECIAL();
    POP_SPECIAL();
    return result;
}

/* WRITE-RANDOM-S-EXPRESSION */
Object g2int_write_random_s_expression(s_expression)
    Object s_expression;
{
    x_note_fn_call(21,44);
    return g2int_write_s_expression(s_expression);
}

static Object string_constant_6;   /* "(" */

static Object string_constant_7;   /* " . " */

static Object string_constant_8;   /* ")" */

/* WRITE-S-EXPRESSION */
Object g2int_write_s_expression(s_expression)
    Object s_expression;
{
    Object adjustable_gensym_string, standard_output, temp, string_1;
    Object write_strings_parsably_qm, s_expression_old_value;
    Declare_stack_pointer;
    Declare_catch(1);
    Declare_special(1);
    XDeclare_area(1);
    Object result;

    x_note_fn_call(21,45);
    SAVE_STACK();
    if (ATOM(s_expression)) {
	if (STRINGP(s_expression) || g2int_text_string_p(s_expression) || 
		SYMBOLP(s_expression) || FLOATP(s_expression) || 
		INTEGERP(s_expression) || CHARACTERP(s_expression)) {
	    result = g2int_twrite_parsably(s_expression);
	    RESTORE_STACK();
	    return result;
	}
	else {
	    adjustable_gensym_string = g2int_obtain_adjustable_gensym_string();
	    SET_FILL_POINTER(adjustable_gensym_string,FIX((SI_Long)0L));
	    if (PUSH_AREA(Dynamic_area,0)) {
		standard_output = 
			extend_string_output_stream(adjustable_gensym_string);
		PUSH_SPECIAL(Standard_output,standard_output,0);
		  if (PUSH_UNWIND_PROTECT(0))
		      g2int_pm_prin1(s_expression);
		  POP_UNWIND_PROTECT(0);
		  lclose(1,Standard_output);
		  CONTINUE_UNWINDING(0);
		POP_SPECIAL();
	    }
	    POP_AREA(0);
	    if ( !FIXNUM_GT(FILL_POINTER(adjustable_gensym_string),
		    G2int_maximum_suggested_length_for_simple_gensym_strings)) 
			{
		temp = g2int_copy_gensym_string(adjustable_gensym_string);
		g2int_reclaim_adjustable_gensym_string(adjustable_gensym_string);
		string_1 = temp;
	    }
	    else
		string_1 = adjustable_gensym_string;
	    write_strings_parsably_qm = Nil;
	    PUSH_SPECIAL(G2int_write_strings_parsablyqm,write_strings_parsably_qm,
		    0);
	      g2int_twrite_general_string(string_1);
	      result = g2int_reclaim_gensym_string(string_1);
	    POP_SPECIAL();
	    RESTORE_STACK();
	    return result;
	}
    }
    else {
	write_strings_parsably_qm = Nil;
	PUSH_SPECIAL(G2int_write_strings_parsablyqm,write_strings_parsably_qm,
		0);
	  g2int_twrite_general_string(string_constant_6);
	POP_SPECIAL();
      next_loop:
	s_expression_old_value = s_expression;
	temp = FIRST(s_expression_old_value);
	s_expression = REST(s_expression_old_value);
	g2int_write_s_expression(temp);
	if (ATOM(s_expression))
	    goto end_loop;
	g2int_twrite_character(FIX((SI_Long)32L));
	goto next_loop;
      end_loop:
	if ( !EQ(s_expression,Nil)) {
	    write_strings_parsably_qm = Nil;
	    PUSH_SPECIAL(G2int_write_strings_parsablyqm,write_strings_parsably_qm,
		    0);
	      g2int_twrite_general_string(string_constant_7);
	    POP_SPECIAL();
	    g2int_write_s_expression(s_expression);
	}
	write_strings_parsably_qm = Nil;
	PUSH_SPECIAL(G2int_write_strings_parsablyqm,write_strings_parsably_qm,
		0);
	  g2int_twrite_general_string(string_constant_8);
	POP_SPECIAL();
	RESTORE_STACK();
	return VALUES_1(Qnil);
    }
}

static Object string_constant_9;   /* "none" */

static Object string_constant_10;  /* "~a " */

static Object string_constant_11;  /* " ~(~a~) " */

static Object string_constant_12;  /* "~(~a~)" */

/* WRITE-SYMBOL-LIST */
Object g2int_write_symbol_list varargs_1(int, n)
{
    Object symbol_list;
    Object separator_qm, conjunction_qm, empty_list_symbol_or_string_qm;
    Object suffix_alist_qm, temp, listed_symbol, entry_for_symbol_to_suffix_qm;
    Declare_varargs_nonrelocating;

    x_note_fn_call(21,46);
    INIT_ARGS_nonrelocating();
    symbol_list = REQUIRED_ARG_nonrelocating();
    separator_qm = OPTIONAL_ARG_P_nonrelocating() ? 
	    OPTIONAL_ARG_nonrelocating() : Nil;
    conjunction_qm = OPTIONAL_ARG_P_nonrelocating() ? 
	    OPTIONAL_ARG_nonrelocating() : Nil;
    empty_list_symbol_or_string_qm = OPTIONAL_ARG_P_nonrelocating() ? 
	    OPTIONAL_ARG_nonrelocating() : Nil;
    suffix_alist_qm = OPTIONAL_ARG_P_nonrelocating() ? 
	    OPTIONAL_ARG_nonrelocating() : Nil;
    END_ARGS_nonrelocating();
    if ( !TRUEP(symbol_list)) {
	temp = empty_list_symbol_or_string_qm;
	if (temp);
	else
	    temp = string_constant_9;
	return g2int_twrite(temp);
    }
    else {
	if ( !TRUEP(separator_qm))
	    separator_qm = string_constant_2;
	listed_symbol = symbol_list;
      next_loop:
	if ( !TRUEP(listed_symbol))
	    goto end_loop;
	g2int_twrite(CAR(listed_symbol));
	entry_for_symbol_to_suffix_qm = 
		g2int_assq_function(CAR(listed_symbol),suffix_alist_qm);
	if (entry_for_symbol_to_suffix_qm)
	    g2int_twrite_general_string(CDR(entry_for_symbol_to_suffix_qm));
	if (CDR(listed_symbol)) {
	    if (CDDR(listed_symbol))
		g2int_tformat(2,string_constant_10,separator_qm);
	    else if (IFIX(length(symbol_list)) == (SI_Long)2L) {
		if (conjunction_qm) {
		    if (SYMBOLP(conjunction_qm))
			g2int_tformat(2,string_constant_11,conjunction_qm);
		    else {
			g2int_twrite_general_string(string_constant_3);
			g2int_twrite_general_string(conjunction_qm);
			g2int_twrite_general_string(string_constant_3);
		    }
		}
		else
		    g2int_tformat(2,string_constant_10,separator_qm);
	    }
	    else if (conjunction_qm) {
		g2int_tformat(2,string_constant_10,separator_qm);
		if (SYMBOLP(conjunction_qm))
		    g2int_tformat(2,string_constant_12,conjunction_qm);
		else
		    g2int_twrite_general_string(conjunction_qm);
		g2int_twrite_general_string(string_constant_3);
	    }
	    else
		g2int_tformat(2,string_constant_10,separator_qm);
	}
	listed_symbol = M_CDR(listed_symbol);
	goto next_loop;
      end_loop:
	return VALUES_1(Qnil);
    }
}

/* TWRITE-GENSYM-CHARACTERS-FROM-ASCII-STRING */
Object g2int_twrite_gensym_characters_from_ascii_string varargs_1(int, n)
{
    Object ascii_string;
    Object spaces_for_tabs_qm, start, end_qm, char_1, temp, thing, temp_1;
    Object schar_arg_2, schar_new_value;
    SI_Long length_of_string, i, end, arg, arg_1, arg_2, ab_loop_repeat_;
    char string_is_simple_qm;
    char thing_1;
    Declare_varargs_nonrelocating;

    x_note_fn_call(21,47);
    INIT_ARGS_nonrelocating();
    ascii_string = REQUIRED_ARG_nonrelocating();
    spaces_for_tabs_qm = OPTIONAL_ARG_P_nonrelocating() ? 
	    OPTIONAL_ARG_nonrelocating() : Nil;
    start = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() :
	     FIX((SI_Long)0L);
    end_qm = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() 
	    : Nil;
    END_ARGS_nonrelocating();
    string_is_simple_qm =  !ARRAY_HAS_FILL_POINTER_P(ascii_string);
    length_of_string = string_is_simple_qm ? 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(ascii_string)) : 
	    IFIX(length(ascii_string));
    i = IFIX(start);
    end = end_qm ? MIN(IFIX(end_qm),length_of_string) : length_of_string;
    char_1 = Nil;
  next_loop:
    if (i == end)
	goto end_loop;
    temp = string_is_simple_qm ? CHR(ISCHAR(ascii_string,i)) : 
	    CHR(ICHAR(ascii_string,i));
    i = i + (SI_Long)1L;
    char_1 = temp;
    temp = CHAR_CODE(char_1);
    if ( !(FIXNUM_LE(FIX((SI_Long)-128L),temp) && FIXNUM_LE(temp,
	    FIX((SI_Long)127L)))) {
	arg = (SI_Long)32L;
	arg_1 = IFIX(CHAR_INT(char_1));
	arg_2 = (SI_Long)126L;
	if (arg <= arg_1 && arg_1 <= arg_2) {
	    if (EQ(G2int_current_twriting_output_type,Qg2int_wide_string)) {
		thing = char_1;
		g2int_twrite_wide_character(CHARACTERP(thing) ? 
			CHAR_CODE(thing) : thing);
	    }
	    else {
		if ( 
			!FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
			G2int_total_length_of_current_gensym_string))
		    g2int_extend_current_gensym_string(0);
		temp_1 = G2int_current_gensym_string;
		schar_arg_2 = G2int_fill_pointer_for_current_gensym_string;
		thing = char_1;
		schar_new_value = CODE_CHAR(CHARACTERP(thing) ? 
			CHAR_CODE(thing) : thing);
		SET_SCHAR(temp_1,schar_arg_2,schar_new_value);
		temp_1 = 
			FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
		G2int_fill_pointer_for_current_gensym_string = temp_1;
	    }
	}
    }
    else
	switch (INTEGER_TO_CHAR(temp)) {
	  case 92:
	  case 126:
	  case 64:
	    if (EQ(G2int_current_twriting_output_type,Qg2int_wide_string)) {
		thing_1 = '~';
		g2int_twrite_wide_character(CHARACTERP(CHR(thing_1)) ? 
			CHAR_CODE(CHR(thing_1)) : CHR(thing_1));
	    }
	    else {
		if ( 
			!FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
			G2int_total_length_of_current_gensym_string))
		    g2int_extend_current_gensym_string(0);
		temp_1 = G2int_current_gensym_string;
		schar_arg_2 = G2int_fill_pointer_for_current_gensym_string;
		thing_1 = '~';
		schar_new_value = CODE_CHAR(CHARACTERP(CHR(thing_1)) ? 
			CHAR_CODE(CHR(thing_1)) : CHR(thing_1));
		SET_SCHAR(temp_1,schar_arg_2,schar_new_value);
		temp_1 = 
			FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
		G2int_fill_pointer_for_current_gensym_string = temp_1;
	    }
	    if (EQ(G2int_current_twriting_output_type,Qg2int_wide_string)) {
		thing = char_1;
		g2int_twrite_wide_character(CHARACTERP(thing) ? 
			CHAR_CODE(thing) : thing);
	    }
	    else {
		if ( 
			!FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
			G2int_total_length_of_current_gensym_string))
		    g2int_extend_current_gensym_string(0);
		temp_1 = G2int_current_gensym_string;
		schar_arg_2 = G2int_fill_pointer_for_current_gensym_string;
		thing = char_1;
		schar_new_value = CODE_CHAR(CHARACTERP(thing) ? 
			CHAR_CODE(thing) : thing);
		SET_SCHAR(temp_1,schar_arg_2,schar_new_value);
		temp_1 = 
			FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
		G2int_fill_pointer_for_current_gensym_string = temp_1;
	    }
	    break;
	  case 10:
	    if (EQ(G2int_current_twriting_output_type,Qg2int_wide_string)) {
		thing_1 = '@';
		g2int_twrite_wide_character(CHARACTERP(CHR(thing_1)) ? 
			CHAR_CODE(CHR(thing_1)) : CHR(thing_1));
	    }
	    else {
		if ( 
			!FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
			G2int_total_length_of_current_gensym_string))
		    g2int_extend_current_gensym_string(0);
		temp_1 = G2int_current_gensym_string;
		schar_arg_2 = G2int_fill_pointer_for_current_gensym_string;
		thing_1 = '@';
		schar_new_value = CODE_CHAR(CHARACTERP(CHR(thing_1)) ? 
			CHAR_CODE(CHR(thing_1)) : CHR(thing_1));
		SET_SCHAR(temp_1,schar_arg_2,schar_new_value);
		temp_1 = 
			FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
		G2int_fill_pointer_for_current_gensym_string = temp_1;
	    }
	    if (EQ(G2int_current_twriting_output_type,Qg2int_wide_string)) {
		thing_1 = 'L';
		g2int_twrite_wide_character(CHARACTERP(CHR(thing_1)) ? 
			CHAR_CODE(CHR(thing_1)) : CHR(thing_1));
	    }
	    else {
		if ( 
			!FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
			G2int_total_length_of_current_gensym_string))
		    g2int_extend_current_gensym_string(0);
		temp_1 = G2int_current_gensym_string;
		schar_arg_2 = G2int_fill_pointer_for_current_gensym_string;
		thing_1 = 'L';
		schar_new_value = CODE_CHAR(CHARACTERP(CHR(thing_1)) ? 
			CHAR_CODE(CHR(thing_1)) : CHR(thing_1));
		SET_SCHAR(temp_1,schar_arg_2,schar_new_value);
		temp_1 = 
			FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
		G2int_fill_pointer_for_current_gensym_string = temp_1;
	    }
	    break;
	  case 9:
	    ab_loop_repeat_ = spaces_for_tabs_qm ? 
		    (FIXNUMP(spaces_for_tabs_qm) ? 
		    IFIX(spaces_for_tabs_qm) : (SI_Long)1L) : (SI_Long)0L;
	  next_loop_1:
	    if ( !((SI_Long)0L < ab_loop_repeat_))
		goto end_loop_1;
	    ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
	    if (EQ(G2int_current_twriting_output_type,Qg2int_wide_string)) {
		thing_1 = ' ';
		g2int_twrite_wide_character(CHARACTERP(CHR(thing_1)) ? 
			CHAR_CODE(CHR(thing_1)) : CHR(thing_1));
	    }
	    else {
		if ( 
			!FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
			G2int_total_length_of_current_gensym_string))
		    g2int_extend_current_gensym_string(0);
		temp_1 = G2int_current_gensym_string;
		schar_arg_2 = G2int_fill_pointer_for_current_gensym_string;
		thing_1 = ' ';
		schar_new_value = CODE_CHAR(CHARACTERP(CHR(thing_1)) ? 
			CHAR_CODE(CHR(thing_1)) : CHR(thing_1));
		SET_SCHAR(temp_1,schar_arg_2,schar_new_value);
		temp_1 = 
			FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
		G2int_fill_pointer_for_current_gensym_string = temp_1;
	    }
	    goto next_loop_1;
	  end_loop_1:;
	    break;
	  default:
	    arg = (SI_Long)32L;
	    arg_1 = IFIX(CHAR_INT(char_1));
	    arg_2 = (SI_Long)126L;
	    if (arg <= arg_1 && arg_1 <= arg_2) {
		if (EQ(G2int_current_twriting_output_type,
			    Qg2int_wide_string)) {
		    thing = char_1;
		    g2int_twrite_wide_character(CHARACTERP(thing) ? 
			    CHAR_CODE(thing) : thing);
		}
		else {
		    if ( 
			    !FIXNUM_LT(G2int_fill_pointer_for_current_gensym_string,
			    G2int_total_length_of_current_gensym_string))
			g2int_extend_current_gensym_string(0);
		    temp_1 = G2int_current_gensym_string;
		    schar_arg_2 = G2int_fill_pointer_for_current_gensym_string;
		    thing = char_1;
		    schar_new_value = CODE_CHAR(CHARACTERP(thing) ? 
			    CHAR_CODE(thing) : thing);
		    SET_SCHAR(temp_1,schar_arg_2,schar_new_value);
		    temp_1 = 
			    FIXNUM_ADD1(G2int_fill_pointer_for_current_gensym_string);
		    G2int_fill_pointer_for_current_gensym_string = temp_1;
		}
	    }
	    break;
	}
    goto next_loop;
  end_loop:
    return VALUES_1(Qnil);
}

Object G2int_the_g2_defstruct_package = UNBOUND;

/* ALLOCATED-NAMED-GENSYM-STRUCTURE-P */
Object g2int_allocated_named_gensym_structure_p(thing)
    Object thing;
{
    Object temp;
    char temp_1;

    x_note_fn_call(21,48);
    if (SIMPLE_VECTOR_P(thing) && FIXNUM_GE(length(thing),FIX((SI_Long)1L))) {
	temp = ISVREF(thing,(SI_Long)0L);
	temp_1 = SYMBOLP(temp);
    }
    else
	temp_1 = TRUEP(Nil);
    if (temp_1)
	return VALUES_1(EQ(SYMBOL_PACKAGE(ISVREF(thing,(SI_Long)0L)),
		G2int_the_g2_defstruct_package) ? T : Nil);
    else
	return VALUES_1(Nil);
}

Object G2int_type_description_of_unique_type_name_of_gensym_structure_prop = UNBOUND;

Object G2int_type_description_of_type_prop = UNBOUND;

static Object Qg2int_type_description_of_unique_type_name_of_gensym_structure;  /* type-description-of-unique-type-name-of-gensym-structure */

/* TYPE-DESCRIPTION-OF */
Object g2int_type_description_of(thing)
    Object thing;
{
    Object possible_type_name_qm;
    char temp;

    x_note_fn_call(21,49);
    possible_type_name_qm = Nil;
    if (SIMPLE_VECTOR_P(thing) && FIXNUM_LE(FIX((SI_Long)1L),length(thing))) {
	possible_type_name_qm = ISVREF(thing,(SI_Long)0L);
	temp = TRUEP(possible_type_name_qm);
    }
    else
	temp = TRUEP(Nil);
    if (temp ? SYMBOLP(possible_type_name_qm) : TRUEP(Nil))
	return g2int_getfq_function_no_default(INLINE_SYMBOL_PLIST(possible_type_name_qm),
		Qg2int_type_description_of_unique_type_name_of_gensym_structure);
    else
	return VALUES_1(Nil);
}

static Object Qg2int_type_description_of_type;  /* type-description-of-type */

/* SUBTYPE-P-USING-TYPE-DESCRIPTIONS */
Object g2int_subtype_p_using_type_descriptions(refined_type_description,
	    superior_type_description)
    Object refined_type_description, superior_type_description;
{
    Object superior_type, ab_loop_list_, temp;

    x_note_fn_call(21,50);
    superior_type = Nil;
    ab_loop_list_ = ISVREF(refined_type_description,(SI_Long)2L);
  next_loop:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    superior_type = M_CAR(ab_loop_list_);
    ab_loop_list_ = M_CDR(ab_loop_list_);
    temp = 
	    g2int_getfq_function_no_default(INLINE_SYMBOL_PLIST(superior_type),
	    Qg2int_type_description_of_type);
    if (EQL(temp,superior_type_description)) {
	temp = T;
	goto end;
    }
    goto next_loop;
  end_loop:
    temp = Qnil;
  end:;
    return VALUES_1(temp);
}

Object G2int_the_type_description_of_t = UNBOUND;

Object G2int_maximum_number_of_structure_methods = UNBOUND;

Object G2int_table_to_map_structure_id_to_method_name = UNBOUND;

Object G2int_undefined_structure_method_message = UNBOUND;

/* UNDEFINED-STRUCTURE-METHOD-FUNCTION */
Object g2int_undefined_structure_method_function varargs_1(int, n)
{
    Object structure_type;
    Declare_varargs_nonrelocating;

    x_note_fn_call(21,51);
    INIT_ARGS_nonrelocating();
    structure_type = REQUIRED_ARG_nonrelocating();
    if (OPTIONAL_ARG_P_nonrelocating())
	OPTIONAL_ARG_nonrelocating();
    if (OPTIONAL_ARG_P_nonrelocating())
	OPTIONAL_ARG_nonrelocating();
    if (OPTIONAL_ARG_P_nonrelocating())
	OPTIONAL_ARG_nonrelocating();
    if (OPTIONAL_ARG_P_nonrelocating())
	OPTIONAL_ARG_nonrelocating();
    if (OPTIONAL_ARG_P_nonrelocating())
	OPTIONAL_ARG_nonrelocating();
    if (OPTIONAL_ARG_P_nonrelocating())
	OPTIONAL_ARG_nonrelocating();
    if (OPTIONAL_ARG_P_nonrelocating())
	OPTIONAL_ARG_nonrelocating();
    if (OPTIONAL_ARG_P_nonrelocating())
	OPTIONAL_ARG_nonrelocating();
    if (OPTIONAL_ARG_P_nonrelocating())
	OPTIONAL_ARG_nonrelocating();
    if (OPTIONAL_ARG_P_nonrelocating())
	OPTIONAL_ARG_nonrelocating();
    if (OPTIONAL_ARG_P_nonrelocating())
	OPTIONAL_ARG_nonrelocating();
    END_ARGS_nonrelocating();
    return error((SI_Long)1L,
	    "Call to structure method where none was defined.");
}

static Object Qg2int_undefined_structure_method_function;  /* undefined-structure-method-function */

/* MAKE-STRUCTURE-METHOD-TABLE */
Object g2int_make_structure_method_table(superior_dispatch_table_qm)
    Object superior_dispatch_table_qm;
{
    Object dispatch_table;

    x_note_fn_call(21,52);
    dispatch_table = superior_dispatch_table_qm ? make_array(3,
	    G2int_maximum_number_of_structure_methods,Kinitial_contents,
	    superior_dispatch_table_qm) : make_array(3,
	    G2int_maximum_number_of_structure_methods,Kinitial_element,
	    Qg2int_undefined_structure_method_function);
    SVREF(dispatch_table,FIX((SI_Long)0L)) = superior_dispatch_table_qm;
    return VALUES_1(dispatch_table);
}

/* DB-FORMAT */
Object g2int_db_format varargs_1(int, n)
{
    Declare_varargs;
    Declare_stack_pointer;
    Object result;

    x_note_fn_call(21,53);
    SAVE_STACK();
    INIT_ARGS();
    SAVE_ARGS();
    REST_ARG();
    RESTORE_STACK();
    return VALUES_1(Nil);
}

void utilities1_INIT()
{
    Object temp, temp_1, temp_2, temp_3, temp_4, temp_5, temp_6, temp_7;
    Object temp_8, temp_9, temp_10, temp_11, temp_12, temp_13, temp_14;
    Object named_dynamic_extent_description, gensymed_symbol, the_array;
    Object svref_arg_1;
    SI_Long i, ab_loop_bind_;
    Object Qg2int_export_cached_explanation_node, AB_package;
    Object Qg2int_return_cached_explanation_if_valid;
    Object Qg2int_make_cached_explanation_node;
    Object Qg2int_get_cached_explanation_evaled_variables_if_any;
    Object Qg2int_handle_g2_reset, Qg2int_handle_network_close;
    Object Qg2int_handle_network_accept, Qg2int_handle_network_connect;
    Object Qg2int_handle_write_event, Qg2int_handle_read_event;
    Object Qg2int_map_unicode_to_code_if_any, Qg2int_map_code_to_unicode;
    Object Qg2int_twrite_for_export_from_transcoder, Qg2int_export_as_string;
    Object Qg2int_export_character, Qg2int_transcode_as_text_string;
    Object Qg2int_twrite_unicode_from_transcoder, Qg2int_transcode_character;
    Object Qg2int_read_character_from_text_sequence;
    Object Qg2int_initialize_text_sequence_string, Qg2int_clean_up_structure;
    Object Qg2int_read_character_code, Qg2int_resume_workstation_context;
    Object Qg2int_suspend_workstation_context;
    Object Qg2int_setup_workstation_context;
    Object Qg2int_valid_workstation_context_p, Qg2int_reclaim_structure;
    Object Qg2int_track_mouse_into_spot, Qg2int_clean_up_workstation_context;
    Object string_constant_18, string_constant_17, string_constant_16;
    Object string_constant_15, string_constant_14;
    Object Qg2int_named_dynamic_extent_description;
    Object Qg2int_outputting_to_gensym_string, Qg2int_utilities1;
    Object Qg2int_adjustable_gensym_string_byte_use_counter;
    Object Qg2int_adjustable_gensym_string_counter;
    Object Qg2int_simple_gensym_string_byte_use_counter;
    Object Qg2int_simple_gensym_string_counter, list_constant_6;
    Object Qg2int_adjustable_gensym_string_counts;
    Object Qg2int_long_simple_gensym_string_counts, list_constant_5;
    Object Qg2int_new_partial_buffer_gensym_string_vector, Kfuncall;
    Object list_constant_4, Qg2int_short_simple_gensym_string_counts;
    Object Qg2int_new_short_simple_gensym_string_vector, list_constant_3;
    Object Qg2int_adjustable_gensym_strings, Qg2int_long_simple_gensym_strings;
    Object list_constant_2, list_constant_1;
    Object Qg2int_short_simple_gensym_strings, string_constant_13;

    x_note_fn_call(21,54);
    SET_PACKAGE("AB");
    temp = g2int_make_partial_buffer_info(FIX((SI_Long)128L),
	    FIX((SI_Long)32L),FIX((SI_Long)0L),FIX((SI_Long)5L));
    temp_1 = g2int_make_partial_buffer_info(FIX((SI_Long)256L),
	    FIX((SI_Long)64L),FIX((SI_Long)3L),FIX((SI_Long)6L));
    temp_2 = g2int_make_partial_buffer_info(FIX((SI_Long)512L),
	    FIX((SI_Long)128L),FIX((SI_Long)5L),FIX((SI_Long)7L));
    temp_3 = g2int_make_partial_buffer_info(FIX((SI_Long)1024L),
	    FIX((SI_Long)256L),FIX((SI_Long)7L),FIX((SI_Long)8L));
    temp_4 = g2int_make_partial_buffer_info(FIX((SI_Long)2048L),
	    FIX((SI_Long)512L),FIX((SI_Long)9L),FIX((SI_Long)9L));
    temp_5 = g2int_make_partial_buffer_info(FIX((SI_Long)4096L),
	    FIX((SI_Long)1024L),FIX((SI_Long)11L),FIX((SI_Long)10L));
    temp_6 = g2int_make_partial_buffer_info(FIX((SI_Long)8192L),
	    FIX((SI_Long)2048L),FIX((SI_Long)13L),FIX((SI_Long)11L));
    temp_7 = g2int_make_partial_buffer_info(FIX((SI_Long)16384L),
	    FIX((SI_Long)4096L),FIX((SI_Long)15L),FIX((SI_Long)12L));
    temp_8 = g2int_make_partial_buffer_info(FIX((SI_Long)32768L),
	    FIX((SI_Long)8192L),FIX((SI_Long)17L),FIX((SI_Long)13L));
    temp_9 = g2int_make_partial_buffer_info(FIX((SI_Long)65536L),
	    FIX((SI_Long)16384L),FIX((SI_Long)19L),FIX((SI_Long)14L));
    temp_10 = g2int_make_partial_buffer_info(FIX((SI_Long)131072L),
	    FIX((SI_Long)32768L),FIX((SI_Long)21L),FIX((SI_Long)15L));
    temp_11 = g2int_make_partial_buffer_info(FIX((SI_Long)262144L),
	    FIX((SI_Long)65536L),FIX((SI_Long)23L),FIX((SI_Long)16L));
    temp_12 = g2int_make_partial_buffer_info(FIX((SI_Long)524288L),
	    FIX((SI_Long)131072L),FIX((SI_Long)25L),FIX((SI_Long)17L));
    temp_13 = g2int_make_partial_buffer_info(FIX((SI_Long)1048576L),
	    FIX((SI_Long)262144L),FIX((SI_Long)27L),FIX((SI_Long)18L));
    temp_14 = g2int_make_partial_buffer_info(FIX((SI_Long)2097152L),
	    FIX((SI_Long)524288L),FIX((SI_Long)29L),FIX((SI_Long)19L));
    G2int_string_allocation_schemes = list(16,temp,temp_1,temp_2,temp_3,
	    temp_4,temp_5,temp_6,temp_7,temp_8,temp_9,temp_10,temp_11,
	    temp_12,temp_13,temp_14,
	    g2int_make_partial_buffer_info(FIX((SI_Long)4194304L),
	    FIX((SI_Long)1048576L),FIX((SI_Long)31L),FIX((SI_Long)20L)));
    if (G2int_maximum_gensym_string_length == UNBOUND)
	G2int_maximum_gensym_string_length = ltimes(FIX((SI_Long)4L),
		FIX((SI_Long)1048576L));
    string_constant_13 = 
	    STATIC_STRING("Attempting to allocate ~a element string, ~\n   which is beyond the established maximum of ~a.");
    G2int_maximum_gensym_string_length_exceeded_message = string_constant_13;
    AB_package = STATIC_PACKAGE("AB");
    Qg2int_short_simple_gensym_strings = 
	    STATIC_SYMBOL("SHORT-SIMPLE-GENSYM-STRINGS",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qg2int_short_simple_gensym_strings,
	    G2int_short_simple_gensym_strings);
    Qg2int_utilities1 = STATIC_SYMBOL("UTILITIES1",AB_package);
    Kfuncall = STATIC_SYMBOL("FUNCALL",Pkeyword);
    Qg2int_new_short_simple_gensym_string_vector = 
	    STATIC_SYMBOL("NEW-SHORT-SIMPLE-GENSYM-STRING-VECTOR",AB_package);
    SET_SYMBOL_FUNCTION(Qg2int_new_short_simple_gensym_string_vector,
	    STATIC_FUNCTION(g2int_new_short_simple_gensym_string_vector,
	    NIL,FALSE,1,1));
    list_constant_1 = STATIC_LIST((SI_Long)3L,Kfuncall,
	    Qg2int_new_short_simple_gensym_string_vector,Qnil);
    g2int_record_system_variable(Qg2int_short_simple_gensym_strings,
	    Qg2int_utilities1,list_constant_1,Qnil,Qt,Qnil,Qnil);
    Qg2int_long_simple_gensym_strings = 
	    STATIC_SYMBOL("LONG-SIMPLE-GENSYM-STRINGS",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qg2int_long_simple_gensym_strings,
	    G2int_long_simple_gensym_strings);
    Qg2int_new_partial_buffer_gensym_string_vector = 
	    STATIC_SYMBOL("NEW-PARTIAL-BUFFER-GENSYM-STRING-VECTOR",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qg2int_new_partial_buffer_gensym_string_vector,
	    STATIC_FUNCTION(g2int_new_partial_buffer_gensym_string_vector,
	    NIL,FALSE,1,1));
    list_constant_2 = STATIC_CONS(Qnil,Qnil);
    list_constant_3 = STATIC_LIST_STAR((SI_Long)3L,Kfuncall,
	    Qg2int_new_partial_buffer_gensym_string_vector,list_constant_2);
    g2int_record_system_variable(Qg2int_long_simple_gensym_strings,
	    Qg2int_utilities1,list_constant_3,Qnil,Qt,Qnil,Qnil);
    Qg2int_adjustable_gensym_strings = 
	    STATIC_SYMBOL("ADJUSTABLE-GENSYM-STRINGS",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qg2int_adjustable_gensym_strings,
	    G2int_adjustable_gensym_strings);
    g2int_record_system_variable(Qg2int_adjustable_gensym_strings,
	    Qg2int_utilities1,list_constant_3,Qnil,Qt,Qnil,Qnil);
    Qg2int_short_simple_gensym_string_counts = 
	    STATIC_SYMBOL("SHORT-SIMPLE-GENSYM-STRING-COUNTS",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qg2int_short_simple_gensym_string_counts,
	    G2int_short_simple_gensym_string_counts);
    list_constant_4 = STATIC_LIST((SI_Long)3L,Kfuncall,
	    Qg2int_new_short_simple_gensym_string_vector,FIX((SI_Long)0L));
    g2int_record_system_variable(Qg2int_short_simple_gensym_string_counts,
	    Qg2int_utilities1,list_constant_4,Qnil,Qt,Qnil,Qnil);
    Qg2int_long_simple_gensym_string_counts = 
	    STATIC_SYMBOL("LONG-SIMPLE-GENSYM-STRING-COUNTS",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qg2int_long_simple_gensym_string_counts,
	    G2int_long_simple_gensym_string_counts);
    list_constant_5 = STATIC_CONS(FIX((SI_Long)0L),Qnil);
    list_constant_6 = STATIC_LIST_STAR((SI_Long)3L,Kfuncall,
	    Qg2int_new_partial_buffer_gensym_string_vector,list_constant_5);
    g2int_record_system_variable(Qg2int_long_simple_gensym_string_counts,
	    Qg2int_utilities1,list_constant_6,Qnil,Qt,Qnil,Qnil);
    Qg2int_adjustable_gensym_string_counts = 
	    STATIC_SYMBOL("ADJUSTABLE-GENSYM-STRING-COUNTS",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qg2int_adjustable_gensym_string_counts,
	    G2int_adjustable_gensym_string_counts);
    g2int_record_system_variable(Qg2int_adjustable_gensym_string_counts,
	    Qg2int_utilities1,list_constant_6,Qnil,Qt,Qnil,Qnil);
    Qg2int_simple_gensym_string_counter = 
	    STATIC_SYMBOL("SIMPLE-GENSYM-STRING-COUNTER",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qg2int_simple_gensym_string_counter,
	    G2int_simple_gensym_string_counter);
    g2int_record_system_variable(Qg2int_simple_gensym_string_counter,
	    Qg2int_utilities1,FIX((SI_Long)0L),Qnil,Qt,Qnil,Qnil);
    Qg2int_simple_gensym_string_byte_use_counter = 
	    STATIC_SYMBOL("SIMPLE-GENSYM-STRING-BYTE-USE-COUNTER",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qg2int_simple_gensym_string_byte_use_counter,
	    G2int_simple_gensym_string_byte_use_counter);
    g2int_record_system_variable(Qg2int_simple_gensym_string_byte_use_counter,
	    Qg2int_utilities1,FIX((SI_Long)0L),Qnil,Qt,Qnil,Qnil);
    Qg2int_gensym = STATIC_SYMBOL("GENSYM",AB_package);
    Qg2int_simple_gensym_string = STATIC_SYMBOL("SIMPLE-GENSYM-STRING",
	    AB_package);
    if (G2int_log_simple_string_data == UNBOUND)
	G2int_log_simple_string_data = Nil;
    if (G2int_log_simple_string_reclaims == UNBOUND)
	G2int_log_simple_string_reclaims = T;
    if (G2int_min_string_length_to_report == UNBOUND)
	G2int_min_string_length_to_report = FIX((SI_Long)2100L);
    if (G2int_string_report_frequency == UNBOUND)
	G2int_string_report_frequency = FIX((SI_Long)10L);
    if (G2int_string_allocations_until_next_report == UNBOUND)
	G2int_string_allocations_until_next_report = FIX((SI_Long)0L);
    if (G2int_string_reclaims_until_next_report == UNBOUND)
	G2int_string_reclaims_until_next_report = FIX((SI_Long)0L);
    if (G2int_string_chars_to_print == UNBOUND)
	G2int_string_chars_to_print = FIX((SI_Long)200L);
    if (G2int_largest_non_malloced_string_pool_index == UNBOUND)
	G2int_largest_non_malloced_string_pool_index = FIX((SI_Long)-1L);
    if (G2int_string_pool_number_to_malloc == UNBOUND)
	G2int_string_pool_number_to_malloc = FIX((SI_Long)-1L);
    if (G2int_current_custom_reclamation_stampqm == UNBOUND)
	G2int_current_custom_reclamation_stampqm = Nil;
    Qg2int_adjustable_gensym_string_counter = 
	    STATIC_SYMBOL("ADJUSTABLE-GENSYM-STRING-COUNTER",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qg2int_adjustable_gensym_string_counter,
	    G2int_adjustable_gensym_string_counter);
    g2int_record_system_variable(Qg2int_adjustable_gensym_string_counter,
	    Qg2int_utilities1,FIX((SI_Long)0L),Qnil,Qt,Qnil,Qnil);
    Qg2int_adjustable_gensym_string_byte_use_counter = 
	    STATIC_SYMBOL("ADJUSTABLE-GENSYM-STRING-BYTE-USE-COUNTER",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qg2int_adjustable_gensym_string_byte_use_counter,
	    G2int_adjustable_gensym_string_byte_use_counter);
    g2int_record_system_variable(Qg2int_adjustable_gensym_string_byte_use_counter,
	    Qg2int_utilities1,FIX((SI_Long)0L),Qnil,Qt,Qnil,Qnil);
    Qg2int_adjustable_gensym_string = 
	    STATIC_SYMBOL("ADJUSTABLE-GENSYM-STRING",AB_package);
    Qg2int_outputting_to_gensym_string = 
	    STATIC_SYMBOL("OUTPUTTING-TO-GENSYM-STRING",AB_package);
    Qg2int_named_dynamic_extent_description = 
	    STATIC_SYMBOL("NAMED-DYNAMIC-EXTENT-DESCRIPTION",AB_package);
    named_dynamic_extent_description = 
	    g2int_make_named_dynamic_extent_description(Qg2int_outputting_to_gensym_string,
	    Qg2int_utilities1,Nil,Qnil,Qnil,Qnil,Nil);
    g2int_mutate_global_property(Qg2int_outputting_to_gensym_string,
	    named_dynamic_extent_description,
	    Qg2int_named_dynamic_extent_description);
    if (G2int_write_symbols_parsablyqm == UNBOUND)
	G2int_write_symbols_parsablyqm = Nil;
    Qg2int_wide_string = STATIC_SYMBOL("WIDE-STRING",AB_package);
    string_constant_14 = 
	    STATIC_STRING("Trying to write a string longer than 1MB!");
    G2int_extend_current_gensym_string_error_message = string_constant_14;
    if (G2int_calling_tformat_for_give_warningqm == UNBOUND)
	G2int_calling_tformat_for_give_warningqm = Nil;
    if (G2int_write_symbols_in_lower_caseqm == UNBOUND)
	G2int_write_symbols_in_lower_caseqm = Nil;
    string_constant = STATIC_STRING("-9223372036854775808");
    if (G2int_write_strings_parsablyqm == UNBOUND)
	G2int_write_strings_parsablyqm = Nil;
    if (G2int_note_blocks_in_tformat == UNBOUND)
	G2int_note_blocks_in_tformat = Nil;
    if (G2int_tformat_fresh_line_is_newline_p == UNBOUND)
	G2int_tformat_fresh_line_is_newline_p = T;
    if (G2int_in_text_for_item_or_value_p == UNBOUND)
	G2int_in_text_for_item_or_value_p = Nil;
    string_constant_1 = STATIC_STRING(";");
    string_constant_2 = STATIC_STRING(",");
    string_constant_3 = STATIC_STRING(" ");
    string_constant_4 = STATIC_STRING("or");
    string_constant_5 = STATIC_STRING("and");
    list_constant = STATIC_LIST((SI_Long)5L,FIX((SI_Long)32L),
	    FIX((SI_Long)9L),FIX((SI_Long)10L),FIX((SI_Long)10L),
	    FIX((SI_Long)13L));
    Qg2int_gensym_string = STATIC_SYMBOL("GENSYM-STRING",AB_package);
    string_constant_6 = STATIC_STRING("(");
    string_constant_7 = STATIC_STRING(" . ");
    string_constant_8 = STATIC_STRING(")");
    string_constant_9 = STATIC_STRING("none");
    string_constant_10 = STATIC_STRING("~a ");
    string_constant_11 = STATIC_STRING(" ~(~a~) ");
    string_constant_12 = STATIC_STRING("~(~a~)");
    string_constant_15 = STATIC_STRING("G2-DEFSTRUCT-STRUCTURE-NAME");
    if (G2int_the_g2_defstruct_package == UNBOUND)
	G2int_the_g2_defstruct_package = find_package(string_constant_15);
    string_constant_16 = STATIC_STRING("TYPE-DESCRIPTION-G2-STRUCT");
    intern(string_constant_16,G2int_the_g2_defstruct_package);
    Qg2int_type_description_of_unique_type_name_of_gensym_structure = 
	    STATIC_SYMBOL("TYPE-DESCRIPTION-OF-UNIQUE-TYPE-NAME-OF-GENSYM-STRUCTURE",
	    AB_package);
    G2int_type_description_of_unique_type_name_of_gensym_structure_prop = 
	    Qg2int_type_description_of_unique_type_name_of_gensym_structure;
    Qg2int_type_description_of_type = 
	    STATIC_SYMBOL("TYPE-DESCRIPTION-OF-TYPE",AB_package);
    G2int_type_description_of_type_prop = Qg2int_type_description_of_type;
    string_constant_17 = STATIC_STRING("43Dy8l8k00000004ukkkkkkkkkk0kkk0k0");
    if (G2int_the_type_description_of_t == UNBOUND)
	G2int_the_type_description_of_t = 
		g2int_regenerate_optimized_constant(string_constant_17);
    g2int_mutate_global_property(T,G2int_the_type_description_of_t,
	    Qg2int_type_description_of_type);
    G2int_maximum_number_of_structure_methods = FIX((SI_Long)40L);
    if (G2int_table_to_map_structure_id_to_method_name == UNBOUND) {
	gensymed_symbol = G2int_maximum_number_of_structure_methods;
	the_array = make_array(1,gensymed_symbol);
	i = (SI_Long)0L;
	ab_loop_bind_ = IFIX(gensymed_symbol);
      next_loop:
	if (i >= ab_loop_bind_)
	    goto end_loop;
	ISVREF(the_array,i) = Nil;
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:;
	G2int_table_to_map_structure_id_to_method_name = the_array;
    }
    string_constant_18 = 
	    STATIC_STRING("Call to structure method where none was defined.");
    G2int_undefined_structure_method_message = string_constant_18;
    Qg2int_undefined_structure_method_function = 
	    STATIC_SYMBOL("UNDEFINED-STRUCTURE-METHOD-FUNCTION",AB_package);
    SET_SYMBOL_FUNCTION(Qg2int_undefined_structure_method_function,
	    STATIC_FUNCTION(g2int_undefined_structure_method_function,NIL,
	    TRUE,1,12));
    Qg2int_clean_up_workstation_context = 
	    STATIC_SYMBOL("CLEAN-UP-WORKSTATION-CONTEXT",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)1L)) = Qg2int_clean_up_workstation_context;
    Qg2int_track_mouse_into_spot = STATIC_SYMBOL("TRACK-MOUSE-INTO-SPOT",
	    AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)2L)) = Qg2int_track_mouse_into_spot;
    Qg2int_reclaim_structure = STATIC_SYMBOL("RECLAIM-STRUCTURE",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)3L)) = Qg2int_reclaim_structure;
    Qg2int_valid_workstation_context_p = 
	    STATIC_SYMBOL("VALID-WORKSTATION-CONTEXT-P",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)4L)) = Qg2int_valid_workstation_context_p;
    Qg2int_setup_workstation_context = 
	    STATIC_SYMBOL("SETUP-WORKSTATION-CONTEXT",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)5L)) = Qg2int_setup_workstation_context;
    Qg2int_suspend_workstation_context = 
	    STATIC_SYMBOL("SUSPEND-WORKSTATION-CONTEXT",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)6L)) = Qg2int_suspend_workstation_context;
    Qg2int_resume_workstation_context = 
	    STATIC_SYMBOL("RESUME-WORKSTATION-CONTEXT",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)7L)) = Qg2int_resume_workstation_context;
    Qg2int_read_character_code = STATIC_SYMBOL("READ-CHARACTER-CODE",
	    AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)8L)) = Qg2int_read_character_code;
    Qg2int_clean_up_structure = STATIC_SYMBOL("CLEAN-UP-STRUCTURE",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)9L)) = Qg2int_clean_up_structure;
    Qg2int_initialize_text_sequence_string = 
	    STATIC_SYMBOL("INITIALIZE-TEXT-SEQUENCE-STRING",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)10L)) = 
	    Qg2int_initialize_text_sequence_string;
    Qg2int_read_character_from_text_sequence = 
	    STATIC_SYMBOL("READ-CHARACTER-FROM-TEXT-SEQUENCE",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)11L)) = 
	    Qg2int_read_character_from_text_sequence;
    Qg2int_transcode_character = STATIC_SYMBOL("TRANSCODE-CHARACTER",
	    AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)12L)) = Qg2int_transcode_character;
    Qg2int_twrite_unicode_from_transcoder = 
	    STATIC_SYMBOL("TWRITE-UNICODE-FROM-TRANSCODER",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)13L)) = 
	    Qg2int_twrite_unicode_from_transcoder;
    Qg2int_transcode_as_text_string = 
	    STATIC_SYMBOL("TRANSCODE-AS-TEXT-STRING",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)14L)) = Qg2int_transcode_as_text_string;
    Qg2int_export_character = STATIC_SYMBOL("EXPORT-CHARACTER",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)15L)) = Qg2int_export_character;
    Qg2int_export_as_string = STATIC_SYMBOL("EXPORT-AS-STRING",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)16L)) = Qg2int_export_as_string;
    Qg2int_twrite_for_export_from_transcoder = 
	    STATIC_SYMBOL("TWRITE-FOR-EXPORT-FROM-TRANSCODER",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)17L)) = 
	    Qg2int_twrite_for_export_from_transcoder;
    Qg2int_map_code_to_unicode = STATIC_SYMBOL("MAP-CODE-TO-UNICODE",
	    AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)18L)) = Qg2int_map_code_to_unicode;
    Qg2int_map_unicode_to_code_if_any = 
	    STATIC_SYMBOL("MAP-UNICODE-TO-CODE-IF-ANY",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)19L)) = Qg2int_map_unicode_to_code_if_any;
    Qg2int_handle_read_event = STATIC_SYMBOL("HANDLE-READ-EVENT",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)20L)) = Qg2int_handle_read_event;
    Qg2int_handle_write_event = STATIC_SYMBOL("HANDLE-WRITE-EVENT",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)21L)) = Qg2int_handle_write_event;
    Qg2int_handle_network_connect = STATIC_SYMBOL("HANDLE-NETWORK-CONNECT",
	    AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)22L)) = Qg2int_handle_network_connect;
    Qg2int_handle_network_accept = STATIC_SYMBOL("HANDLE-NETWORK-ACCEPT",
	    AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)23L)) = Qg2int_handle_network_accept;
    Qg2int_handle_network_close = STATIC_SYMBOL("HANDLE-NETWORK-CLOSE",
	    AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)24L)) = Qg2int_handle_network_close;
    Qg2int_handle_g2_reset = STATIC_SYMBOL("HANDLE-G2-RESET",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)25L)) = Qg2int_handle_g2_reset;
    Qg2int_get_cached_explanation_evaled_variables_if_any = 
	    STATIC_SYMBOL("GET-CACHED-EXPLANATION-EVALED-VARIABLES-IF-ANY",
	    AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)26L)) = 
	    Qg2int_get_cached_explanation_evaled_variables_if_any;
    Qg2int_make_cached_explanation_node = 
	    STATIC_SYMBOL("MAKE-CACHED-EXPLANATION-NODE",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)27L)) = Qg2int_make_cached_explanation_node;
    Qg2int_return_cached_explanation_if_valid = 
	    STATIC_SYMBOL("RETURN-CACHED-EXPLANATION-IF-VALID",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)28L)) = 
	    Qg2int_return_cached_explanation_if_valid;
    Qg2int_export_cached_explanation_node = 
	    STATIC_SYMBOL("EXPORT-CACHED-EXPLANATION-NODE",AB_package);
    svref_arg_1 = G2int_table_to_map_structure_id_to_method_name;
    SVREF(svref_arg_1,FIX((SI_Long)29L)) = 
	    Qg2int_export_cached_explanation_node;
}
