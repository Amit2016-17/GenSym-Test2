/* stkcts.c
 * Input file:  stack-acts.lisp
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
 */

#include "user.h"
#include "stkcts.h"


static Object array_constant;      /* # */

static Object array_constant_1;    /* # */

static Object array_constant_2;    /* # */

static Object Qtime_stamp;         /* time-stamp */

static Object array_constant_3;    /* # */

/* PPRINT-CONCLUDE-ACTION */
Object pprint_conclude_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    Object expiration_qm, collection_qm;
    char stack_args_ok_qm;

    x_note_fn_call(210,0);
    stack_args_ok_qm = FIXNUM_EQ(top_of_stack,Cached_top_of_stack);
    expiration_qm = stack_args_ok_qm ? ISVREF(stack,
	    IFIX(FIXNUM_SUB1(top_of_stack))) : Qnil;
    collection_qm = stack_args_ok_qm ? ISVREF(stack,IFIX(top_of_stack)) : Qnil;
    twrite_beginning_of_wide_string(array_constant,FIX((SI_Long)14L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)4L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_1,FIX((SI_Long)3L));
    write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)4L),stack,top_of_stack);
    if (expiration_qm || collection_qm) {
	twrite_beginning_of_wide_string(array_constant_2,FIX((SI_Long)17L));
	if (expiration_qm && (FIXNUMP(expiration_qm) || 
		INLINE_DOUBLE_FLOAT_VECTOR_P(expiration_qm) != (SI_Long)0L 
		&& IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(expiration_qm)) == 
		(SI_Long)1L || INLINE_LONG_VECTOR_P(expiration_qm) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(expiration_qm)) == (SI_Long)1L))
	    print_constant(2,evaluation_quantity_value(expiration_qm),
		    Qtime_stamp);
	else
	    write_stack_argument(FIX((SI_Long)3L),FIX((SI_Long)4L),stack,
		    top_of_stack);
	twrite_beginning_of_wide_string(array_constant_3,FIX((SI_Long)22L));
	if (collection_qm && (FIXNUMP(collection_qm) || 
		INLINE_DOUBLE_FLOAT_VECTOR_P(collection_qm) != (SI_Long)0L 
		&& IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(collection_qm)) == 
		(SI_Long)1L || INLINE_LONG_VECTOR_P(collection_qm) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(collection_qm)) == (SI_Long)1L))
	    return print_constant(2,
		    evaluation_quantity_value(collection_qm),Qtime_stamp);
	else
	    return write_stack_argument(FIX((SI_Long)4L),FIX((SI_Long)4L),
		    stack,top_of_stack);
    }
    else
	return VALUES_1(Nil);
}

static Object array_constant_4;    /* # */

/* PPRINT-COMPARE-AND-SWAP-ACTION */
Object pprint_compare_and_swap_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    Object old_value_qm;
    char stack_args_ok_qm;

    x_note_fn_call(210,1);
    stack_args_ok_qm = FIXNUM_EQ(top_of_stack,Cached_top_of_stack);
    old_value_qm = stack_args_ok_qm ? ISVREF(stack,IFIX(top_of_stack)) : Qnil;
    twrite_beginning_of_wide_string(array_constant,FIX((SI_Long)14L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)3L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_1,FIX((SI_Long)3L));
    write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)3L),stack,top_of_stack);
    if (old_value_qm) {
	twrite_beginning_of_wide_string(array_constant_4,FIX((SI_Long)9L));
	return write_stack_argument(FIX((SI_Long)3L),FIX((SI_Long)3L),
		stack,top_of_stack);
    }
    else
	return VALUES_1(Nil);
}

static Object array_constant_5;    /* # */

static Object array_constant_6;    /* # */

static Object array_constant_7;    /* # */

/* PPRINT-CONCLUDE-ATTRIBUTE-ACTION */
Object pprint_conclude_attribute_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    Object class_qualifier_qm;
    char stack_args_ok_qm;

    x_note_fn_call(210,2);
    stack_args_ok_qm = FIXNUM_EQ(top_of_stack,Cached_top_of_stack);
    class_qualifier_qm = stack_args_ok_qm ? ISVREF(stack,
	    IFIX(top_of_stack) - (SI_Long)3L) : Nil;
    twrite_beginning_of_wide_string(array_constant_5,FIX((SI_Long)18L));
    if (class_qualifier_qm) {
	twrite_symbol(1,class_qualifier_qm);
	twrite_beginning_of_wide_string(array_constant_6,FIX((SI_Long)2L));
    }
    write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)4L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_7,FIX((SI_Long)4L));
    write_stack_argument(FIX((SI_Long)3L),FIX((SI_Long)4L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_1,FIX((SI_Long)3L));
    return write_stack_argument(FIX((SI_Long)4L),FIX((SI_Long)4L),stack,
	    top_of_stack);
}

static Object array_constant_8;    /* # */

static Object array_constant_9;    /* # */

static Object array_constant_10;   /* # */

/* PPRINT-MOVE-ACTION */
Object pprint_move_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,3);
    twrite_beginning_of_wide_string(array_constant_8,FIX((SI_Long)5L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)3L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_9,FIX((SI_Long)5L));
    write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)3L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_10,FIX((SI_Long)2L));
    write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)3L),stack,top_of_stack);
    return twrite_character(FIX((SI_Long)41L));
}

static Object array_constant_11;   /* # */

/* PPRINT-SET-POSITION-ACTION */
Object pprint_set_position_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,4);
    twrite_beginning_of_wide_string(array_constant_8,FIX((SI_Long)5L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)3L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_11,FIX((SI_Long)5L));
    write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)3L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_10,FIX((SI_Long)2L));
    write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)3L),stack,top_of_stack);
    return twrite_character(FIX((SI_Long)41L));
}

static Object array_constant_12;   /* # */

static Object array_constant_13;   /* # */

static Object array_constant_14;   /* # */

/* PPRINT-ROTATE-ACTION */
Object pprint_rotate_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,5);
    twrite_beginning_of_wide_string(array_constant_12,FIX((SI_Long)7L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)2L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_13,FIX((SI_Long)4L));
    write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)2L),stack,top_of_stack);
    return twrite_beginning_of_wide_string(array_constant_14,FIX((SI_Long)8L));
}

static Object array_constant_15;   /* # */

/* PPRINT-SET-HEADING-ACTION */
Object pprint_set_heading_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,6);
    twrite_beginning_of_wide_string(array_constant_12,FIX((SI_Long)7L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)2L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_15,FIX((SI_Long)16L));
    write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)2L),stack,top_of_stack);
    return twrite_beginning_of_wide_string(array_constant_14,FIX((SI_Long)8L));
}

static Object array_constant_16;   /* # */

/* PPRINT-CONCLUDE-HAS-NO-CURRENT-VALUE-ACTION */
Object pprint_conclude_has_no_current_value_action(description,pc,
	    byte_code_body,constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,7);
    twrite_beginning_of_wide_string(array_constant,FIX((SI_Long)14L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,top_of_stack);
    return twrite_beginning_of_wide_string(array_constant_16,
	    FIX((SI_Long)21L));
}

static Object array_constant_17;   /* # */

/* PPRINT-CONCLUDE-HAS-NO-VALUE-ACTION */
Object pprint_conclude_has_no_value_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,8);
    twrite_beginning_of_wide_string(array_constant,FIX((SI_Long)14L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,top_of_stack);
    return twrite_beginning_of_wide_string(array_constant_17,
	    FIX((SI_Long)13L));
}

static Object array_constant_18;   /* # */

/* PPRINT-FOCUS-ACTION */
Object pprint_focus_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,9);
    twrite_beginning_of_wide_string(array_constant_18,FIX((SI_Long)9L));
    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,
	    top_of_stack);
}

static Object array_constant_19;   /* # */

/* PPRINT-FOCUS-WITH-WAIT-ACTION */
Object pprint_focus_with_wait_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,10);
    twrite_beginning_of_wide_string(array_constant_18,FIX((SI_Long)9L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,top_of_stack);
    return twrite_beginning_of_wide_string(array_constant_19,
	    FIX((SI_Long)21L));
}

static Object array_constant_20;   /* # */

static Object array_constant_21;   /* # */

/* PPRINT-CHANGE-ITEM-COLOR-ACTION */
Object pprint_change_item_color_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,11);
    twrite_beginning_of_wide_string(array_constant_20,FIX((SI_Long)11L));
    write_stack_argument(FIX((SI_Long)3L),FIX((SI_Long)3L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_7,FIX((SI_Long)4L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)3L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_21,FIX((SI_Long)4L));
    return write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)3L),stack,
	    top_of_stack);
}

static Object array_constant_22;   /* # */

static Object array_constant_23;   /* # */

/* PPRINT-CHANGE-ITEM-COLOR-PATTERN-ACTION */
Object pprint_change_item_color_pattern_action(description,pc,
	    byte_code_body,constant_vector,stack,top_of_stack,arg_count,
	    result_count)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack, arg_count, result_count;
{
    Object color_arg_count_plus_one, first_loop_iteration_qm;
    Object ab_loop_iter_flag_;
    SI_Long index_1, ab_loop_bind_;

    x_note_fn_call(210,12);
    if (FIXNUM_EQ(top_of_stack,Cached_top_of_stack)) {
	color_arg_count_plus_one = arg_count;
	twrite_beginning_of_wide_string(array_constant_22,FIX((SI_Long)28L));
	write_stack_argument(FIX((SI_Long)1L),color_arg_count_plus_one,
		stack,top_of_stack);
	twrite_beginning_of_wide_string(array_constant_21,FIX((SI_Long)4L));
	index_1 = (SI_Long)2L;
	ab_loop_bind_ = IFIX(color_arg_count_plus_one);
	first_loop_iteration_qm = T;
	ab_loop_iter_flag_ = T;
      next_loop:
	if (index_1 >= ab_loop_bind_)
	    goto end_loop;
	if ( !TRUEP(ab_loop_iter_flag_))
	    first_loop_iteration_qm = Nil;
	if ( !TRUEP(first_loop_iteration_qm))
	    twrite_beginning_of_wide_string(array_constant_10,
		    FIX((SI_Long)2L));
	write_stack_argument(FIX(index_1),color_arg_count_plus_one,stack,
		top_of_stack);
	twrite_beginning_of_wide_string(array_constant_1,FIX((SI_Long)3L));
	index_1 = index_1 + (SI_Long)1L;
	write_stack_argument(FIX(index_1),color_arg_count_plus_one,stack,
		top_of_stack);
	ab_loop_iter_flag_ = Nil;
	index_1 = index_1 + (SI_Long)1L;
	goto next_loop;
      end_loop:
	return VALUES_1(Qnil);
    }
    else
	return twrite_beginning_of_wide_string(array_constant_23,
		FIX((SI_Long)51L));
}

static Object array_constant_24;   /* # */

static Object array_constant_25;   /* # */

/* PPRINT-HIDE-ACTION */
Object pprint_hide_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,13);
    twrite_beginning_of_wide_string(array_constant_24,FIX((SI_Long)5L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)2L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_25,FIX((SI_Long)4L));
    return write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)2L),stack,
	    top_of_stack);
}

static Object array_constant_26;   /* # */

/* PPRINT-ACTIVATE-ACTION */
Object pprint_activate_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,14);
    twrite_beginning_of_wide_string(array_constant_26,FIX((SI_Long)29L));
    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,
	    top_of_stack);
}

static Object array_constant_27;   /* # */

/* PPRINT-DEACTIVATE-ACTION */
Object pprint_deactivate_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,15);
    twrite_beginning_of_wide_string(array_constant_27,FIX((SI_Long)31L));
    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,
	    top_of_stack);
}

static Object array_constant_28;   /* # */

/* PPRINT-SET-ACTION */
Object pprint_set_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,16);
    twrite_beginning_of_wide_string(array_constant_28,FIX((SI_Long)4L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)2L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_21,FIX((SI_Long)4L));
    return write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)2L),stack,
	    top_of_stack);
}

static Object array_constant_29;   /* # */

static Object array_constant_30;   /* # */

static Object array_constant_31;   /* # */

static Object array_constant_32;   /* # */

static Object array_constant_33;   /* # */

static Object Qseconds;            /* seconds */

static Object array_constant_34;   /* # */

static Object array_constant_35;   /* # */

/* PPRINT-INFORM-ACTION */
Object pprint_inform_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    Object destination_qm, duration_qm;

    x_note_fn_call(210,17);
    if (FIXNUM_EQ(top_of_stack,Cached_top_of_stack)) {
	destination_qm = ISVREF(stack,IFIX(top_of_stack) - (SI_Long)5L);
	duration_qm = ISVREF(stack,IFIX(top_of_stack) - (SI_Long)3L);
	twrite_beginning_of_wide_string(array_constant_29,FIX((SI_Long)7L));
	if ( !TRUEP(destination_qm))
	    twrite_beginning_of_wide_string(array_constant_30,
		    FIX((SI_Long)12L));
	else
	    write_stored_value(destination_qm);
	twrite_beginning_of_wide_string(array_constant_25,FIX((SI_Long)4L));
	write_stack_argument(FIX((SI_Long)4L),FIX((SI_Long)6L),stack,
		top_of_stack);
	twrite_beginning_of_wide_string(array_constant_31,FIX((SI_Long)7L));
	write_stack_argument(FIX((SI_Long)5L),FIX((SI_Long)6L),stack,
		top_of_stack);
	twrite_beginning_of_wide_string(array_constant_32,FIX((SI_Long)7L));
	write_stack_argument(FIX((SI_Long)6L),FIX((SI_Long)6L),stack,
		top_of_stack);
	twrite_beginning_of_wide_string(array_constant_33,FIX((SI_Long)14L));
	if (duration_qm && (FIXNUMP(duration_qm) || 
		INLINE_DOUBLE_FLOAT_VECTOR_P(duration_qm) != (SI_Long)0L 
		&& IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(duration_qm)) == 
		(SI_Long)1L || INLINE_LONG_VECTOR_P(duration_qm) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(duration_qm)) == (SI_Long)1L))
	    print_constant(2,evaluation_quantity_value(duration_qm),Qseconds);
	else
	    write_stack_argument(FIX((SI_Long)3L),FIX((SI_Long)6L),stack,
		    top_of_stack);
	twrite_beginning_of_wide_string(array_constant_34,FIX((SI_Long)6L));
	return write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)6L),
		stack,top_of_stack);
    }
    else
	return twrite_beginning_of_wide_string(array_constant_35,
		FIX((SI_Long)30L));
}

static Object array_constant_36;   /* # */

static Object array_constant_37;   /* # */

static Object array_constant_38;   /* # */

/* PPRINT-ADD-RELATION-ACTION */
Object pprint_add_relation_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    Object now_case;

    x_note_fn_call(210,18);
    if (FIXNUM_EQ(top_of_stack,Cached_top_of_stack)) {
	now_case = ISVREF(stack,IFIX(top_of_stack));
	twrite_beginning_of_wide_string(array_constant,FIX((SI_Long)14L));
	write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)4L),stack,
		top_of_stack);
	if (FIXNUM_GE(M_CAR(now_case),Truth))
	    twrite_beginning_of_wide_string(array_constant_36,
		    FIX((SI_Long)8L));
	else
	    twrite_beginning_of_wide_string(array_constant_37,
		    FIX((SI_Long)4L));
	write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)4L),stack,
		top_of_stack);
	twrite_character(FIX((SI_Long)32L));
	return write_stack_argument(FIX((SI_Long)3L),FIX((SI_Long)4L),
		stack,top_of_stack);
    }
    else
	return twrite_beginning_of_wide_string(array_constant_38,
		FIX((SI_Long)41L));
}

static Object array_constant_39;   /* # */

/* PPRINT-REMOVE-RELATION-ACTION */
Object pprint_remove_relation_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,19);
    twrite_beginning_of_wide_string(array_constant,FIX((SI_Long)14L));
    write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)3L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_39,FIX((SI_Long)8L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)3L),stack,top_of_stack);
    twrite_character(FIX((SI_Long)32L));
    return write_stack_argument(FIX((SI_Long)3L),FIX((SI_Long)3L),stack,
	    top_of_stack);
}

static Object array_constant_40;   /* # */

/* PPRINT-CREATE-ACTION */
Object pprint_create_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,20);
    twrite_beginning_of_wide_string(array_constant_40,FIX((SI_Long)12L));
    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,
	    top_of_stack);
}

static Object array_constant_41;   /* # */

/* PPRINT-DELETE-ACTION */
Object pprint_delete_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,21);
    twrite_beginning_of_wide_string(array_constant_41,FIX((SI_Long)7L));
    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)2L),stack,
	    top_of_stack);
}

static Object array_constant_42;   /* # */

static Object array_constant_43;   /* # */

static Object array_constant_44;   /* # */

static Object array_constant_45;   /* # */

/* PPRINT-TRANSFER-ACTION */
Object pprint_transfer_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    Object workspace_qm;

    x_note_fn_call(210,22);
    if (FIXNUM_EQ(top_of_stack,Cached_top_of_stack)) {
	workspace_qm = ISVREF(stack,IFIX(top_of_stack) - (SI_Long)2L);
	twrite_beginning_of_wide_string(array_constant_42,FIX((SI_Long)9L));
	write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)4L),stack,
		top_of_stack);
	if ( !TRUEP(workspace_qm))
	    return twrite_beginning_of_wide_string(array_constant_43,
		    FIX((SI_Long)4L));
	else {
	    twrite_beginning_of_wide_string(array_constant_21,
		    FIX((SI_Long)4L));
	    write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)4L),stack,
		    top_of_stack);
	    twrite_beginning_of_wide_string(array_constant_44,
		    FIX((SI_Long)5L));
	    write_stack_argument(FIX((SI_Long)3L),FIX((SI_Long)4L),stack,
		    top_of_stack);
	    twrite_beginning_of_wide_string(array_constant_10,
		    FIX((SI_Long)2L));
	    write_stack_argument(FIX((SI_Long)4L),FIX((SI_Long)4L),stack,
		    top_of_stack);
	    return twrite_character(FIX((SI_Long)41L));
	}
    }
    else
	return twrite_beginning_of_wide_string(array_constant_45,
		FIX((SI_Long)32L));
}

/* PPRINT-CHANGE-SYSTEM-ATTRIBUTE-ACTION */
Object pprint_change_system_attribute_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,23);
    twrite_beginning_of_wide_string(array_constant_20,FIX((SI_Long)11L));
    write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)3L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_7,FIX((SI_Long)4L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)3L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_21,FIX((SI_Long)4L));
    return write_stack_argument(FIX((SI_Long)3L),FIX((SI_Long)3L),stack,
	    top_of_stack);
}

static Object array_constant_46;   /* # */

/* PPRINT-CHANGE-THE-TEXT-OF-ATTRIBUTE-ACTION */
Object pprint_change_the_text_of_attribute_action(description,pc,
	    byte_code_body,constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,24);
    twrite_beginning_of_wide_string(array_constant_46,FIX((SI_Long)19L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)2L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_21,FIX((SI_Long)4L));
    return write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)2L),stack,
	    top_of_stack);
}

static Object array_constant_47;   /* # */

static Object array_constant_48;   /* # */

static Object array_constant_49;   /* # */

/* PPRINT-CHANGE-NTH-ELEMENT-ACTION */
Object pprint_change_nth_element_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,25);
    twrite_beginning_of_wide_string(array_constant_47,FIX((SI_Long)7L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)3L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_48,FIX((SI_Long)2L));
    write_stack_argument(FIX((SI_Long)3L),FIX((SI_Long)3L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_49,FIX((SI_Long)4L));
    return write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)3L),stack,
	    top_of_stack);
}

static Object array_constant_50;   /* # */

static Object Qbeginning;          /* beginning */

static Object array_constant_51;   /* # */

static Object Qend;                /* end */

static Object array_constant_52;   /* # */

static Object Qbefore;             /* before */

static Object array_constant_53;   /* # */

static Object array_constant_54;   /* # */

static Object Qafter;              /* after */

static Object array_constant_55;   /* # */

static Object array_constant_56;   /* # */

static Object string_constant;     /* "~NT" */

static Object array_constant_57;   /* # */

static Object array_constant_58;   /* # */

/* PPRINT-G2-LIST-INSERT-ACTION */
Object pprint_g2_list_insert_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    Object element_type_qm, insert_type;
    char stack_args_ok_qm;

    x_note_fn_call(210,26);
    stack_args_ok_qm = FIXNUM_EQ(top_of_stack,Cached_top_of_stack);
    element_type_qm = stack_args_ok_qm ? ISVREF(stack,IFIX(top_of_stack) - 
	    (SI_Long)3L) : Qnil;
    if (stack_args_ok_qm) {
	insert_type = ISVREF(stack,IFIX(FIXNUM_SUB1(top_of_stack)));
	twrite_beginning_of_wide_string(array_constant_50,FIX((SI_Long)7L));
	write_stack_argument(FIX((SI_Long)3L),FIX((SI_Long)5L),stack,
		top_of_stack);
	if (EQ(insert_type,Qbeginning))
	    twrite_beginning_of_wide_string(array_constant_51,
		    FIX((SI_Long)20L));
	else if (EQ(insert_type,Qend))
	    twrite_beginning_of_wide_string(array_constant_52,
		    FIX((SI_Long)14L));
	else if (EQ(insert_type,Qbefore)) {
	    twrite_beginning_of_wide_string(array_constant_53,
		    FIX((SI_Long)8L));
	    write_stack_argument(FIX((SI_Long)5L),FIX((SI_Long)5L),stack,
		    top_of_stack);
	    twrite_beginning_of_wide_string(array_constant_54,
		    FIX((SI_Long)3L));
	}
	else if (EQ(insert_type,Qafter)) {
	    twrite_beginning_of_wide_string(array_constant_55,
		    FIX((SI_Long)7L));
	    write_stack_argument(FIX((SI_Long)5L),FIX((SI_Long)5L),stack,
		    top_of_stack);
	    twrite_beginning_of_wide_string(array_constant_54,
		    FIX((SI_Long)3L));
	}
	else
	    twrite_beginning_of_wide_string(array_constant_54,
		    FIX((SI_Long)3L));
	twrite_beginning_of_wide_string(array_constant_56,FIX((SI_Long)5L));
	tformat(2,string_constant,element_type_qm);
	twrite_beginning_of_wide_string(array_constant_57,FIX((SI_Long)6L));
	return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)5L),
		stack,top_of_stack);
    }
    else {
	twrite_beginning_of_wide_string(array_constant_50,FIX((SI_Long)7L));
	write_stack_argument(FIX((SI_Long)3L),FIX((SI_Long)5L),stack,
		top_of_stack);
	twrite_beginning_of_wide_string(array_constant_58,FIX((SI_Long)4L));
	return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)5L),
		stack,top_of_stack);
    }
}

/* PPRINT-G2-LIST-INSERT-ITEM-OR-VALUE-ACTION */
Object pprint_g2_list_insert_item_or_value_action(description,pc,
	    byte_code_body,constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    Object insert_type;

    x_note_fn_call(210,27);
    if (FIXNUM_EQ(top_of_stack,Cached_top_of_stack)) {
	insert_type = ISVREF(stack,IFIX(FIXNUM_SUB1(top_of_stack)));
	twrite_beginning_of_wide_string(array_constant_50,FIX((SI_Long)7L));
	write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)4L),stack,
		top_of_stack);
	if (EQ(insert_type,Qbeginning))
	    twrite_beginning_of_wide_string(array_constant_51,
		    FIX((SI_Long)20L));
	else if (EQ(insert_type,Qend))
	    twrite_beginning_of_wide_string(array_constant_52,
		    FIX((SI_Long)14L));
	else if (EQ(insert_type,Qbefore)) {
	    twrite_beginning_of_wide_string(array_constant_53,
		    FIX((SI_Long)8L));
	    write_stack_argument(FIX((SI_Long)4L),FIX((SI_Long)4L),stack,
		    top_of_stack);
	    twrite_beginning_of_wide_string(array_constant_54,
		    FIX((SI_Long)3L));
	}
	else if (EQ(insert_type,Qafter)) {
	    twrite_beginning_of_wide_string(array_constant_55,
		    FIX((SI_Long)7L));
	    write_stack_argument(FIX((SI_Long)4L),FIX((SI_Long)4L),stack,
		    top_of_stack);
	    twrite_beginning_of_wide_string(array_constant_58,
		    FIX((SI_Long)4L));
	}
	else
	    twrite_beginning_of_wide_string(array_constant_58,
		    FIX((SI_Long)4L));
	return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)4L),
		stack,top_of_stack);
    }
    else {
	twrite_beginning_of_wide_string(array_constant_50,FIX((SI_Long)7L));
	write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)4L),stack,
		top_of_stack);
	twrite_beginning_of_wide_string(array_constant_58,FIX((SI_Long)4L));
	return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)4L),
		stack,top_of_stack);
    }
}

static Object array_constant_59;   /* # */

static Object array_constant_60;   /* # */

static Object array_constant_61;   /* # */

static Object array_constant_62;   /* # */

static Object Qelement;            /* element */

static Object array_constant_63;   /* # */

/* PPRINT-G2-LIST-REMOVE-ACTION */
Object pprint_g2_list_remove_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    Object removal_type_arg, element_type_qm;
    char stack_args_ok_qm;

    x_note_fn_call(210,28);
    stack_args_ok_qm = FIXNUM_EQ(top_of_stack,Cached_top_of_stack);
    if (stack_args_ok_qm) {
	removal_type_arg = ISVREF(stack,IFIX(FIXNUM_SUB1(top_of_stack)));
	element_type_qm = stack_args_ok_qm ? ISVREF(stack,
		IFIX(top_of_stack) - (SI_Long)2L) : Qnil;
	removal_type_arg = removal_type_arg && SYMBOLP(removal_type_arg) ? 
		removal_type_arg : removal_type_arg;
	twrite_beginning_of_wide_string(array_constant_59,FIX((SI_Long)7L));
	if (EQ(removal_type_arg,Qfirst)) {
	    twrite_beginning_of_wide_string(array_constant_60,
		    FIX((SI_Long)10L));
	    tformat(2,string_constant,element_type_qm);
	    twrite_beginning_of_wide_string(array_constant_61,
		    FIX((SI_Long)6L));
	    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)4L),
		    stack,top_of_stack);
	}
	else if (EQ(removal_type_arg,Qlast)) {
	    twrite_beginning_of_wide_string(array_constant_62,
		    FIX((SI_Long)9L));
	    tformat(2,string_constant,element_type_qm);
	    twrite_beginning_of_wide_string(array_constant_61,
		    FIX((SI_Long)6L));
	    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)4L),
		    stack,top_of_stack);
	}
	else if (EQ(removal_type_arg,Qelement)) {
	    write_stack_argument(FIX((SI_Long)4L),FIX((SI_Long)4L),stack,
		    top_of_stack);
	    twrite_beginning_of_wide_string(array_constant_63,
		    FIX((SI_Long)10L));
	    tformat(2,string_constant,element_type_qm);
	    twrite_beginning_of_wide_string(array_constant_57,
		    FIX((SI_Long)6L));
	    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)4L),
		    stack,top_of_stack);
	}
	else
	    return VALUES_1(Qnil);
    }
    else {
	twrite_beginning_of_wide_string(array_constant_59,FIX((SI_Long)7L));
	write_stack_argument(FIX((SI_Long)4L),FIX((SI_Long)4L),stack,
		top_of_stack);
	twrite_beginning_of_wide_string(array_constant_61,FIX((SI_Long)6L));
	return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)4L),
		stack,top_of_stack);
    }
}

/* PPRINT-G2-LIST-REMOVE-ITEM-OR-VALUE-ACTION */
Object pprint_g2_list_remove_item_or_value_action(description,pc,
	    byte_code_body,constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    Object removal_type_arg, element_type_qm;
    char stack_args_ok_qm;

    x_note_fn_call(210,29);
    stack_args_ok_qm = FIXNUM_EQ(top_of_stack,Cached_top_of_stack);
    if (stack_args_ok_qm) {
	removal_type_arg = ISVREF(stack,IFIX(top_of_stack));
	element_type_qm = stack_args_ok_qm ? ISVREF(stack,
		IFIX(FIXNUM_SUB1(top_of_stack))) : Qnil;
	removal_type_arg = removal_type_arg && SYMBOLP(removal_type_arg) ? 
		removal_type_arg : removal_type_arg;
	twrite_beginning_of_wide_string(array_constant_59,FIX((SI_Long)7L));
	if (EQ(removal_type_arg,Qfirst)) {
	    twrite_beginning_of_wide_string(array_constant_60,
		    FIX((SI_Long)10L));
	    tformat(2,string_constant,element_type_qm);
	    twrite_beginning_of_wide_string(array_constant_61,
		    FIX((SI_Long)6L));
	    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)4L),
		    stack,top_of_stack);
	}
	else if (EQ(removal_type_arg,Qlast)) {
	    twrite_beginning_of_wide_string(array_constant_62,
		    FIX((SI_Long)9L));
	    tformat(2,string_constant,element_type_qm);
	    twrite_beginning_of_wide_string(array_constant_61,
		    FIX((SI_Long)6L));
	    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)4L),
		    stack,top_of_stack);
	}
	else if (EQ(removal_type_arg,Qelement)) {
	    write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)4L),stack,
		    top_of_stack);
	    twrite_beginning_of_wide_string(array_constant_61,
		    FIX((SI_Long)6L));
	    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)4L),
		    stack,top_of_stack);
	}
	else
	    return VALUES_1(Qnil);
    }
    else {
	twrite_beginning_of_wide_string(array_constant_59,FIX((SI_Long)7L));
	write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)4L),stack,
		top_of_stack);
	twrite_beginning_of_wide_string(array_constant_61,FIX((SI_Long)6L));
	return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)4L),
		stack,top_of_stack);
    }
}

static Object array_constant_64;   /* # */

/* PPRINT-CREATE-EXPLANATION-ACTION */
Object pprint_create_explanation_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,30);
    twrite_beginning_of_wide_string(array_constant_64,FIX((SI_Long)26L));
    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,
	    top_of_stack);
}

static Object array_constant_65;   /* # */

/* PPRINT-UPDATE-ACTION */
Object pprint_update_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,31);
    twrite_beginning_of_wide_string(array_constant_65,FIX((SI_Long)7L));
    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,
	    top_of_stack);
}

static Object array_constant_66;   /* # */

static Object array_constant_67;   /* # */

static Object array_constant_68;   /* # */

static Object array_constant_69;   /* # */

/* PPRINT-START-ACTION */
Object pprint_start_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack,arg_count,result_count)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack, arg_count, result_count;
{
    Object wait_qm, priority_qm, stack_arg_count, first_proc_arg_qm;
    Object ab_loop_iter_flag_;
    SI_Long proc_arg_count, last_proc_arg_index, stack_index, ab_loop_bind_;

    x_note_fn_call(210,32);
    if (FIXNUM_EQ(top_of_stack,Cached_top_of_stack)) {
	wait_qm = ISVREF(stack,IFIX(top_of_stack));
	priority_qm = ISVREF(stack,IFIX(FIXNUM_SUB1(top_of_stack)));
	proc_arg_count = IFIX(arg_count) - (SI_Long)3L;
	stack_arg_count = arg_count;
	twrite_beginning_of_wide_string(array_constant_66,FIX((SI_Long)6L));
	write_stack_argument(FIX((SI_Long)1L),stack_arg_count,stack,
		top_of_stack);
	twrite_beginning_of_wide_string(array_constant_67,FIX((SI_Long)2L));
	last_proc_arg_index = proc_arg_count + (SI_Long)1L;
	stack_index = (SI_Long)2L;
	ab_loop_bind_ = last_proc_arg_index;
	first_proc_arg_qm = T;
	ab_loop_iter_flag_ = T;
      next_loop:
	if (stack_index > ab_loop_bind_)
	    goto end_loop;
	if ( !TRUEP(ab_loop_iter_flag_))
	    first_proc_arg_qm = Nil;
	if ( !TRUEP(first_proc_arg_qm))
	    twrite_beginning_of_wide_string(array_constant_10,
		    FIX((SI_Long)2L));
	write_stack_argument(FIX(stack_index),stack_arg_count,stack,
		top_of_stack);
	ab_loop_iter_flag_ = Nil;
	stack_index = stack_index + (SI_Long)1L;
	goto next_loop;
      end_loop:;
	twrite_character(FIX((SI_Long)41L));
	twrite_beginning_of_wide_string(array_constant_68,FIX((SI_Long)13L));
	write_stored_value(priority_qm);
	twrite_beginning_of_wide_string(array_constant_55,FIX((SI_Long)7L));
	if (wait_qm && (FIXNUMP(wait_qm) || 
		INLINE_DOUBLE_FLOAT_VECTOR_P(wait_qm) != (SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wait_qm)) == (SI_Long)1L || 
		INLINE_LONG_VECTOR_P(wait_qm) != (SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wait_qm)) == (SI_Long)1L))
	    return print_constant(2,evaluation_quantity_value(wait_qm),
		    Qseconds);
	else
	    return write_stored_value(wait_qm);
    }
    else
	return twrite_beginning_of_wide_string(array_constant_69,
		FIX((SI_Long)29L));
}

static Object array_constant_70;   /* # */

static Object array_constant_71;   /* # */

/* PPRINT-START-RPC-ACTION */
Object pprint_start_rpc_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack,arg_count,result_count)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack, arg_count, result_count;
{
    Object icp_interface, wait_qm, priority_qm, stack_arg_count;
    Object first_proc_arg_qm, ab_loop_iter_flag_;
    SI_Long proc_arg_count, last_proc_arg_index, stack_index, ab_loop_bind_;

    x_note_fn_call(210,33);
    if (FIXNUM_EQ(top_of_stack,Cached_top_of_stack)) {
	icp_interface = ISVREF(stack,IFIX(top_of_stack));
	wait_qm = ISVREF(stack,IFIX(FIXNUM_SUB1(top_of_stack)));
	priority_qm = ISVREF(stack,IFIX(top_of_stack) - (SI_Long)2L);
	proc_arg_count = IFIX(arg_count) - (SI_Long)4L;
	stack_arg_count = arg_count;
	twrite_beginning_of_wide_string(array_constant_66,FIX((SI_Long)6L));
	write_stack_argument(FIX((SI_Long)1L),stack_arg_count,stack,
		top_of_stack);
	twrite_beginning_of_wide_string(array_constant_67,FIX((SI_Long)2L));
	last_proc_arg_index = proc_arg_count + (SI_Long)1L;
	stack_index = (SI_Long)2L;
	ab_loop_bind_ = last_proc_arg_index;
	first_proc_arg_qm = T;
	ab_loop_iter_flag_ = T;
      next_loop:
	if (stack_index > ab_loop_bind_)
	    goto end_loop;
	if ( !TRUEP(ab_loop_iter_flag_))
	    first_proc_arg_qm = Nil;
	if ( !TRUEP(first_proc_arg_qm))
	    twrite_beginning_of_wide_string(array_constant_10,
		    FIX((SI_Long)2L));
	write_stack_argument(FIX(stack_index),stack_arg_count,stack,
		top_of_stack);
	ab_loop_iter_flag_ = Nil;
	stack_index = stack_index + (SI_Long)1L;
	goto next_loop;
      end_loop:;
	twrite_character(FIX((SI_Long)41L));
	twrite_beginning_of_wide_string(array_constant_68,FIX((SI_Long)13L));
	write_stored_value(priority_qm);
	twrite_beginning_of_wide_string(array_constant_55,FIX((SI_Long)7L));
	if (wait_qm && (FIXNUMP(wait_qm) || 
		INLINE_DOUBLE_FLOAT_VECTOR_P(wait_qm) != (SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wait_qm)) == (SI_Long)1L || 
		INLINE_LONG_VECTOR_P(wait_qm) != (SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wait_qm)) == (SI_Long)1L))
	    print_constant(2,evaluation_quantity_value(wait_qm),Qseconds);
	else
	    write_stored_value(wait_qm);
	twrite_beginning_of_wide_string(array_constant_70,FIX((SI_Long)8L));
	return write_stored_value(icp_interface);
    }
    else
	return twrite_beginning_of_wide_string(array_constant_71,
		FIX((SI_Long)36L));
}

static Object array_constant_72;   /* # */

static Object array_constant_73;   /* # */

/* PPRINT-CALL-ACTION */
Object pprint_call_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    Object proc_arg_count, stack_arg_count, stack_index, last_proc_arg_index;
    Object first_proc_arg_qm;

    x_note_fn_call(210,34);
    if (FIXNUM_EQ(top_of_stack,Cached_top_of_stack)) {
	proc_arg_count = ISVREF(stack,IFIX(top_of_stack));
	stack_arg_count = ISVREF(stack,IFIX(FIXNUM_SUB1(top_of_stack)));
	stack_arg_count = FIX(IFIX(proc_arg_count) + (SI_Long)4L);
	twrite_beginning_of_wide_string(array_constant_72,FIX((SI_Long)5L));
	write_stack_argument(FIX((SI_Long)1L),stack_arg_count,stack,
		top_of_stack);
	twrite_beginning_of_wide_string(array_constant_67,FIX((SI_Long)2L));
	stack_index = FIX((SI_Long)2L);
	last_proc_arg_index = FIXNUM_ADD1(proc_arg_count);
	first_proc_arg_qm = T;
      next_loop:
	if (FIXNUM_GT(stack_index,last_proc_arg_index))
	    goto end_loop;
	if (first_proc_arg_qm)
	    first_proc_arg_qm = Nil;
	else
	    twrite_beginning_of_wide_string(array_constant_10,
		    FIX((SI_Long)2L));
	write_stack_argument(stack_index,stack_arg_count,stack,top_of_stack);
	stack_index = FIXNUM_ADD1(stack_index);
	goto next_loop;
      end_loop:;
	return twrite_character(FIX((SI_Long)41L));
    }
    else
	return twrite_beginning_of_wide_string(array_constant_73,
		FIX((SI_Long)28L));
}

static Object array_constant_74;   /* # */

/* PPRINT-ABORT-ACTION */
Object pprint_abort_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,35);
    twrite_beginning_of_wide_string(array_constant_74,FIX((SI_Long)6L));
    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,
	    top_of_stack);
}

static Object array_constant_75;   /* # */

/* PPRINT-SHUT-DOWN-G2-ACTION */
Object pprint_shut_down_g2_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,36);
    return twrite_beginning_of_wide_string(array_constant_75,
	    FIX((SI_Long)12L));
}

static Object array_constant_76;   /* # */

/* PPRINT-CREATE-BY-CLONING-ACTION */
Object pprint_create_by_cloning_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,37);
    twrite_beginning_of_wide_string(array_constant_40,FIX((SI_Long)12L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_76,FIX((SI_Long)12L));
    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)2L),stack,
	    top_of_stack);
}

static Object array_constant_77;   /* # */

static Object array_constant_78;   /* # */

/* PPRINT-MAKE-PERMANENT-ACTION */
Object pprint_make_permanent_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,38);
    twrite_beginning_of_wide_string(array_constant_77,FIX((SI_Long)5L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,top_of_stack);
    return twrite_beginning_of_wide_string(array_constant_78,
	    FIX((SI_Long)10L));
}

static Object array_constant_79;   /* # */

/* PPRINT-MAKE-SUBWORKSPACE-ACTION */
Object pprint_make_subworkspace_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,39);
    twrite_beginning_of_wide_string(array_constant_77,FIX((SI_Long)5L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)2L),stack,top_of_stack);
    twrite_beginning_of_wide_string(array_constant_79,FIX((SI_Long)19L));
    return write_stack_argument(FIX((SI_Long)2L),FIX((SI_Long)2L),stack,
	    top_of_stack);
}

static Object array_constant_80;   /* # */

/* PPRINT-PRINT-ACTION */
Object pprint_print_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,40);
    twrite_beginning_of_wide_string(array_constant_80,FIX((SI_Long)6L));
    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,
	    top_of_stack);
}

static Object array_constant_81;   /* # */

/* PPRINT-MAKE-TRANSIENT-ACTION */
Object pprint_make_transient_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,41);
    twrite_beginning_of_wide_string(array_constant_77,FIX((SI_Long)5L));
    write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,top_of_stack);
    return twrite_beginning_of_wide_string(array_constant_81,
	    FIX((SI_Long)10L));
}

static Object array_constant_82;   /* # */

/* PPRINT-START-KB-ACTION */
Object pprint_start_kb_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,42);
    return twrite_beginning_of_wide_string(array_constant_82,FIX((SI_Long)8L));
}

static Object array_constant_83;   /* # */

/* PPRINT-RESUME-KB-ACTION */
Object pprint_resume_kb_action(description,pc,byte_code_body,
	    constant_vector,stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,43);
    return twrite_beginning_of_wide_string(array_constant_83,FIX((SI_Long)9L));
}

static Object array_constant_84;   /* # */

/* PPRINT-ENABLE-ACTION */
Object pprint_enable_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,44);
    twrite_beginning_of_wide_string(array_constant_84,FIX((SI_Long)6L));
    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,
	    top_of_stack);
}

static Object array_constant_85;   /* # */

/* PPRINT-DISABLE-ACTION */
Object pprint_disable_action(description,pc,byte_code_body,constant_vector,
	    stack,top_of_stack)
    Object description, pc, byte_code_body, constant_vector, stack;
    Object top_of_stack;
{
    x_note_fn_call(210,45);
    twrite_beginning_of_wide_string(array_constant_85,FIX((SI_Long)7L));
    return write_stack_argument(FIX((SI_Long)1L),FIX((SI_Long)1L),stack,
	    top_of_stack);
}

static Object Qplace_reference;    /* place-reference */

static Object string_constant_1;   /* "Cannot conclude a value into ~NV." */

static Object Qrecord_block_for_tformat;  /* record-block-for-tformat */

static Object Qdo_not_use;         /* do-not-use */

static Object Qwide_string;        /* wide-string */

static Object string_constant_2;   /* "Failed to conclude." */

static Object float_constant;      /* 0.5 */

static Object string_constant_3;   /* "While executing a CONCLUDE action, could not locate a variable ~
				    *                 or parameter attribute of ~NF which has ~NV in its range of ~
				    *                 possible values."
				    */

static Object string_constant_4;   /* "Cannot conclude a value for ~NF, since it is not a variable or ~
				    *                 parameter."
				    */

/* FUNCALL-CONCLUDE-INST */
Object funcall_conclude_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item_or_place_reference, value_arg, expiration_arg, collection_arg;
    Object component_particulars, item, top_of_stack_1, message_1;
    Object error_message_qm, text_string, snapshots;
    Object snapshots_of_related_blocks, note_blocks_in_tformat;
    Object current_wide_string_list, wide_string_bv16, current_wide_string;
    Object fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object user_provided_expiration_qm, user_provided_collection_qm, place_qm;
    Object sub_class_bit_vector, parameter_qm, temp_1, problem_description_qm;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp_2;
    double temp;
    Declare_special(7);

    x_note_fn_call(210,46);
    item_or_place_reference = ISVREF(local_stack,IFIX(top_of_stack) - 
	    (SI_Long)3L);
    value_arg = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    expiration_arg = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    collection_arg = ISVREF(local_stack,IFIX(top_of_stack));
    if (CONSP(item_or_place_reference) && 
	    EQ(M_CDR(item_or_place_reference),Qplace_reference)) {
	component_particulars = ISVREF(M_CAR(item_or_place_reference),
		(SI_Long)0L);
	item = ISVREF(M_CAR(item_or_place_reference),(SI_Long)1L);
	if ( 
		!TRUEP(evaluation_place_reference_valid_p(item_or_place_reference))) 
		    {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_1,item_or_place_reference);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	error_message_qm = conclude_into_component_dispatch(item,
		component_particulars,value_arg,Nil,component_particulars);
	if (error_message_qm) {
	    if (text_string_p(error_message_qm)) {
		top_of_stack_1 = top_of_stack;
		text_string = Nil;
		snapshots = Nil;
		snapshots_of_related_blocks = Nil;
		note_blocks_in_tformat = 
			SYMBOL_FUNCTION(Qrecord_block_for_tformat);
		PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
		  PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,
			  5);
		    current_wide_string_list = Qdo_not_use;
		    PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,
			    4);
		      wide_string_bv16 = 
			      allocate_byte_vector_16(FIX((SI_Long)2048L + 
			      (SI_Long)3L));
		      bv16_length = 
			      IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wide_string_bv16));
		      aref_arg_2 = bv16_length - (SI_Long)2L;
		      aref_new_value = (SI_Long)2048L & (SI_Long)65535L;
		      UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,
			      aref_new_value);
		      aref_arg_2 = bv16_length - (SI_Long)1L;
		      aref_new_value = (SI_Long)57344L | (SI_Long)0L;
		      UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,
			      aref_new_value);
		      UBYTE_16_ISASET_1(wide_string_bv16,(SI_Long)2048L,
			      (SI_Long)0L);
		      current_wide_string = wide_string_bv16;
		      PUSH_SPECIAL(Current_wide_string,current_wide_string,3);
			fill_pointer_for_current_wide_string = 
				FIX((SI_Long)0L);
			PUSH_SPECIAL(Fill_pointer_for_current_wide_string,fill_pointer_for_current_wide_string,
				2);
			  length_1 = 
				  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
			  total_length_of_current_wide_string = 
				  FIX(UBYTE_16_ISAREF_1(Current_wide_string,
				  length_1 - (SI_Long)2L) + 
				  ((UBYTE_16_ISAREF_1(Current_wide_string,
				  length_1 - (SI_Long)1L) & 
				  (SI_Long)8191L) << (SI_Long)16L));
			  PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
				  1);
			    current_twriting_output_type = Qwide_string;
			    PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
				    0);
			      twrite_general_string(error_message_qm);
			      reclaim_text_string(error_message_qm);
			      text_string = copy_out_current_wide_string();
			    POP_SPECIAL();
			  POP_SPECIAL();
			POP_SPECIAL();
		      POP_SPECIAL();
		    POP_SPECIAL();
		    snapshots = Snapshots_of_related_blocks;
		    Snapshots_of_related_blocks = Nil;
		    if (Snapshots_of_related_blocks) {
			reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
			Snapshots_of_related_blocks = Nil;
		    }
		  POP_SPECIAL();
		POP_SPECIAL();
		message_1 = make_error_text(text_string,snapshots);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    else {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(1,
			string_constant_2);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	}
	reclaim_evaluation_place_reference(item_or_place_reference);
    }
    else {
	item = item_or_place_reference;
	value_arg = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
	user_provided_expiration_qm = expiration_arg ? 
		evaluation_value_value(expiration_arg) : Nil;
	user_provided_collection_qm = collection_arg ? 
		evaluation_value_value(collection_arg) : Nil;
	place_qm = value_arg && SYMBOLP(value_arg) ? 
		get_implied_attribute_place(item,value_arg,top_of_stack) : 
		item;
	if (place_qm) {
	    sub_class_bit_vector = ISVREF(ISVREF(place_qm,(SI_Long)1L),
		    (SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Parameter_class_description,(SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_1 = (SI_Long)1L;
		gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		parameter_qm = (SI_Long)0L < gensymed_symbol ? T : Nil;
	    }
	    else
		parameter_qm = Nil;
	}
	else
	    parameter_qm = Nil;
	if (user_provided_collection_qm) {
	    if (FIXNUMP(user_provided_collection_qm))
		user_provided_collection_qm = 
			DOUBLE_TO_DOUBLE_FLOAT((double)IFIX(FIXNUM_MINUS(FIXNUM_ADD(Gensym_time_at_start,
			user_provided_collection_qm),
			Gensym_time_at_start)) + 
			DFLOAT_ISAREF_1(G2_time_at_start,(SI_Long)0L));
	    else {
		temp = DOUBLE_FLOAT_TO_DOUBLE(user_provided_collection_qm);
		user_provided_collection_qm = DOUBLE_TO_DOUBLE_FLOAT(temp 
			+ DFLOAT_ISAREF_1(G2_time_at_start,(SI_Long)0L));
	    }
	}
	if (user_provided_expiration_qm &&  !TRUEP(parameter_qm)) {
	    gensymed_symbol = IFIX(Gensym_time_at_start);
	    if (FIXNUMP(user_provided_expiration_qm))
		gensymed_symbol_1 = IFIX(user_provided_expiration_qm);
	    else {
		temp_1 = FIX((SI_Long)0L);
		gensymed_symbol_1 = 
			IFIX(ltruncate(NUM_GT(user_provided_expiration_qm,
			temp_1) ? add(user_provided_expiration_qm,
			float_constant) : 
			minus(user_provided_expiration_qm,float_constant),_));
	    }
	    user_provided_expiration_qm = FIX(gensymed_symbol + 
		    gensymed_symbol_1);
	}
	if ( !TRUEP(place_qm)) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(3,
		    string_constant_3,item,value_arg);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    if ( !TRUEP(parameter_qm)) {
		sub_class_bit_vector = ISVREF(ISVREF(place_qm,(SI_Long)1L),
			(SI_Long)19L);
		superior_class_bit_number = 
			IFIX(ISVREF(Variable_or_parameter_class_description,
			(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_1 = (SI_Long)1L;
		    gensymed_symbol_2 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		    temp_2 = (SI_Long)0L < gensymed_symbol;
		}
		else
		    temp_2 = TRUEP(Nil);
		temp_2 =  !temp_2;
	    }
	    else
		temp_2 = TRUEP(Nil);
	    if (temp_2) {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_4,place_qm);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    else {
		temp_1 = user_provided_expiration_qm;
		if (temp_1);
		else
		    temp_1 = Stack_expiration;
		problem_description_qm = 
			put_current_evaluation_value(place_qm,value_arg,
			temp_1,user_provided_collection_qm, ! 
			!TRUEP(user_provided_expiration_qm) ? T : Nil);
		if (problem_description_qm)
		    signal_conclude_problem(top_of_stack,
			    problem_description_qm);
	    }
	}
    }
    if ( !(FIXNUMP(expiration_arg) || SYMBOLP(expiration_arg) || 
	    SIMPLE_VECTOR_P(expiration_arg)))
	reclaim_if_evaluation_value_1(expiration_arg);
    if ( !(FIXNUMP(collection_arg) || SYMBOLP(collection_arg) || 
	    SIMPLE_VECTOR_P(collection_arg)))
	reclaim_if_evaluation_value_1(collection_arg);
    return VALUES_1(Nil);
}

/* FUNCALL-COMPARE-AND-SWAP-INST */
Object funcall_compare_and_swap_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item_or_place_reference, value_arg, old_value_arg;
    Object component_particulars, item, top_of_stack_1, message_1;
    Object error_message_qm, text_string, snapshots;
    Object snapshots_of_related_blocks, note_blocks_in_tformat;
    Object current_wide_string_list, wide_string_bv16, current_wide_string;
    Object fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object place_qm, sub_class_bit_vector, parameter_qm;
    Object put_current_evaluation_value_old_value_qm;
    Object put_current_evaluation_value_return_value, problem_description_qm;
    Object svref_new_value;
    SI_Long bv16_length, temp, aref_new_value, length_1;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp_1;
    Declare_special(7);

    x_note_fn_call(210,47);
    item_or_place_reference = ISVREF(local_stack,IFIX(top_of_stack) - 
	    (SI_Long)2L);
    value_arg = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    old_value_arg = ISVREF(local_stack,IFIX(top_of_stack));
    if (CONSP(item_or_place_reference) && 
	    EQ(M_CDR(item_or_place_reference),Qplace_reference)) {
	component_particulars = ISVREF(M_CAR(item_or_place_reference),
		(SI_Long)0L);
	item = ISVREF(M_CAR(item_or_place_reference),(SI_Long)1L);
	if ( 
		!TRUEP(evaluation_place_reference_valid_p(item_or_place_reference))) 
		    {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_1,item_or_place_reference);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	error_message_qm = conclude_into_component_dispatch(item,
		component_particulars,value_arg,Nil,component_particulars);
	if (error_message_qm) {
	    if (text_string_p(error_message_qm)) {
		top_of_stack_1 = top_of_stack;
		text_string = Nil;
		snapshots = Nil;
		snapshots_of_related_blocks = Nil;
		note_blocks_in_tformat = 
			SYMBOL_FUNCTION(Qrecord_block_for_tformat);
		PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
		  PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,
			  5);
		    current_wide_string_list = Qdo_not_use;
		    PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,
			    4);
		      wide_string_bv16 = 
			      allocate_byte_vector_16(FIX((SI_Long)2048L + 
			      (SI_Long)3L));
		      bv16_length = 
			      IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wide_string_bv16));
		      temp = bv16_length - (SI_Long)2L;
		      aref_new_value = (SI_Long)2048L & (SI_Long)65535L;
		      UBYTE_16_ISASET_1(wide_string_bv16,temp,aref_new_value);
		      temp = bv16_length - (SI_Long)1L;
		      aref_new_value = (SI_Long)57344L | (SI_Long)0L;
		      UBYTE_16_ISASET_1(wide_string_bv16,temp,aref_new_value);
		      UBYTE_16_ISASET_1(wide_string_bv16,(SI_Long)2048L,
			      (SI_Long)0L);
		      current_wide_string = wide_string_bv16;
		      PUSH_SPECIAL(Current_wide_string,current_wide_string,3);
			fill_pointer_for_current_wide_string = 
				FIX((SI_Long)0L);
			PUSH_SPECIAL(Fill_pointer_for_current_wide_string,fill_pointer_for_current_wide_string,
				2);
			  length_1 = 
				  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
			  total_length_of_current_wide_string = 
				  FIX(UBYTE_16_ISAREF_1(Current_wide_string,
				  length_1 - (SI_Long)2L) + 
				  ((UBYTE_16_ISAREF_1(Current_wide_string,
				  length_1 - (SI_Long)1L) & 
				  (SI_Long)8191L) << (SI_Long)16L));
			  PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
				  1);
			    current_twriting_output_type = Qwide_string;
			    PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
				    0);
			      twrite_general_string(error_message_qm);
			      reclaim_text_string(error_message_qm);
			      text_string = copy_out_current_wide_string();
			    POP_SPECIAL();
			  POP_SPECIAL();
			POP_SPECIAL();
		      POP_SPECIAL();
		    POP_SPECIAL();
		    snapshots = Snapshots_of_related_blocks;
		    Snapshots_of_related_blocks = Nil;
		    if (Snapshots_of_related_blocks) {
			reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
			Snapshots_of_related_blocks = Nil;
		    }
		  POP_SPECIAL();
		POP_SPECIAL();
		message_1 = make_error_text(text_string,snapshots);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    else {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(1,
			string_constant_2);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	}
	reclaim_evaluation_place_reference(item_or_place_reference);
    }
    else {
	item = item_or_place_reference;
	place_qm = value_arg && SYMBOLP(value_arg) ? 
		get_implied_attribute_place(item,value_arg,top_of_stack) : 
		item;
	if (place_qm) {
	    sub_class_bit_vector = ISVREF(ISVREF(place_qm,(SI_Long)1L),
		    (SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Parameter_class_description,(SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_1 = (SI_Long)1L;
		gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		parameter_qm = (SI_Long)0L < gensymed_symbol ? T : Nil;
	    }
	    else
		parameter_qm = Nil;
	}
	else
	    parameter_qm = Nil;
	if ( !TRUEP(place_qm)) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(3,
		    string_constant_3,item,value_arg);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    if ( !TRUEP(parameter_qm)) {
		sub_class_bit_vector = ISVREF(ISVREF(place_qm,(SI_Long)1L),
			(SI_Long)19L);
		superior_class_bit_number = 
			IFIX(ISVREF(Variable_or_parameter_class_description,
			(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_1 = (SI_Long)1L;
		    gensymed_symbol_2 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		    temp_1 = (SI_Long)0L < gensymed_symbol;
		}
		else
		    temp_1 = TRUEP(Nil);
		temp_1 =  !temp_1;
	    }
	    else
		temp_1 = TRUEP(Nil);
	    if (temp_1) {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_4,place_qm);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    else {
		put_current_evaluation_value_old_value_qm = old_value_arg;
		PUSH_SPECIAL(Put_current_evaluation_value_old_value_qm,put_current_evaluation_value_old_value_qm,
			1);
		  put_current_evaluation_value_return_value = Nil;
		  PUSH_SPECIAL(Put_current_evaluation_value_return_value,put_current_evaluation_value_return_value,
			  0);
		    problem_description_qm = 
			    put_current_evaluation_value(place_qm,
			    value_arg,Stack_expiration,Nil,Nil);
		    temp = IFIX(top_of_stack) - (SI_Long)3L;
		    svref_new_value = 
			    Put_current_evaluation_value_return_value ? 
			    Evaluation_true_value : Evaluation_false_value;
		    ISVREF(local_stack,temp) = svref_new_value;
		    if (problem_description_qm)
			signal_conclude_problem(top_of_stack,
				problem_description_qm);
		  POP_SPECIAL();
		POP_SPECIAL();
	    }
	}
    }
    return VALUES_1(Nil);
}

static Object string_constant_5;   /* "Cannot conclude a value for ~NV.  ~NW" */

/* PLACE-REFERENCE-SET-ERROR */
Object place_reference_set_error(top_of_stack,place_reference,error_message)
    Object top_of_stack, place_reference, error_message;
{
    Object top_of_stack_1, text_string, snapshots, snapshots_of_related_blocks;
    Object note_blocks_in_tformat, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object message_1;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    Declare_special(7);

    x_note_fn_call(210,48);
    top_of_stack_1 = top_of_stack;
    text_string = Nil;
    snapshots = Nil;
    snapshots_of_related_blocks = Nil;
    note_blocks_in_tformat = SYMBOL_FUNCTION(Qrecord_block_for_tformat);
    PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
      PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,5);
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
		  tformat(3,string_constant_5,place_reference,error_message);
		  reclaim_error_text(error_message);
		  text_string = copy_out_current_wide_string();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
	snapshots = Snapshots_of_related_blocks;
	Snapshots_of_related_blocks = Nil;
	if (Snapshots_of_related_blocks) {
	    reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
	    Snapshots_of_related_blocks = Nil;
	}
      POP_SPECIAL();
    POP_SPECIAL();
    message_1 = make_error_text(text_string,snapshots);
    return raw_stack_error_named_error(top_of_stack_1,message_1);
}

static Object string_constant_6;   /* "Error while executing a conclude action.  ~NW" */

/* SIGNAL-CONCLUDE-PROBLEM */
Object signal_conclude_problem(top_of_stack,problem_description)
    Object top_of_stack, problem_description;
{
    Object top_of_stack_1, text_string, snapshots, snapshots_of_related_blocks;
    Object note_blocks_in_tformat, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object message_1;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    Declare_special(7);

    x_note_fn_call(210,49);
    top_of_stack_1 = top_of_stack;
    text_string = Nil;
    snapshots = Nil;
    snapshots_of_related_blocks = Nil;
    note_blocks_in_tformat = SYMBOL_FUNCTION(Qrecord_block_for_tformat);
    PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
      PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,5);
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
		  tformat(2,string_constant_6,problem_description);
		  reclaim_error_text(problem_description);
		  text_string = copy_out_current_wide_string();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
	snapshots = Snapshots_of_related_blocks;
	Snapshots_of_related_blocks = Nil;
	if (Snapshots_of_related_blocks) {
	    reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
	    Snapshots_of_related_blocks = Nil;
	}
      POP_SPECIAL();
    POP_SPECIAL();
    message_1 = make_error_text(text_string,snapshots);
    return raw_stack_error_named_error(top_of_stack_1,message_1);
}

static Object string_constant_7;   /* "The workspace, ~NF, cannot be moved by a MOVE BY action." */

static Object string_constant_8;   /* "In the MOVE BY action, the delta X and Y values for ~NF, ~a ~
				    * ?     and ~a, would move the item outside the allowable range for ~
				    *              workspace coordinates, ~a to ~a inclusive."
				    */

static Object Qis_moved_by_g2;     /* is-moved-by-g2 */

/* FUNCALL-MOVE-INST */
Object funcall_move_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item, delta_x_evaluation_value, delta_y_evaluation_value, delta_x;
    Object delta_y, sub_class_bit_vector, top_of_stack_1, message_1;
    Object gensymed_symbol_3, temp_1;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp;

    x_note_fn_call(210,50);
    item = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    perform_any_deferred_icon_set_up(item);
    delta_x_evaluation_value = ISVREF(local_stack,
	    IFIX(FIXNUM_SUB1(top_of_stack)));
    delta_y_evaluation_value = ISVREF(local_stack,IFIX(top_of_stack));
    delta_x = evaluation_quantity_value(delta_x_evaluation_value);
    delta_y = evaluation_quantity_value(delta_y_evaluation_value);
    if ((SI_Long)0L != (IFIX(ISVREF(item,(SI_Long)5L)) & (SI_Long)2048L));
    else {
	sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Workspace_class_description,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	if (temp) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_7,item);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    temp = TRUEP(exceptional_float_p(delta_x));
	    if (temp);
	    else
		temp = TRUEP(exceptional_float_p(delta_y));
	    if (temp);
	    else {
		gensymed_symbol_3 = ISVREF(item,(SI_Long)14L);
		gensymed_symbol_3 = gensymed_symbol_3 ? 
			ISVREF(gensymed_symbol_3,(SI_Long)0L) : 
			FIX((SI_Long)0L);
		temp_1 = add(gensymed_symbol_3,delta_x);
		temp = NUM_LT(temp_1,Most_negative_workspace_coordinate);
	    }
	    if (temp);
	    else {
		gensymed_symbol_3 = ISVREF(item,(SI_Long)14L);
		gensymed_symbol_3 = gensymed_symbol_3 ? 
			ISVREF(gensymed_symbol_3,(SI_Long)2L) : 
			FIX((SI_Long)0L);
		temp_1 = add(gensymed_symbol_3,delta_x);
		temp = NUM_GT(temp_1,Most_positive_workspace_coordinate);
	    }
	    if (temp);
	    else {
		gensymed_symbol_3 = ISVREF(item,(SI_Long)14L);
		gensymed_symbol_3 = gensymed_symbol_3 ? 
			ISVREF(gensymed_symbol_3,(SI_Long)1L) : 
			FIX((SI_Long)0L);
		temp_1 = add(gensymed_symbol_3,delta_y);
		temp = NUM_LT(temp_1,Most_negative_workspace_coordinate);
	    }
	    if (temp);
	    else {
		gensymed_symbol_3 = ISVREF(item,(SI_Long)14L);
		gensymed_symbol_3 = gensymed_symbol_3 ? 
			ISVREF(gensymed_symbol_3,(SI_Long)3L) : 
			FIX((SI_Long)0L);
		temp_1 = add(gensymed_symbol_3,delta_y);
		temp = NUM_GT(temp_1,Most_positive_workspace_coordinate);
	    }
	    if (temp) {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(6,
			string_constant_8,item,delta_x,delta_y,
			Most_negative_workspace_coordinate,
			Most_positive_workspace_coordinate);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    else {
		move_item_by(3,item,delta_x,delta_y);
		invoke_rules_for_movement_chaining(2,item,Qis_moved_by_g2);
	    }
	}
    }
    reclaim_evaluation_quantity(delta_x_evaluation_value);
    reclaim_evaluation_quantity(delta_y_evaluation_value);
    return VALUES_1(Nil);
}

static Object string_constant_9;   /* "In the ~a action, the new X and Y coordinates for ~NF, ~a ~
				    *           and ~a, are not valid numbers."
				    */

static Object string_constant_10;  /* "In the ~a action, the new X and Y coordinates for ~NF, ~a ~
				    *           and ~a, are outside the allowable range for workspace ~
				    *           coordinates, ~a to ~a inclusive."
				    */

/* WORKSPACE-COORDINATES-IN-ERROR? */
Object workspace_coordinates_in_error_qm(x_value_qm,y_value_qm,
	    item_involved,name_of_action,top_of_stack)
    Object x_value_qm, y_value_qm, item_involved, name_of_action, top_of_stack;
{
    Object top_of_stack_1, message_1;

    x_note_fn_call(210,51);
    if (x_value_qm && exceptional_float_p(x_value_qm) || y_value_qm && 
	    exceptional_float_p(y_value_qm)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(7,string_constant_9,
		name_of_action,item_involved,x_value_qm,y_value_qm,
		Most_negative_workspace_coordinate,
		Most_positive_workspace_coordinate);
	return raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if (x_value_qm && (NUM_LT(x_value_qm,
	    Most_negative_workspace_coordinate) || NUM_GT(x_value_qm,
	    Most_positive_workspace_coordinate)) || y_value_qm && 
	    (NUM_LT(y_value_qm,Most_negative_workspace_coordinate) || 
	    NUM_GT(y_value_qm,Most_positive_workspace_coordinate))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(7,string_constant_10,
		name_of_action,item_involved,x_value_qm,y_value_qm,
		Most_negative_workspace_coordinate,
		Most_positive_workspace_coordinate);
	return raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else
	return VALUES_1(Qnil);
}

static Object string_constant_11;  /* "The workspace, ~NF, cannot be moved by a MOVE TO action." */

static Object string_constant_12;  /* "MOVE" */

/* FUNCALL-SET-POSITION-INST */
Object funcall_set_position_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item, x_evaluation_value, x_in_workspace, y_evaluation_value;
    Object y_in_workspace, sub_class_bit_vector, top_of_stack_1, message_1;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp;

    x_note_fn_call(210,52);
    item = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    perform_any_deferred_icon_set_up(item);
    x_evaluation_value = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    x_in_workspace = evaluation_quantity_value(x_evaluation_value);
    y_evaluation_value = ISVREF(local_stack,IFIX(top_of_stack));
    y_in_workspace = evaluation_quantity_value(y_evaluation_value);
    if ((SI_Long)0L != (IFIX(ISVREF(item,(SI_Long)5L)) & (SI_Long)2048L));
    else {
	sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Workspace_class_description,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	if (temp) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_11,item);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else if (workspace_coordinates_in_error_qm(x_in_workspace,
		y_in_workspace,string_constant_12,item,top_of_stack));
	else {
	    move_item(3,item,x_in_workspace,y_in_workspace);
	    invoke_rules_for_movement_chaining(2,item,Qis_moved_by_g2);
	}
    }
    reclaim_evaluation_quantity(x_evaluation_value);
    reclaim_evaluation_quantity(y_evaluation_value);
    return VALUES_1(Nil);
}

static Object string_constant_13;  /* "Cannot rotate ~NF because this item does not have an icon ~
				    *        or is not of a class that permits rotation."
				    */

/* REQUIRE-ROTATABLE-AND-REFLECTABLE-ITEM */
Object require_rotatable_and_reflectable_item(item,top_of_stack)
    Object item, top_of_stack;
{
    Object top_of_stack_1, message_1;

    x_note_fn_call(210,53);
    if ( !TRUEP(frame_may_be_rotated_or_reflected_p(1,item))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_13,item);
	return raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else
	return VALUES_1(Nil);
}

/* FUNCALL-ROTATE-INST */
Object funcall_rotate_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item, degree_of_rotation, rotation_value;

    x_note_fn_call(210,54);
    item = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    degree_of_rotation = ISVREF(local_stack,IFIX(top_of_stack));
    rotation_value = evaluation_quantity_value(degree_of_rotation);
    perform_any_deferred_icon_set_up(item);
    require_rotatable_and_reflectable_item(item,top_of_stack);
    rotate_and_reflect_icon(item,rotation_value,Nil,Nil,Nil,T);
    invoke_rules_for_movement_chaining(2,item,Qis_moved_by_g2);
    reclaim_evaluation_quantity(degree_of_rotation);
    return VALUES_1(Nil);
}

/* FUNCALL-SET-HEADING-INST */
Object funcall_set_heading_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item, degree_of_rotation, rotation_value, temp, temp_1;

    x_note_fn_call(210,55);
    item = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    degree_of_rotation = ISVREF(local_stack,IFIX(top_of_stack));
    rotation_value = evaluation_quantity_value(degree_of_rotation);
    perform_any_deferred_icon_set_up(item);
    require_rotatable_and_reflectable_item(item,top_of_stack);
    if (T) {
	temp = minus(rotation_value,icon_heading(item));
	temp_1 = item_x_position(item);
	rotate_and_reflect_icon(item,temp,Nil,temp_1,
		FIXNUM_NEGATE(item_y_position(item)),T);
	invoke_rules_for_movement_chaining(2,item,Qis_moved_by_g2);
    }
    reclaim_evaluation_quantity(degree_of_rotation);
    return VALUES_1(Nil);
}

/* FUNCALL-CONCLUDE-HAS-NO-CURRENT-VALUE-INST */
Object funcall_conclude_has_no_current_value_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    x_note_fn_call(210,56);
    put_has_no_current_value(ISVREF(local_stack,IFIX(top_of_stack)));
    return VALUES_1(Nil);
}

/* FUNCALL-CONCLUDE-HAS-NO-VALUE-INST */
Object funcall_conclude_has_no_value_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item_or_place_reference, component, item, top_of_stack_1, message_1;
    Object error_message_qm, text_string, snapshots;
    Object snapshots_of_related_blocks, note_blocks_in_tformat;
    Object current_wide_string_list, wide_string_bv16, current_wide_string;
    Object fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    Declare_special(7);

    x_note_fn_call(210,57);
    item_or_place_reference = ISVREF(local_stack,IFIX(top_of_stack));
    if (CONSP(item_or_place_reference) && 
	    EQ(M_CDR(item_or_place_reference),Qplace_reference)) {
	component = ISVREF(M_CAR(item_or_place_reference),(SI_Long)0L);
	item = ISVREF(M_CAR(item_or_place_reference),(SI_Long)1L);
	if ( 
		!TRUEP(evaluation_place_reference_valid_p(item_or_place_reference))) 
		    {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_1,item_or_place_reference);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	error_message_qm = conclude_into_component_dispatch(item,component,
		Nil,Nil,component);
	if (error_message_qm) {
	    top_of_stack_1 = top_of_stack;
	    text_string = Nil;
	    snapshots = Nil;
	    snapshots_of_related_blocks = Nil;
	    note_blocks_in_tformat = 
		    SYMBOL_FUNCTION(Qrecord_block_for_tformat);
	    PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
	      PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,
		      5);
		current_wide_string_list = Qdo_not_use;
		PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,
			4);
		  wide_string_bv16 = 
			  allocate_byte_vector_16(FIX((SI_Long)2048L + 
			  (SI_Long)3L));
		  bv16_length = 
			  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wide_string_bv16));
		  aref_arg_2 = bv16_length - (SI_Long)2L;
		  aref_new_value = (SI_Long)2048L & (SI_Long)65535L;
		  UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,
			  aref_new_value);
		  aref_arg_2 = bv16_length - (SI_Long)1L;
		  aref_new_value = (SI_Long)57344L | (SI_Long)0L;
		  UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,
			  aref_new_value);
		  UBYTE_16_ISASET_1(wide_string_bv16,(SI_Long)2048L,
			  (SI_Long)0L);
		  current_wide_string = wide_string_bv16;
		  PUSH_SPECIAL(Current_wide_string,current_wide_string,3);
		    fill_pointer_for_current_wide_string = FIX((SI_Long)0L);
		    PUSH_SPECIAL(Fill_pointer_for_current_wide_string,fill_pointer_for_current_wide_string,
			    2);
		      length_1 = 
			      IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
		      total_length_of_current_wide_string = 
			      FIX(UBYTE_16_ISAREF_1(Current_wide_string,
			      length_1 - (SI_Long)2L) + 
			      ((UBYTE_16_ISAREF_1(Current_wide_string,
			      length_1 - (SI_Long)1L) & (SI_Long)8191L) << 
			      (SI_Long)16L));
		      PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
			      1);
			current_twriting_output_type = Qwide_string;
			PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
				0);
			  twrite_general_string(error_message_qm);
			  reclaim_text_string(error_message_qm);
			  text_string = copy_out_current_wide_string();
			POP_SPECIAL();
		      POP_SPECIAL();
		    POP_SPECIAL();
		  POP_SPECIAL();
		POP_SPECIAL();
		snapshots = Snapshots_of_related_blocks;
		Snapshots_of_related_blocks = Nil;
		if (Snapshots_of_related_blocks) {
		    reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
		    Snapshots_of_related_blocks = Nil;
		}
	      POP_SPECIAL();
	    POP_SPECIAL();
	    message_1 = make_error_text(text_string,snapshots);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	reclaim_evaluation_place_reference(item_or_place_reference);
    }
    else
	put_has_no_value(item_or_place_reference);
    return VALUES_1(Nil);
}

static Object Qname_or_names_for_frame;  /* name-or-names-for-frame */

static Object Qfocusing;           /* focusing */

static Object Qitem;               /* item */

/* EXECUTE-FOCUS-INSTRUCTION */
Object execute_focus_instruction(item,wait_qm)
    Object item, wait_qm;
{
    Object name_or_names, current_ri_completion_notification_collection_qm;
    Object rule_of_this_role_name, ab_loop_list_, name, ab_loop_list__1;
    Object class_1, class_description, temp;
    Declare_special(1);

    x_note_fn_call(210,58);
    name_or_names = get_lookup_slot_value_given_default(item,
	    Qname_or_names_for_frame,Nil);
    current_ri_completion_notification_collection_qm = wait_qm ? 
	    set_up_completion_notification_collection(Current_computation_instance) 
	    : Nil;
    PUSH_SPECIAL(Current_ri_completion_notification_collection_qm,current_ri_completion_notification_collection_qm,
	    0);
      if (name_or_names) {
	  if (SYMBOLP(name_or_names)) {
	      rule_of_this_role_name = Nil;
	      ab_loop_list_ = 
		      lookup_kb_specific_property_value(name_or_names,
		      Rules_of_this_class_or_object_name_kbprop);
	    next_loop:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop;
	      rule_of_this_role_name = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      schedule_rule_instances_if_rule_is_not_embedded(rule_of_this_role_name,
		      Nil,Nil,Nil,Qfocusing);
	      goto next_loop;
	    end_loop:;
	  }
	  else {
	      name = Nil;
	      ab_loop_list_ = name_or_names;
	    next_loop_1:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop_1;
	      name = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      rule_of_this_role_name = Nil;
	      ab_loop_list__1 = lookup_kb_specific_property_value(name,
		      Rules_of_this_class_or_object_name_kbprop);
	    next_loop_2:
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop_2;
	      rule_of_this_role_name = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      schedule_rule_instances_if_rule_is_not_embedded(rule_of_this_role_name,
		      Nil,Nil,Nil,Qfocusing);
	      goto next_loop_2;
	    end_loop_2:;
	      goto next_loop_1;
	    end_loop_1:;
	  }
      }
      class_1 = Nil;
      class_description = ISVREF(item,(SI_Long)1L);
      ab_loop_list_ = ISVREF(class_description,(SI_Long)2L);
    next_loop_3:
      if ( !TRUEP(ab_loop_list_))
	  goto end_loop_3;
      class_1 = M_CAR(ab_loop_list_);
      ab_loop_list_ = M_CDR(ab_loop_list_);
      rule_of_this_role_name = Nil;
      ab_loop_list__1 = lookup_kb_specific_property_value(class_1,
	      Rules_of_this_class_or_object_name_kbprop);
    next_loop_4:
      if ( !TRUEP(ab_loop_list__1))
	  goto end_loop_4;
      rule_of_this_role_name = M_CAR(ab_loop_list__1);
      ab_loop_list__1 = M_CDR(ab_loop_list__1);
      schedule_rule_instances_if_rule_is_not_embedded(rule_of_this_role_name,
	      class_1,Nil,item,Qfocusing);
      goto next_loop_4;
    end_loop_4:;
      if (EQ(class_1,Qitem))
	  goto end_loop_3;
      goto next_loop_3;
    end_loop_3:;
      if (wait_qm)
	  remove_completion_notification_collection_if_empty(Current_computation_instance);
      temp = Nil;
    POP_SPECIAL();
    return VALUES_1(temp);
}

/* FUNCALL-FOCUS-INST */
Object funcall_focus_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object temp;

    x_note_fn_call(210,59);
    temp = execute_focus_instruction(ISVREF(local_stack,
	    IFIX(top_of_stack)),Nil);
    return VALUES_1(temp);
}

/* FUNCALL-FOCUS-WITH-WAIT-INST */
Object funcall_focus_with_wait_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object temp;

    x_note_fn_call(210,60);
    temp = execute_focus_instruction(ISVREF(local_stack,IFIX(top_of_stack)),T);
    return VALUES_1(temp);
}

static Object string_constant_14;  /* "Cannot change the ~a region of ~NF.  The class definition for ~a ~
				    *      does not have a region named ~a."
				    */

/* MISSING-COLOR-REGION-STACK-ERROR */
Object missing_color_region_stack_error(entity,region,top_of_stack)
    Object entity, region, top_of_stack;
{
    Object top_of_stack_1, message_1;

    x_note_fn_call(210,61);
    top_of_stack_1 = top_of_stack;
    message_1 = tformat_stack_error_text_string(5,string_constant_14,
	    region,entity,ISVREF(ISVREF(entity,(SI_Long)1L),(SI_Long)1L),
	    region);
    return raw_stack_error_named_error(top_of_stack_1,message_1);
}

static Object string_constant_15;  /* "Cannot change an unnamed color region in ~NF using its color name ~
				    *        (~a).  Unnamed color regions cannot be changed."
				    */

/* UNNAMED-COLOR-REGION-STACK-ERROR */
Object unnamed_color_region_stack_error(entity,region,top_of_stack)
    Object entity, region, top_of_stack;
{
    Object top_of_stack_1, message_1;

    x_note_fn_call(210,62);
    top_of_stack_1 = top_of_stack;
    message_1 = tformat_stack_error_text_string(3,string_constant_15,
	    entity,region);
    return raw_stack_error_named_error(top_of_stack_1,message_1);
}

static Object Qcm;                 /* \, */

static Object string_constant_16;  /* " are illegal colors" */

static Object string_constant_17;  /* " is an illegal color" */

/* ILLEGAL-COLORS-STACK-ERROR */
Object illegal_colors_stack_error(illegal_colors,top_of_stack)
    Object illegal_colors, top_of_stack;
{
    Object remaining_colors, remaining_colors_without_duplicates, ab_loopvar_;
    Object ab_loopvar__1, previous_illegal_colors, top_of_stack_1, text_string;
    Object snapshots, snapshots_of_related_blocks, note_blocks_in_tformat;
    Object current_wide_string_list, wide_string_bv16, current_wide_string;
    Object fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object message_1;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    char temp;
    Declare_special(7);

    x_note_fn_call(210,63);
    remaining_colors = illegal_colors;
    remaining_colors_without_duplicates = Nil;
    ab_loopvar_ = Nil;
    ab_loopvar__1 = Nil;
  next_loop:
    if ( !TRUEP(remaining_colors))
	goto end_loop;
    previous_illegal_colors = illegal_colors;
  next_loop_1:
    if ( !TRUEP(previous_illegal_colors))
	goto end_loop_1;
    if (EQ(previous_illegal_colors,remaining_colors))
	goto end_loop_1;
    if (EQ(CAR(previous_illegal_colors),CAR(remaining_colors))) {
	temp = TRUEP(Nil);
	goto end_1;
    }
    previous_illegal_colors = M_CDR(previous_illegal_colors);
    goto next_loop_1;
  end_loop_1:
    temp = TRUEP(T);
    goto end_1;
    temp = TRUEP(Qnil);
  end_1:;
    if (temp) {
	ab_loopvar__1 = gensym_cons_1(CAR(remaining_colors),Nil);
	if (ab_loopvar_)
	    M_CDR(ab_loopvar_) = ab_loopvar__1;
	else
	    remaining_colors_without_duplicates = ab_loopvar__1;
	ab_loopvar_ = ab_loopvar__1;
    }
    remaining_colors = M_CDR(remaining_colors);
    goto next_loop;
  end_loop:
    top_of_stack_1 = top_of_stack;
    text_string = Nil;
    snapshots = Nil;
    snapshots_of_related_blocks = Nil;
    note_blocks_in_tformat = SYMBOL_FUNCTION(Qrecord_block_for_tformat);
    PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
      PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,5);
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
		  write_symbol_list(3,remaining_colors_without_duplicates,
			  Qcm,Qand);
		  twrite_general_string(CDR(remaining_colors_without_duplicates) 
			  ? string_constant_16 : string_constant_17);
		  reclaim_gensym_list_1(remaining_colors_without_duplicates);
		  reclaim_gensym_list_1(illegal_colors);
		  text_string = copy_out_current_wide_string();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
	snapshots = Snapshots_of_related_blocks;
	Snapshots_of_related_blocks = Nil;
	if (Snapshots_of_related_blocks) {
	    reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
	    Snapshots_of_related_blocks = Nil;
	}
      POP_SPECIAL();
    POP_SPECIAL();
    message_1 = make_error_text(text_string,snapshots);
    raw_stack_error_named_error(top_of_stack_1,message_1);
    return VALUES_1(Qnil);
}

static Object Qmissing_color_region;  /* missing-color-region */

static Object Qunnamed_color_region;  /* unnamed-color-region */

static Object Qillegal_colors;     /* illegal-colors */

/* FUNCALL-CHANGE-ITEM-COLOR-INST */
Object funcall_change_item_color_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item, color, region, executing_change_item_color_instruction_p;
    Object color_change_error_qm, type_of_error, error_args;
    Declare_special(1);

    x_note_fn_call(210,64);
    item = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    color = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    region = ISVREF(local_stack,IFIX(top_of_stack));
    executing_change_item_color_instruction_p = T;
    PUSH_SPECIAL(Executing_change_item_color_instruction_p,executing_change_item_color_instruction_p,
	    0);
      color_change_error_qm = change_color_of_item(item,T,region,color);
      if (color_change_error_qm) {
	  type_of_error = M_CAR(color_change_error_qm);
	  error_args = M_CDR(color_change_error_qm);
	  reclaim_gensym_cons_1(color_change_error_qm);
	  if (EQ(type_of_error,Qmissing_color_region))
	      missing_color_region_stack_error(item,error_args,top_of_stack);
	  else if (EQ(type_of_error,Qunnamed_color_region))
	      unnamed_color_region_stack_error(item,error_args,top_of_stack);
	  else if (EQ(type_of_error,Qillegal_colors))
	      illegal_colors_stack_error(error_args,top_of_stack);
	  else;
      }
    POP_SPECIAL();
    reclaim_evaluation_value(color);
    reclaim_evaluation_value(region);
    return VALUES_1(Nil);
}

/* FUNCALL-CHANGE-ITEM-COLOR-PATTERN-INST */
Object funcall_change_item_color_pattern_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object arg_count, index_1, item, last_index, region, color, ab_loopvar_;
    Object ab_loopvar__1, ab_loopvar__2, evaluated_color_pattern;
    SI_Long index_new_value;

    x_note_fn_call(210,65);
    arg_count = FIXNUM_ADD1(ISVREF(local_stack,IFIX(top_of_stack)));
    index_1 = FIXNUM_MINUS(top_of_stack,FIXNUM_SUB1(arg_count));
    item = ISVREF(local_stack,IFIX(index_1));
    last_index = FIXNUM_SUB1(top_of_stack);
    if ( !(IFIX(arg_count) <= (SI_Long)2L)) {
	index_1 = FIXNUM_ADD1(index_1);
	region = Nil;
	color = Nil;
	ab_loopvar_ = Nil;
	ab_loopvar__1 = Nil;
	ab_loopvar__2 = Nil;
      next_loop:
	region = ISVREF(local_stack,IFIX(index_1));
	color = ISVREF(local_stack,IFIX(FIXNUM_ADD1(index_1)));
	ab_loopvar__2 = gensym_cons_1(gensym_cons_1(region,color),Nil);
	if (ab_loopvar__1)
	    M_CDR(ab_loopvar__1) = ab_loopvar__2;
	else
	    ab_loopvar_ = ab_loopvar__2;
	ab_loopvar__1 = ab_loopvar__2;
	index_new_value = IFIX(index_1) + (SI_Long)2L;
	index_1 = FIX(index_new_value);
	if (FIXNUM_GE(index_1,last_index))
	    goto end_loop;
	goto next_loop;
      end_loop:
	evaluated_color_pattern = ab_loopvar_;
	goto end_1;
	evaluated_color_pattern = Qnil;
      end_1:;
    }
    else
	evaluated_color_pattern = Nil;
    change_item_color_pattern_from_evaluation_stack(top_of_stack,item,
	    evaluated_color_pattern,T);
    reclaim_gensym_tree_1(evaluated_color_pattern);
    return VALUES_1(Nil);
}

/* CHANGE-ITEM-COLOR-PATTERN-FROM-EVALUATION-STACK */
Object change_item_color_pattern_from_evaluation_stack(top_of_stack,item,
	    color_pattern,note_as_kb_state_change_qm)
    Object top_of_stack, item, color_pattern, note_as_kb_state_change_qm;
{
    Object executing_change_item_color_instruction_p, color_change_error_qm;
    Object type_of_error, error_args;
    Declare_special(2);
    Object result;

    x_note_fn_call(210,66);
    PUSH_SPECIAL(Note_as_kb_state_change_qm,note_as_kb_state_change_qm,1);
      executing_change_item_color_instruction_p = T;
      PUSH_SPECIAL(Executing_change_item_color_instruction_p,executing_change_item_color_instruction_p,
	      0);
	color_change_error_qm = change_color_of_item(item,
		Note_as_kb_state_change_qm,Nil,color_pattern);
	if (color_change_error_qm) {
	    type_of_error = M_CAR(color_change_error_qm);
	    error_args = M_CDR(color_change_error_qm);
	    reclaim_gensym_cons_1(color_change_error_qm);
	    if (EQ(type_of_error,Qmissing_color_region))
		result = missing_color_region_stack_error(item,error_args,
			top_of_stack);
	    else if (EQ(type_of_error,Qunnamed_color_region))
		result = unnamed_color_region_stack_error(item,error_args,
			top_of_stack);
	    else if (EQ(type_of_error,Qillegal_colors))
		result = illegal_colors_stack_error(error_args,top_of_stack);
	    else
		result = VALUES_1(Nil);
	}
	else
	    result = VALUES_1(Nil);
      POP_SPECIAL();
    POP_SPECIAL();
    return result;
}

static Object Qtruth_value;        /* truth-value */

static Object Qiteration_state;    /* iteration-state */

static Object Qshow_workspace;     /* show-workspace */

static Object string_constant_18;  /* "Cannot show ~NF.  The show action has been restricted for this item." */

/* FUNCALL-SHOW-NEW-INST */
Object funcall_show_new_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item, g2_window_qm, stack_arg2, stack_arg3, stack_arg4, stack_arg5;
    Object stack_arg6, stack_arg7, stack_arg8, stack_arg9, stack_arg10;
    Object stack_arg11, stack_arg12, stack_arg13, stack_arg14, stack_arg15;
    Object stack_arg16, stack_arg17, stack_arg18, gensymed_symbol;
    Object gensymed_symbol_1, gensymed_symbol_4, go_to_block_qm;
    Object symbolic_x_scale_qm, symbolic_y_scale_qm;
    Object symbolic_x_in_workspace_qm, symbolic_y_in_workspace_qm;
    Object symbolic_x_in_window_qm, symbolic_y_in_window_qm, x_offset_units_qm;
    Object symbolic_x_offset_direction_qm, y_offset_units_qm;
    Object symbolic_y_offset_direction_qm, x_magnification_qm;
    Object y_magnification_qm, x_in_workspace_qm, y_in_workspace_qm;
    Object x_in_window_qm, y_in_window_qm, sub_class_bit_vector, ok_to_show_qm;
    Object workspace_qm, top_of_stack_1, message_1;
    SI_Long gensymed_symbol_2, gensymed_symbol_3, superior_class_bit_number;
    SI_Long sub_class_vector_index, gensymed_symbol_5;
    char temp;

    x_note_fn_call(210,67);
    item = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)18L);
    g2_window_qm = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)17L);
    stack_arg2 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)16L);
    stack_arg3 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)15L);
    stack_arg4 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)14L);
    stack_arg5 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)13L);
    stack_arg6 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)12L);
    stack_arg7 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)11L);
    stack_arg8 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)10L);
    stack_arg9 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)9L);
    stack_arg10 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)8L);
    stack_arg11 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)7L);
    stack_arg12 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)6L);
    stack_arg13 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)5L);
    stack_arg14 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)4L);
    stack_arg15 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)3L);
    stack_arg16 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    stack_arg17 = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    stack_arg18 = ISVREF(local_stack,IFIX(top_of_stack));
    gensymed_symbol = stack_arg2;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_1:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_1;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_1;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_1;
	      end_loop_1:
		temp = TRUEP(Qnil);
	      end_1:;
		goto end_2;
	    }
	    goto next_loop;
	  end_loop:
	    temp = TRUEP(Qnil);
	  end_2:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    go_to_block_qm = temp ? evaluation_value_value(stack_arg2) : stack_arg2;
    gensymed_symbol = stack_arg3;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_2:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_2;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_3:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_3;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_3;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_3;
	      end_loop_3:
		temp = TRUEP(Qnil);
	      end_3:;
		goto end_4;
	    }
	    goto next_loop_2;
	  end_loop_2:
	    temp = TRUEP(Qnil);
	  end_4:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    symbolic_x_scale_qm = temp ? evaluation_value_value(stack_arg3) : 
	    stack_arg3;
    gensymed_symbol = stack_arg4;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_4:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_4;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_5:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_5;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_5;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_5;
	      end_loop_5:
		temp = TRUEP(Qnil);
	      end_5:;
		goto end_6;
	    }
	    goto next_loop_4;
	  end_loop_4:
	    temp = TRUEP(Qnil);
	  end_6:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    symbolic_y_scale_qm = temp ? evaluation_value_value(stack_arg4) : 
	    stack_arg4;
    gensymed_symbol = stack_arg5;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_6:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_6;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_7:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_7;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_7;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_7;
	      end_loop_7:
		temp = TRUEP(Qnil);
	      end_7:;
		goto end_8;
	    }
	    goto next_loop_6;
	  end_loop_6:
	    temp = TRUEP(Qnil);
	  end_8:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    symbolic_x_in_workspace_qm = temp ? evaluation_value_value(stack_arg5) 
	    : stack_arg5;
    gensymed_symbol = stack_arg6;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_8:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_8;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_9:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_9;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_9;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_9;
	      end_loop_9:
		temp = TRUEP(Qnil);
	      end_9:;
		goto end_10;
	    }
	    goto next_loop_8;
	  end_loop_8:
	    temp = TRUEP(Qnil);
	  end_10:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    symbolic_y_in_workspace_qm = temp ? evaluation_value_value(stack_arg6) 
	    : stack_arg6;
    gensymed_symbol = stack_arg7;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_10:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_10;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_11:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_11;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_11;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_11;
	      end_loop_11:
		temp = TRUEP(Qnil);
	      end_11:;
		goto end_12;
	    }
	    goto next_loop_10;
	  end_loop_10:
	    temp = TRUEP(Qnil);
	  end_12:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    symbolic_x_in_window_qm = temp ? evaluation_value_value(stack_arg7) : 
	    stack_arg7;
    gensymed_symbol = stack_arg8;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_12:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_12;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_13:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_13;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_13;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_13;
	      end_loop_13:
		temp = TRUEP(Qnil);
	      end_13:;
		goto end_14;
	    }
	    goto next_loop_12;
	  end_loop_12:
	    temp = TRUEP(Qnil);
	  end_14:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    symbolic_y_in_window_qm = temp ? evaluation_value_value(stack_arg8) : 
	    stack_arg8;
    gensymed_symbol = stack_arg9;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_14:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_14;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_15:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_15;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_15;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_15;
	      end_loop_15:
		temp = TRUEP(Qnil);
	      end_15:;
		goto end_16;
	    }
	    goto next_loop_14;
	  end_loop_14:
	    temp = TRUEP(Qnil);
	  end_16:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    x_offset_units_qm = temp ? evaluation_value_value(stack_arg9) : stack_arg9;
    gensymed_symbol = stack_arg10;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_16:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_16;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_17:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_17;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_17;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_17;
	      end_loop_17:
		temp = TRUEP(Qnil);
	      end_17:;
		goto end_18;
	    }
	    goto next_loop_16;
	  end_loop_16:
	    temp = TRUEP(Qnil);
	  end_18:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    symbolic_x_offset_direction_qm = temp ? 
	    evaluation_value_value(stack_arg10) : stack_arg10;
    gensymed_symbol = stack_arg11;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_18:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_18;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_19:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_19;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_19;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_19;
	      end_loop_19:
		temp = TRUEP(Qnil);
	      end_19:;
		goto end_20;
	    }
	    goto next_loop_18;
	  end_loop_18:
	    temp = TRUEP(Qnil);
	  end_20:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    y_offset_units_qm = temp ? evaluation_value_value(stack_arg11) : 
	    stack_arg11;
    gensymed_symbol = stack_arg12;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_20:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_20;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_21:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_21;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_21;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_21;
	      end_loop_21:
		temp = TRUEP(Qnil);
	      end_21:;
		goto end_22;
	    }
	    goto next_loop_20;
	  end_loop_20:
	    temp = TRUEP(Qnil);
	  end_22:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    symbolic_y_offset_direction_qm = temp ? 
	    evaluation_value_value(stack_arg12) : stack_arg12;
    gensymed_symbol = stack_arg13;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_22:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_22;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_23:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_23;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_23;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_23;
	      end_loop_23:
		temp = TRUEP(Qnil);
	      end_23:;
		goto end_24;
	    }
	    goto next_loop_22;
	  end_loop_22:
	    temp = TRUEP(Qnil);
	  end_24:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    x_magnification_qm = temp ? evaluation_value_value(stack_arg13) : 
	    stack_arg13;
    gensymed_symbol = stack_arg14;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_24:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_24;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_25:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_25;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_25;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_25;
	      end_loop_25:
		temp = TRUEP(Qnil);
	      end_25:;
		goto end_26;
	    }
	    goto next_loop_24;
	  end_loop_24:
	    temp = TRUEP(Qnil);
	  end_26:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    y_magnification_qm = temp ? evaluation_value_value(stack_arg14) : 
	    stack_arg14;
    gensymed_symbol = stack_arg15;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_26:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_26;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_27:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_27;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_27;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_27;
	      end_loop_27:
		temp = TRUEP(Qnil);
	      end_27:;
		goto end_28;
	    }
	    goto next_loop_26;
	  end_loop_26:
	    temp = TRUEP(Qnil);
	  end_28:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    x_in_workspace_qm = temp ? evaluation_value_value(stack_arg15) : 
	    stack_arg15;
    gensymed_symbol = stack_arg16;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_28:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_28;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_29:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_29;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_29;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_29;
	      end_loop_29:
		temp = TRUEP(Qnil);
	      end_29:;
		goto end_30;
	    }
	    goto next_loop_28;
	  end_loop_28:
	    temp = TRUEP(Qnil);
	  end_30:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    y_in_workspace_qm = temp ? evaluation_value_value(stack_arg16) : 
	    stack_arg16;
    gensymed_symbol = stack_arg17;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_30:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_30;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_31:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_31;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_31;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_31;
	      end_loop_31:
		temp = TRUEP(Qnil);
	      end_31:;
		goto end_32;
	    }
	    goto next_loop_30;
	  end_loop_30:
	    temp = TRUEP(Qnil);
	  end_32:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    x_in_window_qm = temp ? evaluation_value_value(stack_arg17) : stack_arg17;
    gensymed_symbol = stack_arg18;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_32:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_32;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_33:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_33;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_33;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_33;
	      end_loop_33:
		temp = TRUEP(Qnil);
	      end_33:;
		goto end_34;
	    }
	    goto next_loop_32;
	  end_loop_32:
	    temp = TRUEP(Qnil);
	  end_34:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    y_in_window_qm = temp ? evaluation_value_value(stack_arg18) : stack_arg18;
    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
    superior_class_bit_number = IFIX(ISVREF(Kb_workspace_class_description,
	    (SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol_2 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_3 = (SI_Long)1L;
	gensymed_symbol_5 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_3 = gensymed_symbol_3 << gensymed_symbol_5;
	gensymed_symbol_2 = gensymed_symbol_2 & gensymed_symbol_3;
	temp = (SI_Long)0L < gensymed_symbol_2;
    }
    else
	temp = TRUEP(Nil);
    if (temp)
	ok_to_show_qm = 
		frame_system_operation_is_allowed_p(Qshow_workspace,item);
    else {
	workspace_qm = get_workspace_if_any(item);
	ok_to_show_qm = workspace_qm ? 
		frame_system_operation_is_allowed_p(Qshow_workspace,
		workspace_qm) : Qnil;
    }
    if (ok_to_show_qm)
	show_workspace(20,item,g2_window_qm,Nil,symbolic_x_scale_qm,
		symbolic_y_scale_qm,symbolic_x_in_workspace_qm,
		symbolic_y_in_workspace_qm,symbolic_x_in_window_qm,
		symbolic_y_in_window_qm,x_offset_units_qm,
		symbolic_x_offset_direction_qm,y_offset_units_qm,
		symbolic_y_offset_direction_qm,x_magnification_qm,
		y_magnification_qm,x_in_workspace_qm,y_in_workspace_qm,
		x_in_window_qm,y_in_window_qm,go_to_block_qm);
    else {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_18,item);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    if ( !(FIXNUMP(stack_arg2) || SYMBOLP(stack_arg2) || 
	    SIMPLE_VECTOR_P(stack_arg2)))
	reclaim_if_evaluation_value_1(stack_arg2);
    if ( !(FIXNUMP(stack_arg3) || SYMBOLP(stack_arg3) || 
	    SIMPLE_VECTOR_P(stack_arg3)))
	reclaim_if_evaluation_value_1(stack_arg3);
    if ( !(FIXNUMP(stack_arg4) || SYMBOLP(stack_arg4) || 
	    SIMPLE_VECTOR_P(stack_arg4)))
	reclaim_if_evaluation_value_1(stack_arg4);
    if ( !(FIXNUMP(stack_arg5) || SYMBOLP(stack_arg5) || 
	    SIMPLE_VECTOR_P(stack_arg5)))
	reclaim_if_evaluation_value_1(stack_arg5);
    if ( !(FIXNUMP(stack_arg6) || SYMBOLP(stack_arg6) || 
	    SIMPLE_VECTOR_P(stack_arg6)))
	reclaim_if_evaluation_value_1(stack_arg6);
    if ( !(FIXNUMP(stack_arg7) || SYMBOLP(stack_arg7) || 
	    SIMPLE_VECTOR_P(stack_arg7)))
	reclaim_if_evaluation_value_1(stack_arg7);
    if ( !(FIXNUMP(stack_arg8) || SYMBOLP(stack_arg8) || 
	    SIMPLE_VECTOR_P(stack_arg8)))
	reclaim_if_evaluation_value_1(stack_arg8);
    if ( !(FIXNUMP(stack_arg9) || SYMBOLP(stack_arg9) || 
	    SIMPLE_VECTOR_P(stack_arg9)))
	reclaim_if_evaluation_value_1(stack_arg9);
    if ( !(FIXNUMP(stack_arg10) || SYMBOLP(stack_arg10) || 
	    SIMPLE_VECTOR_P(stack_arg10)))
	reclaim_if_evaluation_value_1(stack_arg10);
    if ( !(FIXNUMP(stack_arg11) || SYMBOLP(stack_arg11) || 
	    SIMPLE_VECTOR_P(stack_arg11)))
	reclaim_if_evaluation_value_1(stack_arg11);
    if ( !(FIXNUMP(stack_arg12) || SYMBOLP(stack_arg12) || 
	    SIMPLE_VECTOR_P(stack_arg12)))
	reclaim_if_evaluation_value_1(stack_arg12);
    if ( !(FIXNUMP(stack_arg13) || SYMBOLP(stack_arg13) || 
	    SIMPLE_VECTOR_P(stack_arg13)))
	reclaim_if_evaluation_value_1(stack_arg13);
    if ( !(FIXNUMP(stack_arg14) || SYMBOLP(stack_arg14) || 
	    SIMPLE_VECTOR_P(stack_arg14)))
	reclaim_if_evaluation_value_1(stack_arg14);
    if ( !(FIXNUMP(stack_arg15) || SYMBOLP(stack_arg15) || 
	    SIMPLE_VECTOR_P(stack_arg15)))
	reclaim_if_evaluation_value_1(stack_arg15);
    if ( !(FIXNUMP(stack_arg16) || SYMBOLP(stack_arg16) || 
	    SIMPLE_VECTOR_P(stack_arg16)))
	reclaim_if_evaluation_value_1(stack_arg16);
    if ( !(FIXNUMP(stack_arg17) || SYMBOLP(stack_arg17) || 
	    SIMPLE_VECTOR_P(stack_arg17)))
	reclaim_if_evaluation_value_1(stack_arg17);
    if ( !(FIXNUMP(stack_arg18) || SYMBOLP(stack_arg18) || 
	    SIMPLE_VECTOR_P(stack_arg18)))
	reclaim_if_evaluation_value_1(stack_arg18);
    return VALUES_1(Nil);
}

/* FUNCALL-HIDE-INST */
Object funcall_hide_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item, window_arg, gensymed_symbol, gensymed_symbol_1;
    Object gensymed_symbol_4, designated_window_g2_extension_qm;
    SI_Long gensymed_symbol_2, gensymed_symbol_3;
    char temp;

    x_note_fn_call(210,68);
    item = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    window_arg = ISVREF(local_stack,IFIX(top_of_stack));
    gensymed_symbol = window_arg;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_1:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_1;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_1;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_1;
	      end_loop_1:
		temp = TRUEP(Qnil);
	      end_1:;
		goto end_2;
	    }
	    goto next_loop;
	  end_loop:
	    temp = TRUEP(Qnil);
	  end_2:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    designated_window_g2_extension_qm = temp ? 
	    evaluation_value_value(window_arg) : window_arg;
    show_or_hide(4,item,Nil,Nil,designated_window_g2_extension_qm);
    if ( !(FIXNUMP(window_arg) || SYMBOLP(window_arg) || 
	    SIMPLE_VECTOR_P(window_arg)))
	reclaim_if_evaluation_value_1(window_arg);
    return VALUES_1(Nil);
}

static Object string_constant_19;  /* "Attempting to activate ~NF which has no subworkspace." */

static Object string_constant_20;  /* "Attempting to activate an item ~NF which is superior to the ~
				    *               item that is doing the activation."
				    */

static Object Qactivatable_subworkspace;  /* activatable-subworkspace */

static Object string_constant_21;  /* "Attempting to activate ~NF, which is not an object that ~
				    *               is capable of having an activatable subworkspace."
				    */

static Object string_constant_22;  /* "Attempting to activate a subworkspace of ~NF, which is ~
				    *                      not itself active."
				    */

/* FUNCALL-ACTIVATE-INST */
Object funcall_activate_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item, temp, subworkspace_qm, top_of_stack_1, message_1;
    Object gensymed_symbol, gensymed_symbol_1;

    x_note_fn_call(210,69);
    item = ISVREF(local_stack,IFIX(top_of_stack));
    temp = ISVREF(item,(SI_Long)18L);
    subworkspace_qm = CAR(temp);
    if ( !TRUEP(subworkspace_qm)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_19,item);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if (ancestor_p(subworkspace_qm,Current_computation_frame)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_20,item);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if ( !TRUEP(get_property_value_in_object_configuration(item,
	    Qactivatable_subworkspace,Nil))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_21,item);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if ( !((SI_Long)0L != (IFIX(ISVREF(item,(SI_Long)5L)) & 
		(SI_Long)1L))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_22,item);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else {
	gensymed_symbol = ISVREF(ISVREF(ISVREF(ISVREF(subworkspace_qm,
		(SI_Long)1L),(SI_Long)11L),(SI_Long)30L),(SI_Long)1L);
	gensymed_symbol_1 = subworkspace_qm;
	inline_funcall_1(gensymed_symbol,gensymed_symbol_1);
    }
    return VALUES_1(Nil);
}

static Object Qparent_frame;       /* parent-frame */

/* PARENT-IS-INACTIVE-P */
Object parent_is_inactive_p(frame)
    Object frame;
{
    Object gensymed_symbol, superblock_qm, temp, parent_frame_qm;
    Object sub_class_bit_vector, parent_of_subworkspace_qm, block;
    Object connection_structure, input_object;
    SI_Long superior_class_bit_number, sub_class_vector_index;
    SI_Long gensymed_symbol_1, gensymed_symbol_2, gensymed_symbol_3;
    char temp_1;

    x_note_fn_call(210,70);
    gensymed_symbol = ISVREF(frame,(SI_Long)14L);
    gensymed_symbol = gensymed_symbol ? ISVREF(gensymed_symbol,
	    (SI_Long)5L) : Nil;
    superblock_qm = gensymed_symbol;
    if (superblock_qm)
	temp =  !((SI_Long)0L != (IFIX(ISVREF(superblock_qm,(SI_Long)5L)) 
		& (SI_Long)1L)) ? T : Nil;
    else {
	parent_frame_qm = get_lookup_slot_value_given_default(frame,
		Qparent_frame,Nil);
	if (parent_frame_qm)
	    temp =  !((SI_Long)0L != (IFIX(ISVREF(parent_frame_qm,
		    (SI_Long)5L)) & (SI_Long)1L)) ? T : Nil;
	else {
	    gensymed_symbol = ISVREF(frame,(SI_Long)1L);
	    sub_class_bit_vector = ISVREF(gensymed_symbol,(SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Workspace_class_description,(SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol_1 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_2 = (SI_Long)1L;
		gensymed_symbol_3 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
		gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
		temp_1 = (SI_Long)0L < gensymed_symbol_1;
	    }
	    else
		temp_1 = TRUEP(Nil);
	    if (temp_1) {
		parent_of_subworkspace_qm = ISVREF(frame,(SI_Long)18L);
		temp = parent_of_subworkspace_qm ? ( !((SI_Long)0L != 
			(IFIX(ISVREF(parent_of_subworkspace_qm,
			(SI_Long)5L)) & (SI_Long)1L)) ? T : Nil) : Qnil;
	    }
	    else {
		sub_class_bit_vector = ISVREF(gensymed_symbol,(SI_Long)19L);
		superior_class_bit_number = 
			IFIX(ISVREF(Simulation_subtable_class_description,
			(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol_1 = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_2 = (SI_Long)1L;
		    gensymed_symbol_3 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
		    gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
		    temp_1 = (SI_Long)0L < gensymed_symbol_1;
		}
		else
		    temp_1 = TRUEP(Nil);
		if (temp_1) {
		    block = ISVREF(frame,(SI_Long)22L);
		    temp =  !((SI_Long)0L != (IFIX(ISVREF(block,
			    (SI_Long)5L)) & (SI_Long)1L)) ? T : Nil;
		}
		else {
		    sub_class_bit_vector = ISVREF(gensymed_symbol,
			    (SI_Long)19L);
		    superior_class_bit_number = 
			    IFIX(ISVREF(Connection_class_description,
			    (SI_Long)18L));
		    sub_class_vector_index = superior_class_bit_number >>  
			    -  - (SI_Long)3L;
		    if (sub_class_vector_index < 
			    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				{
			gensymed_symbol_1 = 
				UBYTE_8_ISAREF_1(sub_class_bit_vector,
				sub_class_vector_index);
			gensymed_symbol_2 = (SI_Long)1L;
			gensymed_symbol_3 = superior_class_bit_number & 
				(SI_Long)7L;
			gensymed_symbol_2 = gensymed_symbol_2 << 
				gensymed_symbol_3;
			gensymed_symbol_1 = gensymed_symbol_1 & 
				gensymed_symbol_2;
			temp_1 = (SI_Long)0L < gensymed_symbol_1;
		    }
		    else
			temp_1 = TRUEP(Nil);
		    if (temp_1) {
			connection_structure = ISVREF(frame,(SI_Long)21L);
			input_object = ISVREF(connection_structure,
				(SI_Long)3L);
			if ( !((SI_Long)0L != (IFIX(ISVREF(input_object,
				(SI_Long)5L)) & (SI_Long)1L))) {
			    sub_class_bit_vector = 
				    ISVREF(ISVREF(input_object,
				    (SI_Long)1L),(SI_Long)19L);
			    superior_class_bit_number = 
				    IFIX(ISVREF(Loose_end_class_description,
				    (SI_Long)18L));
			    sub_class_vector_index = 
				    superior_class_bit_number >>  -  - 
				    (SI_Long)3L;
			    if (sub_class_vector_index < 
				    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
					{
				gensymed_symbol_1 = 
					UBYTE_8_ISAREF_1(sub_class_bit_vector,
					sub_class_vector_index);
				gensymed_symbol_2 = (SI_Long)1L;
				gensymed_symbol_3 = 
					superior_class_bit_number & 
					(SI_Long)7L;
				gensymed_symbol_2 = gensymed_symbol_2 << 
					gensymed_symbol_3;
				gensymed_symbol_1 = gensymed_symbol_1 & 
					gensymed_symbol_2;
				temp_1 = (SI_Long)0L < gensymed_symbol_1;
			    }
			    else
				temp_1 = TRUEP(Nil);
			    temp =  !temp_1 ? T : Nil;
			}
			else
			    temp = Nil;
		    }
		    else
			temp = Qnil;
		}
	    }
	}
    }
    return VALUES_1(temp);
}

static Object Qitem_active;        /* item-active */

static Object Qvirtual_attribute;  /* virtual-attribute */

static Object Qframe_status_and_notes;  /* frame-status-and-notes */

static Object Qis_activated;       /* is-activated */

/* G2-COMPLETE-ACTIVATION */
Object g2_complete_activation(item)
    Object item;
{
    Object sub_class_bit_vector, gensymed_symbol_3;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2, svref_new_value;
    char temp;

    x_note_fn_call(210,71);
    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
    superior_class_bit_number = IFIX(ISVREF(Kb_workspace_class_description,
	    (SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_1 = (SI_Long)1L;
	gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	temp = (SI_Long)0L < gensymed_symbol;
    }
    else
	temp = TRUEP(Nil);
    if (temp) {
	gensymed_symbol_3 = item;
	svref_new_value = IFIX(ISVREF(gensymed_symbol_3,(SI_Long)5L)) &  
		~(SI_Long)1L;
	ISVREF(gensymed_symbol_3,(SI_Long)5L) = FIX(svref_new_value);
	update_subscriptions_from_virtual_attribute_change(gensymed_symbol_3,
		get_property_value_function(3,
		get_symbol_properties_function(Qitem_active),
		Qvirtual_attribute,Nil),Nil);
	if (ISVREF(gensymed_symbol_3,(SI_Long)9L))
	    update_representations_of_slot_value(2,gensymed_symbol_3,
		    Qframe_status_and_notes);
	activate_for_kb_workspace(item);
	if ((SI_Long)0L != (IFIX(ISVREF(item,(SI_Long)5L)) & (SI_Long)64L))
	    put_parent_for_its_indexed_attributes(1,item);
	gensymed_symbol_3 = item;
	svref_new_value = IFIX(ISVREF(gensymed_symbol_3,(SI_Long)5L)) | 
		(SI_Long)1L;
	ISVREF(gensymed_symbol_3,(SI_Long)5L) = FIX(svref_new_value);
	update_subscriptions_from_virtual_attribute_change(gensymed_symbol_3,
		get_property_value_function(3,
		get_symbol_properties_function(Qitem_active),
		Qvirtual_attribute,Nil),Nil);
	if (ISVREF(gensymed_symbol_3,(SI_Long)9L))
	    update_representations_of_slot_value(2,gensymed_symbol_3,
		    Qframe_status_and_notes);
	if ( !TRUEP(Warmbooting_qm))
	    return schedule_task_to_invoke_existential_rules(item,
		    Qis_activated);
	else
	    return VALUES_1(Nil);
    }
    else
	return VALUES_1(Nil);
}

static Object string_constant_23;  /* "Attempting to deactivate ~NF which has no subworkspace." */

static Object string_constant_24;  /* "Attempting to deactivate an object which is superior to the ~
				    *               item that is doing the deactivation."
				    */

static Object string_constant_25;  /* "Attempting to deactivate ~NF, which is not an object that is ~
				    *               capable of having an activatable subworkspace."
				    */

static Object Qg2_defstruct_structure_name_code_body_invocation_g2_struct;  /* g2-defstruct-structure-name::code-body-invocation-g2-struct */

static Object Qg2_defstruct_structure_name_procedure_invocation_g2_struct;  /* g2-defstruct-structure-name::procedure-invocation-g2-struct */

static Object Qg2_defstruct_structure_name_rule_instance_g2_struct;  /* g2-defstruct-structure-name::rule-instance-g2-struct */

/* FUNCALL-DEACTIVATE-INST */
Object funcall_deactivate_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item, temp, subworkspace_qm, top_of_stack_1, message_1, type_name;
    Object svref_arg_1, frame_serial_number_setf_arg, old, new_1;
    Object svref_new_value, gensymed_symbol, gensymed_symbol_1;
    Object gensymed_symbol_2;
    char temp_1;

    x_note_fn_call(210,72);
    item = ISVREF(local_stack,IFIX(top_of_stack));
    temp = ISVREF(item,(SI_Long)18L);
    subworkspace_qm = CAR(temp);
    if ( !TRUEP(subworkspace_qm)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_23,item);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if (ancestor_p(subworkspace_qm,Current_computation_frame)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(1,string_constant_24);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if ( !TRUEP(get_property_value_in_object_configuration(item,
	    Qactivatable_subworkspace,Nil))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_25,item);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else {
	if (SIMPLE_VECTOR_P(Current_computation_instance)) {
	    type_name = ISVREF(Current_computation_instance,(SI_Long)0L);
	    temp_1 = EQ(type_name,
		    Qg2_defstruct_structure_name_code_body_invocation_g2_struct);
	    if (temp_1);
	    else
		temp_1 = EQ(type_name,
			Qg2_defstruct_structure_name_procedure_invocation_g2_struct);
	}
	else
	    temp_1 = TRUEP(Nil);
	if (temp_1)
	    update_code_body_invocation_frame_serial_number(Current_computation_instance);
	else if (SIMPLE_VECTOR_P(Current_computation_instance) && 
		EQ(ISVREF(Current_computation_instance,(SI_Long)0L),
		Qg2_defstruct_structure_name_rule_instance_g2_struct)) {
	    svref_arg_1 = Current_computation_instance;
	    frame_serial_number_setf_arg = Current_frame_serial_number;
	    old = ISVREF(svref_arg_1,(SI_Long)11L);
	    new_1 = frame_serial_number_setf_arg;
	    svref_new_value = (FIXNUMP(old) ||  !TRUEP(old)) && 
		    (FIXNUMP(new_1) ||  !TRUEP(new_1)) ? new_1 : 
		    frame_serial_number_setf_helper_1(old,new_1);
	    SVREF(svref_arg_1,FIX((SI_Long)11L)) = svref_new_value;
	}
	gensymed_symbol = ISVREF(ISVREF(ISVREF(ISVREF(subworkspace_qm,
		(SI_Long)1L),(SI_Long)11L),(SI_Long)31L),(SI_Long)1L);
	gensymed_symbol_1 = subworkspace_qm;
	gensymed_symbol_2 = Nil;
	inline_funcall_2(gensymed_symbol,gensymed_symbol_1,gensymed_symbol_2);
	validate_computation_instance_environment(Current_computation_instance,
		Nil,Nil);
    }
    return VALUES_1(Nil);
}

static Object string_constant_26;  /* "A SET statement attempted to act on the parameter ~NF.  SET ~
				    *               can operate on parameters only from within a simulation ~
				    *               procedure."
				    */

static Object Qsimulator_data_server;  /* simulator-data-server */

static Object string_constant_27;  /* "A SET action cannot complete.  A data server cannot be ~
				    *                      found for ~NF, which was to receive the value ~NV."
				    */

static Object Qcomputation;        /* computation */

static Object string_constant_28;  /* "A SET action could not change the value of ~NF, since ~
				    *                      its data server is the inference engine.  It should be G2 ~
				    *                      Simulator or some external data server."
				    */

/* FUNCALL-SET-INST */
Object funcall_set_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object place, value, type_of_expression, data_server_qm;
    Object sub_class_bit_vector, top_of_stack_1, message_1, source_or_map;
    Object server_qm, temp_1;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp;

    x_note_fn_call(210,73);
    place = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    value = ISVREF(local_stack,IFIX(top_of_stack));
    type_of_expression = evaluation_value_type(value);
    data_server_qm = Nil;
    sub_class_bit_vector = ISVREF(ISVREF(place,(SI_Long)1L),(SI_Long)19L);
    superior_class_bit_number = IFIX(ISVREF(Parameter_class_description,
	    (SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_1 = (SI_Long)1L;
	gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	temp = (SI_Long)0L < gensymed_symbol;
    }
    else
	temp = TRUEP(Nil);
    if (temp ?  !TRUEP(Evaluating_simulator_procedure_qm) : TRUEP(Nil)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_26,
		place);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else {
	if (Evaluating_simulator_procedure_qm)
	    data_server_qm = 
		    lookup_kb_specific_property_value(Qsimulator_data_server,
		    Data_server_kbprop);
	else {
	    source_or_map = ISVREF(place,(SI_Long)31L);
	    server_qm = ATOM(source_or_map) ? 
		    lookup_kb_specific_property_value(source_or_map,
		    Data_server_or_alias_qm_kbprop) : Nil;
	    data_server_qm = server_qm ? server_qm : 
		    warn_of_undefined_data_server(place,source_or_map);
	}
	if ( !TRUEP(data_server_qm)) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(3,
		    string_constant_27,place,value);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else if (EQ(data_server_qm,Qcomputation)) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_28,place);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    temp_1 = SYMBOL_FUNCTION(ISVREF(data_server_qm,(SI_Long)8L));
	    FUNCALL_3(temp_1,place,value,type_of_expression);
	}
    }
    reclaim_evaluation_value(value);
    return VALUES_1(Nil);
}

static Object Qoperator;           /* operator */

static Object Qavailable_frame_vector;  /* available-frame-vector */

static Object Qg2_defstruct_structure_name_class_description_g2_struct;  /* g2-defstruct-structure-name::class-description-g2-struct */

static Object Qdata_server_for_messages;  /* data-server-for-messages */

static Object string_constant_29;  /* "Inform may not post a message above or below an object ~
				    *               without specifying a workspace. The message is:~%~s."
				    */

static Object string_constant_30;  /* "Inform does not place messages above or below objects ~
				    *               not on the named workspace, or above or below ~
				    *               connections generally.  The message is:~%~s."
				    */

static Object Qg2_defstruct_structure_name_data_server_g2_struct;  /* g2-defstruct-structure-name::data-server-g2-struct */

/* FUNCALL-INFORM-INST */
Object funcall_inform_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object destination_or_operator, message_string, duration_arg, duration_qm;
    Object on_workspace_qm, above_item_qm, below_item_qm, name_of_data_server;
    Object data_server, urgency_qm, object_near_message_qm, above_qm;
    Object gensymed_symbol, gensymed_symbol_1, gensymed_symbol_4;
    Object minimum_display_interval, x2, temp_1, top_of_stack_1, message_1;
    Object thing;
    SI_Long gensymed_symbol_2, gensymed_symbol_3;
    char temp;

    x_note_fn_call(210,74);
    destination_or_operator = ISVREF(local_stack,IFIX(top_of_stack) - 
	    (SI_Long)5L);
    message_string = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)4L);
    duration_arg = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)3L);
    duration_qm = duration_arg ? evaluation_value_value(duration_arg) : Nil;
    on_workspace_qm = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    above_item_qm = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    below_item_qm = ISVREF(local_stack,IFIX(top_of_stack));
    name_of_data_server = Nil;
    data_server = Nil;
    urgency_qm = Nil;
    object_near_message_qm = Nil;
    above_qm = Nil;
    if ( !TRUEP(destination_or_operator))
	destination_or_operator = Qoperator;
    gensymed_symbol = on_workspace_qm;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_1:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_1;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_1;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_1;
	      end_loop_1:
		temp = TRUEP(Qnil);
	      end_1:;
		goto end_2;
	    }
	    goto next_loop;
	  end_loop:
	    temp = TRUEP(Qnil);
	  end_2:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    if (temp)
	on_workspace_qm = evaluation_value_value(on_workspace_qm);
    gensymed_symbol = above_item_qm;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_2:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_2;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_3:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_3;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_3;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_3;
	      end_loop_3:
		temp = TRUEP(Qnil);
	      end_3:;
		goto end_4;
	    }
	    goto next_loop_2;
	  end_loop_2:
	    temp = TRUEP(Qnil);
	  end_4:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    if (temp)
	above_item_qm = evaluation_value_value(above_item_qm);
    gensymed_symbol = below_item_qm;
    temp = FIXNUMP(gensymed_symbol);
    if (temp);
    else
	temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != (SI_Long)0L ? 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) == 
		(SI_Long)1L : TRUEP(Qnil);
    if (temp);
    else
	temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : TRUEP(Qnil);
    if (temp);
    else
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) != 
		(SI_Long)0L;
    if (temp);
    else if (CONSP(gensymed_symbol)) {
	gensymed_symbol = M_CDR(gensymed_symbol);
	temp = EQ(gensymed_symbol,Qtruth_value);
	if (temp);
	else
	    temp = EQ(gensymed_symbol,Qiteration_state);
	if (temp);
	else if (SYMBOLP(gensymed_symbol)) {
	    gensymed_symbol_1 = CDR(Defined_evaluation_value_types);
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_4:
	    if ( !TRUEP(gensymed_symbol_1))
		goto end_loop_4;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)2L);
	    else {
		gensymed_symbol_1 = ISVREF(gensymed_symbol_1,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_5:
		if ( !TRUEP(gensymed_symbol_1))
		    goto end_loop_5;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol_1));
		if (EQ(gensymed_symbol,gensymed_symbol_4)) {
		    temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
		    goto end_5;
		}
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		goto next_loop_5;
	      end_loop_5:
		temp = TRUEP(Qnil);
	      end_5:;
		goto end_6;
	    }
	    goto next_loop_4;
	  end_loop_4:
	    temp = TRUEP(Qnil);
	  end_6:;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    if (temp)
	below_item_qm = evaluation_value_value(below_item_qm);
    if ( !TRUEP(duration_qm)) {
	minimum_display_interval = ISVREF(Message_board_parameters,
		(SI_Long)27L);
	duration_qm = NUMBERP(minimum_display_interval) ? 
		minimum_display_interval : Nil;
    }
    if (SIMPLE_VECTOR_P(destination_or_operator) && 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(destination_or_operator)) > 
	    (SI_Long)2L &&  !EQ(ISVREF(destination_or_operator,
	    (SI_Long)1L),Qavailable_frame_vector)) {
	x2 = ISVREF(destination_or_operator,(SI_Long)1L);
	temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
		Qg2_defstruct_structure_name_class_description_g2_struct) ?
		 TRUEP(x2) : TRUEP(Qnil);
    }
    else
	temp = TRUEP(Nil);
    if (temp) {
	name_of_data_server = 
		get_slot_value_if_any_function(destination_or_operator,
		Qdata_server_for_messages,Nil);
	data_server = name_of_data_server && SYMBOLP(name_of_data_server) ?
		 lookup_kb_specific_property_value(name_of_data_server,
		Data_server_or_alias_qm_kbprop) : Nil;
    }
    temp_1 = below_item_qm;
    if (temp_1);
    else
	temp_1 = above_item_qm;
    object_near_message_qm = temp_1;
    above_qm =  ! !TRUEP(above_item_qm) ? T : Nil;
    if ( !TRUEP(on_workspace_qm) && (above_item_qm || below_item_qm)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_29,
		message_string);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else {
	if (above_item_qm) {
	    gensymed_symbol_1 = ISVREF(above_item_qm,(SI_Long)14L);
	    gensymed_symbol_1 = gensymed_symbol_1 ? 
		    ISVREF(gensymed_symbol_1,(SI_Long)5L) : Nil;
	    temp =  !EQ(gensymed_symbol_1,on_workspace_qm);
	}
	else
	    temp = TRUEP(Nil);
	if (temp);
	else if (below_item_qm) {
	    gensymed_symbol_1 = ISVREF(below_item_qm,(SI_Long)14L);
	    gensymed_symbol_1 = gensymed_symbol_1 ? 
		    ISVREF(gensymed_symbol_1,(SI_Long)5L) : Nil;
	    temp =  !EQ(gensymed_symbol_1,on_workspace_qm);
	}
	else
	    temp = TRUEP(Nil);
	if (temp) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_30,message_string);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else if (data_server && SIMPLE_VECTOR_P(data_server) && 
		EQ(ISVREF(data_server,(SI_Long)0L),
		Qg2_defstruct_structure_name_data_server_g2_struct)) {
	    temp_1 = SYMBOL_FUNCTION(ISVREF(data_server,(SI_Long)10L));
	    FUNCALL_5(temp_1,message_string,urgency_qm,duration_qm,
		    Current_computation_frame,destination_or_operator);
	}
	else
	    post_on_message_board(8,message_string,urgency_qm,duration_qm,
		    Current_computation_frame,Nil,on_workspace_qm,
		    object_near_message_qm,above_qm);
    }
    thing = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)5L);
    if ( !(FIXNUMP(thing) || SYMBOLP(thing) || SIMPLE_VECTOR_P(thing)))
	reclaim_if_evaluation_value_1(thing);
    thing = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)3L);
    if ( !(FIXNUMP(thing) || SYMBOLP(thing) || SIMPLE_VECTOR_P(thing)))
	reclaim_if_evaluation_value_1(thing);
    thing = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    if ( !(FIXNUMP(thing) || SYMBOLP(thing) || SIMPLE_VECTOR_P(thing)))
	reclaim_if_evaluation_value_1(thing);
    thing = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    if ( !(FIXNUMP(thing) || SYMBOLP(thing) || SIMPLE_VECTOR_P(thing)))
	reclaim_if_evaluation_value_1(thing);
    thing = ISVREF(local_stack,IFIX(top_of_stack));
    if ( !(FIXNUMP(thing) || SYMBOLP(thing) || SIMPLE_VECTOR_P(thing)))
	reclaim_if_evaluation_value_1(thing);
    return VALUES_1(Nil);
}

/* FUNCALL-ADD-RELATION-INST */
Object funcall_add_relation_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object relation_name, item_1, item_2, now_case_arg, returned_value_qm;
    Object temp;
    char now_case_qm;

    x_note_fn_call(210,75);
    relation_name = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)3L);
    item_1 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    item_2 = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    now_case_arg = ISVREF(local_stack,IFIX(top_of_stack));
    now_case_qm = FIXNUM_GE(M_CAR(now_case_arg),Truth);
    returned_value_qm = add_to_relation(relation_name,item_1,item_2,
	    now_case_qm ? T : Nil,T,T);
    if (returned_value_qm && text_string_p(returned_value_qm))
	temp = signal_stack_error_reclaiming_message(returned_value_qm,
		top_of_stack);
    else {
	if ( !(EQ(now_case_arg,Evaluation_true_value) || EQ(now_case_arg,
		Evaluation_false_value)))
	    reclaim_gensym_cons_1(now_case_arg);
	temp = Nil;
    }
    return VALUES_1(temp);
}

/* SIGNAL-STACK-ERROR-RECLAIMING-MESSAGE */
Object signal_stack_error_reclaiming_message(error_message,top_of_stack)
    Object error_message, top_of_stack;
{
    Object top_of_stack_1, text_string, snapshots, snapshots_of_related_blocks;
    Object note_blocks_in_tformat, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object message_1;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    Declare_special(7);

    x_note_fn_call(210,76);
    top_of_stack_1 = top_of_stack;
    text_string = Nil;
    snapshots = Nil;
    snapshots_of_related_blocks = Nil;
    note_blocks_in_tformat = SYMBOL_FUNCTION(Qrecord_block_for_tformat);
    PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
      PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,5);
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
		  twrite_general_string(error_message);
		  reclaim_text_string(error_message);
		  text_string = copy_out_current_wide_string();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
	snapshots = Snapshots_of_related_blocks;
	Snapshots_of_related_blocks = Nil;
	if (Snapshots_of_related_blocks) {
	    reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
	    Snapshots_of_related_blocks = Nil;
	}
      POP_SPECIAL();
    POP_SPECIAL();
    message_1 = make_error_text(text_string,snapshots);
    return raw_stack_error_named_error(top_of_stack_1,message_1);
}

/* FUNCALL-REMOVE-RELATION-INST */
Object funcall_remove_relation_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object relation_name, item_1, item_2, returned_value_qm, temp;

    x_note_fn_call(210,77);
    relation_name = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    item_1 = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    item_2 = ISVREF(local_stack,IFIX(top_of_stack));
    returned_value_qm = remove_from_relation(relation_name,item_1,item_2,T,
	    T,Nil);
    temp = returned_value_qm && text_string_p(returned_value_qm) ? 
	    signal_stack_error_reclaiming_message(returned_value_qm,
	    top_of_stack) : Nil;
    return VALUES_1(temp);
}

/* FUNCALL-CREATE-INST */
Object funcall_create_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object class_evaluation_symbol, class_1, temp, type_name;
    Object frame_serial_number_setf_arg, old, new_1, svref_new_value;
    char temp_1;

    x_note_fn_call(210,78);
    class_evaluation_symbol = ISVREF(local_stack,IFIX(top_of_stack));
    class_1 = class_evaluation_symbol;
    temp = create_action_internal(class_1,top_of_stack);
    SVREF(local_stack,top_of_stack) = temp;
    if (SIMPLE_VECTOR_P(Current_computation_instance)) {
	type_name = ISVREF(Current_computation_instance,(SI_Long)0L);
	temp_1 = EQ(type_name,
		Qg2_defstruct_structure_name_code_body_invocation_g2_struct);
	if (temp_1);
	else
	    temp_1 = EQ(type_name,
		    Qg2_defstruct_structure_name_procedure_invocation_g2_struct);
    }
    else
	temp_1 = TRUEP(Nil);
    if (temp_1)
	update_code_body_invocation_frame_serial_number(Current_computation_instance);
    else if (SIMPLE_VECTOR_P(Current_computation_instance) && 
	    EQ(ISVREF(Current_computation_instance,(SI_Long)0L),
	    Qg2_defstruct_structure_name_rule_instance_g2_struct)) {
	temp = Current_computation_instance;
	frame_serial_number_setf_arg = Current_frame_serial_number;
	old = ISVREF(temp,(SI_Long)11L);
	new_1 = frame_serial_number_setf_arg;
	svref_new_value = (FIXNUMP(old) ||  !TRUEP(old)) && 
		(FIXNUMP(new_1) ||  !TRUEP(new_1)) ? new_1 : 
		frame_serial_number_setf_helper_1(old,new_1);
	SVREF(temp,FIX((SI_Long)11L)) = svref_new_value;
    }
    return VALUES_1(Nil);
}

static Object Qclass_definition;   /* class-definition */

static Object string_constant_31;  /* "~a is not a defined class." */

static Object Qsymbol_properties_hash_table;  /* symbol-properties-hash-table */

static Object Qab_gensym;          /* gensym */

static Object string_constant_32;  /* "Attempted to create an instance of ~a, but this class ~
				    *                     is not allowed to be created transiently."
				    */

static Object Qnot_user_instantiable;  /* not-user-instantiable */

static Object string_constant_33;  /* "An instance of ~a cannot be created because it is either an abstract ~
				    *                 class or the instantitiate attribute on its class-definition ~
				    *                 is set to `no'."
				    */

static Object string_constant_34;  /* "Cannot create an instance of ~a.  This definition is transient." */

static Object string_constant_35;  /* "When creating transient instances of the class ~a, ~
				    *                 a subclass of connection, you must use the additional ~
				    *                 CONNECTED grammar to initially connect it to something."
				    */

/* CREATE-ACTION-INTERNAL */
Object create_action_internal(class_1,top_of_stack)
    Object class_1, top_of_stack;
{
    Object class_description_qm, class_frame_qm, top_of_stack_1, message_1;
    Object temp, gensymed_symbol, gensymed_symbol_1, gensymed_symbol_4, temp_1;
    Object new_cons, global_properties, kb_properties, kb_specific_value;
    Object resulting_value, sub_class_bit_vector, queue_existential_rules;
    Object queue_existential_rules_tail, queue, tail, item, sense, fsn;
    Object last_cons, precomputed_links_and_objects, next_tail, gensym_cons;
    Object cdr_new_value;
    SI_Long gensymed_symbol_2, gensymed_symbol_3, superior_class_bit_number;
    SI_Long sub_class_vector_index, gensymed_symbol_5;
    char temp_2;
    Declare_special(2);

    x_note_fn_call(210,79);
    class_description_qm = 
	    lookup_global_or_kb_specific_property_value(class_1,
	    Class_description_gkbprop);
    class_frame_qm = get_instance_with_name_if_any(Qclass_definition,class_1);
    if ( !TRUEP(class_description_qm)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_31,
		class_1);
	temp = raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if ( !TRUEP(class_can_be_transient_p(class_description_qm))) {
	gensymed_symbol = CDR(Symbol_properties_table);
	gensymed_symbol_1 = class_1;
	gensymed_symbol_2 = SXHASH_SYMBOL_1(class_1) & 
		IFIX(Most_positive_fixnum);
	gensymed_symbol_3 = (SI_Long)0L;
      next_loop:
	if ( !TRUEP(gensymed_symbol))
	    goto end_loop;
	gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
	if (gensymed_symbol_2 < gensymed_symbol_3)
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
	else if (gensymed_symbol_2 > gensymed_symbol_3)
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
	else {
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
	    gensymed_symbol_4 = Nil;
	  next_loop_1:
	    if ( !TRUEP(gensymed_symbol))
		goto end_loop_1;
	    gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
	    if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
		gensymed_symbol = M_CDR(M_CAR(gensymed_symbol));
		goto end_1;
	    }
	    gensymed_symbol = M_CDR(gensymed_symbol);
	    goto next_loop_1;
	  end_loop_1:
	    gensymed_symbol = Qnil;
	  end_1:;
	    goto end_2;
	}
	goto next_loop;
      end_loop:
	gensymed_symbol = Qnil;
      end_2:;
	if ( !TRUEP(gensymed_symbol)) {
	    gensymed_symbol = class_1;
	    temp_1 = Symbol_properties_table;
	    temp = FIX(SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum));
	    new_cons = Available_gensym_conses;
	    if (new_cons) {
		Available_gensym_conses = M_CDR(new_cons);
		gensymed_symbol_1 = new_cons;
	    }
	    else
		gensymed_symbol_1 = Nil;
	    if ( !TRUEP(gensymed_symbol_1))
		gensymed_symbol_1 = replenish_gensym_cons_pool();
	    M_CAR(gensymed_symbol_1) = Qsymbol_properties_hash_table;
	    M_CDR(gensymed_symbol_1) = Nil;
	    inline_note_allocate_cons(gensymed_symbol_1,Qab_gensym);
	    gensymed_symbol = set_balanced_binary_tree_entry(temp_1,Qeq,
		    Nil,T,gensymed_symbol,temp,gensymed_symbol_1);
	}
	global_properties = gensymed_symbol;
	gensymed_symbol = CDR(global_properties);
	gensymed_symbol_1 = Current_kb_specific_property_list_property_name;
	gensymed_symbol_2 = 
		SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
		& IFIX(Most_positive_fixnum);
	gensymed_symbol_3 = (SI_Long)0L;
      next_loop_2:
	if ( !TRUEP(gensymed_symbol))
	    goto end_loop_2;
	gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
	if (gensymed_symbol_2 < gensymed_symbol_3)
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
	else if (gensymed_symbol_2 > gensymed_symbol_3)
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
	else {
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
	    gensymed_symbol_4 = Nil;
	  next_loop_3:
	    if ( !TRUEP(gensymed_symbol))
		goto end_loop_3;
	    gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
	    if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
		kb_properties = M_CDR(M_CAR(gensymed_symbol));
		goto end_3;
	    }
	    gensymed_symbol = M_CDR(gensymed_symbol);
	    goto next_loop_3;
	  end_loop_3:
	    kb_properties = Qnil;
	  end_3:;
	    goto end_4;
	}
	goto next_loop_2;
      end_loop_2:
	kb_properties = Qnil;
      end_4:;
	if (kb_properties);
	else
	    kb_properties = Nil;
	if (kb_properties) {
	    gensymed_symbol = CDR(kb_properties);
	    gensymed_symbol_1 = Class_description_gkbprop;
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(Class_description_gkbprop) 
		    & IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_4:
	    if ( !TRUEP(gensymed_symbol))
		goto end_loop_4;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
	    else {
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_5:
		if ( !TRUEP(gensymed_symbol))
		    goto end_loop_5;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
		if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
		    kb_specific_value = M_CDR(M_CAR(gensymed_symbol));
		    goto end_5;
		}
		gensymed_symbol = M_CDR(gensymed_symbol);
		goto next_loop_5;
	      end_loop_5:
		kb_specific_value = Qnil;
	      end_5:;
		goto end_6;
	    }
	    goto next_loop_4;
	  end_loop_4:
	    kb_specific_value = Qnil;
	  end_6:;
	    if (kb_specific_value);
	    else
		kb_specific_value = No_specific_property_value;
	}
	else
	    kb_specific_value = No_specific_property_value;
	if ( !EQ(kb_specific_value,No_specific_property_value))
	    resulting_value = kb_specific_value;
	else {
	    gensymed_symbol = CDR(global_properties);
	    gensymed_symbol_1 = Class_description_gkbprop;
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(Class_description_gkbprop) 
		    & IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_6:
	    if ( !TRUEP(gensymed_symbol))
		goto end_loop_6;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
	    else {
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_7:
		if ( !TRUEP(gensymed_symbol))
		    goto end_loop_7;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
		if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
		    resulting_value = M_CDR(M_CAR(gensymed_symbol));
		    goto end_7;
		}
		gensymed_symbol = M_CDR(gensymed_symbol);
		goto next_loop_7;
	      end_loop_7:
		resulting_value = Qnil;
	      end_7:;
		goto end_8;
	    }
	    goto next_loop_6;
	  end_loop_6:
	    resulting_value = Qnil;
	  end_8:;
	    if (resulting_value);
	    else
		resulting_value = Nil;
	}
	gensymed_symbol = resulting_value;
	if (gensymed_symbol && ISVREF(gensymed_symbol,(SI_Long)16L)) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_32,class_1);
	    temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_31,class_1);
	    temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else if (assq_function(Qnot_user_instantiable,
	    ISVREF(class_description_qm,(SI_Long)12L))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_33,
		class_1);
	temp = raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if (class_frame_qm && (SI_Long)0L != (IFIX(ISVREF(class_frame_qm,
	    (SI_Long)5L)) & (SI_Long)262144L)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_34,
		class_1);
	temp = raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else {
	sub_class_bit_vector = ISVREF(class_description_qm,(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Connection_class_description,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol_2 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_3 = (SI_Long)1L;
	    gensymed_symbol_5 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_3 = gensymed_symbol_3 << gensymed_symbol_5;
	    gensymed_symbol_2 = gensymed_symbol_2 & gensymed_symbol_3;
	    temp_2 = (SI_Long)0L < gensymed_symbol_2;
	}
	else
	    temp_2 = TRUEP(Nil);
	if (temp_2) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_35,class_1);
	    temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    queue_existential_rules = T;
	    queue_existential_rules_tail = Nil;
	    PUSH_SPECIAL(Queue_existential_rules_tail,queue_existential_rules_tail,
		    1);
	      PUSH_SPECIAL(Queue_existential_rules,queue_existential_rules,0);
		temp = 
			make_transient_item_of_class_description(class_description_qm);
		queue = Queue_existential_rules;
		if ( !EQ(queue,T)) {
		    tail = queue;
		    item = Nil;
		    sense = Nil;
		    fsn = Nil;
		    last_cons = Nil;
		    precomputed_links_and_objects = Nil;
		    next_tail = Nil;
		  next_loop_8:
		    if ( !TRUEP(tail))
			goto end_loop_8;
		    item = CAR(tail);
		    temp_1 = CDR(tail);
		    sense = CAR(temp_1);
		    temp_1 = CDR(tail);
		    temp_1 = CDR(temp_1);
		    fsn = CAR(temp_1);
		    temp_1 = CDR(tail);
		    temp_1 = CDR(temp_1);
		    last_cons = CDR(temp_1);
		    precomputed_links_and_objects = CAR(last_cons);
		    next_tail = CDR(last_cons);
		    safe_invoke_rules_for_existential_chaining(item,sense,
			    fsn,precomputed_links_and_objects);
		    reclaim_frame_serial_number(fsn);
		    tail = next_tail;
		    goto next_loop_8;
		  end_loop_8:
		    if (queue &&  !((SI_Long)0L == 
				inline_debugging_consing())) {
			gensym_cons = queue;
		      next_loop_9:
			inline_note_reclaim_cons(gensym_cons,Qab_gensym);
			if (EQ(gensym_cons,last_cons))
			    goto end_9;
			else if ( !TRUEP(gensym_cons))
			    goto end_9;
			else
			    gensym_cons = CDR(gensym_cons);
			goto next_loop_9;
		      end_loop_9:
		      end_9:;
		    }
		    cdr_new_value = Available_gensym_conses;
		    M_CDR(last_cons) = cdr_new_value;
		    Available_gensym_conses = queue;
		}
	      POP_SPECIAL();
	    POP_SPECIAL();
	}
    }
    return VALUES_1(temp);
}

static Object Qkb_workspace;       /* kb-workspace */

static Object Qkb_workspace_initial_width;  /* kb-workspace-initial-width */

static Object Qkb_workspace_initial_height;  /* kb-workspace-initial-height */

static Object Qmodule_this_is_part_of_qm;  /* module-this-is-part-of? */

static Object Qtrend_chart;        /* trend-chart */

static Object Ktransient;          /* :transient */

/* MAKE-FRAME-FOR-CLASS-DESCRIPTION */
Object make_frame_for_class_description(class_description)
    Object class_description;
{
    Object class_1, sub_class_bit_vector, temp_1, gensymed_symbol_3;
    Object gensymed_symbol_4, gensymed_symbol_5, temp_2, new_cons;
    Object global_properties, kb_properties, kb_specific_value;
    Object resulting_value, temp_3, temp_4;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp;

    x_note_fn_call(210,80);
    class_1 = ISVREF(class_description,(SI_Long)1L);
    sub_class_bit_vector = ISVREF(class_description,(SI_Long)19L);
    superior_class_bit_number = IFIX(ISVREF(Button_class_description,
	    (SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_1 = (SI_Long)1L;
	gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	temp = (SI_Long)0L < gensymed_symbol;
    }
    else
	temp = TRUEP(Nil);
    if (temp)
	temp_1 = make_button(1,class_1);
    else {
	sub_class_bit_vector = ISVREF(class_description,(SI_Long)19L);
	superior_class_bit_number = IFIX(ISVREF(Dial_class_description,
		(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	if (temp)
	    temp_1 = make_dial(class_1);
	else {
	    sub_class_bit_vector = ISVREF(class_description,(SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Meter_class_description,(SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_1 = (SI_Long)1L;
		gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		temp = (SI_Long)0L < gensymed_symbol;
	    }
	    else
		temp = TRUEP(Nil);
	    if (temp)
		temp_1 = make_meter(class_1);
	    else {
		sub_class_bit_vector = ISVREF(class_description,(SI_Long)19L);
		superior_class_bit_number = 
			IFIX(ISVREF(Message_class_description,(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_1 = (SI_Long)1L;
		    gensymed_symbol_2 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		    temp = (SI_Long)0L < gensymed_symbol;
		}
		else
		    temp = TRUEP(Nil);
		if (temp)
		    temp_1 = make_message(2,Nil,class_1);
		else {
		    sub_class_bit_vector = ISVREF(class_description,
			    (SI_Long)19L);
		    superior_class_bit_number = 
			    IFIX(ISVREF(Text_box_class_description,
			    (SI_Long)18L));
		    sub_class_vector_index = superior_class_bit_number >>  
			    -  - (SI_Long)3L;
		    if (sub_class_vector_index < 
			    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				{
			gensymed_symbol = 
				UBYTE_8_ISAREF_1(sub_class_bit_vector,
				sub_class_vector_index);
			gensymed_symbol_1 = (SI_Long)1L;
			gensymed_symbol_2 = superior_class_bit_number & 
				(SI_Long)7L;
			gensymed_symbol_1 = gensymed_symbol_1 << 
				gensymed_symbol_2;
			gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
			temp = (SI_Long)0L < gensymed_symbol;
		    }
		    else
			temp = TRUEP(Nil);
		    if (temp)
			temp_1 = make_text_box(class_1);
		    else {
			sub_class_bit_vector = ISVREF(class_description,
				(SI_Long)19L);
			superior_class_bit_number = 
				IFIX(ISVREF(Readout_table_class_description,
				(SI_Long)18L));
			sub_class_vector_index = superior_class_bit_number 
				>>  -  - (SI_Long)3L;
			if (sub_class_vector_index < 
				IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				    {
			    gensymed_symbol = 
				    UBYTE_8_ISAREF_1(sub_class_bit_vector,
				    sub_class_vector_index);
			    gensymed_symbol_1 = (SI_Long)1L;
			    gensymed_symbol_2 = superior_class_bit_number 
				    & (SI_Long)7L;
			    gensymed_symbol_1 = gensymed_symbol_1 << 
				    gensymed_symbol_2;
			    gensymed_symbol = gensymed_symbol & 
				    gensymed_symbol_1;
			    temp = (SI_Long)0L < gensymed_symbol;
			}
			else
			    temp = TRUEP(Nil);
			if (temp)
			    temp_1 = make_readout_table(class_1);
			else {
			    sub_class_bit_vector = 
				    ISVREF(class_description,(SI_Long)19L);
			    superior_class_bit_number = 
				    IFIX(ISVREF(Workspace_class_description,
				    (SI_Long)18L));
			    sub_class_vector_index = 
				    superior_class_bit_number >>  -  - 
				    (SI_Long)3L;
			    if (sub_class_vector_index < 
				    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
					{
				gensymed_symbol = 
					UBYTE_8_ISAREF_1(sub_class_bit_vector,
					sub_class_vector_index);
				gensymed_symbol_1 = (SI_Long)1L;
				gensymed_symbol_2 = 
					superior_class_bit_number & 
					(SI_Long)7L;
				gensymed_symbol_1 = gensymed_symbol_1 << 
					gensymed_symbol_2;
				gensymed_symbol = gensymed_symbol & 
					gensymed_symbol_1;
				temp = (SI_Long)0L < gensymed_symbol;
			    }
			    else
				temp = TRUEP(Nil);
			    if (temp) {
				temp = EQ(class_1,Qkb_workspace);
				if (temp);
				else {
				    gensymed_symbol_3 = 
					    CDR(Symbol_properties_table);
				    gensymed_symbol_4 = class_1;
				    gensymed_symbol = 
					    SXHASH_SYMBOL_1(class_1) & 
					    IFIX(Most_positive_fixnum);
				    gensymed_symbol_1 = (SI_Long)0L;
				  next_loop:
				    if ( !TRUEP(gensymed_symbol_3))
					goto end_loop;
				    gensymed_symbol_1 = 
					    IFIX(ISVREF(gensymed_symbol_3,
					    (SI_Long)0L));
				    if (gensymed_symbol < gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)1L);
				    else if (gensymed_symbol > 
					    gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)2L);
				    else {
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)3L);
					gensymed_symbol_5 = Nil;
				      next_loop_1:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_1;
					gensymed_symbol_5 = 
						M_CAR(M_CAR(gensymed_symbol_3));
					if (EQ(gensymed_symbol_4,
						gensymed_symbol_5)) {
					    gensymed_symbol_3 = 
						    M_CDR(M_CAR(gensymed_symbol_3));
					    goto end_1;
					}
					gensymed_symbol_3 = 
						M_CDR(gensymed_symbol_3);
					goto next_loop_1;
				      end_loop_1:
					gensymed_symbol_3 = Qnil;
				      end_1:;
					goto end_2;
				    }
				    goto next_loop;
				  end_loop:
				    gensymed_symbol_3 = Qnil;
				  end_2:;
				    if ( !TRUEP(gensymed_symbol_3)) {
					gensymed_symbol_3 = class_1;
					temp_2 = Symbol_properties_table;
					temp_1 = 
						FIX(SXHASH_SYMBOL_1(gensymed_symbol_3) 
						& IFIX(Most_positive_fixnum));
					new_cons = Available_gensym_conses;
					if (new_cons) {
					    Available_gensym_conses = 
						    M_CDR(new_cons);
					    gensymed_symbol_4 = new_cons;
					}
					else
					    gensymed_symbol_4 = Nil;
					if ( !TRUEP(gensymed_symbol_4))
					    gensymed_symbol_4 = 
						    replenish_gensym_cons_pool();
					M_CAR(gensymed_symbol_4) = 
						Qsymbol_properties_hash_table;
					M_CDR(gensymed_symbol_4) = Nil;
					inline_note_allocate_cons(gensymed_symbol_4,
						Qab_gensym);
					gensymed_symbol_3 = 
						set_balanced_binary_tree_entry(temp_2,
						Qeq,Nil,T,
						gensymed_symbol_3,temp_1,
						gensymed_symbol_4);
				    }
				    global_properties = gensymed_symbol_3;
				    gensymed_symbol_3 = CDR(global_properties);
				    gensymed_symbol_4 = 
					    Current_kb_specific_property_list_property_name;
				    gensymed_symbol = 
					    SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
					    & IFIX(Most_positive_fixnum);
				    gensymed_symbol_1 = (SI_Long)0L;
				  next_loop_2:
				    if ( !TRUEP(gensymed_symbol_3))
					goto end_loop_2;
				    gensymed_symbol_1 = 
					    IFIX(ISVREF(gensymed_symbol_3,
					    (SI_Long)0L));
				    if (gensymed_symbol < gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)1L);
				    else if (gensymed_symbol > 
					    gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)2L);
				    else {
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)3L);
					gensymed_symbol_5 = Nil;
				      next_loop_3:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_3;
					gensymed_symbol_5 = 
						M_CAR(M_CAR(gensymed_symbol_3));
					if (EQ(gensymed_symbol_4,
						gensymed_symbol_5)) {
					    kb_properties = 
						    M_CDR(M_CAR(gensymed_symbol_3));
					    goto end_3;
					}
					gensymed_symbol_3 = 
						M_CDR(gensymed_symbol_3);
					goto next_loop_3;
				      end_loop_3:
					kb_properties = Qnil;
				      end_3:;
					goto end_4;
				    }
				    goto next_loop_2;
				  end_loop_2:
				    kb_properties = Qnil;
				  end_4:;
				    if (kb_properties);
				    else
					kb_properties = Nil;
				    if (kb_properties) {
					gensymed_symbol_3 = CDR(kb_properties);
					gensymed_symbol_4 = 
						Class_description_gkbprop;
					gensymed_symbol = 
						SXHASH_SYMBOL_1(Class_description_gkbprop) 
						& IFIX(Most_positive_fixnum);
					gensymed_symbol_1 = (SI_Long)0L;
				      next_loop_4:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_4;
					gensymed_symbol_1 = 
						IFIX(ISVREF(gensymed_symbol_3,
						(SI_Long)0L));
					if (gensymed_symbol < 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)1L);
					else if (gensymed_symbol > 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)2L);
					else {
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)3L);
					    gensymed_symbol_5 = Nil;
					  next_loop_5:
					    if ( !TRUEP(gensymed_symbol_3))
						goto end_loop_5;
					    gensymed_symbol_5 = 
						    M_CAR(M_CAR(gensymed_symbol_3));
					    if (EQ(gensymed_symbol_4,
						    gensymed_symbol_5)) {
						kb_specific_value = 
							M_CDR(M_CAR(gensymed_symbol_3));
						goto end_5;
					    }
					    gensymed_symbol_3 = 
						    M_CDR(gensymed_symbol_3);
					    goto next_loop_5;
					  end_loop_5:
					    kb_specific_value = Qnil;
					  end_5:;
					    goto end_6;
					}
					goto next_loop_4;
				      end_loop_4:
					kb_specific_value = Qnil;
				      end_6:;
					if (kb_specific_value);
					else
					    kb_specific_value = 
						    No_specific_property_value;
				    }
				    else
					kb_specific_value = 
						No_specific_property_value;
				    if ( !EQ(kb_specific_value,
					    No_specific_property_value))
					resulting_value = kb_specific_value;
				    else {
					gensymed_symbol_3 = 
						CDR(global_properties);
					gensymed_symbol_4 = 
						Class_description_gkbprop;
					gensymed_symbol = 
						SXHASH_SYMBOL_1(Class_description_gkbprop) 
						& IFIX(Most_positive_fixnum);
					gensymed_symbol_1 = (SI_Long)0L;
				      next_loop_6:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_6;
					gensymed_symbol_1 = 
						IFIX(ISVREF(gensymed_symbol_3,
						(SI_Long)0L));
					if (gensymed_symbol < 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)1L);
					else if (gensymed_symbol > 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)2L);
					else {
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)3L);
					    gensymed_symbol_5 = Nil;
					  next_loop_7:
					    if ( !TRUEP(gensymed_symbol_3))
						goto end_loop_7;
					    gensymed_symbol_5 = 
						    M_CAR(M_CAR(gensymed_symbol_3));
					    if (EQ(gensymed_symbol_4,
						    gensymed_symbol_5)) {
						resulting_value = 
							M_CDR(M_CAR(gensymed_symbol_3));
						goto end_7;
					    }
					    gensymed_symbol_3 = 
						    M_CDR(gensymed_symbol_3);
					    goto next_loop_7;
					  end_loop_7:
					    resulting_value = Qnil;
					  end_7:;
					    goto end_8;
					}
					goto next_loop_6;
				      end_loop_6:
					resulting_value = Qnil;
				      end_8:;
					if (resulting_value);
					else
					    resulting_value = Nil;
				    }
				    gensymed_symbol_3 = resulting_value;
				    if (gensymed_symbol_3) {
					sub_class_bit_vector = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)19L);
					superior_class_bit_number = 
						IFIX(ISVREF(Kb_workspace_class_description,
						(SI_Long)18L));
					sub_class_vector_index = 
						superior_class_bit_number 
						>>  -  - (SI_Long)3L;
					if (sub_class_vector_index < 
						IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
						    {
					    gensymed_symbol = 
						    UBYTE_8_ISAREF_1(sub_class_bit_vector,
						    sub_class_vector_index);
					    gensymed_symbol_1 = (SI_Long)1L;
					    gensymed_symbol_2 = 
						    superior_class_bit_number 
						    & (SI_Long)7L;
					    gensymed_symbol_1 = 
						    gensymed_symbol_1 << 
						    gensymed_symbol_2;
					    gensymed_symbol = 
						    gensymed_symbol & 
						    gensymed_symbol_1;
					    temp = (SI_Long)0L < 
						    gensymed_symbol;
					}
					else
					    temp = TRUEP(Nil);
				    }
				    else
					temp = TRUEP(Nil);
				    temp =  !temp;
				}
				if (temp)
				    temp_1 = 
					    make_new_top_level_kb_workspace(1,
					    Qkb_workspace);
				else {
				    gensymed_symbol_3 = 
					    CDR(Symbol_properties_table);
				    gensymed_symbol_4 = class_1;
				    gensymed_symbol = 
					    SXHASH_SYMBOL_1(class_1) & 
					    IFIX(Most_positive_fixnum);
				    gensymed_symbol_1 = (SI_Long)0L;
				  next_loop_8:
				    if ( !TRUEP(gensymed_symbol_3))
					goto end_loop_8;
				    gensymed_symbol_1 = 
					    IFIX(ISVREF(gensymed_symbol_3,
					    (SI_Long)0L));
				    if (gensymed_symbol < gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)1L);
				    else if (gensymed_symbol > 
					    gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)2L);
				    else {
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)3L);
					gensymed_symbol_5 = Nil;
				      next_loop_9:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_9;
					gensymed_symbol_5 = 
						M_CAR(M_CAR(gensymed_symbol_3));
					if (EQ(gensymed_symbol_4,
						gensymed_symbol_5)) {
					    gensymed_symbol_3 = 
						    M_CDR(M_CAR(gensymed_symbol_3));
					    goto end_9;
					}
					gensymed_symbol_3 = 
						M_CDR(gensymed_symbol_3);
					goto next_loop_9;
				      end_loop_9:
					gensymed_symbol_3 = Qnil;
				      end_9:;
					goto end_10;
				    }
				    goto next_loop_8;
				  end_loop_8:
				    gensymed_symbol_3 = Qnil;
				  end_10:;
				    if ( !TRUEP(gensymed_symbol_3)) {
					gensymed_symbol_3 = class_1;
					temp_2 = Symbol_properties_table;
					temp_1 = 
						FIX(SXHASH_SYMBOL_1(gensymed_symbol_3) 
						& IFIX(Most_positive_fixnum));
					new_cons = Available_gensym_conses;
					if (new_cons) {
					    Available_gensym_conses = 
						    M_CDR(new_cons);
					    gensymed_symbol_4 = new_cons;
					}
					else
					    gensymed_symbol_4 = Nil;
					if ( !TRUEP(gensymed_symbol_4))
					    gensymed_symbol_4 = 
						    replenish_gensym_cons_pool();
					M_CAR(gensymed_symbol_4) = 
						Qsymbol_properties_hash_table;
					M_CDR(gensymed_symbol_4) = Nil;
					inline_note_allocate_cons(gensymed_symbol_4,
						Qab_gensym);
					gensymed_symbol_3 = 
						set_balanced_binary_tree_entry(temp_2,
						Qeq,Nil,T,
						gensymed_symbol_3,temp_1,
						gensymed_symbol_4);
				    }
				    global_properties = gensymed_symbol_3;
				    gensymed_symbol_3 = CDR(global_properties);
				    gensymed_symbol_4 = 
					    Current_kb_specific_property_list_property_name;
				    gensymed_symbol = 
					    SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
					    & IFIX(Most_positive_fixnum);
				    gensymed_symbol_1 = (SI_Long)0L;
				  next_loop_10:
				    if ( !TRUEP(gensymed_symbol_3))
					goto end_loop_10;
				    gensymed_symbol_1 = 
					    IFIX(ISVREF(gensymed_symbol_3,
					    (SI_Long)0L));
				    if (gensymed_symbol < gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)1L);
				    else if (gensymed_symbol > 
					    gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)2L);
				    else {
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)3L);
					gensymed_symbol_5 = Nil;
				      next_loop_11:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_11;
					gensymed_symbol_5 = 
						M_CAR(M_CAR(gensymed_symbol_3));
					if (EQ(gensymed_symbol_4,
						gensymed_symbol_5)) {
					    kb_properties = 
						    M_CDR(M_CAR(gensymed_symbol_3));
					    goto end_11;
					}
					gensymed_symbol_3 = 
						M_CDR(gensymed_symbol_3);
					goto next_loop_11;
				      end_loop_11:
					kb_properties = Qnil;
				      end_11:;
					goto end_12;
				    }
				    goto next_loop_10;
				  end_loop_10:
				    kb_properties = Qnil;
				  end_12:;
				    if (kb_properties);
				    else
					kb_properties = Nil;
				    if (kb_properties) {
					gensymed_symbol_3 = CDR(kb_properties);
					gensymed_symbol_4 = 
						Class_description_gkbprop;
					gensymed_symbol = 
						SXHASH_SYMBOL_1(Class_description_gkbprop) 
						& IFIX(Most_positive_fixnum);
					gensymed_symbol_1 = (SI_Long)0L;
				      next_loop_12:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_12;
					gensymed_symbol_1 = 
						IFIX(ISVREF(gensymed_symbol_3,
						(SI_Long)0L));
					if (gensymed_symbol < 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)1L);
					else if (gensymed_symbol > 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)2L);
					else {
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)3L);
					    gensymed_symbol_5 = Nil;
					  next_loop_13:
					    if ( !TRUEP(gensymed_symbol_3))
						goto end_loop_13;
					    gensymed_symbol_5 = 
						    M_CAR(M_CAR(gensymed_symbol_3));
					    if (EQ(gensymed_symbol_4,
						    gensymed_symbol_5)) {
						kb_specific_value = 
							M_CDR(M_CAR(gensymed_symbol_3));
						goto end_13;
					    }
					    gensymed_symbol_3 = 
						    M_CDR(gensymed_symbol_3);
					    goto next_loop_13;
					  end_loop_13:
					    kb_specific_value = Qnil;
					  end_13:;
					    goto end_14;
					}
					goto next_loop_12;
				      end_loop_12:
					kb_specific_value = Qnil;
				      end_14:;
					if (kb_specific_value);
					else
					    kb_specific_value = 
						    No_specific_property_value;
				    }
				    else
					kb_specific_value = 
						No_specific_property_value;
				    if ( !EQ(kb_specific_value,
					    No_specific_property_value))
					resulting_value = kb_specific_value;
				    else {
					gensymed_symbol_3 = 
						CDR(global_properties);
					gensymed_symbol_4 = 
						Class_description_gkbprop;
					gensymed_symbol = 
						SXHASH_SYMBOL_1(Class_description_gkbprop) 
						& IFIX(Most_positive_fixnum);
					gensymed_symbol_1 = (SI_Long)0L;
				      next_loop_14:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_14;
					gensymed_symbol_1 = 
						IFIX(ISVREF(gensymed_symbol_3,
						(SI_Long)0L));
					if (gensymed_symbol < 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)1L);
					else if (gensymed_symbol > 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)2L);
					else {
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)3L);
					    gensymed_symbol_5 = Nil;
					  next_loop_15:
					    if ( !TRUEP(gensymed_symbol_3))
						goto end_loop_15;
					    gensymed_symbol_5 = 
						    M_CAR(M_CAR(gensymed_symbol_3));
					    if (EQ(gensymed_symbol_4,
						    gensymed_symbol_5)) {
						resulting_value = 
							M_CDR(M_CAR(gensymed_symbol_3));
						goto end_15;
					    }
					    gensymed_symbol_3 = 
						    M_CDR(gensymed_symbol_3);
					    goto next_loop_15;
					  end_loop_15:
					    resulting_value = Qnil;
					  end_15:;
					    goto end_16;
					}
					goto next_loop_14;
				      end_loop_14:
					resulting_value = Qnil;
				      end_16:;
					if (resulting_value);
					else
					    resulting_value = Nil;
				    }
				    gensymed_symbol_3 = resulting_value;
				    temp_2 = 
					    ISVREF(get_slot_description_of_class_description_function(Qkb_workspace_initial_width,
					    gensymed_symbol_3,Nil),
					    (SI_Long)6L);
				    gensymed_symbol_3 = 
					    CDR(Symbol_properties_table);
				    gensymed_symbol_4 = class_1;
				    gensymed_symbol = 
					    SXHASH_SYMBOL_1(class_1) & 
					    IFIX(Most_positive_fixnum);
				    gensymed_symbol_1 = (SI_Long)0L;
				  next_loop_16:
				    if ( !TRUEP(gensymed_symbol_3))
					goto end_loop_16;
				    gensymed_symbol_1 = 
					    IFIX(ISVREF(gensymed_symbol_3,
					    (SI_Long)0L));
				    if (gensymed_symbol < gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)1L);
				    else if (gensymed_symbol > 
					    gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)2L);
				    else {
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)3L);
					gensymed_symbol_5 = Nil;
				      next_loop_17:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_17;
					gensymed_symbol_5 = 
						M_CAR(M_CAR(gensymed_symbol_3));
					if (EQ(gensymed_symbol_4,
						gensymed_symbol_5)) {
					    gensymed_symbol_3 = 
						    M_CDR(M_CAR(gensymed_symbol_3));
					    goto end_17;
					}
					gensymed_symbol_3 = 
						M_CDR(gensymed_symbol_3);
					goto next_loop_17;
				      end_loop_17:
					gensymed_symbol_3 = Qnil;
				      end_17:;
					goto end_18;
				    }
				    goto next_loop_16;
				  end_loop_16:
				    gensymed_symbol_3 = Qnil;
				  end_18:;
				    if ( !TRUEP(gensymed_symbol_3)) {
					gensymed_symbol_3 = class_1;
					temp_3 = Symbol_properties_table;
					temp_1 = 
						FIX(SXHASH_SYMBOL_1(gensymed_symbol_3) 
						& IFIX(Most_positive_fixnum));
					new_cons = Available_gensym_conses;
					if (new_cons) {
					    Available_gensym_conses = 
						    M_CDR(new_cons);
					    gensymed_symbol_4 = new_cons;
					}
					else
					    gensymed_symbol_4 = Nil;
					if ( !TRUEP(gensymed_symbol_4))
					    gensymed_symbol_4 = 
						    replenish_gensym_cons_pool();
					M_CAR(gensymed_symbol_4) = 
						Qsymbol_properties_hash_table;
					M_CDR(gensymed_symbol_4) = Nil;
					inline_note_allocate_cons(gensymed_symbol_4,
						Qab_gensym);
					gensymed_symbol_3 = 
						set_balanced_binary_tree_entry(temp_3,
						Qeq,Nil,T,
						gensymed_symbol_3,temp_1,
						gensymed_symbol_4);
				    }
				    global_properties = gensymed_symbol_3;
				    gensymed_symbol_3 = CDR(global_properties);
				    gensymed_symbol_4 = 
					    Current_kb_specific_property_list_property_name;
				    gensymed_symbol = 
					    SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
					    & IFIX(Most_positive_fixnum);
				    gensymed_symbol_1 = (SI_Long)0L;
				  next_loop_18:
				    if ( !TRUEP(gensymed_symbol_3))
					goto end_loop_18;
				    gensymed_symbol_1 = 
					    IFIX(ISVREF(gensymed_symbol_3,
					    (SI_Long)0L));
				    if (gensymed_symbol < gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)1L);
				    else if (gensymed_symbol > 
					    gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)2L);
				    else {
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)3L);
					gensymed_symbol_5 = Nil;
				      next_loop_19:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_19;
					gensymed_symbol_5 = 
						M_CAR(M_CAR(gensymed_symbol_3));
					if (EQ(gensymed_symbol_4,
						gensymed_symbol_5)) {
					    kb_properties = 
						    M_CDR(M_CAR(gensymed_symbol_3));
					    goto end_19;
					}
					gensymed_symbol_3 = 
						M_CDR(gensymed_symbol_3);
					goto next_loop_19;
				      end_loop_19:
					kb_properties = Qnil;
				      end_19:;
					goto end_20;
				    }
				    goto next_loop_18;
				  end_loop_18:
				    kb_properties = Qnil;
				  end_20:;
				    if (kb_properties);
				    else
					kb_properties = Nil;
				    if (kb_properties) {
					gensymed_symbol_3 = CDR(kb_properties);
					gensymed_symbol_4 = 
						Class_description_gkbprop;
					gensymed_symbol = 
						SXHASH_SYMBOL_1(Class_description_gkbprop) 
						& IFIX(Most_positive_fixnum);
					gensymed_symbol_1 = (SI_Long)0L;
				      next_loop_20:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_20;
					gensymed_symbol_1 = 
						IFIX(ISVREF(gensymed_symbol_3,
						(SI_Long)0L));
					if (gensymed_symbol < 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)1L);
					else if (gensymed_symbol > 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)2L);
					else {
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)3L);
					    gensymed_symbol_5 = Nil;
					  next_loop_21:
					    if ( !TRUEP(gensymed_symbol_3))
						goto end_loop_21;
					    gensymed_symbol_5 = 
						    M_CAR(M_CAR(gensymed_symbol_3));
					    if (EQ(gensymed_symbol_4,
						    gensymed_symbol_5)) {
						kb_specific_value = 
							M_CDR(M_CAR(gensymed_symbol_3));
						goto end_21;
					    }
					    gensymed_symbol_3 = 
						    M_CDR(gensymed_symbol_3);
					    goto next_loop_21;
					  end_loop_21:
					    kb_specific_value = Qnil;
					  end_21:;
					    goto end_22;
					}
					goto next_loop_20;
				      end_loop_20:
					kb_specific_value = Qnil;
				      end_22:;
					if (kb_specific_value);
					else
					    kb_specific_value = 
						    No_specific_property_value;
				    }
				    else
					kb_specific_value = 
						No_specific_property_value;
				    if ( !EQ(kb_specific_value,
					    No_specific_property_value))
					resulting_value = kb_specific_value;
				    else {
					gensymed_symbol_3 = 
						CDR(global_properties);
					gensymed_symbol_4 = 
						Class_description_gkbprop;
					gensymed_symbol = 
						SXHASH_SYMBOL_1(Class_description_gkbprop) 
						& IFIX(Most_positive_fixnum);
					gensymed_symbol_1 = (SI_Long)0L;
				      next_loop_22:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_22;
					gensymed_symbol_1 = 
						IFIX(ISVREF(gensymed_symbol_3,
						(SI_Long)0L));
					if (gensymed_symbol < 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)1L);
					else if (gensymed_symbol > 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)2L);
					else {
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)3L);
					    gensymed_symbol_5 = Nil;
					  next_loop_23:
					    if ( !TRUEP(gensymed_symbol_3))
						goto end_loop_23;
					    gensymed_symbol_5 = 
						    M_CAR(M_CAR(gensymed_symbol_3));
					    if (EQ(gensymed_symbol_4,
						    gensymed_symbol_5)) {
						resulting_value = 
							M_CDR(M_CAR(gensymed_symbol_3));
						goto end_23;
					    }
					    gensymed_symbol_3 = 
						    M_CDR(gensymed_symbol_3);
					    goto next_loop_23;
					  end_loop_23:
					    resulting_value = Qnil;
					  end_23:;
					    goto end_24;
					}
					goto next_loop_22;
				      end_loop_22:
					resulting_value = Qnil;
				      end_24:;
					if (resulting_value);
					else
					    resulting_value = Nil;
				    }
				    gensymed_symbol_3 = resulting_value;
				    temp_1 = 
					    ISVREF(get_slot_description_of_class_description_function(Qkb_workspace_initial_height,
					    gensymed_symbol_3,Nil),
					    (SI_Long)6L);
				    gensymed_symbol_3 = 
					    CDR(Symbol_properties_table);
				    gensymed_symbol_4 = class_1;
				    gensymed_symbol = 
					    SXHASH_SYMBOL_1(class_1) & 
					    IFIX(Most_positive_fixnum);
				    gensymed_symbol_1 = (SI_Long)0L;
				  next_loop_24:
				    if ( !TRUEP(gensymed_symbol_3))
					goto end_loop_24;
				    gensymed_symbol_1 = 
					    IFIX(ISVREF(gensymed_symbol_3,
					    (SI_Long)0L));
				    if (gensymed_symbol < gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)1L);
				    else if (gensymed_symbol > 
					    gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)2L);
				    else {
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)3L);
					gensymed_symbol_5 = Nil;
				      next_loop_25:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_25;
					gensymed_symbol_5 = 
						M_CAR(M_CAR(gensymed_symbol_3));
					if (EQ(gensymed_symbol_4,
						gensymed_symbol_5)) {
					    gensymed_symbol_3 = 
						    M_CDR(M_CAR(gensymed_symbol_3));
					    goto end_25;
					}
					gensymed_symbol_3 = 
						M_CDR(gensymed_symbol_3);
					goto next_loop_25;
				      end_loop_25:
					gensymed_symbol_3 = Qnil;
				      end_25:;
					goto end_26;
				    }
				    goto next_loop_24;
				  end_loop_24:
				    gensymed_symbol_3 = Qnil;
				  end_26:;
				    if ( !TRUEP(gensymed_symbol_3)) {
					gensymed_symbol_3 = class_1;
					temp_4 = Symbol_properties_table;
					temp_3 = 
						FIX(SXHASH_SYMBOL_1(gensymed_symbol_3) 
						& IFIX(Most_positive_fixnum));
					new_cons = Available_gensym_conses;
					if (new_cons) {
					    Available_gensym_conses = 
						    M_CDR(new_cons);
					    gensymed_symbol_4 = new_cons;
					}
					else
					    gensymed_symbol_4 = Nil;
					if ( !TRUEP(gensymed_symbol_4))
					    gensymed_symbol_4 = 
						    replenish_gensym_cons_pool();
					M_CAR(gensymed_symbol_4) = 
						Qsymbol_properties_hash_table;
					M_CDR(gensymed_symbol_4) = Nil;
					inline_note_allocate_cons(gensymed_symbol_4,
						Qab_gensym);
					gensymed_symbol_3 = 
						set_balanced_binary_tree_entry(temp_4,
						Qeq,Nil,T,
						gensymed_symbol_3,temp_3,
						gensymed_symbol_4);
				    }
				    global_properties = gensymed_symbol_3;
				    gensymed_symbol_3 = CDR(global_properties);
				    gensymed_symbol_4 = 
					    Current_kb_specific_property_list_property_name;
				    gensymed_symbol = 
					    SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
					    & IFIX(Most_positive_fixnum);
				    gensymed_symbol_1 = (SI_Long)0L;
				  next_loop_26:
				    if ( !TRUEP(gensymed_symbol_3))
					goto end_loop_26;
				    gensymed_symbol_1 = 
					    IFIX(ISVREF(gensymed_symbol_3,
					    (SI_Long)0L));
				    if (gensymed_symbol < gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)1L);
				    else if (gensymed_symbol > 
					    gensymed_symbol_1)
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)2L);
				    else {
					gensymed_symbol_3 = 
						ISVREF(gensymed_symbol_3,
						(SI_Long)3L);
					gensymed_symbol_5 = Nil;
				      next_loop_27:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_27;
					gensymed_symbol_5 = 
						M_CAR(M_CAR(gensymed_symbol_3));
					if (EQ(gensymed_symbol_4,
						gensymed_symbol_5)) {
					    kb_properties = 
						    M_CDR(M_CAR(gensymed_symbol_3));
					    goto end_27;
					}
					gensymed_symbol_3 = 
						M_CDR(gensymed_symbol_3);
					goto next_loop_27;
				      end_loop_27:
					kb_properties = Qnil;
				      end_27:;
					goto end_28;
				    }
				    goto next_loop_26;
				  end_loop_26:
				    kb_properties = Qnil;
				  end_28:;
				    if (kb_properties);
				    else
					kb_properties = Nil;
				    if (kb_properties) {
					gensymed_symbol_3 = CDR(kb_properties);
					gensymed_symbol_4 = 
						Class_description_gkbprop;
					gensymed_symbol = 
						SXHASH_SYMBOL_1(Class_description_gkbprop) 
						& IFIX(Most_positive_fixnum);
					gensymed_symbol_1 = (SI_Long)0L;
				      next_loop_28:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_28;
					gensymed_symbol_1 = 
						IFIX(ISVREF(gensymed_symbol_3,
						(SI_Long)0L));
					if (gensymed_symbol < 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)1L);
					else if (gensymed_symbol > 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)2L);
					else {
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)3L);
					    gensymed_symbol_5 = Nil;
					  next_loop_29:
					    if ( !TRUEP(gensymed_symbol_3))
						goto end_loop_29;
					    gensymed_symbol_5 = 
						    M_CAR(M_CAR(gensymed_symbol_3));
					    if (EQ(gensymed_symbol_4,
						    gensymed_symbol_5)) {
						kb_specific_value = 
							M_CDR(M_CAR(gensymed_symbol_3));
						goto end_29;
					    }
					    gensymed_symbol_3 = 
						    M_CDR(gensymed_symbol_3);
					    goto next_loop_29;
					  end_loop_29:
					    kb_specific_value = Qnil;
					  end_29:;
					    goto end_30;
					}
					goto next_loop_28;
				      end_loop_28:
					kb_specific_value = Qnil;
				      end_30:;
					if (kb_specific_value);
					else
					    kb_specific_value = 
						    No_specific_property_value;
				    }
				    else
					kb_specific_value = 
						No_specific_property_value;
				    if ( !EQ(kb_specific_value,
					    No_specific_property_value))
					resulting_value = kb_specific_value;
				    else {
					gensymed_symbol_3 = 
						CDR(global_properties);
					gensymed_symbol_4 = 
						Class_description_gkbprop;
					gensymed_symbol = 
						SXHASH_SYMBOL_1(Class_description_gkbprop) 
						& IFIX(Most_positive_fixnum);
					gensymed_symbol_1 = (SI_Long)0L;
				      next_loop_30:
					if ( !TRUEP(gensymed_symbol_3))
					    goto end_loop_30;
					gensymed_symbol_1 = 
						IFIX(ISVREF(gensymed_symbol_3,
						(SI_Long)0L));
					if (gensymed_symbol < 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)1L);
					else if (gensymed_symbol > 
						gensymed_symbol_1)
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)2L);
					else {
					    gensymed_symbol_3 = 
						    ISVREF(gensymed_symbol_3,
						    (SI_Long)3L);
					    gensymed_symbol_5 = Nil;
					  next_loop_31:
					    if ( !TRUEP(gensymed_symbol_3))
						goto end_loop_31;
					    gensymed_symbol_5 = 
						    M_CAR(M_CAR(gensymed_symbol_3));
					    if (EQ(gensymed_symbol_4,
						    gensymed_symbol_5)) {
						resulting_value = 
							M_CDR(M_CAR(gensymed_symbol_3));
						goto end_31;
					    }
					    gensymed_symbol_3 = 
						    M_CDR(gensymed_symbol_3);
					    goto next_loop_31;
					  end_loop_31:
					    resulting_value = Qnil;
					  end_31:;
					    goto end_32;
					}
					goto next_loop_30;
				      end_loop_30:
					resulting_value = Qnil;
				      end_32:;
					if (resulting_value);
					else
					    resulting_value = Nil;
				    }
				    gensymed_symbol_3 = resulting_value;
				    temp_1 = 
					    make_new_top_level_kb_workspace(7,
					    class_1,Nil,Nil,Nil,temp_2,
					    temp_1,
					    ISVREF(get_slot_description_of_class_description_function(Qmodule_this_is_part_of_qm,
					    gensymed_symbol_3,Nil),
					    (SI_Long)6L));
				}
			    }
			    else {
				sub_class_bit_vector = 
					ISVREF(class_description,(SI_Long)19L);
				superior_class_bit_number = 
					IFIX(ISVREF(Graph_class_description,
					(SI_Long)18L));
				sub_class_vector_index = 
					superior_class_bit_number >>  -  - 
					(SI_Long)3L;
				if (sub_class_vector_index < 
					IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
					    {
				    gensymed_symbol = 
					    UBYTE_8_ISAREF_1(sub_class_bit_vector,
					    sub_class_vector_index);
				    gensymed_symbol_1 = (SI_Long)1L;
				    gensymed_symbol_2 = 
					    superior_class_bit_number & 
					    (SI_Long)7L;
				    gensymed_symbol_1 = gensymed_symbol_1 
					    << gensymed_symbol_2;
				    gensymed_symbol = gensymed_symbol & 
					    gensymed_symbol_1;
				    temp = (SI_Long)0L < gensymed_symbol;
				}
				else
				    temp = TRUEP(Nil);
				if (temp)
				    temp_1 = make_graph(class_1);
				else {
				    gensymed_symbol_3 = 
					    lookup_global_or_kb_specific_property_value(Qtrend_chart,
					    Class_description_gkbprop);
				    if (gensymed_symbol_3) {
					sub_class_bit_vector = 
						ISVREF(class_description,
						(SI_Long)19L);
					superior_class_bit_number = 
						IFIX(ISVREF(gensymed_symbol_3,
						(SI_Long)18L));
					sub_class_vector_index = 
						superior_class_bit_number 
						>>  -  - (SI_Long)3L;
					if (sub_class_vector_index < 
						IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
						    {
					    gensymed_symbol = 
						    UBYTE_8_ISAREF_1(sub_class_bit_vector,
						    sub_class_vector_index);
					    gensymed_symbol_1 = (SI_Long)1L;
					    gensymed_symbol_2 = 
						    superior_class_bit_number 
						    & (SI_Long)7L;
					    gensymed_symbol_1 = 
						    gensymed_symbol_1 << 
						    gensymed_symbol_2;
					    gensymed_symbol = 
						    gensymed_symbol & 
						    gensymed_symbol_1;
					    temp = (SI_Long)0L < 
						    gensymed_symbol;
					}
					else
					    temp = TRUEP(Nil);
				    }
				    else
					temp = TRUEP(Nil);
				    if (temp)
					temp_1 = make_trend_chart(class_1);
				    else {
					sub_class_bit_vector = 
						ISVREF(class_description,
						(SI_Long)19L);
					superior_class_bit_number = 
						IFIX(ISVREF(Entity_class_description,
						(SI_Long)18L));
					sub_class_vector_index = 
						superior_class_bit_number 
						>>  -  - (SI_Long)3L;
					if (sub_class_vector_index < 
						IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
						    {
					    gensymed_symbol = 
						    UBYTE_8_ISAREF_1(sub_class_bit_vector,
						    sub_class_vector_index);
					    gensymed_symbol_1 = (SI_Long)1L;
					    gensymed_symbol_2 = 
						    superior_class_bit_number 
						    & (SI_Long)7L;
					    gensymed_symbol_1 = 
						    gensymed_symbol_1 << 
						    gensymed_symbol_2;
					    gensymed_symbol = 
						    gensymed_symbol & 
						    gensymed_symbol_1;
					    temp = (SI_Long)0L < 
						    gensymed_symbol;
					}
					else
					    temp = TRUEP(Nil);
					if (temp)
					    temp_1 = 
						    make_entity_of_class_description(class_description,
						    Ktransient,T);
					else
					    temp_1 = 
						    make_frame_of_class_description(class_description);
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    return VALUES_1(temp_1);
}

/* MAKE-FRAME-FOR-CLASS */
Object make_frame_for_class(class_1)
    Object class_1;
{
    x_note_fn_call(210,81);
    return make_frame_for_class_description(lookup_global_or_kb_specific_property_value(class_1,
	    Class_description_gkbprop));
}

/* MAKE-TRANSIENT-ITEM */
Object make_transient_item(class_1)
    Object class_1;
{
    Object temp;

    x_note_fn_call(210,82);
    temp = 
	    make_transient_item_of_class_description(lookup_global_or_kb_specific_property_value(class_1,
	    Class_description_gkbprop));
    return VALUES_1(temp);
}

/* MAKE-TRANSIENT-ITEM-WITHOUT-INITIALIZATION */
Object make_transient_item_without_initialization(class_1)
    Object class_1;
{
    Object do_not_initialize_specializations, temp;
    Declare_special(1);

    x_note_fn_call(210,83);
    do_not_initialize_specializations = T;
    PUSH_SPECIAL(Do_not_initialize_specializations,do_not_initialize_specializations,
	    0);
      temp = make_transient_item(class_1);
    POP_SPECIAL();
    return VALUES_1(temp);
}

/* MAKE-PERMANENT-ITEM */
Object make_permanent_item(class_1)
    Object class_1;
{
    Object temp;

    x_note_fn_call(210,84);
    temp = 
	    make_permanent_item_of_class_description(lookup_global_or_kb_specific_property_value(class_1,
	    Class_description_gkbprop));
    return VALUES_1(temp);
}

/* MAKE-PERMANENT-ITEM-WITHOUT-INITIALIZATION */
Object make_permanent_item_without_initialization(class_1)
    Object class_1;
{
    Object do_not_initialize_specializations, temp;
    Declare_special(1);

    x_note_fn_call(210,85);
    do_not_initialize_specializations = T;
    PUSH_SPECIAL(Do_not_initialize_specializations,do_not_initialize_specializations,
	    0);
      temp = make_permanent_item(class_1);
    POP_SPECIAL();
    return VALUES_1(temp);
}

/* MAKE-TRANSIENT-ITEM-OF-CLASS-DESCRIPTION */
Object make_transient_item_of_class_description(class_description)
    Object class_description;
{
    Object new_frame, gensymed_symbol, gensymed_symbol_1;

    x_note_fn_call(210,86);
    new_frame = make_frame_for_class_description(class_description);
    set_transient_and_propagate(new_frame,Nil);
    if ( !TRUEP(Do_not_initialize_specializations)) {
	gensymed_symbol = ISVREF(ISVREF(ISVREF(ISVREF(new_frame,
		(SI_Long)1L),(SI_Long)11L),(SI_Long)30L),(SI_Long)1L);
	gensymed_symbol_1 = new_frame;
	inline_funcall_1(gensymed_symbol,gensymed_symbol_1);
    }
    return VALUES_1(new_frame);
}

/* MAKE-PERMANENT-ITEM-OF-CLASS-DESCRIPTION */
Object make_permanent_item_of_class_description(class_description)
    Object class_description;
{
    Object new_frame, gensymed_symbol, gensymed_symbol_1;

    x_note_fn_call(210,87);
    new_frame = make_frame_for_class_description(class_description);
    set_permanent_and_propagate(new_frame,Nil);
    if ( !TRUEP(Do_not_initialize_specializations)) {
	gensymed_symbol = ISVREF(ISVREF(ISVREF(ISVREF(new_frame,
		(SI_Long)1L),(SI_Long)11L),(SI_Long)30L),(SI_Long)1L);
	gensymed_symbol_1 = new_frame;
	inline_funcall_1(gensymed_symbol,gensymed_symbol_1);
    }
    return VALUES_1(new_frame);
}

/* MAKE-PERMANENT-ITEM-OF-CLASS-DESCRIPTION-WITHOUT-INITIALIZATION */
Object make_permanent_item_of_class_description_without_initialization(class_description)
    Object class_description;
{
    Object do_not_initialize_specializations, item, temp;
    Declare_special(1);

    x_note_fn_call(210,88);
    do_not_initialize_specializations = T;
    PUSH_SPECIAL(Do_not_initialize_specializations,do_not_initialize_specializations,
	    0);
      item = make_frame_for_class_description(class_description);
      set_permanent_and_propagate(item,Nil);
      temp = item;
    POP_SPECIAL();
    return VALUES_1(temp);
}

static Object Qab_class_name;      /* class-name */

static Object Qnotes;              /* notes */

static Object Qab_structure;       /* structure */

/* G2-ATTRIBUTES-AND-CLASSES-TO-INITIALIZE */
Object g2_attributes_and_classes_to_initialize(new_item)
    Object new_item;
{
    Object class_description, slot_descriptions, pre_sequence;
    Object slot_description, ab_loop_list_, slot_name, slot_value_qm;
    Object slot_init_form_qm, vector_slot_index_qm, user_vector_slot_index_qm;
    Object slot_name_1, lookup_structure_qm, slot_index_qm, gensymed_symbol;
    Object temp, item_or_value, x2, svref_new_value;
    SI_Long max_i, i, ab_loop_bind_, gensymed_symbol_1, svref_arg_2;
    char temp_1;

    x_note_fn_call(210,89);
    class_description = ISVREF(new_item,(SI_Long)1L);
    slot_descriptions = ISVREF(class_description,(SI_Long)6L);
    pre_sequence = Nil;
    slot_description = Nil;
    ab_loop_list_ = slot_descriptions;
    slot_name = Nil;
    slot_value_qm = Nil;
    slot_init_form_qm = Nil;
  next_loop:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    slot_description = M_CAR(ab_loop_list_);
    ab_loop_list_ = M_CDR(ab_loop_list_);
    slot_name = ISVREF(slot_description,(SI_Long)2L);
    vector_slot_index_qm = ISVREF(slot_description,(SI_Long)7L);
    if (vector_slot_index_qm)
	slot_value_qm = ISVREF(new_item,IFIX(vector_slot_index_qm));
    else {
	user_vector_slot_index_qm = ISVREF(slot_description,(SI_Long)8L);
	if (user_vector_slot_index_qm)
	    slot_value_qm = ISVREF(ISVREF(new_item,(SI_Long)0L),
		    IFIX(user_vector_slot_index_qm));
	else {
	    slot_name_1 = ISVREF(slot_description,(SI_Long)1L);
	    lookup_structure_qm = ISVREF(new_item,(SI_Long)0L);
	    if (lookup_structure_qm) {
		max_i = IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(lookup_structure_qm));
		max_i = max_i - (SI_Long)1L;
		i = IFIX(ISVREF(ISVREF(new_item,(SI_Long)1L),(SI_Long)15L));
		ab_loop_bind_ = max_i;
	      next_loop_1:
		if (i >= ab_loop_bind_)
		    goto end_loop_1;
		if (EQ(ISVREF(lookup_structure_qm,i),slot_name_1)) {
		    slot_index_qm = FIX(i + (SI_Long)1L);
		    goto end_1;
		}
		i = i + (SI_Long)2L;
		goto next_loop_1;
	      end_loop_1:
		slot_index_qm = Qnil;
	      end_1:;
		slot_value_qm = slot_index_qm ? ISVREF(lookup_structure_qm,
			IFIX(slot_index_qm)) : ISVREF(slot_description,
			(SI_Long)6L);
	    }
	    else
		slot_value_qm = ISVREF(slot_description,(SI_Long)6L);
	}
    }
    slot_init_form_qm = ISVREF(slot_description,(SI_Long)6L);
    if (slot_init_form_qm && 
	    slot_init_form_needs_evaluation_qm(slot_init_form_qm) &&  
	    !TRUEP(slot_value_qm)) {
	gensymed_symbol = allocate_managed_array(1,FIX((SI_Long)4L + 
		(SI_Long)1L));
	gensymed_symbol_1 = (SI_Long)0L;
	if (FIXNUM_LE(ISVREF(gensymed_symbol,(SI_Long)1L),
		Maximum_in_place_array_size)) {
	    svref_arg_2 = gensymed_symbol_1 + IFIX(Managed_array_index_offset);
	    ISVREF(gensymed_symbol,svref_arg_2) = FIX((SI_Long)1L);
	}
	else {
	    temp = ISVREF(gensymed_symbol,(gensymed_symbol_1 >>  -  - 
		    (SI_Long)10L) + (SI_Long)2L);
	    svref_arg_2 = gensymed_symbol_1 & (SI_Long)1023L;
	    ISVREF(temp,svref_arg_2) = FIX((SI_Long)1L);
	}
	if (FIXNUM_LE(ISVREF(gensymed_symbol,(SI_Long)1L),
		Maximum_in_place_array_size))
	    SVREF(gensymed_symbol,FIX((SI_Long)3L)) = Qab_class_name;
	else {
	    temp = ISVREF(gensymed_symbol,(SI_Long)2L);
	    SVREF(temp,FIX((SI_Long)1L)) = Qab_class_name;
	}
	if (FIXNUM_LE(ISVREF(gensymed_symbol,(SI_Long)1L),
		Maximum_in_place_array_size)) {
	    item_or_value = THIRD(slot_init_form_qm);
	    if (SIMPLE_VECTOR_P(item_or_value) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) > 
		    (SI_Long)2L &&  !EQ(ISVREF(item_or_value,(SI_Long)1L),
		    Qavailable_frame_vector)) {
		x2 = ISVREF(item_or_value,(SI_Long)1L);
		temp_1 = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? TRUEP(x2) : TRUEP(Qnil);
	    }
	    else
		temp_1 = TRUEP(Nil);
	    temp = temp_1 ? get_reference_to_item(item_or_value) : 
		    item_or_value;
	    SVREF(gensymed_symbol,FIX((SI_Long)4L)) = temp;
	}
	else {
	    temp = ISVREF(gensymed_symbol,(SI_Long)2L);
	    item_or_value = THIRD(slot_init_form_qm);
	    if (SIMPLE_VECTOR_P(item_or_value) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) > 
		    (SI_Long)2L &&  !EQ(ISVREF(item_or_value,(SI_Long)1L),
		    Qavailable_frame_vector)) {
		x2 = ISVREF(item_or_value,(SI_Long)1L);
		temp_1 = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? TRUEP(x2) : TRUEP(Qnil);
	    }
	    else
		temp_1 = TRUEP(Nil);
	    svref_new_value = temp_1 ? 
		    get_reference_to_item(item_or_value) : item_or_value;
	    SVREF(temp,FIX((SI_Long)2L)) = svref_new_value;
	}
	if (FIXNUM_LE(ISVREF(gensymed_symbol,(SI_Long)1L),
		Maximum_in_place_array_size))
	    SVREF(gensymed_symbol,FIX((SI_Long)5L)) = Qnotes;
	else {
	    temp = ISVREF(gensymed_symbol,(SI_Long)2L);
	    SVREF(temp,FIX((SI_Long)3L)) = Qnotes;
	}
	if (FIXNUM_LE(ISVREF(gensymed_symbol,(SI_Long)1L),
		Maximum_in_place_array_size)) {
	    item_or_value = slot_name;
	    if (SIMPLE_VECTOR_P(item_or_value) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) > 
		    (SI_Long)2L &&  !EQ(ISVREF(item_or_value,(SI_Long)1L),
		    Qavailable_frame_vector)) {
		x2 = ISVREF(item_or_value,(SI_Long)1L);
		temp_1 = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? TRUEP(x2) : TRUEP(Qnil);
	    }
	    else
		temp_1 = TRUEP(Nil);
	    temp = temp_1 ? get_reference_to_item(item_or_value) : 
		    item_or_value;
	    SVREF(gensymed_symbol,FIX((SI_Long)6L)) = temp;
	}
	else {
	    temp = ISVREF(gensymed_symbol,(SI_Long)2L);
	    item_or_value = slot_name;
	    if (SIMPLE_VECTOR_P(item_or_value) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) > 
		    (SI_Long)2L &&  !EQ(ISVREF(item_or_value,(SI_Long)1L),
		    Qavailable_frame_vector)) {
		x2 = ISVREF(item_or_value,(SI_Long)1L);
		temp_1 = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? TRUEP(x2) : TRUEP(Qnil);
	    }
	    else
		temp_1 = TRUEP(Nil);
	    svref_new_value = temp_1 ? 
		    get_reference_to_item(item_or_value) : item_or_value;
	    SVREF(temp,FIX((SI_Long)4L)) = svref_new_value;
	}
	pre_sequence = gensym_cons_1(gensym_cons_1(gensymed_symbol,
		Qab_structure),pre_sequence);
    }
    goto next_loop;
  end_loop:;
    return allocate_evaluation_sequence(nreverse(pre_sequence));
}

/* G2-INSTALL-SUBOBJECT */
Object g2_install_subobject(new_item,new_subobject,attribute_name)
    Object new_item, new_subobject, attribute_name;
{
    x_note_fn_call(210,90);
    return change_slot_value(3,new_item,attribute_name,new_subobject);
}

static Object list_constant;       /* # */

static Object Qcreate_interactively;  /* create-interactively */

static Object Qx_in_window;        /* x-in-window */

static Object Qy_in_window;        /* y-in-window */

static Object list_constant_1;     /* # */

static Object string_constant_36;  /* "structure attribute CREATE-INTERACTIVELY has bad type" */

static Object string_constant_37;  /* "structure attribute X-IN-WINDOW has bad type" */

static Object string_constant_38;  /* "structure attribute Y-IN-WINDOW has bad type" */

static Object string_constant_39;  /* "arg ~a is not of the appropriate type " */

static Object list_constant_2;     /* # */

static Object Qis_created;         /* is-created */

static Object Qcenter;             /* center */

static Object Qhand_place_on_return;  /* hand-place-on-return */

static Object Qreclaim_hand_placement_return_information;  /* reclaim-hand-placement-return-information */

static Object Qbox_translation_and_text;  /* box-translation-and-text */

/* G2-POST-CREATE-INTERACTION */
Object g2_post_create_interaction(new_item,details)
    Object new_item, details;
{
    Object create_interactively, x_in_window, y_in_window, gensymed_symbol;
    Object temp, top_of_stack, message_1, gensymed_symbol_1, gensymed_symbol_4;
    Object x2, class_qm, workstation_qm, current_workstation_1;
    Object current_workstation_window;
    Object current_g2_window_for_this_workstation_qm;
    Object type_of_current_workstation_window;
    Object current_workstation_native_window_qm, current_workstation_context;
    Object type_of_current_workstation_context;
    Object specific_structure_for_current_workstation_context;
    Object current_workstation_detail_pane, current_g2_user_mode_qm;
    Object new_g2_classic_ui_p, servicing_workstation_qm, temp_2, new_cons;
    Object global_properties, kb_properties, kb_specific_value;
    Object resulting_value, sub_class_bit_vector;
    SI_Long gensymed_symbol_2, gensymed_symbol_3, superior_class_bit_number;
    SI_Long sub_class_vector_index, gensymed_symbol_5;
    char temp_1;
    Declare_special(12);
    Object result;

    x_note_fn_call(210,91);
    create_interactively = Nil;
    x_in_window = Nil;
    y_in_window = Nil;
    gensymed_symbol = Nil;
    if (type_specification_type_p(details,list_constant)) {
	create_interactively = estructure_slot(details,
		Qcreate_interactively,Nil);
	x_in_window = estructure_slot(details,Qx_in_window,Nil);
	y_in_window = estructure_slot(details,Qy_in_window,Nil);
	if (create_interactively &&  
		!TRUEP(type_specification_type_p(create_interactively,
		list_constant_1))) {
	    Last_reason_for_complex_type_rejection = string_constant_36;
	    temp = Last_reason_for_complex_type_rejection;
	}
	else
	    temp = Nil;
	if (temp);
	else if (x_in_window &&  
		!TRUEP(type_specification_type_p(x_in_window,Qinteger))) {
	    Last_reason_for_complex_type_rejection = string_constant_37;
	    temp = Last_reason_for_complex_type_rejection;
	}
	else
	    temp = Nil;
	if (temp);
	else if (y_in_window &&  
		!TRUEP(type_specification_type_p(y_in_window,Qinteger))) {
	    Last_reason_for_complex_type_rejection = string_constant_38;
	    temp = Last_reason_for_complex_type_rejection;
	}
	else
	    temp = Nil;
	gensymed_symbol = temp;
	if (gensymed_symbol) {
	    top_of_stack = Cached_top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_39,gensymed_symbol);
	    raw_stack_error_named_error(top_of_stack,message_1);
	}
	gensymed_symbol_1 = create_interactively;
	if ( !(FIXNUMP(gensymed_symbol_1) || 
		INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_1)) == 
		(SI_Long)1L || INLINE_LONG_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_1)) == 
		(SI_Long)1L || gensymed_symbol_1 && 
		SYMBOLP(gensymed_symbol_1) || 
		INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L)) {
	    if (CONSP(gensymed_symbol_1)) {
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		if ( !(EQ(gensymed_symbol_1,Qtruth_value) || 
			EQ(gensymed_symbol_1,Qiteration_state))) {
		    if (SYMBOLP(gensymed_symbol_1)) {
			gensymed_symbol = CDR(Defined_evaluation_value_types);
			gensymed_symbol_2 = 
				SXHASH_SYMBOL_1(gensymed_symbol_1) & 
				IFIX(Most_positive_fixnum);
			gensymed_symbol_3 = (SI_Long)0L;
		      next_loop:
			if ( !TRUEP(gensymed_symbol))
			    goto end_loop;
			gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,
				(SI_Long)0L));
			if (gensymed_symbol_2 < gensymed_symbol_3)
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)1L);
			else if (gensymed_symbol_2 > gensymed_symbol_3)
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)2L);
			else {
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)3L);
			    gensymed_symbol_4 = Nil;
			  next_loop_1:
			    if ( !TRUEP(gensymed_symbol))
				goto end_loop_1;
			    gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
			    if (EQ(gensymed_symbol_1,gensymed_symbol_4))
				goto end_1;
			    gensymed_symbol = M_CDR(gensymed_symbol);
			    goto next_loop_1;
			  end_loop_1:
			  end_1:;
			    goto end_2;
			}
			goto next_loop;
		      end_loop:
		      end_2:;
		    }
		}
	    }
	}
	gensymed_symbol_1 = x_in_window;
	if ( !(FIXNUMP(gensymed_symbol_1) || 
		INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_1)) == 
		(SI_Long)1L || INLINE_LONG_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_1)) == 
		(SI_Long)1L || gensymed_symbol_1 && 
		SYMBOLP(gensymed_symbol_1) || 
		INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L)) {
	    if (CONSP(gensymed_symbol_1)) {
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		if ( !(EQ(gensymed_symbol_1,Qtruth_value) || 
			EQ(gensymed_symbol_1,Qiteration_state))) {
		    if (SYMBOLP(gensymed_symbol_1)) {
			gensymed_symbol = CDR(Defined_evaluation_value_types);
			gensymed_symbol_2 = 
				SXHASH_SYMBOL_1(gensymed_symbol_1) & 
				IFIX(Most_positive_fixnum);
			gensymed_symbol_3 = (SI_Long)0L;
		      next_loop_2:
			if ( !TRUEP(gensymed_symbol))
			    goto end_loop_2;
			gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,
				(SI_Long)0L));
			if (gensymed_symbol_2 < gensymed_symbol_3)
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)1L);
			else if (gensymed_symbol_2 > gensymed_symbol_3)
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)2L);
			else {
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)3L);
			    gensymed_symbol_4 = Nil;
			  next_loop_3:
			    if ( !TRUEP(gensymed_symbol))
				goto end_loop_3;
			    gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
			    if (EQ(gensymed_symbol_1,gensymed_symbol_4))
				goto end_3;
			    gensymed_symbol = M_CDR(gensymed_symbol);
			    goto next_loop_3;
			  end_loop_3:
			  end_3:;
			    goto end_4;
			}
			goto next_loop_2;
		      end_loop_2:
		      end_4:;
		    }
		}
	    }
	}
	gensymed_symbol_1 = y_in_window;
	if ( !(FIXNUMP(gensymed_symbol_1) || 
		INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_1)) == 
		(SI_Long)1L || INLINE_LONG_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_1)) == 
		(SI_Long)1L || gensymed_symbol_1 && 
		SYMBOLP(gensymed_symbol_1) || 
		INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L)) {
	    if (CONSP(gensymed_symbol_1)) {
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		if ( !(EQ(gensymed_symbol_1,Qtruth_value) || 
			EQ(gensymed_symbol_1,Qiteration_state))) {
		    if (SYMBOLP(gensymed_symbol_1)) {
			gensymed_symbol = CDR(Defined_evaluation_value_types);
			gensymed_symbol_2 = 
				SXHASH_SYMBOL_1(gensymed_symbol_1) & 
				IFIX(Most_positive_fixnum);
			gensymed_symbol_3 = (SI_Long)0L;
		      next_loop_4:
			if ( !TRUEP(gensymed_symbol))
			    goto end_loop_4;
			gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,
				(SI_Long)0L));
			if (gensymed_symbol_2 < gensymed_symbol_3)
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)1L);
			else if (gensymed_symbol_2 > gensymed_symbol_3)
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)2L);
			else {
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)3L);
			    gensymed_symbol_4 = Nil;
			  next_loop_5:
			    if ( !TRUEP(gensymed_symbol))
				goto end_loop_5;
			    gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
			    if (EQ(gensymed_symbol_1,gensymed_symbol_4))
				goto end_5;
			    gensymed_symbol = M_CDR(gensymed_symbol);
			    goto next_loop_5;
			  end_loop_5:
			  end_5:;
			    goto end_6;
			}
			goto next_loop_4;
		      end_loop_4:
		      end_6:;
		    }
		}
	    }
	}
    }
    else if ( !TRUEP(T) ||  !TRUEP(type_specification_type_p(details,
	    list_constant_2))) {
	top_of_stack = Cached_top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_39,
		details);
	raw_stack_error_named_error(top_of_stack,message_1);
    }
    invoke_rules_for_existential_chaining(new_item,Qis_created,Nil);
    if (create_interactively) {
	if (SIMPLE_VECTOR_P(create_interactively) && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(create_interactively)) > 
		(SI_Long)2L &&  !EQ(ISVREF(create_interactively,
		(SI_Long)1L),Qavailable_frame_vector)) {
	    x2 = ISVREF(create_interactively,(SI_Long)1L);
	    temp_1 = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
		    Qg2_defstruct_structure_name_class_description_g2_struct) 
		    ? TRUEP(x2) : TRUEP(Qnil);
	}
	else
	    temp_1 = TRUEP(Nil);
    }
    else
	temp_1 = TRUEP(Nil);
    if (temp_1) {
	class_qm = ISVREF(ISVREF(new_item,(SI_Long)1L),(SI_Long)1L);
	workstation_qm = ISVREF(create_interactively,(SI_Long)20L);
	if (workstation_qm) {
	    current_workstation_1 = workstation_qm;
	    PUSH_SPECIAL(Current_workstation,current_workstation_1,11);
	      current_workstation_window = ISVREF(Current_workstation,
		      (SI_Long)1L);
	      PUSH_SPECIAL(Current_workstation_window,current_workstation_window,
		      10);
		current_g2_window_for_this_workstation_qm = 
			ISVREF(Current_workstation,(SI_Long)25L);
		PUSH_SPECIAL(Current_g2_window_for_this_workstation_qm,current_g2_window_for_this_workstation_qm,
			9);
		  type_of_current_workstation_window = 
			  ISVREF(Current_workstation_window,(SI_Long)1L);
		  PUSH_SPECIAL(Type_of_current_workstation_window,type_of_current_workstation_window,
			  8);
		    current_workstation_native_window_qm = 
			    ISVREF(Current_workstation_window,(SI_Long)17L);
		    PUSH_SPECIAL(Current_workstation_native_window_qm,current_workstation_native_window_qm,
			    7);
		      temp = ISVREF(Current_workstation,(SI_Long)17L);
		      current_workstation_context = CAR(temp);
		      PUSH_SPECIAL(Current_workstation_context,current_workstation_context,
			      6);
			type_of_current_workstation_context = 
				ISVREF(Current_workstation_context,
				(SI_Long)1L);
			PUSH_SPECIAL(Type_of_current_workstation_context,type_of_current_workstation_context,
				5);
			  specific_structure_for_current_workstation_context 
				  = ISVREF(Current_workstation_context,
				  (SI_Long)2L);
			  PUSH_SPECIAL(Specific_structure_for_current_workstation_context,specific_structure_for_current_workstation_context,
				  4);
			    current_workstation_detail_pane = 
				    detail_pane(Current_workstation_window);
			    PUSH_SPECIAL(Current_workstation_detail_pane,current_workstation_detail_pane,
				    3);
			      current_g2_user_mode_qm = 
				      ISVREF(Current_workstation,(SI_Long)19L);
			      PUSH_SPECIAL(Current_g2_user_mode_qm,current_g2_user_mode_qm,
				      2);
				new_g2_classic_ui_p = 
					get_value_for_current_workstation_new_g2_classic_ui_p();
				PUSH_SPECIAL(New_g2_classic_ui_p,new_g2_classic_ui_p,
					1);
				  servicing_workstation_qm = T;
				  PUSH_SPECIAL(Servicing_workstation_qm,servicing_workstation_qm,
					  0);
				    if (class_qm) {
					gensymed_symbol = 
						CDR(Symbol_properties_table);
					gensymed_symbol_1 = class_qm;
					gensymed_symbol_2 = 
						SXHASH_SYMBOL_1(class_qm) 
						& IFIX(Most_positive_fixnum);
					gensymed_symbol_3 = (SI_Long)0L;
				      next_loop_6:
					if ( !TRUEP(gensymed_symbol))
					    goto end_loop_6;
					gensymed_symbol_3 = 
						IFIX(ISVREF(gensymed_symbol,
						(SI_Long)0L));
					if (gensymed_symbol_2 < 
						gensymed_symbol_3)
					    gensymed_symbol = 
						    ISVREF(gensymed_symbol,
						    (SI_Long)1L);
					else if (gensymed_symbol_2 > 
						gensymed_symbol_3)
					    gensymed_symbol = 
						    ISVREF(gensymed_symbol,
						    (SI_Long)2L);
					else {
					    gensymed_symbol = 
						    ISVREF(gensymed_symbol,
						    (SI_Long)3L);
					    gensymed_symbol_4 = Nil;
					  next_loop_7:
					    if ( !TRUEP(gensymed_symbol))
						goto end_loop_7;
					    gensymed_symbol_4 = 
						    M_CAR(M_CAR(gensymed_symbol));
					    if (EQ(gensymed_symbol_1,
						    gensymed_symbol_4)) {
						gensymed_symbol = 
							M_CDR(M_CAR(gensymed_symbol));
						goto end_7;
					    }
					    gensymed_symbol = 
						    M_CDR(gensymed_symbol);
					    goto next_loop_7;
					  end_loop_7:
					    gensymed_symbol = Qnil;
					  end_7:;
					    goto end_8;
					}
					goto next_loop_6;
				      end_loop_6:
					gensymed_symbol = Qnil;
				      end_8:;
					if ( !TRUEP(gensymed_symbol)) {
					    gensymed_symbol = class_qm;
					    temp_2 = Symbol_properties_table;
					    temp = 
						    FIX(SXHASH_SYMBOL_1(gensymed_symbol) 
						    & 
						    IFIX(Most_positive_fixnum));
					    new_cons = Available_gensym_conses;
					    if (new_cons) {
						Available_gensym_conses = 
							M_CDR(new_cons);
						gensymed_symbol_1 = new_cons;
					    }
					    else
						gensymed_symbol_1 = Nil;
					    if ( !TRUEP(gensymed_symbol_1))
						gensymed_symbol_1 = 
							replenish_gensym_cons_pool();
					    M_CAR(gensymed_symbol_1) = 
						    Qsymbol_properties_hash_table;
					    M_CDR(gensymed_symbol_1) = Nil;
					    inline_note_allocate_cons(gensymed_symbol_1,
						    Qab_gensym);
					    gensymed_symbol = 
						    set_balanced_binary_tree_entry(temp_2,
						    Qeq,Nil,T,
						    gensymed_symbol,temp,
						    gensymed_symbol_1);
					}
					global_properties = gensymed_symbol;
					gensymed_symbol = 
						CDR(global_properties);
					gensymed_symbol_1 = 
						Current_kb_specific_property_list_property_name;
					gensymed_symbol_2 = 
						SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
						& IFIX(Most_positive_fixnum);
					gensymed_symbol_3 = (SI_Long)0L;
				      next_loop_8:
					if ( !TRUEP(gensymed_symbol))
					    goto end_loop_8;
					gensymed_symbol_3 = 
						IFIX(ISVREF(gensymed_symbol,
						(SI_Long)0L));
					if (gensymed_symbol_2 < 
						gensymed_symbol_3)
					    gensymed_symbol = 
						    ISVREF(gensymed_symbol,
						    (SI_Long)1L);
					else if (gensymed_symbol_2 > 
						gensymed_symbol_3)
					    gensymed_symbol = 
						    ISVREF(gensymed_symbol,
						    (SI_Long)2L);
					else {
					    gensymed_symbol = 
						    ISVREF(gensymed_symbol,
						    (SI_Long)3L);
					    gensymed_symbol_4 = Nil;
					  next_loop_9:
					    if ( !TRUEP(gensymed_symbol))
						goto end_loop_9;
					    gensymed_symbol_4 = 
						    M_CAR(M_CAR(gensymed_symbol));
					    if (EQ(gensymed_symbol_1,
						    gensymed_symbol_4)) {
						kb_properties = 
							M_CDR(M_CAR(gensymed_symbol));
						goto end_9;
					    }
					    gensymed_symbol = 
						    M_CDR(gensymed_symbol);
					    goto next_loop_9;
					  end_loop_9:
					    kb_properties = Qnil;
					  end_9:;
					    goto end_10;
					}
					goto next_loop_8;
				      end_loop_8:
					kb_properties = Qnil;
				      end_10:;
					if (kb_properties);
					else
					    kb_properties = Nil;
					if (kb_properties) {
					    gensymed_symbol = 
						    CDR(kb_properties);
					    gensymed_symbol_1 = 
						    Class_description_gkbprop;
					    gensymed_symbol_2 = 
						    SXHASH_SYMBOL_1(Class_description_gkbprop) 
						    & 
						    IFIX(Most_positive_fixnum);
					    gensymed_symbol_3 = (SI_Long)0L;
					  next_loop_10:
					    if ( !TRUEP(gensymed_symbol))
						goto end_loop_10;
					    gensymed_symbol_3 = 
						    IFIX(ISVREF(gensymed_symbol,
						    (SI_Long)0L));
					    if (gensymed_symbol_2 < 
						    gensymed_symbol_3)
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)1L);
					    else if (gensymed_symbol_2 > 
						    gensymed_symbol_3)
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)2L);
					    else {
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)3L);
						gensymed_symbol_4 = Nil;
					      next_loop_11:
						if ( !TRUEP(gensymed_symbol))
						    goto end_loop_11;
						gensymed_symbol_4 = 
							M_CAR(M_CAR(gensymed_symbol));
						if (EQ(gensymed_symbol_1,
							gensymed_symbol_4)) {
						    kb_specific_value = 
							    M_CDR(M_CAR(gensymed_symbol));
						    goto end_11;
						}
						gensymed_symbol = 
							M_CDR(gensymed_symbol);
						goto next_loop_11;
					      end_loop_11:
						kb_specific_value = Qnil;
					      end_11:;
						goto end_12;
					    }
					    goto next_loop_10;
					  end_loop_10:
					    kb_specific_value = Qnil;
					  end_12:;
					    if (kb_specific_value);
					    else
						kb_specific_value = 
							No_specific_property_value;
					}
					else
					    kb_specific_value = 
						    No_specific_property_value;
					if ( !EQ(kb_specific_value,
						No_specific_property_value))
					    resulting_value = 
						    kb_specific_value;
					else {
					    gensymed_symbol = 
						    CDR(global_properties);
					    gensymed_symbol_1 = 
						    Class_description_gkbprop;
					    gensymed_symbol_2 = 
						    SXHASH_SYMBOL_1(Class_description_gkbprop) 
						    & 
						    IFIX(Most_positive_fixnum);
					    gensymed_symbol_3 = (SI_Long)0L;
					  next_loop_12:
					    if ( !TRUEP(gensymed_symbol))
						goto end_loop_12;
					    gensymed_symbol_3 = 
						    IFIX(ISVREF(gensymed_symbol,
						    (SI_Long)0L));
					    if (gensymed_symbol_2 < 
						    gensymed_symbol_3)
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)1L);
					    else if (gensymed_symbol_2 > 
						    gensymed_symbol_3)
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)2L);
					    else {
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)3L);
						gensymed_symbol_4 = Nil;
					      next_loop_13:
						if ( !TRUEP(gensymed_symbol))
						    goto end_loop_13;
						gensymed_symbol_4 = 
							M_CAR(M_CAR(gensymed_symbol));
						if (EQ(gensymed_symbol_1,
							gensymed_symbol_4)) {
						    resulting_value = 
							    M_CDR(M_CAR(gensymed_symbol));
						    goto end_13;
						}
						gensymed_symbol = 
							M_CDR(gensymed_symbol);
						goto next_loop_13;
					      end_loop_13:
						resulting_value = Qnil;
					      end_13:;
						goto end_14;
					    }
					    goto next_loop_12;
					  end_loop_12:
					    resulting_value = Qnil;
					  end_14:;
					    if (resulting_value);
					    else
						resulting_value = Nil;
					}
					gensymed_symbol = resulting_value;
					if (gensymed_symbol) {
					    sub_class_bit_vector = 
						    ISVREF(gensymed_symbol,
						    (SI_Long)19L);
					    superior_class_bit_number = 
						    IFIX(ISVREF(Kb_workspace_class_description,
						    (SI_Long)18L));
					    sub_class_vector_index = 
						    superior_class_bit_number 
						    >>  -  - (SI_Long)3L;
					    if (sub_class_vector_index < 
						    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
							{
						gensymed_symbol_2 = 
							UBYTE_8_ISAREF_1(sub_class_bit_vector,
							sub_class_vector_index);
						gensymed_symbol_3 = 
							(SI_Long)1L;
						gensymed_symbol_5 = 
							superior_class_bit_number 
							& (SI_Long)7L;
						gensymed_symbol_3 = 
							gensymed_symbol_3 
							<< gensymed_symbol_5;
						gensymed_symbol_2 = 
							gensymed_symbol_2 
							& gensymed_symbol_3;
						temp_1 = (SI_Long)0L < 
							gensymed_symbol_2;
					    }
					    else
						temp_1 = TRUEP(Nil);
					}
					else
					    temp_1 = TRUEP(Nil);
				    }
				    else
					temp_1 = TRUEP(Nil);
				    if (temp_1)
					result = put_workspace_on_pane_function(new_item,
						Current_workstation_detail_pane,
						Qcenter,Qcenter,Nil,
						FIX((SI_Long)11L),Nil,Nil,
						Nil,Nil,Nil,Nil,Nil);
				    else if (x_in_window && y_in_window) {
					if (class_qm) {
					    gensymed_symbol = 
						    CDR(Symbol_properties_table);
					    gensymed_symbol_1 = class_qm;
					    gensymed_symbol_2 = 
						    SXHASH_SYMBOL_1(class_qm) 
						    & 
						    IFIX(Most_positive_fixnum);
					    gensymed_symbol_3 = (SI_Long)0L;
					  next_loop_14:
					    if ( !TRUEP(gensymed_symbol))
						goto end_loop_14;
					    gensymed_symbol_3 = 
						    IFIX(ISVREF(gensymed_symbol,
						    (SI_Long)0L));
					    if (gensymed_symbol_2 < 
						    gensymed_symbol_3)
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)1L);
					    else if (gensymed_symbol_2 > 
						    gensymed_symbol_3)
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)2L);
					    else {
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)3L);
						gensymed_symbol_4 = Nil;
					      next_loop_15:
						if ( !TRUEP(gensymed_symbol))
						    goto end_loop_15;
						gensymed_symbol_4 = 
							M_CAR(M_CAR(gensymed_symbol));
						if (EQ(gensymed_symbol_1,
							gensymed_symbol_4)) {
						    gensymed_symbol = 
							    M_CDR(M_CAR(gensymed_symbol));
						    goto end_15;
						}
						gensymed_symbol = 
							M_CDR(gensymed_symbol);
						goto next_loop_15;
					      end_loop_15:
						gensymed_symbol = Qnil;
					      end_15:;
						goto end_16;
					    }
					    goto next_loop_14;
					  end_loop_14:
					    gensymed_symbol = Qnil;
					  end_16:;
					    if ( !TRUEP(gensymed_symbol)) {
						gensymed_symbol = class_qm;
						temp_2 = 
							Symbol_properties_table;
						temp = 
							FIX(SXHASH_SYMBOL_1(gensymed_symbol) 
							& 
							IFIX(Most_positive_fixnum));
						new_cons = 
							Available_gensym_conses;
						if (new_cons) {
						    Available_gensym_conses 
							    = M_CDR(new_cons);
						    gensymed_symbol_1 = 
							    new_cons;
						}
						else
						    gensymed_symbol_1 = Nil;
						if ( !TRUEP(gensymed_symbol_1))
						    gensymed_symbol_1 = 
							    replenish_gensym_cons_pool();
						M_CAR(gensymed_symbol_1) = 
							Qsymbol_properties_hash_table;
						M_CDR(gensymed_symbol_1) = Nil;
						inline_note_allocate_cons(gensymed_symbol_1,
							Qab_gensym);
						gensymed_symbol = 
							set_balanced_binary_tree_entry(temp_2,
							Qeq,Nil,T,
							gensymed_symbol,
							temp,
							gensymed_symbol_1);
					    }
					    global_properties = 
						    gensymed_symbol;
					    gensymed_symbol = 
						    CDR(global_properties);
					    gensymed_symbol_1 = 
						    Current_kb_specific_property_list_property_name;
					    gensymed_symbol_2 = 
						    SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
						    & 
						    IFIX(Most_positive_fixnum);
					    gensymed_symbol_3 = (SI_Long)0L;
					  next_loop_16:
					    if ( !TRUEP(gensymed_symbol))
						goto end_loop_16;
					    gensymed_symbol_3 = 
						    IFIX(ISVREF(gensymed_symbol,
						    (SI_Long)0L));
					    if (gensymed_symbol_2 < 
						    gensymed_symbol_3)
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)1L);
					    else if (gensymed_symbol_2 > 
						    gensymed_symbol_3)
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)2L);
					    else {
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)3L);
						gensymed_symbol_4 = Nil;
					      next_loop_17:
						if ( !TRUEP(gensymed_symbol))
						    goto end_loop_17;
						gensymed_symbol_4 = 
							M_CAR(M_CAR(gensymed_symbol));
						if (EQ(gensymed_symbol_1,
							gensymed_symbol_4)) {
						    kb_properties = 
							    M_CDR(M_CAR(gensymed_symbol));
						    goto end_17;
						}
						gensymed_symbol = 
							M_CDR(gensymed_symbol);
						goto next_loop_17;
					      end_loop_17:
						kb_properties = Qnil;
					      end_17:;
						goto end_18;
					    }
					    goto next_loop_16;
					  end_loop_16:
					    kb_properties = Qnil;
					  end_18:;
					    if (kb_properties);
					    else
						kb_properties = Nil;
					    if (kb_properties) {
						gensymed_symbol = 
							CDR(kb_properties);
						gensymed_symbol_1 = 
							Class_description_gkbprop;
						gensymed_symbol_2 = 
							SXHASH_SYMBOL_1(Class_description_gkbprop) 
							& 
							IFIX(Most_positive_fixnum);
						gensymed_symbol_3 = 
							(SI_Long)0L;
					      next_loop_18:
						if ( !TRUEP(gensymed_symbol))
						    goto end_loop_18;
						gensymed_symbol_3 = 
							IFIX(ISVREF(gensymed_symbol,
							(SI_Long)0L));
						if (gensymed_symbol_2 < 
							gensymed_symbol_3)
						    gensymed_symbol = 
							    ISVREF(gensymed_symbol,
							    (SI_Long)1L);
						else if (gensymed_symbol_2 
							> gensymed_symbol_3)
						    gensymed_symbol = 
							    ISVREF(gensymed_symbol,
							    (SI_Long)2L);
						else {
						    gensymed_symbol = 
							    ISVREF(gensymed_symbol,
							    (SI_Long)3L);
						    gensymed_symbol_4 = Nil;
						  next_loop_19:
						    if ( 
							    !TRUEP(gensymed_symbol))
							goto end_loop_19;
						    gensymed_symbol_4 = 
							    M_CAR(M_CAR(gensymed_symbol));
						    if (EQ(gensymed_symbol_1,
							    gensymed_symbol_4)) 
								{
							kb_specific_value 
								= 
								M_CDR(M_CAR(gensymed_symbol));
							goto end_19;
						    }
						    gensymed_symbol = 
							    M_CDR(gensymed_symbol);
						    goto next_loop_19;
						  end_loop_19:
						    kb_specific_value = Qnil;
						  end_19:;
						    goto end_20;
						}
						goto next_loop_18;
					      end_loop_18:
						kb_specific_value = Qnil;
					      end_20:;
						if (kb_specific_value);
						else
						    kb_specific_value = 
							    No_specific_property_value;
					    }
					    else
						kb_specific_value = 
							No_specific_property_value;
					    if ( !EQ(kb_specific_value,
						    No_specific_property_value))
						resulting_value = 
							kb_specific_value;
					    else {
						gensymed_symbol = 
							CDR(global_properties);
						gensymed_symbol_1 = 
							Class_description_gkbprop;
						gensymed_symbol_2 = 
							SXHASH_SYMBOL_1(Class_description_gkbprop) 
							& 
							IFIX(Most_positive_fixnum);
						gensymed_symbol_3 = 
							(SI_Long)0L;
					      next_loop_20:
						if ( !TRUEP(gensymed_symbol))
						    goto end_loop_20;
						gensymed_symbol_3 = 
							IFIX(ISVREF(gensymed_symbol,
							(SI_Long)0L));
						if (gensymed_symbol_2 < 
							gensymed_symbol_3)
						    gensymed_symbol = 
							    ISVREF(gensymed_symbol,
							    (SI_Long)1L);
						else if (gensymed_symbol_2 
							> gensymed_symbol_3)
						    gensymed_symbol = 
							    ISVREF(gensymed_symbol,
							    (SI_Long)2L);
						else {
						    gensymed_symbol = 
							    ISVREF(gensymed_symbol,
							    (SI_Long)3L);
						    gensymed_symbol_4 = Nil;
						  next_loop_21:
						    if ( 
							    !TRUEP(gensymed_symbol))
							goto end_loop_21;
						    gensymed_symbol_4 = 
							    M_CAR(M_CAR(gensymed_symbol));
						    if (EQ(gensymed_symbol_1,
							    gensymed_symbol_4)) 
								{
							resulting_value = 
								M_CDR(M_CAR(gensymed_symbol));
							goto end_21;
						    }
						    gensymed_symbol = 
							    M_CDR(gensymed_symbol);
						    goto next_loop_21;
						  end_loop_21:
						    resulting_value = Qnil;
						  end_21:;
						    goto end_22;
						}
						goto next_loop_20;
					      end_loop_20:
						resulting_value = Qnil;
					      end_22:;
						if (resulting_value);
						else
						    resulting_value = Nil;
					    }
					    gensymed_symbol = resulting_value;
					    if (gensymed_symbol) {
						sub_class_bit_vector = 
							ISVREF(gensymed_symbol,
							(SI_Long)19L);
						superior_class_bit_number 
							= 
							IFIX(ISVREF(Statement_class_description,
							(SI_Long)18L));
						sub_class_vector_index = 
							superior_class_bit_number 
							>>  -  - (SI_Long)3L;
						if (sub_class_vector_index 
							< 
							IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
							    {
						    gensymed_symbol_2 = 
							    UBYTE_8_ISAREF_1(sub_class_bit_vector,
							    sub_class_vector_index);
						    gensymed_symbol_3 = 
							    (SI_Long)1L;
						    gensymed_symbol_5 = 
							    superior_class_bit_number 
							    & (SI_Long)7L;
						    gensymed_symbol_3 = 
							    gensymed_symbol_3 
							    << 
							    gensymed_symbol_5;
						    gensymed_symbol_2 = 
							    gensymed_symbol_2 
							    & 
							    gensymed_symbol_3;
						    temp_1 = (SI_Long)0L < 
							    gensymed_symbol_2;
						}
						else
						    temp_1 = TRUEP(Nil);
					    }
					    else
						temp_1 = TRUEP(Nil);
					    if (temp_1);
					    else {
						gensymed_symbol = 
							CDR(Symbol_properties_table);
						gensymed_symbol_1 = class_qm;
						gensymed_symbol_2 = 
							SXHASH_SYMBOL_1(class_qm) 
							& 
							IFIX(Most_positive_fixnum);
						gensymed_symbol_3 = 
							(SI_Long)0L;
					      next_loop_22:
						if ( !TRUEP(gensymed_symbol))
						    goto end_loop_22;
						gensymed_symbol_3 = 
							IFIX(ISVREF(gensymed_symbol,
							(SI_Long)0L));
						if (gensymed_symbol_2 < 
							gensymed_symbol_3)
						    gensymed_symbol = 
							    ISVREF(gensymed_symbol,
							    (SI_Long)1L);
						else if (gensymed_symbol_2 
							> gensymed_symbol_3)
						    gensymed_symbol = 
							    ISVREF(gensymed_symbol,
							    (SI_Long)2L);
						else {
						    gensymed_symbol = 
							    ISVREF(gensymed_symbol,
							    (SI_Long)3L);
						    gensymed_symbol_4 = Nil;
						  next_loop_23:
						    if ( 
							    !TRUEP(gensymed_symbol))
							goto end_loop_23;
						    gensymed_symbol_4 = 
							    M_CAR(M_CAR(gensymed_symbol));
						    if (EQ(gensymed_symbol_1,
							    gensymed_symbol_4)) 
								{
							gensymed_symbol = 
								M_CDR(M_CAR(gensymed_symbol));
							goto end_23;
						    }
						    gensymed_symbol = 
							    M_CDR(gensymed_symbol);
						    goto next_loop_23;
						  end_loop_23:
						    gensymed_symbol = Qnil;
						  end_23:;
						    goto end_24;
						}
						goto next_loop_22;
					      end_loop_22:
						gensymed_symbol = Qnil;
					      end_24:;
						if ( !TRUEP(gensymed_symbol)) {
						    gensymed_symbol = class_qm;
						    temp_2 = 
							    Symbol_properties_table;
						    temp = 
							    FIX(SXHASH_SYMBOL_1(gensymed_symbol) 
							    & 
							    IFIX(Most_positive_fixnum));
						    new_cons = 
							    Available_gensym_conses;
						    if (new_cons) {
							Available_gensym_conses 
								= 
								M_CDR(new_cons);
							gensymed_symbol_1 
								= new_cons;
						    }
						    else
							gensymed_symbol_1 
								= Nil;
						    if ( 
							    !TRUEP(gensymed_symbol_1))
							gensymed_symbol_1 
								= 
								replenish_gensym_cons_pool();
						    M_CAR(gensymed_symbol_1) 
							    = 
							    Qsymbol_properties_hash_table;
						    M_CDR(gensymed_symbol_1) 
							    = Nil;
						    inline_note_allocate_cons(gensymed_symbol_1,
							    Qab_gensym);
						    gensymed_symbol = 
							    set_balanced_binary_tree_entry(temp_2,
							    Qeq,Nil,T,
							    gensymed_symbol,
							    temp,
							    gensymed_symbol_1);
						}
						global_properties = 
							gensymed_symbol;
						gensymed_symbol = 
							CDR(global_properties);
						gensymed_symbol_1 = 
							Current_kb_specific_property_list_property_name;
						gensymed_symbol_2 = 
							SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
							& 
							IFIX(Most_positive_fixnum);
						gensymed_symbol_3 = 
							(SI_Long)0L;
					      next_loop_24:
						if ( !TRUEP(gensymed_symbol))
						    goto end_loop_24;
						gensymed_symbol_3 = 
							IFIX(ISVREF(gensymed_symbol,
							(SI_Long)0L));
						if (gensymed_symbol_2 < 
							gensymed_symbol_3)
						    gensymed_symbol = 
							    ISVREF(gensymed_symbol,
							    (SI_Long)1L);
						else if (gensymed_symbol_2 
							> gensymed_symbol_3)
						    gensymed_symbol = 
							    ISVREF(gensymed_symbol,
							    (SI_Long)2L);
						else {
						    gensymed_symbol = 
							    ISVREF(gensymed_symbol,
							    (SI_Long)3L);
						    gensymed_symbol_4 = Nil;
						  next_loop_25:
						    if ( 
							    !TRUEP(gensymed_symbol))
							goto end_loop_25;
						    gensymed_symbol_4 = 
							    M_CAR(M_CAR(gensymed_symbol));
						    if (EQ(gensymed_symbol_1,
							    gensymed_symbol_4)) 
								{
							kb_properties = 
								M_CDR(M_CAR(gensymed_symbol));
							goto end_25;
						    }
						    gensymed_symbol = 
							    M_CDR(gensymed_symbol);
						    goto next_loop_25;
						  end_loop_25:
						    kb_properties = Qnil;
						  end_25:;
						    goto end_26;
						}
						goto next_loop_24;
					      end_loop_24:
						kb_properties = Qnil;
					      end_26:;
						if (kb_properties);
						else
						    kb_properties = Nil;
						if (kb_properties) {
						    gensymed_symbol = 
							    CDR(kb_properties);
						    gensymed_symbol_1 = 
							    Class_description_gkbprop;
						    gensymed_symbol_2 = 
							    SXHASH_SYMBOL_1(Class_description_gkbprop) 
							    & 
							    IFIX(Most_positive_fixnum);
						    gensymed_symbol_3 = 
							    (SI_Long)0L;
						  next_loop_26:
						    if ( 
							    !TRUEP(gensymed_symbol))
							goto end_loop_26;
						    gensymed_symbol_3 = 
							    IFIX(ISVREF(gensymed_symbol,
							    (SI_Long)0L));
						    if (gensymed_symbol_2 
							    < 
							    gensymed_symbol_3)
							gensymed_symbol = 
								ISVREF(gensymed_symbol,
								(SI_Long)1L);
						    else if (gensymed_symbol_2 
							    > 
							    gensymed_symbol_3)
							gensymed_symbol = 
								ISVREF(gensymed_symbol,
								(SI_Long)2L);
						    else {
							gensymed_symbol = 
								ISVREF(gensymed_symbol,
								(SI_Long)3L);
							gensymed_symbol_4 
								= Nil;
						      next_loop_27:
							if ( 
								!TRUEP(gensymed_symbol))
							    goto end_loop_27;
							gensymed_symbol_4 
								= 
								M_CAR(M_CAR(gensymed_symbol));
							if (EQ(gensymed_symbol_1,
								gensymed_symbol_4)) 
								    {
							    kb_specific_value 
								    = 
								    M_CDR(M_CAR(gensymed_symbol));
							    goto end_27;
							}
							gensymed_symbol = 
								M_CDR(gensymed_symbol);
							goto next_loop_27;
						      end_loop_27:
							kb_specific_value 
								= Qnil;
						      end_27:;
							goto end_28;
						    }
						    goto next_loop_26;
						  end_loop_26:
						    kb_specific_value = Qnil;
						  end_28:;
						    if (kb_specific_value);
						    else
							kb_specific_value 
								= 
								No_specific_property_value;
						}
						else
						    kb_specific_value = 
							    No_specific_property_value;
						if ( !EQ(kb_specific_value,
							No_specific_property_value))
						    resulting_value = 
							    kb_specific_value;
						else {
						    gensymed_symbol = 
							    CDR(global_properties);
						    gensymed_symbol_1 = 
							    Class_description_gkbprop;
						    gensymed_symbol_2 = 
							    SXHASH_SYMBOL_1(Class_description_gkbprop) 
							    & 
							    IFIX(Most_positive_fixnum);
						    gensymed_symbol_3 = 
							    (SI_Long)0L;
						  next_loop_28:
						    if ( 
							    !TRUEP(gensymed_symbol))
							goto end_loop_28;
						    gensymed_symbol_3 = 
							    IFIX(ISVREF(gensymed_symbol,
							    (SI_Long)0L));
						    if (gensymed_symbol_2 
							    < 
							    gensymed_symbol_3)
							gensymed_symbol = 
								ISVREF(gensymed_symbol,
								(SI_Long)1L);
						    else if (gensymed_symbol_2 
							    > 
							    gensymed_symbol_3)
							gensymed_symbol = 
								ISVREF(gensymed_symbol,
								(SI_Long)2L);
						    else {
							gensymed_symbol = 
								ISVREF(gensymed_symbol,
								(SI_Long)3L);
							gensymed_symbol_4 
								= Nil;
						      next_loop_29:
							if ( 
								!TRUEP(gensymed_symbol))
							    goto end_loop_29;
							gensymed_symbol_4 
								= 
								M_CAR(M_CAR(gensymed_symbol));
							if (EQ(gensymed_symbol_1,
								gensymed_symbol_4)) 
								    {
							    resulting_value 
								    = 
								    M_CDR(M_CAR(gensymed_symbol));
							    goto end_29;
							}
							gensymed_symbol = 
								M_CDR(gensymed_symbol);
							goto next_loop_29;
						      end_loop_29:
							resulting_value = Qnil;
						      end_29:;
							goto end_30;
						    }
						    goto next_loop_28;
						  end_loop_28:
						    resulting_value = Qnil;
						  end_30:;
						    if (resulting_value);
						    else
							resulting_value = Nil;
						}
						gensymed_symbol = 
							resulting_value;
						if (gensymed_symbol) {
						    sub_class_bit_vector = 
							    ISVREF(gensymed_symbol,
							    (SI_Long)19L);
						    superior_class_bit_number 
							    = 
							    IFIX(ISVREF(Text_box_class_description,
							    (SI_Long)18L));
						    sub_class_vector_index 
							    = 
							    superior_class_bit_number 
							    >>  -  - 
							    (SI_Long)3L;
						    if (sub_class_vector_index 
							    < 
							    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
								{
							gensymed_symbol_2 
								= 
								UBYTE_8_ISAREF_1(sub_class_bit_vector,
								sub_class_vector_index);
							gensymed_symbol_3 
								= (SI_Long)1L;
							gensymed_symbol_5 
								= 
								superior_class_bit_number 
								& (SI_Long)7L;
							gensymed_symbol_3 
								= 
								gensymed_symbol_3 
								<< 
								gensymed_symbol_5;
							gensymed_symbol_2 
								= 
								gensymed_symbol_2 
								& 
								gensymed_symbol_3;
							temp_1 = 
								(SI_Long)0L 
								< gensymed_symbol_2;
						    }
						    else
							temp_1 = TRUEP(Nil);
						}
						else
						    temp_1 = TRUEP(Nil);
					    }
					}
					else
					    temp_1 = TRUEP(Nil);
					if (temp_1) {
					    temp = x_in_window;
					    temp_2 = y_in_window;
					    establish_next_workstation_context_continuation(Nil,
						    Qhand_place_on_return,
						    gensym_list_4(new_item,
						    temp,temp_2,
						    copy_frame_serial_number(ISVREF(new_item,
						    (SI_Long)3L))),
						    Qreclaim_hand_placement_return_information);
					    result = enter_editing_context(3,
						    new_item,
						    Qbox_translation_and_text,
						    make_empty_text());
					}
					else
					    result = manifest_item_creation(new_item,
						    Nil,x_in_window,
						    y_in_window);
				    }
				    else
					result = VALUES_1(Nil);
				  POP_SPECIAL();
				POP_SPECIAL();
			      POP_SPECIAL();
			    POP_SPECIAL();
			  POP_SPECIAL();
			POP_SPECIAL();
		      POP_SPECIAL();
		    POP_SPECIAL();
		  POP_SPECIAL();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	    return result;
	}
	else
	    return VALUES_1(Nil);
    }
    else
	return VALUES_1(Nil);
}

/* G2-IN-RESET-STATE-P */
Object g2_in_reset_state_p()
{
    x_note_fn_call(210,92);
    if (System_is_running || System_has_paused)
	return VALUES_1(Evaluation_false_value);
    else
	return VALUES_1(Evaluation_true_value);
}

static Object Qnot_normally_transient;  /* not-normally-transient */

/* CLASS-CAN-BE-TRANSIENT-P */
Object class_can_be_transient_p(class_description)
    Object class_description;
{
    Object temp;

    x_note_fn_call(210,93);
    temp = ISVREF(class_description,(SI_Long)16L) ? ( 
	    !TRUEP(assq_function(Qnot_normally_transient,
	    ISVREF(class_description,(SI_Long)12L))) ? T : Nil) : Qnil;
    return VALUES_1(temp);
}

static Object Qsystem_table;       /* system-table */

/* OLD-CLASS-CAN-BE-TRANSIENT-P */
Object old_class_can_be_transient_p(class_description)
    Object class_description;
{
    Object sub_class_bit_vector, gensymed_symbol_3, temp_1;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp;

    x_note_fn_call(210,94);
    if (ISVREF(class_description,(SI_Long)16L)) {
	sub_class_bit_vector = ISVREF(class_description,(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Procedure_invocation_class_description,
		(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	if (temp);
	else {
	    sub_class_bit_vector = ISVREF(class_description,(SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Message_board_class_description,(SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_1 = (SI_Long)1L;
		gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		temp = (SI_Long)0L < gensymed_symbol;
	    }
	    else
		temp = TRUEP(Nil);
	}
	if (temp);
	else {
	    sub_class_bit_vector = ISVREF(class_description,(SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Simulation_subtable_class_description,
		    (SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_1 = (SI_Long)1L;
		gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		temp = (SI_Long)0L < gensymed_symbol;
	    }
	    else
		temp = TRUEP(Nil);
	}
	if (temp);
	else {
	    sub_class_bit_vector = ISVREF(class_description,(SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Logbook_page_class_description,(SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_1 = (SI_Long)1L;
		gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		temp = (SI_Long)0L < gensymed_symbol;
	    }
	    else
		temp = TRUEP(Nil);
	}
	if (temp);
	else {
	    gensymed_symbol_3 = 
		    lookup_global_or_kb_specific_property_value(Qsystem_table,
		    Class_description_gkbprop);
	    if (gensymed_symbol_3) {
		sub_class_bit_vector = ISVREF(class_description,(SI_Long)19L);
		superior_class_bit_number = IFIX(ISVREF(gensymed_symbol_3,
			(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_1 = (SI_Long)1L;
		    gensymed_symbol_2 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		    temp = (SI_Long)0L < gensymed_symbol;
		}
		else
		    temp = TRUEP(Nil);
	    }
	    else
		temp = TRUEP(Nil);
	}
	temp_1 =  !temp ? T : Nil;
    }
    else
	temp_1 = Nil;
    return VALUES_1(temp_1);
}

Object Currently_within_make_transient_instruction_p = UNBOUND;

static Object Qtransient_class_definition;  /* transient-class-definition */

static Object Qtransient;          /* transient */

static Object Qframe_flags;        /* frame-flags */

static Object Qset_transient_and_propagate;  /* set-transient-and-propagate */

/* SET-TRANSIENT-AND-PROPAGATE */
Object set_transient_and_propagate(item,x)
    Object item, x;
{
    Object sub_class_bit_vector, frame_representation, ab_loop_list_, temp_1;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2, svref_new_value;
    char temp;

    x_note_fn_call(210,95);
    if ( !TRUEP(parent_is_neither_transient_nor_permanent_p(item))) {
	sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Class_definition_class_description,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	if (temp) {
	    undefine_user_class_becoming_transient(item);
	    add_frame_note(2,Qtransient_class_definition,item);
	}
	svref_new_value = IFIX(ISVREF(item,(SI_Long)5L)) | (SI_Long)262144L;
	ISVREF(item,(SI_Long)5L) = FIX(svref_new_value);
	if ((SI_Long)0L != (IFIX(ISVREF(item,(SI_Long)4L)) & (SI_Long)1L)) {
	    note_permanent_changes(item,Qtransient);
	    if (Currently_within_make_transient_instruction_p) {
		svref_new_value = IFIX(ISVREF(item,(SI_Long)5L)) | 
			(SI_Long)131072L;
		ISVREF(item,(SI_Long)5L) = FIX(svref_new_value);
	    }
	    if (Noting_changes_to_kb_p)
		note_change_to_block_1(item,Qframe_flags);
	    svref_new_value = IFIX(ISVREF(item,(SI_Long)4L)) &  ~(SI_Long)1L;
	    ISVREF(item,(SI_Long)4L) = FIX(svref_new_value);
	}
	sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Connection_class_description,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	if (temp)
	    make_connection_transient(ISVREF(item,(SI_Long)21L));
	else
	    set_connections_of_transient_block_transient(item);
	funcall_function_to_inferior_blocks(item,
		SYMBOL_FUNCTION(Qset_transient_and_propagate));
	frame_representation = Nil;
	ab_loop_list_ = ISVREF(item,(SI_Long)9L);
      next_loop:
	if ( !TRUEP(ab_loop_list_))
	    goto end_loop;
	frame_representation = M_CAR(ab_loop_list_);
	ab_loop_list_ = M_CDR(ab_loop_list_);
	sub_class_bit_vector = ISVREF(ISVREF(frame_representation,
		(SI_Long)1L),(SI_Long)19L);
	superior_class_bit_number = IFIX(ISVREF(Block_class_description,
		(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	if (temp ?  !((SI_Long)0L != (IFIX(ISVREF(frame_representation,
		(SI_Long)5L)) & (SI_Long)262144L)) : TRUEP(Nil))
	    set_transient_and_propagate(frame_representation,Nil);
	goto next_loop;
      end_loop:;
	temp_1 = Nil;
    }
    else
	temp_1 = Nil;
    return VALUES_1(temp_1);
}

static Object Qoriginal_kb_state_plist;  /* original-kb-state-plist */

static Object Qpermanent;          /* permanent */

static Object Qset_permanent_and_propagate;  /* set-permanent-and-propagate */

/* SET-PERMANENT-AND-PROPAGATE */
Object set_permanent_and_propagate(item,superior_block)
    Object item, superior_block;
{
    Object vector_1, sub_class_bit_vector, plist, temp_1, frame_representation;
    Object ab_loop_list_;
    SI_Long svref_new_value, superior_class_bit_number, sub_class_vector_index;
    SI_Long gensymed_symbol, gensymed_symbol_1, gensymed_symbol_2;
    char already_permanent_qm, temp;

    x_note_fn_call(210,96);
    already_permanent_qm = (SI_Long)0L != (IFIX(ISVREF(item,(SI_Long)4L)) 
	    & (SI_Long)1L);
    if ( !TRUEP(parent_is_transient_p(item))) {
	svref_new_value = IFIX(ISVREF(item,(SI_Long)5L)) &  ~(SI_Long)262144L;
	ISVREF(item,(SI_Long)5L) = FIX(svref_new_value);
	if (Noting_changes_to_kb_p)
	    note_change_to_block_1(item,Qframe_flags);
	svref_new_value = IFIX(ISVREF(item,(SI_Long)4L)) | (SI_Long)1L;
	ISVREF(item,(SI_Long)4L) = FIX(svref_new_value);
	vector_1 = M_CAR(ISVREF(item,(SI_Long)2L));
	if ( !TRUEP(ISVREF(vector_1,(SI_Long)1L))) {
	    if (ISVREF(vector_1,(SI_Long)3L))
		get_block_and_offset_for_item_reference(vector_1);
	}
	sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Connection_class_description,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	if (temp)
	    make_connection_permanent(ISVREF(item,(SI_Long)21L));
	else {
	    set_connections_of_permanent_block_permanent(item);
	    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),
		    (SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Class_definition_class_description,
		    (SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_1 = (SI_Long)1L;
		gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		temp = (SI_Long)0L < gensymed_symbol;
	    }
	    else
		temp = TRUEP(Nil);
	    if (temp) {
		if ( !already_permanent_qm) {
		    define_user_class_if_possible(item);
		    delete_frame_note_if_any(Qtransient_class_definition,item);
		}
	    }
	}
	plist = get_lookup_slot_value_given_default(item,
		Qoriginal_kb_state_plist,Nil);
	if ( !TRUEP(Do_not_note_permanent_changes_p)) {
	    if (plist ||  !already_permanent_qm) {
		temp_1 = plist;
		if (temp_1);
		else
		    temp_1 = Qpermanent;
		note_permanent_changes(item,temp_1);
	    }
	}
	if (plist)
	    remove_kb_state_changes(item);
	funcall_function_to_inferior_blocks(item,
		SYMBOL_FUNCTION(Qset_permanent_and_propagate));
	frame_representation = Nil;
	ab_loop_list_ = ISVREF(item,(SI_Long)9L);
      next_loop:
	if ( !TRUEP(ab_loop_list_))
	    goto end_loop;
	frame_representation = M_CAR(ab_loop_list_);
	ab_loop_list_ = M_CDR(ab_loop_list_);
	sub_class_bit_vector = ISVREF(ISVREF(frame_representation,
		(SI_Long)1L),(SI_Long)19L);
	superior_class_bit_number = IFIX(ISVREF(Block_class_description,
		(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	if (temp ?  !((SI_Long)0L != (IFIX(ISVREF(frame_representation,
		(SI_Long)4L)) & (SI_Long)1L)) : TRUEP(Nil))
	    set_permanent_and_propagate(frame_representation,Nil);
	goto next_loop;
      end_loop:;
	temp_1 = Nil;
    }
    else
	temp_1 = Nil;
    return VALUES_1(temp_1);
}

static Object Qset_neither_permanent_nor_transient_and_propagate;  /* set-neither-permanent-nor-transient-and-propagate */

/* SET-NEITHER-PERMANENT-NOR-TRANSIENT-AND-PROPAGATE */
Object set_neither_permanent_nor_transient_and_propagate(item,x)
    Object item, x;
{
    Object sub_class_bit_vector, frame_representation, ab_loop_list_;
    Object gensymed_symbol_3, block;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2, svref_new_value;
    char temp;

    x_note_fn_call(210,97);
    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
    superior_class_bit_number = 
	    IFIX(ISVREF(Class_definition_class_description,(SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_1 = (SI_Long)1L;
	gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	temp = (SI_Long)0L < gensymed_symbol;
    }
    else
	temp = TRUEP(Nil);
    if (temp)
	undefine_user_class_becoming_transient(item);
    svref_new_value = IFIX(ISVREF(item,(SI_Long)5L)) &  ~(SI_Long)262144L;
    ISVREF(item,(SI_Long)5L) = FIX(svref_new_value);
    if (Noting_changes_to_kb_p)
	note_change_to_block_1(item,Qframe_flags);
    svref_new_value = IFIX(ISVREF(item,(SI_Long)4L)) &  ~(SI_Long)1L;
    ISVREF(item,(SI_Long)4L) = FIX(svref_new_value);
    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
    superior_class_bit_number = IFIX(ISVREF(Connection_class_description,
	    (SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_1 = (SI_Long)1L;
	gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	temp = (SI_Long)0L < gensymed_symbol;
    }
    else
	temp = TRUEP(Nil);
    if (temp)
	make_connection_neither_permanent_nor_transient(ISVREF(item,
		(SI_Long)21L));
    else
	set_connections_of_neither_permanent_nor_transient_block_neither_permanent_nor_transient(item);
    funcall_function_to_inferior_blocks(item,
	    SYMBOL_FUNCTION(Qset_neither_permanent_nor_transient_and_propagate));
    frame_representation = Nil;
    ab_loop_list_ = ISVREF(item,(SI_Long)9L);
  next_loop:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    frame_representation = M_CAR(ab_loop_list_);
    ab_loop_list_ = M_CDR(ab_loop_list_);
    sub_class_bit_vector = ISVREF(ISVREF(frame_representation,(SI_Long)1L),
	    (SI_Long)19L);
    superior_class_bit_number = IFIX(ISVREF(Block_class_description,
	    (SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_1 = (SI_Long)1L;
	gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	temp = (SI_Long)0L < gensymed_symbol;
    }
    else
	temp = TRUEP(Nil);
    if (temp ? (SI_Long)0L != (IFIX(ISVREF(frame_representation,
	    (SI_Long)5L)) & (SI_Long)262144L) || (SI_Long)0L != 
	    (IFIX(ISVREF(frame_representation,(SI_Long)4L)) & (SI_Long)1L) 
	    : TRUEP(Nil)) {
	gensymed_symbol_3 = ISVREF(frame_representation,(SI_Long)14L);
	gensymed_symbol_3 = gensymed_symbol_3 ? ISVREF(gensymed_symbol_3,
		(SI_Long)5L) : Nil;
	temp =  !TRUEP(gensymed_symbol_3);
	if (temp);
	else {
	    gensymed_symbol_3 = ISVREF(frame_representation,(SI_Long)14L);
	    gensymed_symbol_3 = gensymed_symbol_3 ? 
		    ISVREF(gensymed_symbol_3,(SI_Long)5L) : Nil;
	    block = gensymed_symbol_3;
	    if ( !((SI_Long)0L != (IFIX(ISVREF(block,(SI_Long)5L)) & 
		    (SI_Long)262144L))) {
		gensymed_symbol_3 = ISVREF(frame_representation,(SI_Long)14L);
		gensymed_symbol_3 = gensymed_symbol_3 ? 
			ISVREF(gensymed_symbol_3,(SI_Long)5L) : Nil;
		block = gensymed_symbol_3;
		temp =  !((SI_Long)0L != (IFIX(ISVREF(block,(SI_Long)4L)) 
			& (SI_Long)1L));
	    }
	    else
		temp = TRUEP(Nil);
	}
    }
    else
	temp = TRUEP(Nil);
    if (temp)
	set_neither_permanent_nor_transient_and_propagate(frame_representation,
		Nil);
    goto next_loop;
  end_loop:;
    return VALUES_1(Nil);
}

Object Definition_with_subclass_or_instance_in_kb_hierarchy = UNBOUND;

/* LOCATE-DEFINITION-WITH-SUBCLASS-OR-INSTANCE */
Object locate_definition_with_subclass_or_instance(inferior)
    Object inferior;
{
    Object definition_with_subclass_or_instance_in_kb_hierarchy, temp;
    Declare_special(1);

    x_note_fn_call(210,98);
    definition_with_subclass_or_instance_in_kb_hierarchy = Nil;
    PUSH_SPECIAL(Definition_with_subclass_or_instance_in_kb_hierarchy,definition_with_subclass_or_instance_in_kb_hierarchy,
	    0);
      locate_definition_with_subclass_or_instance_1(inferior,Nil);
      temp = Definition_with_subclass_or_instance_in_kb_hierarchy;
    POP_SPECIAL();
    return VALUES_1(temp);
}

static Object Qconnection;         /* connection */

static Object Qclass_inheritance_path_of_definition;  /* class-inheritance-path-of-definition */

static Object Qentity;             /* entity */

static Object Qlocate_definition_with_subclass_or_instance_1;  /* locate-definition-with-subclass-or-instance-1 */

/* LOCATE-DEFINITION-WITH-SUBCLASS-OR-INSTANCE-1 */
Object locate_definition_with_subclass_or_instance_1(inferior,superior_qm)
    Object inferior, superior_qm;
{
    Object x2, gensymed_symbol, sub_class_bit_vector, definition_name_qm;
    Object scope_conses, ab_loopvar_, class_1, temp_1, ab_loopvar__1, entity;
    Object ab_loop_it_, ab_node_stack_, ab_current_node_, ab_skip_list_form_;
    Object ab_skip_list_p_, ab_next_node_, ab_tail_node_, ab_current_alist_;
    Object ab_entry_cons_, ab_connection_, ab_connection_item_, connection;
    Object ab_less_than_branch_qm_, connection_frame_or_class;
    SI_Long superior_class_bit_number, sub_class_vector_index;
    SI_Long gensymed_symbol_1, gensymed_symbol_2, gensymed_symbol_3;
    char temp;
    Declare_special(2);

    x_note_fn_call(210,99);
    if (SIMPLE_VECTOR_P(inferior) && 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(inferior)) > (SI_Long)2L &&  
	    !EQ(ISVREF(inferior,(SI_Long)1L),Qavailable_frame_vector)) {
	x2 = ISVREF(inferior,(SI_Long)1L);
	gensymed_symbol = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
		Qg2_defstruct_structure_name_class_description_g2_struct) ?
		 x2 : Qnil;
    }
    else
	gensymed_symbol = Nil;
    if (gensymed_symbol) {
	sub_class_bit_vector = ISVREF(gensymed_symbol,(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Class_definition_class_description,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol_1 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_2 = (SI_Long)1L;
	    gensymed_symbol_3 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
	    gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
	    temp = (SI_Long)0L < gensymed_symbol_1;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    definition_name_qm = temp ? ISVREF(inferior,(SI_Long)20L) : Nil;
    if ( !TRUEP(Definition_with_subclass_or_instance_in_kb_hierarchy)) {
	if (definition_name_qm) {
	    scope_conses = Scope_conses;
	    ab_loopvar_ = Nil;
	    ab_loopvar_ = definition_name_qm;
	    class_1 = Nil;
	    PUSH_SPECIAL(Scope_conses,scope_conses,0);
	      ab_loopvar_ = collect_subclasses(ab_loopvar_);
	    next_loop:
	      if ( !TRUEP(ab_loopvar_))
		  goto end_loop;
	      temp_1 = M_CAR(ab_loopvar_);
	      ab_loopvar_ = M_CDR(ab_loopvar_);
	      class_1 = temp_1;
	      if (class_1 &&  !EQ(class_1,definition_name_qm)) {
		  temp = TRUEP(T);
		  goto end_1;
	      }
	      goto next_loop;
	    end_loop:
	      temp = TRUEP(Qnil);
	    end_1:;
	    POP_SPECIAL();
	    if (temp);
	    else
		temp = 
			TRUEP(lookup_kb_specific_property_value(definition_name_qm,
			Instances_specific_to_this_class_kbprop));
	    if (temp);
	    else if (memq_function(Qconnection,
		    get_lookup_slot_value_given_default(inferior,
		    Qclass_inheritance_path_of_definition,Nil))) {
		scope_conses = Scope_conses;
		ab_loopvar_ = Nil;
		ab_loopvar__1 = Nil;
		entity = Nil;
		PUSH_SPECIAL(Scope_conses,scope_conses,1);
		  ab_loop_it_ = Nil;
		  ab_loopvar_ = collect_subclasses(Qentity);
		next_loop_1:
		  if ( !TRUEP(ab_loopvar__1)) {
		    next_loop_2:
		      if ( !TRUEP(ab_loopvar_))
			  goto end_loop_1;
		      ab_loopvar__1 = 
			      lookup_kb_specific_property_value(M_CAR(ab_loopvar_),
			      Instances_specific_to_this_class_kbprop);
		      ab_loopvar_ = M_CDR(ab_loopvar_);
		      if (ab_loopvar__1)
			  goto end_loop_1;
		      goto next_loop_2;
		    end_loop_1:
		      temp =  !TRUEP(ab_loopvar__1);
		  }
		  else
		      temp = TRUEP(Nil);
		  if (temp)
		      goto end_loop_2;
		  entity = ab_loopvar__1;
		  ab_loopvar__1 = ISVREF(ab_loopvar__1,(SI_Long)6L);
		  scope_conses = Scope_conses;
		  ab_node_stack_ = Nil;
		  ab_current_node_ = Nil;
		  gensymed_symbol = ISVREF(entity,(SI_Long)14L);
		  gensymed_symbol = gensymed_symbol ? 
			  ISVREF(gensymed_symbol,(SI_Long)6L) : Nil;
		  ab_skip_list_form_ = gensymed_symbol;
		  ab_skip_list_p_ = Nil;
		  ab_next_node_ = Nil;
		  ab_tail_node_ = Nil;
		  ab_current_alist_ = Nil;
		  ab_entry_cons_ = Nil;
		  ab_connection_ = Nil;
		  ab_connection_item_ = Nil;
		  connection = Nil;
		  PUSH_SPECIAL(Scope_conses,scope_conses,0);
		    gensymed_symbol = CDR(ab_skip_list_form_);
		    if (CONSP(gensymed_symbol)) {
			temp_1 = M_CAR(gensymed_symbol);
			temp = SIMPLE_VECTOR_P(temp_1);
		    }
		    else
			temp = TRUEP(Nil);
		    if (temp) {
			temp_1 = M_CDR(gensymed_symbol);
			ab_skip_list_p_ = SIMPLE_VECTOR_P(temp_1) ? T : Nil;
		    }
		    else
			ab_skip_list_p_ = Nil;
		    if (ab_skip_list_p_) {
			ab_next_node_ = 
				ISVREF(ISVREF(M_CAR(M_CDR(ab_skip_list_form_)),
				(SI_Long)0L),(SI_Long)0L);
			ab_tail_node_ = M_CDR(M_CDR(ab_skip_list_form_));
			if (EQ(ab_next_node_,ab_tail_node_))
			    ab_next_node_ = Nil;
		    }
		    else
			ab_next_node_ = CDR(ab_skip_list_form_);
		  next_loop_3:
		  next_loop_4:
		    if (ab_current_alist_) {
			ab_entry_cons_ = M_CAR(ab_current_alist_);
			ab_connection_ = M_CAR(ab_entry_cons_);
			ab_connection_item_ = M_CDR(ab_entry_cons_);
			ab_current_alist_ = M_CDR(ab_current_alist_);
		    }
		    else if (ab_skip_list_p_) {
			if (ab_next_node_) {
			    ab_current_node_ = ab_next_node_;
			    ab_next_node_ = ISVREF(ISVREF(ab_current_node_,
				    (SI_Long)0L),(SI_Long)0L);
			    if (EQ(ab_next_node_,ab_tail_node_))
				ab_next_node_ = Nil;
			    ab_connection_ = ISVREF(ab_current_node_,
				    (SI_Long)2L);
			    ab_connection_item_ = ISVREF(ab_current_node_,
				    (SI_Long)3L);
			}
			else
			    ab_current_node_ = Nil;
		    }
		    else {
			if (ab_next_node_) {
			    ab_current_node_ = ab_next_node_;
			    ab_less_than_branch_qm_ = Nil;
			  next_loop_5:
			    ab_less_than_branch_qm_ = 
				    ISVREF(ab_current_node_,(SI_Long)1L);
			    if ( !TRUEP(ab_less_than_branch_qm_))
				goto end_loop_3;
			    ab_node_stack_ = scope_cons(ab_current_node_,
				    ab_node_stack_);
			    ab_current_node_ = ab_less_than_branch_qm_;
			    goto next_loop_5;
			  end_loop_3:;
			}
			else if (ab_node_stack_) {
			    ab_next_node_ = ab_node_stack_;
			    ab_current_node_ = M_CAR(ab_node_stack_);
			    ab_node_stack_ = M_CDR(ab_node_stack_);
			}
			else
			    ab_current_node_ = Nil;
			if (ab_current_node_) {
			    ab_next_node_ = ISVREF(ab_current_node_,
				    (SI_Long)2L);
			    ab_current_alist_ = ISVREF(ab_current_node_,
				    (SI_Long)3L);
			    ab_entry_cons_ = M_CAR(ab_current_alist_);
			    ab_connection_ = M_CAR(ab_entry_cons_);
			    ab_connection_item_ = M_CDR(ab_entry_cons_);
			    ab_current_alist_ = M_CDR(ab_current_alist_);
			}
		    }
		    if ( !TRUEP(ab_current_node_) || ab_current_node_ && 
			    ab_connection_)
			goto end_2;
		    goto next_loop_4;
		  end_loop_4:
		  end_2:
		    if ( !TRUEP(ab_current_node_))
			goto end_loop_5;
		    connection = ab_connection_;
		    if (SIMPLE_VECTOR_P(connection) && 
			    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(connection)) > 
			    (SI_Long)2L &&  !EQ(ISVREF(connection,
			    (SI_Long)1L),Qavailable_frame_vector)) {
			x2 = ISVREF(connection,(SI_Long)1L);
			temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
				(SI_Long)0L),
				Qg2_defstruct_structure_name_class_description_g2_struct) 
				? TRUEP(x2) : TRUEP(Qnil);
		    }
		    else
			temp = TRUEP(Nil);
		    if (temp)
			temp_1 = ISVREF(ISVREF(connection,(SI_Long)1L),
				(SI_Long)1L);
		    else {
			connection_frame_or_class = ISVREF(connection,
				(SI_Long)1L);
			temp_1 = SYMBOLP(connection_frame_or_class) ? 
				connection_frame_or_class : 
				ISVREF(ISVREF(connection_frame_or_class,
				(SI_Long)1L),(SI_Long)1L);
		    }
		    gensymed_symbol = 
			    lookup_global_or_kb_specific_property_value(temp_1,
			    Class_description_gkbprop);
		    if (gensymed_symbol ? 
			    TRUEP(memq_function(definition_name_qm,
			    ISVREF(gensymed_symbol,(SI_Long)2L))) : 
				TRUEP(Nil)) {
			ab_loop_it_ = T;
			goto end_3;
		    }
		    goto next_loop_3;
		  end_loop_5:
		    ab_loop_it_ = Qnil;
		  end_3:;
		  POP_SPECIAL();
		  if (ab_loop_it_) {
		      temp = TRUEP(ab_loop_it_);
		      goto end_4;
		  }
		  goto next_loop_1;
		end_loop_2:
		  temp = TRUEP(Qnil);
		end_4:;
		POP_SPECIAL();
	    }
	    else
		temp = TRUEP(Nil);
	}
	else
	    temp = TRUEP(Nil);
	if (temp) {
	    Definition_with_subclass_or_instance_in_kb_hierarchy = 
		    definition_name_qm;
	    return VALUES_1(Definition_with_subclass_or_instance_in_kb_hierarchy);
	}
	else
	    return funcall_function_to_inferior_blocks(inferior,
		    SYMBOL_FUNCTION(Qlocate_definition_with_subclass_or_instance_1));
    }
    else
	return VALUES_1(Nil);
}

static Object Qwithout_permanence_checks;  /* without-permanence-checks */

static Object Qwithout_permanence_checks_without_leaving_stubs;  /* without-permanence-checks-without-leaving-stubs */

/* FUNCALL-DELETE-INST */
Object funcall_delete_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item_to_delete, symbol_or_t_or_nil, without_permanence_checks_p;
    Object without_leaving_stubs_p;

    x_note_fn_call(210,100);
    item_to_delete = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    symbol_or_t_or_nil = ISVREF(local_stack,IFIX(top_of_stack));
    without_permanence_checks_p = EQ(symbol_or_t_or_nil,
	    Qwithout_permanence_checks) ? T : Nil;
    if (without_permanence_checks_p);
    else
	without_permanence_checks_p = EQ(symbol_or_t_or_nil,
		Qwithout_permanence_checks_without_leaving_stubs) ? T : Nil;
    without_leaving_stubs_p = EQ(symbol_or_t_or_nil,T) ? T : Nil;
    if (without_leaving_stubs_p);
    else
	without_leaving_stubs_p = EQ(symbol_or_t_or_nil,
		Qwithout_permanence_checks_without_leaving_stubs) ? T : Nil;
    delete_action_internal(item_to_delete,without_permanence_checks_p,
	    without_leaving_stubs_p,top_of_stack,T);
    return VALUES_1(Nil);
}

static Object string_constant_40;  /* "Cannot delete ~NF.  It is not a transient item." */

static Object string_constant_41;  /* "Cannot delete ~NF.  It is a permanent proprietary item." */

static Object string_constant_42;  /* "This action cannot delete the procedure-invocation ~NF.  ~
				    *         This item is deleted automatically when the ~
				    *         procedure-invocation completes execution or if the ~
				    *         procedure or procedure-invocation is aborted."
				    */

static Object string_constant_43;  /* "Cannot delete ~NF.  It is either an attribute or simulation ~
				    *         subtable of a superior object."
				    */

static Object string_constant_44;  /* "Cannot delete ~NF, since the delete action is being ~
				    *         executed within ~NF, which would be deleted as part of ~NF."
				    */

/* DELETE-ACTION-INTERNAL */
Object delete_action_internal(item_to_delete,without_permanence_checks_p,
	    without_leaving_stubs_p,top_of_stack,validate_environment_p)
    Object item_to_delete, without_permanence_checks_p;
    Object without_leaving_stubs_p, top_of_stack, validate_environment_p;
{
    Object top_of_stack_1, message_1, sub_class_bit_vector, gensymed_symbol_3;
    Object type_name, temp_1, frame_serial_number_setf_arg, old, new_1;
    Object svref_new_value, queue_existential_rules;
    Object queue_existential_rules_tail;
    Object old_delete_connections_without_leaving_stubs_qm, queue, tail, item;
    Object sense, fsn, last_cons, precomputed_links_and_objects, next_tail;
    Object temp_2, gensym_cons;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp;
    Declare_special(2);

    x_note_fn_call(210,101);
    if ( !TRUEP(without_permanence_checks_p) &&  !((SI_Long)0L != 
	    (IFIX(ISVREF(item_to_delete,(SI_Long)5L)) & (SI_Long)262144L))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_40,
		item_to_delete);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if (in_order_p(item_to_delete) &&  !((SI_Long)0L != 
	    (IFIX(ISVREF(item_to_delete,(SI_Long)5L)) & (SI_Long)262144L))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_41,
		item_to_delete);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else {
	sub_class_bit_vector = ISVREF(ISVREF(item_to_delete,(SI_Long)1L),
		(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Procedure_invocation_class_description,
		(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	if (temp) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_42,item_to_delete);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    sub_class_bit_vector = ISVREF(ISVREF(item_to_delete,
		    (SI_Long)1L),(SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Simulation_subtable_class_description,
		    (SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_1 = (SI_Long)1L;
		gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		temp = (SI_Long)0L < gensymed_symbol;
	    }
	    else
		temp = TRUEP(Nil);
	    if (temp);
	    else {
		gensymed_symbol_3 = 
			lookup_global_or_kb_specific_property_value(Qsystem_table,
			Class_description_gkbprop);
		if (gensymed_symbol_3) {
		    sub_class_bit_vector = ISVREF(ISVREF(item_to_delete,
			    (SI_Long)1L),(SI_Long)19L);
		    superior_class_bit_number = 
			    IFIX(ISVREF(gensymed_symbol_3,(SI_Long)18L));
		    sub_class_vector_index = superior_class_bit_number >>  
			    -  - (SI_Long)3L;
		    if (sub_class_vector_index < 
			    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				{
			gensymed_symbol = 
				UBYTE_8_ISAREF_1(sub_class_bit_vector,
				sub_class_vector_index);
			gensymed_symbol_1 = (SI_Long)1L;
			gensymed_symbol_2 = superior_class_bit_number & 
				(SI_Long)7L;
			gensymed_symbol_1 = gensymed_symbol_1 << 
				gensymed_symbol_2;
			gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
			temp = (SI_Long)0L < gensymed_symbol;
		    }
		    else
			temp = TRUEP(Nil);
		}
		else
		    temp = TRUEP(Nil);
	    }
	    if (temp);
	    else
		temp = 
			TRUEP(get_lookup_slot_value_given_default(item_to_delete,
			Qparent_frame,Nil));
	    if (temp) {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_43,item_to_delete);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    else if (((SI_Long)0L != 
		    (IFIX(ISVREF(Current_computation_frame,(SI_Long)5L)) & 
		    (SI_Long)262144L) || without_permanence_checks_p &&  
		    !((SI_Long)0L != (IFIX(ISVREF(item_to_delete,
		    (SI_Long)5L)) & (SI_Long)262144L))) && 
		    existence_depends_on_p(Current_computation_frame,
		    item_to_delete)) {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(4,
			string_constant_44,item_to_delete,
			Current_computation_frame,item_to_delete);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    else {
		if (validate_environment_p) {
		    if (SIMPLE_VECTOR_P(Current_computation_instance)) {
			type_name = ISVREF(Current_computation_instance,
				(SI_Long)0L);
			temp = EQ(type_name,
				Qg2_defstruct_structure_name_code_body_invocation_g2_struct);
			if (temp);
			else
			    temp = EQ(type_name,
				    Qg2_defstruct_structure_name_procedure_invocation_g2_struct);
		    }
		    else
			temp = TRUEP(Nil);
		    if (temp)
			update_code_body_invocation_frame_serial_number(Current_computation_instance);
		    else if (SIMPLE_VECTOR_P(Current_computation_instance) 
			    && EQ(ISVREF(Current_computation_instance,
			    (SI_Long)0L),
			    Qg2_defstruct_structure_name_rule_instance_g2_struct)) 
				{
			temp_1 = Current_computation_instance;
			frame_serial_number_setf_arg = 
				Current_frame_serial_number;
			old = ISVREF(temp_1,(SI_Long)11L);
			new_1 = frame_serial_number_setf_arg;
			svref_new_value = (FIXNUMP(old) ||  !TRUEP(old)) 
				&& (FIXNUMP(new_1) ||  !TRUEP(new_1)) ? 
				new_1 : 
				frame_serial_number_setf_helper_1(old,new_1);
			SVREF(temp_1,FIX((SI_Long)11L)) = svref_new_value;
		    }
		}
		queue_existential_rules = T;
		queue_existential_rules_tail = Nil;
		PUSH_SPECIAL(Queue_existential_rules_tail,queue_existential_rules_tail,
			1);
		  PUSH_SPECIAL(Queue_existential_rules,queue_existential_rules,
			  0);
		    gensymed_symbol_3 = Nil;
		    old_delete_connections_without_leaving_stubs_qm = 
			    Delete_connections_without_leaving_stubs_qm;
		    Delete_connections_without_leaving_stubs_qm = 
			    without_leaving_stubs_p;
		    gensymed_symbol_3 = delete_item(item_to_delete);
		    Delete_connections_without_leaving_stubs_qm = 
			    old_delete_connections_without_leaving_stubs_qm;
		    queue = Queue_existential_rules;
		    if ( !EQ(queue,T)) {
			tail = queue;
			item = Nil;
			sense = Nil;
			fsn = Nil;
			last_cons = Nil;
			precomputed_links_and_objects = Nil;
			next_tail = Nil;
		      next_loop:
			if ( !TRUEP(tail))
			    goto end_loop;
			item = CAR(tail);
			temp_2 = CDR(tail);
			sense = CAR(temp_2);
			temp_2 = CDR(tail);
			temp_2 = CDR(temp_2);
			fsn = CAR(temp_2);
			temp_2 = CDR(tail);
			temp_2 = CDR(temp_2);
			last_cons = CDR(temp_2);
			precomputed_links_and_objects = CAR(last_cons);
			next_tail = CDR(last_cons);
			safe_invoke_rules_for_existential_chaining(item,
				sense,fsn,precomputed_links_and_objects);
			reclaim_frame_serial_number(fsn);
			tail = next_tail;
			goto next_loop;
		      end_loop:
			if (queue &&  !((SI_Long)0L == 
				inline_debugging_consing())) {
			    gensym_cons = queue;
			  next_loop_1:
			    inline_note_reclaim_cons(gensym_cons,Qab_gensym);
			    if (EQ(gensym_cons,last_cons))
				goto end_1;
			    else if ( !TRUEP(gensym_cons))
				goto end_1;
			    else
				gensym_cons = CDR(gensym_cons);
			    goto next_loop_1;
			  end_loop_1:
			  end_1:;
			}
			temp_1 = Available_gensym_conses;
			M_CDR(last_cons) = temp_1;
			Available_gensym_conses = queue;
		    }
		  POP_SPECIAL();
		POP_SPECIAL();
		if (validate_environment_p)
		    validate_computation_instance_environment(Current_computation_instance,
			    Nil,Nil);
	    }
	}
    }
    return VALUES_1(Nil);
}

static Object Qchange_set_of_inferiors;  /* change-set-of-inferiors */

static Object string_constant_45;  /* "In the TRANSFER action, the inferiors of ~a cannot be changed" */

static Object Qchange_superior;    /* change-superior */

static Object string_constant_46;  /* "In the TRANSFER action, the superior of ~a cannot be changed" */

static Object Qslot_putter;        /* slot-putter */

static Object Qslot_category;      /* slot-category */

static Object Qput_attribute_value;  /* put-attribute-value */

static Object Qdo_not_save;        /* do-not-save */

static Object Qsave;               /* save */

static Object Qnote_slot_changes;  /* note-slot-changes */

static Object Qparent_attribute_name;  /* parent-attribute-name */

/* REMOVE-FRAME-FROM-PARENT-ATTRIBUTE */
Object remove_frame_from_parent_attribute(item,top_of_stack)
    Object item, top_of_stack;
{
    Object slot_description, parent_1, pretty_name, class_qualifier_qm;
    Object top_of_stack_1, message_1, frame, new_value, pretty_slot_name;
    Object defining_class, slot_component_name_qm, slot_component_indicator_qm;
    Object do_not_reclaim_old_value_override_qm, old_value;
    Object do_not_reclaim_old_value_qm, slot_component_putter_qm, value;
    Object dont_reclaim_qm, slot_putter_qm, list_1, vector_slot_index_qm;
    Object user_vector_slot_index_qm, slot_name, lookup_structure_qm;
    Object slot_index_qm, gensymed_symbol, gensymed_symbol_1, slot_features;
    Object sub_class_bit_vector, new_cons, temp_1;
    SI_Long max_i, i, ab_loop_bind_, superior_class_bit_number;
    SI_Long sub_class_vector_index, gensymed_symbol_2, gensymed_symbol_3;
    SI_Long gensymed_symbol_4;
    char temp;
    Object result;

    x_note_fn_call(210,102);
    slot_description = Nil;
    result = get_kb_parent_information(item);
    MVS_3(result,parent_1,pretty_name,class_qualifier_qm);
    if ( 
	    !TRUEP(frame_system_operation_is_allowed_p(Qchange_set_of_inferiors,
	    parent_1))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_45,
		parent_1);
	return raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if ( !TRUEP(frame_system_operation_is_allowed_p(Qchange_superior,
	    item))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_46,item);
	return raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else {
	slot_description = 
		get_slot_description_of_class_description_function(pretty_name,
		ISVREF(parent_1,(SI_Long)1L),class_qualifier_qm);
	frame = parent_1;
	new_value = Nil;
	pretty_slot_name = ISVREF(slot_description,(SI_Long)2L);
	defining_class = ISVREF(slot_description,(SI_Long)3L);
	slot_component_name_qm = Nil;
	slot_component_indicator_qm = Nil;
	do_not_reclaim_old_value_override_qm = T;
	old_value = Nil;
	do_not_reclaim_old_value_qm = Nil;
	if (slot_component_name_qm || slot_component_indicator_qm) {
	    result = get_slot_component_value(frame,pretty_slot_name,
		    defining_class,slot_component_name_qm,
		    slot_component_indicator_qm);
	    MVS_2(result,old_value,do_not_reclaim_old_value_qm);
	    if ( !(Do_not_note_permanent_changes_p || 
		    slot_value_equal_p(old_value,new_value)))
		note_permanent_change_to_component(frame,slot_description,
			slot_component_name_qm,slot_component_indicator_qm);
	    slot_component_putter_qm = 
		    get_slot_component_putter_if_any(frame,
		    pretty_slot_name,defining_class,slot_component_name_qm,
		    slot_component_indicator_qm);
	    if (slot_component_putter_qm) {
		result = inline_funcall_6(slot_component_putter_qm,frame,
			pretty_slot_name,defining_class,
			slot_component_indicator_qm,new_value,Nil);
		MVS_2(result,value,dont_reclaim_qm);
		if (dont_reclaim_qm)
		    do_not_reclaim_old_value_qm = T;
	    }
	    else
		set_slot_component_value(frame,pretty_slot_name,
			defining_class,slot_component_name_qm,
			slot_component_indicator_qm,new_value);
	}
	else {
	    if ( !TRUEP(ISVREF(slot_description,(SI_Long)8L))) {
		pretty_slot_name = ISVREF(slot_description,(SI_Long)2L);
		slot_putter_qm = 
			getfq_function_no_default(INLINE_SYMBOL_PLIST(pretty_slot_name),
			Qslot_putter);
		if (slot_putter_qm);
		else {
		    list_1 = INLINE_SYMBOL_PLIST(pretty_slot_name);
		  next_loop:
		    if ( !TRUEP(list_1) || EQ(M_CAR(list_1),Qslot_category))
			goto end_loop;
		    list_1 = M_CDR(M_CDR(list_1));
		    goto next_loop;
		  end_loop:;
		    slot_putter_qm =  !(list_1 ? 
			    TRUEP(M_CAR(M_CDR(list_1))) : TRUEP(Nil)) ? 
			    Qput_attribute_value : Nil;
		}
	    }
	    else
		slot_putter_qm = Qput_attribute_value;
	    if (EQ(slot_putter_qm,Qput_attribute_value)) {
		do_not_reclaim_old_value_qm = T;
		put_attribute_description_value(frame,slot_description,
			new_value,do_not_reclaim_old_value_override_qm);
	    }
	    else {
		vector_slot_index_qm = ISVREF(slot_description,(SI_Long)7L);
		if (vector_slot_index_qm)
		    old_value = ISVREF(frame,IFIX(vector_slot_index_qm));
		else {
		    user_vector_slot_index_qm = ISVREF(slot_description,
			    (SI_Long)8L);
		    if (user_vector_slot_index_qm)
			old_value = ISVREF(ISVREF(frame,(SI_Long)0L),
				IFIX(user_vector_slot_index_qm));
		    else {
			slot_name = ISVREF(slot_description,(SI_Long)1L);
			lookup_structure_qm = ISVREF(frame,(SI_Long)0L);
			if (lookup_structure_qm) {
			    max_i = 
				    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(lookup_structure_qm));
			    max_i = max_i - (SI_Long)1L;
			    i = IFIX(ISVREF(ISVREF(frame,(SI_Long)1L),
				    (SI_Long)15L));
			    ab_loop_bind_ = max_i;
			  next_loop_1:
			    if (i >= ab_loop_bind_)
				goto end_loop_1;
			    if (EQ(ISVREF(lookup_structure_qm,i),slot_name)) {
				slot_index_qm = FIX(i + (SI_Long)1L);
				goto end_1;
			    }
			    i = i + (SI_Long)2L;
			    goto next_loop_1;
			  end_loop_1:
			    slot_index_qm = Qnil;
			  end_1:;
			    old_value = slot_index_qm ? 
				    ISVREF(lookup_structure_qm,
				    IFIX(slot_index_qm)) : 
				    ISVREF(slot_description,(SI_Long)6L);
			}
			else
			    old_value = ISVREF(slot_description,(SI_Long)6L);
		    }
		}
		if ( !(Do_not_note_permanent_changes_p || 
			slot_value_equal_p(old_value,new_value)))
		    note_permanent_change(frame,slot_description);
		if (slot_putter_qm) {
		    result = inline_funcall_3(slot_putter_qm,frame,
			    new_value,Nil);
		    MVS_2(result,gensymed_symbol,gensymed_symbol_1);
		    do_not_reclaim_old_value_qm = gensymed_symbol_1;
		}
		else {
		    if (Noting_changes_to_kb_p) {
			slot_features = ISVREF(slot_description,(SI_Long)9L);
			temp = assq_function(Qtype,slot_features) ?  
				!TRUEP(assq_function(Qdo_not_save,
				slot_features)) : 
				TRUEP(assq_function(Qsave,slot_features));
			if (temp);
			else
			    temp = TRUEP(assq_function(Qnote_slot_changes,
				    ISVREF(slot_description,(SI_Long)9L)));
		    }
		    else
			temp = TRUEP(Nil);
		    if (temp) {
			sub_class_bit_vector = ISVREF(ISVREF(frame,
				(SI_Long)1L),(SI_Long)19L);
			superior_class_bit_number = 
				IFIX(ISVREF(Block_class_description,
				(SI_Long)18L));
			sub_class_vector_index = superior_class_bit_number 
				>>  -  - (SI_Long)3L;
			if (sub_class_vector_index < 
				IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				    {
			    gensymed_symbol_2 = 
				    UBYTE_8_ISAREF_1(sub_class_bit_vector,
				    sub_class_vector_index);
			    gensymed_symbol_3 = (SI_Long)1L;
			    gensymed_symbol_4 = superior_class_bit_number 
				    & (SI_Long)7L;
			    gensymed_symbol_3 = gensymed_symbol_3 << 
				    gensymed_symbol_4;
			    gensymed_symbol_2 = gensymed_symbol_2 & 
				    gensymed_symbol_3;
			    temp = (SI_Long)0L < gensymed_symbol_2;
			}
			else
			    temp = TRUEP(Nil);
			if (temp)
			    note_change_to_block_1(frame,
				    ISVREF(slot_description,(SI_Long)2L));
			else
			    note_change_to_dependent_frame_1();
		    }
		    set_slot_description_value_without_noting(frame,
			    slot_description,new_value);
		}
	    }
	}
	if ( !TRUEP(do_not_reclaim_old_value_qm) &&  
		!TRUEP(do_not_reclaim_old_value_override_qm) && old_value 
		&&  !EQ(new_value,old_value) &&  !FIXNUMP(old_value) && 
		(slot_component_name_qm ||  !EQ(old_value,
		ISVREF(slot_description,(SI_Long)6L))))
	    reclaim_slot_value(old_value);
	gensymed_symbol = get_lookup_slot_value_given_default(item,
		Qparent_attribute_name,Nil);
	set_non_savable_lookup_slot_value(item,Qparent_frame,Nil);
	gensymed_symbol = get_lookup_slot_value_given_default(item,
		Qparent_attribute_name,Nil);
	if (Nil) {
	    new_cons = Available_gensym_conses;
	    if (new_cons) {
		Available_gensym_conses = M_CDR(new_cons);
		gensymed_symbol_1 = new_cons;
	    }
	    else
		gensymed_symbol_1 = Nil;
	    if ( !TRUEP(gensymed_symbol_1))
		gensymed_symbol_1 = replenish_gensym_cons_pool();
	    M_CAR(gensymed_symbol_1) = Nil;
	    M_CDR(gensymed_symbol_1) = Nil;
	    inline_note_allocate_cons(gensymed_symbol_1,Qab_gensym);
	    temp_1 = gensymed_symbol_1;
	}
	else
	    temp_1 = Nil;
	set_non_savable_lookup_slot_value(item,Qparent_attribute_name,temp_1);
	return reclaim_slot_value(gensymed_symbol);
    }
}

/* FUNCALL-TRANSFER-INST */
Object funcall_transfer_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item, workspace_or_place_reference_arg, x_arg, y_arg;

    x_note_fn_call(210,103);
    item = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)3L);
    workspace_or_place_reference_arg = ISVREF(local_stack,
	    IFIX(top_of_stack) - (SI_Long)2L);
    x_arg = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    y_arg = ISVREF(local_stack,IFIX(top_of_stack));
    transfer_action_internal(item,workspace_or_place_reference_arg,x_arg,
	    y_arg,top_of_stack,T);
    return VALUES_1(Nil);
}

static Object Qimage_definition;   /* image-definition */

static Object Qimage_definition_media_bin;  /* image-definition-media-bin */

/* SUPERIOR-BLOCK-P */
Object superior_block_p(block_qm,item_qm)
    Object block_qm, item_qm;
{
    Object sub_class_bit_vector, gensymed_symbol_3, ab_queue_form_;
    Object ab_next_queue_element_, subblock, temp_1, subworkspace_qm;
    Object gensymed_symbol_4, media_bin_qm;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp;

    x_note_fn_call(210,104);
    if (block_qm && item_qm) {
	sub_class_bit_vector = ISVREF(ISVREF(block_qm,(SI_Long)1L),
		(SI_Long)19L);
	superior_class_bit_number = IFIX(ISVREF(Block_class_description,
		(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    if (temp) {
	gensymed_symbol_3 = ISVREF(block_qm,(SI_Long)14L);
	gensymed_symbol_3 = gensymed_symbol_3 ? ISVREF(gensymed_symbol_3,
		(SI_Long)4L) : Nil;
	ab_queue_form_ = gensymed_symbol_3;
	ab_next_queue_element_ = Nil;
	subblock = Nil;
	if (ab_queue_form_)
	    ab_next_queue_element_ = ISVREF(ab_queue_form_,(SI_Long)0L);
      next_loop:
	if (EQ(ab_next_queue_element_,ab_queue_form_))
	    goto end_loop;
	subblock = ISVREF(ab_next_queue_element_,(SI_Long)2L);
	ab_next_queue_element_ = ISVREF(ab_next_queue_element_,(SI_Long)0L);
	if (EQ(subblock,item_qm) || superior_block_p(subblock,item_qm))
	    return VALUES_1(T);
	goto next_loop;
      end_loop:;
	sub_class_bit_vector = ISVREF(ISVREF(block_qm,(SI_Long)1L),
		(SI_Long)19L);
	superior_class_bit_number = IFIX(ISVREF(Entity_class_description,
		(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	if (temp) {
	    temp_1 = ISVREF(block_qm,(SI_Long)18L);
	    subworkspace_qm = CAR(temp_1);
	    if (EQ(subworkspace_qm,item_qm) || 
		    superior_block_p(subworkspace_qm,item_qm))
		return VALUES_1(T);
	    gensymed_symbol_3 = ISVREF(block_qm,(SI_Long)1L);
	    gensymed_symbol_4 = 
		    lookup_global_or_kb_specific_property_value(Qimage_definition,
		    Class_description_gkbprop);
	    if (gensymed_symbol_4) {
		sub_class_bit_vector = ISVREF(gensymed_symbol_3,(SI_Long)19L);
		superior_class_bit_number = IFIX(ISVREF(gensymed_symbol_4,
			(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_1 = (SI_Long)1L;
		    gensymed_symbol_2 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		    temp = (SI_Long)0L < gensymed_symbol;
		}
		else
		    temp = TRUEP(Nil);
	    }
	    else
		temp = TRUEP(Nil);
	    if (temp) {
		media_bin_qm = 
			get_lookup_slot_value_given_default(block_qm,
			Qimage_definition_media_bin,Nil);
		if (EQ(media_bin_qm,item_qm) || 
			superior_block_p(media_bin_qm,item_qm))
		    return VALUES_1(T);
	    }
	}
    }
    return VALUES_1(Nil);
}

static Object string_constant_47;  /* "Transfer is not permitted to ~NF, because ~A" */

static Object string_constant_48;  /* "Transfer is not permitted for ~NF, because ~A" */

static Object Qui_client_session;  /* ui-client-session */

static Object string_constant_49;  /* "Transfer is not permitted for ~NF." */

static Object string_constant_50;  /* "Transfer can currently only be applied to transient items, ~
				    *               and ~NF is not transient."
				    */

static Object string_constant_51;  /* "Transfer to ~NF is not permitted, because it is proprietary." */

static Object string_constant_52;  /* "Cannot transfer an item onto itself" */

static Object string_constant_53;  /* "Cannot transfer a value into ~NV." */

static Object Qattribute;          /* attribute */

static Object string_constant_54;  /* "Objects with stubs cannot be transferred to attributes." */

static Object string_constant_55;  /* "Cannot transfer a value into the ~(~a~) of ~NF. ~
				    *                                The attribute is not defined."
				    */

static Object string_constant_56;  /* "Cannot transfer a value into the ~(~a~) of ~NF, since ~
				    *                                that is a system attribute."
				    */

static Object string_constant_57;  /* "The value to transfer to the ~NS of ~NF must conform ~
				    *                                 to the data type of its attribute type specification, ~
				    *                                 ~NT."
				    */

static Object string_constant_58;  /* "Cannot transfer ~NF into the ~(~a~) of ~NF ~
				    *                                     because ~NF is a suboject of ~NF."
				    */

static Object string_constant_59;  /* "Cannot transfer ~NF into the ~(~a~) of ~NF ~
				    *                                     because ~NF is on a subworkspace of ~NF ~
				    *                                     or ~NF is a suboject on a subworkspace of ~NF."
				    */

static Object string_constant_60;  /* "The value to transfer to the ~NS of ~NF must be a frame" */

static Object string_constant_61;  /* "Cannot transfer ~NF to an attribute.  The only instances allowed ~
				    *                      as attribute values are objects and procedures."
				    */

static Object string_constant_62;  /* "Cannot transfer ~NF because it is a kb-workspace.  The make ~
				    *                   subworkspace action can be used to give a transient ~
				    *                   kb-workspace a new superior object."
				    */

static Object string_constant_63;  /* "Cannot transfer ~NF because it is a ~a." */

static Object string_constant_64;  /* "Cannot transfer ~NF into the ~(~a~) of ~NF, since that is a system attribute." */

static Object string_constant_65;  /* "Cannot transfer ~NF into ~NV." */

static Object string_constant_66;  /* "Cannot transfer ~NF to an attribute that already contains an object." */

static Object string_constant_67;  /* "Cannot transfer ~NF to the workspace ~NF because ~NF is superior to ~
				    *                  this workspace."
				    */

static Object string_constant_68;  /* "Cannot transfer ~NF to the workspace ~NF.  ~NF is a dependent item ~
				    *                  containing a compiled attribute and ~NF is not dependent."
				    */

static Object string_constant_69;  /* "Cannot transfer ~NF because it is connected to another item." */

static Object string_constant_70;  /* "TRANSFER" */

static Object string_constant_71;  /* "Cannot transfer ~NF from the ~NQ of ~NF.  The attribute ~
				    *                  type specification requires the value to be of class ~
				    *                  ~a"
				    */

static Object string_constant_72;  /* "Cannot transfer ~a to an ~a." */

/* TRANSFER-ACTION-INTERNAL */
Object transfer_action_internal(item,workspace_or_place_reference_arg,
	    x_arg,y_arg,top_of_stack,validate_environment_p)
    Object item, workspace_or_place_reference_arg, x_arg, y_arg, top_of_stack;
    Object validate_environment_p;
{
    Object component_particulars, target_item, workspace_qm, workspace_p_qm;
    Object x_in_workspace_qm, y_in_workspace_qm, scope_conses, ab_node_stack_;
    Object ab_current_node_, gensymed_symbol, ab_skip_list_form_;
    Object ab_skip_list_p_, ab_next_node_, ab_tail_node_, ab_current_alist_;
    Object ab_entry_cons_, ab_connection_, ab_connection_item_, connection;
    Object output_end_object, block_at_other_end, ab_loop_it_, temp;
    Object ab_less_than_branch_qm_, sub_class_bit_vector, is_connected_qm;
    Object invalid_item_for_transfer_qm, x2, reason_target_is_not_editable_qm;
    Object reason_item_is_not_editable_qm, top_of_stack_1, message_1;
    Object slot_name, defining_class, slot_description;
    Object slot_type_specification, type_name, svref_arg_1;
    Object frame_serial_number_setf_arg, old, new_1, svref_new_value, sub_item;
    Object parent_frame_qm, gensymed_symbol_4, gensymed_symbol_5;
    Object parent_slot_name_qm, parent_slot_name_defining_class_qm;
    Object type_specification_class_qm, parent_attribute_name;
    Object pretty_slot_name, defining_class_qm, parent_frame_slot_description;
    Object class_of_type_specification_qm, temp_2, temp_3;
    SI_Long superior_class_bit_number, sub_class_vector_index;
    SI_Long gensymed_symbol_1, gensymed_symbol_2, gensymed_symbol_3;
    char transient_p, temp_1;
    Declare_special(1);

    x_note_fn_call(210,105);
    perform_any_deferred_icon_set_up(item);
    component_particulars = CONSP(workspace_or_place_reference_arg) && 
	    EQ(M_CDR(workspace_or_place_reference_arg),Qplace_reference) ? 
	    ISVREF(M_CAR(workspace_or_place_reference_arg),(SI_Long)0L) : Qnil;
    transient_p = (SI_Long)0L != (IFIX(ISVREF(item,(SI_Long)5L)) & 
	    (SI_Long)262144L);
    target_item = CONSP(workspace_or_place_reference_arg) && 
	    EQ(M_CDR(workspace_or_place_reference_arg),Qplace_reference) ? 
	    ISVREF(M_CAR(workspace_or_place_reference_arg),(SI_Long)1L) : 
	    workspace_or_place_reference_arg;
    workspace_qm = Nil;
    workspace_p_qm = Nil;
    x_in_workspace_qm = x_arg ? evaluation_value_value(x_arg) : Qnil;
    y_in_workspace_qm = y_arg ? evaluation_value_value(y_arg) : Qnil;
    scope_conses = Scope_conses;
    ab_node_stack_ = Nil;
    ab_current_node_ = Nil;
    gensymed_symbol = ISVREF(item,(SI_Long)14L);
    gensymed_symbol = gensymed_symbol ? ISVREF(gensymed_symbol,
	    (SI_Long)6L) : Nil;
    ab_skip_list_form_ = gensymed_symbol;
    ab_skip_list_p_ = Nil;
    ab_next_node_ = Nil;
    ab_tail_node_ = Nil;
    ab_current_alist_ = Nil;
    ab_entry_cons_ = Nil;
    ab_connection_ = Nil;
    ab_connection_item_ = Nil;
    connection = Nil;
    PUSH_SPECIAL(Scope_conses,scope_conses,0);
      output_end_object = Nil;
      block_at_other_end = Nil;
      ab_loop_it_ = Nil;
      gensymed_symbol = CDR(ab_skip_list_form_);
      if (CONSP(gensymed_symbol)) {
	  temp = M_CAR(gensymed_symbol);
	  temp_1 = SIMPLE_VECTOR_P(temp);
      }
      else
	  temp_1 = TRUEP(Nil);
      if (temp_1) {
	  temp = M_CDR(gensymed_symbol);
	  ab_skip_list_p_ = SIMPLE_VECTOR_P(temp) ? T : Nil;
      }
      else
	  ab_skip_list_p_ = Nil;
      if (ab_skip_list_p_) {
	  ab_next_node_ = ISVREF(ISVREF(M_CAR(M_CDR(ab_skip_list_form_)),
		  (SI_Long)0L),(SI_Long)0L);
	  ab_tail_node_ = M_CDR(M_CDR(ab_skip_list_form_));
	  if (EQ(ab_next_node_,ab_tail_node_))
	      ab_next_node_ = Nil;
      }
      else
	  ab_next_node_ = CDR(ab_skip_list_form_);
    next_loop:
    next_loop_1:
      if (ab_current_alist_) {
	  ab_entry_cons_ = M_CAR(ab_current_alist_);
	  ab_connection_ = M_CAR(ab_entry_cons_);
	  ab_connection_item_ = M_CDR(ab_entry_cons_);
	  ab_current_alist_ = M_CDR(ab_current_alist_);
      }
      else if (ab_skip_list_p_) {
	  if (ab_next_node_) {
	      ab_current_node_ = ab_next_node_;
	      ab_next_node_ = ISVREF(ISVREF(ab_current_node_,(SI_Long)0L),
		      (SI_Long)0L);
	      if (EQ(ab_next_node_,ab_tail_node_))
		  ab_next_node_ = Nil;
	      ab_connection_ = ISVREF(ab_current_node_,(SI_Long)2L);
	      ab_connection_item_ = ISVREF(ab_current_node_,(SI_Long)3L);
	  }
	  else
	      ab_current_node_ = Nil;
      }
      else {
	  if (ab_next_node_) {
	      ab_current_node_ = ab_next_node_;
	      ab_less_than_branch_qm_ = Nil;
	    next_loop_2:
	      ab_less_than_branch_qm_ = ISVREF(ab_current_node_,(SI_Long)1L);
	      if ( !TRUEP(ab_less_than_branch_qm_))
		  goto end_loop;
	      ab_node_stack_ = scope_cons(ab_current_node_,ab_node_stack_);
	      ab_current_node_ = ab_less_than_branch_qm_;
	      goto next_loop_2;
	    end_loop:;
	  }
	  else if (ab_node_stack_) {
	      ab_next_node_ = ab_node_stack_;
	      ab_current_node_ = M_CAR(ab_node_stack_);
	      ab_node_stack_ = M_CDR(ab_node_stack_);
	  }
	  else
	      ab_current_node_ = Nil;
	  if (ab_current_node_) {
	      ab_next_node_ = ISVREF(ab_current_node_,(SI_Long)2L);
	      ab_current_alist_ = ISVREF(ab_current_node_,(SI_Long)3L);
	      ab_entry_cons_ = M_CAR(ab_current_alist_);
	      ab_connection_ = M_CAR(ab_entry_cons_);
	      ab_connection_item_ = M_CDR(ab_entry_cons_);
	      ab_current_alist_ = M_CDR(ab_current_alist_);
	  }
      }
      if ( !TRUEP(ab_current_node_) || ab_current_node_ && ab_connection_)
	  goto end_1;
      goto next_loop_1;
    end_loop_1:
    end_1:
      if ( !TRUEP(ab_current_node_))
	  goto end_loop_2;
      connection = ab_connection_;
      output_end_object = ISVREF(connection,(SI_Long)2L);
      block_at_other_end = EQ(output_end_object,item) ? ISVREF(connection,
	      (SI_Long)3L) : output_end_object;
      sub_class_bit_vector = ISVREF(ISVREF(block_at_other_end,(SI_Long)1L),
	      (SI_Long)19L);
      superior_class_bit_number = IFIX(ISVREF(Loose_end_class_description,
	      (SI_Long)18L));
      sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
      if (sub_class_vector_index < 
	      IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	  gensymed_symbol_1 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		  sub_class_vector_index);
	  gensymed_symbol_2 = (SI_Long)1L;
	  gensymed_symbol_3 = superior_class_bit_number & (SI_Long)7L;
	  gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
	  gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
	  temp_1 = (SI_Long)0L < gensymed_symbol_1;
      }
      else
	  temp_1 = TRUEP(Nil);
      ab_loop_it_ =  !temp_1 ? T : Nil;
      if (ab_loop_it_) {
	  is_connected_qm = ab_loop_it_;
	  goto end_2;
      }
      goto next_loop;
    end_loop_2:
      is_connected_qm = Qnil;
    end_2:;
    POP_SPECIAL();
    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
    superior_class_bit_number = 
	    IFIX(ISVREF(Simulation_subtable_class_description,(SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol_1 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_2 = (SI_Long)1L;
	gensymed_symbol_3 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
	gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
	invalid_item_for_transfer_qm = (SI_Long)0L < gensymed_symbol_1 ? T 
		: Nil;
    }
    else
	invalid_item_for_transfer_qm = Nil;
    if (invalid_item_for_transfer_qm);
    else {
	sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Workspace_class_description,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol_1 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_2 = (SI_Long)1L;
	    gensymed_symbol_3 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
	    gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
	    invalid_item_for_transfer_qm = (SI_Long)0L < gensymed_symbol_1 
		    ? T : Nil;
	}
	else
	    invalid_item_for_transfer_qm = Nil;
    }
    if (invalid_item_for_transfer_qm);
    else {
	sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Connection_class_description,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol_1 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_2 = (SI_Long)1L;
	    gensymed_symbol_3 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
	    gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
	    invalid_item_for_transfer_qm = (SI_Long)0L < gensymed_symbol_1 
		    ? T : Nil;
	}
	else
	    invalid_item_for_transfer_qm = Nil;
    }
    if (SIMPLE_VECTOR_P(target_item) && 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(target_item)) > (SI_Long)2L &&  
	    !EQ(ISVREF(target_item,(SI_Long)1L),Qavailable_frame_vector)) {
	x2 = ISVREF(target_item,(SI_Long)1L);
	temp_1 = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
		Qg2_defstruct_structure_name_class_description_g2_struct) ?
		 TRUEP(x2) : TRUEP(Qnil);
    }
    else
	temp_1 = TRUEP(Nil);
    reason_target_is_not_editable_qm = temp_1 ? 
	    reason_permanent_items_module_is_not_editable(1,target_item) : Nil;
    reason_item_is_not_editable_qm = 
	    reason_permanent_items_module_is_not_editable(1,item);
    if (reason_target_is_not_editable_qm) {
	if (Disable_stack_error)
	    return tformat_text_string(3,string_constant_47,target_item,
		    reason_target_is_not_editable_qm);
	else {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(3,
		    string_constant_47,target_item,
		    reason_target_is_not_editable_qm);
	    return raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else if (reason_item_is_not_editable_qm) {
	if (Disable_stack_error)
	    return tformat_text_string(3,string_constant_48,item,
		    reason_item_is_not_editable_qm);
	else {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(3,
		    string_constant_48,item,reason_item_is_not_editable_qm);
	    return raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else {
	temp_1 = transient_p;
	if (temp_1);
	else {
	    if (Permit_transfer_of_permanent_items_p) {
		if (SIMPLE_VECTOR_P(target_item) && 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(target_item)) > 
			(SI_Long)2L &&  !EQ(ISVREF(target_item,
			(SI_Long)1L),Qavailable_frame_vector)) {
		    x2 = ISVREF(target_item,(SI_Long)1L);
		    temp_1 = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
			    (SI_Long)0L),
			    Qg2_defstruct_structure_name_class_description_g2_struct) 
			    ? TRUEP(x2) : TRUEP(Qnil);
		}
		else
		    temp_1 = TRUEP(Nil);
	    }
	    else
		temp_1 = TRUEP(Nil);
	    if (temp_1 ? (SI_Long)0L != (IFIX(ISVREF(target_item,
		    (SI_Long)4L)) & (SI_Long)1L) : TRUEP(Nil)) {
		sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),
			(SI_Long)19L);
		superior_class_bit_number = 
			IFIX(ISVREF(Message_board_class_description,
			(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol_1 = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_2 = (SI_Long)1L;
		    gensymed_symbol_3 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
		    gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
		    temp_1 = (SI_Long)0L < gensymed_symbol_1;
		}
		else
		    temp_1 = TRUEP(Nil);
		if (temp_1);
		else
		    temp_1 = (SI_Long)0L != (IFIX(ISVREF(item,
			    (SI_Long)4L)) & (SI_Long)1L);
		if (temp_1) {
		    gensymed_symbol = 
			    lookup_global_or_kb_specific_property_value(Qsystem_table,
			    Class_description_gkbprop);
		    if (gensymed_symbol) {
			sub_class_bit_vector = ISVREF(ISVREF(item,
				(SI_Long)1L),(SI_Long)19L);
			superior_class_bit_number = 
				IFIX(ISVREF(gensymed_symbol,(SI_Long)18L));
			sub_class_vector_index = superior_class_bit_number 
				>>  -  - (SI_Long)3L;
			if (sub_class_vector_index < 
				IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				    {
			    gensymed_symbol_1 = 
				    UBYTE_8_ISAREF_1(sub_class_bit_vector,
				    sub_class_vector_index);
			    gensymed_symbol_2 = (SI_Long)1L;
			    gensymed_symbol_3 = superior_class_bit_number 
				    & (SI_Long)7L;
			    gensymed_symbol_2 = gensymed_symbol_2 << 
				    gensymed_symbol_3;
			    gensymed_symbol_1 = gensymed_symbol_1 & 
				    gensymed_symbol_2;
			    temp_1 = (SI_Long)0L < gensymed_symbol_1;
			}
			else
			    temp_1 = TRUEP(Nil);
		    }
		    else
			temp_1 = TRUEP(Nil);
		    if (temp_1);
		    else {
			gensymed_symbol = 
				lookup_global_or_kb_specific_property_value(Qui_client_session,
				Class_description_gkbprop);
			if (gensymed_symbol) {
			    sub_class_bit_vector = ISVREF(ISVREF(item,
				    (SI_Long)1L),(SI_Long)19L);
			    superior_class_bit_number = 
				    IFIX(ISVREF(gensymed_symbol,(SI_Long)18L));
			    sub_class_vector_index = 
				    superior_class_bit_number >>  -  - 
				    (SI_Long)3L;
			    if (sub_class_vector_index < 
				    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
					{
				gensymed_symbol_1 = 
					UBYTE_8_ISAREF_1(sub_class_bit_vector,
					sub_class_vector_index);
				gensymed_symbol_2 = (SI_Long)1L;
				gensymed_symbol_3 = 
					superior_class_bit_number & 
					(SI_Long)7L;
				gensymed_symbol_2 = gensymed_symbol_2 << 
					gensymed_symbol_3;
				gensymed_symbol_1 = gensymed_symbol_1 & 
					gensymed_symbol_2;
				temp_1 = (SI_Long)0L < gensymed_symbol_1;
			    }
			    else
				temp_1 = TRUEP(Nil);
			}
			else
			    temp_1 = TRUEP(Nil);
		    }
		    if (temp_1);
		    else {
			sub_class_bit_vector = ISVREF(ISVREF(item,
				(SI_Long)1L),(SI_Long)19L);
			superior_class_bit_number = 
				IFIX(ISVREF(Simulation_subtable_class_description,
				(SI_Long)18L));
			sub_class_vector_index = superior_class_bit_number 
				>>  -  - (SI_Long)3L;
			if (sub_class_vector_index < 
				IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				    {
			    gensymed_symbol_1 = 
				    UBYTE_8_ISAREF_1(sub_class_bit_vector,
				    sub_class_vector_index);
			    gensymed_symbol_2 = (SI_Long)1L;
			    gensymed_symbol_3 = superior_class_bit_number 
				    & (SI_Long)7L;
			    gensymed_symbol_2 = gensymed_symbol_2 << 
				    gensymed_symbol_3;
			    gensymed_symbol_1 = gensymed_symbol_1 & 
				    gensymed_symbol_2;
			    temp_1 = (SI_Long)0L < gensymed_symbol_1;
			}
			else
			    temp_1 = TRUEP(Nil);
		    }
		    temp_1 =  !temp_1;
		}
		else
		    temp_1 = TRUEP(Nil);
	    }
	    else
		temp_1 = TRUEP(Nil);
	    temp_1 = temp_1 ?  !TRUEP(in_order_p(item)) : TRUEP(Nil);
	}
	if ( !temp_1) {
	    if (Disable_stack_error)
		return tformat_text_string(2,
			Permit_transfer_of_permanent_items_p ? 
			string_constant_49 : string_constant_50,item);
	    else {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			Permit_transfer_of_permanent_items_p ? 
			string_constant_49 : string_constant_50,item);
		return raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	}
	else if ( !transient_p && in_order_p(target_item)) {
	    if (Disable_stack_error)
		return tformat_text_string(2,string_constant_51,target_item);
	    else {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_51,target_item);
		return raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	}
	else if (EQ(item,workspace_or_place_reference_arg)) {
	    if (Disable_stack_error)
		return tformat_text_string(2,string_constant_52,item);
	    else {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_52,item);
		return raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	}
	else if (component_particulars &&  
		!TRUEP(evaluation_place_reference_valid_p(workspace_or_place_reference_arg))) 
		    {
	    if (Disable_stack_error)
		return tformat_text_string(2,string_constant_53,
			workspace_or_place_reference_arg);
	    else {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_53,workspace_or_place_reference_arg);
		return raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	}
	else if (component_particulars && CONSP(component_particulars) && 
		EQ(M_CAR(component_particulars),Qattribute)) {
	    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),
		    (SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Object_class_description,(SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol_1 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_2 = (SI_Long)1L;
		gensymed_symbol_3 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
		gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
		temp_1 = (SI_Long)0L < gensymed_symbol_1;
	    }
	    else
		temp_1 = TRUEP(Nil);
	    if (temp_1) {
		gensymed_symbol = ISVREF(item,(SI_Long)14L);
		gensymed_symbol = gensymed_symbol ? ISVREF(gensymed_symbol,
			(SI_Long)6L) : Nil;
		if (gensymed_symbol) {
		    if (Disable_stack_error)
			return tformat_text_string(1,string_constant_54);
		    else {
			top_of_stack_1 = top_of_stack;
			message_1 = tformat_stack_error_text_string(1,
				string_constant_54);
			raw_stack_error_named_error(top_of_stack_1,message_1);
		    }
		}
		else {
		    slot_name = M_CAR(M_CDR(component_particulars));
		    defining_class = 
			    M_CAR(M_CDR(M_CDR(component_particulars)));
		    slot_description = 
			    get_slot_description_of_class_description_function(slot_name,
			    ISVREF(target_item,(SI_Long)1L),defining_class);
		    if ( !TRUEP(slot_description) ||  
			    !TRUEP(ISVREF(slot_description,(SI_Long)8L))) {
			if ( !TRUEP(slot_description)) {
			    if (Disable_stack_error)
				return tformat_text_string(3,
					string_constant_55,slot_name,
					target_item);
			    else {
				top_of_stack_1 = top_of_stack;
				message_1 = 
					tformat_stack_error_text_string(3,
					string_constant_55,slot_name,
					target_item);
				raw_stack_error_named_error(top_of_stack_1,
					message_1);
			    }
			}
			else if (Disable_stack_error)
			    return tformat_text_string(3,
				    string_constant_56,slot_name,target_item);
			else {
			    top_of_stack_1 = top_of_stack;
			    message_1 = tformat_stack_error_text_string(3,
				    string_constant_56,slot_name,target_item);
			    raw_stack_error_named_error(top_of_stack_1,
				    message_1);
			}
		    }
		    else {
			slot_type_specification = ISVREF(slot_description,
				(SI_Long)5L);
			if ( !TRUEP(type_specification_type_p(item,
				slot_type_specification))) {
			    if (Disable_stack_error)
				return tformat_text_string(5,
					string_constant_57,
					slot_description,
					lookup_global_or_kb_specific_property_value(ISVREF(ISVREF(target_item,
					(SI_Long)1L),(SI_Long)1L),
					Class_description_gkbprop),
					target_item,slot_type_specification);
			    else {
				top_of_stack_1 = top_of_stack;
				message_1 = 
					tformat_stack_error_text_string(5,
					string_constant_57,
					slot_description,
					lookup_global_or_kb_specific_property_value(ISVREF(ISVREF(target_item,
					(SI_Long)1L),(SI_Long)1L),
					Class_description_gkbprop),
					target_item,slot_type_specification);
				raw_stack_error_named_error(top_of_stack_1,
					message_1);
			    }
			}
			else {
			    if (validate_environment_p) {
				if (SIMPLE_VECTOR_P(Current_computation_instance)) 
					    {
				    type_name = 
					    ISVREF(Current_computation_instance,
					    (SI_Long)0L);
				    temp_1 = EQ(type_name,
					    Qg2_defstruct_structure_name_code_body_invocation_g2_struct);
				    if (temp_1);
				    else
					temp_1 = EQ(type_name,
						Qg2_defstruct_structure_name_procedure_invocation_g2_struct);
				}
				else
				    temp_1 = TRUEP(Nil);
				if (temp_1)
				    update_code_body_invocation_frame_serial_number(Current_computation_instance);
				else if (SIMPLE_VECTOR_P(Current_computation_instance) 
					&& 
					EQ(ISVREF(Current_computation_instance,
					(SI_Long)0L),
					Qg2_defstruct_structure_name_rule_instance_g2_struct)) 
					    {
				    svref_arg_1 = Current_computation_instance;
				    frame_serial_number_setf_arg = 
					    Current_frame_serial_number;
				    old = ISVREF(svref_arg_1,(SI_Long)11L);
				    new_1 = frame_serial_number_setf_arg;
				    svref_new_value = (FIXNUMP(old) ||  
					    !TRUEP(old)) && 
					    (FIXNUMP(new_1) ||  
					    !TRUEP(new_1)) ? new_1 : 
					    frame_serial_number_setf_helper_1(old,
					    new_1);
				    SVREF(svref_arg_1,FIX((SI_Long)11L)) = 
					    svref_new_value;
				}
			    }
			    if (SIMPLE_VECTOR_P(item) && 
				    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item)) 
				    > (SI_Long)2L &&  !EQ(ISVREF(item,
				    (SI_Long)1L),Qavailable_frame_vector)) {
				x2 = ISVREF(item,(SI_Long)1L);
				temp_1 = SIMPLE_VECTOR_P(x2) && 
					EQ(ISVREF(x2,(SI_Long)0L),
					Qg2_defstruct_structure_name_class_description_g2_struct) 
					? TRUEP(x2) : TRUEP(Qnil);
			    }
			    else
				temp_1 = TRUEP(Nil);
			    if (temp_1) {
				sub_item = target_item;
				parent_frame_qm = Nil;
			      next_loop_3:
				if (EQ(item,sub_item)) {
				    temp_1 = TRUEP(sub_item);
				    goto end_3;
				}
				parent_frame_qm = 
					get_lookup_slot_value_given_default(sub_item,
					Qparent_frame,Nil);
				if ( !TRUEP(parent_frame_qm))
				    goto end_loop_3;
				sub_item = parent_frame_qm;
				goto next_loop_3;
			      end_loop_3:
				temp_1 = TRUEP(Qnil);
			      end_3:;
				if (temp_1) {
				    if (Disable_stack_error)
					return tformat_text_string(6,
						string_constant_58,item,
						slot_name,target_item,
						target_item,item);
				    else {
					top_of_stack_1 = top_of_stack;
					message_1 = 
						tformat_stack_error_text_string(6,
						string_constant_58,item,
						slot_name,target_item,
						target_item,item);
					raw_stack_error_named_error(top_of_stack_1,
						message_1);
				    }
				}
				else if (ancestor_p(item,target_item)) {
				    if (Disable_stack_error)
					return tformat_text_string(8,
						string_constant_59,item,
						slot_name,target_item,
						target_item,item,
						target_item,item);
				    else {
					top_of_stack_1 = top_of_stack;
					message_1 = 
						tformat_stack_error_text_string(8,
						string_constant_59,item,
						slot_name,target_item,
						target_item,item,
						target_item,item);
					raw_stack_error_named_error(top_of_stack_1,
						message_1);
				    }
				}
				else {
				    if (get_lookup_slot_value_given_default(item,
					    Qparent_frame,Nil))
					remove_frame_from_parent_attribute(item,
						top_of_stack);
				    change_slot_description_value_function(target_item,
					    slot_description,item,Nil,Nil);
				    update_attribute_tables(1,
					    get_lookup_slot_value_given_default(item,
					    Qparent_frame,Nil));
				    gensymed_symbol = ISVREF(item,
					    (SI_Long)14L);
				    gensymed_symbol = gensymed_symbol ? 
					    ISVREF(gensymed_symbol,
					    (SI_Long)5L) : Nil;
				    if (gensymed_symbol) {
					update_images_of_block(item,T,Nil);
					gensymed_symbol = ISVREF(item,
						(SI_Long)14L);
					gensymed_symbol = gensymed_symbol ?
						 ISVREF(gensymed_symbol,
						(SI_Long)5L) : Nil;
					transfer_workspace_subblock(item,
						gensymed_symbol,Nil);
				    }
				}
			    }
			    else if (Disable_stack_error)
				return tformat_text_string(5,
					string_constant_60,
					slot_description,
					lookup_global_or_kb_specific_property_value(ISVREF(ISVREF(target_item,
					(SI_Long)1L),(SI_Long)1L),
					Class_description_gkbprop),
					target_item,slot_type_specification);
			    else {
				top_of_stack_1 = top_of_stack;
				message_1 = 
					tformat_stack_error_text_string(5,
					string_constant_60,
					slot_description,
					lookup_global_or_kb_specific_property_value(ISVREF(ISVREF(target_item,
					(SI_Long)1L),(SI_Long)1L),
					Class_description_gkbprop),
					target_item,slot_type_specification);
				raw_stack_error_named_error(top_of_stack_1,
					message_1);
			    }
			    if (validate_environment_p)
				validate_computation_instance_environment(Current_computation_instance,
					Nil,Nil);
			}
		    }
		}
	    }
	    else if (Disable_stack_error)
		return tformat_text_string(2,string_constant_61,item);
	    else {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_61,item);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    reclaim_evaluation_place_reference(workspace_or_place_reference_arg);
	    return VALUES_1(Nil);
	}
	else if (invalid_item_for_transfer_qm) {
	    if (SIMPLE_VECTOR_P(item) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item)) > (SI_Long)2L && 
		     !EQ(ISVREF(item,(SI_Long)1L),Qavailable_frame_vector)) {
		x2 = ISVREF(item,(SI_Long)1L);
		gensymed_symbol = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
			(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? x2 : Qnil;
	    }
	    else
		gensymed_symbol = Nil;
	    if (gensymed_symbol) {
		sub_class_bit_vector = ISVREF(gensymed_symbol,(SI_Long)19L);
		superior_class_bit_number = 
			IFIX(ISVREF(Kb_workspace_class_description,
			(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol_1 = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_2 = (SI_Long)1L;
		    gensymed_symbol_3 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
		    gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
		    temp_1 = (SI_Long)0L < gensymed_symbol_1;
		}
		else
		    temp_1 = TRUEP(Nil);
	    }
	    else
		temp_1 = TRUEP(Nil);
	    if (temp_1) {
		if (Disable_stack_error)
		    return tformat_text_string(2,string_constant_62,item);
		else {
		    top_of_stack_1 = top_of_stack;
		    message_1 = tformat_stack_error_text_string(2,
			    string_constant_62,item);
		    return raw_stack_error_named_error(top_of_stack_1,
			    message_1);
		}
	    }
	    else if (Disable_stack_error)
		return tformat_text_string(3,string_constant_63,item,
			ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)1L));
	    else {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(3,
			string_constant_63,item,ISVREF(ISVREF(item,
			(SI_Long)1L),(SI_Long)1L));
		return raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	}
	else if (component_particulars && CONSP(component_particulars) && 
		EQ(M_CAR(component_particulars),Qvirtual_attribute)) {
	    if (Disable_stack_error)
		return tformat_text_string(4,string_constant_64,item,
			M_CAR(M_CDR(component_particulars)),
			ISVREF(M_CAR(workspace_or_place_reference_arg),
			(SI_Long)1L));
	    else {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(4,
			string_constant_64,item,
			M_CAR(M_CDR(component_particulars)),
			ISVREF(M_CAR(workspace_or_place_reference_arg),
			(SI_Long)1L));
		return raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	}
	else {
	    gensymed_symbol_4 = workspace_or_place_reference_arg;
	    temp_1 = FIXNUMP(gensymed_symbol_4);
	    if (temp_1);
	    else
		temp_1 = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol_4) 
			!= (SI_Long)0L ? 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_4)) 
			== (SI_Long)1L : TRUEP(Qnil);
	    if (temp_1);
	    else
		temp_1 = INLINE_LONG_VECTOR_P(gensymed_symbol_4) != 
			(SI_Long)0L ? 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_4)) 
			== (SI_Long)1L : TRUEP(Qnil);
	    if (temp_1);
	    else
		temp_1 = gensymed_symbol_4 ? SYMBOLP(gensymed_symbol_4) : 
			TRUEP(Qnil);
	    if (temp_1);
	    else
		temp_1 = 
			INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol_4) 
			!= (SI_Long)0L;
	    if (temp_1);
	    else if (CONSP(gensymed_symbol_4)) {
		gensymed_symbol_4 = M_CDR(gensymed_symbol_4);
		temp_1 = EQ(gensymed_symbol_4,Qtruth_value);
		if (temp_1);
		else
		    temp_1 = EQ(gensymed_symbol_4,Qiteration_state);
		if (temp_1);
		else if (SYMBOLP(gensymed_symbol_4)) {
		    gensymed_symbol = CDR(Defined_evaluation_value_types);
		    gensymed_symbol_1 = SXHASH_SYMBOL_1(gensymed_symbol_4) 
			    & IFIX(Most_positive_fixnum);
		    gensymed_symbol_2 = (SI_Long)0L;
		  next_loop_4:
		    if ( !TRUEP(gensymed_symbol))
			goto end_loop_4;
		    gensymed_symbol_2 = IFIX(ISVREF(gensymed_symbol,
			    (SI_Long)0L));
		    if (gensymed_symbol_1 < gensymed_symbol_2)
			gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
		    else if (gensymed_symbol_1 > gensymed_symbol_2)
			gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
		    else {
			gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
			gensymed_symbol_5 = Nil;
		      next_loop_5:
			if ( !TRUEP(gensymed_symbol))
			    goto end_loop_5;
			gensymed_symbol_5 = M_CAR(M_CAR(gensymed_symbol));
			if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
			    temp_1 = TRUEP(M_CDR(M_CAR(gensymed_symbol)));
			    goto end_4;
			}
			gensymed_symbol = M_CDR(gensymed_symbol);
			goto next_loop_5;
		      end_loop_5:
			temp_1 = TRUEP(Qnil);
		      end_4:;
			goto end_5;
		    }
		    goto next_loop_4;
		  end_loop_4:
		    temp_1 = TRUEP(Qnil);
		  end_5:;
		}
		else
		    temp_1 = TRUEP(Nil);
	    }
	    else
		temp_1 = TRUEP(Nil);
	    if (temp_1) {
		if (Disable_stack_error)
		    return tformat_text_string(3,string_constant_65,item,
			    workspace_or_place_reference_arg);
		else {
		    top_of_stack_1 = top_of_stack;
		    message_1 = tformat_stack_error_text_string(3,
			    string_constant_65,item,
			    workspace_or_place_reference_arg);
		    return raw_stack_error_named_error(top_of_stack_1,
			    message_1);
		}
	    }
	    else {
		workspace_qm = workspace_or_place_reference_arg;
		if (workspace_qm) {
		    sub_class_bit_vector = ISVREF(ISVREF(workspace_qm,
			    (SI_Long)1L),(SI_Long)19L);
		    superior_class_bit_number = 
			    IFIX(ISVREF(Workspace_class_description,
			    (SI_Long)18L));
		    sub_class_vector_index = superior_class_bit_number >>  
			    -  - (SI_Long)3L;
		    if (sub_class_vector_index < 
			    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				{
			gensymed_symbol_1 = 
				UBYTE_8_ISAREF_1(sub_class_bit_vector,
				sub_class_vector_index);
			gensymed_symbol_2 = (SI_Long)1L;
			gensymed_symbol_3 = superior_class_bit_number & 
				(SI_Long)7L;
			gensymed_symbol_2 = gensymed_symbol_2 << 
				gensymed_symbol_3;
			gensymed_symbol_1 = gensymed_symbol_1 & 
				gensymed_symbol_2;
			workspace_p_qm = (SI_Long)0L < gensymed_symbol_1 ? 
				T : Nil;
		    }
		    else
			workspace_p_qm = Nil;
		}
		else
		    workspace_p_qm = Nil;
		parent_frame_qm = get_lookup_slot_value_given_default(item,
			Qparent_frame,Nil);
		parent_slot_name_qm = Nil;
		parent_slot_name_defining_class_qm = Nil;
		type_specification_class_qm = Nil;
		if ( !TRUEP(workspace_p_qm)) {
		    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),
			    (SI_Long)19L);
		    superior_class_bit_number = 
			    IFIX(ISVREF(Object_class_description,
			    (SI_Long)18L));
		    sub_class_vector_index = superior_class_bit_number >>  
			    -  - (SI_Long)3L;
		    if (sub_class_vector_index < 
			    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				{
			gensymed_symbol_1 = 
				UBYTE_8_ISAREF_1(sub_class_bit_vector,
				sub_class_vector_index);
			gensymed_symbol_2 = (SI_Long)1L;
			gensymed_symbol_3 = superior_class_bit_number & 
				(SI_Long)7L;
			gensymed_symbol_2 = gensymed_symbol_2 << 
				gensymed_symbol_3;
			gensymed_symbol_1 = gensymed_symbol_1 & 
				gensymed_symbol_2;
			temp_1 = (SI_Long)0L < gensymed_symbol_1;
		    }
		    else
			temp_1 = TRUEP(Nil);
		}
		else
		    temp_1 = TRUEP(Nil);
		if (temp_1) {
		    if (workspace_qm) {
			sub_class_bit_vector = ISVREF(ISVREF(workspace_qm,
				(SI_Long)1L),(SI_Long)19L);
			superior_class_bit_number = 
				IFIX(ISVREF(Object_class_description,
				(SI_Long)18L));
			sub_class_vector_index = superior_class_bit_number 
				>>  -  - (SI_Long)3L;
			if (sub_class_vector_index < 
				IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				    {
			    gensymed_symbol_1 = 
				    UBYTE_8_ISAREF_1(sub_class_bit_vector,
				    sub_class_vector_index);
			    gensymed_symbol_2 = (SI_Long)1L;
			    gensymed_symbol_3 = superior_class_bit_number 
				    & (SI_Long)7L;
			    gensymed_symbol_2 = gensymed_symbol_2 << 
				    gensymed_symbol_3;
			    gensymed_symbol_1 = gensymed_symbol_1 & 
				    gensymed_symbol_2;
			    temp_1 = (SI_Long)0L < gensymed_symbol_1;
			}
			else
			    temp_1 = TRUEP(Nil);
		    }
		    else
			temp_1 = TRUEP(Nil);
		}
		else
		    temp_1 = TRUEP(Nil);
		if (temp_1 ? 
			TRUEP(get_lookup_slot_value_given_default(workspace_qm,
			Qparent_attribute_name,Nil)) : TRUEP(Nil)) {
		    if (Disable_stack_error)
			return tformat_text_string(2,string_constant_66,item);
		    else {
			top_of_stack_1 = top_of_stack;
			message_1 = tformat_stack_error_text_string(2,
				string_constant_66,item);
			return raw_stack_error_named_error(top_of_stack_1,
				message_1);
		    }
		}
		else if (workspace_p_qm && (ancestor_p(item,workspace_qm) 
			|| superior_block_p(item,workspace_qm))) {
		    if (Disable_stack_error)
			return tformat_text_string(4,string_constant_67,
				item,workspace_qm,item);
		    else {
			top_of_stack_1 = top_of_stack;
			message_1 = tformat_stack_error_text_string(4,
				string_constant_67,item,workspace_qm,item);
			return raw_stack_error_named_error(top_of_stack_1,
				message_1);
		    }
		}
		else if (workspace_p_qm && block_can_be_dependent_p(item) 
			&& item_currently_contains_compiled_value(item) && 
			 !TRUEP(block_can_be_dependent_p(workspace_qm))) {
		    if (Disable_stack_error)
			return tformat_text_string(5,string_constant_68,
				item,workspace_qm,item,workspace_qm);
		    else {
			top_of_stack_1 = top_of_stack;
			message_1 = tformat_stack_error_text_string(5,
				string_constant_68,item,workspace_qm,item,
				workspace_qm);
			return raw_stack_error_named_error(top_of_stack_1,
				message_1);
		    }
		}
		else if (is_connected_qm) {
		    if (Disable_stack_error)
			return tformat_text_string(2,string_constant_69,item);
		    else {
			top_of_stack_1 = top_of_stack;
			message_1 = tformat_stack_error_text_string(2,
				string_constant_69,item);
			return raw_stack_error_named_error(top_of_stack_1,
				message_1);
		    }
		}
		else {
		    temp = 
			    workspace_coordinates_in_error_qm(x_in_workspace_qm,
			    y_in_workspace_qm,item,string_constant_70,
			    top_of_stack);
		    if (temp)
			return VALUES_1(temp);
		    else {
			if (parent_frame_qm) {
			    parent_attribute_name = 
				    get_lookup_slot_value_given_default(item,
				    Qparent_attribute_name,Nil);
			    pretty_slot_name = 
				    CONSP(parent_attribute_name) ? 
				    M_CAR(parent_attribute_name) : 
				    parent_attribute_name;
			    defining_class_qm = 
				    CONSP(parent_attribute_name) ? 
				    M_CDR(parent_attribute_name) : Nil;
			    parent_frame_slot_description = 
				    get_slot_description_of_class_description_function(pretty_slot_name,
				    ISVREF(parent_frame_qm,(SI_Long)1L),
				    defining_class_qm);
			    slot_type_specification = 
				    ISVREF(parent_frame_slot_description,
				    (SI_Long)5L);
			    class_of_type_specification_qm = 
				    class_type_specification_p(slot_type_specification) 
				    ? SECOND(slot_type_specification) : Qnil;
			    if (class_of_type_specification_qm) {
				parent_slot_name_qm = pretty_slot_name;
				parent_slot_name_defining_class_qm = 
					defining_class_qm;
				type_specification_class_qm = 
					class_of_type_specification_qm;
				temp_1 = TRUEP(type_specification_class_qm);
			    }
			    else
				temp_1 = TRUEP(Nil);
			}
			else
			    temp_1 = TRUEP(Nil);
			if (temp_1) {
			    if (Disable_stack_error)
				return tformat_text_string(6,
					string_constant_71,item,
					parent_slot_name_qm,
					parent_slot_name_defining_class_qm,
					parent_frame_qm,
					type_specification_class_qm);
			    else {
				top_of_stack_1 = top_of_stack;
				message_1 = 
					tformat_stack_error_text_string(6,
					string_constant_71,item,
					parent_slot_name_qm,
					parent_slot_name_defining_class_qm,
					parent_frame_qm,
					type_specification_class_qm);
				return raw_stack_error_named_error(top_of_stack_1,
					message_1);
			    }
			}
			else {
			    if (get_lookup_slot_value_given_default(item,
				    Qparent_frame,Nil)) {
				remove_frame_from_parent_attribute(item,
					top_of_stack);
				update_attribute_tables(1,parent_frame_qm);
				update_attribute_tables(1,item);
			    }
			    if (validate_environment_p) {
				if (SIMPLE_VECTOR_P(Current_computation_instance)) 
					    {
				    type_name = 
					    ISVREF(Current_computation_instance,
					    (SI_Long)0L);
				    temp_1 = EQ(type_name,
					    Qg2_defstruct_structure_name_code_body_invocation_g2_struct);
				    if (temp_1);
				    else
					temp_1 = EQ(type_name,
						Qg2_defstruct_structure_name_procedure_invocation_g2_struct);
				}
				else
				    temp_1 = TRUEP(Nil);
				if (temp_1)
				    update_code_body_invocation_frame_serial_number(Current_computation_instance);
				else if (SIMPLE_VECTOR_P(Current_computation_instance) 
					&& 
					EQ(ISVREF(Current_computation_instance,
					(SI_Long)0L),
					Qg2_defstruct_structure_name_rule_instance_g2_struct)) 
					    {
				    svref_arg_1 = Current_computation_instance;
				    frame_serial_number_setf_arg = 
					    Current_frame_serial_number;
				    old = ISVREF(svref_arg_1,(SI_Long)11L);
				    new_1 = frame_serial_number_setf_arg;
				    svref_new_value = (FIXNUMP(old) ||  
					    !TRUEP(old)) && 
					    (FIXNUMP(new_1) ||  
					    !TRUEP(new_1)) ? new_1 : 
					    frame_serial_number_setf_helper_1(old,
					    new_1);
				    SVREF(svref_arg_1,FIX((SI_Long)11L)) = 
					    svref_new_value;
				}
			    }
			    if (workspace_qm) {
				sub_class_bit_vector = 
					ISVREF(ISVREF(workspace_qm,
					(SI_Long)1L),(SI_Long)19L);
				superior_class_bit_number = 
					IFIX(ISVREF(G2_window_class_description,
					(SI_Long)18L));
				sub_class_vector_index = 
					superior_class_bit_number >>  -  - 
					(SI_Long)3L;
				if (sub_class_vector_index < 
					IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
					    {
				    gensymed_symbol_1 = 
					    UBYTE_8_ISAREF_1(sub_class_bit_vector,
					    sub_class_vector_index);
				    gensymed_symbol_2 = (SI_Long)1L;
				    gensymed_symbol_3 = 
					    superior_class_bit_number & 
					    (SI_Long)7L;
				    gensymed_symbol_2 = gensymed_symbol_2 
					    << gensymed_symbol_3;
				    gensymed_symbol_1 = gensymed_symbol_1 
					    & gensymed_symbol_2;
				    temp_1 = (SI_Long)0L < gensymed_symbol_1;
				}
				else
				    temp_1 = TRUEP(Nil);
			    }
			    else
				temp_1 = TRUEP(Nil);
			    if (temp_1) {
				transfer_item_to_mouse_of_window(item,
					workspace_qm);
				if (parent_frame_qm)
				    update_attribute_tables(1,parent_frame_qm);
				temp = Nil;
			    }
			    else if (workspace_qm &&  !TRUEP(workspace_p_qm)) {
				if (Disable_stack_error)
				    return tformat_text_string(3,
					    string_constant_72,item,
					    ISVREF(ISVREF(workspace_or_place_reference_arg,
					    (SI_Long)1L),(SI_Long)1L));
				else {
				    top_of_stack_1 = top_of_stack;
				    message_1 = 
					    tformat_stack_error_text_string(3,
					    string_constant_72,item,
					    ISVREF(ISVREF(workspace_or_place_reference_arg,
					    (SI_Long)1L),(SI_Long)1L));
				    temp = 
					    raw_stack_error_named_error(top_of_stack_1,
					    message_1);
				}
			    }
			    else {
				temp_2 = workspace_qm;
				if (x_in_workspace_qm) {
				    temp = FIX((SI_Long)0L);
				    temp_3 = 
					    ltruncate(NUM_GT(x_in_workspace_qm,
					    temp) ? add(x_in_workspace_qm,
					    float_constant) : 
					    minus(x_in_workspace_qm,
					    float_constant),_);
				}
				else
				    temp_3 = Nil;
				if (y_in_workspace_qm) {
				    temp = FIX((SI_Long)0L);
				    temp = 
					    ltruncate(NUM_GT(y_in_workspace_qm,
					    temp) ? add(y_in_workspace_qm,
					    float_constant) : 
					    minus(y_in_workspace_qm,
					    float_constant),_);
				}
				else
				    temp = Nil;
				temp = transfer_item(5,item,temp_2,temp_3,
					temp,T);
				if (get_lookup_slot_value_given_default(item,
					Qparent_frame,Nil))
				    update_attribute_tables(1,
					    get_lookup_slot_value_given_default(item,
					    Qparent_frame,Nil));
			    }
			    if (validate_environment_p)
				validate_computation_instance_environment(Current_computation_instance,
					Nil,Nil);
			    if ( 
				    !(FIXNUMP(workspace_or_place_reference_arg) 
				    || 
				    SYMBOLP(workspace_or_place_reference_arg) 
				    || 
				    SIMPLE_VECTOR_P(workspace_or_place_reference_arg)))
				reclaim_if_evaluation_value_1(workspace_or_place_reference_arg);
			    if ( !(FIXNUMP(x_arg) || SYMBOLP(x_arg) || 
				    SIMPLE_VECTOR_P(x_arg)))
				reclaim_if_evaluation_value_1(x_arg);
			    if ( !(FIXNUMP(y_arg) || SYMBOLP(y_arg) || 
				    SIMPLE_VECTOR_P(y_arg)))
				reclaim_if_evaluation_value_1(y_arg);
			    return VALUES_1(temp);
			}
		    }
		}
	    }
	}
    }
}

static Object string_constant_73;  /* "and" */

static Object string_constant_74;  /* " cannot be transferred due to connection to ~
				    *        a block which is not being transferred."
				    */

/* ITEM-TO-TRANSFER-CONNECTED-STACK-ERROR */
Object item_to_transfer_connected_stack_error(blocks)
    Object blocks;
{
    Object current_wide_string_list, wide_string_bv16, current_wide_string;
    Object fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object top_of_stack, text_string, snapshots, snapshots_of_related_blocks;
    Object note_blocks_in_tformat, message_1;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    Declare_special(7);
    Object result;

    x_note_fn_call(210,106);
    if (Disable_stack_error) {
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
		  write_list_in_chicago_style(3,blocks,string_constant_73,T);
		  reclaim_gensym_list_1(blocks);
		  tformat(1,string_constant_74);
		  result = copy_out_current_wide_string();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
	return result;
    }
    else {
	top_of_stack = Cached_top_of_stack;
	text_string = Nil;
	snapshots = Nil;
	snapshots_of_related_blocks = Nil;
	note_blocks_in_tformat = SYMBOL_FUNCTION(Qrecord_block_for_tformat);
	PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
	  PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,
		  5);
	    current_wide_string_list = Qdo_not_use;
	    PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,4);
	      wide_string_bv16 = 
		      allocate_byte_vector_16(FIX((SI_Long)2048L + 
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
		  length_1 = 
			  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
		  total_length_of_current_wide_string = 
			  FIX(UBYTE_16_ISAREF_1(Current_wide_string,
			  length_1 - (SI_Long)2L) + 
			  ((UBYTE_16_ISAREF_1(Current_wide_string,length_1 
			  - (SI_Long)1L) & (SI_Long)8191L) << (SI_Long)16L));
		  PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
			  1);
		    current_twriting_output_type = Qwide_string;
		    PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
			    0);
		      write_list_in_chicago_style(3,blocks,
			      string_constant_73,T);
		      reclaim_gensym_list_1(blocks);
		      tformat(1,string_constant_74);
		      text_string = copy_out_current_wide_string();
		    POP_SPECIAL();
		  POP_SPECIAL();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	    snapshots = Snapshots_of_related_blocks;
	    Snapshots_of_related_blocks = Nil;
	    if (Snapshots_of_related_blocks) {
		reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
		Snapshots_of_related_blocks = Nil;
	    }
	  POP_SPECIAL();
	POP_SPECIAL();
	message_1 = make_error_text(text_string,snapshots);
	return raw_stack_error_named_error(top_of_stack,message_1);
    }
}

static Object Qgsi_interface_name;  /* gsi-interface-name */

static Object list_constant_3;     /* # */

static Object list_constant_4;     /* # */

static Object list_constant_5;     /* # */

static Object Qsize;               /* size */

static Object list_constant_6;     /* # */

static Object Qremote_process_initialization_string;  /* remote-process-initialization-string */

static Object list_constant_7;     /* # */

static Object list_constant_8;     /* # */

static Object list_constant_9;     /* # */

static Object Qarray_length;       /* array-length */

static Object list_constant_10;    /* # */

static Object list_constant_11;    /* # */

static Object Qname;               /* name */

static Object list_constant_12;    /* # */

static Object string_constant_75;  /* "You cannot change the ~a attribute of the ~a ~NF." */

static Object Qlong;               /* long */

static Object list_constant_13;    /* # */

static Object string_constant_76;  /* "~NV is of the wrong type to be the value of the ~a attribute ~
				    *          of the ~a ~NF."
				    */

static Object string_constant_77;  /* "You cannot change the ~a attribute of the ~a ~NF to ~NV because ~
				    *              its class definition does not have that attribute."
				    */

static Object Qg2_array_length;    /* g2-array-length */

static Object string_constant_78;  /* "Cannot change the name of ~NF.  The name of a stable item ~
				    *                cannot be changed from an action."
				    */

/* FUNCALL-CHANGE-SYSTEM-ATTRIBUTE-INST */
Object funcall_change_system_attribute_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item, system_attribute_name, evaluation_value, value, type;
    Object ok_classes, ok_types, required_class_inheritance, class_1;
    Object ab_loop_list_, gensymed_symbol, sub_class_bit_vector;
    Object top_of_stack_1, message_1, type_1;
    Object current_computation_component_particulars;
    Object note_as_kb_state_change_qm, do_not_note_permanent_changes_p;
    SI_Long superior_class_bit_number, sub_class_vector_index;
    SI_Long gensymed_symbol_1, gensymed_symbol_2, gensymed_symbol_3;
    char temp;
    Declare_special(3);

    x_note_fn_call(210,107);
    item = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    system_attribute_name = ISVREF(local_stack,
	    IFIX(FIXNUM_SUB1(top_of_stack)));
    evaluation_value = ISVREF(local_stack,IFIX(top_of_stack));
    value = evaluation_value_value(evaluation_value);
    type = evaluation_value_type(evaluation_value);
    ok_classes = Nil;
    ok_types = Nil;
    required_class_inheritance = Nil;
    if (EQ(system_attribute_name,Qgsi_interface_name)) {
	ok_classes = list_constant_3;
	ok_types = list_constant_4;
	required_class_inheritance = list_constant_5;
    }
    else if (EQ(system_attribute_name,Qsize)) {
	ok_classes = list_constant_6;
	ok_types = list_constant_4;
    }
    else if (EQ(system_attribute_name,Qremote_process_initialization_string)) {
	ok_classes = list_constant_7;
	ok_types = list_constant_8;
	required_class_inheritance = list_constant_9;
    }
    else if (EQ(system_attribute_name,Qarray_length)) {
	ok_classes = list_constant_10;
	ok_types = list_constant_11;
    }
    else if (EQ(system_attribute_name,Qname)) {
	ok_classes = list_constant_12;
	ok_types = list_constant_4;
    }
    class_1 = Nil;
    ab_loop_list_ = ok_classes;
  next_loop:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    class_1 = M_CAR(ab_loop_list_);
    ab_loop_list_ = M_CDR(ab_loop_list_);
    gensymed_symbol = lookup_global_or_kb_specific_property_value(class_1,
	    Class_description_gkbprop);
    if (gensymed_symbol) {
	sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
	superior_class_bit_number = IFIX(ISVREF(gensymed_symbol,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol_1 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_2 = (SI_Long)1L;
	    gensymed_symbol_3 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
	    gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
	    temp = (SI_Long)0L < gensymed_symbol_1;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    if (temp) {
	temp = TRUEP(Nil);
	goto end_1;
    }
    goto next_loop;
  end_loop:
    temp = TRUEP(T);
    goto end_1;
    temp = TRUEP(Qnil);
  end_1:;
    if (temp);
    else
	temp = EQ(system_attribute_name,Qname) ?  
		!TRUEP(type_of_slot_if_editable(2,ISVREF(ISVREF(item,
		(SI_Long)1L),(SI_Long)1L),Qname_or_names_for_frame)) : 
		TRUEP(Qnil);
    if (temp) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(4,string_constant_75,
		system_attribute_name,ISVREF(ISVREF(item,(SI_Long)1L),
		(SI_Long)1L),item);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    type_1 = Nil;
    ab_loop_list_ = ok_types;
  next_loop_1:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop_1;
    type_1 = M_CAR(ab_loop_list_);
    ab_loop_list_ = M_CDR(ab_loop_list_);
    if (EQ(type_1,type) || EQ(type_1,Qnumber) && (EQ(type,Qnumber) || 
	    EQ(type,Qinteger) || EQ(type,Qfloat) || EQ(type,Qlong) || 
	    lookup_global_or_kb_specific_property_value(type,
	    Numeric_data_type_gkbprop)) || EQ(type,Qnumber) && (EQ(type_1,
	    Qnumber) || EQ(type_1,Qinteger) || EQ(type_1,Qfloat) || 
	    EQ(type_1,Qlong) || 
	    lookup_global_or_kb_specific_property_value(type_1,
	    Numeric_data_type_gkbprop)) || (EQ(type_1,Qinteger) || 
	    memq_function(type_1,list_constant_13)) && (EQ(type,Qinteger) 
	    || memq_function(type,list_constant_13))) {
	temp = TRUEP(Nil);
	goto end_2;
    }
    goto next_loop_1;
  end_loop_1:
    temp = TRUEP(T);
    goto end_2;
    temp = TRUEP(Qnil);
  end_2:;
    if (temp) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(5,string_constant_76,
		evaluation_value,system_attribute_name,ISVREF(ISVREF(item,
		(SI_Long)1L),(SI_Long)1L),item);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    if (required_class_inheritance) {
	class_1 = Nil;
	ab_loop_list_ = required_class_inheritance;
      next_loop_2:
	if ( !TRUEP(ab_loop_list_))
	    goto end_loop_2;
	class_1 = M_CAR(ab_loop_list_);
	ab_loop_list_ = M_CDR(ab_loop_list_);
	gensymed_symbol = 
		lookup_global_or_kb_specific_property_value(ISVREF(ISVREF(item,
		(SI_Long)1L),(SI_Long)1L),Class_description_gkbprop);
	if (gensymed_symbol ? TRUEP(memq_function(class_1,
		ISVREF(gensymed_symbol,(SI_Long)2L))) : TRUEP(Nil)) {
	    temp = TRUEP(Nil);
	    goto end_3;
	}
	goto next_loop_2;
      end_loop_2:
	temp = TRUEP(T);
	goto end_3;
	temp = TRUEP(Qnil);
      end_3:;
    }
    else
	temp = TRUEP(Nil);
    if (temp) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(5,string_constant_77,
		system_attribute_name,ISVREF(ISVREF(item,(SI_Long)1L),
		(SI_Long)1L),item,evaluation_value);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    if (EQ(system_attribute_name,Qgsi_interface_name)) {
	current_computation_component_particulars = Nil;
	PUSH_SPECIAL(Current_computation_component_particulars,current_computation_component_particulars,
		0);
	  change_slot_value(3,item,Qgsi_interface_name,value);
	POP_SPECIAL();
    }
    else if (EQ(system_attribute_name,Qsize))
	change_size_of_workspace_to_minimum(item);
    else if (EQ(system_attribute_name,Qremote_process_initialization_string))
	change_slot_value(3,item,Qremote_process_initialization_string,
		copy_text_string(value));
    else if (EQ(system_attribute_name,Qarray_length)) {
	if ( !(INTEGERP(value) && IFIX(value) >= (SI_Long)0L && 
		FIXNUM_LE(value,G2_array_length_maximum)))
	    bad_g2_array_length_stack_error(item,evaluation_value,
		    top_of_stack);
	note_as_kb_state_change_qm = T;
	do_not_note_permanent_changes_p = T;
	current_computation_component_particulars = Nil;
	PUSH_SPECIAL(Current_computation_component_particulars,current_computation_component_particulars,
		2);
	  PUSH_SPECIAL(Do_not_note_permanent_changes_p,do_not_note_permanent_changes_p,
		  1);
	    PUSH_SPECIAL(Note_as_kb_state_change_qm,note_as_kb_state_change_qm,
		    0);
	      note_kb_state_change(item,Qg2_array_length);
	      change_slot_value(3,item,Qg2_array_length,value);
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
    }
    else if (EQ(system_attribute_name,Qname)) {
	note_as_kb_state_change_qm = T;
	current_computation_component_particulars = Nil;
	PUSH_SPECIAL(Current_computation_component_particulars,current_computation_component_particulars,
		2);
	  PUSH_SPECIAL(Note_as_kb_state_change_qm,note_as_kb_state_change_qm,
		  1);
	    if (destabilizing_operation_restricted_for_item_p(item)) {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_78,item);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    else {
		do_not_note_permanent_changes_p = T;
		PUSH_SPECIAL(Do_not_note_permanent_changes_p,do_not_note_permanent_changes_p,
			0);
		  note_kb_state_change_to_slot_by_saving_text(item,
			  get_slot_description_of_class_description_function(Qname_or_names_for_frame,
			  ISVREF(item,(SI_Long)1L),Nil));
		  change_slot_value(3,item,Qname_or_names_for_frame,value);
		POP_SPECIAL();
	    }
	  POP_SPECIAL();
	POP_SPECIAL();
    }
    reclaim_evaluation_value(evaluation_value);
    return VALUES_1(Nil);
}

/* MAKE-TEXT-SLOT-FOR-WHOLE-STRING */
Object make_text_slot_for_whole_string(text_string)
    Object text_string;
{
    x_note_fn_call(210,108);
    return gensym_cons_1(text_string,
	    convert_text_string_to_text(twrite_parsably(text_string)));
}

static Object Qaliased_attribute;  /* aliased-attribute */

static Object Qrule_scan_interval;  /* rule-scan-interval */

static Object string_constant_79;  /* "Cannot change the text of ~NV." */

static Object Qscan_interval;      /* scan-interval */

static Object Qtext;               /* text */

static Object string_constant_80;  /* "~NF has no TEXT attribute." */

static Object string_constant_81;  /* "Cannot change the text of ~NF.  This ~a is currently executing." */

static Object string_constant_82;  /* "Cannot change the text of the ~a of ~NF.  ~
				    *           Attributes of tabular-functions cannot be changed from this action."
				    */

static Object Qicon_description_for_class_qm;  /* icon-description-for-class? */

static Object Qicon_description;   /* icon-description */

static Object string_constant_83;  /* "Cannot change the text of the icon-description of ~NF.  The ~
				    *           value of the direct-superior-classes attribute on the ~
				    *           class-definition does not indicate that the class has a ~
				    *           changeable icon-description."
				    */

static Object string_constant_84;  /* "Cannot change the text of the ~a of ~NF.  This ~
				    *                item does not have this attribute."
				    */

static Object string_constant_85;  /* "Cannot change the text of the ~a of ~NF.  This ~
				    *                attribute cannot be modified from an action."
				    */

static Object string_constant_86;  /* "Cannot change the text of the ~a of ~NF.  This ~
				    *                attribute contains an item."
				    */

static Object Qedit_attribute;     /* edit-attribute */

static Object string_constant_87;  /* "Cannot change the text of ~NF.  The modification of this ~
				    *                    item has been restricted."
				    */

static Object string_constant_88;  /* "Cannot change the text of the ~a of ~NF.  The modification ~
				    *                    of this item has been restricted."
				    */

static Object string_constant_89;  /* "Since this item is declared stable, this change would cause ~
				    *                  dependent parts of the KB to become ~
				    *                  incomplete and require recompilation.  This change is therefore ~
				    *                  not permitted from an action."
				    */

static Object string_constant_90;  /* "" */

static Object string_constant_91;  /* "~a~%The following text is not valid for this attribute:~%~%~A" */

/* FUNCALL-CHANGE-THE-TEXT-OF-ATTRIBUTE-INST */
Object funcall_change_the_text_of_attribute_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item_or_place, place_reference_to_reclaim_qm, component_particular;
    Object item, attribute_name, slot_name, defining_class;
    Object text_evaluation_value, text_string_to_parse;
    Object modification_while_executing_qm_1, unnamed_text_attribute_qm;
    Object top_of_stack_1, message_1, name, unaliased_name, x2;
    Object sub_class_bit_vector, superior, ab_loop_list_, ab_loop_it_;
    Object gensymed_symbol_3, gensymed_symbol_4, gensymed_symbol_5, temp_1;
    Object temp_2, new_cons, global_properties, kb_properties;
    Object kb_specific_value, resulting_value, slot_description_qm;
    Object type_of_slot_if_editable_qm, x, success_qm, reason_for_failure_qm;
    Object temp_3;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp;
    Object result;

    x_note_fn_call(210,109);
    item_or_place = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    place_reference_to_reclaim_qm = Nil;
    component_particular = Nil;
    item = Nil;
    attribute_name = Nil;
    slot_name = Nil;
    defining_class = Nil;
    text_evaluation_value = ISVREF(local_stack,IFIX(top_of_stack));
    text_string_to_parse = text_evaluation_value;
    modification_while_executing_qm_1 = Nil;
    unnamed_text_attribute_qm = Nil;
    if (CONSP(item_or_place) && EQ(M_CDR(item_or_place),Qplace_reference)) {
	component_particular = ISVREF(M_CAR(item_or_place),(SI_Long)0L);
	if ( !TRUEP(evaluation_place_reference_valid_p(item_or_place)) ||  
		!(CONSP(component_particular) && 
		EQ(M_CAR(component_particular),Qattribute) || 
		CONSP(component_particular) && 
		EQ(M_CAR(component_particular),Qvirtual_attribute) || 
		CONSP(component_particular) && 
		EQ(M_CAR(component_particular),Qaliased_attribute) || 
		CONSP(component_particular) && 
		EQ(M_CAR(component_particular),Qrule_scan_interval))) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_79,item_or_place);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    item = ISVREF(M_CAR(item_or_place),(SI_Long)1L);
	    if (CONSP(component_particular) && 
		    EQ(M_CAR(component_particular),Qaliased_attribute)) {
		attribute_name = M_CAR(M_CDR(component_particular));
		slot_name = M_CAR(M_CDR(M_CDR(component_particular)));
		defining_class = 
			M_CAR(M_CDR(M_CDR(M_CDR(component_particular))));
	    }
	    else if (CONSP(component_particular) && 
		    EQ(M_CAR(component_particular),Qvirtual_attribute)) {
		name = M_CAR(M_CDR(component_particular));
		unaliased_name = get_slot_name_for_alias_if_any(name,item);
		if (unaliased_name);
		else
		    unaliased_name = name;
		attribute_name = name;
		slot_name = unaliased_name;
		defining_class = Nil;
	    }
	    else if (CONSP(component_particular) && 
		    EQ(M_CAR(component_particular),Qrule_scan_interval)) {
		attribute_name = Qscan_interval;
		slot_name = Qrule_scan_interval;
	    }
	    else {
		attribute_name = M_CAR(M_CDR(component_particular));
		slot_name = attribute_name;
		defining_class = M_CAR(M_CDR(M_CDR(component_particular)));
	    }
	    place_reference_to_reclaim_qm = item_or_place;
	}
    }
    else {
	if (SIMPLE_VECTOR_P(item_or_place) && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_place)) > 
		(SI_Long)2L &&  !EQ(ISVREF(item_or_place,(SI_Long)1L),
		Qavailable_frame_vector)) {
	    x2 = ISVREF(item_or_place,(SI_Long)1L);
	    temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
		    Qg2_defstruct_structure_name_class_description_g2_struct) 
		    ? TRUEP(x2) : TRUEP(Qnil);
	}
	else
	    temp = TRUEP(Nil);
	if (temp) {
	    slot_name = get_slot_name_for_alias_if_any(Qtext,item_or_place);
	    if (slot_name) {
		item = item_or_place;
		attribute_name = Qtext;
		defining_class = Nil;
		unnamed_text_attribute_qm = T;
	    }
	    else {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_80,item_or_place);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    if (EQ(item_or_place,Current_computation_frame)) {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(3,
			string_constant_81,item_or_place,
			ISVREF(ISVREF(item_or_place,(SI_Long)1L),(SI_Long)1L));
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	}
	else {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_79,item_or_place);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
    superior_class_bit_number = 
	    IFIX(ISVREF(Tabular_function_class_description,(SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_1 = (SI_Long)1L;
	gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	temp = (SI_Long)0L < gensymed_symbol;
    }
    else
	temp = TRUEP(Nil);
    if (temp) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(3,string_constant_82,
		attribute_name,item);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else {
	modification_while_executing_qm_1 = 
		modification_while_executing_qm(item,slot_name);
	if (modification_while_executing_qm_1) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(1,
		    modification_while_executing_qm_1);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),
		    (SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Class_definition_class_description,
		    (SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_1 = (SI_Long)1L;
		gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		temp = (SI_Long)0L < gensymed_symbol;
	    }
	    else
		temp = TRUEP(Nil);
	    if (temp) {
		sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),
			(SI_Long)19L);
		superior_class_bit_number = 
			IFIX(ISVREF(Object_definition_class_description,
			(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_1 = (SI_Long)1L;
		    gensymed_symbol_2 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		    temp = (SI_Long)0L < gensymed_symbol;
		}
		else
		    temp = TRUEP(Nil);
		temp =  !temp;
	    }
	    else
		temp = TRUEP(Nil);
	    if (temp ? EQ(slot_name,Qicon_description_for_class_qm) : 
		    TRUEP(Nil)) {
		if (get_lookup_slot_value_given_default(item,
			Qclass_inheritance_path_of_definition,Nil)) {
		    superior = Nil;
		    ab_loop_list_ = ISVREF(item,(SI_Long)21L);
		    ab_loop_it_ = Nil;
		  next_loop:
		    if ( !TRUEP(ab_loop_list_))
			goto end_loop;
		    superior = M_CAR(ab_loop_list_);
		    ab_loop_list_ = M_CDR(ab_loop_list_);
		    gensymed_symbol_3 = CDR(Symbol_properties_table);
		    gensymed_symbol_4 = superior;
		    gensymed_symbol = SXHASH_SYMBOL_1(superior) & 
			    IFIX(Most_positive_fixnum);
		    gensymed_symbol_1 = (SI_Long)0L;
		  next_loop_1:
		    if ( !TRUEP(gensymed_symbol_3))
			goto end_loop_1;
		    gensymed_symbol_1 = IFIX(ISVREF(gensymed_symbol_3,
			    (SI_Long)0L));
		    if (gensymed_symbol < gensymed_symbol_1)
			gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				(SI_Long)1L);
		    else if (gensymed_symbol > gensymed_symbol_1)
			gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				(SI_Long)2L);
		    else {
			gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				(SI_Long)3L);
			gensymed_symbol_5 = Nil;
		      next_loop_2:
			if ( !TRUEP(gensymed_symbol_3))
			    goto end_loop_2;
			gensymed_symbol_5 = M_CAR(M_CAR(gensymed_symbol_3));
			if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
			    gensymed_symbol_3 = 
				    M_CDR(M_CAR(gensymed_symbol_3));
			    goto end_1;
			}
			gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
			goto next_loop_2;
		      end_loop_2:
			gensymed_symbol_3 = Qnil;
		      end_1:;
			goto end_2;
		    }
		    goto next_loop_1;
		  end_loop_1:
		    gensymed_symbol_3 = Qnil;
		  end_2:;
		    if ( !TRUEP(gensymed_symbol_3)) {
			gensymed_symbol_3 = superior;
			temp_1 = Symbol_properties_table;
			temp_2 = FIX(SXHASH_SYMBOL_1(gensymed_symbol_3) & 
				IFIX(Most_positive_fixnum));
			new_cons = Available_gensym_conses;
			if (new_cons) {
			    Available_gensym_conses = M_CDR(new_cons);
			    gensymed_symbol_4 = new_cons;
			}
			else
			    gensymed_symbol_4 = Nil;
			if ( !TRUEP(gensymed_symbol_4))
			    gensymed_symbol_4 = replenish_gensym_cons_pool();
			M_CAR(gensymed_symbol_4) = 
				Qsymbol_properties_hash_table;
			M_CDR(gensymed_symbol_4) = Nil;
			inline_note_allocate_cons(gensymed_symbol_4,
				Qab_gensym);
			gensymed_symbol_3 = 
				set_balanced_binary_tree_entry(temp_1,Qeq,
				Nil,T,gensymed_symbol_3,temp_2,
				gensymed_symbol_4);
		    }
		    global_properties = gensymed_symbol_3;
		    gensymed_symbol_3 = CDR(global_properties);
		    gensymed_symbol_4 = 
			    Current_kb_specific_property_list_property_name;
		    gensymed_symbol = 
			    SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
			    & IFIX(Most_positive_fixnum);
		    gensymed_symbol_1 = (SI_Long)0L;
		  next_loop_3:
		    if ( !TRUEP(gensymed_symbol_3))
			goto end_loop_3;
		    gensymed_symbol_1 = IFIX(ISVREF(gensymed_symbol_3,
			    (SI_Long)0L));
		    if (gensymed_symbol < gensymed_symbol_1)
			gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				(SI_Long)1L);
		    else if (gensymed_symbol > gensymed_symbol_1)
			gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				(SI_Long)2L);
		    else {
			gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				(SI_Long)3L);
			gensymed_symbol_5 = Nil;
		      next_loop_4:
			if ( !TRUEP(gensymed_symbol_3))
			    goto end_loop_4;
			gensymed_symbol_5 = M_CAR(M_CAR(gensymed_symbol_3));
			if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
			    kb_properties = M_CDR(M_CAR(gensymed_symbol_3));
			    goto end_3;
			}
			gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
			goto next_loop_4;
		      end_loop_4:
			kb_properties = Qnil;
		      end_3:;
			goto end_4;
		    }
		    goto next_loop_3;
		  end_loop_3:
		    kb_properties = Qnil;
		  end_4:;
		    if (kb_properties);
		    else
			kb_properties = Nil;
		    if (kb_properties) {
			gensymed_symbol_3 = CDR(kb_properties);
			gensymed_symbol_4 = Class_description_gkbprop;
			gensymed_symbol = 
				SXHASH_SYMBOL_1(Class_description_gkbprop) 
				& IFIX(Most_positive_fixnum);
			gensymed_symbol_1 = (SI_Long)0L;
		      next_loop_5:
			if ( !TRUEP(gensymed_symbol_3))
			    goto end_loop_5;
			gensymed_symbol_1 = IFIX(ISVREF(gensymed_symbol_3,
				(SI_Long)0L));
			if (gensymed_symbol < gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)1L);
			else if (gensymed_symbol > gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)2L);
			else {
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)3L);
			    gensymed_symbol_5 = Nil;
			  next_loop_6:
			    if ( !TRUEP(gensymed_symbol_3))
				goto end_loop_6;
			    gensymed_symbol_5 = 
				    M_CAR(M_CAR(gensymed_symbol_3));
			    if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
				kb_specific_value = 
					M_CDR(M_CAR(gensymed_symbol_3));
				goto end_5;
			    }
			    gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
			    goto next_loop_6;
			  end_loop_6:
			    kb_specific_value = Qnil;
			  end_5:;
			    goto end_6;
			}
			goto next_loop_5;
		      end_loop_5:
			kb_specific_value = Qnil;
		      end_6:;
			if (kb_specific_value);
			else
			    kb_specific_value = No_specific_property_value;
		    }
		    else
			kb_specific_value = No_specific_property_value;
		    if ( !EQ(kb_specific_value,No_specific_property_value))
			resulting_value = kb_specific_value;
		    else {
			gensymed_symbol_3 = CDR(global_properties);
			gensymed_symbol_4 = Class_description_gkbprop;
			gensymed_symbol = 
				SXHASH_SYMBOL_1(Class_description_gkbprop) 
				& IFIX(Most_positive_fixnum);
			gensymed_symbol_1 = (SI_Long)0L;
		      next_loop_7:
			if ( !TRUEP(gensymed_symbol_3))
			    goto end_loop_7;
			gensymed_symbol_1 = IFIX(ISVREF(gensymed_symbol_3,
				(SI_Long)0L));
			if (gensymed_symbol < gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)1L);
			else if (gensymed_symbol > gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)2L);
			else {
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)3L);
			    gensymed_symbol_5 = Nil;
			  next_loop_8:
			    if ( !TRUEP(gensymed_symbol_3))
				goto end_loop_8;
			    gensymed_symbol_5 = 
				    M_CAR(M_CAR(gensymed_symbol_3));
			    if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
				resulting_value = 
					M_CDR(M_CAR(gensymed_symbol_3));
				goto end_7;
			    }
			    gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
			    goto next_loop_8;
			  end_loop_8:
			    resulting_value = Qnil;
			  end_7:;
			    goto end_8;
			}
			goto next_loop_7;
		      end_loop_7:
			resulting_value = Qnil;
		      end_8:;
			if (resulting_value);
			else
			    resulting_value = Nil;
		    }
		    gensymed_symbol_3 = resulting_value;
		    if (gensymed_symbol_3) {
			sub_class_bit_vector = ISVREF(gensymed_symbol_3,
				(SI_Long)19L);
			superior_class_bit_number = 
				IFIX(ISVREF(Entity_class_description,
				(SI_Long)18L));
			sub_class_vector_index = superior_class_bit_number 
				>>  -  - (SI_Long)3L;
			if (sub_class_vector_index < 
				IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				    {
			    gensymed_symbol = 
				    UBYTE_8_ISAREF_1(sub_class_bit_vector,
				    sub_class_vector_index);
			    gensymed_symbol_1 = (SI_Long)1L;
			    gensymed_symbol_2 = superior_class_bit_number 
				    & (SI_Long)7L;
			    gensymed_symbol_1 = gensymed_symbol_1 << 
				    gensymed_symbol_2;
			    gensymed_symbol = gensymed_symbol & 
				    gensymed_symbol_1;
			    temp = (SI_Long)0L < gensymed_symbol;
			}
			else
			    temp = TRUEP(Nil);
		    }
		    else
			temp = TRUEP(Nil);
		    if (temp) {
			gensymed_symbol_3 = CDR(Symbol_properties_table);
			gensymed_symbol_4 = superior;
			gensymed_symbol = SXHASH_SYMBOL_1(superior) & 
				IFIX(Most_positive_fixnum);
			gensymed_symbol_1 = (SI_Long)0L;
		      next_loop_9:
			if ( !TRUEP(gensymed_symbol_3))
			    goto end_loop_9;
			gensymed_symbol_1 = IFIX(ISVREF(gensymed_symbol_3,
				(SI_Long)0L));
			if (gensymed_symbol < gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)1L);
			else if (gensymed_symbol > gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)2L);
			else {
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)3L);
			    gensymed_symbol_5 = Nil;
			  next_loop_10:
			    if ( !TRUEP(gensymed_symbol_3))
				goto end_loop_10;
			    gensymed_symbol_5 = 
				    M_CAR(M_CAR(gensymed_symbol_3));
			    if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
				gensymed_symbol_3 = 
					M_CDR(M_CAR(gensymed_symbol_3));
				goto end_9;
			    }
			    gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
			    goto next_loop_10;
			  end_loop_10:
			    gensymed_symbol_3 = Qnil;
			  end_9:;
			    goto end_10;
			}
			goto next_loop_9;
		      end_loop_9:
			gensymed_symbol_3 = Qnil;
		      end_10:;
			if ( !TRUEP(gensymed_symbol_3)) {
			    gensymed_symbol_3 = superior;
			    temp_1 = Symbol_properties_table;
			    temp_2 = 
				    FIX(SXHASH_SYMBOL_1(gensymed_symbol_3) 
				    & IFIX(Most_positive_fixnum));
			    new_cons = Available_gensym_conses;
			    if (new_cons) {
				Available_gensym_conses = M_CDR(new_cons);
				gensymed_symbol_4 = new_cons;
			    }
			    else
				gensymed_symbol_4 = Nil;
			    if ( !TRUEP(gensymed_symbol_4))
				gensymed_symbol_4 = 
					replenish_gensym_cons_pool();
			    M_CAR(gensymed_symbol_4) = 
				    Qsymbol_properties_hash_table;
			    M_CDR(gensymed_symbol_4) = Nil;
			    inline_note_allocate_cons(gensymed_symbol_4,
				    Qab_gensym);
			    gensymed_symbol_3 = 
				    set_balanced_binary_tree_entry(temp_1,
				    Qeq,Nil,T,gensymed_symbol_3,temp_2,
				    gensymed_symbol_4);
			}
			global_properties = gensymed_symbol_3;
			gensymed_symbol_3 = CDR(global_properties);
			gensymed_symbol_4 = 
				Current_kb_specific_property_list_property_name;
			gensymed_symbol = 
				SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
				& IFIX(Most_positive_fixnum);
			gensymed_symbol_1 = (SI_Long)0L;
		      next_loop_11:
			if ( !TRUEP(gensymed_symbol_3))
			    goto end_loop_11;
			gensymed_symbol_1 = IFIX(ISVREF(gensymed_symbol_3,
				(SI_Long)0L));
			if (gensymed_symbol < gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)1L);
			else if (gensymed_symbol > gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)2L);
			else {
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)3L);
			    gensymed_symbol_5 = Nil;
			  next_loop_12:
			    if ( !TRUEP(gensymed_symbol_3))
				goto end_loop_12;
			    gensymed_symbol_5 = 
				    M_CAR(M_CAR(gensymed_symbol_3));
			    if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
				kb_properties = 
					M_CDR(M_CAR(gensymed_symbol_3));
				goto end_11;
			    }
			    gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
			    goto next_loop_12;
			  end_loop_12:
			    kb_properties = Qnil;
			  end_11:;
			    goto end_12;
			}
			goto next_loop_11;
		      end_loop_11:
			kb_properties = Qnil;
		      end_12:;
			if (kb_properties);
			else
			    kb_properties = Nil;
			if (kb_properties) {
			    gensymed_symbol_3 = CDR(kb_properties);
			    gensymed_symbol_4 = Class_description_gkbprop;
			    gensymed_symbol = 
				    SXHASH_SYMBOL_1(Class_description_gkbprop) 
				    & IFIX(Most_positive_fixnum);
			    gensymed_symbol_1 = (SI_Long)0L;
			  next_loop_13:
			    if ( !TRUEP(gensymed_symbol_3))
				goto end_loop_13;
			    gensymed_symbol_1 = 
				    IFIX(ISVREF(gensymed_symbol_3,
				    (SI_Long)0L));
			    if (gensymed_symbol < gensymed_symbol_1)
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)1L);
			    else if (gensymed_symbol > gensymed_symbol_1)
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)2L);
			    else {
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)3L);
				gensymed_symbol_5 = Nil;
			      next_loop_14:
				if ( !TRUEP(gensymed_symbol_3))
				    goto end_loop_14;
				gensymed_symbol_5 = 
					M_CAR(M_CAR(gensymed_symbol_3));
				if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
				    kb_specific_value = 
					    M_CDR(M_CAR(gensymed_symbol_3));
				    goto end_13;
				}
				gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
				goto next_loop_14;
			      end_loop_14:
				kb_specific_value = Qnil;
			      end_13:;
				goto end_14;
			    }
			    goto next_loop_13;
			  end_loop_13:
			    kb_specific_value = Qnil;
			  end_14:;
			    if (kb_specific_value);
			    else
				kb_specific_value = No_specific_property_value;
			}
			else
			    kb_specific_value = No_specific_property_value;
			if ( !EQ(kb_specific_value,No_specific_property_value))
			    resulting_value = kb_specific_value;
			else {
			    gensymed_symbol_3 = CDR(global_properties);
			    gensymed_symbol_4 = Class_description_gkbprop;
			    gensymed_symbol = 
				    SXHASH_SYMBOL_1(Class_description_gkbprop) 
				    & IFIX(Most_positive_fixnum);
			    gensymed_symbol_1 = (SI_Long)0L;
			  next_loop_15:
			    if ( !TRUEP(gensymed_symbol_3))
				goto end_loop_15;
			    gensymed_symbol_1 = 
				    IFIX(ISVREF(gensymed_symbol_3,
				    (SI_Long)0L));
			    if (gensymed_symbol < gensymed_symbol_1)
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)1L);
			    else if (gensymed_symbol > gensymed_symbol_1)
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)2L);
			    else {
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)3L);
				gensymed_symbol_5 = Nil;
			      next_loop_16:
				if ( !TRUEP(gensymed_symbol_3))
				    goto end_loop_16;
				gensymed_symbol_5 = 
					M_CAR(M_CAR(gensymed_symbol_3));
				if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
				    resulting_value = 
					    M_CDR(M_CAR(gensymed_symbol_3));
				    goto end_15;
				}
				gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
				goto next_loop_16;
			      end_loop_16:
				resulting_value = Qnil;
			      end_15:;
				goto end_16;
			    }
			    goto next_loop_15;
			  end_loop_15:
			    resulting_value = Qnil;
			  end_16:;
			    if (resulting_value);
			    else
				resulting_value = Nil;
			}
			gensymed_symbol_3 = resulting_value;
			if (gensymed_symbol_3) {
			    sub_class_bit_vector = 
				    ISVREF(gensymed_symbol_3,(SI_Long)19L);
			    superior_class_bit_number = 
				    IFIX(ISVREF(Connection_class_description,
				    (SI_Long)18L));
			    sub_class_vector_index = 
				    superior_class_bit_number >>  -  - 
				    (SI_Long)3L;
			    if (sub_class_vector_index < 
				    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
					{
				gensymed_symbol = 
					UBYTE_8_ISAREF_1(sub_class_bit_vector,
					sub_class_vector_index);
				gensymed_symbol_1 = (SI_Long)1L;
				gensymed_symbol_2 = 
					superior_class_bit_number & 
					(SI_Long)7L;
				gensymed_symbol_1 = gensymed_symbol_1 << 
					gensymed_symbol_2;
				gensymed_symbol = gensymed_symbol & 
					gensymed_symbol_1;
				temp = (SI_Long)0L < gensymed_symbol;
			    }
			    else
				temp = TRUEP(Nil);
			}
			else
			    temp = TRUEP(Nil);
			temp =  !temp;
		    }
		    else
			temp = TRUEP(Nil);
		    if (temp) {
			gensymed_symbol_3 = CDR(Symbol_properties_table);
			gensymed_symbol_4 = superior;
			gensymed_symbol = SXHASH_SYMBOL_1(superior) & 
				IFIX(Most_positive_fixnum);
			gensymed_symbol_1 = (SI_Long)0L;
		      next_loop_17:
			if ( !TRUEP(gensymed_symbol_3))
			    goto end_loop_17;
			gensymed_symbol_1 = IFIX(ISVREF(gensymed_symbol_3,
				(SI_Long)0L));
			if (gensymed_symbol < gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)1L);
			else if (gensymed_symbol > gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)2L);
			else {
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)3L);
			    gensymed_symbol_5 = Nil;
			  next_loop_18:
			    if ( !TRUEP(gensymed_symbol_3))
				goto end_loop_18;
			    gensymed_symbol_5 = 
				    M_CAR(M_CAR(gensymed_symbol_3));
			    if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
				gensymed_symbol_3 = 
					M_CDR(M_CAR(gensymed_symbol_3));
				goto end_17;
			    }
			    gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
			    goto next_loop_18;
			  end_loop_18:
			    gensymed_symbol_3 = Qnil;
			  end_17:;
			    goto end_18;
			}
			goto next_loop_17;
		      end_loop_17:
			gensymed_symbol_3 = Qnil;
		      end_18:;
			if ( !TRUEP(gensymed_symbol_3)) {
			    gensymed_symbol_3 = superior;
			    temp_1 = Symbol_properties_table;
			    temp_2 = 
				    FIX(SXHASH_SYMBOL_1(gensymed_symbol_3) 
				    & IFIX(Most_positive_fixnum));
			    new_cons = Available_gensym_conses;
			    if (new_cons) {
				Available_gensym_conses = M_CDR(new_cons);
				gensymed_symbol_4 = new_cons;
			    }
			    else
				gensymed_symbol_4 = Nil;
			    if ( !TRUEP(gensymed_symbol_4))
				gensymed_symbol_4 = 
					replenish_gensym_cons_pool();
			    M_CAR(gensymed_symbol_4) = 
				    Qsymbol_properties_hash_table;
			    M_CDR(gensymed_symbol_4) = Nil;
			    inline_note_allocate_cons(gensymed_symbol_4,
				    Qab_gensym);
			    gensymed_symbol_3 = 
				    set_balanced_binary_tree_entry(temp_1,
				    Qeq,Nil,T,gensymed_symbol_3,temp_2,
				    gensymed_symbol_4);
			}
			global_properties = gensymed_symbol_3;
			gensymed_symbol_3 = CDR(global_properties);
			gensymed_symbol_4 = 
				Current_kb_specific_property_list_property_name;
			gensymed_symbol = 
				SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
				& IFIX(Most_positive_fixnum);
			gensymed_symbol_1 = (SI_Long)0L;
		      next_loop_19:
			if ( !TRUEP(gensymed_symbol_3))
			    goto end_loop_19;
			gensymed_symbol_1 = IFIX(ISVREF(gensymed_symbol_3,
				(SI_Long)0L));
			if (gensymed_symbol < gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)1L);
			else if (gensymed_symbol > gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)2L);
			else {
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)3L);
			    gensymed_symbol_5 = Nil;
			  next_loop_20:
			    if ( !TRUEP(gensymed_symbol_3))
				goto end_loop_20;
			    gensymed_symbol_5 = 
				    M_CAR(M_CAR(gensymed_symbol_3));
			    if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
				kb_properties = 
					M_CDR(M_CAR(gensymed_symbol_3));
				goto end_19;
			    }
			    gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
			    goto next_loop_20;
			  end_loop_20:
			    kb_properties = Qnil;
			  end_19:;
			    goto end_20;
			}
			goto next_loop_19;
		      end_loop_19:
			kb_properties = Qnil;
		      end_20:;
			if (kb_properties);
			else
			    kb_properties = Nil;
			if (kb_properties) {
			    gensymed_symbol_3 = CDR(kb_properties);
			    gensymed_symbol_4 = Class_description_gkbprop;
			    gensymed_symbol = 
				    SXHASH_SYMBOL_1(Class_description_gkbprop) 
				    & IFIX(Most_positive_fixnum);
			    gensymed_symbol_1 = (SI_Long)0L;
			  next_loop_21:
			    if ( !TRUEP(gensymed_symbol_3))
				goto end_loop_21;
			    gensymed_symbol_1 = 
				    IFIX(ISVREF(gensymed_symbol_3,
				    (SI_Long)0L));
			    if (gensymed_symbol < gensymed_symbol_1)
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)1L);
			    else if (gensymed_symbol > gensymed_symbol_1)
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)2L);
			    else {
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)3L);
				gensymed_symbol_5 = Nil;
			      next_loop_22:
				if ( !TRUEP(gensymed_symbol_3))
				    goto end_loop_22;
				gensymed_symbol_5 = 
					M_CAR(M_CAR(gensymed_symbol_3));
				if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
				    kb_specific_value = 
					    M_CDR(M_CAR(gensymed_symbol_3));
				    goto end_21;
				}
				gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
				goto next_loop_22;
			      end_loop_22:
				kb_specific_value = Qnil;
			      end_21:;
				goto end_22;
			    }
			    goto next_loop_21;
			  end_loop_21:
			    kb_specific_value = Qnil;
			  end_22:;
			    if (kb_specific_value);
			    else
				kb_specific_value = No_specific_property_value;
			}
			else
			    kb_specific_value = No_specific_property_value;
			if ( !EQ(kb_specific_value,No_specific_property_value))
			    resulting_value = kb_specific_value;
			else {
			    gensymed_symbol_3 = CDR(global_properties);
			    gensymed_symbol_4 = Class_description_gkbprop;
			    gensymed_symbol = 
				    SXHASH_SYMBOL_1(Class_description_gkbprop) 
				    & IFIX(Most_positive_fixnum);
			    gensymed_symbol_1 = (SI_Long)0L;
			  next_loop_23:
			    if ( !TRUEP(gensymed_symbol_3))
				goto end_loop_23;
			    gensymed_symbol_1 = 
				    IFIX(ISVREF(gensymed_symbol_3,
				    (SI_Long)0L));
			    if (gensymed_symbol < gensymed_symbol_1)
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)1L);
			    else if (gensymed_symbol > gensymed_symbol_1)
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)2L);
			    else {
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)3L);
				gensymed_symbol_5 = Nil;
			      next_loop_24:
				if ( !TRUEP(gensymed_symbol_3))
				    goto end_loop_24;
				gensymed_symbol_5 = 
					M_CAR(M_CAR(gensymed_symbol_3));
				if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
				    resulting_value = 
					    M_CDR(M_CAR(gensymed_symbol_3));
				    goto end_23;
				}
				gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
				goto next_loop_24;
			      end_loop_24:
				resulting_value = Qnil;
			      end_23:;
				goto end_24;
			    }
			    goto next_loop_23;
			  end_loop_23:
			    resulting_value = Qnil;
			  end_24:;
			    if (resulting_value);
			    else
				resulting_value = Nil;
			}
			gensymed_symbol_3 = resulting_value;
			if (gensymed_symbol_3) {
			    sub_class_bit_vector = 
				    ISVREF(gensymed_symbol_3,(SI_Long)19L);
			    superior_class_bit_number = 
				    IFIX(ISVREF(Meter_class_description,
				    (SI_Long)18L));
			    sub_class_vector_index = 
				    superior_class_bit_number >>  -  - 
				    (SI_Long)3L;
			    if (sub_class_vector_index < 
				    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
					{
				gensymed_symbol = 
					UBYTE_8_ISAREF_1(sub_class_bit_vector,
					sub_class_vector_index);
				gensymed_symbol_1 = (SI_Long)1L;
				gensymed_symbol_2 = 
					superior_class_bit_number & 
					(SI_Long)7L;
				gensymed_symbol_1 = gensymed_symbol_1 << 
					gensymed_symbol_2;
				gensymed_symbol = gensymed_symbol & 
					gensymed_symbol_1;
				temp = (SI_Long)0L < gensymed_symbol;
			    }
			    else
				temp = TRUEP(Nil);
			}
			else
			    temp = TRUEP(Nil);
			temp =  !temp;
		    }
		    else
			temp = TRUEP(Nil);
		    if (temp) {
			gensymed_symbol_3 = CDR(Symbol_properties_table);
			gensymed_symbol_4 = superior;
			gensymed_symbol = SXHASH_SYMBOL_1(superior) & 
				IFIX(Most_positive_fixnum);
			gensymed_symbol_1 = (SI_Long)0L;
		      next_loop_25:
			if ( !TRUEP(gensymed_symbol_3))
			    goto end_loop_25;
			gensymed_symbol_1 = IFIX(ISVREF(gensymed_symbol_3,
				(SI_Long)0L));
			if (gensymed_symbol < gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)1L);
			else if (gensymed_symbol > gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)2L);
			else {
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)3L);
			    gensymed_symbol_5 = Nil;
			  next_loop_26:
			    if ( !TRUEP(gensymed_symbol_3))
				goto end_loop_26;
			    gensymed_symbol_5 = 
				    M_CAR(M_CAR(gensymed_symbol_3));
			    if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
				gensymed_symbol_3 = 
					M_CDR(M_CAR(gensymed_symbol_3));
				goto end_25;
			    }
			    gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
			    goto next_loop_26;
			  end_loop_26:
			    gensymed_symbol_3 = Qnil;
			  end_25:;
			    goto end_26;
			}
			goto next_loop_25;
		      end_loop_25:
			gensymed_symbol_3 = Qnil;
		      end_26:;
			if ( !TRUEP(gensymed_symbol_3)) {
			    gensymed_symbol_3 = superior;
			    temp_1 = Symbol_properties_table;
			    temp_2 = 
				    FIX(SXHASH_SYMBOL_1(gensymed_symbol_3) 
				    & IFIX(Most_positive_fixnum));
			    new_cons = Available_gensym_conses;
			    if (new_cons) {
				Available_gensym_conses = M_CDR(new_cons);
				gensymed_symbol_4 = new_cons;
			    }
			    else
				gensymed_symbol_4 = Nil;
			    if ( !TRUEP(gensymed_symbol_4))
				gensymed_symbol_4 = 
					replenish_gensym_cons_pool();
			    M_CAR(gensymed_symbol_4) = 
				    Qsymbol_properties_hash_table;
			    M_CDR(gensymed_symbol_4) = Nil;
			    inline_note_allocate_cons(gensymed_symbol_4,
				    Qab_gensym);
			    gensymed_symbol_3 = 
				    set_balanced_binary_tree_entry(temp_1,
				    Qeq,Nil,T,gensymed_symbol_3,temp_2,
				    gensymed_symbol_4);
			}
			global_properties = gensymed_symbol_3;
			gensymed_symbol_3 = CDR(global_properties);
			gensymed_symbol_4 = 
				Current_kb_specific_property_list_property_name;
			gensymed_symbol = 
				SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
				& IFIX(Most_positive_fixnum);
			gensymed_symbol_1 = (SI_Long)0L;
		      next_loop_27:
			if ( !TRUEP(gensymed_symbol_3))
			    goto end_loop_27;
			gensymed_symbol_1 = IFIX(ISVREF(gensymed_symbol_3,
				(SI_Long)0L));
			if (gensymed_symbol < gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)1L);
			else if (gensymed_symbol > gensymed_symbol_1)
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)2L);
			else {
			    gensymed_symbol_3 = ISVREF(gensymed_symbol_3,
				    (SI_Long)3L);
			    gensymed_symbol_5 = Nil;
			  next_loop_28:
			    if ( !TRUEP(gensymed_symbol_3))
				goto end_loop_28;
			    gensymed_symbol_5 = 
				    M_CAR(M_CAR(gensymed_symbol_3));
			    if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
				kb_properties = 
					M_CDR(M_CAR(gensymed_symbol_3));
				goto end_27;
			    }
			    gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
			    goto next_loop_28;
			  end_loop_28:
			    kb_properties = Qnil;
			  end_27:;
			    goto end_28;
			}
			goto next_loop_27;
		      end_loop_27:
			kb_properties = Qnil;
		      end_28:;
			if (kb_properties);
			else
			    kb_properties = Nil;
			if (kb_properties) {
			    gensymed_symbol_3 = CDR(kb_properties);
			    gensymed_symbol_4 = Class_description_gkbprop;
			    gensymed_symbol = 
				    SXHASH_SYMBOL_1(Class_description_gkbprop) 
				    & IFIX(Most_positive_fixnum);
			    gensymed_symbol_1 = (SI_Long)0L;
			  next_loop_29:
			    if ( !TRUEP(gensymed_symbol_3))
				goto end_loop_29;
			    gensymed_symbol_1 = 
				    IFIX(ISVREF(gensymed_symbol_3,
				    (SI_Long)0L));
			    if (gensymed_symbol < gensymed_symbol_1)
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)1L);
			    else if (gensymed_symbol > gensymed_symbol_1)
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)2L);
			    else {
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)3L);
				gensymed_symbol_5 = Nil;
			      next_loop_30:
				if ( !TRUEP(gensymed_symbol_3))
				    goto end_loop_30;
				gensymed_symbol_5 = 
					M_CAR(M_CAR(gensymed_symbol_3));
				if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
				    kb_specific_value = 
					    M_CDR(M_CAR(gensymed_symbol_3));
				    goto end_29;
				}
				gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
				goto next_loop_30;
			      end_loop_30:
				kb_specific_value = Qnil;
			      end_29:;
				goto end_30;
			    }
			    goto next_loop_29;
			  end_loop_29:
			    kb_specific_value = Qnil;
			  end_30:;
			    if (kb_specific_value);
			    else
				kb_specific_value = No_specific_property_value;
			}
			else
			    kb_specific_value = No_specific_property_value;
			if ( !EQ(kb_specific_value,No_specific_property_value))
			    resulting_value = kb_specific_value;
			else {
			    gensymed_symbol_3 = CDR(global_properties);
			    gensymed_symbol_4 = Class_description_gkbprop;
			    gensymed_symbol = 
				    SXHASH_SYMBOL_1(Class_description_gkbprop) 
				    & IFIX(Most_positive_fixnum);
			    gensymed_symbol_1 = (SI_Long)0L;
			  next_loop_31:
			    if ( !TRUEP(gensymed_symbol_3))
				goto end_loop_31;
			    gensymed_symbol_1 = 
				    IFIX(ISVREF(gensymed_symbol_3,
				    (SI_Long)0L));
			    if (gensymed_symbol < gensymed_symbol_1)
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)1L);
			    else if (gensymed_symbol > gensymed_symbol_1)
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)2L);
			    else {
				gensymed_symbol_3 = 
					ISVREF(gensymed_symbol_3,(SI_Long)3L);
				gensymed_symbol_5 = Nil;
			      next_loop_32:
				if ( !TRUEP(gensymed_symbol_3))
				    goto end_loop_32;
				gensymed_symbol_5 = 
					M_CAR(M_CAR(gensymed_symbol_3));
				if (EQ(gensymed_symbol_4,gensymed_symbol_5)) {
				    resulting_value = 
					    M_CDR(M_CAR(gensymed_symbol_3));
				    goto end_31;
				}
				gensymed_symbol_3 = M_CDR(gensymed_symbol_3);
				goto next_loop_32;
			      end_loop_32:
				resulting_value = Qnil;
			      end_31:;
				goto end_32;
			    }
			    goto next_loop_31;
			  end_loop_31:
			    resulting_value = Qnil;
			  end_32:;
			    if (resulting_value);
			    else
				resulting_value = Nil;
			}
			gensymed_symbol_3 = resulting_value;
			ab_loop_it_ = 
				ISVREF(get_slot_description_of_class_description_function(Qicon_description,
				gensymed_symbol_3,Nil),(SI_Long)6L);
		    }
		    else
			ab_loop_it_ = Nil;
		    if (ab_loop_it_) {
			temp = TRUEP(ab_loop_it_);
			goto end_33;
		    }
		    goto next_loop;
		  end_loop:
		    temp = TRUEP(Qnil);
		  end_33:;
		}
		else
		    temp = TRUEP(Nil);
		temp =  !temp;
	    }
	    else
		temp = TRUEP(Nil);
	    if (temp) {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_83,item);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    else {
		slot_description_qm = 
			get_slot_description_of_class_description_function(slot_name,
			ISVREF(item,(SI_Long)1L),defining_class);
		type_of_slot_if_editable_qm = slot_description_qm ? 
			type_slot_feature_assq_if_editable(ISVREF(slot_description_qm,
			(SI_Long)9L)) : Nil;
		if ( !TRUEP(slot_description_qm)) {
		    top_of_stack_1 = top_of_stack;
		    message_1 = tformat_stack_error_text_string(3,
			    string_constant_84,attribute_name,item);
		    raw_stack_error_named_error(top_of_stack_1,message_1);
		}
		else if ( !TRUEP(type_of_slot_if_editable_qm)) {
		    top_of_stack_1 = top_of_stack;
		    message_1 = tformat_stack_error_text_string(3,
			    string_constant_85,attribute_name,item);
		    raw_stack_error_named_error(top_of_stack_1,message_1);
		}
		else {
		    x = get_slot_description_value(item,slot_description_qm);
		    if (SIMPLE_VECTOR_P(x) && 
			    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(x)) > 
			    (SI_Long)2L &&  !EQ(ISVREF(x,(SI_Long)1L),
			    Qavailable_frame_vector)) {
			x2 = ISVREF(x,(SI_Long)1L);
			temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
				(SI_Long)0L),
				Qg2_defstruct_structure_name_class_description_g2_struct) 
				? TRUEP(x2) : TRUEP(Qnil);
		    }
		    else
			temp = TRUEP(Nil);
		    if (temp) {
			top_of_stack_1 = top_of_stack;
			message_1 = tformat_stack_error_text_string(3,
				string_constant_86,attribute_name,item);
			raw_stack_error_named_error(top_of_stack_1,message_1);
		    }
		    else {
			if ( 
				!TRUEP(attribute_operation_is_allowed_p(Qedit_attribute,
				item,attribute_name,
				ISVREF(slot_description_qm,(SI_Long)3L)))) {
			    if (SIMPLE_VECTOR_P(item_or_place) && 
				    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_place)) 
				    > (SI_Long)2L &&  
				    !EQ(ISVREF(item_or_place,(SI_Long)1L),
				    Qavailable_frame_vector)) {
				x2 = ISVREF(item_or_place,(SI_Long)1L);
				gensymed_symbol_3 = SIMPLE_VECTOR_P(x2) && 
					EQ(ISVREF(x2,(SI_Long)0L),
					Qg2_defstruct_structure_name_class_description_g2_struct) 
					? x2 : Qnil;
			    }
			    else
				gensymed_symbol_3 = Nil;
			    if (gensymed_symbol_3) {
				sub_class_bit_vector = 
					ISVREF(gensymed_symbol_3,(SI_Long)19L);
				superior_class_bit_number = 
					IFIX(ISVREF(Message_class_description,
					(SI_Long)18L));
				sub_class_vector_index = 
					superior_class_bit_number >>  -  - 
					(SI_Long)3L;
				if (sub_class_vector_index < 
					IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
					    {
				    gensymed_symbol = 
					    UBYTE_8_ISAREF_1(sub_class_bit_vector,
					    sub_class_vector_index);
				    gensymed_symbol_1 = (SI_Long)1L;
				    gensymed_symbol_2 = 
					    superior_class_bit_number & 
					    (SI_Long)7L;
				    gensymed_symbol_1 = gensymed_symbol_1 
					    << gensymed_symbol_2;
				    gensymed_symbol = gensymed_symbol & 
					    gensymed_symbol_1;
				    temp = (SI_Long)0L < gensymed_symbol;
				}
				else
				    temp = TRUEP(Nil);
			    }
			    else
				temp = TRUEP(Nil);
			    temp =  !(temp ? 
				    TRUEP(unnamed_text_attribute_qm) : 
				    TRUEP(Nil));
			}
			else
			    temp = TRUEP(Nil);
			if (temp) {
			    if (unnamed_text_attribute_qm) {
				top_of_stack_1 = top_of_stack;
				message_1 = 
					tformat_stack_error_text_string(2,
					string_constant_87,item);
				raw_stack_error_named_error(top_of_stack_1,
					message_1);
			    }
			    else {
				top_of_stack_1 = top_of_stack;
				message_1 = 
					tformat_stack_error_text_string(3,
					string_constant_88,attribute_name,
					item);
				raw_stack_error_named_error(top_of_stack_1,
					message_1);
			    }
			}
			else if (restrict_destabilization_p(item,
				slot_description_qm))
			    cannot_change_text_stack_error(5,top_of_stack,
				    item,slot_description_qm,
				    unnamed_text_attribute_qm,
				    string_constant_89);
			else {
			    result = parse_and_change_slot(item,
				    slot_description_qm,
				    text_string_to_parse,
				    type_of_slot_if_editable_qm);
			    MVS_2(result,success_qm,reason_for_failure_qm);
			    if ( !TRUEP(success_qm)) {
				temp_2 = item;
				temp_1 = unnamed_text_attribute_qm;
				temp_3 = reason_for_failure_qm;
				if (temp_3);
				else
				    temp_3 = string_constant_90;
				cannot_change_text_stack_error(7,
					top_of_stack,temp_2,
					slot_description_qm,temp_1,
					string_constant_91,temp_3,
					text_evaluation_value);
				if (reason_for_failure_qm)
				    reclaim_text_string(reason_for_failure_qm);
			    }
			}
		    }
		}
	    }
	}
    }
    if (place_reference_to_reclaim_qm)
	reclaim_evaluation_place_reference(place_reference_to_reclaim_qm);
    return VALUES_1(Nil);
}

static Object Qtranslation_and_text_of_embedded_rule;  /* translation-and-text-of-embedded-rule */

static Object Qaction_for_user_menu_choice_qm;  /* action-for-user-menu-choice? */

static Object string_constant_92;  /* "Cannot change the text of the action of ~NF.  It is currently ~
				    *           executing."
				    */

/* MODIFICATION-WHILE-EXECUTING? */
Object modification_while_executing_qm(item,slot_name)
    Object item, slot_name;
{
    Object sub_class_bit_vector, temp_1;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp;

    x_note_fn_call(210,110);
    if (Current_computation_frame && 
	    embedded_rule_p(Current_computation_frame) && 
	    EQ(get_lookup_slot_value_given_default(Current_computation_frame,
	    Qparent_frame,Nil),item)) {
	sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Action_button_class_description,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	temp = temp ? EQ(slot_name,Qtranslation_and_text_of_embedded_rule) 
		: TRUEP(Nil);
	if (temp);
	else {
	    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),
		    (SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(User_menu_choice_class_description,
		    (SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_1 = (SI_Long)1L;
		gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		temp = (SI_Long)0L < gensymed_symbol;
	    }
	    else
		temp = TRUEP(Nil);
	    temp = temp ? EQ(slot_name,Qaction_for_user_menu_choice_qm) : 
		    TRUEP(Nil);
	}
    }
    else
	temp = TRUEP(Nil);
    temp_1 = temp ? tformat_text_string(2,string_constant_92,item) : Nil;
    return VALUES_1(temp_1);
}

static Object string_constant_93;  /* "Cannot change the text of " */

static Object string_constant_94;  /* "~NF" */

static Object string_constant_95;  /* "the ~NQ of ~NF" */

static Object string_constant_96;  /* "." */

static Object string_constant_97;  /* "  " */

/* CANNOT-CHANGE-TEXT-STACK-ERROR */
Object cannot_change_text_stack_error varargs_1(int, n)
{
    Object top_of_stack, item, slot_description, unnamed_text_attribute_qm;
    Object format_control_string_qm, arg1, arg2, arg3, arg4, arg5, arg6, asrg7;
    Object arg8, arg9, top_of_stack_1, text_string, snapshots;
    Object snapshots_of_related_blocks, note_blocks_in_tformat;
    Object current_wide_string_list, wide_string_bv16, current_wide_string;
    Object fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object pretty_slot_name, class_or_frame_qm, temp, class_description;
    Object temp_1, message_1;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    char temp_2;
    Declare_varargs_nonrelocating;
    Declare_special(7);

    x_note_fn_call(210,111);
    INIT_ARGS_nonrelocating();
    top_of_stack = REQUIRED_ARG_nonrelocating();
    item = REQUIRED_ARG_nonrelocating();
    slot_description = REQUIRED_ARG_nonrelocating();
    unnamed_text_attribute_qm = REQUIRED_ARG_nonrelocating();
    format_control_string_qm = OPTIONAL_ARG_P_nonrelocating() ? 
	    OPTIONAL_ARG_nonrelocating() : Nil;
    arg1 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg2 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg3 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg4 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg5 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg6 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    asrg7 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() :
	     Nil;
    arg8 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    arg9 = OPTIONAL_ARG_P_nonrelocating() ? OPTIONAL_ARG_nonrelocating() : Nil;
    END_ARGS_nonrelocating();
    top_of_stack_1 = top_of_stack;
    text_string = Nil;
    snapshots = Nil;
    snapshots_of_related_blocks = Nil;
    note_blocks_in_tformat = SYMBOL_FUNCTION(Qrecord_block_for_tformat);
    PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
      PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,5);
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
		  tformat(1,string_constant_93);
		  if (unnamed_text_attribute_qm)
		      tformat(2,string_constant_94,item);
		  else {
		      pretty_slot_name = ISVREF(slot_description,(SI_Long)2L);
		      class_or_frame_qm = item;
		      temp = 
			      get_alias_for_slot_name_if_any(pretty_slot_name,
			      class_or_frame_qm);
		      if (temp);
		      else
			  temp = pretty_slot_name;
		      class_description = ISVREF(item,(SI_Long)1L);
		      if ( ! !TRUEP(ISVREF(slot_description,(SI_Long)8L))) {
			  temp_1 = ISVREF(slot_description,(SI_Long)3L);
			  temp_2 =  !EQ(temp_1,
				  ISVREF(get_slot_description_of_class_description_function(ISVREF(slot_description,
				  (SI_Long)2L),class_description,Nil),
				  (SI_Long)3L));
		      }
		      else
			  temp_2 = TRUEP(Nil);
		      tformat(4,string_constant_95,temp,temp_2 ? 
			      ISVREF(slot_description,(SI_Long)3L) : Nil,item);
		  }
		  tformat(1,string_constant_96);
		  if (format_control_string_qm) {
		      tformat(1,string_constant_97);
		      tformat(10,format_control_string_qm,arg1,arg2,arg3,
			      arg4,arg5,arg6,asrg7,arg8,arg9);
		  }
		  reclaim_text_string(arg1);
		  text_string = copy_out_current_wide_string();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
	snapshots = Snapshots_of_related_blocks;
	Snapshots_of_related_blocks = Nil;
	if (Snapshots_of_related_blocks) {
	    reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
	    Snapshots_of_related_blocks = Nil;
	}
      POP_SPECIAL();
    POP_SPECIAL();
    message_1 = make_error_text(text_string,snapshots);
    return raw_stack_error_named_error(top_of_stack_1,message_1);
}

static Object Qfree;               /* free */

static Object Qfree_text_attribute;  /* free-text-attribute */

/* PARSE-AND-CHANGE-SLOT */
Object parse_and_change_slot(item,slot_description,text_string_to_parse,
	    type_of_slot)
    Object item, slot_description, text_string_to_parse, type_of_slot;
{
    Object current_computation_frame;
    Object current_computation_component_particulars;
    Object do_not_note_permanent_changes_p, success_qm, reason_for_failure_qm;
    Declare_special(3);
    Object result;

    x_note_fn_call(210,112);
    current_computation_frame = Nil;
    current_computation_component_particulars = Nil;
    PUSH_SPECIAL(Current_computation_component_particulars,current_computation_component_particulars,
	    2);
      PUSH_SPECIAL(Current_computation_frame,current_computation_frame,1);
	if (EQ(CADR(type_of_slot),Qfree) || EQ(CADR(type_of_slot),
		Qfree_text_attribute)) {
	    if (EQ(ISVREF(slot_description,(SI_Long)2L),
		    Qbox_translation_and_text)) {
		do_not_note_permanent_changes_p = T;
		PUSH_SPECIAL(Do_not_note_permanent_changes_p,do_not_note_permanent_changes_p,
			0);
		  note_kb_state_change_to_slot_by_saving_text(item,
			  slot_description);
		  replace_text_with_text_string_in_text_box(text_string_to_parse,
			  item);
		POP_SPECIAL();
		reclaim_text_string(text_string_to_parse);
		result = VALUES_1(T);
	    }
	    else
		result = parse_text_for_slot(4,
			convert_text_string_to_text(text_string_to_parse),
			item,slot_description,T);
	}
	else {
	    result = parse_text_for_slot(8,
		    convert_text_string_to_text(copy_text_string(text_string_to_parse)),
		    item,slot_description,T,Nil,Nil,Nil,T);
	    MVS_2(result,success_qm,reason_for_failure_qm);
	    if (success_qm) {
		reclaim_text_string(text_string_to_parse);
		result = VALUES_1(T);
	    }
	    else
		result = VALUES_2(Nil,reason_for_failure_qm);
	}
      POP_SPECIAL();
    POP_SPECIAL();
    return result;
}

static Object string_constant_98;  /* "Cannot ~(~a~) the element at index ~NV in array ~NF.  This ~
				    *             array is of length 0."
				    */

static Object string_constant_99;  /* "Cannot ~(~a~) the element at index ~NV in array ~NF.  ~NV is ~
				    *             not in the range 0 to ~a."
				    */

/* CHANGE-G2-ARRAY-ELEMENT */
Object change_g2_array_element(g2_array,index_1,new_element,error_symbol,
	    top_of_stack)
    Object g2_array, index_1, new_element, error_symbol, top_of_stack;
{
    Object top_of_stack_1, message_1, length_1;

    x_note_fn_call(210,113);
    if ( !(ISVREF(g2_array,(SI_Long)23L) && IFIX(ISVREF(g2_array,
	    (SI_Long)20L)) > (SI_Long)0L)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(4,string_constant_98,
		error_symbol,index_1,g2_array);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else {
	length_1 = ISVREF(g2_array,(SI_Long)20L);
	if ( !(FIXNUMP(index_1) && IFIX(index_1) >= (SI_Long)0L && 
		FIXNUM_LT(index_1,length_1))) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(6,
		    string_constant_99,error_symbol,index_1,g2_array,
		    index_1,FIXNUM_SUB1(ISVREF(g2_array,(SI_Long)20L)));
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else
	    mutate_g2_array_reclaiming_evaluation_values(g2_array,index_1,
		    new_element);
    }
    return VALUES_1(Nil);
}

/* CHANGE-G2-LIST-ELEMENT-FINAL-PROCESSING */
Object change_g2_list_element_final_processing(les,val)
    Object les, val;
{
    Object old_value, x2;
    char temp;

    x_note_fn_call(210,114);
    old_value = ISVREF(les,(SI_Long)2L);
    SVREF(les,FIX((SI_Long)2L)) = val;
    if (SIMPLE_VECTOR_P(old_value) && 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(old_value)) > (SI_Long)2L &&  
	    !EQ(ISVREF(old_value,(SI_Long)1L),Qavailable_frame_vector)) {
	x2 = ISVREF(old_value,(SI_Long)1L);
	temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
		Qg2_defstruct_structure_name_class_description_g2_struct) ?
		 TRUEP(x2) : TRUEP(Qnil);
    }
    else
	temp = TRUEP(Nil);
    if (temp)
	delete_from_list_elements_for_item(2,old_value,les);
    else if ( !(FIXNUMP(old_value) || SYMBOLP(old_value) || 
	    SIMPLE_VECTOR_P(old_value)))
	reclaim_if_evaluation_value_1(old_value);
    if (SIMPLE_VECTOR_P(val) && IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(val)) > 
	    (SI_Long)2L &&  !EQ(ISVREF(val,(SI_Long)1L),
	    Qavailable_frame_vector)) {
	x2 = ISVREF(val,(SI_Long)1L);
	temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
		Qg2_defstruct_structure_name_class_description_g2_struct) ?
		 TRUEP(x2) : TRUEP(Qnil);
    }
    else
	temp = TRUEP(Nil);
    if (temp)
	return add_to_list_elements_for_item(val,les);
    else
	return VALUES_1(Nil);
}

static Object string_constant_100;  /* "Cannot ~a the element at index ~NV in ~NF.  This g2-list ~
				     *         contains no elements."
				     */

static Object string_constant_101;  /* "G2 List index is out of bounds" */

static Object string_constant_102;  /* "Cannot ~(~a~) the element at index ~a in ~NF.  Since this ~
				     *                   g2-list contains ~a elements, the index must be in the range ~
				     *                   from 0 to ~a."
				     */

static Object string_constant_103;  /* "Cannot ~(~a~) the element at index ~a in ~NF.  Since this g2-list ~
				     *                   contains 1 element, the index must be 0."
				     */

/* CHANGE-G2-LIST-ELEMENT */
Object change_g2_list_element(g2_list,index_1,item_or_evaluation_value,
	    error_symbol,top_of_stack)
    Object g2_list, index_1, item_or_evaluation_value, error_symbol;
    Object top_of_stack;
{
    Object top_of_stack_1, message_1, g2_list_structure, element_count, list_1;
    Object next_list_element, element_structure, nth_element_structure_qm;
    Object allow_duplicates_qm, x2, new_value_item_p_qm, element_value;
    Object gensymed_symbol, gensymed_symbol_1, gensymed_symbol_4;
    SI_Long gensymed_symbol_2, gensymed_symbol_3;
    char temp;

    x_note_fn_call(210,115);
    if (g2_list_empty_p(g2_list)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(4,string_constant_100,
		error_symbol,index_1,g2_list);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    if (IFIX(index_1) < (SI_Long)0L || FIXNUM_GE(index_1,ISVREF(g2_list,
	    (SI_Long)24L))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(4,string_constant_101,
		error_symbol,index_1,g2_list);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    if (ISVREF(g2_list,(SI_Long)22L)) {
	if (FIXNUM_GT(FIXNUM_MINUS(ISVREF(g2_list,(SI_Long)24L),index_1),
		index_1)) {
	    g2_list_structure = ISVREF(g2_list,(SI_Long)20L);
	    element_count = FIX((SI_Long)0L);
	    list_1 = g2_list_structure;
	    next_list_element = Nil;
	    element_structure = Nil;
	    nth_element_structure_qm = Nil;
	    next_list_element = ISVREF(list_1,(SI_Long)0L);
	  next_loop:
	    if (EQ(next_list_element,list_1))
		goto end_loop;
	    element_structure = next_list_element;
	    next_list_element = ISVREF(next_list_element,(SI_Long)0L);
	    if (FIXNUM_EQ(element_count,index_1))
		nth_element_structure_qm = element_structure;
	    if ( !TRUEP(element_structure) || nth_element_structure_qm)
		goto end_loop;
	    element_count = FIXNUM_ADD1(element_count);
	    goto next_loop;
	  end_loop:
	    change_g2_list_element_final_processing(nth_element_structure_qm,
		    item_or_evaluation_value);
	}
	else {
	    g2_list_structure = ISVREF(g2_list,(SI_Long)20L);
	    element_count = FIXNUM_SUB1(ISVREF(g2_list,(SI_Long)24L));
	    list_1 = g2_list_structure;
	    next_list_element = Nil;
	    element_structure = Nil;
	    nth_element_structure_qm = Nil;
	    next_list_element = ISVREF(list_1,(SI_Long)1L);
	  next_loop_1:
	    if (EQ(next_list_element,list_1))
		goto end_loop_1;
	    element_structure = next_list_element;
	    next_list_element = ISVREF(next_list_element,(SI_Long)1L);
	    if (FIXNUM_EQ(element_count,index_1))
		nth_element_structure_qm = element_structure;
	    if ( !TRUEP(element_structure) || nth_element_structure_qm)
		goto end_loop_1;
	    element_count = FIXNUM_SUB1(element_count);
	    goto next_loop_1;
	  end_loop_1:
	    change_g2_list_element_final_processing(nth_element_structure_qm,
		    item_or_evaluation_value);
	}
	return VALUES_1(Nil);
    }
    allow_duplicates_qm = ISVREF(g2_list,(SI_Long)22L);
    if (SIMPLE_VECTOR_P(item_or_evaluation_value) && 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_evaluation_value)) > 
	    (SI_Long)2L &&  !EQ(ISVREF(item_or_evaluation_value,
	    (SI_Long)1L),Qavailable_frame_vector)) {
	x2 = ISVREF(item_or_evaluation_value,(SI_Long)1L);
	new_value_item_p_qm = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
		(SI_Long)0L),
		Qg2_defstruct_structure_name_class_description_g2_struct) ?
		 x2 : Qnil;
    }
    else
	new_value_item_p_qm = Nil;
    g2_list_structure = ISVREF(g2_list,(SI_Long)20L);
    nth_element_structure_qm = Nil;
    element_count = FIX((SI_Long)0L);
    list_1 = g2_list_structure;
    next_list_element = Nil;
    element_structure = Nil;
    element_value = Nil;
    next_list_element = ISVREF(list_1,(SI_Long)0L);
  next_loop_2:
    if (EQ(next_list_element,list_1))
	goto end_loop_2;
    element_structure = next_list_element;
    next_list_element = ISVREF(next_list_element,(SI_Long)0L);
    element_value = ISVREF(element_structure,(SI_Long)2L);
    if (FIXNUM_EQ(element_count,index_1))
	nth_element_structure_qm = element_structure;
    else {
	if ( !TRUEP(allow_duplicates_qm)) {
	    temp = new_value_item_p_qm ? EQ(item_or_evaluation_value,
		    element_value) : TRUEP(Qnil);
	    if (temp);
	    else {
		gensymed_symbol = element_value;
		temp = FIXNUMP(gensymed_symbol);
		if (temp);
		else
		    temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) 
			    != (SI_Long)0L ? 
			    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) 
			    == (SI_Long)1L : TRUEP(Qnil);
		if (temp);
		else
		    temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != 
			    (SI_Long)0L ? 
			    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) 
			    == (SI_Long)1L : TRUEP(Qnil);
		if (temp);
		else
		    temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : 
			    TRUEP(Qnil);
		if (temp);
		else
		    temp = 
			    INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) 
			    != (SI_Long)0L;
		if (temp);
		else if (CONSP(gensymed_symbol)) {
		    gensymed_symbol = M_CDR(gensymed_symbol);
		    temp = EQ(gensymed_symbol,Qtruth_value);
		    if (temp);
		    else
			temp = EQ(gensymed_symbol,Qiteration_state);
		    if (temp);
		    else if (SYMBOLP(gensymed_symbol)) {
			gensymed_symbol_1 = 
				CDR(Defined_evaluation_value_types);
			gensymed_symbol_2 = 
				SXHASH_SYMBOL_1(gensymed_symbol) & 
				IFIX(Most_positive_fixnum);
			gensymed_symbol_3 = (SI_Long)0L;
		      next_loop_3:
			if ( !TRUEP(gensymed_symbol_1))
			    goto end_loop_3;
			gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol_1,
				(SI_Long)0L));
			if (gensymed_symbol_2 < gensymed_symbol_3)
			    gensymed_symbol_1 = ISVREF(gensymed_symbol_1,
				    (SI_Long)1L);
			else if (gensymed_symbol_2 > gensymed_symbol_3)
			    gensymed_symbol_1 = ISVREF(gensymed_symbol_1,
				    (SI_Long)2L);
			else {
			    gensymed_symbol_1 = ISVREF(gensymed_symbol_1,
				    (SI_Long)3L);
			    gensymed_symbol_4 = Nil;
			  next_loop_4:
			    if ( !TRUEP(gensymed_symbol_1))
				goto end_loop_4;
			    gensymed_symbol_4 = 
				    M_CAR(M_CAR(gensymed_symbol_1));
			    if (EQ(gensymed_symbol,gensymed_symbol_4)) {
				temp = TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
				goto end_1;
			    }
			    gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
			    goto next_loop_4;
			  end_loop_4:
			    temp = TRUEP(Qnil);
			  end_1:;
			    goto end_2;
			}
			goto next_loop_3;
		      end_loop_3:
			temp = TRUEP(Qnil);
		      end_2:;
		    }
		    else
			temp = TRUEP(Nil);
		}
		else
		    temp = TRUEP(Nil);
		temp = temp ? 
			TRUEP(evaluation_value_eq(item_or_evaluation_value,
			element_value)) : TRUEP(Nil);
	    }
	}
	else
	    temp = TRUEP(Nil);
	if (temp)
	    duplicate_g2_list_element_stack_error(g2_list,index_1,
		    element_value,element_count,error_symbol,top_of_stack);
    }
    if ( !TRUEP(element_structure) || nth_element_structure_qm && 
	    allow_duplicates_qm)
	goto end_loop_2;
    element_count = FIXNUM_ADD1(element_count);
    goto next_loop_2;
  end_loop_2:
    if ( !TRUEP(nth_element_structure_qm)) {
	if (IFIX(element_count) != (SI_Long)0L) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(6,
		    string_constant_102,error_symbol,index_1,g2_list,
		    FIXNUM_ADD1(element_count),element_count);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(4,
		    string_constant_103,error_symbol,index_1,g2_list);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    change_g2_list_element_final_processing(nth_element_structure_qm,
	    item_or_evaluation_value);
    return VALUES_1(Qnil);
}

static Object Qchange;             /* change */

static Object string_constant_104;  /* "Neither array nor list?! ~NF" */

/* FUNCALL-CHANGE-NTH-ELEMENT-INST */
Object funcall_change_nth_element_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object g2_array_or_list, element, index_evaluation_value, index_1;
    Object sub_class_bit_vector, top_of_stack_1, message_1;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp;

    x_note_fn_call(210,116);
    g2_array_or_list = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    element = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    index_evaluation_value = ISVREF(local_stack,IFIX(top_of_stack));
    index_1 = index_evaluation_value;
    sub_class_bit_vector = ISVREF(ISVREF(g2_array_or_list,(SI_Long)1L),
	    (SI_Long)19L);
    superior_class_bit_number = IFIX(ISVREF(G2_array_class_description,
	    (SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_1 = (SI_Long)1L;
	gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	temp = (SI_Long)0L < gensymed_symbol;
    }
    else
	temp = TRUEP(Nil);
    if (temp)
	change_g2_array_element(g2_array_or_list,index_1,element,Qchange,
		top_of_stack);
    else {
	sub_class_bit_vector = ISVREF(ISVREF(g2_array_or_list,(SI_Long)1L),
		(SI_Long)19L);
	superior_class_bit_number = IFIX(ISVREF(G2_list_class_description,
		(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	if (temp)
	    change_g2_list_element(g2_array_or_list,index_1,element,
		    Qchange,top_of_stack);
	else {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_104,g2_array_or_list);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    return VALUES_1(Nil);
}

static Object string_constant_105;  /* "Cannot INSERT ~NA into the g2-list ~NF.  The element type of ~
				     *               the list, ~a, conflicts with the required type, ~NV, specified ~
				     *               in the action."
				     */

static Object string_constant_106;  /* "Cannot INSERT ~NA into the g2-list ~NF.  The type of this ~
				     *               element conflicts with the list element type ~a."
				     */

static Object string_constant_107;  /* "Cannot insert ~NA at the beginning of ~NF.  ~NA is already an ~
				     *                  element and the g2-list does not allow duplicate elements."
				     */

static Object string_constant_108;  /* "Cannot insert ~NA at the end of ~NF.  ~NA is already an ~
				     *                 element and the g2-list does not allow duplicate elements."
				     */

static Object string_constant_109;  /* "Cannot insert ~NA into ~NF." */

static Object string_constant_110;  /* "Cannot insert ~NA ~a ~NA in ~NF." */

static Object string_constant_111;  /* "  ~NA is not an element of the g2-list." */

static Object string_constant_112;  /* "  ~NA is already an element and the g2-list does not ~
				     *                          allow duplicate elements."
				     */

/* FUNCALL-G2-LIST-INSERT-EXPRESSION-INST */
Object funcall_g2_list_insert_expression_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object g2_list, required_element_type_arg, required_element_type;
    Object list_element_type, element_1_arg, insertion_type_arg;
    Object insertion_type, element_2_arg, no_insert_but_no_error_qm;
    Object top_of_stack_1, message_1, result_flag, text_string, snapshots;
    Object snapshots_of_related_blocks, note_blocks_in_tformat;
    Object current_wide_string_list, wide_string_bv16, current_wide_string;
    Object fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    char temp;
    Declare_special(7);

    x_note_fn_call(210,117);
    g2_list = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)4L);
    required_element_type_arg = ISVREF(local_stack,IFIX(top_of_stack) - 
	    (SI_Long)3L);
    required_element_type = required_element_type_arg;
    list_element_type = ISVREF(g2_list,(SI_Long)21L);
    element_1_arg = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    insertion_type_arg = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    insertion_type = insertion_type_arg;
    element_2_arg = ISVREF(local_stack,IFIX(top_of_stack));
    no_insert_but_no_error_qm = Nil;
    if ( 
	    !TRUEP(required_datum_type_ok_for_g2_list_or_array_p(required_element_type,
	    ISVREF(g2_list,(SI_Long)21L),T))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(5,string_constant_105,
		element_1_arg,g2_list,ISVREF(g2_list,(SI_Long)21L),
		required_element_type);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if ( !TRUEP(datum_ok_for_g2_list_or_array_p(element_1_arg,
	    list_element_type))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(4,string_constant_106,
		element_1_arg,g2_list,ISVREF(g2_list,(SI_Long)21L));
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if (EQ(insertion_type,Qbeginning)) {
	temp = TRUEP(g2_list_insert_at_beginning(element_1_arg,g2_list));
	if (temp);
	else {
	    no_insert_but_no_error_qm = 
		    insert_action_duplicate_element_backward_compatibility_p();
	    temp = TRUEP(no_insert_but_no_error_qm);
	}
	if ( !temp) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(4,
		    string_constant_107,element_1_arg,g2_list,element_1_arg);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else if (EQ(insertion_type,Qend)) {
	temp = TRUEP(g2_list_insert_at_end(2,element_1_arg,g2_list));
	if (temp);
	else {
	    no_insert_but_no_error_qm = 
		    insert_action_duplicate_element_backward_compatibility_p();
	    temp = TRUEP(no_insert_but_no_error_qm);
	}
	if ( !temp) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(4,
		    string_constant_108,element_1_arg,g2_list,element_1_arg);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else {
	if (EQ(insertion_type,Qbefore))
	    result_flag = g2_list_insert_before(element_1_arg,
		    element_2_arg,g2_list,Nil);
	else if (EQ(insertion_type,Qafter))
	    result_flag = g2_list_insert_after(element_1_arg,element_2_arg,
		    g2_list,Nil);
	else
	    result_flag = FIX((SI_Long)0L);
	if (EQ(result_flag,FIX((SI_Long)1L)));
	else if (EQ(result_flag,FIX((SI_Long)0L))) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(3,
		    string_constant_109,element_1_arg,g2_list);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    top_of_stack_1 = top_of_stack;
	    text_string = Nil;
	    snapshots = Nil;
	    snapshots_of_related_blocks = Nil;
	    note_blocks_in_tformat = 
		    SYMBOL_FUNCTION(Qrecord_block_for_tformat);
	    PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
	      PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,
		      5);
		current_wide_string_list = Qdo_not_use;
		PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,
			4);
		  wide_string_bv16 = 
			  allocate_byte_vector_16(FIX((SI_Long)2048L + 
			  (SI_Long)3L));
		  bv16_length = 
			  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wide_string_bv16));
		  aref_arg_2 = bv16_length - (SI_Long)2L;
		  aref_new_value = (SI_Long)2048L & (SI_Long)65535L;
		  UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,
			  aref_new_value);
		  aref_arg_2 = bv16_length - (SI_Long)1L;
		  aref_new_value = (SI_Long)57344L | (SI_Long)0L;
		  UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,
			  aref_new_value);
		  UBYTE_16_ISASET_1(wide_string_bv16,(SI_Long)2048L,
			  (SI_Long)0L);
		  current_wide_string = wide_string_bv16;
		  PUSH_SPECIAL(Current_wide_string,current_wide_string,3);
		    fill_pointer_for_current_wide_string = FIX((SI_Long)0L);
		    PUSH_SPECIAL(Fill_pointer_for_current_wide_string,fill_pointer_for_current_wide_string,
			    2);
		      length_1 = 
			      IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
		      total_length_of_current_wide_string = 
			      FIX(UBYTE_16_ISAREF_1(Current_wide_string,
			      length_1 - (SI_Long)2L) + 
			      ((UBYTE_16_ISAREF_1(Current_wide_string,
			      length_1 - (SI_Long)1L) & (SI_Long)8191L) << 
			      (SI_Long)16L));
		      PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
			      1);
			current_twriting_output_type = Qwide_string;
			PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
				0);
			  tformat(5,string_constant_110,element_1_arg,
				  insertion_type,element_2_arg,g2_list);
			  if (EQ(result_flag,FIX((SI_Long)-1L)))
			      tformat(2,string_constant_111,element_2_arg);
			  else if (EQ(result_flag,FIX((SI_Long)-2L)))
			      tformat(2,string_constant_112,element_1_arg);
			  text_string = copy_out_current_wide_string();
			POP_SPECIAL();
		      POP_SPECIAL();
		    POP_SPECIAL();
		  POP_SPECIAL();
		POP_SPECIAL();
		snapshots = Snapshots_of_related_blocks;
		Snapshots_of_related_blocks = Nil;
		if (Snapshots_of_related_blocks) {
		    reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
		    Snapshots_of_related_blocks = Nil;
		}
	      POP_SPECIAL();
	    POP_SPECIAL();
	    message_1 = make_error_text(text_string,snapshots);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    if (no_insert_but_no_error_qm) {
	if ( !(FIXNUMP(element_1_arg) || SYMBOLP(element_1_arg) || 
		SIMPLE_VECTOR_P(element_1_arg)))
	    reclaim_if_evaluation_value_1(element_1_arg);
    }
    if ( !(FIXNUMP(element_2_arg) || SYMBOLP(element_2_arg) || 
	    SIMPLE_VECTOR_P(element_2_arg)))
	reclaim_if_evaluation_value_1(element_2_arg);
    return VALUES_1(Nil);
}

static Object string_constant_113;  /* "Cannot INSERT ~NA into the g2-list ~NF.  The element type of the ~
				     *               list, ~a, conflicts with the required type, ~NV, specified in ~
				     *               the action."
				     */

static Object string_constant_114;  /* "Cannot INSERT ~NA into the g2-list ~NF.  The type of this ~
				     *               element conflicts with the list element type, ~a."
				     */

static Object string_constant_115;  /* "Cannot insert ~NA at the beginning of ~NF.  ~NA is already an ~
				     *                 element and the g2-list does not allow duplicate elements."
				     */

/* FUNCALL-G2-LIST-INSERT-DESIGNATION-INST */
Object funcall_g2_list_insert_designation_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object g2_list, required_element_type_arg, required_element_type;
    Object list_element_type, element_1, insertion_type_arg, insertion_type;
    Object element_2_qm, no_insert_but_no_error_qm, top_of_stack_1, message_1;
    Object result_flag, text_string, snapshots, snapshots_of_related_blocks;
    Object note_blocks_in_tformat, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    char temp;
    Declare_special(7);

    x_note_fn_call(210,118);
    g2_list = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)4L);
    required_element_type_arg = ISVREF(local_stack,IFIX(top_of_stack) - 
	    (SI_Long)3L);
    required_element_type = required_element_type_arg;
    list_element_type = ISVREF(g2_list,(SI_Long)21L);
    element_1 = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    insertion_type_arg = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    insertion_type = insertion_type_arg;
    element_2_qm = ISVREF(local_stack,IFIX(top_of_stack));
    no_insert_but_no_error_qm = Nil;
    if ( 
	    !TRUEP(required_item_type_ok_for_g2_list_or_array_p(required_element_type,
	    ISVREF(g2_list,(SI_Long)21L),T))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(5,string_constant_113,
		element_1,g2_list,list_element_type,required_element_type);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if ( !TRUEP(item_ok_for_g2_list_or_array_p(element_1,
	    list_element_type))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(4,string_constant_114,
		element_1,g2_list,list_element_type);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if (EQ(insertion_type,Qbeginning)) {
	temp = TRUEP(g2_list_insert_at_beginning(element_1,g2_list));
	if (temp);
	else {
	    no_insert_but_no_error_qm = 
		    insert_action_duplicate_element_backward_compatibility_p();
	    temp = TRUEP(no_insert_but_no_error_qm);
	}
	if ( !temp) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(4,
		    string_constant_115,element_1,g2_list,element_1);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else if (EQ(insertion_type,Qend)) {
	temp = TRUEP(g2_list_insert_at_end(2,element_1,g2_list));
	if (temp);
	else {
	    no_insert_but_no_error_qm = 
		    insert_action_duplicate_element_backward_compatibility_p();
	    temp = TRUEP(no_insert_but_no_error_qm);
	}
	if ( !temp) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(4,
		    string_constant_108,element_1,g2_list,element_1);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else {
	if (EQ(insertion_type,Qbefore))
	    result_flag = g2_list_insert_before(element_1,element_2_qm,
		    g2_list,Nil);
	else if (EQ(insertion_type,Qafter))
	    result_flag = g2_list_insert_after(element_1,element_2_qm,
		    g2_list,Nil);
	else
	    result_flag = FIX((SI_Long)0L);
	if (EQ(result_flag,FIX((SI_Long)1L)));
	else if (EQ(result_flag,FIX((SI_Long)0L))) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(3,
		    string_constant_109,element_1,g2_list);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    top_of_stack_1 = top_of_stack;
	    text_string = Nil;
	    snapshots = Nil;
	    snapshots_of_related_blocks = Nil;
	    note_blocks_in_tformat = 
		    SYMBOL_FUNCTION(Qrecord_block_for_tformat);
	    PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
	      PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,
		      5);
		current_wide_string_list = Qdo_not_use;
		PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,
			4);
		  wide_string_bv16 = 
			  allocate_byte_vector_16(FIX((SI_Long)2048L + 
			  (SI_Long)3L));
		  bv16_length = 
			  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wide_string_bv16));
		  aref_arg_2 = bv16_length - (SI_Long)2L;
		  aref_new_value = (SI_Long)2048L & (SI_Long)65535L;
		  UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,
			  aref_new_value);
		  aref_arg_2 = bv16_length - (SI_Long)1L;
		  aref_new_value = (SI_Long)57344L | (SI_Long)0L;
		  UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,
			  aref_new_value);
		  UBYTE_16_ISASET_1(wide_string_bv16,(SI_Long)2048L,
			  (SI_Long)0L);
		  current_wide_string = wide_string_bv16;
		  PUSH_SPECIAL(Current_wide_string,current_wide_string,3);
		    fill_pointer_for_current_wide_string = FIX((SI_Long)0L);
		    PUSH_SPECIAL(Fill_pointer_for_current_wide_string,fill_pointer_for_current_wide_string,
			    2);
		      length_1 = 
			      IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
		      total_length_of_current_wide_string = 
			      FIX(UBYTE_16_ISAREF_1(Current_wide_string,
			      length_1 - (SI_Long)2L) + 
			      ((UBYTE_16_ISAREF_1(Current_wide_string,
			      length_1 - (SI_Long)1L) & (SI_Long)8191L) << 
			      (SI_Long)16L));
		      PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
			      1);
			current_twriting_output_type = Qwide_string;
			PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
				0);
			  tformat(5,string_constant_110,element_1,
				  insertion_type,element_2_qm,g2_list);
			  if (EQ(result_flag,FIX((SI_Long)-1L)))
			      tformat(2,string_constant_111,element_2_qm);
			  else if (EQ(result_flag,FIX((SI_Long)-2L)))
			      tformat(2,string_constant_112,element_1);
			  text_string = copy_out_current_wide_string();
			POP_SPECIAL();
		      POP_SPECIAL();
		    POP_SPECIAL();
		  POP_SPECIAL();
		POP_SPECIAL();
		snapshots = Snapshots_of_related_blocks;
		Snapshots_of_related_blocks = Nil;
		if (Snapshots_of_related_blocks) {
		    reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
		    Snapshots_of_related_blocks = Nil;
		}
	      POP_SPECIAL();
	    POP_SPECIAL();
	    message_1 = make_error_text(text_string,snapshots);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    if (no_insert_but_no_error_qm) {
	if ( !(FIXNUMP(element_1) || SYMBOLP(element_1) || 
		SIMPLE_VECTOR_P(element_1)))
	    reclaim_if_evaluation_value_1(element_1);
    }
    if ( !(FIXNUMP(element_2_qm) || SYMBOLP(element_2_qm) || 
	    SIMPLE_VECTOR_P(element_2_qm)))
	reclaim_if_evaluation_value_1(element_2_qm);
    return VALUES_1(Nil);
}

static Object Qbefore_element;     /* before-element */

static Object Qafter_element;      /* after-element */

static Object list_constant_14;    /* # */

static Object string_constant_116;  /* " index ~NA does not designate an element of the g2-list." */

/* FUNCALL-G2-LIST-INSERT-INST */
Object funcall_g2_list_insert_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object g2_list, list_element_type, new_element, existing_element_qm;
    Object insertion_type_arg, insertion_type, no_insert_but_no_error_qm;
    Object top_of_stack_1, message_1, result_flag, text_string, snapshots;
    Object snapshots_of_related_blocks, note_blocks_in_tformat;
    Object current_wide_string_list, wide_string_bv16, current_wide_string;
    Object fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    char temp;
    Declare_special(7);

    x_note_fn_call(210,119);
    g2_list = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)3L);
    list_element_type = ISVREF(g2_list,(SI_Long)21L);
    new_element = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    existing_element_qm = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    insertion_type_arg = ISVREF(local_stack,IFIX(top_of_stack));
    insertion_type = insertion_type_arg;
    no_insert_but_no_error_qm = Nil;
    if ( !TRUEP(g2_list_or_array_element_ok_p(new_element,
		list_element_type))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(4,string_constant_106,
		new_element,g2_list,ISVREF(g2_list,(SI_Long)21L));
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if (EQ(insertion_type,Qbeginning)) {
	temp = TRUEP(g2_list_insert_at_beginning(new_element,g2_list));
	if (temp);
	else {
	    no_insert_but_no_error_qm = 
		    insert_action_duplicate_element_backward_compatibility_p();
	    temp = TRUEP(no_insert_but_no_error_qm);
	}
	if ( !temp) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(4,
		    string_constant_115,new_element,g2_list,new_element);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else if (EQ(insertion_type,Qend)) {
	temp = TRUEP(g2_list_insert_at_end(2,new_element,g2_list));
	if (temp);
	else {
	    no_insert_but_no_error_qm = 
		    insert_action_duplicate_element_backward_compatibility_p();
	    temp = TRUEP(no_insert_but_no_error_qm);
	}
	if ( !temp) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(4,
		    string_constant_108,new_element,g2_list,new_element);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else {
	if (EQ(insertion_type,Qbefore))
	    result_flag = g2_list_insert_before(new_element,
		    existing_element_qm,g2_list,Nil);
	else if (EQ(insertion_type,Qafter))
	    result_flag = g2_list_insert_after(new_element,
		    existing_element_qm,g2_list,Nil);
	else if (EQ(insertion_type,Qbefore_element))
	    result_flag = g2_list_insert_before(new_element,
		    existing_element_qm,g2_list,T);
	else if (EQ(insertion_type,Qafter_element))
	    result_flag = g2_list_insert_after(new_element,
		    existing_element_qm,g2_list,T);
	else
	    result_flag = FIX((SI_Long)0L);
	if (EQ(result_flag,FIX((SI_Long)1L)));
	else if (EQ(result_flag,FIX((SI_Long)0L))) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(3,
		    string_constant_109,new_element,g2_list);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    top_of_stack_1 = top_of_stack;
	    text_string = Nil;
	    snapshots = Nil;
	    snapshots_of_related_blocks = Nil;
	    note_blocks_in_tformat = 
		    SYMBOL_FUNCTION(Qrecord_block_for_tformat);
	    PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
	      PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,
		      5);
		current_wide_string_list = Qdo_not_use;
		PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,
			4);
		  wide_string_bv16 = 
			  allocate_byte_vector_16(FIX((SI_Long)2048L + 
			  (SI_Long)3L));
		  bv16_length = 
			  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wide_string_bv16));
		  aref_arg_2 = bv16_length - (SI_Long)2L;
		  aref_new_value = (SI_Long)2048L & (SI_Long)65535L;
		  UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,
			  aref_new_value);
		  aref_arg_2 = bv16_length - (SI_Long)1L;
		  aref_new_value = (SI_Long)57344L | (SI_Long)0L;
		  UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,
			  aref_new_value);
		  UBYTE_16_ISASET_1(wide_string_bv16,(SI_Long)2048L,
			  (SI_Long)0L);
		  current_wide_string = wide_string_bv16;
		  PUSH_SPECIAL(Current_wide_string,current_wide_string,3);
		    fill_pointer_for_current_wide_string = FIX((SI_Long)0L);
		    PUSH_SPECIAL(Fill_pointer_for_current_wide_string,fill_pointer_for_current_wide_string,
			    2);
		      length_1 = 
			      IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
		      total_length_of_current_wide_string = 
			      FIX(UBYTE_16_ISAREF_1(Current_wide_string,
			      length_1 - (SI_Long)2L) + 
			      ((UBYTE_16_ISAREF_1(Current_wide_string,
			      length_1 - (SI_Long)1L) & (SI_Long)8191L) << 
			      (SI_Long)16L));
		      PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
			      1);
			current_twriting_output_type = Qwide_string;
			PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
				0);
			  tformat(5,string_constant_110,new_element,
				  insertion_type,existing_element_qm,g2_list);
			  if (EQ(result_flag,FIX((SI_Long)-1L))) {
			      if (memq_function(insertion_type,
				      list_constant_14))
				  tformat(2,string_constant_116,
					  existing_element_qm);
			      else
				  tformat(2,string_constant_111,
					  existing_element_qm);
			  }
			  else if (EQ(result_flag,FIX((SI_Long)-2L)))
			      tformat(2,string_constant_112,new_element);
			  text_string = copy_out_current_wide_string();
			POP_SPECIAL();
		      POP_SPECIAL();
		    POP_SPECIAL();
		  POP_SPECIAL();
		POP_SPECIAL();
		snapshots = Snapshots_of_related_blocks;
		Snapshots_of_related_blocks = Nil;
		if (Snapshots_of_related_blocks) {
		    reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
		    Snapshots_of_related_blocks = Nil;
		}
	      POP_SPECIAL();
	    POP_SPECIAL();
	    message_1 = make_error_text(text_string,snapshots);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    if (no_insert_but_no_error_qm) {
	if ( !(FIXNUMP(new_element) || SYMBOLP(new_element) || 
		SIMPLE_VECTOR_P(new_element)))
	    reclaim_if_evaluation_value_1(new_element);
    }
    if ( !(FIXNUMP(existing_element_qm) || SYMBOLP(existing_element_qm) || 
	    SIMPLE_VECTOR_P(existing_element_qm)))
	reclaim_if_evaluation_value_1(existing_element_qm);
    return VALUES_1(Nil);
}

static Object array_constant_86;   /* # */

static Object string_constant_117;  /* "the first ~a " */

static Object string_constant_118;  /* "the second ~a " */

static Object string_constant_119;  /* "~NA " */

static Object array_constant_87;   /* # */

static Object string_constant_120;  /* "from ~NF.  The element type, ~a, conflicts with ~a ~
				     *                 the element-type of the g2-list."
				     */

static Object string_constant_121;  /* "Cannot REMOVE ~NA from the g2-list ~NF.  The type of ~
				     *                         this element conflicts with the list element type, ~a."
				     */

static Object string_constant_122;  /* "Cannot REMOVE element ~NA from ~NF.  This element is not in the ~
				     *                         g2-list."
				     */

static Object Qremove_element;     /* remove-element */

/* FUNCALL-G2-LIST-REMOVE-EXPRESSION-INST */
Object funcall_g2_list_remove_expression_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object g2_list, required_element_type_arg, removal_type_arg;
    Object element_arg_qm, required_element_type, removal_type, top_of_stack_1;
    Object text_string, snapshots, snapshots_of_related_blocks;
    Object note_blocks_in_tformat, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object message_1;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    Declare_special(7);

    x_note_fn_call(210,120);
    g2_list = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)3L);
    required_element_type_arg = ISVREF(local_stack,IFIX(top_of_stack) - 
	    (SI_Long)2L);
    removal_type_arg = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    element_arg_qm = ISVREF(local_stack,IFIX(top_of_stack));
    required_element_type = required_element_type_arg;
    removal_type = removal_type_arg;
    if ( !TRUEP(g2_list_or_array_type_ok_p(required_element_type,
	    ISVREF(g2_list,(SI_Long)21L),T))) {
	top_of_stack_1 = top_of_stack;
	text_string = Nil;
	snapshots = Nil;
	snapshots_of_related_blocks = Nil;
	note_blocks_in_tformat = SYMBOL_FUNCTION(Qrecord_block_for_tformat);
	PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
	  PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,
		  5);
	    current_wide_string_list = Qdo_not_use;
	    PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,4);
	      wide_string_bv16 = 
		      allocate_byte_vector_16(FIX((SI_Long)2048L + 
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
		  length_1 = 
			  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
		  total_length_of_current_wide_string = 
			  FIX(UBYTE_16_ISAREF_1(Current_wide_string,
			  length_1 - (SI_Long)2L) + 
			  ((UBYTE_16_ISAREF_1(Current_wide_string,length_1 
			  - (SI_Long)1L) & (SI_Long)8191L) << (SI_Long)16L));
		  PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
			  1);
		    current_twriting_output_type = Qwide_string;
		    PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
			    0);
		      twrite_beginning_of_wide_string(array_constant_86,
			      FIX((SI_Long)14L));
		      if (EQ(removal_type,Qfirst))
			  tformat(2,string_constant_117,required_element_type);
		      else if (EQ(removal_type,Qsecond))
			  tformat(2,string_constant_118,required_element_type);
		      else if (EQ(removal_type,Qelement))
			  tformat(2,string_constant_119,element_arg_qm);
		      else
			  twrite_beginning_of_wide_string(array_constant_87,
				  FIX((SI_Long)12L));
		      tformat(4,string_constant_120,g2_list,
			      required_element_type,ISVREF(g2_list,
			      (SI_Long)21L));
		      text_string = copy_out_current_wide_string();
		    POP_SPECIAL();
		  POP_SPECIAL();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	    snapshots = Snapshots_of_related_blocks;
	    Snapshots_of_related_blocks = Nil;
	    if (Snapshots_of_related_blocks) {
		reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
		Snapshots_of_related_blocks = Nil;
	    }
	  POP_SPECIAL();
	POP_SPECIAL();
	message_1 = make_error_text(text_string,snapshots);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if (EQ(removal_type,Qfirst))
	g2_list_remove_first(2,g2_list,required_element_type);
    else if (EQ(removal_type,Qlast))
	g2_list_remove_last(2,g2_list,required_element_type);
    else if (EQ(removal_type,Qelement)) {
	if ( !TRUEP(datum_ok_for_g2_list_or_array_p(element_arg_qm,
		ISVREF(g2_list,(SI_Long)21L)))) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(4,
		    string_constant_121,element_arg_qm,g2_list,
		    ISVREF(g2_list,(SI_Long)21L));
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else if ( !TRUEP(g2_list_remove(element_arg_qm,Nil,g2_list))) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(3,
		    string_constant_122,element_arg_qm,g2_list);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else if (EQ(removal_type,Qquote) || EQ(removal_type,Qremove_element))
	g2_list_remove(element_arg_qm,T,g2_list);
    if ( !(FIXNUMP(element_arg_qm) || SYMBOLP(element_arg_qm) || 
	    SIMPLE_VECTOR_P(element_arg_qm)))
	reclaim_if_evaluation_value_1(element_arg_qm);
    return VALUES_1(Nil);
}

static Object string_constant_123;  /* "Cannot REMOVE ~NA from ~NF.  This element is not in the ~
				     *                         g2-list."
				     */

/* FUNCALL-G2-LIST-REMOVE-DESIGNATION-INST */
Object funcall_g2_list_remove_designation_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object g2_list, required_element_type_arg, removal_type_arg, element_item;
    Object required_element_type, removal_type, top_of_stack_1, text_string;
    Object snapshots, snapshots_of_related_blocks, note_blocks_in_tformat;
    Object current_wide_string_list, wide_string_bv16, current_wide_string;
    Object fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object message_1;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    Declare_special(7);

    x_note_fn_call(210,121);
    g2_list = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)3L);
    required_element_type_arg = ISVREF(local_stack,IFIX(top_of_stack) - 
	    (SI_Long)2L);
    removal_type_arg = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    element_item = ISVREF(local_stack,IFIX(top_of_stack));
    required_element_type = required_element_type_arg;
    removal_type = removal_type_arg;
    if ( 
	    !TRUEP(required_item_type_ok_for_g2_list_or_array_p(required_element_type,
	    ISVREF(g2_list,(SI_Long)21L),T))) {
	top_of_stack_1 = top_of_stack;
	text_string = Nil;
	snapshots = Nil;
	snapshots_of_related_blocks = Nil;
	note_blocks_in_tformat = SYMBOL_FUNCTION(Qrecord_block_for_tformat);
	PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
	  PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,
		  5);
	    current_wide_string_list = Qdo_not_use;
	    PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,4);
	      wide_string_bv16 = 
		      allocate_byte_vector_16(FIX((SI_Long)2048L + 
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
		  length_1 = 
			  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
		  total_length_of_current_wide_string = 
			  FIX(UBYTE_16_ISAREF_1(Current_wide_string,
			  length_1 - (SI_Long)2L) + 
			  ((UBYTE_16_ISAREF_1(Current_wide_string,length_1 
			  - (SI_Long)1L) & (SI_Long)8191L) << (SI_Long)16L));
		  PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
			  1);
		    current_twriting_output_type = Qwide_string;
		    PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
			    0);
		      twrite_beginning_of_wide_string(array_constant_86,
			      FIX((SI_Long)14L));
		      if (EQ(removal_type,Qelement))
			  tformat(2,string_constant_119,element_item);
		      else if (EQ(removal_type,Qfirst))
			  tformat(2,string_constant_117,required_element_type);
		      else if (EQ(removal_type,Qsecond))
			  tformat(2,string_constant_118,required_element_type);
		      else
			  twrite_beginning_of_wide_string(array_constant_87,
				  FIX((SI_Long)12L));
		      tformat(4,string_constant_120,g2_list,
			      required_element_type,ISVREF(g2_list,
			      (SI_Long)21L));
		      text_string = copy_out_current_wide_string();
		    POP_SPECIAL();
		  POP_SPECIAL();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	    snapshots = Snapshots_of_related_blocks;
	    Snapshots_of_related_blocks = Nil;
	    if (Snapshots_of_related_blocks) {
		reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
		Snapshots_of_related_blocks = Nil;
	    }
	  POP_SPECIAL();
	POP_SPECIAL();
	message_1 = make_error_text(text_string,snapshots);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if (EQ(removal_type,Qelement)) {
	if ( !TRUEP(item_ok_for_g2_list_or_array_p(element_item,
		ISVREF(g2_list,(SI_Long)21L)))) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(4,
		    string_constant_121,element_item,g2_list,
		    ISVREF(g2_list,(SI_Long)21L));
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else if ( !TRUEP(g2_list_remove(element_item,Nil,g2_list))) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(3,
		    string_constant_123,element_item,g2_list);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else;
    }
    else if (EQ(removal_type,Qfirst))
	g2_list_remove_first(2,g2_list,required_element_type);
    else if (EQ(removal_type,Qlast))
	g2_list_remove_last(2,g2_list,required_element_type);
    return VALUES_1(Nil);
}

static Object string_constant_124;  /* "from ~NF.  The element type, ~a, conflicts with ~a ~
				     *            , the element-type of the g2-list."
				     */

static Object string_constant_125;  /* "Cannot REMOVE ~NA from the g2-list ~NF.  The type of ~
				     *             this element conflicts with the list element type, ~a."
				     */

static Object string_constant_126;  /* "Cannot REMOVE element ~NA from ~NF, as it is not in the ~
				     *             g2-list."
				     */

static Object Qelement_position;   /* element-position */

static Object string_constant_127;  /* "Cannot REMOVE item at index ~NA from the g2-list ~NF, as there is ~
				     *             no item at that index"
				     */

/* FUNCALL-G2-LIST-REMOVE-INST */
Object funcall_g2_list_remove_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object g2_list, element_arg_qm, required_element_type_arg_qm;
    Object required_element_type_qm, removal_type_arg, removal_type;
    Object top_of_stack_1, text_string, snapshots, snapshots_of_related_blocks;
    Object note_blocks_in_tformat, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object message_1;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    Declare_special(7);

    x_note_fn_call(210,122);
    g2_list = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)3L);
    element_arg_qm = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    required_element_type_arg_qm = ISVREF(local_stack,
	    IFIX(FIXNUM_SUB1(top_of_stack)));
    required_element_type_qm = required_element_type_arg_qm ? 
	    required_element_type_arg_qm : Qnil;
    removal_type_arg = ISVREF(local_stack,IFIX(top_of_stack));
    removal_type = removal_type_arg;
    if (required_element_type_qm &&  
	    !TRUEP(g2_list_or_array_type_ok_p(required_element_type_qm,
	    ISVREF(g2_list,(SI_Long)21L),T))) {
	top_of_stack_1 = top_of_stack;
	text_string = Nil;
	snapshots = Nil;
	snapshots_of_related_blocks = Nil;
	note_blocks_in_tformat = SYMBOL_FUNCTION(Qrecord_block_for_tformat);
	PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
	  PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,
		  5);
	    current_wide_string_list = Qdo_not_use;
	    PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,4);
	      wide_string_bv16 = 
		      allocate_byte_vector_16(FIX((SI_Long)2048L + 
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
		  length_1 = 
			  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
		  total_length_of_current_wide_string = 
			  FIX(UBYTE_16_ISAREF_1(Current_wide_string,
			  length_1 - (SI_Long)2L) + 
			  ((UBYTE_16_ISAREF_1(Current_wide_string,length_1 
			  - (SI_Long)1L) & (SI_Long)8191L) << (SI_Long)16L));
		  PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
			  1);
		    current_twriting_output_type = Qwide_string;
		    PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
			    0);
		      twrite_beginning_of_wide_string(array_constant_86,
			      FIX((SI_Long)14L));
		      if (EQ(removal_type,Qfirst))
			  tformat(2,string_constant_117,
				  required_element_type_qm);
		      else if (EQ(removal_type,Qsecond))
			  tformat(2,string_constant_118,
				  required_element_type_qm);
		      else if (EQ(removal_type,Qelement))
			  tformat(2,string_constant_119,element_arg_qm);
		      else
			  twrite_beginning_of_wide_string(array_constant_87,
				  FIX((SI_Long)12L));
		      tformat(4,string_constant_124,g2_list,
			      required_element_type_qm,ISVREF(g2_list,
			      (SI_Long)21L));
		      text_string = copy_out_current_wide_string();
		    POP_SPECIAL();
		  POP_SPECIAL();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	    snapshots = Snapshots_of_related_blocks;
	    Snapshots_of_related_blocks = Nil;
	    if (Snapshots_of_related_blocks) {
		reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
		Snapshots_of_related_blocks = Nil;
	    }
	  POP_SPECIAL();
	POP_SPECIAL();
	message_1 = make_error_text(text_string,snapshots);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    if (EQ(removal_type,Qfirst))
	g2_list_remove_first(2,g2_list,required_element_type_qm);
    else if (EQ(removal_type,Qlast))
	g2_list_remove_last(2,g2_list,required_element_type_qm);
    else if (EQ(removal_type,Qelement)) {
	if ( !TRUEP(g2_list_or_array_element_ok_p(element_arg_qm,
		ISVREF(g2_list,(SI_Long)21L)))) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(4,
		    string_constant_125,element_arg_qm,g2_list,
		    ISVREF(g2_list,(SI_Long)21L));
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	if ( !TRUEP(g2_list_remove(element_arg_qm,T,g2_list))) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(3,
		    string_constant_126,element_arg_qm,g2_list);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else if (EQ(removal_type,Qelement_position)) {
	if ( !TRUEP(g2_list_remove(element_arg_qm,Qelement_position,
		    g2_list))) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(3,
		    string_constant_127,element_arg_qm,g2_list);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    if ( !(FIXNUMP(required_element_type_arg_qm) || 
	    SYMBOLP(required_element_type_arg_qm) || 
	    SIMPLE_VECTOR_P(required_element_type_arg_qm)))
	reclaim_if_evaluation_value_1(required_element_type_arg_qm);
    if ( !(FIXNUMP(element_arg_qm) || SYMBOLP(element_arg_qm) || 
	    SIMPLE_VECTOR_P(element_arg_qm)))
	reclaim_if_evaluation_value_1(element_arg_qm);
    return VALUES_1(Nil);
}

static Object string_constant_128;  /* "CREATE-EXPLANATION" */

/* FUNCALL-CREATE-EXPLANATION-INST */
Object funcall_create_explanation_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object svref_new_value;

    x_note_fn_call(210,123);
    if (Evaluating_simulator_procedure_qm)
	not_a_simulator_procedure_instruction(string_constant_128,
		top_of_stack);
    svref_new_value = create_explanation(ISVREF(local_stack,
	    IFIX(top_of_stack)));
    SVREF(local_stack,top_of_stack) = svref_new_value;
    return VALUES_1(Nil);
}

static Object Qfreeform_table;     /* freeform-table */

static Object string_constant_129;  /* "Cannot update ~NF, can only update kinds of displays." */

/* FUNCALL-UPDATE-INST */
Object funcall_update_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object frame_to_update, sub_class_bit_vector, gensymed_symbol_3;
    Object gensymed_symbol_4, gensymed_symbol_5, gensymed_symbol_6;
    Object gensymed_symbol_7, top_of_stack_1, message_1;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp;

    x_note_fn_call(210,124);
    frame_to_update = ISVREF(local_stack,IFIX(top_of_stack));
    sub_class_bit_vector = ISVREF(ISVREF(frame_to_update,(SI_Long)1L),
	    (SI_Long)19L);
    superior_class_bit_number = IFIX(ISVREF(Variable_class_description,
	    (SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_1 = (SI_Long)1L;
	gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	temp = (SI_Long)0L < gensymed_symbol;
    }
    else
	temp = TRUEP(Nil);
    if (temp)
	attempt_new_variable_value_collection(frame_to_update,
		Priority_of_current_task,T);
    else {
	temp = TRUEP(kind_of_cell_based_display_p(frame_to_update));
	if (temp);
	else {
	    gensymed_symbol_3 = 
		    lookup_global_or_kb_specific_property_value(Qfreeform_table,
		    Class_description_gkbprop);
	    if (gensymed_symbol_3) {
		sub_class_bit_vector = ISVREF(ISVREF(frame_to_update,
			(SI_Long)1L),(SI_Long)19L);
		superior_class_bit_number = IFIX(ISVREF(gensymed_symbol_3,
			(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_1 = (SI_Long)1L;
		    gensymed_symbol_2 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		    temp = (SI_Long)0L < gensymed_symbol;
		}
		else
		    temp = TRUEP(Nil);
	    }
	    else
		temp = TRUEP(Nil);
	}
	if (temp) {
	    schedule_g2_cell_array_update(frame_to_update);
	    gensymed_symbol_3 = 
		    lookup_global_or_kb_specific_property_value(Qtrend_chart,
		    Class_description_gkbprop);
	    if (gensymed_symbol_3) {
		sub_class_bit_vector = ISVREF(ISVREF(frame_to_update,
			(SI_Long)1L),(SI_Long)19L);
		superior_class_bit_number = IFIX(ISVREF(gensymed_symbol_3,
			(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_1 = (SI_Long)1L;
		    gensymed_symbol_2 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		    temp = (SI_Long)0L < gensymed_symbol;
		}
		else
		    temp = TRUEP(Nil);
	    }
	    else
		temp = TRUEP(Nil);
	    if (temp)
		update_trend_chart(4,frame_to_update,T,Nil,T);
	}
	else if (kind_of_display_p(frame_to_update)) {
	    gensymed_symbol_3 = 
		    ISVREF(ISVREF(ISVREF(ISVREF(frame_to_update,
		    (SI_Long)1L),(SI_Long)11L),(SI_Long)22L),(SI_Long)1L);
	    gensymed_symbol_4 = frame_to_update;
	    gensymed_symbol_5 = Nil;
	    gensymed_symbol_6 = Nil;
	    gensymed_symbol_7 = T;
	    inline_funcall_4(gensymed_symbol_3,gensymed_symbol_4,
		    gensymed_symbol_5,gensymed_symbol_6,gensymed_symbol_7);
	}
	else {
	    sub_class_bit_vector = ISVREF(ISVREF(frame_to_update,
		    (SI_Long)1L),(SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Chart_class_description,(SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_1 = (SI_Long)1L;
		gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		temp = (SI_Long)0L < gensymed_symbol;
	    }
	    else
		temp = TRUEP(Nil);
	    if (temp)
		update_chart(frame_to_update);
	    else {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_129,frame_to_update);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	}
    }
    return VALUES_1(Nil);
}

static Object string_constant_130;  /* "Cannot start procedure ~NF at priority ~a.  The priority must be in ~
				     *          the range 1 to 10."
				     */

static Object Qstart;              /* start */

static Object array_constant_88;   /* # */

static Object string_constant_131;  /* " at priority ~a" */

static Object array_constant_89;   /* # */

/* FUNCALL-START-INST */
Object funcall_start_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object stack_argument_count, priority_qm, wait_qm, procedure;
    Object new_code_body_invocation, top_of_stack_1, message_1, wait_copy_qm;
    Object temp, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object gensymed_symbol;
    SI_Long argument_count, top_of_arguments_index, procedure_stack_index;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    Declare_special(5);

    x_note_fn_call(210,125);
    stack_argument_count = ISVREF(local_stack,IFIX(top_of_stack));
    argument_count = IFIX(stack_argument_count) - (SI_Long)3L;
    priority_qm = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    wait_qm = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    top_of_arguments_index = IFIX(top_of_stack) - (SI_Long)3L;
    procedure_stack_index = top_of_arguments_index - argument_count;
    procedure = ISVREF(local_stack,procedure_stack_index);
    new_code_body_invocation = Nil;
    if ( !( !TRUEP(priority_qm) || IFIX(priority_qm) >= (SI_Long)1L && 
	    IFIX(priority_qm) <= (SI_Long)10L)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(3,string_constant_130,
		procedure,priority_qm);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    wait_copy_qm = FIXNUMP(wait_qm) || wait_qm && SYMBOLP(wait_qm) || 
	    SIMPLE_VECTOR_P(wait_qm) ? wait_qm : 
	    copy_if_evaluation_value_1(wait_qm);
    new_code_body_invocation = 
	    start_procedure_invocation_in_place(procedure,priority_qm,
	    wait_qm,local_stack,FIX(top_of_arguments_index),
	    FIX(argument_count),Nil,Nil,top_of_stack,Nil,Qstart);
    if (error_text_p(new_code_body_invocation))
	temp = new_code_body_invocation;
    else {
	if ((IFIX(Tracing_message_level) > (SI_Long)1L || 
		IFIX(Breakpoint_level) > (SI_Long)1L) &&  
		!TRUEP(Debugging_reset) && ISVREF(Debugging_parameters,
		(SI_Long)22L)) {
	    current_wide_string_list = Qdo_not_use;
	    PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,4);
	      wide_string_bv16 = 
		      allocate_byte_vector_16(FIX((SI_Long)2048L + 
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
		  length_1 = 
			  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
		  total_length_of_current_wide_string = 
			  FIX(UBYTE_16_ISAREF_1(Current_wide_string,
			  length_1 - (SI_Long)2L) + 
			  ((UBYTE_16_ISAREF_1(Current_wide_string,length_1 
			  - (SI_Long)1L) & (SI_Long)8191L) << (SI_Long)16L));
		  PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
			  1);
		    current_twriting_output_type = Qwide_string;
		    PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
			    0);
		      Forgive_long_procedure_instruction_qm = T;
		      twrite_beginning_of_wide_string(array_constant_88,
			      FIX((SI_Long)19L));
		      write_procedure_invocation_instance_from_slot(ISVREF(new_code_body_invocation,
			      (SI_Long)11L),Nil);
		      if (wait_copy_qm) {
			  twrite_beginning_of_wide_string(array_constant_55,
				  FIX((SI_Long)7L));
			  print_constant(2,wait_copy_qm,Qseconds);
		      }
		      if (priority_qm)
			  tformat(2,string_constant_131,priority_qm);
		      twrite_beginning_of_wide_string(array_constant_89,
			      FIX((SI_Long)1L));
		      gensymed_symbol = copy_out_current_wide_string();
		    POP_SPECIAL();
		  POP_SPECIAL();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	    write_major_trace_message_function(gensymed_symbol);
	}
	temp = Nil;
    }
    if ( !(FIXNUMP(wait_copy_qm) || SYMBOLP(wait_copy_qm) || 
	    SIMPLE_VECTOR_P(wait_copy_qm)))
	reclaim_if_evaluation_value_1(wait_copy_qm);
    return VALUES_1(temp);
}

static Object string_constant_132;  /* "Cannot start procedure ~NF across ~NF at priority ~a.  The priority ~
				     *          must be in the range 1 to 10."
				     */

static Object string_constant_133;  /* "~NF is a list or array that is not active, or has no elements, ~
				     *                      and so cannot be used as a pathway for ~
				     *                      a remote procedure call or remote procedure start."
				     */

static Object string_constant_134;  /* "~NF contained an element without the capability G2-TO-G2-DATA-INTERFACE or ~
				     *                      GSI-INTERFACE, and so cannot be used as a pathway for ~
				     *                      a remote procedure call or remote procedure start."
				     */

static Object string_constant_135;  /* "~NF did not have the capability G2-TO-G2-DATA-INTERFACE or ~
				     *          GSI-INTERFACE, and so cannot be used as a pathway for ~
				     *          a remote procedure call or remote procedure start."
				     */

static Object string_constant_136;  /* "Starting remote procedure ~NF(" */

static Object string_constant_137;  /* ") across ~NF" */

static Object string_constant_138;  /* " after ~NC" */

/* FUNCALL-START-RPC-INST */
Object funcall_start_rpc_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object stack_argument_count, priority_qm, wait_qm, icp_interface;
    Object remote_procedure, arguments, top_of_stack_1, message_1;
    Object sub_class_bit_vector, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object gensymed_symbol_3;
    SI_Long argument_count, top_of_arguments_index;
    SI_Long remote_procedure_stack_index, new_top_of_stack;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2, bv16_length, aref_arg_2;
    SI_Long aref_new_value, length_1;
    char temp;
    Declare_special(5);

    x_note_fn_call(210,126);
    stack_argument_count = ISVREF(local_stack,IFIX(top_of_stack));
    argument_count = IFIX(stack_argument_count) - (SI_Long)4L;
    priority_qm = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)3L);
    wait_qm = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    icp_interface = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    top_of_arguments_index = IFIX(top_of_stack) - (SI_Long)4L;
    remote_procedure_stack_index = top_of_arguments_index - argument_count;
    remote_procedure = ISVREF(local_stack,remote_procedure_stack_index);
    arguments = 
	    prepare_procedure_argument_list_for_stack_procedure(remote_procedure,
	    local_stack,FIX(top_of_arguments_index),FIX(argument_count),T);
    new_top_of_stack = remote_procedure_stack_index - (SI_Long)1L;
    if ( !( !TRUEP(priority_qm) || IFIX(priority_qm) >= (SI_Long)1L && 
	    IFIX(priority_qm) <= (SI_Long)10L)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(4,string_constant_132,
		remote_procedure,icp_interface,priority_qm);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    sub_class_bit_vector = ISVREF(ISVREF(icp_interface,(SI_Long)1L),
	    (SI_Long)19L);
    superior_class_bit_number = IFIX(ISVREF(G2_list_class_description,
	    (SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_1 = (SI_Long)1L;
	gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	temp = (SI_Long)0L < gensymed_symbol;
    }
    else
	temp = TRUEP(Nil);
    if (temp);
    else {
	sub_class_bit_vector = ISVREF(ISVREF(icp_interface,(SI_Long)1L),
		(SI_Long)19L);
	superior_class_bit_number = IFIX(ISVREF(G2_array_class_description,
		(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
    }
    if (temp) {
	sub_class_bit_vector = ISVREF(ISVREF(icp_interface,(SI_Long)1L),
		(SI_Long)19L);
	superior_class_bit_number = IFIX(ISVREF(G2_list_class_description,
		(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	if ((SI_Long)0L == (temp ? IFIX(g2_list_length(icp_interface)) : 
		IFIX(ISVREF(icp_interface,(SI_Long)20L)))) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_133,icp_interface);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else if ( 
		!TRUEP(all_elements_ok_for_parallel_rpc_start(icp_interface))) 
		    {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_134,icp_interface);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else if ( !(g2_to_g2_data_interface_p_function(icp_interface) || 
	    gsi_interface_p_function(icp_interface))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_135,
		icp_interface);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    if ((IFIX(Tracing_message_level) > (SI_Long)1L || 
	    IFIX(Breakpoint_level) > (SI_Long)1L) &&  
	    !TRUEP(Debugging_reset) && ISVREF(Debugging_parameters,
	    (SI_Long)22L)) {
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
		  Forgive_long_procedure_instruction_qm = T;
		  tformat(2,string_constant_136,remote_procedure);
		  write_procedure_argument_list(arguments);
		  tformat(2,string_constant_137,icp_interface);
		  if (wait_qm)
		      tformat(3,string_constant_138,wait_qm,Qseconds);
		  if (priority_qm)
		      tformat(2,string_constant_131,priority_qm);
		  twrite_beginning_of_wide_string(array_constant_89,
			  FIX((SI_Long)1L));
		  gensymed_symbol_3 = copy_out_current_wide_string();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
	write_major_trace_message_function(gensymed_symbol_3);
    }
    start_remote_procedure(remote_procedure,icp_interface,arguments,
	    wait_qm,priority_qm,FIX(new_top_of_stack));
    return VALUES_1(Nil);
}

/* FUNCALL-ABORT-INST */
Object funcall_abort_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    x_note_fn_call(210,127);
    abort_procedure_invocation(1,ISVREF(local_stack,IFIX(top_of_stack)));
    return VALUES_1(Nil);
}

static Object Qrequested;          /* requested */

/* FUNCALL-SHUT-DOWN-G2-INST */
Object funcall_shut_down_g2_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    x_note_fn_call(210,128);
    system_pause(0);
    shut_down_ab_process(1,Qrequested);
    return VALUES_1(Nil);
}

/* FUNCALL-CREATE-BY-CLONING-INST */
Object funcall_create_by_cloning_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object class_evaluation_symbol, class_1, item_to_clone, cloned_item_qm;

    x_note_fn_call(210,129);
    class_evaluation_symbol = ISVREF(local_stack,
	    IFIX(FIXNUM_SUB1(top_of_stack)));
    class_1 = class_evaluation_symbol;
    item_to_clone = ISVREF(local_stack,IFIX(top_of_stack));
    cloned_item_qm = create_by_cloning_action_internal(class_1,
	    item_to_clone,top_of_stack,T);
    top_of_stack = FIXNUM_SUB1(top_of_stack);
    SVREF(local_stack,top_of_stack) = cloned_item_qm;
    return VALUES_1(Nil);
}

static Object string_constant_139;  /* "Attempted to create an instance of ~a, but this class ~
				     *                 is not allowed to be created transiently."
				     */

static Object string_constant_140;  /* "Attempted to create an instance of ~a, but this class ~
				     *             is not allowed to be created transiently."
				     */

static Object string_constant_141;  /* "When creating transient instances of a subclass ~
				     *             of connection, you must not clone it and must use the additional ~
				     *             CONNECTED grammar to initially connect it to something."
				     */

static Object Qclone_block;        /* clone-block */

static Object string_constant_142;  /* "Cannot create an item by cloning ~NF.  The clone action has been ~
				     *             restricted for this item."
				     */

static Object string_constant_143;  /* "Error in CREATE BY CLONING of ~NF." */

/* CREATE-BY-CLONING-ACTION-INTERNAL */
Object create_by_cloning_action_internal(class_1,item_to_clone,
	    top_of_stack,validate_environment_p)
    Object class_1, item_to_clone, top_of_stack, validate_environment_p;
{
    Object class_description_qm, newly_cloned_item_qm, top_of_stack_1;
    Object message_1, temp, gensymed_symbol, gensymed_symbol_1;
    Object gensymed_symbol_4, temp_1, new_cons, global_properties;
    Object kb_properties, kb_specific_value, resulting_value;
    Object sub_class_bit_vector, x2, type_name, svref_arg_1;
    Object frame_serial_number_setf_arg, old, new_1, svref_new_value;
    SI_Long gensymed_symbol_2, gensymed_symbol_3, superior_class_bit_number;
    SI_Long sub_class_vector_index, gensymed_symbol_5;
    char temp_2;

    x_note_fn_call(210,130);
    class_description_qm = 
	    lookup_global_or_kb_specific_property_value(class_1,
	    Class_description_gkbprop);
    newly_cloned_item_qm = Nil;
    if ( !TRUEP(class_description_qm)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_31,
		class_1);
	temp = raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if ( !TRUEP(class_can_be_transient_p(class_description_qm))) {
	gensymed_symbol = CDR(Symbol_properties_table);
	gensymed_symbol_1 = class_1;
	gensymed_symbol_2 = SXHASH_SYMBOL_1(class_1) & 
		IFIX(Most_positive_fixnum);
	gensymed_symbol_3 = (SI_Long)0L;
      next_loop:
	if ( !TRUEP(gensymed_symbol))
	    goto end_loop;
	gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
	if (gensymed_symbol_2 < gensymed_symbol_3)
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
	else if (gensymed_symbol_2 > gensymed_symbol_3)
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
	else {
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
	    gensymed_symbol_4 = Nil;
	  next_loop_1:
	    if ( !TRUEP(gensymed_symbol))
		goto end_loop_1;
	    gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
	    if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
		gensymed_symbol = M_CDR(M_CAR(gensymed_symbol));
		goto end_1;
	    }
	    gensymed_symbol = M_CDR(gensymed_symbol);
	    goto next_loop_1;
	  end_loop_1:
	    gensymed_symbol = Qnil;
	  end_1:;
	    goto end_2;
	}
	goto next_loop;
      end_loop:
	gensymed_symbol = Qnil;
      end_2:;
	if ( !TRUEP(gensymed_symbol)) {
	    gensymed_symbol = class_1;
	    temp_1 = Symbol_properties_table;
	    temp = FIX(SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum));
	    new_cons = Available_gensym_conses;
	    if (new_cons) {
		Available_gensym_conses = M_CDR(new_cons);
		gensymed_symbol_1 = new_cons;
	    }
	    else
		gensymed_symbol_1 = Nil;
	    if ( !TRUEP(gensymed_symbol_1))
		gensymed_symbol_1 = replenish_gensym_cons_pool();
	    M_CAR(gensymed_symbol_1) = Qsymbol_properties_hash_table;
	    M_CDR(gensymed_symbol_1) = Nil;
	    inline_note_allocate_cons(gensymed_symbol_1,Qab_gensym);
	    gensymed_symbol = set_balanced_binary_tree_entry(temp_1,Qeq,
		    Nil,T,gensymed_symbol,temp,gensymed_symbol_1);
	}
	global_properties = gensymed_symbol;
	gensymed_symbol = CDR(global_properties);
	gensymed_symbol_1 = Current_kb_specific_property_list_property_name;
	gensymed_symbol_2 = 
		SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
		& IFIX(Most_positive_fixnum);
	gensymed_symbol_3 = (SI_Long)0L;
      next_loop_2:
	if ( !TRUEP(gensymed_symbol))
	    goto end_loop_2;
	gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
	if (gensymed_symbol_2 < gensymed_symbol_3)
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
	else if (gensymed_symbol_2 > gensymed_symbol_3)
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
	else {
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
	    gensymed_symbol_4 = Nil;
	  next_loop_3:
	    if ( !TRUEP(gensymed_symbol))
		goto end_loop_3;
	    gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
	    if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
		kb_properties = M_CDR(M_CAR(gensymed_symbol));
		goto end_3;
	    }
	    gensymed_symbol = M_CDR(gensymed_symbol);
	    goto next_loop_3;
	  end_loop_3:
	    kb_properties = Qnil;
	  end_3:;
	    goto end_4;
	}
	goto next_loop_2;
      end_loop_2:
	kb_properties = Qnil;
      end_4:;
	if (kb_properties);
	else
	    kb_properties = Nil;
	if (kb_properties) {
	    gensymed_symbol = CDR(kb_properties);
	    gensymed_symbol_1 = Class_description_gkbprop;
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(Class_description_gkbprop) 
		    & IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_4:
	    if ( !TRUEP(gensymed_symbol))
		goto end_loop_4;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
	    else {
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_5:
		if ( !TRUEP(gensymed_symbol))
		    goto end_loop_5;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
		if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
		    kb_specific_value = M_CDR(M_CAR(gensymed_symbol));
		    goto end_5;
		}
		gensymed_symbol = M_CDR(gensymed_symbol);
		goto next_loop_5;
	      end_loop_5:
		kb_specific_value = Qnil;
	      end_5:;
		goto end_6;
	    }
	    goto next_loop_4;
	  end_loop_4:
	    kb_specific_value = Qnil;
	  end_6:;
	    if (kb_specific_value);
	    else
		kb_specific_value = No_specific_property_value;
	}
	else
	    kb_specific_value = No_specific_property_value;
	if ( !EQ(kb_specific_value,No_specific_property_value))
	    resulting_value = kb_specific_value;
	else {
	    gensymed_symbol = CDR(global_properties);
	    gensymed_symbol_1 = Class_description_gkbprop;
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(Class_description_gkbprop) 
		    & IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_6:
	    if ( !TRUEP(gensymed_symbol))
		goto end_loop_6;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
	    else {
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_7:
		if ( !TRUEP(gensymed_symbol))
		    goto end_loop_7;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
		if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
		    resulting_value = M_CDR(M_CAR(gensymed_symbol));
		    goto end_7;
		}
		gensymed_symbol = M_CDR(gensymed_symbol);
		goto next_loop_7;
	      end_loop_7:
		resulting_value = Qnil;
	      end_7:;
		goto end_8;
	    }
	    goto next_loop_6;
	  end_loop_6:
	    resulting_value = Qnil;
	  end_8:;
	    if (resulting_value);
	    else
		resulting_value = Nil;
	}
	gensymed_symbol = resulting_value;
	if (gensymed_symbol && ISVREF(gensymed_symbol,(SI_Long)16L)) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_139,class_1);
	    temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_31,class_1);
	    temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else if ( !TRUEP(class_can_be_transient_p(ISVREF(item_to_clone,
	    (SI_Long)1L)))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_140,
		ISVREF(ISVREF(item_to_clone,(SI_Long)1L),(SI_Long)1L));
	temp = raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else {
	gensymed_symbol = CDR(Symbol_properties_table);
	gensymed_symbol_1 = class_1;
	gensymed_symbol_2 = SXHASH_SYMBOL_1(class_1) & 
		IFIX(Most_positive_fixnum);
	gensymed_symbol_3 = (SI_Long)0L;
      next_loop_8:
	if ( !TRUEP(gensymed_symbol))
	    goto end_loop_8;
	gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
	if (gensymed_symbol_2 < gensymed_symbol_3)
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
	else if (gensymed_symbol_2 > gensymed_symbol_3)
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
	else {
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
	    gensymed_symbol_4 = Nil;
	  next_loop_9:
	    if ( !TRUEP(gensymed_symbol))
		goto end_loop_9;
	    gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
	    if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
		gensymed_symbol = M_CDR(M_CAR(gensymed_symbol));
		goto end_9;
	    }
	    gensymed_symbol = M_CDR(gensymed_symbol);
	    goto next_loop_9;
	  end_loop_9:
	    gensymed_symbol = Qnil;
	  end_9:;
	    goto end_10;
	}
	goto next_loop_8;
      end_loop_8:
	gensymed_symbol = Qnil;
      end_10:;
	if ( !TRUEP(gensymed_symbol)) {
	    gensymed_symbol = class_1;
	    temp_1 = Symbol_properties_table;
	    temp = FIX(SXHASH_SYMBOL_1(gensymed_symbol) & 
		    IFIX(Most_positive_fixnum));
	    new_cons = Available_gensym_conses;
	    if (new_cons) {
		Available_gensym_conses = M_CDR(new_cons);
		gensymed_symbol_1 = new_cons;
	    }
	    else
		gensymed_symbol_1 = Nil;
	    if ( !TRUEP(gensymed_symbol_1))
		gensymed_symbol_1 = replenish_gensym_cons_pool();
	    M_CAR(gensymed_symbol_1) = Qsymbol_properties_hash_table;
	    M_CDR(gensymed_symbol_1) = Nil;
	    inline_note_allocate_cons(gensymed_symbol_1,Qab_gensym);
	    gensymed_symbol = set_balanced_binary_tree_entry(temp_1,Qeq,
		    Nil,T,gensymed_symbol,temp,gensymed_symbol_1);
	}
	global_properties = gensymed_symbol;
	gensymed_symbol = CDR(global_properties);
	gensymed_symbol_1 = Current_kb_specific_property_list_property_name;
	gensymed_symbol_2 = 
		SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
		& IFIX(Most_positive_fixnum);
	gensymed_symbol_3 = (SI_Long)0L;
      next_loop_10:
	if ( !TRUEP(gensymed_symbol))
	    goto end_loop_10;
	gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
	if (gensymed_symbol_2 < gensymed_symbol_3)
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
	else if (gensymed_symbol_2 > gensymed_symbol_3)
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
	else {
	    gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
	    gensymed_symbol_4 = Nil;
	  next_loop_11:
	    if ( !TRUEP(gensymed_symbol))
		goto end_loop_11;
	    gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
	    if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
		kb_properties = M_CDR(M_CAR(gensymed_symbol));
		goto end_11;
	    }
	    gensymed_symbol = M_CDR(gensymed_symbol);
	    goto next_loop_11;
	  end_loop_11:
	    kb_properties = Qnil;
	  end_11:;
	    goto end_12;
	}
	goto next_loop_10;
      end_loop_10:
	kb_properties = Qnil;
      end_12:;
	if (kb_properties);
	else
	    kb_properties = Nil;
	if (kb_properties) {
	    gensymed_symbol = CDR(kb_properties);
	    gensymed_symbol_1 = Class_description_gkbprop;
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(Class_description_gkbprop) 
		    & IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_12:
	    if ( !TRUEP(gensymed_symbol))
		goto end_loop_12;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
	    else {
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_13:
		if ( !TRUEP(gensymed_symbol))
		    goto end_loop_13;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
		if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
		    kb_specific_value = M_CDR(M_CAR(gensymed_symbol));
		    goto end_13;
		}
		gensymed_symbol = M_CDR(gensymed_symbol);
		goto next_loop_13;
	      end_loop_13:
		kb_specific_value = Qnil;
	      end_13:;
		goto end_14;
	    }
	    goto next_loop_12;
	  end_loop_12:
	    kb_specific_value = Qnil;
	  end_14:;
	    if (kb_specific_value);
	    else
		kb_specific_value = No_specific_property_value;
	}
	else
	    kb_specific_value = No_specific_property_value;
	if ( !EQ(kb_specific_value,No_specific_property_value))
	    resulting_value = kb_specific_value;
	else {
	    gensymed_symbol = CDR(global_properties);
	    gensymed_symbol_1 = Class_description_gkbprop;
	    gensymed_symbol_2 = SXHASH_SYMBOL_1(Class_description_gkbprop) 
		    & IFIX(Most_positive_fixnum);
	    gensymed_symbol_3 = (SI_Long)0L;
	  next_loop_14:
	    if ( !TRUEP(gensymed_symbol))
		goto end_loop_14;
	    gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
	    if (gensymed_symbol_2 < gensymed_symbol_3)
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
	    else if (gensymed_symbol_2 > gensymed_symbol_3)
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
	    else {
		gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
		gensymed_symbol_4 = Nil;
	      next_loop_15:
		if ( !TRUEP(gensymed_symbol))
		    goto end_loop_15;
		gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
		if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
		    resulting_value = M_CDR(M_CAR(gensymed_symbol));
		    goto end_15;
		}
		gensymed_symbol = M_CDR(gensymed_symbol);
		goto next_loop_15;
	      end_loop_15:
		resulting_value = Qnil;
	      end_15:;
		goto end_16;
	    }
	    goto next_loop_14;
	  end_loop_14:
	    resulting_value = Qnil;
	  end_16:;
	    if (resulting_value);
	    else
		resulting_value = Nil;
	}
	gensymed_symbol = resulting_value;
	if (gensymed_symbol) {
	    sub_class_bit_vector = ISVREF(gensymed_symbol,(SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Connection_class_description,(SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol_2 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_3 = (SI_Long)1L;
		gensymed_symbol_5 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_3 = gensymed_symbol_3 << gensymed_symbol_5;
		gensymed_symbol_2 = gensymed_symbol_2 & gensymed_symbol_3;
		temp_2 = (SI_Long)0L < gensymed_symbol_2;
	    }
	    else
		temp_2 = TRUEP(Nil);
	}
	else
	    temp_2 = TRUEP(Nil);
	if (temp_2);
	else {
	    if (SIMPLE_VECTOR_P(item_to_clone) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_to_clone)) > 
		    (SI_Long)2L &&  !EQ(ISVREF(item_to_clone,(SI_Long)1L),
		    Qavailable_frame_vector)) {
		x2 = ISVREF(item_to_clone,(SI_Long)1L);
		gensymed_symbol = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
			(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? x2 : Qnil;
	    }
	    else
		gensymed_symbol = Nil;
	    if (gensymed_symbol) {
		sub_class_bit_vector = ISVREF(gensymed_symbol,(SI_Long)19L);
		superior_class_bit_number = 
			IFIX(ISVREF(Connection_class_description,
			(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol_2 = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_3 = (SI_Long)1L;
		    gensymed_symbol_5 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_3 = gensymed_symbol_3 << gensymed_symbol_5;
		    gensymed_symbol_2 = gensymed_symbol_2 & gensymed_symbol_3;
		    temp_2 = (SI_Long)0L < gensymed_symbol_2;
		}
		else
		    temp_2 = TRUEP(Nil);
	    }
	    else
		temp_2 = TRUEP(Nil);
	}
	if (temp_2) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_141,class_1);
	    temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    temp_2 =  
		    !TRUEP(frame_system_operation_is_allowed_p(Qclone_block,
		    item_to_clone));
	    if (temp_2);
	    else {
		sub_class_bit_vector = ISVREF(ISVREF(item_to_clone,
			(SI_Long)1L),(SI_Long)19L);
		superior_class_bit_number = 
			IFIX(ISVREF(Procedure_invocation_class_description,
			(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol_2 = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_3 = (SI_Long)1L;
		    gensymed_symbol_5 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_3 = gensymed_symbol_3 << gensymed_symbol_5;
		    gensymed_symbol_2 = gensymed_symbol_2 & gensymed_symbol_3;
		    temp_2 = (SI_Long)0L < gensymed_symbol_2;
		}
		else
		    temp_2 = TRUEP(Nil);
	    }
	    if (temp_2) {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_142,item_to_clone);
		temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    else {
		newly_cloned_item_qm = clone_frame(1,item_to_clone);
		if (newly_cloned_item_qm) {
		    set_transient_and_propagate(newly_cloned_item_qm,Nil);
		    gensymed_symbol = 
			    ISVREF(ISVREF(ISVREF(ISVREF(newly_cloned_item_qm,
			    (SI_Long)1L),(SI_Long)11L),(SI_Long)30L),
			    (SI_Long)1L);
		    gensymed_symbol_1 = newly_cloned_item_qm;
		    inline_funcall_1(gensymed_symbol,gensymed_symbol_1);
		    temp = newly_cloned_item_qm;
		    if (validate_environment_p) {
			if (SIMPLE_VECTOR_P(Current_computation_instance)) {
			    type_name = 
				    ISVREF(Current_computation_instance,
				    (SI_Long)0L);
			    temp_2 = EQ(type_name,
				    Qg2_defstruct_structure_name_code_body_invocation_g2_struct);
			    if (temp_2);
			    else
				temp_2 = EQ(type_name,
					Qg2_defstruct_structure_name_procedure_invocation_g2_struct);
			}
			else
			    temp_2 = TRUEP(Nil);
			if (temp_2)
			    update_code_body_invocation_frame_serial_number(Current_computation_instance);
			else if (SIMPLE_VECTOR_P(Current_computation_instance) 
				&& EQ(ISVREF(Current_computation_instance,
				(SI_Long)0L),
				Qg2_defstruct_structure_name_rule_instance_g2_struct)) 
				    {
			    svref_arg_1 = Current_computation_instance;
			    frame_serial_number_setf_arg = 
				    Current_frame_serial_number;
			    old = ISVREF(svref_arg_1,(SI_Long)11L);
			    new_1 = frame_serial_number_setf_arg;
			    svref_new_value = (FIXNUMP(old) ||  
				    !TRUEP(old)) && (FIXNUMP(new_1) ||  
				    !TRUEP(new_1)) ? new_1 : 
				    frame_serial_number_setf_helper_1(old,
				    new_1);
			    SVREF(svref_arg_1,FIX((SI_Long)11L)) = 
				    svref_new_value;
			}
		    }
		}
		else {
		    top_of_stack_1 = top_of_stack;
		    message_1 = tformat_stack_error_text_string(2,
			    string_constant_143,item_to_clone);
		    temp = raw_stack_error_named_error(top_of_stack_1,
			    message_1);
		}
	    }
	}
    }
    return VALUES_1(temp);
}

static Object Qdo_not_clone;       /* do-not-clone */

static Object Qattribute_name;     /* attribute-name */

static Object Qattribute_value;    /* attribute-value */

/* G2-ATTRIBUTES-AND-CLASSES-TO-CLONE */
Object g2_attributes_and_classes_to_clone(new_item,old_item)
    Object new_item, old_item;
{
    Object class_description, slot_descriptions, pre_sequence;
    Object slot_description, ab_loop_list_, slot_name, slot_init_form_qm;
    Object slot_value_qm, old_slot_value_qm, vector_slot_index_qm;
    Object user_vector_slot_index_qm, slot_name_1, lookup_structure_qm;
    Object slot_index_qm, slot_features, x2, gensymed_symbol, temp_1;
    Object item_or_value, svref_new_value;
    SI_Long max_i, i, ab_loop_bind_, gensymed_symbol_1, svref_arg_2;
    char temp;

    x_note_fn_call(210,131);
    class_description = ISVREF(new_item,(SI_Long)1L);
    slot_descriptions = ISVREF(class_description,(SI_Long)6L);
    pre_sequence = Nil;
    slot_description = Nil;
    ab_loop_list_ = slot_descriptions;
    slot_name = Nil;
    slot_init_form_qm = Nil;
    slot_value_qm = Nil;
    old_slot_value_qm = Nil;
  next_loop:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    slot_description = M_CAR(ab_loop_list_);
    ab_loop_list_ = M_CDR(ab_loop_list_);
    slot_name = ISVREF(slot_description,(SI_Long)2L);
    slot_init_form_qm = ISVREF(slot_description,(SI_Long)6L);
    vector_slot_index_qm = ISVREF(slot_description,(SI_Long)7L);
    if (vector_slot_index_qm)
	slot_value_qm = ISVREF(new_item,IFIX(vector_slot_index_qm));
    else {
	user_vector_slot_index_qm = ISVREF(slot_description,(SI_Long)8L);
	if (user_vector_slot_index_qm)
	    slot_value_qm = ISVREF(ISVREF(new_item,(SI_Long)0L),
		    IFIX(user_vector_slot_index_qm));
	else {
	    slot_name_1 = ISVREF(slot_description,(SI_Long)1L);
	    lookup_structure_qm = ISVREF(new_item,(SI_Long)0L);
	    if (lookup_structure_qm) {
		max_i = IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(lookup_structure_qm));
		max_i = max_i - (SI_Long)1L;
		i = IFIX(ISVREF(ISVREF(new_item,(SI_Long)1L),(SI_Long)15L));
		ab_loop_bind_ = max_i;
	      next_loop_1:
		if (i >= ab_loop_bind_)
		    goto end_loop_1;
		if (EQ(ISVREF(lookup_structure_qm,i),slot_name_1)) {
		    slot_index_qm = FIX(i + (SI_Long)1L);
		    goto end_1;
		}
		i = i + (SI_Long)2L;
		goto next_loop_1;
	      end_loop_1:
		slot_index_qm = Qnil;
	      end_1:;
		slot_value_qm = slot_index_qm ? ISVREF(lookup_structure_qm,
			IFIX(slot_index_qm)) : ISVREF(slot_description,
			(SI_Long)6L);
	    }
	    else
		slot_value_qm = ISVREF(slot_description,(SI_Long)6L);
	}
    }
    vector_slot_index_qm = ISVREF(slot_description,(SI_Long)7L);
    if (vector_slot_index_qm)
	old_slot_value_qm = ISVREF(old_item,IFIX(vector_slot_index_qm));
    else {
	user_vector_slot_index_qm = ISVREF(slot_description,(SI_Long)8L);
	if (user_vector_slot_index_qm)
	    old_slot_value_qm = ISVREF(ISVREF(old_item,(SI_Long)0L),
		    IFIX(user_vector_slot_index_qm));
	else {
	    slot_name_1 = ISVREF(slot_description,(SI_Long)1L);
	    lookup_structure_qm = ISVREF(old_item,(SI_Long)0L);
	    if (lookup_structure_qm) {
		max_i = IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(lookup_structure_qm));
		max_i = max_i - (SI_Long)1L;
		i = IFIX(ISVREF(ISVREF(old_item,(SI_Long)1L),(SI_Long)15L));
		ab_loop_bind_ = max_i;
	      next_loop_2:
		if (i >= ab_loop_bind_)
		    goto end_loop_2;
		if (EQ(ISVREF(lookup_structure_qm,i),slot_name_1)) {
		    slot_index_qm = FIX(i + (SI_Long)1L);
		    goto end_2;
		}
		i = i + (SI_Long)2L;
		goto next_loop_2;
	      end_loop_2:
		slot_index_qm = Qnil;
	      end_2:;
		old_slot_value_qm = slot_index_qm ? 
			ISVREF(lookup_structure_qm,IFIX(slot_index_qm)) : 
			ISVREF(slot_description,(SI_Long)6L);
	    }
	    else
		old_slot_value_qm = ISVREF(slot_description,(SI_Long)6L);
	}
    }
    if ( !TRUEP(slot_value_qm) && old_slot_value_qm &&  
	    !TRUEP(assq_function(Qdo_not_clone,ISVREF(slot_description,
	    (SI_Long)9L)))) {
	slot_features = ISVREF(slot_description,(SI_Long)9L);
	temp = assq_function(Qtype,slot_features) ?  
		!TRUEP(assq_function(Qdo_not_save,slot_features)) : 
		TRUEP(assq_function(Qsave,slot_features));
    }
    else
	temp = TRUEP(Nil);
    if (temp ?  !EQ(old_slot_value_qm,slot_init_form_qm) : TRUEP(Nil)) {
	if (SIMPLE_VECTOR_P(old_slot_value_qm) && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(old_slot_value_qm)) > 
		(SI_Long)2L &&  !EQ(ISVREF(old_slot_value_qm,(SI_Long)1L),
		Qavailable_frame_vector)) {
	    x2 = ISVREF(old_slot_value_qm,(SI_Long)1L);
	    gensymed_symbol = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
		    (SI_Long)0L),
		    Qg2_defstruct_structure_name_class_description_g2_struct) 
		    ? x2 : Qnil;
	}
	else
	    gensymed_symbol = Nil;
	temp = gensymed_symbol ? TRUEP(ISVREF(gensymed_symbol,
		(SI_Long)16L)) : TRUEP(Qnil);
    }
    else
	temp = TRUEP(Nil);
    if (temp) {
	gensymed_symbol = allocate_managed_array(1,FIX((SI_Long)6L + 
		(SI_Long)1L));
	gensymed_symbol_1 = (SI_Long)0L;
	if (FIXNUM_LE(ISVREF(gensymed_symbol,(SI_Long)1L),
		Maximum_in_place_array_size)) {
	    svref_arg_2 = gensymed_symbol_1 + IFIX(Managed_array_index_offset);
	    ISVREF(gensymed_symbol,svref_arg_2) = FIX((SI_Long)1L);
	}
	else {
	    temp_1 = ISVREF(gensymed_symbol,(gensymed_symbol_1 >>  -  - 
		    (SI_Long)10L) + (SI_Long)2L);
	    svref_arg_2 = gensymed_symbol_1 & (SI_Long)1023L;
	    ISVREF(temp_1,svref_arg_2) = FIX((SI_Long)1L);
	}
	if (FIXNUM_LE(ISVREF(gensymed_symbol,(SI_Long)1L),
		Maximum_in_place_array_size))
	    SVREF(gensymed_symbol,FIX((SI_Long)3L)) = Qab_class_name;
	else {
	    temp_1 = ISVREF(gensymed_symbol,(SI_Long)2L);
	    SVREF(temp_1,FIX((SI_Long)1L)) = Qab_class_name;
	}
	if (FIXNUM_LE(ISVREF(gensymed_symbol,(SI_Long)1L),
		Maximum_in_place_array_size)) {
	    item_or_value = ISVREF(ISVREF(old_slot_value_qm,(SI_Long)1L),
		    (SI_Long)1L);
	    if (SIMPLE_VECTOR_P(item_or_value) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) > 
		    (SI_Long)2L &&  !EQ(ISVREF(item_or_value,(SI_Long)1L),
		    Qavailable_frame_vector)) {
		x2 = ISVREF(item_or_value,(SI_Long)1L);
		temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? TRUEP(x2) : TRUEP(Qnil);
	    }
	    else
		temp = TRUEP(Nil);
	    temp_1 = temp ? get_reference_to_item(item_or_value) : 
		    item_or_value;
	    SVREF(gensymed_symbol,FIX((SI_Long)4L)) = temp_1;
	}
	else {
	    temp_1 = ISVREF(gensymed_symbol,(SI_Long)2L);
	    item_or_value = ISVREF(ISVREF(old_slot_value_qm,(SI_Long)1L),
		    (SI_Long)1L);
	    if (SIMPLE_VECTOR_P(item_or_value) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) > 
		    (SI_Long)2L &&  !EQ(ISVREF(item_or_value,(SI_Long)1L),
		    Qavailable_frame_vector)) {
		x2 = ISVREF(item_or_value,(SI_Long)1L);
		temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? TRUEP(x2) : TRUEP(Qnil);
	    }
	    else
		temp = TRUEP(Nil);
	    svref_new_value = temp ? get_reference_to_item(item_or_value) :
		     item_or_value;
	    SVREF(temp_1,FIX((SI_Long)2L)) = svref_new_value;
	}
	if (FIXNUM_LE(ISVREF(gensymed_symbol,(SI_Long)1L),
		Maximum_in_place_array_size))
	    SVREF(gensymed_symbol,FIX((SI_Long)5L)) = Qattribute_name;
	else {
	    temp_1 = ISVREF(gensymed_symbol,(SI_Long)2L);
	    SVREF(temp_1,FIX((SI_Long)3L)) = Qattribute_name;
	}
	if (FIXNUM_LE(ISVREF(gensymed_symbol,(SI_Long)1L),
		Maximum_in_place_array_size)) {
	    item_or_value = slot_name;
	    if (SIMPLE_VECTOR_P(item_or_value) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) > 
		    (SI_Long)2L &&  !EQ(ISVREF(item_or_value,(SI_Long)1L),
		    Qavailable_frame_vector)) {
		x2 = ISVREF(item_or_value,(SI_Long)1L);
		temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? TRUEP(x2) : TRUEP(Qnil);
	    }
	    else
		temp = TRUEP(Nil);
	    temp_1 = temp ? get_reference_to_item(item_or_value) : 
		    item_or_value;
	    SVREF(gensymed_symbol,FIX((SI_Long)6L)) = temp_1;
	}
	else {
	    temp_1 = ISVREF(gensymed_symbol,(SI_Long)2L);
	    item_or_value = slot_name;
	    if (SIMPLE_VECTOR_P(item_or_value) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) > 
		    (SI_Long)2L &&  !EQ(ISVREF(item_or_value,(SI_Long)1L),
		    Qavailable_frame_vector)) {
		x2 = ISVREF(item_or_value,(SI_Long)1L);
		temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? TRUEP(x2) : TRUEP(Qnil);
	    }
	    else
		temp = TRUEP(Nil);
	    svref_new_value = temp ? get_reference_to_item(item_or_value) :
		     item_or_value;
	    SVREF(temp_1,FIX((SI_Long)4L)) = svref_new_value;
	}
	if (FIXNUM_LE(ISVREF(gensymed_symbol,(SI_Long)1L),
		Maximum_in_place_array_size))
	    SVREF(gensymed_symbol,FIX((SI_Long)7L)) = Qattribute_value;
	else {
	    temp_1 = ISVREF(gensymed_symbol,(SI_Long)2L);
	    SVREF(temp_1,FIX((SI_Long)5L)) = Qattribute_value;
	}
	if (FIXNUM_LE(ISVREF(gensymed_symbol,(SI_Long)1L),
		Maximum_in_place_array_size)) {
	    item_or_value = old_slot_value_qm;
	    if (SIMPLE_VECTOR_P(item_or_value) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) > 
		    (SI_Long)2L &&  !EQ(ISVREF(item_or_value,(SI_Long)1L),
		    Qavailable_frame_vector)) {
		x2 = ISVREF(item_or_value,(SI_Long)1L);
		temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? TRUEP(x2) : TRUEP(Qnil);
	    }
	    else
		temp = TRUEP(Nil);
	    temp_1 = temp ? get_reference_to_item(item_or_value) : 
		    item_or_value;
	    SVREF(gensymed_symbol,FIX((SI_Long)8L)) = temp_1;
	}
	else {
	    temp_1 = ISVREF(gensymed_symbol,(SI_Long)2L);
	    item_or_value = old_slot_value_qm;
	    if (SIMPLE_VECTOR_P(item_or_value) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) > 
		    (SI_Long)2L &&  !EQ(ISVREF(item_or_value,(SI_Long)1L),
		    Qavailable_frame_vector)) {
		x2 = ISVREF(item_or_value,(SI_Long)1L);
		temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? TRUEP(x2) : TRUEP(Qnil);
	    }
	    else
		temp = TRUEP(Nil);
	    svref_new_value = temp ? get_reference_to_item(item_or_value) :
		     item_or_value;
	    SVREF(temp_1,FIX((SI_Long)6L)) = svref_new_value;
	}
	pre_sequence = gensym_cons_1(gensym_cons_1(gensymed_symbol,
		Qab_structure),pre_sequence);
    }
    goto next_loop;
  end_loop:;
    return allocate_evaluation_sequence(nreverse(pre_sequence));
}

static Object Qclone_interactively;  /* clone-interactively */

static Object string_constant_144;  /* "structure attribute CLONE-INTERACTIVELY has bad type" */

/* G2-POST-CLONE-INTERACTION */
Object g2_post_clone_interaction(new_item,details)
    Object new_item, details;
{
    Object clone_interactively, x_in_window, y_in_window, gensymed_symbol;
    Object temp, top_of_stack, message_1, gensymed_symbol_1, gensymed_symbol_4;
    Object x2, class_qm, workstation_qm, current_workstation_1;
    Object current_workstation_window;
    Object current_g2_window_for_this_workstation_qm;
    Object type_of_current_workstation_window;
    Object current_workstation_native_window_qm, current_workstation_context;
    Object type_of_current_workstation_context;
    Object specific_structure_for_current_workstation_context;
    Object current_workstation_detail_pane, current_g2_user_mode_qm;
    Object new_g2_classic_ui_p, servicing_workstation_qm, temp_2, new_cons;
    Object global_properties, kb_properties, kb_specific_value;
    Object resulting_value, sub_class_bit_vector;
    SI_Long gensymed_symbol_2, gensymed_symbol_3, superior_class_bit_number;
    SI_Long sub_class_vector_index, gensymed_symbol_5;
    char temp_1;
    Declare_special(12);
    Object result;

    x_note_fn_call(210,132);
    clone_interactively = Nil;
    x_in_window = Nil;
    y_in_window = Nil;
    gensymed_symbol = Nil;
    if (type_specification_type_p(details,list_constant)) {
	clone_interactively = estructure_slot(details,Qclone_interactively,
		Nil);
	x_in_window = estructure_slot(details,Qx_in_window,Nil);
	y_in_window = estructure_slot(details,Qy_in_window,Nil);
	if (clone_interactively &&  
		!TRUEP(type_specification_type_p(clone_interactively,
		list_constant_1))) {
	    Last_reason_for_complex_type_rejection = string_constant_144;
	    temp = Last_reason_for_complex_type_rejection;
	}
	else
	    temp = Nil;
	if (temp);
	else if (x_in_window &&  
		!TRUEP(type_specification_type_p(x_in_window,Qinteger))) {
	    Last_reason_for_complex_type_rejection = string_constant_37;
	    temp = Last_reason_for_complex_type_rejection;
	}
	else
	    temp = Nil;
	if (temp);
	else if (y_in_window &&  
		!TRUEP(type_specification_type_p(y_in_window,Qinteger))) {
	    Last_reason_for_complex_type_rejection = string_constant_38;
	    temp = Last_reason_for_complex_type_rejection;
	}
	else
	    temp = Nil;
	gensymed_symbol = temp;
	if (gensymed_symbol) {
	    top_of_stack = Cached_top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_39,gensymed_symbol);
	    raw_stack_error_named_error(top_of_stack,message_1);
	}
	gensymed_symbol_1 = clone_interactively;
	if ( !(FIXNUMP(gensymed_symbol_1) || 
		INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_1)) == 
		(SI_Long)1L || INLINE_LONG_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_1)) == 
		(SI_Long)1L || gensymed_symbol_1 && 
		SYMBOLP(gensymed_symbol_1) || 
		INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L)) {
	    if (CONSP(gensymed_symbol_1)) {
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		if ( !(EQ(gensymed_symbol_1,Qtruth_value) || 
			EQ(gensymed_symbol_1,Qiteration_state))) {
		    if (SYMBOLP(gensymed_symbol_1)) {
			gensymed_symbol = CDR(Defined_evaluation_value_types);
			gensymed_symbol_2 = 
				SXHASH_SYMBOL_1(gensymed_symbol_1) & 
				IFIX(Most_positive_fixnum);
			gensymed_symbol_3 = (SI_Long)0L;
		      next_loop:
			if ( !TRUEP(gensymed_symbol))
			    goto end_loop;
			gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,
				(SI_Long)0L));
			if (gensymed_symbol_2 < gensymed_symbol_3)
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)1L);
			else if (gensymed_symbol_2 > gensymed_symbol_3)
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)2L);
			else {
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)3L);
			    gensymed_symbol_4 = Nil;
			  next_loop_1:
			    if ( !TRUEP(gensymed_symbol))
				goto end_loop_1;
			    gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
			    if (EQ(gensymed_symbol_1,gensymed_symbol_4))
				goto end_1;
			    gensymed_symbol = M_CDR(gensymed_symbol);
			    goto next_loop_1;
			  end_loop_1:
			  end_1:;
			    goto end_2;
			}
			goto next_loop;
		      end_loop:
		      end_2:;
		    }
		}
	    }
	}
	gensymed_symbol_1 = x_in_window;
	if ( !(FIXNUMP(gensymed_symbol_1) || 
		INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_1)) == 
		(SI_Long)1L || INLINE_LONG_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_1)) == 
		(SI_Long)1L || gensymed_symbol_1 && 
		SYMBOLP(gensymed_symbol_1) || 
		INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L)) {
	    if (CONSP(gensymed_symbol_1)) {
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		if ( !(EQ(gensymed_symbol_1,Qtruth_value) || 
			EQ(gensymed_symbol_1,Qiteration_state))) {
		    if (SYMBOLP(gensymed_symbol_1)) {
			gensymed_symbol = CDR(Defined_evaluation_value_types);
			gensymed_symbol_2 = 
				SXHASH_SYMBOL_1(gensymed_symbol_1) & 
				IFIX(Most_positive_fixnum);
			gensymed_symbol_3 = (SI_Long)0L;
		      next_loop_2:
			if ( !TRUEP(gensymed_symbol))
			    goto end_loop_2;
			gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,
				(SI_Long)0L));
			if (gensymed_symbol_2 < gensymed_symbol_3)
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)1L);
			else if (gensymed_symbol_2 > gensymed_symbol_3)
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)2L);
			else {
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)3L);
			    gensymed_symbol_4 = Nil;
			  next_loop_3:
			    if ( !TRUEP(gensymed_symbol))
				goto end_loop_3;
			    gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
			    if (EQ(gensymed_symbol_1,gensymed_symbol_4))
				goto end_3;
			    gensymed_symbol = M_CDR(gensymed_symbol);
			    goto next_loop_3;
			  end_loop_3:
			  end_3:;
			    goto end_4;
			}
			goto next_loop_2;
		      end_loop_2:
		      end_4:;
		    }
		}
	    }
	}
	gensymed_symbol_1 = y_in_window;
	if ( !(FIXNUMP(gensymed_symbol_1) || 
		INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_1)) == 
		(SI_Long)1L || INLINE_LONG_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_1)) == 
		(SI_Long)1L || gensymed_symbol_1 && 
		SYMBOLP(gensymed_symbol_1) || 
		INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol_1) != 
		(SI_Long)0L)) {
	    if (CONSP(gensymed_symbol_1)) {
		gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
		if ( !(EQ(gensymed_symbol_1,Qtruth_value) || 
			EQ(gensymed_symbol_1,Qiteration_state))) {
		    if (SYMBOLP(gensymed_symbol_1)) {
			gensymed_symbol = CDR(Defined_evaluation_value_types);
			gensymed_symbol_2 = 
				SXHASH_SYMBOL_1(gensymed_symbol_1) & 
				IFIX(Most_positive_fixnum);
			gensymed_symbol_3 = (SI_Long)0L;
		      next_loop_4:
			if ( !TRUEP(gensymed_symbol))
			    goto end_loop_4;
			gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,
				(SI_Long)0L));
			if (gensymed_symbol_2 < gensymed_symbol_3)
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)1L);
			else if (gensymed_symbol_2 > gensymed_symbol_3)
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)2L);
			else {
			    gensymed_symbol = ISVREF(gensymed_symbol,
				    (SI_Long)3L);
			    gensymed_symbol_4 = Nil;
			  next_loop_5:
			    if ( !TRUEP(gensymed_symbol))
				goto end_loop_5;
			    gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
			    if (EQ(gensymed_symbol_1,gensymed_symbol_4))
				goto end_5;
			    gensymed_symbol = M_CDR(gensymed_symbol);
			    goto next_loop_5;
			  end_loop_5:
			  end_5:;
			    goto end_6;
			}
			goto next_loop_4;
		      end_loop_4:
		      end_6:;
		    }
		}
	    }
	}
    }
    else if ( !TRUEP(T) ||  !TRUEP(type_specification_type_p(details,
	    list_constant_2))) {
	top_of_stack = Cached_top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_39,
		details);
	raw_stack_error_named_error(top_of_stack,message_1);
    }
    invoke_rules_for_existential_chaining(new_item,Qis_created,Nil);
    if (clone_interactively) {
	if (SIMPLE_VECTOR_P(clone_interactively) && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(clone_interactively)) > 
		(SI_Long)2L &&  !EQ(ISVREF(clone_interactively,
		(SI_Long)1L),Qavailable_frame_vector)) {
	    x2 = ISVREF(clone_interactively,(SI_Long)1L);
	    temp_1 = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
		    Qg2_defstruct_structure_name_class_description_g2_struct) 
		    ? TRUEP(x2) : TRUEP(Qnil);
	}
	else
	    temp_1 = TRUEP(Nil);
    }
    else
	temp_1 = TRUEP(Nil);
    if (temp_1) {
	class_qm = ISVREF(ISVREF(new_item,(SI_Long)1L),(SI_Long)1L);
	workstation_qm = ISVREF(clone_interactively,(SI_Long)20L);
	if (workstation_qm) {
	    current_workstation_1 = workstation_qm;
	    PUSH_SPECIAL(Current_workstation,current_workstation_1,11);
	      current_workstation_window = ISVREF(Current_workstation,
		      (SI_Long)1L);
	      PUSH_SPECIAL(Current_workstation_window,current_workstation_window,
		      10);
		current_g2_window_for_this_workstation_qm = 
			ISVREF(Current_workstation,(SI_Long)25L);
		PUSH_SPECIAL(Current_g2_window_for_this_workstation_qm,current_g2_window_for_this_workstation_qm,
			9);
		  type_of_current_workstation_window = 
			  ISVREF(Current_workstation_window,(SI_Long)1L);
		  PUSH_SPECIAL(Type_of_current_workstation_window,type_of_current_workstation_window,
			  8);
		    current_workstation_native_window_qm = 
			    ISVREF(Current_workstation_window,(SI_Long)17L);
		    PUSH_SPECIAL(Current_workstation_native_window_qm,current_workstation_native_window_qm,
			    7);
		      temp = ISVREF(Current_workstation,(SI_Long)17L);
		      current_workstation_context = CAR(temp);
		      PUSH_SPECIAL(Current_workstation_context,current_workstation_context,
			      6);
			type_of_current_workstation_context = 
				ISVREF(Current_workstation_context,
				(SI_Long)1L);
			PUSH_SPECIAL(Type_of_current_workstation_context,type_of_current_workstation_context,
				5);
			  specific_structure_for_current_workstation_context 
				  = ISVREF(Current_workstation_context,
				  (SI_Long)2L);
			  PUSH_SPECIAL(Specific_structure_for_current_workstation_context,specific_structure_for_current_workstation_context,
				  4);
			    current_workstation_detail_pane = 
				    detail_pane(Current_workstation_window);
			    PUSH_SPECIAL(Current_workstation_detail_pane,current_workstation_detail_pane,
				    3);
			      current_g2_user_mode_qm = 
				      ISVREF(Current_workstation,(SI_Long)19L);
			      PUSH_SPECIAL(Current_g2_user_mode_qm,current_g2_user_mode_qm,
				      2);
				new_g2_classic_ui_p = 
					get_value_for_current_workstation_new_g2_classic_ui_p();
				PUSH_SPECIAL(New_g2_classic_ui_p,new_g2_classic_ui_p,
					1);
				  servicing_workstation_qm = T;
				  PUSH_SPECIAL(Servicing_workstation_qm,servicing_workstation_qm,
					  0);
				    if (class_qm) {
					gensymed_symbol = 
						CDR(Symbol_properties_table);
					gensymed_symbol_1 = class_qm;
					gensymed_symbol_2 = 
						SXHASH_SYMBOL_1(class_qm) 
						& IFIX(Most_positive_fixnum);
					gensymed_symbol_3 = (SI_Long)0L;
				      next_loop_6:
					if ( !TRUEP(gensymed_symbol))
					    goto end_loop_6;
					gensymed_symbol_3 = 
						IFIX(ISVREF(gensymed_symbol,
						(SI_Long)0L));
					if (gensymed_symbol_2 < 
						gensymed_symbol_3)
					    gensymed_symbol = 
						    ISVREF(gensymed_symbol,
						    (SI_Long)1L);
					else if (gensymed_symbol_2 > 
						gensymed_symbol_3)
					    gensymed_symbol = 
						    ISVREF(gensymed_symbol,
						    (SI_Long)2L);
					else {
					    gensymed_symbol = 
						    ISVREF(gensymed_symbol,
						    (SI_Long)3L);
					    gensymed_symbol_4 = Nil;
					  next_loop_7:
					    if ( !TRUEP(gensymed_symbol))
						goto end_loop_7;
					    gensymed_symbol_4 = 
						    M_CAR(M_CAR(gensymed_symbol));
					    if (EQ(gensymed_symbol_1,
						    gensymed_symbol_4)) {
						gensymed_symbol = 
							M_CDR(M_CAR(gensymed_symbol));
						goto end_7;
					    }
					    gensymed_symbol = 
						    M_CDR(gensymed_symbol);
					    goto next_loop_7;
					  end_loop_7:
					    gensymed_symbol = Qnil;
					  end_7:;
					    goto end_8;
					}
					goto next_loop_6;
				      end_loop_6:
					gensymed_symbol = Qnil;
				      end_8:;
					if ( !TRUEP(gensymed_symbol)) {
					    gensymed_symbol = class_qm;
					    temp_2 = Symbol_properties_table;
					    temp = 
						    FIX(SXHASH_SYMBOL_1(gensymed_symbol) 
						    & 
						    IFIX(Most_positive_fixnum));
					    new_cons = Available_gensym_conses;
					    if (new_cons) {
						Available_gensym_conses = 
							M_CDR(new_cons);
						gensymed_symbol_1 = new_cons;
					    }
					    else
						gensymed_symbol_1 = Nil;
					    if ( !TRUEP(gensymed_symbol_1))
						gensymed_symbol_1 = 
							replenish_gensym_cons_pool();
					    M_CAR(gensymed_symbol_1) = 
						    Qsymbol_properties_hash_table;
					    M_CDR(gensymed_symbol_1) = Nil;
					    inline_note_allocate_cons(gensymed_symbol_1,
						    Qab_gensym);
					    gensymed_symbol = 
						    set_balanced_binary_tree_entry(temp_2,
						    Qeq,Nil,T,
						    gensymed_symbol,temp,
						    gensymed_symbol_1);
					}
					global_properties = gensymed_symbol;
					gensymed_symbol = 
						CDR(global_properties);
					gensymed_symbol_1 = 
						Current_kb_specific_property_list_property_name;
					gensymed_symbol_2 = 
						SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
						& IFIX(Most_positive_fixnum);
					gensymed_symbol_3 = (SI_Long)0L;
				      next_loop_8:
					if ( !TRUEP(gensymed_symbol))
					    goto end_loop_8;
					gensymed_symbol_3 = 
						IFIX(ISVREF(gensymed_symbol,
						(SI_Long)0L));
					if (gensymed_symbol_2 < 
						gensymed_symbol_3)
					    gensymed_symbol = 
						    ISVREF(gensymed_symbol,
						    (SI_Long)1L);
					else if (gensymed_symbol_2 > 
						gensymed_symbol_3)
					    gensymed_symbol = 
						    ISVREF(gensymed_symbol,
						    (SI_Long)2L);
					else {
					    gensymed_symbol = 
						    ISVREF(gensymed_symbol,
						    (SI_Long)3L);
					    gensymed_symbol_4 = Nil;
					  next_loop_9:
					    if ( !TRUEP(gensymed_symbol))
						goto end_loop_9;
					    gensymed_symbol_4 = 
						    M_CAR(M_CAR(gensymed_symbol));
					    if (EQ(gensymed_symbol_1,
						    gensymed_symbol_4)) {
						kb_properties = 
							M_CDR(M_CAR(gensymed_symbol));
						goto end_9;
					    }
					    gensymed_symbol = 
						    M_CDR(gensymed_symbol);
					    goto next_loop_9;
					  end_loop_9:
					    kb_properties = Qnil;
					  end_9:;
					    goto end_10;
					}
					goto next_loop_8;
				      end_loop_8:
					kb_properties = Qnil;
				      end_10:;
					if (kb_properties);
					else
					    kb_properties = Nil;
					if (kb_properties) {
					    gensymed_symbol = 
						    CDR(kb_properties);
					    gensymed_symbol_1 = 
						    Class_description_gkbprop;
					    gensymed_symbol_2 = 
						    SXHASH_SYMBOL_1(Class_description_gkbprop) 
						    & 
						    IFIX(Most_positive_fixnum);
					    gensymed_symbol_3 = (SI_Long)0L;
					  next_loop_10:
					    if ( !TRUEP(gensymed_symbol))
						goto end_loop_10;
					    gensymed_symbol_3 = 
						    IFIX(ISVREF(gensymed_symbol,
						    (SI_Long)0L));
					    if (gensymed_symbol_2 < 
						    gensymed_symbol_3)
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)1L);
					    else if (gensymed_symbol_2 > 
						    gensymed_symbol_3)
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)2L);
					    else {
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)3L);
						gensymed_symbol_4 = Nil;
					      next_loop_11:
						if ( !TRUEP(gensymed_symbol))
						    goto end_loop_11;
						gensymed_symbol_4 = 
							M_CAR(M_CAR(gensymed_symbol));
						if (EQ(gensymed_symbol_1,
							gensymed_symbol_4)) {
						    kb_specific_value = 
							    M_CDR(M_CAR(gensymed_symbol));
						    goto end_11;
						}
						gensymed_symbol = 
							M_CDR(gensymed_symbol);
						goto next_loop_11;
					      end_loop_11:
						kb_specific_value = Qnil;
					      end_11:;
						goto end_12;
					    }
					    goto next_loop_10;
					  end_loop_10:
					    kb_specific_value = Qnil;
					  end_12:;
					    if (kb_specific_value);
					    else
						kb_specific_value = 
							No_specific_property_value;
					}
					else
					    kb_specific_value = 
						    No_specific_property_value;
					if ( !EQ(kb_specific_value,
						No_specific_property_value))
					    resulting_value = 
						    kb_specific_value;
					else {
					    gensymed_symbol = 
						    CDR(global_properties);
					    gensymed_symbol_1 = 
						    Class_description_gkbprop;
					    gensymed_symbol_2 = 
						    SXHASH_SYMBOL_1(Class_description_gkbprop) 
						    & 
						    IFIX(Most_positive_fixnum);
					    gensymed_symbol_3 = (SI_Long)0L;
					  next_loop_12:
					    if ( !TRUEP(gensymed_symbol))
						goto end_loop_12;
					    gensymed_symbol_3 = 
						    IFIX(ISVREF(gensymed_symbol,
						    (SI_Long)0L));
					    if (gensymed_symbol_2 < 
						    gensymed_symbol_3)
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)1L);
					    else if (gensymed_symbol_2 > 
						    gensymed_symbol_3)
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)2L);
					    else {
						gensymed_symbol = 
							ISVREF(gensymed_symbol,
							(SI_Long)3L);
						gensymed_symbol_4 = Nil;
					      next_loop_13:
						if ( !TRUEP(gensymed_symbol))
						    goto end_loop_13;
						gensymed_symbol_4 = 
							M_CAR(M_CAR(gensymed_symbol));
						if (EQ(gensymed_symbol_1,
							gensymed_symbol_4)) {
						    resulting_value = 
							    M_CDR(M_CAR(gensymed_symbol));
						    goto end_13;
						}
						gensymed_symbol = 
							M_CDR(gensymed_symbol);
						goto next_loop_13;
					      end_loop_13:
						resulting_value = Qnil;
					      end_13:;
						goto end_14;
					    }
					    goto next_loop_12;
					  end_loop_12:
					    resulting_value = Qnil;
					  end_14:;
					    if (resulting_value);
					    else
						resulting_value = Nil;
					}
					gensymed_symbol = resulting_value;
					if (gensymed_symbol) {
					    sub_class_bit_vector = 
						    ISVREF(gensymed_symbol,
						    (SI_Long)19L);
					    superior_class_bit_number = 
						    IFIX(ISVREF(Kb_workspace_class_description,
						    (SI_Long)18L));
					    sub_class_vector_index = 
						    superior_class_bit_number 
						    >>  -  - (SI_Long)3L;
					    if (sub_class_vector_index < 
						    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
							{
						gensymed_symbol_2 = 
							UBYTE_8_ISAREF_1(sub_class_bit_vector,
							sub_class_vector_index);
						gensymed_symbol_3 = 
							(SI_Long)1L;
						gensymed_symbol_5 = 
							superior_class_bit_number 
							& (SI_Long)7L;
						gensymed_symbol_3 = 
							gensymed_symbol_3 
							<< gensymed_symbol_5;
						gensymed_symbol_2 = 
							gensymed_symbol_2 
							& gensymed_symbol_3;
						temp_1 = (SI_Long)0L < 
							gensymed_symbol_2;
					    }
					    else
						temp_1 = TRUEP(Nil);
					}
					else
					    temp_1 = TRUEP(Nil);
				    }
				    else
					temp_1 = TRUEP(Nil);
				    if (temp_1)
					result = put_workspace_on_pane_function(new_item,
						Current_workstation_detail_pane,
						Qcenter,Qcenter,Nil,
						FIX((SI_Long)11L),Nil,Nil,
						Nil,Nil,Nil,Nil,Nil);
				    else if (x_in_window && y_in_window)
					result = manifest_item_creation(new_item,
						Nil,x_in_window,y_in_window);
				    else
					result = VALUES_1(Nil);
				  POP_SPECIAL();
				POP_SPECIAL();
			      POP_SPECIAL();
			    POP_SPECIAL();
			  POP_SPECIAL();
			POP_SPECIAL();
		      POP_SPECIAL();
		    POP_SPECIAL();
		  POP_SPECIAL();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	    return result;
	}
	else
	    return VALUES_1(Nil);
    }
    else
	return VALUES_1(Nil);
}

/* FUNCALL-MAKE-PERMANENT-INST */
Object funcall_make_permanent_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item;

    x_note_fn_call(210,133);
    item = ISVREF(local_stack,IFIX(top_of_stack));
    make_permanent_action_internal(item,top_of_stack);
    return VALUES_1(Nil);
}

static Object string_constant_145;  /* "Cannot make ~NF permanent.  The superior of this item is transient." */

static Object string_constant_146;  /* "Cannot make ~NF permanent.  It must be either transient ~
				     *               or permanent to begin with."
				     */

static Object string_constant_147;  /* "Cannot make ~NF permanent.  It is must be either a kb-workspace ~
				     *               or found on a kb-workspace or permanent to begin with."
				     */

static Object string_constant_148;  /* "~NF cannot be made permanent because it is a ~
				     *               procedure-invocation."
				     */

static Object Qmake_permanent;     /* make-permanent */

static Object string_constant_149;  /* "Cannot make ~NF permanent.  The make permanent action has been ~
				     *               restricted for this item."
				     */

/* MAKE-PERMANENT-ACTION-INTERNAL */
Object make_permanent_action_internal(item,top_of_stack)
    Object item, top_of_stack;
{
    Object child_qm, parent_qm, top_level_parent_frame_qm, top_of_stack_1;
    Object message_1, sub_class_bit_vector, temp_1;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp;

    x_note_fn_call(210,134);
    child_qm = item;
    parent_qm = Nil;
  next_loop:
    parent_qm = get_lookup_slot_value_given_default(child_qm,Qparent_frame,
	    Nil);
    if ( !TRUEP(parent_qm))
	goto end_loop;
    child_qm = parent_qm;
    goto next_loop;
  end_loop:
    top_level_parent_frame_qm = child_qm;
    goto end_1;
    top_level_parent_frame_qm = Qnil;
  end_1:;
    if (parent_is_transient_p(item)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_145,
		item);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if ( !((SI_Long)0L != (IFIX(ISVREF(item,(SI_Long)5L)) & 
	    (SI_Long)262144L)) &&  !((SI_Long)0L != (IFIX(ISVREF(item,
	    (SI_Long)4L)) & (SI_Long)1L))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_146,
		item);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else {
	sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Connection_class_description,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	if ( !temp) {
	    temp_1 = top_level_parent_frame_qm;
	    if (temp_1);
	    else
		temp_1 = item;
	    temp =  !TRUEP(get_workspace_if_any(temp_1));
	}
	else
	    temp = TRUEP(Nil);
	if (temp ?  !((SI_Long)0L != (IFIX(ISVREF(item,(SI_Long)4L)) & 
		(SI_Long)1L)) : TRUEP(Nil)) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_147,item);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),
		    (SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Procedure_invocation_class_description,
		    (SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_1 = (SI_Long)1L;
		gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		temp = (SI_Long)0L < gensymed_symbol;
	    }
	    else
		temp = TRUEP(Nil);
	    if (temp) {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_148,item);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    else if ( 
		    !TRUEP(frame_system_operation_is_allowed_p(Qmake_permanent,
		    item))) {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_149,item);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    else {
		set_permanent_and_propagate(item,Nil);
		remove_kb_state_changes(item);
	    }
	}
    }
    return VALUES_1(Nil);
}

/* PARENT-IS-TRANSIENT-P */
Object parent_is_transient_p(frame)
    Object frame;
{
    Object parents_1, parent_1, ab_loop_list_, ab_loop_it_, temp;

    x_note_fn_call(210,135);
    parents_1 = parents(frame);
    parent_1 = Nil;
    ab_loop_list_ = parents_1;
    ab_loop_it_ = Nil;
  next_loop:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    parent_1 = M_CAR(ab_loop_list_);
    ab_loop_list_ = M_CDR(ab_loop_list_);
    ab_loop_it_ = (SI_Long)0L != (IFIX(ISVREF(parent_1,(SI_Long)5L)) & 
	    (SI_Long)262144L) ? T : Nil;
    if (ab_loop_it_) {
	temp = ab_loop_it_;
	goto end_1;
    }
    goto next_loop;
  end_loop:
    temp = Qnil;
  end_1:;
    reclaim_gensym_list_1(parents_1);
    return VALUES_1(temp);
}

/* PARENT-IS-NEITHER-TRANSIENT-NOR-PERMANENT-P */
Object parent_is_neither_transient_nor_permanent_p(frame)
    Object frame;
{
    Object parents_1, parent_1, ab_loop_list_, ab_loop_it_, temp;

    x_note_fn_call(210,136);
    parents_1 = parents(frame);
    parent_1 = Nil;
    ab_loop_list_ = parents_1;
    ab_loop_it_ = Nil;
  next_loop:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    parent_1 = M_CAR(ab_loop_list_);
    ab_loop_list_ = M_CDR(ab_loop_list_);
    ab_loop_it_ =  !((SI_Long)0L != (IFIX(ISVREF(parent_1,(SI_Long)5L)) & 
	    (SI_Long)262144L)) ? ( !((SI_Long)0L != (IFIX(ISVREF(parent_1,
	    (SI_Long)4L)) & (SI_Long)1L)) ? T : Nil) : Qnil;
    if (ab_loop_it_) {
	temp = ab_loop_it_;
	goto end_1;
    }
    goto next_loop;
  end_loop:
    temp = Qnil;
  end_1:;
    reclaim_gensym_list_1(parents_1);
    return VALUES_1(temp);
}

/* PARENTS */
Object parents(frame)
    Object frame;
{
    Object gensymed_symbol, superblock_qm, parent_frame_qm;
    Object sub_class_bit_vector, parent_of_subworkspace_qm;
    Object connection_structure, input_object, output_object, possible_parents;
    SI_Long superior_class_bit_number, sub_class_vector_index;
    SI_Long gensymed_symbol_1, gensymed_symbol_2, gensymed_symbol_3;
    char temp;

    x_note_fn_call(210,137);
    gensymed_symbol = ISVREF(frame,(SI_Long)14L);
    gensymed_symbol = gensymed_symbol ? ISVREF(gensymed_symbol,
	    (SI_Long)5L) : Nil;
    superblock_qm = gensymed_symbol;
    if (superblock_qm)
	return gensym_cons_1(superblock_qm,Nil);
    else {
	parent_frame_qm = get_lookup_slot_value_given_default(frame,
		Qparent_frame,Nil);
	if (parent_frame_qm)
	    return gensym_cons_1(parent_frame_qm,Nil);
	else {
	    gensymed_symbol = ISVREF(frame,(SI_Long)1L);
	    sub_class_bit_vector = ISVREF(gensymed_symbol,(SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Workspace_class_description,(SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol_1 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_2 = (SI_Long)1L;
		gensymed_symbol_3 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
		gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
		temp = (SI_Long)0L < gensymed_symbol_1;
	    }
	    else
		temp = TRUEP(Nil);
	    if (temp) {
		parent_of_subworkspace_qm = ISVREF(frame,(SI_Long)18L);
		if (parent_of_subworkspace_qm)
		    return gensym_cons_1(parent_of_subworkspace_qm,Nil);
		else
		    return VALUES_1(Nil);
	    }
	    else {
		sub_class_bit_vector = ISVREF(gensymed_symbol,(SI_Long)19L);
		superior_class_bit_number = 
			IFIX(ISVREF(Simulation_subtable_class_description,
			(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol_1 = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_2 = (SI_Long)1L;
		    gensymed_symbol_3 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
		    gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
		    temp = (SI_Long)0L < gensymed_symbol_1;
		}
		else
		    temp = TRUEP(Nil);
		if (temp)
		    return gensym_cons_1(ISVREF(frame,(SI_Long)22L),Nil);
		else {
		    sub_class_bit_vector = ISVREF(gensymed_symbol,
			    (SI_Long)19L);
		    superior_class_bit_number = 
			    IFIX(ISVREF(Connection_class_description,
			    (SI_Long)18L));
		    sub_class_vector_index = superior_class_bit_number >>  
			    -  - (SI_Long)3L;
		    if (sub_class_vector_index < 
			    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				{
			gensymed_symbol_1 = 
				UBYTE_8_ISAREF_1(sub_class_bit_vector,
				sub_class_vector_index);
			gensymed_symbol_2 = (SI_Long)1L;
			gensymed_symbol_3 = superior_class_bit_number & 
				(SI_Long)7L;
			gensymed_symbol_2 = gensymed_symbol_2 << 
				gensymed_symbol_3;
			gensymed_symbol_1 = gensymed_symbol_1 & 
				gensymed_symbol_2;
			temp = (SI_Long)0L < gensymed_symbol_1;
		    }
		    else
			temp = TRUEP(Nil);
		    if (temp) {
			connection_structure = ISVREF(frame,(SI_Long)21L);
			input_object = ISVREF(connection_structure,
				(SI_Long)3L);
			output_object = ISVREF(connection_structure,
				(SI_Long)2L);
			possible_parents = Nil;
			sub_class_bit_vector = ISVREF(ISVREF(input_object,
				(SI_Long)1L),(SI_Long)19L);
			superior_class_bit_number = 
				IFIX(ISVREF(Loose_end_class_description,
				(SI_Long)18L));
			sub_class_vector_index = superior_class_bit_number 
				>>  -  - (SI_Long)3L;
			if (sub_class_vector_index < 
				IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				    {
			    gensymed_symbol_1 = 
				    UBYTE_8_ISAREF_1(sub_class_bit_vector,
				    sub_class_vector_index);
			    gensymed_symbol_2 = (SI_Long)1L;
			    gensymed_symbol_3 = superior_class_bit_number 
				    & (SI_Long)7L;
			    gensymed_symbol_2 = gensymed_symbol_2 << 
				    gensymed_symbol_3;
			    gensymed_symbol_1 = gensymed_symbol_1 & 
				    gensymed_symbol_2;
			    temp = (SI_Long)0L < gensymed_symbol_1;
			}
			else
			    temp = TRUEP(Nil);
			if ( !temp)
			    possible_parents = gensym_cons_1(input_object,
				    possible_parents);
			sub_class_bit_vector = ISVREF(ISVREF(output_object,
				(SI_Long)1L),(SI_Long)19L);
			superior_class_bit_number = 
				IFIX(ISVREF(Loose_end_class_description,
				(SI_Long)18L));
			sub_class_vector_index = superior_class_bit_number 
				>>  -  - (SI_Long)3L;
			if (sub_class_vector_index < 
				IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				    {
			    gensymed_symbol_1 = 
				    UBYTE_8_ISAREF_1(sub_class_bit_vector,
				    sub_class_vector_index);
			    gensymed_symbol_2 = (SI_Long)1L;
			    gensymed_symbol_3 = superior_class_bit_number 
				    & (SI_Long)7L;
			    gensymed_symbol_2 = gensymed_symbol_2 << 
				    gensymed_symbol_3;
			    gensymed_symbol_1 = gensymed_symbol_1 & 
				    gensymed_symbol_2;
			    temp = (SI_Long)0L < gensymed_symbol_1;
			}
			else
			    temp = TRUEP(Nil);
			if ( !temp)
			    possible_parents = gensym_cons_1(output_object,
				    possible_parents);
			return VALUES_1(possible_parents);
		    }
		    else
			return VALUES_1(Qnil);
		}
	    }
	}
    }
}

/* FUNCALL-MAKE-SUBWORKSPACE-INST */
Object funcall_make_subworkspace_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object kb_workspace, target_item;

    x_note_fn_call(210,138);
    kb_workspace = ISVREF(local_stack,IFIX(FIXNUM_SUB1(top_of_stack)));
    target_item = ISVREF(local_stack,IFIX(top_of_stack));
    make_subworkspace_action_internal(kb_workspace,target_item,top_of_stack);
    return VALUES_1(Nil);
}

static Object Qsubworkspaces;      /* subworkspaces */

static Object string_constant_150;  /* "Cannot make ~NF the subworkspace of ~NF because ~NF is not ~
				     *               transient."
				     */

static Object string_constant_151;  /* "Cannot make ~NF a subworkspace of ~NF.  ~NF is an attribute ~
				     *                   of ~NF."
				     */

static Object string_constant_152;  /* "Cannot make ~NF a subworkspace of ~NF.  ~NF is a ~a." */

static Object string_constant_153;  /* "Cannot make ~NF a subworkspace of ~NF because ~NF is either on ~
				     *               this subworkspace or on a further subworkspace."
				     */

static Object string_constant_154;  /* "Cannot make ~NF the subworkspace of ~NF.  This action has been ~
				     *               restricted for ~NF."
				     */

static Object string_constant_155;  /* "Cannot make ~NF the subworkspace of ~NF because ~NF already ~
				     *                 has a subworkspace."
				     */

/* MAKE-SUBWORKSPACE-ACTION-INTERNAL */
Object make_subworkspace_action_internal(kb_workspace,target_item,top_of_stack)
    Object kb_workspace, target_item, top_of_stack;
{
    Object invalid_target_item_qm, sub_class_bit_vector, dependency_problem_qm;
    Object current_item_subworkspace_qm, top_of_stack_1, message_1, temp;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;

    x_note_fn_call(210,139);
    invalid_target_item_qm = 
	    get_lookup_slot_value_given_default(target_item,Qparent_frame,Nil);
    if (invalid_target_item_qm);
    else {
	sub_class_bit_vector = ISVREF(ISVREF(target_item,(SI_Long)1L),
		(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Simulation_subtable_class_description,
		(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    invalid_target_item_qm = (SI_Long)0L < gensymed_symbol ? T : Nil;
	}
	else
	    invalid_target_item_qm = Nil;
    }
    if (invalid_target_item_qm);
    else {
	sub_class_bit_vector = ISVREF(ISVREF(target_item,(SI_Long)1L),
		(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Kb_workspace_class_description,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    invalid_target_item_qm = (SI_Long)0L < gensymed_symbol ? T : Nil;
	}
	else
	    invalid_target_item_qm = Nil;
    }
    if (invalid_target_item_qm);
    else {
	sub_class_bit_vector = ISVREF(ISVREF(target_item,(SI_Long)1L),
		(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Connection_class_description,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    invalid_target_item_qm = (SI_Long)0L < gensymed_symbol ? T : Nil;
	}
	else
	    invalid_target_item_qm = Nil;
    }
    if (invalid_target_item_qm);
    else
	invalid_target_item_qm =  
		!TRUEP(get_slot_description_of_class_description_function(Qsubworkspaces,
		ISVREF(target_item,(SI_Long)1L),Nil)) ? T : Nil;
    dependency_problem_qm = existence_depends_on_p(target_item,kb_workspace);
    current_item_subworkspace_qm =  !TRUEP(invalid_target_item_qm) ? 
	    ISVREF(target_item,(SI_Long)18L) : Qnil;
    if ( !((SI_Long)0L != (IFIX(ISVREF(kb_workspace,(SI_Long)5L)) & 
	    (SI_Long)262144L)) &&  
	    !TRUEP(Permit_transfer_of_permanent_items_p)) {
	if (Disable_stack_error)
	    return tformat_text_string(4,string_constant_150,kb_workspace,
		    target_item,kb_workspace);
	else {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(4,
		    string_constant_150,kb_workspace,target_item,kb_workspace);
	    temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else if (invalid_target_item_qm) {
	if (get_lookup_slot_value_given_default(target_item,Qparent_frame,
		    Nil)) {
	    if (Disable_stack_error)
		return tformat_text_string(5,string_constant_151,
			kb_workspace,target_item,target_item,
			get_lookup_slot_value_given_default(target_item,
			Qparent_frame,Nil));
	    else {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(5,
			string_constant_151,kb_workspace,target_item,
			target_item,
			get_lookup_slot_value_given_default(target_item,
			Qparent_frame,Nil));
		temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	}
	else if (Disable_stack_error)
	    return tformat_text_string(5,string_constant_152,kb_workspace,
		    target_item,target_item,ISVREF(ISVREF(target_item,
		    (SI_Long)1L),(SI_Long)1L));
	else {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(5,
		    string_constant_152,kb_workspace,target_item,
		    target_item,ISVREF(ISVREF(target_item,(SI_Long)1L),
		    (SI_Long)1L));
	    temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else if (dependency_problem_qm) {
	if (Disable_stack_error)
	    return tformat_text_string(4,string_constant_153,kb_workspace,
		    target_item,target_item);
	else {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(4,
		    string_constant_153,kb_workspace,target_item,target_item);
	    temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else if ( !TRUEP(frame_system_operation_is_allowed_p(Qchange_superior,
	    kb_workspace))) {
	if (Disable_stack_error)
	    return tformat_text_string(4,string_constant_154,kb_workspace,
		    target_item,kb_workspace);
	else {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(4,
		    string_constant_154,kb_workspace,target_item,kb_workspace);
	    temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else if ( 
	    !TRUEP(frame_system_operation_is_allowed_p(Qchange_set_of_inferiors,
	    target_item))) {
	if (Disable_stack_error)
	    return tformat_text_string(4,string_constant_154,kb_workspace,
		    target_item,target_item);
	else {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(4,
		    string_constant_154,kb_workspace,target_item,target_item);
	    temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else if (current_item_subworkspace_qm &&  
	    !TRUEP(CDR(current_item_subworkspace_qm))) {
	if ( !EQ(CAR(current_item_subworkspace_qm),kb_workspace)) {
	    if (Disable_stack_error)
		return tformat_text_string(4,string_constant_155,
			kb_workspace,target_item,target_item);
	    else {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(4,
			string_constant_155,kb_workspace,target_item,
			target_item);
		temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	}
	else
	    temp = Nil;
    }
    else {
	replace_subworkspace_if_any(kb_workspace,target_item);
	temp = Nil;
    }
    return VALUES_1(temp);
}

static Object string_constant_156;  /* "Cannot print ~NF because it is not a workspace." */

static Object string_constant_157;  /* "Cannot print ~NF.  The print action has been restricted for this ~
				     *               item."
				     */

/* FUNCALL-PRINT-INST */
Object funcall_print_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item, sub_class_bit_vector, top_of_stack_1, message_1;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp;

    x_note_fn_call(210,140);
    item = ISVREF(local_stack,IFIX(top_of_stack));
    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
    superior_class_bit_number = IFIX(ISVREF(Workspace_class_description,
	    (SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_1 = (SI_Long)1L;
	gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	temp = (SI_Long)0L < gensymed_symbol;
    }
    else
	temp = TRUEP(Nil);
    if ( !temp) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_156,
		item);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if ( !TRUEP(frame_system_operation_is_allowed_p(Qshow_workspace,
	    item))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_157,
		item);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else
	print_workspace_from_action(item);
    return VALUES_1(Nil);
}

/* FUNCALL-MAKE-TRANSIENT-INST */
Object funcall_make_transient_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item;

    x_note_fn_call(210,141);
    item = ISVREF(local_stack,IFIX(top_of_stack));
    make_transient_action_internal(item,top_of_stack);
    return VALUES_1(Nil);
}

static Object Qmake_transient;     /* make-transient */

static Object string_constant_158;  /* "Cannot make ~NF transient.  The make transient action has been ~
				     *               restricted for this item."
				     */

static Object string_constant_159;  /* "Cannot make ~NF transient because it is a stable item." */

/* MAKE-TRANSIENT-ACTION-INTERNAL */
Object make_transient_action_internal(item,top_of_stack)
    Object item, top_of_stack;
{
    Object kb_hierarchy_problem_qm, sub_class_bit_vector, gensymed_symbol_3;
    Object ok_to_be_made_transient_qm;
    Object currently_within_make_transient_instruction_p, top_of_stack_1;
    Object message_1;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp;
    Declare_special(1);
    Object result;

    x_note_fn_call(210,142);
    kb_hierarchy_problem_qm = 
	    locate_definition_with_subclass_or_instance(item);
    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
    superior_class_bit_number = 
	    IFIX(ISVREF(Message_board_class_description,(SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_1 = (SI_Long)1L;
	gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	temp = (SI_Long)0L < gensymed_symbol;
    }
    else
	temp = TRUEP(Nil);
    if (temp);
    else if ( !((SI_Long)0L != (IFIX(ISVREF(item,(SI_Long)5L)) & 
	    (SI_Long)262144L)) && (SI_Long)0L != (IFIX(ISVREF(item,
	    (SI_Long)4L)) & (SI_Long)1L)) {
	gensymed_symbol_3 = 
		lookup_global_or_kb_specific_property_value(Qsystem_table,
		Class_description_gkbprop);
	if (gensymed_symbol_3) {
	    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),
		    (SI_Long)19L);
	    superior_class_bit_number = IFIX(ISVREF(gensymed_symbol_3,
		    (SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_1 = (SI_Long)1L;
		gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		temp = (SI_Long)0L < gensymed_symbol;
	    }
	    else
		temp = TRUEP(Nil);
	}
	else
	    temp = TRUEP(Nil);
	temp =  !temp;
    }
    else
	temp = TRUEP(Nil);
    if ((temp ?  !TRUEP(kb_hierarchy_problem_qm) : TRUEP(Nil)) ?  
	    !TRUEP(embedded_rule_p(item)) : TRUEP(Nil)) {
	gensymed_symbol_3 = 
		lookup_global_or_kb_specific_property_value(Qui_client_session,
		Class_description_gkbprop);
	if (gensymed_symbol_3) {
	    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),
		    (SI_Long)19L);
	    superior_class_bit_number = IFIX(ISVREF(gensymed_symbol_3,
		    (SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_1 = (SI_Long)1L;
		gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
		gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
		temp = (SI_Long)0L < gensymed_symbol;
	    }
	    else
		temp = TRUEP(Nil);
	}
	else
	    temp = TRUEP(Nil);
	temp =  !temp;
    }
    else
	temp = TRUEP(Nil);
    if (temp) {
	sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Simulation_subtable_class_description,
		(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp = TRUEP(Nil);
	ok_to_be_made_transient_qm =  !temp ? T : Nil;
    }
    else
	ok_to_be_made_transient_qm = Nil;
    currently_within_make_transient_instruction_p = T;
    PUSH_SPECIAL(Currently_within_make_transient_instruction_p,currently_within_make_transient_instruction_p,
	    0);
      if ( !TRUEP(ok_to_be_made_transient_qm))
	  result = make_transient_stack_error(item,top_of_stack);
      else if ( !TRUEP(frame_system_operation_is_allowed_p(Qmake_transient,
	      item))) {
	  top_of_stack_1 = top_of_stack;
	  message_1 = tformat_stack_error_text_string(2,
		  string_constant_158,item);
	  result = raw_stack_error_named_error(top_of_stack_1,message_1);
      }
      else if (destabilizing_operation_restricted_for_item_p(item)) {
	  top_of_stack_1 = top_of_stack;
	  message_1 = tformat_stack_error_text_string(2,
		  string_constant_159,item);
	  result = raw_stack_error_named_error(top_of_stack_1,message_1);
      }
      else
	  result = set_transient_and_propagate(item,Nil);
    POP_SPECIAL();
    return result;
}

static Object string_constant_160;  /* "Cannot make ~NF transient because it is an attribute of ~NF." */

static Object string_constant_161;  /* "Cannot make ~NF transient.  It is must be either a kb-workspace or ~
				     *             found on a kb-workspace."
				     */

static Object string_constant_162;  /* "Cannot make ~NF transient.  " */

static Object array_constant_90;   /* # */

static Object string_constant_163;  /* "An inferior item, the class-definition ~a, " */

static Object array_constant_91;   /* # */

static Object array_constant_92;   /* # */

static Object string_constant_164;  /* "Cannot make ~NF transient.  It is of class ~a." */

/* MAKE-TRANSIENT-STACK-ERROR */
Object make_transient_stack_error(item,top_of_stack)
    Object item, top_of_stack;
{
    Object temp, top_of_stack_1, message_1;
    Object kb_hierarchy_problem_with_definition_qm, x2, gensymed_symbol;
    Object sub_class_bit_vector, definition_name_qm, text_string, snapshots;
    Object snapshots_of_related_blocks, note_blocks_in_tformat;
    Object current_wide_string_list, wide_string_bv16, current_wide_string;
    Object fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object scope_conses, ab_loopvar_, class_1;
    SI_Long superior_class_bit_number, sub_class_vector_index;
    SI_Long gensymed_symbol_1, gensymed_symbol_2, gensymed_symbol_3;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    char temp_1;
    Declare_special(8);

    x_note_fn_call(210,143);
    if ((SI_Long)0L != (IFIX(ISVREF(item,(SI_Long)5L)) & (SI_Long)262144L))
	temp = Nil;
    else if (get_lookup_slot_value_given_default(item,Qparent_frame,Nil)) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(3,string_constant_160,
		item,get_lookup_slot_value_given_default(item,
		Qparent_frame,Nil));
	temp = raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if ( !TRUEP(get_workspace_if_any(item))) {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_161,
		item);
	temp = raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else {
	kb_hierarchy_problem_with_definition_qm = 
		locate_definition_with_subclass_or_instance(item);
	if (kb_hierarchy_problem_with_definition_qm) {
	    if (SIMPLE_VECTOR_P(item) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item)) > (SI_Long)2L && 
		     !EQ(ISVREF(item,(SI_Long)1L),Qavailable_frame_vector)) {
		x2 = ISVREF(item,(SI_Long)1L);
		gensymed_symbol = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
			(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? x2 : Qnil;
	    }
	    else
		gensymed_symbol = Nil;
	    if (gensymed_symbol) {
		sub_class_bit_vector = ISVREF(gensymed_symbol,(SI_Long)19L);
		superior_class_bit_number = 
			IFIX(ISVREF(Class_definition_class_description,
			(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol_1 = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_2 = (SI_Long)1L;
		    gensymed_symbol_3 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
		    gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
		    temp_1 = (SI_Long)0L < gensymed_symbol_1;
		}
		else
		    temp_1 = TRUEP(Nil);
	    }
	    else
		temp_1 = TRUEP(Nil);
	    definition_name_qm = temp_1 ? 
		    get_lookup_slot_value_given_default(item,
		    Qname_or_names_for_frame,Nil) : Nil;
	    top_of_stack_1 = top_of_stack;
	    text_string = Nil;
	    snapshots = Nil;
	    snapshots_of_related_blocks = Nil;
	    note_blocks_in_tformat = 
		    SYMBOL_FUNCTION(Qrecord_block_for_tformat);
	    PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,7);
	      PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,
		      6);
		current_wide_string_list = Qdo_not_use;
		PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,
			5);
		  wide_string_bv16 = 
			  allocate_byte_vector_16(FIX((SI_Long)2048L + 
			  (SI_Long)3L));
		  bv16_length = 
			  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wide_string_bv16));
		  aref_arg_2 = bv16_length - (SI_Long)2L;
		  aref_new_value = (SI_Long)2048L & (SI_Long)65535L;
		  UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,
			  aref_new_value);
		  aref_arg_2 = bv16_length - (SI_Long)1L;
		  aref_new_value = (SI_Long)57344L | (SI_Long)0L;
		  UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,
			  aref_new_value);
		  UBYTE_16_ISASET_1(wide_string_bv16,(SI_Long)2048L,
			  (SI_Long)0L);
		  current_wide_string = wide_string_bv16;
		  PUSH_SPECIAL(Current_wide_string,current_wide_string,4);
		    fill_pointer_for_current_wide_string = FIX((SI_Long)0L);
		    PUSH_SPECIAL(Fill_pointer_for_current_wide_string,fill_pointer_for_current_wide_string,
			    3);
		      length_1 = 
			      IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
		      total_length_of_current_wide_string = 
			      FIX(UBYTE_16_ISAREF_1(Current_wide_string,
			      length_1 - (SI_Long)2L) + 
			      ((UBYTE_16_ISAREF_1(Current_wide_string,
			      length_1 - (SI_Long)1L) & (SI_Long)8191L) << 
			      (SI_Long)16L));
		      PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
			      2);
			current_twriting_output_type = Qwide_string;
			PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
				1);
			  tformat(2,string_constant_162,item);
			  if (EQ(definition_name_qm,
				  kb_hierarchy_problem_with_definition_qm))
			      twrite_beginning_of_wide_string(array_constant_90,
				      FIX((SI_Long)22L));
			  else
			      tformat(2,string_constant_163,
				      kb_hierarchy_problem_with_definition_qm);
			  scope_conses = Scope_conses;
			  ab_loopvar_ = Nil;
			  ab_loopvar_ = definition_name_qm;
			  class_1 = Nil;
			  PUSH_SPECIAL(Scope_conses,scope_conses,0);
			    ab_loopvar_ = collect_subclasses(ab_loopvar_);
			  next_loop:
			    if ( !TRUEP(ab_loopvar_))
				goto end_loop;
			    temp = M_CAR(ab_loopvar_);
			    ab_loopvar_ = M_CDR(ab_loopvar_);
			    class_1 = temp;
			    if (class_1 &&  !EQ(class_1,definition_name_qm)) {
				temp_1 = TRUEP(T);
				goto end_1;
			    }
			    goto next_loop;
			  end_loop:
			    temp_1 = TRUEP(Qnil);
			  end_1:;
			  POP_SPECIAL();
			  if (temp_1)
			      twrite_beginning_of_wide_string(array_constant_91,
				      FIX((SI_Long)15L));
			  else
			      twrite_beginning_of_wide_string(array_constant_92,
				      FIX((SI_Long)14L));
			  text_string = copy_out_current_wide_string();
			POP_SPECIAL();
		      POP_SPECIAL();
		    POP_SPECIAL();
		  POP_SPECIAL();
		POP_SPECIAL();
		snapshots = Snapshots_of_related_blocks;
		Snapshots_of_related_blocks = Nil;
		if (Snapshots_of_related_blocks) {
		    reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
		    Snapshots_of_related_blocks = Nil;
		}
	      POP_SPECIAL();
	    POP_SPECIAL();
	    message_1 = make_error_text(text_string,snapshots);
	    temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(3,
		    string_constant_164,item,ISVREF(ISVREF(item,
		    (SI_Long)1L),(SI_Long)1L));
	    temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    return VALUES_1(temp);
}

static Object string_constant_165;  /* "WAIT UNTIL EVENT" */

static Object Qreceives_a_value;   /* receives-a-value */

static Object string_constant_166;  /* "Cannot wait until ~NV receives a value." */

static Object string_constant_167;  /* "Cannot wait until ~NV receives a value.  This event detector ~
				     *                   can only be registered on variables, parameters, or ~
				     *                   attributes of items."
				     */

static Object string_constant_168;  /* "Attempted to register an event detector on ~a events, which are not ~
				     *           defined.  Please report this bug in the wait until statement to~
				     *           Gensym software support."
				     */

/* FUNCALL-INSTALL-EVENT-DETECTOR-INST */
Object funcall_install_event_detector_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object item_or_place_reference, type_of_event_detector;
    Object component_particulars, item, top_of_stack_1, message_1, slot_name;

    x_note_fn_call(210,144);
    if (Evaluating_simulator_procedure_qm)
	not_a_simulator_procedure_instruction(string_constant_165,
		top_of_stack);
    item_or_place_reference = ISVREF(local_stack,
	    IFIX(FIXNUM_SUB1(top_of_stack)));
    type_of_event_detector = ISVREF(local_stack,IFIX(top_of_stack));
    if (EQ(type_of_event_detector,Qreceives_a_value)) {
	if (CONSP(item_or_place_reference) && 
		EQ(M_CDR(item_or_place_reference),Qplace_reference)) {
	    component_particulars = ISVREF(M_CAR(item_or_place_reference),
		    (SI_Long)0L);
	    item = ISVREF(M_CAR(item_or_place_reference),(SI_Long)1L);
	    if ( 
		    !TRUEP(evaluation_place_reference_valid_p(item_or_place_reference))) 
			{
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_166,item_or_place_reference);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    if (CONSP(component_particulars) && 
		    EQ(M_CAR(component_particulars),Qattribute)) {
		slot_name = M_CAR(M_CDR(component_particulars));
		install_event_detector(item,Qreceives_a_value,
			Current_computation_instance,slot_name);
	    }
	    else {
		top_of_stack_1 = top_of_stack;
		message_1 = tformat_stack_error_text_string(2,
			string_constant_167,item_or_place_reference);
		raw_stack_error_named_error(top_of_stack_1,message_1);
	    }
	    reclaim_evaluation_place_reference(item_or_place_reference);
	}
	else
	    install_event_detector(item_or_place_reference,
		    Qreceives_a_value,Current_computation_instance,Nil);
    }
    else {
	top_of_stack_1 = top_of_stack;
	message_1 = tformat_stack_error_text_string(2,string_constant_168,
		type_of_event_detector);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    return VALUES_1(Nil);
}

/* FUNCALL-CLEAR-EVENT-DETECTORS-INST */
Object funcall_clear_event_detectors_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    x_note_fn_call(210,145);
    if (Evaluating_simulator_procedure_qm)
	not_a_simulator_procedure_instruction(string_constant_165,
		top_of_stack);
    clear_event_detectors(Current_computation_instance);
    return VALUES_1(Nil);
}

/* FUNCALL-PREPARE-PROCEDURE-ARGUMENTS-INST */
Object funcall_prepare_procedure_arguments_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    x_note_fn_call(210,146);
    prepare_procedure_arguments_on_stack(top_of_stack,local_stack,Nil);
    return VALUES_1(Nil);
}

static Object string_constant_169;  /* "Internal G2 error: bad procedure ~a while preparing arguments." */

static Object Kgeneral_description;  /* :general-description */

static Object Kall_remaining;      /* :all-remaining */

static Object Qinference_engine;   /* inference-engine */

static Object Qprocedure;          /* procedure */

/* PREPARE-PROCEDURE-ARGUMENTS-ON-STACK */
Object prepare_procedure_arguments_on_stack(top_of_stack,local_stack,
	    unknown_allowed_qm)
    Object top_of_stack, local_stack, unknown_allowed_qm;
{
    Object stack_argument_count, argument_count, procedure_stack_position;
    Object procedure_qm_1, procedure, local_procedure_qm;
    Object argument_descriptions, formal_arg_restp_index, value, x2;
    Object gensymed_symbol, sub_class_bit_vector, top_of_stack_1, message_1, i;
    Object temp_1, temp_2, index_1, stack_value, name, type;
    Object ab_loop_iter_flag_, amf_available_array_cons_qm, amf_array, temp_3;
    Object svref_new_value, amf_result, incff_1_arg, new_float;
    SI_Long superior_class_bit_number, sub_class_vector_index;
    SI_Long gensymed_symbol_1, gensymed_symbol_2, gensymed_symbol_3;
    SI_Long stack_index, ab_loop_bind_;
    char temp;
    double aref_new_value;

    x_note_fn_call(210,147);
    stack_argument_count = ISVREF(local_stack,IFIX(top_of_stack));
    argument_count = FIXNUM_SUB1(stack_argument_count);
    procedure_stack_position = FIXNUM_MINUS(top_of_stack,stack_argument_count);
    procedure_qm_1 = ISVREF(local_stack,IFIX(procedure_stack_position));
    procedure = Nil;
    local_procedure_qm = Nil;
    argument_descriptions = Nil;
    formal_arg_restp_index = Nil;
    value = Nil;
    if (SIMPLE_VECTOR_P(procedure_qm_1) && 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(procedure_qm_1)) > (SI_Long)2L 
	    &&  !EQ(ISVREF(procedure_qm_1,(SI_Long)1L),
	    Qavailable_frame_vector)) {
	x2 = ISVREF(procedure_qm_1,(SI_Long)1L);
	gensymed_symbol = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
		Qg2_defstruct_structure_name_class_description_g2_struct) ?
		 x2 : Qnil;
    }
    else
	gensymed_symbol = Nil;
    if (gensymed_symbol) {
	sub_class_bit_vector = ISVREF(gensymed_symbol,(SI_Long)19L);
	superior_class_bit_number = 
		IFIX(ISVREF(Procedure_class_description,(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol_1 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_2 = (SI_Long)1L;
	    gensymed_symbol_3 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
	    gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
	    temp = (SI_Long)0L < gensymed_symbol_1;
	}
	else
	    temp = TRUEP(Nil);
    }
    else
	temp = TRUEP(Nil);
    if (temp) {
	if (SIMPLE_VECTOR_P(procedure_qm_1) && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(procedure_qm_1)) > 
		(SI_Long)2L &&  !EQ(ISVREF(procedure_qm_1,(SI_Long)1L),
		Qavailable_frame_vector)) {
	    x2 = ISVREF(procedure_qm_1,(SI_Long)1L);
	    gensymed_symbol = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
		    (SI_Long)0L),
		    Qg2_defstruct_structure_name_class_description_g2_struct) 
		    ? x2 : Qnil;
	}
	else
	    gensymed_symbol = Nil;
	if (gensymed_symbol) {
	    sub_class_bit_vector = ISVREF(gensymed_symbol,(SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Method_declaration_class_description,
		    (SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol_1 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_2 = (SI_Long)1L;
		gensymed_symbol_3 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
		gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
		temp = (SI_Long)0L < gensymed_symbol_1;
	    }
	    else
		temp = TRUEP(Nil);
	}
	else
	    temp = TRUEP(Nil);
	if (temp)
	    return VALUES_1(Nil);
	procedure = procedure_qm_1;
	local_procedure_qm = T;
	argument_descriptions = ISVREF(procedure,(SI_Long)24L);
    }
    else {
	if (SIMPLE_VECTOR_P(procedure_qm_1) && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(procedure_qm_1)) > 
		(SI_Long)2L &&  !EQ(ISVREF(procedure_qm_1,(SI_Long)1L),
		Qavailable_frame_vector)) {
	    x2 = ISVREF(procedure_qm_1,(SI_Long)1L);
	    gensymed_symbol = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
		    (SI_Long)0L),
		    Qg2_defstruct_structure_name_class_description_g2_struct) 
		    ? x2 : Qnil;
	}
	else
	    gensymed_symbol = Nil;
	if (gensymed_symbol) {
	    sub_class_bit_vector = ISVREF(gensymed_symbol,(SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Remote_procedure_declaration_class_description,
		    (SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol_1 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_2 = (SI_Long)1L;
		gensymed_symbol_3 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
		gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
		temp = (SI_Long)0L < gensymed_symbol_1;
	    }
	    else
		temp = TRUEP(Nil);
	}
	else
	    temp = TRUEP(Nil);
	if (temp) {
	    procedure = procedure_qm_1;
	    local_procedure_qm = Nil;
	    argument_descriptions = 
		    remote_procedure_argument_description_function(procedure);
	}
	else if ( !TRUEP(unknown_allowed_qm) || Stack_expiration) {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_169,procedure_qm_1);
	    raw_stack_error_named_error(top_of_stack_1,message_1);
	}
	else
	    return VALUES_1(Nil);
    }
    i = FIXNUM_SUB1(var_count(argument_descriptions));
    if ((SI_Long)0L <= IFIX(i)) {
	gensymed_symbol_1 = IFIX(i) * (SI_Long)2L + (SI_Long)1L;
	gensymed_symbol = FIXNUM_LE(ISVREF(argument_descriptions,
		(SI_Long)1L),Maximum_in_place_array_size) ? 
		ISVREF(argument_descriptions,gensymed_symbol_1 + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(argument_descriptions,(gensymed_symbol_1 >>  
		-  - (SI_Long)10L) + (SI_Long)2L),gensymed_symbol_1 & 
		(SI_Long)1023L);
	if (CONSP(gensymed_symbol) && EQ(CAR(gensymed_symbol),
		Kgeneral_description)) {
	    gensymed_symbol = CDR(gensymed_symbol);
	    temp_1 = gensymed_symbol;
	}
	else
	    temp_1 = Nil;
	temp = TRUEP(getf(temp_1,Kall_remaining,_));
    }
    else
	temp = TRUEP(Nil);
    if (temp)
	formal_arg_restp_index = i;
    if (formal_arg_restp_index ? FIXNUM_LT(argument_count,
	    formal_arg_restp_index) : FIXNUM_NE(argument_count,
	    var_count(argument_descriptions))) {
	temp_1 = procedure;
	temp_2 = formal_arg_restp_index;
	signal_wrong_number_of_arguments_stack_error(top_of_stack,temp_1,
		temp_2,formal_arg_restp_index ? 
		FIXNUM_SUB1(var_count(argument_descriptions)) : 
		var_count(argument_descriptions),argument_count);
    }
    stack_index = IFIX(FIXNUM_ADD1(procedure_stack_position));
    ab_loop_bind_ = IFIX(top_of_stack);
    index_1 = FIX((SI_Long)0L);
    stack_value = Nil;
    name = Nil;
    type = Nil;
    ab_loop_iter_flag_ = T;
  next_loop:
    if (stack_index >= ab_loop_bind_)
	goto end_loop;
    if ( !TRUEP(ab_loop_iter_flag_))
	index_1 = formal_arg_restp_index && FIXNUM_EQ(index_1,
		formal_arg_restp_index) ? index_1 : FIXNUM_ADD1(index_1);
    stack_value = ISVREF(local_stack,stack_index);
    gensymed_symbol_1 = IFIX(index_1) * (SI_Long)2L;
    name = FIXNUM_LE(ISVREF(argument_descriptions,(SI_Long)1L),
	    Maximum_in_place_array_size) ? ISVREF(argument_descriptions,
	    gensymed_symbol_1 + IFIX(Managed_array_index_offset)) : 
	    ISVREF(ISVREF(argument_descriptions,(gensymed_symbol_1 >>  -  
	    - (SI_Long)10L) + (SI_Long)2L),gensymed_symbol_1 & (SI_Long)1023L);
    gensymed_symbol_1 = IFIX(index_1) * (SI_Long)2L + (SI_Long)1L;
    gensymed_symbol = FIXNUM_LE(ISVREF(argument_descriptions,(SI_Long)1L),
	    Maximum_in_place_array_size) ? ISVREF(argument_descriptions,
	    gensymed_symbol_1 + IFIX(Managed_array_index_offset)) : 
	    ISVREF(ISVREF(argument_descriptions,(gensymed_symbol_1 >>  -  
	    - (SI_Long)10L) + (SI_Long)2L),gensymed_symbol_1 & (SI_Long)1023L);
    if (CONSP(gensymed_symbol) && EQ(CAR(gensymed_symbol),
	    Kgeneral_description))
	gensymed_symbol = getfq_function_no_default(CDR(gensymed_symbol),
		Ktype);
    type = gensymed_symbol;
    if ( !TRUEP(type_specification_type_p(stack_value,type))) {
	if (SIMPLE_VECTOR_P(stack_value) && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(stack_value)) > (SI_Long)2L 
		&&  !EQ(ISVREF(stack_value,(SI_Long)1L),
		Qavailable_frame_vector)) {
	    x2 = ISVREF(stack_value,(SI_Long)1L);
	    gensymed_symbol = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
		    (SI_Long)0L),
		    Qg2_defstruct_structure_name_class_description_g2_struct) 
		    ? x2 : Qnil;
	}
	else
	    gensymed_symbol = Nil;
	if (gensymed_symbol) {
	    sub_class_bit_vector = ISVREF(gensymed_symbol,(SI_Long)19L);
	    superior_class_bit_number = 
		    IFIX(ISVREF(Parameter_class_description,(SI_Long)18L));
	    sub_class_vector_index = superior_class_bit_number >>  -  - 
		    (SI_Long)3L;
	    if (sub_class_vector_index < 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
		gensymed_symbol_1 = UBYTE_8_ISAREF_1(sub_class_bit_vector,
			sub_class_vector_index);
		gensymed_symbol_2 = (SI_Long)1L;
		gensymed_symbol_3 = superior_class_bit_number & (SI_Long)7L;
		gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
		gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
		temp = (SI_Long)0L < gensymed_symbol_1;
	    }
	    else
		temp = TRUEP(Nil);
	}
	else
	    temp = TRUEP(Nil);
	if (temp);
	else if (unknown_allowed_qm) {
	    if (SIMPLE_VECTOR_P(stack_value) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(stack_value)) > 
		    (SI_Long)2L &&  !EQ(ISVREF(stack_value,(SI_Long)1L),
		    Qavailable_frame_vector)) {
		x2 = ISVREF(stack_value,(SI_Long)1L);
		gensymed_symbol = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
			(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? x2 : Qnil;
	    }
	    else
		gensymed_symbol = Nil;
	    if (gensymed_symbol) {
		sub_class_bit_vector = ISVREF(gensymed_symbol,(SI_Long)19L);
		superior_class_bit_number = 
			IFIX(ISVREF(Variable_class_description,(SI_Long)18L));
		sub_class_vector_index = superior_class_bit_number >>  -  
			- (SI_Long)3L;
		if (sub_class_vector_index < 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
			    {
		    gensymed_symbol_1 = 
			    UBYTE_8_ISAREF_1(sub_class_bit_vector,
			    sub_class_vector_index);
		    gensymed_symbol_2 = (SI_Long)1L;
		    gensymed_symbol_3 = superior_class_bit_number & 
			    (SI_Long)7L;
		    gensymed_symbol_2 = gensymed_symbol_2 << gensymed_symbol_3;
		    gensymed_symbol_1 = gensymed_symbol_1 & gensymed_symbol_2;
		    temp = (SI_Long)0L < gensymed_symbol_1;
		}
		else
		    temp = TRUEP(Nil);
	    }
	    else
		temp = TRUEP(Nil);
	}
	else
	    temp = TRUEP(Nil);
	if (temp) {
	    Cached_top_of_stack = top_of_stack;
	    value = EQ(Current_environment,Qinference_engine) || 
		    EQ(Current_environment,Qprocedure) ? 
		    get_current_evaluation_value(stack_value,Nil) : 
		    get_current_evaluation_value_from_simulation_environment(stack_value);
	    ISVREF(local_stack,stack_index) = value;
	}
	else
	    value = stack_value;
	if (unknown_allowed_qm &&  !TRUEP(Stack_expiration));
	else {
	    if (SIMPLE_VECTOR_P(value) && 
		    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(value)) > (SI_Long)2L 
		    &&  !EQ(ISVREF(value,(SI_Long)1L),
			Qavailable_frame_vector)) {
		x2 = ISVREF(value,(SI_Long)1L);
		temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
			Qg2_defstruct_structure_name_class_description_g2_struct) 
			? TRUEP(x2) : TRUEP(Qnil);
	    }
	    else
		temp = TRUEP(Nil);
	    if (temp)
		procedure_argument_list_error(top_of_stack,procedure,name,
			type,value);
	    else if (type_specification_type_p(value,type));
	    else if (EQ(type,Qfloat) && FIXNUMP(value)) {
		amf_available_array_cons_qm = 
			ISVREF(Vector_of_simple_float_array_pools,(SI_Long)1L);
		if (amf_available_array_cons_qm) {
		    amf_array = M_CAR(amf_available_array_cons_qm);
		    temp_3 = Vector_of_simple_float_array_pools;
		    svref_new_value = M_CDR(amf_available_array_cons_qm);
		    SVREF(temp_3,FIX((SI_Long)1L)) = svref_new_value;
		    inline_note_reclaim_cons(amf_available_array_cons_qm,
			    Qab_gensym);
		    temp_3 = Available_gensym_conses;
		    M_CDR(amf_available_array_cons_qm) = temp_3;
		    Available_gensym_conses = amf_available_array_cons_qm;
		    amf_result = amf_array;
		}
		else {
		    temp_3 = 
			    FIXNUM_ADD1(Created_simple_float_array_pool_arrays);
		    Created_simple_float_array_pool_arrays = temp_3;
		    incff_1_arg = 
			    bytes_per_double_float_simple_array(FIX((SI_Long)1L));
		    temp_3 = 
			    FIXNUM_ADD(Simple_float_array_pool_memory_usage,
			    incff_1_arg);
		    Simple_float_array_pool_memory_usage = temp_3;
		    amf_result = generate_float_vector(FIX((SI_Long)1L));
		}
		new_float = amf_result;
		aref_new_value = (double)IFIX(value);
		DFLOAT_ISASET_1(new_float,(SI_Long)0L,aref_new_value);
		ISVREF(local_stack,stack_index) = new_float;
	    }
	    else
		procedure_argument_list_error(top_of_stack,procedure,name,
			type,value);
	}
    }
    ab_loop_iter_flag_ = Nil;
    stack_index = stack_index + (SI_Long)1L;
    goto next_loop;
  end_loop:
    return VALUES_1(Qnil);
}

/* FUNCALL-PREPARE-POSSIBLY-UNKNOWN-PROCEDURE-ARGUMENTS-INST */
Object funcall_prepare_possibly_unknown_procedure_arguments_inst(top_of_stack,
	    local_stack)
    Object top_of_stack, local_stack;
{
    x_note_fn_call(210,148);
    prepare_procedure_arguments_on_stack(top_of_stack,local_stack,T);
    return VALUES_1(Nil);
}

/* FUNCALL-COERCE-ITEM-OR-VALUES-TO-MATCHING-ELEMENT-TYPE-INST */
Object funcall_coerce_item_or_values_to_matching_element_type_inst(top_of_stack,
	    local_stack)
    Object top_of_stack, local_stack;
{
    x_note_fn_call(210,149);
    coerce_elements_to_matching_element_type_on_stack(top_of_stack,
	    local_stack,Nil);
    return VALUES_1(Nil);
}

/* FUNCALL-COERCE-ITEM-OR-VALUES-TO-MATCHING-ELEMENT-TYPE-OR-UNKNOWN-INST */
Object funcall_coerce_item_or_values_to_matching_element_type_or_unknown_inst(top_of_stack,
	    local_stack)
    Object top_of_stack, local_stack;
{
    x_note_fn_call(210,150);
    coerce_elements_to_matching_element_type_on_stack(top_of_stack,
	    local_stack,T);
    return VALUES_1(Nil);
}

/* COERCE-ELEMENTS-TO-MATCHING-ELEMENT-TYPE-ON-STACK */
Object coerce_elements_to_matching_element_type_on_stack(top_of_stack,
	    local_stack,unknown_allowed_qm)
    Object top_of_stack, local_stack, unknown_allowed_qm;
{
    Object argument_count, g2_array_or_list_stack_index, g2_array_or_list;
    Object stack_value, new_value_qm, register_1, register_2;
    SI_Long stack_index, ab_loop_bind_;
    Object result;

    x_note_fn_call(210,151);
    argument_count = FIXNUM_SUB1(ISVREF(local_stack,IFIX(top_of_stack)));
    g2_array_or_list_stack_index = FIXNUM_SUB1(FIXNUM_MINUS(top_of_stack,
	    argument_count));
    g2_array_or_list = ISVREF(local_stack,IFIX(g2_array_or_list_stack_index));
    stack_index = IFIX(FIXNUM_ADD1(g2_array_or_list_stack_index));
    ab_loop_bind_ = IFIX(top_of_stack);
    stack_value = Nil;
    new_value_qm = Nil;
  next_loop:
    if (stack_index >= ab_loop_bind_)
	goto end_loop;
    stack_value = ISVREF(local_stack,stack_index);
    result = coerce_matching_element_type_or_unknown(g2_array_or_list,
	    stack_value,top_of_stack,unknown_allowed_qm);
    MVS_2(result,register_1,register_2);
    if (register_2)
	raw_stack_error_named_error(top_of_stack,register_2);
    new_value_qm = register_1;
    if ( !(FIXNUMP(stack_value) || SYMBOLP(stack_value) || 
	    SIMPLE_VECTOR_P(stack_value)))
	reclaim_if_evaluation_value_1(stack_value);
    ISVREF(local_stack,stack_index) = new_value_qm;
    stack_index = stack_index + (SI_Long)1L;
    goto next_loop;
  end_loop:
    return VALUES_1(Qnil);
}

/* CONCLUDE-INTO-COMPONENT-DISPATCH */
Object conclude_into_component_dispatch(item,component_particulars,
	    new_value,deferred_components,original_component)
    Object item, component_particulars, new_value, deferred_components;
    Object original_component;
{
    Object temp;

    x_note_fn_call(210,152);
    temp = conclude_into_component(item,component_particulars,new_value,
	    deferred_components,original_component);
    return VALUES_1(temp);
}

static Object Qcurrent_computation_frame;  /* *current-computation-frame* */

static Object string_constant_170;  /* "The attribute ~a is only found on items." */

static Object string_constant_171;  /* "No support for concluding into ~NB components.  This is a G2 ~@
				     *         internal error, please call Gensym customer support."
				     */

/* CONCLUDE-INTO-COMPONENT */
Object conclude_into_component(item,component_particulars,new_value,
	    deferred_components,original_component)
    Object item, component_particulars, new_value, deferred_components;
    Object original_component;
{
    Object gensymed_symbol, attribute_name, class_qualifier_qm;
    Object enclosed_component, temp, name, class_1, error_string_qm, index_1;

    x_note_fn_call(210,153);
    if (CONSP(component_particulars) && EQ(M_CAR(component_particulars),
	    Qattribute)) {
	gensymed_symbol = M_CDR(component_particulars);
	attribute_name = M_CAR(gensymed_symbol);
	gensymed_symbol = M_CDR(gensymed_symbol);
	class_qualifier_qm = M_CAR(gensymed_symbol);
	enclosed_component = M_CAR(M_CDR(gensymed_symbol));
	temp = EQ(enclosed_component,Qcurrent_computation_frame) ? 
		(CONSP(item) && EQ(M_CDR(item),Qab_structure) ? 
		conclude_into_structure_attribute(item,attribute_name,
		class_qualifier_qm,new_value,deferred_components,
		original_component) : conclude_into_attribute_component(6,
		item,attribute_name,class_qualifier_qm,new_value,
		deferred_components,original_component)) : 
		conclude_into_component(item,enclosed_component,new_value,
		gensym_cons_1(component_particulars,deferred_components),
		original_component);
    }
    else if (CONSP(component_particulars) && 
	    EQ(M_CAR(component_particulars),Qaliased_attribute)) {
	gensymed_symbol = M_CDR(component_particulars);
	gensymed_symbol = M_CDR(gensymed_symbol);
	name = M_CAR(gensymed_symbol);
	gensymed_symbol = M_CDR(gensymed_symbol);
	class_1 = M_CAR(gensymed_symbol);
	enclosed_component = M_CAR(M_CDR(gensymed_symbol));
	temp = EQ(enclosed_component,Qcurrent_computation_frame) ? 
		conclude_into_attribute_component(6,item,name,class_1,
		new_value,deferred_components,original_component) : 
		conclude_into_component(item,enclosed_component,new_value,
		gensym_cons_1(component_particulars,deferred_components),
		original_component);
    }
    else if (CONSP(component_particulars) && 
	    EQ(M_CAR(component_particulars),Qvirtual_attribute)) {
	gensymed_symbol = M_CDR(component_particulars);
	name = M_CAR(gensymed_symbol);
	enclosed_component = M_CAR(M_CDR(gensymed_symbol));
	if (EQ(enclosed_component,Qcurrent_computation_frame)) {
	    error_string_qm = 
		    conclude_into_virtual_attribute_component(item,name,
		    get_property_value_function(3,
		    get_symbol_properties_function(name),
		    Qvirtual_attribute,Nil),new_value,deferred_components,
		    original_component);
	    if ( !TRUEP(error_string_qm)) {
		if ( !(FIXNUMP(new_value) || SYMBOLP(new_value) || 
			SIMPLE_VECTOR_P(new_value)))
		    reclaim_if_evaluation_value_1(new_value);
	    }
	    temp = error_string_qm;
	}
	else
	    temp = tformat_text_string(2,string_constant_170,name);
    }
    else if (CONSP(component_particulars) && 
	    EQ(M_CAR(component_particulars),Qelement)) {
	gensymed_symbol = M_CDR(component_particulars);
	index_1 = M_CAR(gensymed_symbol);
	enclosed_component = M_CAR(M_CDR(gensymed_symbol));
	temp = EQ(enclosed_component,Qcurrent_computation_frame) ? 
		conclude_into_element_component(item,index_1,new_value,
		deferred_components,original_component) : 
		conclude_into_component(item,enclosed_component,new_value,
		gensym_cons_1(component_particulars,deferred_components),
		original_component);
    }
    else
	temp = tformat_text_string(3,string_constant_171,
		component_particulars,item);
    return VALUES_1(temp);
}

/* REBUILD-DEFERRED-COMPONENT */
Object rebuild_deferred_component(deferred_component_list)
    Object deferred_component_list;
{
    Object rebuilt_component, component, ab_loop_list_, gensymed_symbol, name;
    Object class_1, alias, gensymed_symbol_1, temp;

    x_note_fn_call(210,154);
    rebuilt_component = Qcurrent_computation_frame;
    component = Nil;
    ab_loop_list_ = deferred_component_list;
  next_loop:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    component = M_CAR(ab_loop_list_);
    ab_loop_list_ = M_CDR(ab_loop_list_);
    if (CONSP(component) && EQ(M_CAR(component),Qattribute)) {
	gensymed_symbol = M_CDR(component);
	name = M_CAR(gensymed_symbol);
	gensymed_symbol = M_CDR(gensymed_symbol);
	class_1 = M_CAR(gensymed_symbol);
	rebuilt_component = gensym_list_4(Qattribute,name,class_1,
		rebuilt_component);
    }
    else if (CONSP(component) && EQ(M_CAR(component),Qaliased_attribute)) {
	gensymed_symbol = M_CDR(component);
	alias = M_CAR(gensymed_symbol);
	gensymed_symbol = M_CDR(gensymed_symbol);
	name = M_CAR(gensymed_symbol);
	gensymed_symbol = M_CDR(gensymed_symbol);
	class_1 = M_CAR(gensymed_symbol);
	gensymed_symbol = make_gensym_list_1(FIX((SI_Long)5L));
	gensymed_symbol_1 = gensymed_symbol;
	M_CAR(gensymed_symbol_1) = Qaliased_attribute;
	gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
	M_CAR(gensymed_symbol_1) = alias;
	gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
	M_CAR(gensymed_symbol_1) = name;
	gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
	M_CAR(gensymed_symbol_1) = class_1;
	gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
	M_CAR(gensymed_symbol_1) = rebuilt_component;
	rebuilt_component = gensymed_symbol;
    }
    else if (CONSP(component) && EQ(M_CAR(component),Qelement))
	rebuilt_component = gensym_list_3(Qelement,M_CAR(M_CDR(component)),
		rebuilt_component);
    else
	rebuilt_component = error((SI_Long)2L,
		"Cannot rebuild component ~a.",component);
    goto next_loop;
  end_loop:
    temp = rebuilt_component;
    goto end_1;
    temp = Qnil;
  end_1:;
    return VALUES_1(temp);
}

Object The_type_description_of_component_change_report = UNBOUND;

Object Chain_of_available_component_change_reports = UNBOUND;

Object Component_change_report_count = UNBOUND;

/* COMPONENT-CHANGE-REPORT-STRUCTURE-MEMORY-USAGE */
Object component_change_report_structure_memory_usage()
{
    Object temp;

    x_note_fn_call(210,155);
    temp = Component_change_report_count;
    temp = FIXNUM_TIMES(temp,bytes_per_simple_vector(FIX((SI_Long)2L)));
    return VALUES_1(temp);
}

/* OUTSTANDING-COMPONENT-CHANGE-REPORT-COUNT */
Object outstanding_component_change_report_count()
{
    Object def_structure_component_change_report_variable, count_1;
    SI_Long gensymed_symbol, gensymed_symbol_1;

    x_note_fn_call(210,156);
    gensymed_symbol = IFIX(Component_change_report_count);
    def_structure_component_change_report_variable = 
	    Chain_of_available_component_change_reports;
    count_1 = FIX((SI_Long)0L);
  next_loop:
    if ( !TRUEP(def_structure_component_change_report_variable))
	goto end_loop;
    def_structure_component_change_report_variable = 
	    ISVREF(def_structure_component_change_report_variable,(SI_Long)0L);
    count_1 = FIXNUM_ADD1(count_1);
    goto next_loop;
  end_loop:
    gensymed_symbol_1 = IFIX(count_1);
    goto end_1;
    gensymed_symbol_1 = IFIX(Qnil);
  end_1:;
    return VALUES_1(FIX(gensymed_symbol - gensymed_symbol_1));
}

/* RECLAIM-COMPONENT-CHANGE-REPORT-1 */
Object reclaim_component_change_report_1(component_change_report)
    Object component_change_report;
{
    Object old_structure_being_reclaimed, thing, svref_new_value;

    x_note_fn_call(210,157);
    inline_note_reclaim_cons(component_change_report,Nil);
    old_structure_being_reclaimed = Structure_being_reclaimed;
    Structure_being_reclaimed = component_change_report;
    thing = ISVREF(component_change_report,(SI_Long)1L);
    if (INLINE_UNSIGNED_BYTE_16_VECTOR_P(thing) != (SI_Long)0L)
	reclaim_wide_string(thing);
    SVREF(component_change_report,FIX((SI_Long)1L)) = Nil;
    Structure_being_reclaimed = old_structure_being_reclaimed;
    svref_new_value = Chain_of_available_component_change_reports;
    SVREF(component_change_report,FIX((SI_Long)0L)) = svref_new_value;
    Chain_of_available_component_change_reports = component_change_report;
    return VALUES_1(Nil);
}

/* RECLAIM-STRUCTURE-FOR-COMPONENT-CHANGE-REPORT */
Object reclaim_structure_for_component_change_report(component_change_report)
    Object component_change_report;
{
    x_note_fn_call(210,158);
    return reclaim_component_change_report_1(component_change_report);
}

static Object Qg2_defstruct_structure_name_component_change_report_g2_struct;  /* g2-defstruct-structure-name::component-change-report-g2-struct */

/* MAKE-PERMANENT-COMPONENT-CHANGE-REPORT-STRUCTURE-INTERNAL */
Object make_permanent_component_change_report_structure_internal()
{
    Object def_structure_component_change_report_variable;
    Object component_change_report_count_new_value;
    Object defstruct_g2_component_change_report_variable, the_array;
    SI_Long gensymed_symbol, i, ab_loop_bind_;
    XDeclare_area(1);

    x_note_fn_call(210,159);
    def_structure_component_change_report_variable = Nil;
    component_change_report_count_new_value = 
	    FIXNUM_ADD1(Component_change_report_count);
    Component_change_report_count = component_change_report_count_new_value;
    if (PUSH_AREA(Dynamic_area,0)) {
	defstruct_g2_component_change_report_variable = Nil;
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
	defstruct_g2_component_change_report_variable = the_array;
	SVREF(defstruct_g2_component_change_report_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_component_change_report_g2_struct;
	def_structure_component_change_report_variable = 
		defstruct_g2_component_change_report_variable;
    }
    POP_AREA(0);
    return VALUES_1(def_structure_component_change_report_variable);
}

/* MAKE-COMPONENT-CHANGE-REPORT-1 */
Object make_component_change_report_1(component_change_report_text)
    Object component_change_report_text;
{
    Object def_structure_component_change_report_variable;

    x_note_fn_call(210,160);
    def_structure_component_change_report_variable = 
	    Chain_of_available_component_change_reports;
    if (def_structure_component_change_report_variable) {
	Chain_of_available_component_change_reports = 
		ISVREF(def_structure_component_change_report_variable,
		(SI_Long)0L);
	SVREF(def_structure_component_change_report_variable,
		FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_component_change_report_g2_struct;
    }
    else
	def_structure_component_change_report_variable = 
		make_permanent_component_change_report_structure_internal();
    inline_note_allocate_cons(def_structure_component_change_report_variable,
	    Nil);
    SVREF(def_structure_component_change_report_variable,FIX((SI_Long)1L)) 
	    = component_change_report_text;
    return VALUES_1(def_structure_component_change_report_variable);
}

static Object string_constant_172;  /* "Unable set the ~a of ~NA, it's not a structure." */

static Object string_constant_173;  /* "Unable to change values within the ~a attribute, since ~@
				     *                      ~NA has no value for that attribute."
				     */

static Object string_constant_174;  /* "Unable to set element ~a of ~NA, it's not a sequence." */

static Object string_constant_175;  /* "Unable to change values within element ~a, since ~NA has ~@
				     *                     no value at that index."
				     */

static Object array_constant_93;   /* # */

/* PERFORM-DEFERRED-COMPONENT-MUTATIONS */
Object perform_deferred_component_mutations(evaluation_value,
	    component_particular_list,new_value)
    Object evaluation_value, component_particular_list, new_value;
{
    Object component_particulars, new_list, x2, new_component, temp_1;
    Object attribute, gensymed_symbol, mutable_structure;
    Object modified_value_or_error, enclosed_value, gensymed_symbol_2;
    Object gensymed_symbol_3, item_or_value, gensymed_symbol_4, svref_arg_1;
    Object index_1, length_1, new_sequence, mutable_sequence;
    Object enclosed_value_qm, temp_3, svref_new_value;
    Object current_wide_string_list, wide_string_bv16, current_wide_string;
    Object fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    SI_Long gensymed_symbol_1, gensymed_symbol_5, ab_loop_bind_, value_index;
    SI_Long temp_2, arg, arg_1, arg_2, bv16_length, aref_new_value, length_2;
    char temp;
    Declare_special(5);

    x_note_fn_call(210,161);
    component_particulars = M_CAR(component_particular_list);
    new_list = M_CDR(component_particular_list);
    if (SIMPLE_VECTOR_P(evaluation_value) && 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(evaluation_value)) > 
	    (SI_Long)2L &&  !EQ(ISVREF(evaluation_value,(SI_Long)1L),
	    Qavailable_frame_vector)) {
	x2 = ISVREF(evaluation_value,(SI_Long)1L);
	temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
		Qg2_defstruct_structure_name_class_description_g2_struct) ?
		 TRUEP(x2) : TRUEP(Qnil);
    }
    else
	temp = TRUEP(Nil);
    if (temp) {
	new_component = rebuild_deferred_component(component_particular_list);
	temp_1 = 
		make_component_change_report_1(conclude_into_component(evaluation_value,
		new_component,new_value,Nil,new_component));
	reclaim_slot_value(new_component);
    }
    else if (CONSP(component_particulars) && 
	    EQ(M_CAR(component_particulars),Qattribute)) {
	attribute = M_CAR(M_CDR(component_particulars));
	if ( !(CONSP(evaluation_value) && EQ(M_CDR(evaluation_value),
		Qab_structure)))
	    temp_1 = make_component_change_report_1(tformat_text_string(3,
		    string_constant_172,attribute,evaluation_value));
	else {
	    gensymed_symbol = M_CAR(evaluation_value);
	    gensymed_symbol_1 = (SI_Long)0L;
	    if ( !((FIXNUM_LE(ISVREF(M_CAR(evaluation_value),(SI_Long)1L),
		    Maximum_in_place_array_size) ? 
		    IFIX(ISVREF(M_CAR(evaluation_value),gensymed_symbol_1 
		    + IFIX(Managed_array_index_offset))) : 
		    IFIX(ISVREF(ISVREF(gensymed_symbol,(gensymed_symbol_1 
		    >>  -  - (SI_Long)10L) + (SI_Long)2L),
		    gensymed_symbol_1 & (SI_Long)1023L))) == (SI_Long)1L)) {
		gensymed_symbol = evaluation_value;
		gensymed_symbol = M_CAR(gensymed_symbol);
		mutable_structure = 
			make_unique_evaluation_structure_copy_1(gensymed_symbol);
		modified_value_or_error = 
			perform_deferred_component_mutations(mutable_structure,
			component_particular_list,new_value);
		if (SIMPLE_VECTOR_P(modified_value_or_error) && 
			EQ(ISVREF(modified_value_or_error,(SI_Long)0L),
			Qg2_defstruct_structure_name_component_change_report_g2_struct)) 
			    {
		    reclaim_evaluation_structure(mutable_structure);
		    temp_1 = modified_value_or_error;
		}
		else {
		    reclaim_evaluation_structure(evaluation_value);
		    temp_1 = modified_value_or_error;
		}
	    }
	    else if (new_list) {
		enclosed_value = estructure_slot(evaluation_value,
			attribute,Nil);
		if (enclosed_value) {
		    modified_value_or_error = 
			    perform_deferred_component_mutations(enclosed_value,
			    new_list,new_value);
		    if (SIMPLE_VECTOR_P(modified_value_or_error) && 
			    EQ(ISVREF(modified_value_or_error,(SI_Long)0L),
			    Qg2_defstruct_structure_name_component_change_report_g2_struct))
			temp_1 = modified_value_or_error;
		    else {
			if ( !EQ(modified_value_or_error,enclosed_value)) {
			    gensymed_symbol = evaluation_value;
			    gensymed_symbol_2 = M_CAR(gensymed_symbol);
			    gensymed_symbol_1 = 
				    IFIX(ISVREF(gensymed_symbol_2,
				    (SI_Long)1L));
			    gensymed_symbol_3 = attribute;
			    item_or_value = modified_value_or_error;
			    if (SIMPLE_VECTOR_P(item_or_value) && 
				    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) 
				    > (SI_Long)2L &&  
				    !EQ(ISVREF(item_or_value,(SI_Long)1L),
				    Qavailable_frame_vector)) {
				x2 = ISVREF(item_or_value,(SI_Long)1L);
				temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
					(SI_Long)0L),
					Qg2_defstruct_structure_name_class_description_g2_struct) 
					? TRUEP(x2) : TRUEP(Qnil);
			    }
			    else
				temp = TRUEP(Nil);
			    gensymed_symbol_4 = temp ? 
				    get_reference_to_item(item_or_value) : 
				    item_or_value;
			    gensymed_symbol_5 = (SI_Long)1L;
			    ab_loop_bind_ = gensymed_symbol_1;
			  next_loop:
			    if (gensymed_symbol_5 >= ab_loop_bind_)
				goto end_loop;
			    if (EQ(FIXNUM_LE(ISVREF(gensymed_symbol_2,
				    (SI_Long)1L),
				    Maximum_in_place_array_size) ? 
				    ISVREF(gensymed_symbol_2,
				    gensymed_symbol_5 + 
				    IFIX(Managed_array_index_offset)) : 
				    ISVREF(ISVREF(gensymed_symbol_2,
				    (gensymed_symbol_5 >>  -  - 
				    (SI_Long)10L) + (SI_Long)2L),
				    gensymed_symbol_5 & (SI_Long)1023L),
				    gensymed_symbol_3)) {
				value_index = gensymed_symbol_5 + (SI_Long)1L;
				if (FIXNUM_LE(ISVREF(gensymed_symbol_2,
					(SI_Long)1L),
					Maximum_in_place_array_size)) {
				    temp_2 = value_index + 
					    IFIX(Managed_array_index_offset);
				    ISVREF(gensymed_symbol_2,temp_2) = 
					    gensymed_symbol_4;
				}
				else {
				    svref_arg_1 = ISVREF(gensymed_symbol_2,
					    (value_index >>  -  - 
					    (SI_Long)10L) + (SI_Long)2L);
				    temp_2 = value_index & (SI_Long)1023L;
				    ISVREF(svref_arg_1,temp_2) = 
					    gensymed_symbol_4;
				}
				goto end_1;
			    }
			    gensymed_symbol_5 = gensymed_symbol_5 + 
				    (SI_Long)2L;
			    goto next_loop;
			  end_loop:
			    gensymed_symbol_2 = adjust_managed_array(2,
				    gensymed_symbol_2,
				    FIX(gensymed_symbol_1 + (SI_Long)2L));
			    M_CAR(gensymed_symbol) = gensymed_symbol_2;
			    if (FIXNUM_LE(ISVREF(gensymed_symbol_2,
				    (SI_Long)1L),
					Maximum_in_place_array_size)) {
				temp_2 = gensymed_symbol_1 + 
					IFIX(Managed_array_index_offset);
				ISVREF(gensymed_symbol_2,temp_2) = 
					gensymed_symbol_3;
			    }
			    else {
				svref_arg_1 = ISVREF(gensymed_symbol_2,
					(gensymed_symbol_1 >>  -  - 
					(SI_Long)10L) + (SI_Long)2L);
				temp_2 = gensymed_symbol_1 & (SI_Long)1023L;
				ISVREF(svref_arg_1,temp_2) = gensymed_symbol_3;
			    }
			    gensymed_symbol_1 = gensymed_symbol_1 + 
				    (SI_Long)1L;
			    if (FIXNUM_LE(ISVREF(gensymed_symbol_2,
				    (SI_Long)1L),
					Maximum_in_place_array_size)) {
				temp_2 = gensymed_symbol_1 + 
					IFIX(Managed_array_index_offset);
				ISVREF(gensymed_symbol_2,temp_2) = 
					gensymed_symbol_4;
			    }
			    else {
				svref_arg_1 = ISVREF(gensymed_symbol_2,
					(gensymed_symbol_1 >>  -  - 
					(SI_Long)10L) + (SI_Long)2L);
				temp_2 = gensymed_symbol_1 & (SI_Long)1023L;
				ISVREF(svref_arg_1,temp_2) = gensymed_symbol_4;
			    }
			    goto end_1;
			  end_1:;
			}
			temp_1 = evaluation_value;
		    }
		}
		else
		    temp_1 = 
			    make_component_change_report_1(tformat_text_string(3,
			    string_constant_173,attribute,evaluation_value));
	    }
	    else {
		set_evaluation_structure_slot(evaluation_value,attribute,
			new_value);
		temp_1 = evaluation_value;
	    }
	}
    }
    else if (CONSP(component_particulars) && 
	    EQ(M_CAR(component_particulars),Qelement)) {
	index_1 = M_CAR(M_CDR(component_particulars));
	if ( !(CONSP(evaluation_value) && EQ(M_CDR(evaluation_value),
		Qsequence)))
	    temp_1 = make_component_change_report_1(tformat_text_string(3,
		    string_constant_174,index_1,evaluation_value));
	else if ( !((FIXNUM_LE(ISVREF(M_CAR(evaluation_value),(SI_Long)1L),
		Maximum_in_place_array_size) ? 
		IFIX(ISVREF(M_CAR(evaluation_value),(SI_Long)0L + 
		IFIX(Managed_array_index_offset))) : 
		IFIX(ISVREF(ISVREF(M_CAR(evaluation_value),(SI_Long)2L),
		(SI_Long)0L))) == (SI_Long)1L)) {
	    length_1 = FIXNUM_SUB1(ISVREF(M_CAR(evaluation_value),
		    (SI_Long)1L));
	    new_sequence = allocate_empty_evaluation_sequence(length_1);
	    copy_evaluation_sequence_elements(evaluation_value,
		    FIX((SI_Long)0L),length_1,new_sequence,FIX((SI_Long)0L));
	    mutable_sequence = new_sequence;
	    modified_value_or_error = 
		    perform_deferred_component_mutations(mutable_sequence,
		    component_particular_list,new_value);
	    if (SIMPLE_VECTOR_P(modified_value_or_error) && 
		    EQ(ISVREF(modified_value_or_error,(SI_Long)0L),
		    Qg2_defstruct_structure_name_component_change_report_g2_struct)) 
			{
		reclaim_evaluation_sequence(mutable_sequence);
		temp_1 = modified_value_or_error;
	    }
	    else {
		reclaim_evaluation_sequence(evaluation_value);
		temp_1 = modified_value_or_error;
	    }
	}
	else {
	    enclosed_value_qm = evaluation_sequence_aref(evaluation_value,
		    index_1);
	    if ( !TRUEP(enclosed_value_qm)) {
		arg = (SI_Long)-1L;
		arg_1 = IFIX(index_1);
		arg_2 = IFIX(FIXNUM_SUB1(ISVREF(M_CAR(evaluation_value),
			(SI_Long)1L)));
		temp =  !(arg < arg_1 && arg_1 < arg_2);
	    }
	    else
		temp = TRUEP(Nil);
	    if (temp)
		temp_1 = 
			make_component_change_report_1(tformat_text_string(3,
			string_constant_175,index_1,evaluation_value));
	    else if (new_list) {
		modified_value_or_error = 
			perform_deferred_component_mutations(enclosed_value_qm,
			new_list,new_value);
		if (SIMPLE_VECTOR_P(modified_value_or_error) && 
			EQ(ISVREF(modified_value_or_error,(SI_Long)0L),
			Qg2_defstruct_structure_name_component_change_report_g2_struct))
		    temp_1 = modified_value_or_error;
		else {
		    if ( !EQ(modified_value_or_error,enclosed_value_qm)) {
			gensymed_symbol = M_CAR(evaluation_value);
			gensymed_symbol_2 = FIXNUM_ADD1(index_1);
			if (FIXNUM_LE(ISVREF(M_CAR(evaluation_value),
				(SI_Long)1L),Maximum_in_place_array_size)) {
			    svref_arg_1 = M_CAR(evaluation_value);
			    temp_3 = FIXNUM_ADD(gensymed_symbol_2,
				    Managed_array_index_offset);
			    item_or_value = modified_value_or_error;
			    if (SIMPLE_VECTOR_P(item_or_value) && 
				    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) 
				    > (SI_Long)2L &&  
				    !EQ(ISVREF(item_or_value,(SI_Long)1L),
				    Qavailable_frame_vector)) {
				x2 = ISVREF(item_or_value,(SI_Long)1L);
				temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
					(SI_Long)0L),
					Qg2_defstruct_structure_name_class_description_g2_struct) 
					? TRUEP(x2) : TRUEP(Qnil);
			    }
			    else
				temp = TRUEP(Nil);
			    svref_new_value = temp ? 
				    get_reference_to_item(item_or_value) : 
				    item_or_value;
			    SVREF(svref_arg_1,temp_3) = svref_new_value;
			}
			else {
			    svref_arg_1 = ISVREF(gensymed_symbol,
				    (IFIX(gensymed_symbol_2) >>  -  - 
				    (SI_Long)10L) + (SI_Long)2L);
			    temp_2 = IFIX(gensymed_symbol_2) & (SI_Long)1023L;
			    item_or_value = modified_value_or_error;
			    if (SIMPLE_VECTOR_P(item_or_value) && 
				    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) 
				    > (SI_Long)2L &&  
				    !EQ(ISVREF(item_or_value,(SI_Long)1L),
				    Qavailable_frame_vector)) {
				x2 = ISVREF(item_or_value,(SI_Long)1L);
				temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
					(SI_Long)0L),
					Qg2_defstruct_structure_name_class_description_g2_struct) 
					? TRUEP(x2) : TRUEP(Qnil);
			    }
			    else
				temp = TRUEP(Nil);
			    temp_3 = temp ? 
				    get_reference_to_item(item_or_value) : 
				    item_or_value;
			    ISVREF(svref_arg_1,temp_2) = temp_3;
			}
		    }
		    temp_1 = evaluation_value;
		}
	    }
	    else {
		if ( !(FIXNUMP(enclosed_value_qm) || 
			SYMBOLP(enclosed_value_qm) || 
			SIMPLE_VECTOR_P(enclosed_value_qm)))
		    reclaim_if_evaluation_value_1(enclosed_value_qm);
		gensymed_symbol = M_CAR(evaluation_value);
		gensymed_symbol_2 = FIXNUM_ADD1(index_1);
		if (FIXNUM_LE(ISVREF(M_CAR(evaluation_value),(SI_Long)1L),
			Maximum_in_place_array_size)) {
		    svref_arg_1 = M_CAR(evaluation_value);
		    temp_3 = FIXNUM_ADD(gensymed_symbol_2,
			    Managed_array_index_offset);
		    item_or_value = new_value;
		    if (SIMPLE_VECTOR_P(item_or_value) && 
			    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) 
			    > (SI_Long)2L &&  !EQ(ISVREF(item_or_value,
			    (SI_Long)1L),Qavailable_frame_vector)) {
			x2 = ISVREF(item_or_value,(SI_Long)1L);
			temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
				(SI_Long)0L),
				Qg2_defstruct_structure_name_class_description_g2_struct) 
				? TRUEP(x2) : TRUEP(Qnil);
		    }
		    else
			temp = TRUEP(Nil);
		    svref_new_value = temp ? 
			    get_reference_to_item(item_or_value) : 
			    item_or_value;
		    SVREF(svref_arg_1,temp_3) = svref_new_value;
		}
		else {
		    svref_arg_1 = ISVREF(gensymed_symbol,
			    (IFIX(gensymed_symbol_2) >>  -  - 
			    (SI_Long)10L) + (SI_Long)2L);
		    temp_2 = IFIX(gensymed_symbol_2) & (SI_Long)1023L;
		    item_or_value = new_value;
		    if (SIMPLE_VECTOR_P(item_or_value) && 
			    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(item_or_value)) 
			    > (SI_Long)2L &&  !EQ(ISVREF(item_or_value,
			    (SI_Long)1L),Qavailable_frame_vector)) {
			x2 = ISVREF(item_or_value,(SI_Long)1L);
			temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,
				(SI_Long)0L),
				Qg2_defstruct_structure_name_class_description_g2_struct) 
				? TRUEP(x2) : TRUEP(Qnil);
		    }
		    else
			temp = TRUEP(Nil);
		    temp_3 = temp ? get_reference_to_item(item_or_value) : 
			    item_or_value;
		    ISVREF(svref_arg_1,temp_2) = temp_3;
		}
		temp_1 = evaluation_value;
	    }
	}
    }
    else {
	current_wide_string_list = Qdo_not_use;
	PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,4);
	  wide_string_bv16 = allocate_byte_vector_16(FIX((SI_Long)2048L + 
		  (SI_Long)3L));
	  bv16_length = IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wide_string_bv16));
	  temp_2 = bv16_length - (SI_Long)2L;
	  aref_new_value = (SI_Long)2048L & (SI_Long)65535L;
	  UBYTE_16_ISASET_1(wide_string_bv16,temp_2,aref_new_value);
	  temp_2 = bv16_length - (SI_Long)1L;
	  aref_new_value = (SI_Long)57344L | (SI_Long)0L;
	  UBYTE_16_ISASET_1(wide_string_bv16,temp_2,aref_new_value);
	  UBYTE_16_ISASET_1(wide_string_bv16,(SI_Long)2048L,(SI_Long)0L);
	  current_wide_string = wide_string_bv16;
	  PUSH_SPECIAL(Current_wide_string,current_wide_string,3);
	    fill_pointer_for_current_wide_string = FIX((SI_Long)0L);
	    PUSH_SPECIAL(Fill_pointer_for_current_wide_string,fill_pointer_for_current_wide_string,
		    2);
	      length_2 = IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
	      total_length_of_current_wide_string = 
		      FIX(UBYTE_16_ISAREF_1(Current_wide_string,length_2 - 
		      (SI_Long)2L) + 
		      ((UBYTE_16_ISAREF_1(Current_wide_string,length_2 - 
		      (SI_Long)1L) & (SI_Long)8191L) << (SI_Long)16L));
	      PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
		      1);
		current_twriting_output_type = Qwide_string;
		PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
			0);
		  twrite_beginning_of_wide_string(array_constant_93,
			  FIX((SI_Long)40L));
		  denote_component_of_block(3,Nil,component_particulars,Nil);
		  temp_1 = copy_out_current_wide_string();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
	temp_1 = make_component_change_report_1(temp_1);
    }
    return VALUES_1(temp_1);
}

static Object string_constant_176;  /* "Unable change ~a attribute, ~NA it's not a structure." */

/* CONCLUDE-INTO-STRUCTURE-ATTRIBUTE */
Object conclude_into_structure_attribute(ev_structure,attribute_name,
	    class_qualifier_qm,original_new_value,deferred_components,
	    original_component)
    Object ev_structure, attribute_name, class_qualifier_qm;
    Object original_new_value, deferred_components, original_component;
{
    Object new_value, item_slot, item_slot_is_valid_qm, item_slot_copy;
    Object modified_value_or_error, thing, temp;

    x_note_fn_call(210,162);
    new_value = FIXNUMP(original_new_value) || original_new_value && 
	    SYMBOLP(original_new_value) || 
	    SIMPLE_VECTOR_P(original_new_value) ? original_new_value : 
	    copy_if_evaluation_value_1(original_new_value);
    item_slot = estructure_slot(ev_structure,attribute_name,Nil);
    item_slot_is_valid_qm =  !TRUEP(deferred_components) ? T : Nil;
    if (item_slot_is_valid_qm);
    else
	item_slot_is_valid_qm = CONSP(item_slot) ? (EQ(M_CDR(item_slot),
		Qab_structure) ? T : Nil) : Qnil;
    item_slot_copy = item_slot_is_valid_qm ? 
	    copy_evaluation_structure(item_slot) : Qnil;
    modified_value_or_error = item_slot_is_valid_qm ? (deferred_components 
	    ? perform_deferred_component_mutations(item_slot_copy,
	    deferred_components,new_value) : new_value) : Qnil;
    if (deferred_components)
	reclaim_gensym_list_1(deferred_components);
    if ( !TRUEP(item_slot_is_valid_qm)) {
	if ( !(FIXNUMP(new_value) || SYMBOLP(new_value) || 
		SIMPLE_VECTOR_P(new_value)))
	    reclaim_if_evaluation_value_1(new_value);
	return tformat_text_string(3,string_constant_176,attribute_name,
		item_slot);
    }
    else if (SIMPLE_VECTOR_P(modified_value_or_error) && 
	    EQ(ISVREF(modified_value_or_error,(SI_Long)0L),
	    Qg2_defstruct_structure_name_component_change_report_g2_struct)) {
	reclaim_evaluation_value(item_slot_copy);
	if (ISVREF(modified_value_or_error,(SI_Long)1L)) {
	    if ( !(FIXNUMP(new_value) || SYMBOLP(new_value) || 
		    SIMPLE_VECTOR_P(new_value)))
		reclaim_if_evaluation_value_1(new_value);
	}
	else if ( !(FIXNUMP(original_new_value) || 
		SYMBOLP(original_new_value) || 
		SIMPLE_VECTOR_P(original_new_value)))
	    reclaim_if_evaluation_value_1(original_new_value);
	reclaim_evaluation_value(item_slot_copy);
	thing = ISVREF(modified_value_or_error,(SI_Long)1L);
	temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(thing) != (SI_Long)0L ? 
		copy_text_string(thing) : thing;
	reclaim_component_change_report_1(modified_value_or_error);
	return VALUES_1(temp);
    }
    else {
	set_evaluation_structure_slot(ev_structure,attribute_name,
		modified_value_or_error);
	reclaim_evaluation_value(item_slot_copy);
	if ( !(FIXNUMP(original_new_value) || SYMBOLP(original_new_value) 
		|| SIMPLE_VECTOR_P(original_new_value)))
	    reclaim_if_evaluation_value_1(original_new_value);
	return VALUES_1(Nil);
    }
}

static Object string_constant_177;  /* "Cannot edit ~NF, because ~A.  See the saving-parameters." */

static Object Qg2_defstruct_structure_name_slot_description_g2_struct;  /* g2-defstruct-structure-name::slot-description-g2-struct */

static Object string_constant_178;  /* "Unable to conclude into ~NB, since the ~NS of ~NF contained ~@
				     *                      an item, ~NF, when a structure or sequence was expected."
				     */

static Object string_constant_179;  /* "While executing a CONCLUDE action, could not locate a ~
				     *                        variable or parameter attribute of ~NF which has ~NV in ~
				     *                        its range of possible values."
				     */

static Object string_constant_180;  /* "Cannot conclude a value for ~NF, since it is a ~(~a~), ~@
				     *                        not a variable-or-parameter."
				     */

static Object string_constant_181;  /* "Unable to conclude that ~NF has no value, because ~@
				     *                           it is not an instance of the class variable."
				     */

static Object string_constant_182;  /* "Cannot conclude into the ~NS of ~NF because the item in ~@
				     *                   this attribute (~NF) is not active."
				     */

static Object Qnot_user_editable;  /* not-user-editable */

static Object string_constant_183;  /* "The attribute ~A of ~NF is read-only." */

static Object Qcategory_evaluator_interface;  /* category-evaluator-interface */

static Object Qtext_category_evaluator_interface_p;  /* text-category-evaluator-interface-p */

static Object string_constant_184;  /* "Unable to conclude ~NB, unable to fetch the ~@
				     * ????~NS attribute to modify its subparts."
				     */

static Object string_constant_185;  /* "Unable to conclude a new value into the ~NS of ~NF: ~a" */

static Object list_constant_15;    /* # */

/* CONCLUDE-INTO-ATTRIBUTE-COMPONENT */
Object conclude_into_attribute_component varargs_1(int, n)
{
    Object item, attribute_name, class_qualifier_qm, original_new_value;
    Object deferred_components, original_component;
    Object attribute_description_qm, reason_not_editable_qm, class_description;
    Object attribute_description_is_slot_description_p, slot_description_qm;
    Object unaliased_name_qm, user_attribute_qm, new_value, slot_value_qm, x2;
    Object slot_value_class_description_qm, place_or_error_text_qm;
    Object sub_class_bit_vector, slot_type_specification;
    Object reassigned_new_value_p, slot_copy, new_value_copy;
    Object modified_value_or_error, thing, temp_1, amf_available_array_cons_qm;
    Object amf_array, temp_2, svref_new_value, amf_result, incff_1_arg;
    Object new_float, float_value, slot_type_qm, category_qm, text_slot_qm;
    Object category_evaluator_interface, parse_result_maker_qm;
    Object text_of_definition_being_compiled, virtual_attribute_qm;
    Object evaluator_info, getter_qm, gensymed_symbol_3, gensymed_symbol_4;
    Object gensymed_symbol_5, extracted_value, reclaim_p, gensymed_symbol_6;
    Object current_value, current_edit_state, gensymed_symbol_7;
    Object parse_result_or_bad_phrase, error_string_qm, commit_error_string_qm;
    Object reason_for_failure_qm, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2, bv16_length, aref_arg_2;
    SI_Long aref_new_value_1, length_1;
    char temp;
    double aref_new_value;
    Declare_varargs_nonrelocating;
    Declare_special(6);
    XDeclare_area(1);
    XDeclare_frontier(1);
    Object result;

    x_note_fn_call(210,163);
    INIT_ARGS_nonrelocating();
    item = REQUIRED_ARG_nonrelocating();
    attribute_name = REQUIRED_ARG_nonrelocating();
    class_qualifier_qm = REQUIRED_ARG_nonrelocating();
    original_new_value = REQUIRED_ARG_nonrelocating();
    deferred_components = REQUIRED_ARG_nonrelocating();
    original_component = REQUIRED_ARG_nonrelocating();
    attribute_description_qm = OPTIONAL_ARG_P_nonrelocating() ? 
	    OPTIONAL_ARG_nonrelocating() : Nil;
    END_ARGS_nonrelocating();
    reason_not_editable_qm = 
	    reason_permanent_items_attribute_is_not_editable(3,item,
	    attribute_name,class_qualifier_qm);
    if (reason_not_editable_qm) {
	result = tformat_text_string(3,string_constant_177,item,
		reason_not_editable_qm);
	goto end_conclude_into_attribute_component;
    }
    class_description = ISVREF(item,(SI_Long)1L);
    attribute_description_is_slot_description_p = attribute_description_qm 
	    ? (SIMPLE_VECTOR_P(attribute_description_qm) ? 
	    (EQ(ISVREF(attribute_description_qm,(SI_Long)0L),
	    Qg2_defstruct_structure_name_slot_description_g2_struct) ? T : 
	    Nil) : Qnil) : Qnil;
    slot_description_qm = attribute_description_is_slot_description_p ? 
	    attribute_description_qm : 
	    get_slot_description_of_class_description_function(attribute_name,
	    class_description,class_qualifier_qm);
    if ( !TRUEP(slot_description_qm) ||  !TRUEP(ISVREF(slot_description_qm,
	    (SI_Long)8L)))
	unaliased_name_qm = get_slot_name_for_alias_if_any(attribute_name,
		item);
    else if (attribute_description_is_slot_description_p)
	unaliased_name_qm = ISVREF(attribute_description_qm,(SI_Long)2L);
    else
	unaliased_name_qm = Qnil;
    user_attribute_qm = slot_description_qm ? ISVREF(slot_description_qm,
	    (SI_Long)8L) : Qnil;
    new_value = original_new_value;
    if (user_attribute_qm) {
	slot_value_qm = get_slot_description_value(item,slot_description_qm);
	if (SIMPLE_VECTOR_P(slot_value_qm) && 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(slot_value_qm)) > 
		(SI_Long)2L &&  !EQ(ISVREF(slot_value_qm,(SI_Long)1L),
		Qavailable_frame_vector)) {
	    x2 = ISVREF(slot_value_qm,(SI_Long)1L);
	    slot_value_class_description_qm = SIMPLE_VECTOR_P(x2) && 
		    EQ(ISVREF(x2,(SI_Long)0L),
		    Qg2_defstruct_structure_name_class_description_g2_struct) 
		    ? x2 : Qnil;
	}
	else
	    slot_value_class_description_qm = Nil;
	if (slot_value_class_description_qm) {
	    if (deferred_components) {
		reclaim_gensym_list_1(deferred_components);
		result = tformat_text_string(7,string_constant_178,
			original_component,item,slot_description_qm,
			class_description,item,slot_value_qm);
	    }
	    else if (serve_item_p(slot_value_qm)) {
		place_or_error_text_qm = new_value && new_value && 
			SYMBOLP(new_value) ? 
			get_implied_attribute_place_or_error_description(slot_value_qm,
			new_value) : slot_value_qm;
		if ( !TRUEP(place_or_error_text_qm))
		    result = tformat_text_string(3,string_constant_179,
			    item,new_value);
		else if (text_string_p(place_or_error_text_qm))
		    result = VALUES_1(place_or_error_text_qm);
		else {
		    sub_class_bit_vector = 
			    ISVREF(ISVREF(place_or_error_text_qm,
			    (SI_Long)1L),(SI_Long)19L);
		    superior_class_bit_number = 
			    IFIX(ISVREF(Variable_or_parameter_class_description,
			    (SI_Long)18L));
		    sub_class_vector_index = superior_class_bit_number >>  
			    -  - (SI_Long)3L;
		    if (sub_class_vector_index < 
			    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				{
			gensymed_symbol = 
				UBYTE_8_ISAREF_1(sub_class_bit_vector,
				sub_class_vector_index);
			gensymed_symbol_1 = (SI_Long)1L;
			gensymed_symbol_2 = superior_class_bit_number & 
				(SI_Long)7L;
			gensymed_symbol_1 = gensymed_symbol_1 << 
				gensymed_symbol_2;
			gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
			temp = (SI_Long)0L < gensymed_symbol;
		    }
		    else
			temp = TRUEP(Nil);
		    if ( !temp)
			result = tformat_text_string(3,string_constant_180,
				place_or_error_text_qm,
				ISVREF(ISVREF(place_or_error_text_qm,
				(SI_Long)1L),(SI_Long)1L));
		    else if ( !TRUEP(new_value)) {
			sub_class_bit_vector = 
				ISVREF(ISVREF(place_or_error_text_qm,
				(SI_Long)1L),(SI_Long)19L);
			superior_class_bit_number = 
				IFIX(ISVREF(Variable_class_description,
				(SI_Long)18L));
			sub_class_vector_index = superior_class_bit_number 
				>>  -  - (SI_Long)3L;
			if (sub_class_vector_index < 
				IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) 
				    {
			    gensymed_symbol = 
				    UBYTE_8_ISAREF_1(sub_class_bit_vector,
				    sub_class_vector_index);
			    gensymed_symbol_1 = (SI_Long)1L;
			    gensymed_symbol_2 = superior_class_bit_number 
				    & (SI_Long)7L;
			    gensymed_symbol_1 = gensymed_symbol_1 << 
				    gensymed_symbol_2;
			    gensymed_symbol = gensymed_symbol & 
				    gensymed_symbol_1;
			    temp = (SI_Long)0L < gensymed_symbol;
			}
			else
			    temp = TRUEP(Nil);
			if (temp) {
			    put_has_no_value(place_or_error_text_qm);
			    result = VALUES_1(Nil);
			}
			else
			    result = tformat_text_string(2,
				    string_constant_181,
				    place_or_error_text_qm);
		    }
		    else {
			if (PUSH_LOCAL_ALLOCATION(Local_area,0,0))
			    result = put_current_evaluation_value(place_or_error_text_qm,
				    new_value,Stack_expiration,Nil,Nil);
			POP_LOCAL_ALLOCATION(0,0);
		    }
		}
	    }
	    else
		result = tformat_text_string(5,string_constant_182,
			slot_description_qm,class_description,item,
			slot_value_qm);
	}
	else {
	    slot_type_specification = ISVREF(slot_description_qm,(SI_Long)5L);
	    reassigned_new_value_p = Nil;
	    if (deferred_components) {
		slot_copy = FIXNUMP(slot_value_qm) || slot_value_qm && 
			SYMBOLP(slot_value_qm) ? slot_value_qm : 
			copy_evaluation_value_1(slot_value_qm);
		new_value_copy = FIXNUMP(new_value) || new_value && 
			SYMBOLP(new_value) || SIMPLE_VECTOR_P(new_value) ? 
			new_value : copy_if_evaluation_value_1(new_value);
		modified_value_or_error = 
			perform_deferred_component_mutations(slot_copy,
			deferred_components,new_value_copy);
		reclaim_gensym_list_1(deferred_components);
		if (SIMPLE_VECTOR_P(modified_value_or_error) && 
			EQ(ISVREF(modified_value_or_error,(SI_Long)0L),
			Qg2_defstruct_structure_name_component_change_report_g2_struct)) 
			    {
		    reclaim_evaluation_value(slot_copy);
		    if (ISVREF(modified_value_or_error,(SI_Long)1L)) {
			if ( !(FIXNUMP(new_value_copy) || 
				SYMBOLP(new_value_copy) || 
				SIMPLE_VECTOR_P(new_value_copy)))
			    reclaim_if_evaluation_value_1(new_value_copy);
		    }
		    else if ( !(FIXNUMP(original_new_value) || 
			    SYMBOLP(original_new_value) || 
			    SIMPLE_VECTOR_P(original_new_value)))
			reclaim_if_evaluation_value_1(original_new_value);
		    thing = ISVREF(modified_value_or_error,(SI_Long)1L);
		    temp_1 = INLINE_UNSIGNED_BYTE_16_VECTOR_P(thing) != 
			    (SI_Long)0L ? copy_text_string(thing) : thing;
		    reclaim_component_change_report_1(modified_value_or_error);
		    result = VALUES_1(temp_1);
		    goto end_conclude_into_attribute_component;
		}
		else {
		    reassigned_new_value_p = T;
		    new_value = modified_value_or_error;
		}
	    }
	    if (type_specification_type_p(new_value,slot_type_specification)) {
		if (CONSP(new_value) && EQ(M_CDR(new_value),Qtruth_value)) {
		    change_slot_description_value_function(item,
			    slot_description_qm,
			    gensym_list_2(M_CAR(new_value),Qtruth_value),
			    Nil,Nil);
		    if ( !(EQ(new_value,Evaluation_true_value) || 
			    EQ(new_value,Evaluation_false_value)))
			reclaim_gensym_cons_1(new_value);
		}
		else if (INLINE_DOUBLE_FLOAT_VECTOR_P(new_value) != 
			(SI_Long)0L && 
			IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(new_value)) == 
			(SI_Long)1L) {
		    if (PUSH_LOCAL_ALLOCATION(Local_area,0,0))
			change_slot_description_value_function(item,
				slot_description_qm,new_value,Nil,Nil);
		    POP_LOCAL_ALLOCATION(0,0);
		}
		else
		    change_slot_description_value_function(item,
			    slot_description_qm,new_value,Nil,Nil);
		if (reassigned_new_value_p) {
		    if ( !(FIXNUMP(original_new_value) || 
			    SYMBOLP(original_new_value) || 
			    SIMPLE_VECTOR_P(original_new_value)))
			reclaim_if_evaluation_value_1(original_new_value);
		}
		result = VALUES_1(Nil);
	    }
	    else if (FIXNUMP(new_value) && EQ(slot_type_specification,
			Qfloat)) {
		amf_available_array_cons_qm = 
			ISVREF(Vector_of_simple_float_array_pools,(SI_Long)1L);
		if (amf_available_array_cons_qm) {
		    amf_array = M_CAR(amf_available_array_cons_qm);
		    temp_2 = Vector_of_simple_float_array_pools;
		    svref_new_value = M_CDR(amf_available_array_cons_qm);
		    SVREF(temp_2,FIX((SI_Long)1L)) = svref_new_value;
		    inline_note_reclaim_cons(amf_available_array_cons_qm,
			    Qab_gensym);
		    temp_2 = Available_gensym_conses;
		    M_CDR(amf_available_array_cons_qm) = temp_2;
		    Available_gensym_conses = amf_available_array_cons_qm;
		    amf_result = amf_array;
		}
		else {
		    temp_2 = 
			    FIXNUM_ADD1(Created_simple_float_array_pool_arrays);
		    Created_simple_float_array_pool_arrays = temp_2;
		    incff_1_arg = 
			    bytes_per_double_float_simple_array(FIX((SI_Long)1L));
		    temp_2 = 
			    FIXNUM_ADD(Simple_float_array_pool_memory_usage,
			    incff_1_arg);
		    Simple_float_array_pool_memory_usage = temp_2;
		    amf_result = generate_float_vector(FIX((SI_Long)1L));
		}
		new_float = amf_result;
		aref_new_value = (double)IFIX(new_value);
		DFLOAT_ISASET_1(new_float,(SI_Long)0L,aref_new_value);
		float_value = new_float;
		if (reassigned_new_value_p) {
		    if ( !(FIXNUMP(original_new_value) || 
			    SYMBOLP(original_new_value) || 
			    SIMPLE_VECTOR_P(original_new_value)))
			reclaim_if_evaluation_value_1(original_new_value);
		}
		change_slot_description_value_function(item,
			slot_description_qm,float_value,Nil,Nil);
		result = VALUES_1(Nil);
	    }
	    else {
		temp_1 = make_conclude_type_error_string(new_value,
			slot_description_qm,class_description,item,
			slot_type_specification);
		if (reassigned_new_value_p) {
		    if ( !(FIXNUMP(new_value) || SYMBOLP(new_value) || 
			    SIMPLE_VECTOR_P(new_value)))
			reclaim_if_evaluation_value_1(new_value);
		}
		result = VALUES_1(temp_1);
	    }
	}
    }
    else {
	if (unaliased_name_qm &&  
		!TRUEP(attribute_description_is_slot_description_p))
	    slot_description_qm = 
		    get_slot_description_of_class_description_function(unaliased_name_qm,
		    class_description,Nil);
	if (slot_description_qm && assq_function(Qnot_user_editable,
		ISVREF(slot_description_qm,(SI_Long)9L))) {
	    result = tformat_text_string(3,string_constant_183,
		    attribute_name,item);
	    goto end_conclude_into_attribute_component;
	}
	slot_type_qm = slot_description_qm ? assq_function(Qtype,
		ISVREF(slot_description_qm,(SI_Long)9L)) : Nil;
	category_qm = slot_type_qm ? SECOND(slot_type_qm) : Nil;
	text_slot_qm = slot_type_qm ? memq_function(Qtext,
		CDDR(slot_type_qm)) : Nil;
	category_evaluator_interface = 
		getfq_function_no_default(INLINE_SYMBOL_PLIST(category_qm),
		Qcategory_evaluator_interface);
	parse_result_maker_qm = category_evaluator_interface ? 
		ISVREF(category_evaluator_interface,(SI_Long)3L) : Qnil;
	text_of_definition_being_compiled = get_property_value_function(3,
		get_symbol_properties_function(category_qm),
		Qtext_category_evaluator_interface_p,Nil) && 
		text_string_p(new_value) ? 
		convert_text_string_to_text(new_value) : Nil;
	PUSH_SPECIAL(Text_of_definition_being_compiled,text_of_definition_being_compiled,
		5);
	  virtual_attribute_qm = Nil;
	  reassigned_new_value_p = Nil;
	  if (parse_result_maker_qm) {
	      if (deferred_components) {
		  evaluator_info = ISVREF(slot_description_qm,(SI_Long)10L);
		  if (evaluator_info);
		  else
		      evaluator_info = 
			      cache_evaluator_slot_info(slot_description_qm);
		  getter_qm = ISVREF(evaluator_info,(SI_Long)3L);
		  new_value_copy = FIXNUMP(new_value) || new_value && 
			  SYMBOLP(new_value) || SIMPLE_VECTOR_P(new_value) 
			  ? new_value : copy_if_evaluation_value_1(new_value);
		  if (getter_qm) {
		      gensymed_symbol_3 = ISVREF(evaluator_info,(SI_Long)5L);
		      gensymed_symbol_4 = get_slot_description_value(item,
			      slot_description_qm);
		      gensymed_symbol_5 = evaluator_info;
		      result = inline_funcall_2(gensymed_symbol_3,
			      gensymed_symbol_4,gensymed_symbol_5);
		      MVS_2(result,extracted_value,reclaim_p);
		      gensymed_symbol_3 = getter_qm;
		      gensymed_symbol_4 = extracted_value;
		      gensymed_symbol_5 = item;
		      gensymed_symbol_6 = slot_description_qm;
		      temp_1 = inline_funcall_3(gensymed_symbol_3,
			      gensymed_symbol_4,gensymed_symbol_5,
			      gensymed_symbol_6);
		      if (reclaim_p)
			  reclaim_slot_value(extracted_value);
		      current_value = temp_1;
		  }
		  else {
		      reclaim_gensym_tree_1(Text_of_definition_being_compiled);
		      result = tformat_text_string(5,string_constant_184,
			      original_component,item,slot_description_qm,
			      class_description);
		      POP_SPECIAL();
		      goto end_conclude_into_attribute_component;
		  }
		  modified_value_or_error = 
			  perform_deferred_component_mutations(current_value,
			  deferred_components,new_value_copy);
		  reclaim_gensym_list_1(deferred_components);
		  if (SIMPLE_VECTOR_P(modified_value_or_error) && 
			  EQ(ISVREF(modified_value_or_error,(SI_Long)0L),
			  Qg2_defstruct_structure_name_component_change_report_g2_struct)) 
			      {
		      if ( !(FIXNUMP(current_value) || 
			      SYMBOLP(current_value) || 
			      SIMPLE_VECTOR_P(current_value)))
			  reclaim_if_evaluation_value_1(current_value);
		      if (ISVREF(modified_value_or_error,(SI_Long)1L)) {
			  if ( !(FIXNUMP(new_value_copy) || 
				  SYMBOLP(new_value_copy) || 
				  SIMPLE_VECTOR_P(new_value_copy)))
			      reclaim_if_evaluation_value_1(new_value_copy);
		      }
		      reclaim_gensym_tree_1(Text_of_definition_being_compiled);
		      thing = ISVREF(modified_value_or_error,(SI_Long)1L);
		      temp_1 = INLINE_UNSIGNED_BYTE_16_VECTOR_P(thing) != 
			      (SI_Long)0L ? copy_text_string(thing) : thing;
		      reclaim_component_change_report_1(modified_value_or_error);
		      result = VALUES_1(temp_1);
		      POP_SPECIAL();
		      goto end_conclude_into_attribute_component;
		  }
		  else {
		      reassigned_new_value_p = T;
		      new_value = modified_value_or_error;
		  }
	      }
	      current_edit_state = make_edit_state_1();
	      PUSH_SPECIAL(Current_edit_state,current_edit_state,0);
		temp_2 = Current_edit_state;
		SVREF(temp_2,FIX((SI_Long)3L)) = item;
		gensymed_symbol_3 = parse_result_maker_qm;
		gensymed_symbol_4 = new_value;
		gensymed_symbol_5 = item;
		gensymed_symbol_6 = slot_description_qm;
		gensymed_symbol_7 = Nil;
		result = inline_funcall_4(gensymed_symbol_3,
			gensymed_symbol_4,gensymed_symbol_5,
			gensymed_symbol_6,gensymed_symbol_7);
		MVS_2(result,parse_result_or_bad_phrase,error_string_qm);
		if (EQ(parse_result_or_bad_phrase,Bad_phrase)) {
		    if (reassigned_new_value_p) {
			if ( !(FIXNUMP(new_value) || SYMBOLP(new_value) || 
				SIMPLE_VECTOR_P(new_value)))
			    reclaim_if_evaluation_value_1(new_value);
		    }
		    temp_1 = tformat_text_string(5,string_constant_185,
			    slot_description_qm,class_description,item,
			    error_string_qm);
		    if (error_string_qm)
			reclaim_text_string(error_string_qm);
		    goto end_attribute_export_conclude_context;
		}
		else {
		    temp_1 = unaliased_name_qm;
		    if (temp_1);
		    else
			temp_1 = attribute_name;
		    commit_error_string_qm = 
			    simple_commit_parse_result(item,temp_1,
			    class_qualifier_qm,slot_description_qm,Nil,Nil,
			    category_qm,text_slot_qm,
			    parse_result_or_bad_phrase,Nil,new_value);
		    if (commit_error_string_qm) {
			if (reassigned_new_value_p) {
			    if ( !(FIXNUMP(new_value) || 
				    SYMBOLP(new_value) || 
				    SIMPLE_VECTOR_P(new_value)))
				reclaim_if_evaluation_value_1(new_value);
			}
			temp_1 = tformat_text_string(5,string_constant_185,
				slot_description_qm,class_description,item,
				commit_error_string_qm);
			reclaim_text_string(commit_error_string_qm);
			goto end_attribute_export_conclude_context;
		    }
		    else {
			if (reassigned_new_value_p) {
			    if ( !(FIXNUMP(original_new_value) || 
				    SYMBOLP(original_new_value) || 
				    SIMPLE_VECTOR_P(original_new_value)))
				reclaim_if_evaluation_value_1(original_new_value);
			}
			temp_1 =  !(FIXNUMP(new_value) || 
				SYMBOLP(new_value) || 
				SIMPLE_VECTOR_P(new_value)) ? 
				reclaim_if_evaluation_value_1(new_value) : Nil;
		    }
		}
		goto end_attribute_export_conclude_context;
	      end_attribute_export_conclude_context:
		reclaim_edit_state_1(Current_edit_state);
	      POP_SPECIAL();
	  }
	  else {
	      virtual_attribute_qm = attribute_description_qm &&  
		      !TRUEP(attribute_description_is_slot_description_p) ?
		       attribute_description_qm : 
		      get_property_value_function(3,
		      get_symbol_properties_function(attribute_name),
		      Qvirtual_attribute,Nil);
	      if (virtual_attribute_qm && type_specification_type_p(item,
		      ISVREF(virtual_attribute_qm,(SI_Long)2L))) {
		  error_string_qm = 
			  conclude_into_virtual_attribute_component(item,
			  attribute_name,virtual_attribute_qm,new_value,
			  deferred_components,original_component);
		  if ( !TRUEP(error_string_qm)) {
		      if ( !(FIXNUMP(new_value) || SYMBOLP(new_value) || 
			      SIMPLE_VECTOR_P(new_value)))
			  reclaim_if_evaluation_value_1(new_value);
		  }
		  temp_1 = error_string_qm;
	      }
	      else if (Change_the_text_of_attributes_without_category_evaluator_interfaces_p 
		      && text_string_p(new_value) && category_qm &&  
		      !TRUEP(memq_function(ISVREF(slot_description_qm,
		      (SI_Long)2L),list_constant_15))) {
		  result = parse_and_change_slot(item,slot_description_qm,
			  new_value,slot_type_qm);
		  reason_for_failure_qm = NTH_VALUE((SI_Long)1L, result);
		  temp_1 = reason_for_failure_qm;
	      }
	      else {
		  current_wide_string_list = Qdo_not_use;
		  PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,
			  4);
		    wide_string_bv16 = 
			    allocate_byte_vector_16(FIX((SI_Long)2048L + 
			    (SI_Long)3L));
		    bv16_length = 
			    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(wide_string_bv16));
		    aref_arg_2 = bv16_length - (SI_Long)2L;
		    aref_new_value_1 = (SI_Long)2048L & (SI_Long)65535L;
		    UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,
			    aref_new_value_1);
		    aref_arg_2 = bv16_length - (SI_Long)1L;
		    aref_new_value_1 = (SI_Long)57344L | (SI_Long)0L;
		    UBYTE_16_ISASET_1(wide_string_bv16,aref_arg_2,
			    aref_new_value_1);
		    UBYTE_16_ISASET_1(wide_string_bv16,(SI_Long)2048L,
			    (SI_Long)0L);
		    current_wide_string = wide_string_bv16;
		    PUSH_SPECIAL(Current_wide_string,current_wide_string,3);
		      fill_pointer_for_current_wide_string = FIX((SI_Long)0L);
		      PUSH_SPECIAL(Fill_pointer_for_current_wide_string,fill_pointer_for_current_wide_string,
			      2);
			length_1 = 
				IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
			total_length_of_current_wide_string = 
				FIX(UBYTE_16_ISAREF_1(Current_wide_string,
				length_1 - (SI_Long)2L) + 
				((UBYTE_16_ISAREF_1(Current_wide_string,
				length_1 - (SI_Long)1L) & (SI_Long)8191L) 
				<< (SI_Long)16L));
			PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
				1);
			  current_twriting_output_type = Qwide_string;
			  PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
				  0);
			    write_attribute_returned_no_values_error_message(attribute_name,
				    item,class_qualifier_qm);
			    temp_1 = copy_out_current_wide_string();
			  POP_SPECIAL();
			POP_SPECIAL();
		      POP_SPECIAL();
		    POP_SPECIAL();
		  POP_SPECIAL();
	      }
	  }
	  reclaim_gensym_tree_1(Text_of_definition_being_compiled);
	  result = VALUES_1(temp_1);
	POP_SPECIAL();
    }
  end_conclude_into_attribute_component:
    return result;
}

static Object string_constant_186;  /* "The ~(~A ~NF~)" */

static Object string_constant_187;  /* "none" */

static Object string_constant_188;  /* "The value ~NV" */

static Object string_constant_189;  /* "The ~(~NT~) ~NV" */

static Object string_constant_190;  /* ", concluded for the ~NS of ~NF does not ~
				     *       conform to the data type of its attribute type ~
				     *       specification, ~NT."
				     */

/* MAKE-CONCLUDE-TYPE-ERROR-STRING */
Object make_conclude_type_error_string(new_value,slot_description_qm,
	    class_description,item,slot_type_specification)
    Object new_value, slot_description_qm, class_description, item;
    Object slot_type_specification;
{
    Object current_wide_string_list, wide_string_bv16, current_wide_string;
    Object fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object x2;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    char temp;
    Declare_special(5);
    Object result;

    x_note_fn_call(210,164);
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
	      if (SIMPLE_VECTOR_P(new_value) && 
		      IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(new_value)) > 
		      (SI_Long)2L &&  !EQ(ISVREF(new_value,(SI_Long)1L),
		      Qavailable_frame_vector)) {
		  x2 = ISVREF(new_value,(SI_Long)1L);
		  temp = SIMPLE_VECTOR_P(x2) && EQ(ISVREF(x2,(SI_Long)0L),
			  Qg2_defstruct_structure_name_class_description_g2_struct) 
			  ? TRUEP(x2) : TRUEP(Qnil);
	      }
	      else
		  temp = TRUEP(Nil);
	      if (temp)
		  tformat(3,string_constant_186,ISVREF(ISVREF(new_value,
			  (SI_Long)1L),(SI_Long)1L),new_value);
	      else if ( !TRUEP(new_value))
		  tformat(1,string_constant_187);
	      else if (CONSP(new_value) && EQ(M_CDR(new_value),Qsequence) 
		      || CONSP(new_value) && EQ(M_CDR(new_value),
		      Qab_structure))
		  tformat(2,string_constant_188,new_value);
	      else
		  tformat(3,string_constant_189,
			  evaluation_value_type(new_value),new_value);
	      tformat(5,string_constant_190,slot_description_qm,
		      class_description,item,slot_type_specification);
	      result = copy_out_current_wide_string();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
      POP_SPECIAL();
    POP_SPECIAL();
    return result;
}

static Object string_constant_191;  /* "Unable to conclude into ~NB, no value could be read ~@
				     *                         from ~a to produce the new structured value."
				     */

static Object string_constant_192;  /* "Error concluding the ~NQ of ~NF: ~A" */

static Object string_constant_193;  /* "The attribute ~a of ~NF is read-only." */

/* CONCLUDE-INTO-VIRTUAL-ATTRIBUTE-COMPONENT */
Object conclude_into_virtual_attribute_component(item,attribute_name,
	    virtual_attribute,original_new_value,deferred_components,
	    original_component)
    Object item, attribute_name, virtual_attribute, original_new_value;
    Object deferred_components, original_component;
{
    Object new_value, reassigned_new_value_p, getter_qm, current_value;
    Object new_value_copy, modified_value_or_error, thing, temp;
    Object value_at_type_failure, type_at_type_failure;
    Object reason_for_type_failure, context_of_type_failure;
    Object last_slot_checked_of_type_failure, type, type_error_string;
    Object setter_qm;
    Declare_special(5);

    x_note_fn_call(210,165);
    new_value = original_new_value;
    reassigned_new_value_p = Nil;
    if (deferred_components) {
	getter_qm = ISVREF(virtual_attribute,(SI_Long)6L);
	current_value = getter_qm ? inline_funcall_1(getter_qm,item) : 
		No_component_value;
	new_value_copy = FIXNUMP(new_value) || new_value && 
		SYMBOLP(new_value) || SIMPLE_VECTOR_P(new_value) ? 
		new_value : copy_if_evaluation_value_1(new_value);
	modified_value_or_error =  !EQ(current_value,No_component_value) ? 
		perform_deferred_component_mutations(current_value,
		deferred_components,new_value_copy) : Nil;
	reclaim_gensym_list_1(deferred_components);
	if (EQ(current_value,No_component_value)) {
	    if ( !(FIXNUMP(new_value_copy) || SYMBOLP(new_value_copy) || 
		    SIMPLE_VECTOR_P(new_value_copy)))
		reclaim_if_evaluation_value_1(new_value_copy);
	    return tformat(4,string_constant_191,original_component,item,
		    attribute_name);
	}
	else if (SIMPLE_VECTOR_P(modified_value_or_error) && 
		EQ(ISVREF(modified_value_or_error,(SI_Long)0L),
		Qg2_defstruct_structure_name_component_change_report_g2_struct)) 
		    {
	    if ( !(FIXNUMP(current_value) || SYMBOLP(current_value) || 
		    SIMPLE_VECTOR_P(current_value)))
		reclaim_if_evaluation_value_1(current_value);
	    if (ISVREF(modified_value_or_error,(SI_Long)1L)) {
		if ( !(FIXNUMP(new_value_copy) || SYMBOLP(new_value_copy) 
			|| SIMPLE_VECTOR_P(new_value_copy)))
		    reclaim_if_evaluation_value_1(new_value_copy);
	    }
	    thing = ISVREF(modified_value_or_error,(SI_Long)1L);
	    temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(thing) != (SI_Long)0L ?
		     copy_text_string(thing) : thing;
	    reclaim_component_change_report_1(modified_value_or_error);
	    return VALUES_1(temp);
	}
	else {
	    reassigned_new_value_p = T;
	    new_value = modified_value_or_error;
	}
    }
    if ( !TRUEP(type_specification_type_p(new_value,
	    ISVREF(virtual_attribute,(SI_Long)3L)))) {
	value_at_type_failure = Nil;
	PUSH_SPECIAL(Value_at_type_failure,value_at_type_failure,4);
	  type_at_type_failure = Nil;
	  PUSH_SPECIAL(Type_at_type_failure,type_at_type_failure,3);
	    reason_for_type_failure = Nil;
	    PUSH_SPECIAL(Reason_for_type_failure,reason_for_type_failure,2);
	      context_of_type_failure = Nil;
	      PUSH_SPECIAL(Context_of_type_failure,context_of_type_failure,1);
		last_slot_checked_of_type_failure = Nil;
		PUSH_SPECIAL(Last_slot_checked_of_type_failure,last_slot_checked_of_type_failure,
			0);
		  type = ISVREF(virtual_attribute,(SI_Long)3L);
		  type_specification_type_p__with_explanation(new_value,type);
		  type_error_string = type_error_in_setter(new_value,type,
			  Value_at_type_failure,Type_at_type_failure,
			  Reason_for_type_failure,Context_of_type_failure,
			  Last_slot_checked_of_type_failure);
		  temp = tformat_text_string(5,string_constant_192,
			  attribute_name,Nil,item,type_error_string);
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
    }
    else {
	setter_qm = ISVREF(virtual_attribute,(SI_Long)7L);
	temp = setter_qm ? inline_funcall_2(setter_qm,item,new_value) : 
		tformat_text_string(3,string_constant_193,attribute_name,item);
    }
    if (reassigned_new_value_p) {
	if ( !(FIXNUMP(new_value) || SYMBOLP(new_value) || 
		SIMPLE_VECTOR_P(new_value)))
	    reclaim_if_evaluation_value_1(new_value);
    }
    return VALUES_1(temp);
}

static Object Qconclude;           /* conclude */

static Object string_constant_194;  /* "Cannot conclude a new element at index ~a for ~NF.  ~@
				     *                                 This item is a ~a, but should be a g2-array or g2-list."
				     */

/* CONCLUDE-INTO-ELEMENT-COMPONENT */
Object conclude_into_element_component(item,index_1,new_value,
	    deferred_components,original_component)
    Object item, index_1, new_value, deferred_components, original_component;
{
    Object stored_element, modified_value_or_error, thing, temp, valid_element;
    Object error_text, sub_class_bit_vector, error_string_qm;
    SI_Long superior_class_bit_number, sub_class_vector_index, gensymed_symbol;
    SI_Long gensymed_symbol_1, gensymed_symbol_2;
    char temp_1;
    Object result;

    x_note_fn_call(210,166);
    if (deferred_components) {
	stored_element = fetch_nth_element(item,index_1,FIX((SI_Long)0L),Nil);
	modified_value_or_error = 
		perform_deferred_component_mutations(stored_element,
		deferred_components,new_value);
	reclaim_gensym_list_1(deferred_components);
	if (SIMPLE_VECTOR_P(modified_value_or_error) && 
		EQ(ISVREF(modified_value_or_error,(SI_Long)0L),
		Qg2_defstruct_structure_name_component_change_report_g2_struct)) 
		    {
	    if ( !(FIXNUMP(stored_element) || SYMBOLP(stored_element) || 
		    SIMPLE_VECTOR_P(stored_element)))
		reclaim_if_evaluation_value_1(stored_element);
	    thing = ISVREF(modified_value_or_error,(SI_Long)1L);
	    temp = INLINE_UNSIGNED_BYTE_16_VECTOR_P(thing) != (SI_Long)0L ?
		     copy_text_string(thing) : thing;
	    reclaim_component_change_report_1(modified_value_or_error);
	    return VALUES_1(temp);
	}
	else
	    new_value = modified_value_or_error;
    }
    result = coerce_matching_element_type_or_unknown(item,new_value,
	    Cached_top_of_stack,Nil);
    MVS_2(result,valid_element,error_text);
    if (error_text)
	raw_stack_error_named_error(Cached_top_of_stack,error_text);
    sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
    superior_class_bit_number = IFIX(ISVREF(G2_array_class_description,
	    (SI_Long)18L));
    sub_class_vector_index = superior_class_bit_number >>  -  - (SI_Long)3L;
    if (sub_class_vector_index < 
	    IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		sub_class_vector_index);
	gensymed_symbol_1 = (SI_Long)1L;
	gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	temp_1 = (SI_Long)0L < gensymed_symbol;
    }
    else
	temp_1 = TRUEP(Nil);
    if (temp_1)
	error_string_qm = change_g2_array_element(item,index_1,
		valid_element,Qconclude,Cached_top_of_stack);
    else {
	sub_class_bit_vector = ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)19L);
	superior_class_bit_number = IFIX(ISVREF(G2_list_class_description,
		(SI_Long)18L));
	sub_class_vector_index = superior_class_bit_number >>  -  - 
		(SI_Long)3L;
	if (sub_class_vector_index < 
		IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(sub_class_bit_vector))) {
	    gensymed_symbol = UBYTE_8_ISAREF_1(sub_class_bit_vector,
		    sub_class_vector_index);
	    gensymed_symbol_1 = (SI_Long)1L;
	    gensymed_symbol_2 = superior_class_bit_number & (SI_Long)7L;
	    gensymed_symbol_1 = gensymed_symbol_1 << gensymed_symbol_2;
	    gensymed_symbol = gensymed_symbol & gensymed_symbol_1;
	    temp_1 = (SI_Long)0L < gensymed_symbol;
	}
	else
	    temp_1 = TRUEP(Nil);
	if (temp_1)
	    error_string_qm = change_g2_list_element(item,index_1,
		    valid_element,Qconclude,Cached_top_of_stack);
	else
	    error_string_qm = tformat_text_string(4,string_constant_194,
		    index_1,item,ISVREF(ISVREF(item,(SI_Long)1L),(SI_Long)1L));
    }
    if (error_string_qm) {
	if ( !(FIXNUMP(valid_element) || SYMBOLP(valid_element) || 
		SIMPLE_VECTOR_P(valid_element)))
	    reclaim_if_evaluation_value_1(valid_element);
    }
    else if ( !(FIXNUMP(new_value) || SYMBOLP(new_value) || 
	    SIMPLE_VECTOR_P(new_value)))
	reclaim_if_evaluation_value_1(new_value);
    return VALUES_1(error_string_qm);
}

/* FUNCALL-CONCLUDE-ATTRIBUTE-INST */
Object funcall_conclude_attribute_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object class_qualifier_qm, attribute_name, item_or_place_reference;
    Object new_value, place_reference_qm, temp, top_of_stack_1, message_1;
    Object component, error_message_qm, gensymed_symbol, gensym_list;
    Object gensym_list_tail, gensym_cons, cdr_new_value, text_string;
    Object snapshots, snapshots_of_related_blocks, note_blocks_in_tformat;
    Object current_wide_string_list, wide_string_bv16, current_wide_string;
    Object fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    Declare_special(7);

    x_note_fn_call(210,167);
    class_qualifier_qm = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)3L);
    attribute_name = ISVREF(local_stack,IFIX(top_of_stack) - (SI_Long)2L);
    item_or_place_reference = ISVREF(local_stack,
	    IFIX(FIXNUM_SUB1(top_of_stack)));
    new_value = ISVREF(local_stack,IFIX(top_of_stack));
    place_reference_qm = CONSP(item_or_place_reference) ? 
	    (EQ(M_CDR(item_or_place_reference),Qplace_reference) ? T : 
	    Nil) : Qnil;
    if (place_reference_qm) {
	if (evaluation_place_reference_valid_p(item_or_place_reference))
	    temp = ISVREF(M_CAR(item_or_place_reference),(SI_Long)0L);
	else {
	    top_of_stack_1 = top_of_stack;
	    message_1 = tformat_stack_error_text_string(2,
		    string_constant_1,item_or_place_reference);
	    temp = raw_stack_error_named_error(top_of_stack_1,message_1);
	}
    }
    else
	temp = Qcurrent_computation_frame;
    component = gensym_list_4(Qattribute,attribute_name,class_qualifier_qm,
	    temp);
    error_message_qm = place_reference_qm ? 
	    conclude_into_component_dispatch(ISVREF(M_CAR(item_or_place_reference),
	    (SI_Long)1L),component,new_value,Nil,component) : 
	    conclude_into_attribute_component(6,item_or_place_reference,
	    attribute_name,class_qualifier_qm,new_value,Nil,component);
    gensymed_symbol = component;
    gensym_list = gensymed_symbol;
    gensym_list_tail = M_CDR(M_CDR(M_CDR(gensymed_symbol)));
    if (gensym_list &&  !((SI_Long)0L == inline_debugging_consing())) {
	gensym_cons = gensym_list;
      next_loop:
	inline_note_reclaim_cons(gensym_cons,Qab_gensym);
	if (EQ(gensym_cons,gensym_list_tail))
	    goto end_1;
	else if ( !TRUEP(gensym_cons))
	    goto end_1;
	else
	    gensym_cons = CDR(gensym_cons);
	goto next_loop;
      end_loop:
      end_1:;
    }
    cdr_new_value = Available_gensym_conses;
    M_CDR(gensym_list_tail) = cdr_new_value;
    Available_gensym_conses = gensym_list;
    if (error_message_qm) {
	top_of_stack_1 = top_of_stack;
	text_string = Nil;
	snapshots = Nil;
	snapshots_of_related_blocks = Nil;
	note_blocks_in_tformat = SYMBOL_FUNCTION(Qrecord_block_for_tformat);
	PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
	  PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,
		  5);
	    current_wide_string_list = Qdo_not_use;
	    PUSH_SPECIAL(Current_wide_string_list,current_wide_string_list,4);
	      wide_string_bv16 = 
		      allocate_byte_vector_16(FIX((SI_Long)2048L + 
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
		  length_1 = 
			  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(Current_wide_string));
		  total_length_of_current_wide_string = 
			  FIX(UBYTE_16_ISAREF_1(Current_wide_string,
			  length_1 - (SI_Long)2L) + 
			  ((UBYTE_16_ISAREF_1(Current_wide_string,length_1 
			  - (SI_Long)1L) & (SI_Long)8191L) << (SI_Long)16L));
		  PUSH_SPECIAL(Total_length_of_current_wide_string,total_length_of_current_wide_string,
			  1);
		    current_twriting_output_type = Qwide_string;
		    PUSH_SPECIAL(Current_twriting_output_type,current_twriting_output_type,
			    0);
		      twrite_general_string(error_message_qm);
		      reclaim_text_string(error_message_qm);
		      text_string = copy_out_current_wide_string();
		    POP_SPECIAL();
		  POP_SPECIAL();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	    snapshots = Snapshots_of_related_blocks;
	    Snapshots_of_related_blocks = Nil;
	    if (Snapshots_of_related_blocks) {
		reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
		Snapshots_of_related_blocks = Nil;
	    }
	  POP_SPECIAL();
	POP_SPECIAL();
	message_1 = make_error_text(text_string,snapshots);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    if (place_reference_qm)
	reclaim_evaluation_place_reference(item_or_place_reference);
    return VALUES_1(Nil);
}

/* SIGNAL-CATEGORY-CONCLUDE-ERROR */
Object signal_category_conclude_error(slot_description,class_description,
	    item,error_string)
    Object slot_description, class_description, item, error_string;
{
    Object top_of_stack, text_string, snapshots, snapshots_of_related_blocks;
    Object note_blocks_in_tformat, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object message_1;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    Declare_special(7);

    x_note_fn_call(210,168);
    top_of_stack = Cached_top_of_stack;
    text_string = Nil;
    snapshots = Nil;
    snapshots_of_related_blocks = Nil;
    note_blocks_in_tformat = SYMBOL_FUNCTION(Qrecord_block_for_tformat);
    PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
      PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,5);
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
		  tformat(5,string_constant_185,slot_description,
			  class_description,item,error_string);
		  reclaim_text_string(error_string);
		  text_string = copy_out_current_wide_string();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
	snapshots = Snapshots_of_related_blocks;
	Snapshots_of_related_blocks = Nil;
	if (Snapshots_of_related_blocks) {
	    reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
	    Snapshots_of_related_blocks = Nil;
	}
      POP_SPECIAL();
    POP_SPECIAL();
    message_1 = make_error_text(text_string,snapshots);
    raw_stack_error_named_error(top_of_stack,message_1);
    return VALUES_1(Nil);
}

static Object string_constant_195;  /* "Unable to conclude a new value into the ~NQ of ~NF: ~a" */

/* SIGNAL-VIRTUAL-ATTRIBUTE-CONCLUDE-ERROR */
Object signal_virtual_attribute_conclude_error(attribute_name,
	    class_qualifier_qm,item,error_string)
    Object attribute_name, class_qualifier_qm, item, error_string;
{
    Object top_of_stack, text_string, snapshots, snapshots_of_related_blocks;
    Object note_blocks_in_tformat, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object message_1;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    Declare_special(7);

    x_note_fn_call(210,169);
    top_of_stack = Cached_top_of_stack;
    text_string = Nil;
    snapshots = Nil;
    snapshots_of_related_blocks = Nil;
    note_blocks_in_tformat = SYMBOL_FUNCTION(Qrecord_block_for_tformat);
    PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
      PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,5);
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
		  tformat(5,string_constant_195,attribute_name,
			  class_qualifier_qm,item,error_string);
		  reclaim_text_string(error_string);
		  text_string = copy_out_current_wide_string();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
	snapshots = Snapshots_of_related_blocks;
	Snapshots_of_related_blocks = Nil;
	if (Snapshots_of_related_blocks) {
	    reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
	    Snapshots_of_related_blocks = Nil;
	}
      POP_SPECIAL();
    POP_SPECIAL();
    message_1 = make_error_text(text_string,snapshots);
    raw_stack_error_named_error(top_of_stack,message_1);
    return VALUES_1(Nil);
}

static Object string_constant_196;  /* "Attempt to Start KB failed because KB is already running." */

static Object string_constant_197;  /* "Attempt to Start KB failed because KB is paused.  The Resume KB ~
				     *              action should be used when the KB is paused."
				     */

/* FUNCALL-START-KB-INST */
Object funcall_start_kb_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object top_of_stack_1, message_1;

    x_note_fn_call(210,170);
    if (System_is_running) {
	top_of_stack_1 = Cached_top_of_stack;
	message_1 = tformat_stack_error_text_string(1,string_constant_196);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    else if (System_has_paused) {
	top_of_stack_1 = Cached_top_of_stack;
	message_1 = tformat_stack_error_text_string(1,string_constant_197);
	raw_stack_error_named_error(top_of_stack_1,message_1);
    }
    system_start();
    return VALUES_1(Nil);
}

static Object Qsystem_frame;       /* system-frame */

/* G2-GET-SYSTEM-TABLES-TO-ACTIVATE */
Object g2_get_system_tables_to_activate()
{
    Object pre_sequence, scope_conses, ab_loopvar_, ab_loopvar__1, block;
    Object symbol, property_name, gensymed_symbol, gensymed_symbol_1;
    Object gensymed_symbol_4, temp_1, temp_2, new_cons, global_properties;
    Object kb_properties, kb_specific_value, resulting_value;
    SI_Long gensymed_symbol_2, gensymed_symbol_3;
    char temp;
    Declare_special(1);

    x_note_fn_call(210,171);
    pre_sequence = Nil;
    scope_conses = Scope_conses;
    ab_loopvar_ = Nil;
    ab_loopvar__1 = Nil;
    block = Nil;
    PUSH_SPECIAL(Scope_conses,scope_conses,0);
      ab_loopvar_ = collect_subclasses(Qsystem_frame);
    next_loop:
      if ( !TRUEP(ab_loopvar__1)) {
	next_loop_1:
	  if ( !TRUEP(ab_loopvar_))
	      goto end_loop;
	  ab_loopvar__1 = 
		  lookup_kb_specific_property_value(M_CAR(ab_loopvar_),
		  Instances_specific_to_this_class_kbprop);
	  ab_loopvar_ = M_CDR(ab_loopvar_);
	  if (ab_loopvar__1)
	      goto end_loop;
	  goto next_loop_1;
	end_loop:
	  temp =  !TRUEP(ab_loopvar__1);
      }
      else
	  temp = TRUEP(Nil);
      if (temp)
	  goto end_loop_1;
      block = ab_loopvar__1;
      ab_loopvar__1 = ISVREF(ab_loopvar__1,(SI_Long)6L);
      symbol = ISVREF(ISVREF(block,(SI_Long)1L),(SI_Long)1L);
      property_name = Class_description_gkbprop;
      gensymed_symbol = CDR(Symbol_properties_table);
      gensymed_symbol_1 = symbol;
      gensymed_symbol_2 = SXHASH_SYMBOL_1(symbol) & IFIX(Most_positive_fixnum);
      gensymed_symbol_3 = (SI_Long)0L;
    next_loop_2:
      if ( !TRUEP(gensymed_symbol))
	  goto end_loop_2;
      gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
      if (gensymed_symbol_2 < gensymed_symbol_3)
	  gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
      else if (gensymed_symbol_2 > gensymed_symbol_3)
	  gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
      else {
	  gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
	  gensymed_symbol_4 = Nil;
	next_loop_3:
	  if ( !TRUEP(gensymed_symbol))
	      goto end_loop_3;
	  gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
	  if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
	      gensymed_symbol = M_CDR(M_CAR(gensymed_symbol));
	      goto end_1;
	  }
	  gensymed_symbol = M_CDR(gensymed_symbol);
	  goto next_loop_3;
	end_loop_3:
	  gensymed_symbol = Qnil;
	end_1:;
	  goto end_2;
      }
      goto next_loop_2;
    end_loop_2:
      gensymed_symbol = Qnil;
    end_2:;
      if ( !TRUEP(gensymed_symbol)) {
	  gensymed_symbol = symbol;
	  temp_1 = Symbol_properties_table;
	  temp_2 = FIX(SXHASH_SYMBOL_1(gensymed_symbol) & 
		  IFIX(Most_positive_fixnum));
	  new_cons = Available_gensym_conses;
	  if (new_cons) {
	      Available_gensym_conses = M_CDR(new_cons);
	      gensymed_symbol_1 = new_cons;
	  }
	  else
	      gensymed_symbol_1 = Nil;
	  if ( !TRUEP(gensymed_symbol_1))
	      gensymed_symbol_1 = replenish_gensym_cons_pool();
	  M_CAR(gensymed_symbol_1) = Qsymbol_properties_hash_table;
	  M_CDR(gensymed_symbol_1) = Nil;
	  inline_note_allocate_cons(gensymed_symbol_1,Qab_gensym);
	  gensymed_symbol = set_balanced_binary_tree_entry(temp_1,Qeq,Nil,
		  T,gensymed_symbol,temp_2,gensymed_symbol_1);
      }
      global_properties = gensymed_symbol;
      gensymed_symbol = CDR(global_properties);
      gensymed_symbol_1 = Current_kb_specific_property_list_property_name;
      gensymed_symbol_2 = 
	      SXHASH_SYMBOL_1(Current_kb_specific_property_list_property_name) 
	      & IFIX(Most_positive_fixnum);
      gensymed_symbol_3 = (SI_Long)0L;
    next_loop_4:
      if ( !TRUEP(gensymed_symbol))
	  goto end_loop_4;
      gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
      if (gensymed_symbol_2 < gensymed_symbol_3)
	  gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
      else if (gensymed_symbol_2 > gensymed_symbol_3)
	  gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
      else {
	  gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
	  gensymed_symbol_4 = Nil;
	next_loop_5:
	  if ( !TRUEP(gensymed_symbol))
	      goto end_loop_5;
	  gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
	  if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
	      kb_properties = M_CDR(M_CAR(gensymed_symbol));
	      goto end_3;
	  }
	  gensymed_symbol = M_CDR(gensymed_symbol);
	  goto next_loop_5;
	end_loop_5:
	  kb_properties = Qnil;
	end_3:;
	  goto end_4;
      }
      goto next_loop_4;
    end_loop_4:
      kb_properties = Qnil;
    end_4:;
      if (kb_properties);
      else
	  kb_properties = Nil;
      if (kb_properties) {
	  gensymed_symbol = CDR(kb_properties);
	  gensymed_symbol_1 = property_name;
	  gensymed_symbol_2 = SXHASH_SYMBOL_1(property_name) & 
		  IFIX(Most_positive_fixnum);
	  gensymed_symbol_3 = (SI_Long)0L;
	next_loop_6:
	  if ( !TRUEP(gensymed_symbol))
	      goto end_loop_6;
	  gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
	  if (gensymed_symbol_2 < gensymed_symbol_3)
	      gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
	  else if (gensymed_symbol_2 > gensymed_symbol_3)
	      gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
	  else {
	      gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
	      gensymed_symbol_4 = Nil;
	    next_loop_7:
	      if ( !TRUEP(gensymed_symbol))
		  goto end_loop_7;
	      gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
	      if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
		  kb_specific_value = M_CDR(M_CAR(gensymed_symbol));
		  goto end_5;
	      }
	      gensymed_symbol = M_CDR(gensymed_symbol);
	      goto next_loop_7;
	    end_loop_7:
	      kb_specific_value = Qnil;
	    end_5:;
	      goto end_6;
	  }
	  goto next_loop_6;
	end_loop_6:
	  kb_specific_value = Qnil;
	end_6:;
	  if (kb_specific_value);
	  else
	      kb_specific_value = No_specific_property_value;
      }
      else
	  kb_specific_value = No_specific_property_value;
      if ( !EQ(kb_specific_value,No_specific_property_value))
	  resulting_value = kb_specific_value;
      else {
	  gensymed_symbol = CDR(global_properties);
	  gensymed_symbol_1 = property_name;
	  gensymed_symbol_2 = SXHASH_SYMBOL_1(property_name) & 
		  IFIX(Most_positive_fixnum);
	  gensymed_symbol_3 = (SI_Long)0L;
	next_loop_8:
	  if ( !TRUEP(gensymed_symbol))
	      goto end_loop_8;
	  gensymed_symbol_3 = IFIX(ISVREF(gensymed_symbol,(SI_Long)0L));
	  if (gensymed_symbol_2 < gensymed_symbol_3)
	      gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)1L);
	  else if (gensymed_symbol_2 > gensymed_symbol_3)
	      gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)2L);
	  else {
	      gensymed_symbol = ISVREF(gensymed_symbol,(SI_Long)3L);
	      gensymed_symbol_4 = Nil;
	    next_loop_9:
	      if ( !TRUEP(gensymed_symbol))
		  goto end_loop_9;
	      gensymed_symbol_4 = M_CAR(M_CAR(gensymed_symbol));
	      if (EQ(gensymed_symbol_1,gensymed_symbol_4)) {
		  resulting_value = M_CDR(M_CAR(gensymed_symbol));
		  goto end_7;
	      }
	      gensymed_symbol = M_CDR(gensymed_symbol);
	      goto next_loop_9;
	    end_loop_9:
	      resulting_value = Qnil;
	    end_7:;
	      goto end_8;
	  }
	  goto next_loop_8;
	end_loop_8:
	  resulting_value = Qnil;
	end_8:;
	  if (resulting_value);
	  else
	      resulting_value = Nil;
      }
      gensymed_symbol = resulting_value;
      if (gensymed_symbol && ISVREF(gensymed_symbol,(SI_Long)16L))
	  pre_sequence = gensym_cons_1(block,pre_sequence);
      else {
	  gensymed_symbol = ISVREF(ISVREF(ISVREF(ISVREF(block,(SI_Long)1L),
		  (SI_Long)11L),(SI_Long)30L),(SI_Long)1L);
	  gensymed_symbol_1 = block;
	  inline_funcall_1(gensymed_symbol,gensymed_symbol_1);
      }
      goto next_loop;
    end_loop_1:;
    POP_SPECIAL();
    return allocate_evaluation_sequence(nreverse(pre_sequence));
}

static Object Qmessage_board;      /* message-board */

/* G2-GET-MESSAGE-BOARDS */
Object g2_get_message_boards()
{
    Object pre_sequence, scope_conses, ab_loopvar_, ab_loopvar__1, item;
    char temp;
    Declare_special(1);

    x_note_fn_call(210,172);
    pre_sequence = Nil;
    scope_conses = Scope_conses;
    ab_loopvar_ = Nil;
    ab_loopvar__1 = Nil;
    item = Nil;
    PUSH_SPECIAL(Scope_conses,scope_conses,0);
      ab_loopvar_ = collect_subclasses(Qmessage_board);
    next_loop:
      if ( !TRUEP(ab_loopvar__1)) {
	next_loop_1:
	  if ( !TRUEP(ab_loopvar_))
	      goto end_loop;
	  ab_loopvar__1 = 
		  lookup_kb_specific_property_value(M_CAR(ab_loopvar_),
		  Instances_specific_to_this_class_kbprop);
	  ab_loopvar_ = M_CDR(ab_loopvar_);
	  if (ab_loopvar__1)
	      goto end_loop;
	  goto next_loop_1;
	end_loop:
	  temp =  !TRUEP(ab_loopvar__1);
      }
      else
	  temp = TRUEP(Nil);
      if (temp)
	  goto end_loop_1;
      item = ab_loopvar__1;
      ab_loopvar__1 = ISVREF(ab_loopvar__1,(SI_Long)6L);
      pre_sequence = gensym_cons_1(item,pre_sequence);
      goto next_loop;
    end_loop_1:;
    POP_SPECIAL();
    return allocate_evaluation_sequence(nreverse(pre_sequence));
}

/* G2-GET-TOP-LEVEL-WORKSPACES */
Object g2_get_top_level_workspaces()
{
    Object pre_sequence, scope_conses, ab_loopvar_, ab_loopvar__1, item;
    Object gensymed_symbol;
    char temp;
    Declare_special(1);

    x_note_fn_call(210,173);
    pre_sequence = Nil;
    scope_conses = Scope_conses;
    ab_loopvar_ = Nil;
    ab_loopvar__1 = Nil;
    item = Nil;
    PUSH_SPECIAL(Scope_conses,scope_conses,0);
      ab_loopvar_ = collect_subclasses(Qkb_workspace);
    next_loop:
      if ( !TRUEP(ab_loopvar__1)) {
	next_loop_1:
	  if ( !TRUEP(ab_loopvar_))
	      goto end_loop;
	  ab_loopvar__1 = 
		  lookup_kb_specific_property_value(M_CAR(ab_loopvar_),
		  Instances_specific_to_this_class_kbprop);
	  ab_loopvar_ = M_CDR(ab_loopvar_);
	  if (ab_loopvar__1)
	      goto end_loop;
	  goto next_loop_1;
	end_loop:
	  temp =  !TRUEP(ab_loopvar__1);
      }
      else
	  temp = TRUEP(Nil);
      if (temp)
	  goto end_loop_1;
      item = ab_loopvar__1;
      ab_loopvar__1 = ISVREF(ab_loopvar__1,(SI_Long)6L);
      gensymed_symbol = ISVREF(item,(SI_Long)14L);
      gensymed_symbol = gensymed_symbol ? ISVREF(gensymed_symbol,
	      (SI_Long)5L) : Nil;
      if ( !TRUEP(gensymed_symbol) ?  !TRUEP(ISVREF(item,(SI_Long)18L)) : 
	      TRUEP(Nil))
	  pre_sequence = gensym_cons_1(item,pre_sequence);
      goto next_loop;
    end_loop_1:;
    POP_SPECIAL();
    return allocate_evaluation_sequence(nreverse(pre_sequence));
}

static Object Qg2_extension;       /* g2-extension */

/* G2-GET-TOP-LEVEL-EXTENSIONS */
Object g2_get_top_level_extensions()
{
    Object pre_sequence, scope_conses, ab_loopvar_, ab_loopvar__1;
    Object g2_extension, gensymed_symbol, temp_1;
    char temp;
    Declare_special(1);

    x_note_fn_call(210,174);
    pre_sequence = Nil;
    scope_conses = Scope_conses;
    ab_loopvar_ = Nil;
    ab_loopvar__1 = Nil;
    g2_extension = Nil;
    PUSH_SPECIAL(Scope_conses,scope_conses,0);
      ab_loopvar_ = collect_subclasses(Qg2_extension);
    next_loop:
      if ( !TRUEP(ab_loopvar__1)) {
	next_loop_1:
	  if ( !TRUEP(ab_loopvar_))
	      goto end_loop;
	  ab_loopvar__1 = 
		  lookup_kb_specific_property_value(M_CAR(ab_loopvar_),
		  Instances_specific_to_this_class_kbprop);
	  ab_loopvar_ = M_CDR(ab_loopvar_);
	  if (ab_loopvar__1)
	      goto end_loop;
	  goto next_loop_1;
	end_loop:
	  temp =  !TRUEP(ab_loopvar__1);
      }
      else
	  temp = TRUEP(Nil);
      if (temp)
	  goto end_loop_1;
      g2_extension = ab_loopvar__1;
      ab_loopvar__1 = ISVREF(ab_loopvar__1,(SI_Long)6L);
      gensymed_symbol = ISVREF(g2_extension,(SI_Long)14L);
      gensymed_symbol = gensymed_symbol ? ISVREF(gensymed_symbol,
	      (SI_Long)5L) : Nil;
      if (gensymed_symbol) {
	  temp_1 = ISVREF(g2_extension,(SI_Long)8L);
	  temp =  !TRUEP(CAR(temp_1));
      }
      else
	  temp = TRUEP(Nil);
      if ( !temp)
	  pre_sequence = gensym_cons_1(g2_extension,pre_sequence);
      goto next_loop;
    end_loop_1:;
    POP_SPECIAL();
    return allocate_evaluation_sequence(nreverse(pre_sequence));
}

static Object string_constant_198;  /* "Attempt to Resume KB failed because KB is already running." */

static Object string_constant_199;  /* "Attempt to Resume KB failed because KB is not paused.  The Start KB ~
				     *              action should be used when the KB is not paused."
				     */

/* FUNCALL-RESUME-KB-INST */
Object funcall_resume_kb_inst(top_of_stack,local_stack)
    Object top_of_stack, local_stack;
{
    Object temp;

    x_note_fn_call(210,175);
    if (System_is_running)
	temp = tformat_stack_error_text_string(1,string_constant_198);
    else if ( !TRUEP(System_has_paused))
	temp = tformat_stack_error_text_string(1,string_constant_199);
    else {
	system_resume();
	temp = Nil;
    }
    return VALUES_1(temp);
}

static Object string_constant_200;  /* "Cannot ~a the element at index ~NV in ~NF to " */

static Object Qg2_defstruct_structure_name_temporary_constant_g2_struct;  /* g2-defstruct-structure-name::temporary-constant-g2-struct */

static Object array_constant_94;   /* # */

static Object string_constant_201;  /* "This value is already in element ~a and this g2-list ~
				     *              does not allow duplicate elements."
				     */

/* DUPLICATE-G2-LIST-ELEMENT-STACK-ERROR */
Object duplicate_g2_list_element_stack_error(g2_list,element_index,
	    duplicate_item_or_datum,duplicate_element_index,error_symbol,
	    top_of_stack)
    Object g2_list, element_index, duplicate_item_or_datum;
    Object duplicate_element_index, error_symbol, top_of_stack;
{
    Object top_of_stack_1, text_string, snapshots, snapshots_of_related_blocks;
    Object note_blocks_in_tformat, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object x2, gensymed_symbol, gensymed_symbol_1, gensymed_symbol_4;
    Object managed_number_or_value, temp_1, message_1;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    SI_Long gensymed_symbol_2, gensymed_symbol_3;
    char temp;
    Declare_special(7);

    x_note_fn_call(210,176);
    top_of_stack_1 = top_of_stack;
    text_string = Nil;
    snapshots = Nil;
    snapshots_of_related_blocks = Nil;
    note_blocks_in_tformat = SYMBOL_FUNCTION(Qrecord_block_for_tformat);
    PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
      PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,5);
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
		  tformat(4,string_constant_200,error_symbol,element_index,
			  g2_list);
		  if (SIMPLE_VECTOR_P(duplicate_item_or_datum) && 
			  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(duplicate_item_or_datum)) 
			  > (SI_Long)2L &&  
			  !EQ(ISVREF(duplicate_item_or_datum,(SI_Long)1L),
			  Qavailable_frame_vector)) {
		      x2 = ISVREF(duplicate_item_or_datum,(SI_Long)1L);
		      gensymed_symbol = SIMPLE_VECTOR_P(x2) && 
			      EQ(ISVREF(x2,(SI_Long)0L),
			      Qg2_defstruct_structure_name_class_description_g2_struct) 
			      ? x2 : Qnil;
		  }
		  else
		      gensymed_symbol = Nil;
		  if (gensymed_symbol && ISVREF(gensymed_symbol,(SI_Long)16L))
		      tformat(2,string_constant_94,duplicate_item_or_datum);
		  else {
		      gensymed_symbol_1 = duplicate_item_or_datum;
		      temp = FIXNUMP(gensymed_symbol_1);
		      if (temp);
		      else
			  temp = 
				  INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol_1) 
				  != (SI_Long)0L ? 
				  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_1)) 
				  == (SI_Long)1L : TRUEP(Qnil);
		      if (temp);
		      else
			  temp = INLINE_LONG_VECTOR_P(gensymed_symbol_1) 
				  != (SI_Long)0L ? 
				  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol_1)) 
				  == (SI_Long)1L : TRUEP(Qnil);
		      if (temp);
		      else
			  temp = gensymed_symbol_1 ? 
				  SYMBOLP(gensymed_symbol_1) : TRUEP(Qnil);
		      if (temp);
		      else
			  temp = 
				  INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol_1) 
				  != (SI_Long)0L;
		      if (temp);
		      else if (CONSP(gensymed_symbol_1)) {
			  gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
			  temp = EQ(gensymed_symbol_1,Qtruth_value);
			  if (temp);
			  else
			      temp = EQ(gensymed_symbol_1,Qiteration_state);
			  if (temp);
			  else if (SYMBOLP(gensymed_symbol_1)) {
			      gensymed_symbol = 
				      CDR(Defined_evaluation_value_types);
			      gensymed_symbol_2 = 
				      SXHASH_SYMBOL_1(gensymed_symbol_1) & 
				      IFIX(Most_positive_fixnum);
			      gensymed_symbol_3 = (SI_Long)0L;
			    next_loop:
			      if ( !TRUEP(gensymed_symbol))
				  goto end_loop;
			      gensymed_symbol_3 = 
				      IFIX(ISVREF(gensymed_symbol,
				      (SI_Long)0L));
			      if (gensymed_symbol_2 < gensymed_symbol_3)
				  gensymed_symbol = ISVREF(gensymed_symbol,
					  (SI_Long)1L);
			      else if (gensymed_symbol_2 > gensymed_symbol_3)
				  gensymed_symbol = ISVREF(gensymed_symbol,
					  (SI_Long)2L);
			      else {
				  gensymed_symbol = ISVREF(gensymed_symbol,
					  (SI_Long)3L);
				  gensymed_symbol_4 = Nil;
				next_loop_1:
				  if ( !TRUEP(gensymed_symbol))
				      goto end_loop_1;
				  gensymed_symbol_4 = 
					  M_CAR(M_CAR(gensymed_symbol));
				  if (EQ(gensymed_symbol_1,
					      gensymed_symbol_4)) {
				      temp = 
					      TRUEP(M_CDR(M_CAR(gensymed_symbol)));
				      goto end_1;
				  }
				  gensymed_symbol = M_CDR(gensymed_symbol);
				  goto next_loop_1;
				end_loop_1:
				  temp = TRUEP(Qnil);
				end_1:;
				  goto end_2;
			      }
			      goto next_loop;
			    end_loop:
			      temp = TRUEP(Qnil);
			    end_2:;
			  }
			  else
			      temp = TRUEP(Nil);
		      }
		      else
			  temp = TRUEP(Nil);
		      if (temp)
			  write_evaluation_value(1,duplicate_item_or_datum);
		      else if (SIMPLE_VECTOR_P(duplicate_item_or_datum) && 
			      EQ(ISVREF(duplicate_item_or_datum,
			      (SI_Long)0L),
			      Qg2_defstruct_structure_name_temporary_constant_g2_struct)) 
				  {
			  managed_number_or_value = 
				  ISVREF(duplicate_item_or_datum,(SI_Long)1L);
			  if (INLINE_DOUBLE_FLOAT_VECTOR_P(managed_number_or_value) 
				  != (SI_Long)0L && 
				  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(managed_number_or_value)) 
				  == (SI_Long)1L)
			      temp_1 = 
				      DOUBLE_TO_DOUBLE_FLOAT(DFLOAT_ISAREF_1(managed_number_or_value,
				      (SI_Long)0L));
			  else if (INLINE_LONG_VECTOR_P(managed_number_or_value) 
				  != (SI_Long)0L && 
				  IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(managed_number_or_value)) 
				  == (SI_Long)1L)
			      temp_1 = aref1(managed_number_or_value,
				      FIX((SI_Long)0L));
			  else
			      temp_1 = managed_number_or_value;
			  print_constant(2,temp_1,
				  ISVREF(duplicate_item_or_datum,(SI_Long)2L));
		      }
		      else
			  twrite(duplicate_item_or_datum);
		  }
		  twrite_beginning_of_wide_string(array_constant_94,
			  FIX((SI_Long)3L));
		  tformat(2,string_constant_201,duplicate_element_index);
		  text_string = copy_out_current_wide_string();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
	snapshots = Snapshots_of_related_blocks;
	Snapshots_of_related_blocks = Nil;
	if (Snapshots_of_related_blocks) {
	    reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
	    Snapshots_of_related_blocks = Nil;
	}
      POP_SPECIAL();
    POP_SPECIAL();
    message_1 = make_error_text(text_string,snapshots);
    return raw_stack_error_named_error(top_of_stack_1,message_1);
}

static Object array_constant_95;   /* # */

static Object string_constant_202;  /* " is not valid for the G2-array ~NF." */

/* BAD-G2-ARRAY-LENGTH-STACK-ERROR */
Object bad_g2_array_length_stack_error(g2_array,bad_length,top_of_stack)
    Object g2_array, bad_length, top_of_stack;
{
    Object top_of_stack_1, text_string, snapshots, snapshots_of_related_blocks;
    Object note_blocks_in_tformat, current_wide_string_list, wide_string_bv16;
    Object current_wide_string, fill_pointer_for_current_wide_string;
    Object total_length_of_current_wide_string, current_twriting_output_type;
    Object gensymed_symbol, gensymed_symbol_1, gensymed_symbol_4, message_1;
    SI_Long bv16_length, aref_arg_2, aref_new_value, length_1;
    SI_Long gensymed_symbol_2, gensymed_symbol_3;
    char temp;
    Declare_special(7);

    x_note_fn_call(210,177);
    top_of_stack_1 = top_of_stack;
    text_string = Nil;
    snapshots = Nil;
    snapshots_of_related_blocks = Nil;
    note_blocks_in_tformat = SYMBOL_FUNCTION(Qrecord_block_for_tformat);
    PUSH_SPECIAL(Note_blocks_in_tformat,note_blocks_in_tformat,6);
      PUSH_SPECIAL(Snapshots_of_related_blocks,snapshots_of_related_blocks,5);
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
		  twrite_beginning_of_wide_string(array_constant_95,
			  FIX((SI_Long)17L));
		  gensymed_symbol = bad_length;
		  temp = FIXNUMP(gensymed_symbol);
		  if (temp);
		  else
		      temp = INLINE_DOUBLE_FLOAT_VECTOR_P(gensymed_symbol) 
			      != (SI_Long)0L ? 
			      IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) 
			      == (SI_Long)1L : TRUEP(Qnil);
		  if (temp);
		  else
		      temp = INLINE_LONG_VECTOR_P(gensymed_symbol) != 
			      (SI_Long)0L ? 
			      IFIX(SIMPLE_ARRAY_ANY_1_LENGTH(gensymed_symbol)) 
			      == (SI_Long)1L : TRUEP(Qnil);
		  if (temp);
		  else
		      temp = gensymed_symbol ? SYMBOLP(gensymed_symbol) : 
			      TRUEP(Qnil);
		  if (temp);
		  else
		      temp = 
			      INLINE_UNSIGNED_BYTE_16_VECTOR_P(gensymed_symbol) 
			      != (SI_Long)0L;
		  if (temp);
		  else if (CONSP(gensymed_symbol)) {
		      gensymed_symbol = M_CDR(gensymed_symbol);
		      temp = EQ(gensymed_symbol,Qtruth_value);
		      if (temp);
		      else
			  temp = EQ(gensymed_symbol,Qiteration_state);
		      if (temp);
		      else if (SYMBOLP(gensymed_symbol)) {
			  gensymed_symbol_1 = 
				  CDR(Defined_evaluation_value_types);
			  gensymed_symbol_2 = 
				  SXHASH_SYMBOL_1(gensymed_symbol) & 
				  IFIX(Most_positive_fixnum);
			  gensymed_symbol_3 = (SI_Long)0L;
			next_loop:
			  if ( !TRUEP(gensymed_symbol_1))
			      goto end_loop;
			  gensymed_symbol_3 = 
				  IFIX(ISVREF(gensymed_symbol_1,(SI_Long)0L));
			  if (gensymed_symbol_2 < gensymed_symbol_3)
			      gensymed_symbol_1 = ISVREF(gensymed_symbol_1,
				      (SI_Long)1L);
			  else if (gensymed_symbol_2 > gensymed_symbol_3)
			      gensymed_symbol_1 = ISVREF(gensymed_symbol_1,
				      (SI_Long)2L);
			  else {
			      gensymed_symbol_1 = ISVREF(gensymed_symbol_1,
				      (SI_Long)3L);
			      gensymed_symbol_4 = Nil;
			    next_loop_1:
			      if ( !TRUEP(gensymed_symbol_1))
				  goto end_loop_1;
			      gensymed_symbol_4 = 
				      M_CAR(M_CAR(gensymed_symbol_1));
			      if (EQ(gensymed_symbol,gensymed_symbol_4)) {
				  temp = 
					  TRUEP(M_CDR(M_CAR(gensymed_symbol_1)));
				  goto end_1;
			      }
			      gensymed_symbol_1 = M_CDR(gensymed_symbol_1);
			      goto next_loop_1;
			    end_loop_1:
			      temp = TRUEP(Qnil);
			    end_1:;
			      goto end_2;
			  }
			  goto next_loop;
			end_loop:
			  temp = TRUEP(Qnil);
			end_2:;
		      }
		      else
			  temp = TRUEP(Nil);
		  }
		  else
		      temp = TRUEP(Nil);
		  if (temp)
		      write_evaluation_value(1,bad_length);
		  else
		      twrite(bad_length);
		  tformat(2,string_constant_202,g2_array);
		  text_string = copy_out_current_wide_string();
		POP_SPECIAL();
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
	snapshots = Snapshots_of_related_blocks;
	Snapshots_of_related_blocks = Nil;
	if (Snapshots_of_related_blocks) {
	    reclaim_list_of_block_snapshots(Snapshots_of_related_blocks);
	    Snapshots_of_related_blocks = Nil;
	}
      POP_SPECIAL();
    POP_SPECIAL();
    message_1 = make_error_text(text_string,snapshots);
    return raw_stack_error_named_error(top_of_stack_1,message_1);
}

void stack_acts_INIT()
{
    Object gensymed_symbol, temp;
    Object reclaim_structure_for_component_change_report_1;
    Object list_constant_16, G2_DEFSTRUCT_STRUCTURE_NAME_package;
    Object Qfuncall_resume_kb_inst, Qpprint_resume_kb_action, list_constant_20;
    Object Qresume_kb, AB_package, Qg2_get_top_level_extensions;
    Object Qfunction_keeps_procedure_environment_valid_qm;
    Object Qg2_get_top_level_workspaces, Qg2_get_message_boards;
    Object Qg2_get_system_tables_to_activate, Qfuncall_start_kb_inst;
    Object Qpprint_start_kb_action, Qstart_kb;
    Object Qfuncall_conclude_attribute_inst, Qpprint_conclude_attribute_action;
    Object Qall, Qconclude_attribute, Qfilename_of_basis_kb;
    Object Qidentifier_of_basis_kb, Qcomponent_change_report;
    Object Qreclaim_structure, Qoutstanding_component_change_report_count;
    Object Qcomponent_change_report_structure_memory_usage, Qutilities2;
    Object Qcomponent_change_report_count;
    Object Qchain_of_available_component_change_reports, string_constant_204;
    Object Qtype_description_of_type;
    Object Qtype_description_of_unique_type_name_of_gensym_structure;
    Object string_constant_203, Qunique_structure_type_of_ab_name_qm;
    Object Qab_name_of_unique_structure_type;
    Object Qfuncall_coerce_item_or_values_to_matching_element_type_or_unknown_inst;
    Object list_constant_19;
    Object Qcoerce_item_or_values_to_matching_element_type_or_unknown;
    Object Qfuncall_coerce_item_or_values_to_matching_element_type_inst;
    Object Qcoerce_item_or_values_to_matching_element_type;
    Object Qfuncall_prepare_possibly_unknown_procedure_arguments_inst;
    Object Qprepare_possibly_unknown_procedure_arguments;
    Object Qfuncall_prepare_procedure_arguments_inst;
    Object Qprepare_procedure_arguments, Qfuncall_clear_event_detectors_inst;
    Object Qclear_event_detectors, Qfuncall_install_event_detector_inst;
    Object Qinstall_event_detector, Qfuncall_make_transient_inst;
    Object Qpprint_make_transient_action, Qfuncall_print_inst;
    Object Qpprint_print_action, Qfuncall_make_subworkspace_inst;
    Object Qpprint_make_subworkspace_action, Qmake_subworkspace;
    Object Qfuncall_make_permanent_inst, Qpprint_make_permanent_action;
    Object Qg2_post_clone_interaction, Qg2_attributes_and_classes_to_clone;
    Object Qfuncall_create_by_cloning_inst, Qpprint_create_by_cloning_action;
    Object Qcreate_by_cloning, Qfuncall_shut_down_g2_inst;
    Object Qpprint_shut_down_g2_action, Qshut_down_g2, Qfuncall_abort_inst;
    Object Qpprint_abort_action, Qabort_g2, Qfuncall_start_rpc_inst;
    Object Qpprint_start_rpc_action, list_constant_23, Qstart_rpc;
    Object Qfuncall_start_inst, Qpprint_start_action, list_constant_22;
    Object Qfuncall_update_inst, Qpprint_update_action, Qupdate;
    Object Qfuncall_create_explanation_inst, Qpprint_create_explanation_action;
    Object Qcreate_explanation, Qfuncall_g2_list_remove_inst;
    Object Qpprint_g2_list_remove_item_or_value_action, Qg2_list_remove;
    Object Qfuncall_g2_list_remove_designation_inst;
    Object Qpprint_g2_list_remove_action, Qg2_list_remove_designation;
    Object Qfuncall_g2_list_remove_expression_inst, Qg2_list_remove_expression;
    Object Qfuncall_g2_list_insert_inst;
    Object Qpprint_g2_list_insert_item_or_value_action, Qg2_list_insert;
    Object Qfuncall_g2_list_insert_designation_inst;
    Object Qpprint_g2_list_insert_action, Qg2_list_insert_designation;
    Object Qfuncall_g2_list_insert_expression_inst, Qg2_list_insert_expression;
    Object Qfuncall_change_nth_element_inst, Qpprint_change_nth_element_action;
    Object Qchange_nth_element, Qfuncall_change_the_text_of_attribute_inst;
    Object Qpprint_change_the_text_of_attribute_action;
    Object Qchange_the_text_of_attribute;
    Object Qfuncall_change_system_attribute_inst;
    Object Qpprint_change_system_attribute_action, Qchange_system_attribute;
    Object Qinterval, Qg2_array, Qgsi_interface, Qobject, Qgsi_message_service;
    Object Qgsi_data_service, Qfuncall_transfer_inst, Qpprint_transfer_action;
    Object Qtransfer, Qfuncall_delete_inst, Qpprint_delete_action;
    Object Qg2_in_reset_state_p, Qg2_post_create_interaction, Qno_item;
    Object list_constant_21, Qboolean, Qab_or, Qg2_window, Qab_class;
    Object Qg2_install_subobject, Qg2_attributes_and_classes_to_initialize;
    Object Qfuncall_create_inst, Qpprint_create_action, Qcreate;
    Object Qfuncall_remove_relation_inst, Qpprint_remove_relation_action;
    Object Qremove_relation, Qfuncall_add_relation_inst;
    Object Qpprint_add_relation_action, Qadd_relation, Qfuncall_inform_inst;
    Object Qpprint_inform_action, Qinform, Qinference, Qfuncall_set_inst;
    Object Qpprint_set_action, Qfuncall_deactivate_inst;
    Object Qpprint_deactivate_action, list_constant_17, Qdeactivate;
    Object Qg2_complete_activation, Qfuncall_activate_inst;
    Object Qpprint_activate_action, Qactivate, Qfuncall_hide_inst;
    Object Qpprint_hide_action, Qhide, Qfuncall_show_new_inst, Qshow_new;
    Object Qfuncall_change_item_color_pattern_inst;
    Object Qpprint_change_item_color_pattern_action;
    Object Qchange_item_color_pattern, Qfuncall_change_item_color_inst;
    Object Qpprint_change_item_color_action, Qchange_item_color, Qstack_acts;
    Object Qexecuting_change_item_color_instruction_p;
    Object Qfuncall_focus_with_wait_inst, Qpprint_focus_with_wait_action;
    Object list_constant_18, Qfocus_with_wait, Qfuncall_focus_inst;
    Object Qpprint_focus_action, Qfocus, Qfuncall_conclude_has_no_value_inst;
    Object Qpprint_conclude_has_no_value_action, Qconclude_has_no_value;
    Object Qfuncall_conclude_has_no_current_value_inst;
    Object Qpprint_conclude_has_no_current_value_action;
    Object Qconclude_has_no_current_value, Qfuncall_set_heading_inst;
    Object Qpprint_set_heading_action, Qset_heading, Qfuncall_rotate_inst;
    Object Qpprint_rotate_action, Qrotate, Qfuncall_set_position_inst;
    Object Qpprint_set_position_action, Qset_position, Qfuncall_move_inst;
    Object Qpprint_move_action, Qmove, Qfuncall_compare_and_swap_inst;
    Object Qpprint_compare_and_swap_action, Qcompare_and_swap;
    Object Qfuncall_conclude_inst, Qpprint_conclude_action;

    x_note_fn_call(210,178);
    SET_PACKAGE("AB");
    list_constant_16 = STATIC_LIST((SI_Long)2L,Qunsigned_byte,
	    FIX((SI_Long)16L));
    array_constant = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant,(SI_Long)0L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)1L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)2L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)3L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)4L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)5L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)6L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)7L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)8L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)9L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)10L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)11L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)12L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)13L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)22L,(SI_Long)14L);
    UBYTE_16_ISASET_1(array_constant,(SI_Long)23L,(SI_Long)57344L);
    array_constant_1 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_1,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_1,(SI_Long)1L,(SI_Long)61L);
    UBYTE_16_ISASET_1(array_constant_1,(SI_Long)2L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_1,(SI_Long)6L,(SI_Long)3L);
    UBYTE_16_ISASET_1(array_constant_1,(SI_Long)7L,(SI_Long)57344L);
    array_constant_2 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)1L,(SI_Long)119L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)2L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)3L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)4L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)5L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)6L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)7L,(SI_Long)120L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)8L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)9L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)10L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)11L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)12L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)13L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)14L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)15L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)16L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)22L,(SI_Long)17L);
    UBYTE_16_ISASET_1(array_constant_2,(SI_Long)23L,(SI_Long)57344L);
    AB_package = STATIC_PACKAGE("AB");
    Qtime_stamp = STATIC_SYMBOL("TIME-STAMP",AB_package);
    array_constant_3 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)32L));
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)1L,(SI_Long)119L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)2L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)3L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)4L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)5L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)6L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)7L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)8L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)9L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)10L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)11L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)12L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)13L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)14L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)15L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)16L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)17L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)18L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)19L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)20L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)21L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)30L,(SI_Long)22L);
    UBYTE_16_ISASET_1(array_constant_3,(SI_Long)31L,(SI_Long)57344L);
    array_constant_4 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)1L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)2L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)3L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)4L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)5L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)6L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)7L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)8L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)14L,(SI_Long)9L);
    UBYTE_16_ISASET_1(array_constant_4,(SI_Long)15L,(SI_Long)57344L);
    array_constant_5 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)0L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)1L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)2L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)3L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)4L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)5L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)6L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)7L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)8L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)9L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)10L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)11L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)12L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)13L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)14L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)15L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)16L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)17L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)22L,(SI_Long)18L);
    UBYTE_16_ISASET_1(array_constant_5,(SI_Long)23L,(SI_Long)57344L);
    array_constant_6 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_6,(SI_Long)0L,(SI_Long)58L);
    UBYTE_16_ISASET_1(array_constant_6,(SI_Long)1L,(SI_Long)58L);
    UBYTE_16_ISASET_1(array_constant_6,(SI_Long)6L,(SI_Long)2L);
    UBYTE_16_ISASET_1(array_constant_6,(SI_Long)7L,(SI_Long)57344L);
    array_constant_7 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_7,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_7,(SI_Long)1L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_7,(SI_Long)2L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_7,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_7,(SI_Long)6L,(SI_Long)4L);
    UBYTE_16_ISASET_1(array_constant_7,(SI_Long)7L,(SI_Long)57344L);
    array_constant_8 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_8,(SI_Long)0L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_8,(SI_Long)1L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_8,(SI_Long)2L,(SI_Long)118L);
    UBYTE_16_ISASET_1(array_constant_8,(SI_Long)3L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_8,(SI_Long)4L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_8,(SI_Long)6L,(SI_Long)5L);
    UBYTE_16_ISASET_1(array_constant_8,(SI_Long)7L,(SI_Long)57344L);
    array_constant_9 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_9,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_9,(SI_Long)1L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_9,(SI_Long)2L,(SI_Long)121L);
    UBYTE_16_ISASET_1(array_constant_9,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_9,(SI_Long)4L,(SI_Long)40L);
    UBYTE_16_ISASET_1(array_constant_9,(SI_Long)6L,(SI_Long)5L);
    UBYTE_16_ISASET_1(array_constant_9,(SI_Long)7L,(SI_Long)57344L);
    array_constant_10 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_10,(SI_Long)0L,(SI_Long)44L);
    UBYTE_16_ISASET_1(array_constant_10,(SI_Long)1L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_10,(SI_Long)6L,(SI_Long)2L);
    UBYTE_16_ISASET_1(array_constant_10,(SI_Long)7L,(SI_Long)57344L);
    array_constant_11 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_11,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_11,(SI_Long)1L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_11,(SI_Long)2L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_11,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_11,(SI_Long)4L,(SI_Long)40L);
    UBYTE_16_ISASET_1(array_constant_11,(SI_Long)6L,(SI_Long)5L);
    UBYTE_16_ISASET_1(array_constant_11,(SI_Long)7L,(SI_Long)57344L);
    array_constant_12 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_12,(SI_Long)0L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_12,(SI_Long)1L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_12,(SI_Long)2L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_12,(SI_Long)3L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_12,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_12,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_12,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_12,(SI_Long)14L,(SI_Long)7L);
    UBYTE_16_ISASET_1(array_constant_12,(SI_Long)15L,(SI_Long)57344L);
    array_constant_13 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_13,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_13,(SI_Long)1L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_13,(SI_Long)2L,(SI_Long)121L);
    UBYTE_16_ISASET_1(array_constant_13,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_13,(SI_Long)6L,(SI_Long)4L);
    UBYTE_16_ISASET_1(array_constant_13,(SI_Long)7L,(SI_Long)57344L);
    array_constant_14 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_14,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_14,(SI_Long)1L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_14,(SI_Long)2L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_14,(SI_Long)3L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_14,(SI_Long)4L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_14,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_14,(SI_Long)6L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_14,(SI_Long)7L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_14,(SI_Long)14L,(SI_Long)8L);
    UBYTE_16_ISASET_1(array_constant_14,(SI_Long)15L,(SI_Long)57344L);
    array_constant_15 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)1L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)2L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)5L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)6L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)7L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)8L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)9L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)10L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)11L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)12L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)13L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)14L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)15L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)22L,(SI_Long)16L);
    UBYTE_16_ISASET_1(array_constant_15,(SI_Long)23L,(SI_Long)57344L);
    array_constant_16 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)1L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)3L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)4L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)5L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)6L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)7L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)8L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)9L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)10L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)11L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)12L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)13L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)14L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)15L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)16L,(SI_Long)118L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)17L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)18L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)19L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)20L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)22L,(SI_Long)21L);
    UBYTE_16_ISASET_1(array_constant_16,(SI_Long)23L,(SI_Long)57344L);
    array_constant_17 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)1L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)3L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)4L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)5L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)6L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)7L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)8L,(SI_Long)118L);
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)9L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)10L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)11L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)12L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)14L,(SI_Long)13L);
    UBYTE_16_ISASET_1(array_constant_17,(SI_Long)15L,(SI_Long)57344L);
    array_constant_18 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_18,(SI_Long)0L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_18,(SI_Long)1L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_18,(SI_Long)2L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_18,(SI_Long)3L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_18,(SI_Long)4L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_18,(SI_Long)5L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_18,(SI_Long)6L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_18,(SI_Long)7L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_18,(SI_Long)8L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_18,(SI_Long)14L,(SI_Long)9L);
    UBYTE_16_ISASET_1(array_constant_18,(SI_Long)15L,(SI_Long)57344L);
    array_constant_19 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)0L,(SI_Long)44L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)1L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)3L,(SI_Long)119L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)4L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)5L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)6L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)7L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)8L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)9L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)10L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)11L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)12L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)13L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)14L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)15L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)16L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)17L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)18L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)19L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)20L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)22L,(SI_Long)21L);
    UBYTE_16_ISASET_1(array_constant_19,(SI_Long)23L,(SI_Long)57344L);
    array_constant_20 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_20,(SI_Long)0L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_20,(SI_Long)1L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_20,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_20,(SI_Long)3L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_20,(SI_Long)4L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_20,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_20,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_20,(SI_Long)7L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_20,(SI_Long)8L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_20,(SI_Long)9L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_20,(SI_Long)10L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_20,(SI_Long)14L,(SI_Long)11L);
    UBYTE_16_ISASET_1(array_constant_20,(SI_Long)15L,(SI_Long)57344L);
    array_constant_21 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_21,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_21,(SI_Long)1L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_21,(SI_Long)2L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_21,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_21,(SI_Long)6L,(SI_Long)4L);
    UBYTE_16_ISASET_1(array_constant_21,(SI_Long)7L,(SI_Long)57344L);
    array_constant_22 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)32L));
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)0L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)1L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)3L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)4L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)7L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)8L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)9L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)10L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)11L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)12L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)13L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)14L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)15L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)16L,(SI_Long)45L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)17L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)18L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)19L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)20L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)21L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)22L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)23L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)24L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)25L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)26L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)27L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)30L,(SI_Long)28L);
    UBYTE_16_ISASET_1(array_constant_22,(SI_Long)31L,(SI_Long)57344L);
    array_constant_23 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)56L));
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)0L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)1L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)3L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)4L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)7L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)8L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)9L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)10L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)11L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)12L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)13L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)14L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)15L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)16L,(SI_Long)45L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)17L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)18L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)19L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)20L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)21L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)22L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)23L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)24L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)25L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)26L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)27L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)28L,(SI_Long)60L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)29L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)30L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)31L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)32L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)33L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)34L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)35L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)36L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)37L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)38L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)39L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)40L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)41L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)42L,(SI_Long)118L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)43L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)44L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)45L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)46L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)47L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)48L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)49L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)50L,(SI_Long)62L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)54L,(SI_Long)51L);
    UBYTE_16_ISASET_1(array_constant_23,(SI_Long)55L,(SI_Long)57344L);
    array_constant_24 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_24,(SI_Long)0L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_24,(SI_Long)1L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_24,(SI_Long)2L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_24,(SI_Long)3L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_24,(SI_Long)4L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_24,(SI_Long)6L,(SI_Long)5L);
    UBYTE_16_ISASET_1(array_constant_24,(SI_Long)7L,(SI_Long)57344L);
    array_constant_25 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_25,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_25,(SI_Long)1L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_25,(SI_Long)2L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_25,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_25,(SI_Long)6L,(SI_Long)4L);
    UBYTE_16_ISASET_1(array_constant_25,(SI_Long)7L,(SI_Long)57344L);
    array_constant_26 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)32L));
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)0L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)1L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)2L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)3L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)4L,(SI_Long)118L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)5L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)6L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)7L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)8L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)9L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)10L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)11L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)12L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)13L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)14L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)15L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)16L,(SI_Long)119L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)17L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)18L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)19L,(SI_Long)107L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)20L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)21L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)22L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)23L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)24L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)25L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)26L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)27L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)28L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)30L,(SI_Long)29L);
    UBYTE_16_ISASET_1(array_constant_26,(SI_Long)31L,(SI_Long)57344L);
    array_constant_27 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)40L));
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)0L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)1L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)3L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)5L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)6L,(SI_Long)118L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)7L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)8L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)9L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)10L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)11L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)12L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)13L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)14L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)15L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)16L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)17L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)18L,(SI_Long)119L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)19L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)20L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)21L,(SI_Long)107L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)22L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)23L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)24L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)25L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)26L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)27L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)28L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)29L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)30L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)38L,(SI_Long)31L);
    UBYTE_16_ISASET_1(array_constant_27,(SI_Long)39L,(SI_Long)57344L);
    array_constant_28 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_28,(SI_Long)0L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_28,(SI_Long)1L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_28,(SI_Long)2L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_28,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_28,(SI_Long)6L,(SI_Long)4L);
    UBYTE_16_ISASET_1(array_constant_28,(SI_Long)7L,(SI_Long)57344L);
    array_constant_29 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_29,(SI_Long)0L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_29,(SI_Long)1L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_29,(SI_Long)2L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_29,(SI_Long)3L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_29,(SI_Long)4L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_29,(SI_Long)5L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_29,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_29,(SI_Long)14L,(SI_Long)7L);
    UBYTE_16_ISASET_1(array_constant_29,(SI_Long)15L,(SI_Long)57344L);
    array_constant_30 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_30,(SI_Long)0L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_30,(SI_Long)1L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_30,(SI_Long)2L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_30,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_30,(SI_Long)4L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_30,(SI_Long)5L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_30,(SI_Long)6L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_30,(SI_Long)7L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_30,(SI_Long)8L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_30,(SI_Long)9L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_30,(SI_Long)10L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_30,(SI_Long)11L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_30,(SI_Long)14L,(SI_Long)12L);
    UBYTE_16_ISASET_1(array_constant_30,(SI_Long)15L,(SI_Long)57344L);
    array_constant_31 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_31,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_31,(SI_Long)1L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_31,(SI_Long)2L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_31,(SI_Long)3L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_31,(SI_Long)4L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_31,(SI_Long)5L,(SI_Long)119L);
    UBYTE_16_ISASET_1(array_constant_31,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_31,(SI_Long)14L,(SI_Long)7L);
    UBYTE_16_ISASET_1(array_constant_31,(SI_Long)15L,(SI_Long)57344L);
    array_constant_32 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_32,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_32,(SI_Long)1L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_32,(SI_Long)2L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_32,(SI_Long)3L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_32,(SI_Long)4L,(SI_Long)118L);
    UBYTE_16_ISASET_1(array_constant_32,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_32,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_32,(SI_Long)14L,(SI_Long)7L);
    UBYTE_16_ISASET_1(array_constant_32,(SI_Long)15L,(SI_Long)57344L);
    array_constant_33 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)1L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)2L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)3L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)4L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)5L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)6L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)7L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)8L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)9L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)10L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)11L,(SI_Long)120L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)12L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)13L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)22L,(SI_Long)14L);
    UBYTE_16_ISASET_1(array_constant_33,(SI_Long)23L,(SI_Long)57344L);
    Qseconds = STATIC_SYMBOL("SECONDS",AB_package);
    array_constant_34 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_34,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_34,(SI_Long)1L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_34,(SI_Long)2L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_34,(SI_Long)3L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_34,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_34,(SI_Long)5L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_34,(SI_Long)14L,(SI_Long)6L);
    UBYTE_16_ISASET_1(array_constant_34,(SI_Long)15L,(SI_Long)57344L);
    array_constant_35 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)40L));
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)0L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)1L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)2L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)3L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)4L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)5L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)7L,(SI_Long)60L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)8L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)9L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)10L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)11L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)12L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)13L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)14L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)15L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)16L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)17L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)18L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)19L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)20L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)21L,(SI_Long)118L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)22L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)23L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)24L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)25L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)26L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)27L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)28L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)29L,(SI_Long)62L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)38L,(SI_Long)30L);
    UBYTE_16_ISASET_1(array_constant_35,(SI_Long)39L,(SI_Long)57344L);
    array_constant_36 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_36,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_36,(SI_Long)1L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_36,(SI_Long)2L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_36,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_36,(SI_Long)4L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_36,(SI_Long)5L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_36,(SI_Long)6L,(SI_Long)119L);
    UBYTE_16_ISASET_1(array_constant_36,(SI_Long)7L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_36,(SI_Long)14L,(SI_Long)8L);
    UBYTE_16_ISASET_1(array_constant_36,(SI_Long)15L,(SI_Long)57344L);
    array_constant_37 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_37,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_37,(SI_Long)1L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_37,(SI_Long)2L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_37,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_37,(SI_Long)6L,(SI_Long)4L);
    UBYTE_16_ISASET_1(array_constant_37,(SI_Long)7L,(SI_Long)57344L);
    array_constant_38 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)48L));
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)0L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)1L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)2L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)3L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)4L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)5L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)6L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)7L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)8L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)9L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)10L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)11L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)12L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)13L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)14L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)15L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)16L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)17L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)18L,(SI_Long)60L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)19L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)20L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)21L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)22L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)23L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)24L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)25L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)26L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)27L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)28L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)29L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)30L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)31L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)32L,(SI_Long)118L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)33L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)34L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)35L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)36L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)37L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)38L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)39L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)40L,(SI_Long)62L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)46L,(SI_Long)41L);
    UBYTE_16_ISASET_1(array_constant_38,(SI_Long)47L,(SI_Long)57344L);
    array_constant_39 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_39,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_39,(SI_Long)1L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_39,(SI_Long)2L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_39,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_39,(SI_Long)4L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_39,(SI_Long)5L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_39,(SI_Long)6L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_39,(SI_Long)7L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_39,(SI_Long)14L,(SI_Long)8L);
    UBYTE_16_ISASET_1(array_constant_39,(SI_Long)15L,(SI_Long)57344L);
    array_constant_40 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_40,(SI_Long)0L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_40,(SI_Long)1L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_40,(SI_Long)2L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_40,(SI_Long)3L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_40,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_40,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_40,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_40,(SI_Long)7L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_40,(SI_Long)8L,(SI_Long)40L);
    UBYTE_16_ISASET_1(array_constant_40,(SI_Long)9L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_40,(SI_Long)10L,(SI_Long)41L);
    UBYTE_16_ISASET_1(array_constant_40,(SI_Long)11L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_40,(SI_Long)14L,(SI_Long)12L);
    UBYTE_16_ISASET_1(array_constant_40,(SI_Long)15L,(SI_Long)57344L);
    array_constant_41 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_41,(SI_Long)0L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_41,(SI_Long)1L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_41,(SI_Long)2L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_41,(SI_Long)3L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_41,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_41,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_41,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_41,(SI_Long)14L,(SI_Long)7L);
    UBYTE_16_ISASET_1(array_constant_41,(SI_Long)15L,(SI_Long)57344L);
    array_constant_42 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_42,(SI_Long)0L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_42,(SI_Long)1L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_42,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_42,(SI_Long)3L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_42,(SI_Long)4L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_42,(SI_Long)5L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_42,(SI_Long)6L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_42,(SI_Long)7L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_42,(SI_Long)8L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_42,(SI_Long)14L,(SI_Long)9L);
    UBYTE_16_ISASET_1(array_constant_42,(SI_Long)15L,(SI_Long)57344L);
    array_constant_43 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_43,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_43,(SI_Long)1L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_43,(SI_Long)2L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_43,(SI_Long)3L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_43,(SI_Long)6L,(SI_Long)4L);
    UBYTE_16_ISASET_1(array_constant_43,(SI_Long)7L,(SI_Long)57344L);
    array_constant_44 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_44,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_44,(SI_Long)1L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_44,(SI_Long)2L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_44,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_44,(SI_Long)4L,(SI_Long)40L);
    UBYTE_16_ISASET_1(array_constant_44,(SI_Long)6L,(SI_Long)5L);
    UBYTE_16_ISASET_1(array_constant_44,(SI_Long)7L,(SI_Long)57344L);
    array_constant_45 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)40L));
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)0L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)1L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)3L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)4L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)5L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)6L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)7L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)8L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)9L,(SI_Long)60L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)10L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)11L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)12L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)13L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)14L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)15L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)16L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)17L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)18L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)19L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)20L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)21L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)22L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)23L,(SI_Long)118L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)24L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)25L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)26L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)27L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)28L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)29L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)30L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)31L,(SI_Long)62L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)38L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_45,(SI_Long)39L,(SI_Long)57344L);
    array_constant_46 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)0L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)1L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)3L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)4L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)7L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)8L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)9L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)10L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)11L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)12L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)13L,(SI_Long)120L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)14L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)15L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)16L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)17L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)18L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)22L,(SI_Long)19L);
    UBYTE_16_ISASET_1(array_constant_46,(SI_Long)23L,(SI_Long)57344L);
    array_constant_47 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_47,(SI_Long)0L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_47,(SI_Long)1L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_47,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_47,(SI_Long)3L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_47,(SI_Long)4L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_47,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_47,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_47,(SI_Long)14L,(SI_Long)7L);
    UBYTE_16_ISASET_1(array_constant_47,(SI_Long)15L,(SI_Long)57344L);
    array_constant_48 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_48,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_48,(SI_Long)1L,(SI_Long)91L);
    UBYTE_16_ISASET_1(array_constant_48,(SI_Long)6L,(SI_Long)2L);
    UBYTE_16_ISASET_1(array_constant_48,(SI_Long)7L,(SI_Long)57344L);
    array_constant_49 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_49,(SI_Long)0L,(SI_Long)93L);
    UBYTE_16_ISASET_1(array_constant_49,(SI_Long)1L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_49,(SI_Long)2L,(SI_Long)61L);
    UBYTE_16_ISASET_1(array_constant_49,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_49,(SI_Long)6L,(SI_Long)4L);
    UBYTE_16_ISASET_1(array_constant_49,(SI_Long)7L,(SI_Long)57344L);
    array_constant_50 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_50,(SI_Long)0L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_50,(SI_Long)1L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_50,(SI_Long)2L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_50,(SI_Long)3L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_50,(SI_Long)4L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_50,(SI_Long)5L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_50,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_50,(SI_Long)14L,(SI_Long)7L);
    UBYTE_16_ISASET_1(array_constant_50,(SI_Long)15L,(SI_Long)57344L);
    Qbeginning = STATIC_SYMBOL("BEGINNING",AB_package);
    array_constant_51 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)1L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)2L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)5L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)6L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)7L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)8L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)9L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)10L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)11L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)12L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)13L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)14L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)15L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)16L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)17L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)18L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)19L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)22L,(SI_Long)20L);
    UBYTE_16_ISASET_1(array_constant_51,(SI_Long)23L,(SI_Long)57344L);
    Qend = STATIC_SYMBOL("END",AB_package);
    array_constant_52 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)1L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)2L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)5L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)6L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)7L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)8L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)9L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)10L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)11L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)12L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)13L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)22L,(SI_Long)14L);
    UBYTE_16_ISASET_1(array_constant_52,(SI_Long)23L,(SI_Long)57344L);
    Qbefore = STATIC_SYMBOL("BEFORE",AB_package);
    array_constant_53 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_53,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_53,(SI_Long)1L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_53,(SI_Long)2L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_53,(SI_Long)3L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_53,(SI_Long)4L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_53,(SI_Long)5L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_53,(SI_Long)6L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_53,(SI_Long)7L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_53,(SI_Long)14L,(SI_Long)8L);
    UBYTE_16_ISASET_1(array_constant_53,(SI_Long)15L,(SI_Long)57344L);
    array_constant_54 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_54,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_54,(SI_Long)1L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_54,(SI_Long)2L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_54,(SI_Long)6L,(SI_Long)3L);
    UBYTE_16_ISASET_1(array_constant_54,(SI_Long)7L,(SI_Long)57344L);
    Qafter = STATIC_SYMBOL("AFTER",AB_package);
    array_constant_55 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_55,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_55,(SI_Long)1L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_55,(SI_Long)2L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_55,(SI_Long)3L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_55,(SI_Long)4L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_55,(SI_Long)5L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_55,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_55,(SI_Long)14L,(SI_Long)7L);
    UBYTE_16_ISASET_1(array_constant_55,(SI_Long)15L,(SI_Long)57344L);
    array_constant_56 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_56,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_56,(SI_Long)1L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_56,(SI_Long)2L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_56,(SI_Long)3L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_56,(SI_Long)4L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_56,(SI_Long)6L,(SI_Long)5L);
    UBYTE_16_ISASET_1(array_constant_56,(SI_Long)7L,(SI_Long)57344L);
    string_constant = STATIC_STRING("~NT");
    array_constant_57 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_57,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_57,(SI_Long)1L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_57,(SI_Long)2L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_57,(SI_Long)3L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_57,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_57,(SI_Long)5L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_57,(SI_Long)14L,(SI_Long)6L);
    UBYTE_16_ISASET_1(array_constant_57,(SI_Long)15L,(SI_Long)57344L);
    array_constant_58 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_58,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_58,(SI_Long)1L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_58,(SI_Long)2L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_58,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_58,(SI_Long)6L,(SI_Long)4L);
    UBYTE_16_ISASET_1(array_constant_58,(SI_Long)7L,(SI_Long)57344L);
    array_constant_59 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_59,(SI_Long)0L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_59,(SI_Long)1L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_59,(SI_Long)2L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_59,(SI_Long)3L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_59,(SI_Long)4L,(SI_Long)118L);
    UBYTE_16_ISASET_1(array_constant_59,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_59,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_59,(SI_Long)14L,(SI_Long)7L);
    UBYTE_16_ISASET_1(array_constant_59,(SI_Long)15L,(SI_Long)57344L);
    array_constant_60 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_60,(SI_Long)0L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_60,(SI_Long)1L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_60,(SI_Long)2L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_60,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_60,(SI_Long)4L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_60,(SI_Long)5L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_60,(SI_Long)6L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_60,(SI_Long)7L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_60,(SI_Long)8L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_60,(SI_Long)9L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_60,(SI_Long)14L,(SI_Long)10L);
    UBYTE_16_ISASET_1(array_constant_60,(SI_Long)15L,(SI_Long)57344L);
    array_constant_61 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_61,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_61,(SI_Long)1L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_61,(SI_Long)2L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_61,(SI_Long)3L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_61,(SI_Long)4L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_61,(SI_Long)5L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_61,(SI_Long)14L,(SI_Long)6L);
    UBYTE_16_ISASET_1(array_constant_61,(SI_Long)15L,(SI_Long)57344L);
    array_constant_62 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_62,(SI_Long)0L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_62,(SI_Long)1L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_62,(SI_Long)2L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_62,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_62,(SI_Long)4L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_62,(SI_Long)5L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_62,(SI_Long)6L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_62,(SI_Long)7L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_62,(SI_Long)8L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_62,(SI_Long)14L,(SI_Long)9L);
    UBYTE_16_ISASET_1(array_constant_62,(SI_Long)15L,(SI_Long)57344L);
    Qelement = STATIC_SYMBOL("ELEMENT",AB_package);
    array_constant_63 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_63,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_63,(SI_Long)1L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_63,(SI_Long)2L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_63,(SI_Long)3L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_63,(SI_Long)4L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_63,(SI_Long)5L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_63,(SI_Long)6L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_63,(SI_Long)7L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_63,(SI_Long)8L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_63,(SI_Long)9L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_63,(SI_Long)14L,(SI_Long)10L);
    UBYTE_16_ISASET_1(array_constant_63,(SI_Long)15L,(SI_Long)57344L);
    array_constant_64 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)32L));
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)0L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)1L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)2L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)3L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)7L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)8L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)9L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)10L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)11L,(SI_Long)120L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)12L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)13L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)14L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)15L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)16L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)17L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)18L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)19L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)20L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)21L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)22L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)23L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)24L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)25L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)30L,(SI_Long)26L);
    UBYTE_16_ISASET_1(array_constant_64,(SI_Long)31L,(SI_Long)57344L);
    array_constant_65 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_65,(SI_Long)0L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_65,(SI_Long)1L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_65,(SI_Long)2L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_65,(SI_Long)3L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_65,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_65,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_65,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_65,(SI_Long)14L,(SI_Long)7L);
    UBYTE_16_ISASET_1(array_constant_65,(SI_Long)15L,(SI_Long)57344L);
    array_constant_66 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_66,(SI_Long)0L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_66,(SI_Long)1L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_66,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_66,(SI_Long)3L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_66,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_66,(SI_Long)5L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_66,(SI_Long)14L,(SI_Long)6L);
    UBYTE_16_ISASET_1(array_constant_66,(SI_Long)15L,(SI_Long)57344L);
    array_constant_67 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_67,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_67,(SI_Long)1L,(SI_Long)40L);
    UBYTE_16_ISASET_1(array_constant_67,(SI_Long)6L,(SI_Long)2L);
    UBYTE_16_ISASET_1(array_constant_67,(SI_Long)7L,(SI_Long)57344L);
    array_constant_68 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)1L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)2L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)4L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)5L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)6L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)7L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)8L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)9L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)10L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)11L,(SI_Long)121L);
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)12L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)14L,(SI_Long)13L);
    UBYTE_16_ISASET_1(array_constant_68,(SI_Long)15L,(SI_Long)57344L);
    array_constant_69 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)32L));
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)0L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)1L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)3L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)5L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)6L,(SI_Long)60L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)7L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)8L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)9L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)10L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)11L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)12L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)13L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)14L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)15L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)16L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)17L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)18L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)19L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)20L,(SI_Long)118L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)21L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)22L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)23L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)24L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)25L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)26L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)27L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)28L,(SI_Long)62L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)30L,(SI_Long)29L);
    UBYTE_16_ISASET_1(array_constant_69,(SI_Long)31L,(SI_Long)57344L);
    array_constant_70 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_70,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_70,(SI_Long)1L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_70,(SI_Long)2L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_70,(SI_Long)3L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_70,(SI_Long)4L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_70,(SI_Long)5L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_70,(SI_Long)6L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_70,(SI_Long)7L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_70,(SI_Long)14L,(SI_Long)8L);
    UBYTE_16_ISASET_1(array_constant_70,(SI_Long)15L,(SI_Long)57344L);
    array_constant_71 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)40L));
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)0L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)1L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)3L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)5L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)6L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)7L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)8L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)9L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)10L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)11L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)12L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)13L,(SI_Long)60L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)14L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)15L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)16L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)17L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)18L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)19L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)20L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)21L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)22L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)23L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)24L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)25L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)26L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)27L,(SI_Long)118L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)28L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)29L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)30L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)31L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)32L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)33L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)34L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)35L,(SI_Long)62L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)38L,(SI_Long)36L);
    UBYTE_16_ISASET_1(array_constant_71,(SI_Long)39L,(SI_Long)57344L);
    array_constant_72 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_72,(SI_Long)0L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_72,(SI_Long)1L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_72,(SI_Long)2L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_72,(SI_Long)3L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_72,(SI_Long)4L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_72,(SI_Long)6L,(SI_Long)5L);
    UBYTE_16_ISASET_1(array_constant_72,(SI_Long)7L,(SI_Long)57344L);
    array_constant_73 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)32L));
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)0L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)1L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)2L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)3L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)4L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)5L,(SI_Long)60L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)6L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)7L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)8L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)9L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)10L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)11L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)12L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)13L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)14L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)15L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)16L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)17L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)18L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)19L,(SI_Long)118L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)20L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)21L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)22L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)23L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)24L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)25L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)26L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)27L,(SI_Long)62L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)30L,(SI_Long)28L);
    UBYTE_16_ISASET_1(array_constant_73,(SI_Long)31L,(SI_Long)57344L);
    array_constant_74 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_74,(SI_Long)0L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_74,(SI_Long)1L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_74,(SI_Long)2L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_74,(SI_Long)3L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_74,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_74,(SI_Long)5L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_74,(SI_Long)14L,(SI_Long)6L);
    UBYTE_16_ISASET_1(array_constant_74,(SI_Long)15L,(SI_Long)57344L);
    array_constant_75 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_75,(SI_Long)0L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_75,(SI_Long)1L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_75,(SI_Long)2L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_75,(SI_Long)3L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_75,(SI_Long)4L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_75,(SI_Long)5L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_75,(SI_Long)6L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_75,(SI_Long)7L,(SI_Long)119L);
    UBYTE_16_ISASET_1(array_constant_75,(SI_Long)8L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_75,(SI_Long)9L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_75,(SI_Long)10L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_75,(SI_Long)11L,(SI_Long)50L);
    UBYTE_16_ISASET_1(array_constant_75,(SI_Long)14L,(SI_Long)12L);
    UBYTE_16_ISASET_1(array_constant_75,(SI_Long)15L,(SI_Long)57344L);
    array_constant_76 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_76,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_76,(SI_Long)1L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_76,(SI_Long)2L,(SI_Long)121L);
    UBYTE_16_ISASET_1(array_constant_76,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_76,(SI_Long)4L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_76,(SI_Long)5L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_76,(SI_Long)6L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_76,(SI_Long)7L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_76,(SI_Long)8L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_76,(SI_Long)9L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_76,(SI_Long)10L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_76,(SI_Long)11L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_76,(SI_Long)14L,(SI_Long)12L);
    UBYTE_16_ISASET_1(array_constant_76,(SI_Long)15L,(SI_Long)57344L);
    array_constant_77 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_77,(SI_Long)0L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_77,(SI_Long)1L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_77,(SI_Long)2L,(SI_Long)107L);
    UBYTE_16_ISASET_1(array_constant_77,(SI_Long)3L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_77,(SI_Long)4L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_77,(SI_Long)6L,(SI_Long)5L);
    UBYTE_16_ISASET_1(array_constant_77,(SI_Long)7L,(SI_Long)57344L);
    array_constant_78 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_78,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_78,(SI_Long)1L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_78,(SI_Long)2L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_78,(SI_Long)3L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_78,(SI_Long)4L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_78,(SI_Long)5L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_78,(SI_Long)6L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_78,(SI_Long)7L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_78,(SI_Long)8L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_78,(SI_Long)9L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_78,(SI_Long)14L,(SI_Long)10L);
    UBYTE_16_ISASET_1(array_constant_78,(SI_Long)15L,(SI_Long)57344L);
    array_constant_79 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)1L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)2L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)3L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)4L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)5L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)6L,(SI_Long)119L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)7L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)8L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)9L,(SI_Long)107L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)10L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)11L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)12L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)13L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)14L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)15L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)16L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)17L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)18L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)22L,(SI_Long)19L);
    UBYTE_16_ISASET_1(array_constant_79,(SI_Long)23L,(SI_Long)57344L);
    array_constant_80 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_80,(SI_Long)0L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_80,(SI_Long)1L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_80,(SI_Long)2L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_80,(SI_Long)3L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_80,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_80,(SI_Long)5L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_80,(SI_Long)14L,(SI_Long)6L);
    UBYTE_16_ISASET_1(array_constant_80,(SI_Long)15L,(SI_Long)57344L);
    array_constant_81 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_81,(SI_Long)0L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_81,(SI_Long)1L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_81,(SI_Long)2L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_81,(SI_Long)3L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_81,(SI_Long)4L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_81,(SI_Long)5L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_81,(SI_Long)6L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_81,(SI_Long)7L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_81,(SI_Long)8L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_81,(SI_Long)9L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_81,(SI_Long)14L,(SI_Long)10L);
    UBYTE_16_ISASET_1(array_constant_81,(SI_Long)15L,(SI_Long)57344L);
    array_constant_82 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_82,(SI_Long)0L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_82,(SI_Long)1L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_82,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_82,(SI_Long)3L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_82,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_82,(SI_Long)5L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_82,(SI_Long)6L,(SI_Long)107L);
    UBYTE_16_ISASET_1(array_constant_82,(SI_Long)7L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_82,(SI_Long)14L,(SI_Long)8L);
    UBYTE_16_ISASET_1(array_constant_82,(SI_Long)15L,(SI_Long)57344L);
    array_constant_83 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_83,(SI_Long)0L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_83,(SI_Long)1L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_83,(SI_Long)2L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_83,(SI_Long)3L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_83,(SI_Long)4L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_83,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_83,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_83,(SI_Long)7L,(SI_Long)107L);
    UBYTE_16_ISASET_1(array_constant_83,(SI_Long)8L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_83,(SI_Long)14L,(SI_Long)9L);
    UBYTE_16_ISASET_1(array_constant_83,(SI_Long)15L,(SI_Long)57344L);
    array_constant_84 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_84,(SI_Long)0L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_84,(SI_Long)1L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_84,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_84,(SI_Long)3L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_84,(SI_Long)4L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_84,(SI_Long)5L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_84,(SI_Long)14L,(SI_Long)6L);
    UBYTE_16_ISASET_1(array_constant_84,(SI_Long)15L,(SI_Long)57344L);
    array_constant_85 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_85,(SI_Long)0L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_85,(SI_Long)1L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_85,(SI_Long)2L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_85,(SI_Long)3L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_85,(SI_Long)4L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_85,(SI_Long)5L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_85,(SI_Long)6L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_85,(SI_Long)14L,(SI_Long)7L);
    UBYTE_16_ISASET_1(array_constant_85,(SI_Long)15L,(SI_Long)57344L);
    Qplace_reference = STATIC_SYMBOL("PLACE-REFERENCE",AB_package);
    string_constant_1 = STATIC_STRING("Cannot conclude a value into ~NV.");
    Qrecord_block_for_tformat = STATIC_SYMBOL("RECORD-BLOCK-FOR-TFORMAT",
	    AB_package);
    Qdo_not_use = STATIC_SYMBOL("DO-NOT-USE",AB_package);
    Qwide_string = STATIC_SYMBOL("WIDE-STRING",AB_package);
    string_constant_2 = STATIC_STRING("Failed to conclude.");
    float_constant = STATIC_FLOAT(0.5);
    string_constant_3 = 
	    STATIC_STRING("While executing a CONCLUDE action, could not locate a variable ~\n                or parameter attribute of ~NF which has ~NV in its range of ~\n                possible values.");
    string_constant_4 = 
	    STATIC_STRING("Cannot conclude a value for ~NF, since it is not a variable or ~\n                parameter.");
    Qconclude = STATIC_SYMBOL("CONCLUDE",AB_package);
    Qinference = STATIC_SYMBOL("INFERENCE",AB_package);
    Qprocedure = STATIC_SYMBOL("PROCEDURE",AB_package);
    list_constant_17 = STATIC_LIST((SI_Long)2L,Qinference,Qprocedure);
    Qfuncall_conclude_inst = STATIC_SYMBOL("FUNCALL-CONCLUDE-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_conclude_inst,
	    STATIC_FUNCTION(funcall_conclude_inst,NIL,FALSE,2,2));
    Qpprint_conclude_action = STATIC_SYMBOL("PPRINT-CONCLUDE-ACTION",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_conclude_action,
	    STATIC_FUNCTION(pprint_conclude_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qconclude,
	    FIX((SI_Long)0L),list_constant_17,FIX((SI_Long)4L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_conclude_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_conclude_action),Qfuncall_conclude_inst);
    Qcompare_and_swap = STATIC_SYMBOL("COMPARE-AND-SWAP",AB_package);
    Qfuncall_compare_and_swap_inst = 
	    STATIC_SYMBOL("FUNCALL-COMPARE-AND-SWAP-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_compare_and_swap_inst,
	    STATIC_FUNCTION(funcall_compare_and_swap_inst,NIL,FALSE,2,2));
    Qpprint_compare_and_swap_action = 
	    STATIC_SYMBOL("PPRINT-COMPARE-AND-SWAP-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_compare_and_swap_action,
	    STATIC_FUNCTION(pprint_compare_and_swap_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qcompare_and_swap,
	    FIX((SI_Long)83L),list_constant_17,FIX((SI_Long)4L),
	    FIX((SI_Long)1L),
	    SYMBOL_FUNCTION(Qfuncall_compare_and_swap_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_compare_and_swap_action),
	    Qfuncall_compare_and_swap_inst);
    string_constant_5 = STATIC_STRING("Cannot conclude a value for ~NV.  ~NW");
    string_constant_6 = 
	    STATIC_STRING("Error while executing a conclude action.  ~NW");
    string_constant_7 = 
	    STATIC_STRING("The workspace, ~NF, cannot be moved by a MOVE BY action.");
    string_constant_8 = 
	    string_append2(STATIC_STRING("In the MOVE BY action, the delta X and Y values for ~NF, ~a ~\n\t     and ~a, would move the item outside the allowable range for ~\n             workspace coordinates, ~a to ~a "),
	    STATIC_STRING("inclusive."));
    Qis_moved_by_g2 = STATIC_SYMBOL("IS-MOVED-BY-G2",AB_package);
    Qmove = STATIC_SYMBOL("MOVE",AB_package);
    Qfuncall_move_inst = STATIC_SYMBOL("FUNCALL-MOVE-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_move_inst,
	    STATIC_FUNCTION(funcall_move_inst,NIL,FALSE,2,2));
    Qpprint_move_action = STATIC_SYMBOL("PPRINT-MOVE-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_move_action,
	    STATIC_FUNCTION(pprint_move_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qmove,
	    FIX((SI_Long)1L),list_constant_17,FIX((SI_Long)3L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_move_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_move_action),Qfuncall_move_inst);
    string_constant_9 = 
	    STATIC_STRING("In the ~a action, the new X and Y coordinates for ~NF, ~a ~\n          and ~a, are not valid numbers.");
    string_constant_10 = 
	    STATIC_STRING("In the ~a action, the new X and Y coordinates for ~NF, ~a ~\n          and ~a, are outside the allowable range for workspace ~\n          coordinates, ~a to ~a inclusive.");
    string_constant_11 = 
	    STATIC_STRING("The workspace, ~NF, cannot be moved by a MOVE TO action.");
    string_constant_12 = STATIC_STRING("MOVE");
    Qset_position = STATIC_SYMBOL("SET-POSITION",AB_package);
    Qfuncall_set_position_inst = STATIC_SYMBOL("FUNCALL-SET-POSITION-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_set_position_inst,
	    STATIC_FUNCTION(funcall_set_position_inst,NIL,FALSE,2,2));
    Qpprint_set_position_action = 
	    STATIC_SYMBOL("PPRINT-SET-POSITION-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_set_position_action,
	    STATIC_FUNCTION(pprint_set_position_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qset_position,
	    FIX((SI_Long)2L),list_constant_17,FIX((SI_Long)3L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_set_position_inst),
	    Qnil,SYMBOL_FUNCTION(Qpprint_set_position_action),
	    Qfuncall_set_position_inst);
    string_constant_13 = 
	    STATIC_STRING("Cannot rotate ~NF because this item does not have an icon ~\n       or is not of a class that permits rotation.");
    Qrotate = STATIC_SYMBOL("ROTATE",AB_package);
    Qfuncall_rotate_inst = STATIC_SYMBOL("FUNCALL-ROTATE-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_rotate_inst,
	    STATIC_FUNCTION(funcall_rotate_inst,NIL,FALSE,2,2));
    Qpprint_rotate_action = STATIC_SYMBOL("PPRINT-ROTATE-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_rotate_action,
	    STATIC_FUNCTION(pprint_rotate_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qrotate,
	    FIX((SI_Long)3L),list_constant_17,FIX((SI_Long)2L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_rotate_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_rotate_action),Qfuncall_rotate_inst);
    Qset_heading = STATIC_SYMBOL("SET-HEADING",AB_package);
    Qfuncall_set_heading_inst = STATIC_SYMBOL("FUNCALL-SET-HEADING-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_set_heading_inst,
	    STATIC_FUNCTION(funcall_set_heading_inst,NIL,FALSE,2,2));
    Qpprint_set_heading_action = STATIC_SYMBOL("PPRINT-SET-HEADING-ACTION",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_set_heading_action,
	    STATIC_FUNCTION(pprint_set_heading_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qset_heading,
	    FIX((SI_Long)4L),list_constant_17,FIX((SI_Long)2L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_set_heading_inst),
	    Qnil,SYMBOL_FUNCTION(Qpprint_set_heading_action),
	    Qfuncall_set_heading_inst);
    Qconclude_has_no_current_value = 
	    STATIC_SYMBOL("CONCLUDE-HAS-NO-CURRENT-VALUE",AB_package);
    Qfuncall_conclude_has_no_current_value_inst = 
	    STATIC_SYMBOL("FUNCALL-CONCLUDE-HAS-NO-CURRENT-VALUE-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_conclude_has_no_current_value_inst,
	    STATIC_FUNCTION(funcall_conclude_has_no_current_value_inst,NIL,
	    FALSE,2,2));
    Qpprint_conclude_has_no_current_value_action = 
	    STATIC_SYMBOL("PPRINT-CONCLUDE-HAS-NO-CURRENT-VALUE-ACTION",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_conclude_has_no_current_value_action,
	    STATIC_FUNCTION(pprint_conclude_has_no_current_value_action,
	    NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qconclude_has_no_current_value,
	    FIX((SI_Long)5L),list_constant_17,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_conclude_has_no_current_value_inst),
	    Qnil,
	    SYMBOL_FUNCTION(Qpprint_conclude_has_no_current_value_action),
	    Qfuncall_conclude_has_no_current_value_inst);
    Qconclude_has_no_value = STATIC_SYMBOL("CONCLUDE-HAS-NO-VALUE",AB_package);
    Qfuncall_conclude_has_no_value_inst = 
	    STATIC_SYMBOL("FUNCALL-CONCLUDE-HAS-NO-VALUE-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_conclude_has_no_value_inst,
	    STATIC_FUNCTION(funcall_conclude_has_no_value_inst,NIL,FALSE,2,2));
    Qpprint_conclude_has_no_value_action = 
	    STATIC_SYMBOL("PPRINT-CONCLUDE-HAS-NO-VALUE-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_conclude_has_no_value_action,
	    STATIC_FUNCTION(pprint_conclude_has_no_value_action,NIL,FALSE,
	    6,6));
    make_and_register_funcalled_instruction_description(Qconclude_has_no_value,
	    FIX((SI_Long)6L),list_constant_17,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_conclude_has_no_value_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_conclude_has_no_value_action),
	    Qfuncall_conclude_has_no_value_inst);
    Qname_or_names_for_frame = STATIC_SYMBOL("NAME-OR-NAMES-FOR-FRAME",
	    AB_package);
    Qfocusing = STATIC_SYMBOL("FOCUSING",AB_package);
    Qitem = STATIC_SYMBOL("ITEM",AB_package);
    Qfocus = STATIC_SYMBOL("FOCUS",AB_package);
    Qfuncall_focus_inst = STATIC_SYMBOL("FUNCALL-FOCUS-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_focus_inst,
	    STATIC_FUNCTION(funcall_focus_inst,NIL,FALSE,2,2));
    Qpprint_focus_action = STATIC_SYMBOL("PPRINT-FOCUS-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_focus_action,
	    STATIC_FUNCTION(pprint_focus_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qfocus,
	    FIX((SI_Long)7L),list_constant_17,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_focus_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_focus_action),Qfuncall_focus_inst);
    Qfocus_with_wait = STATIC_SYMBOL("FOCUS-WITH-WAIT",AB_package);
    list_constant_18 = STATIC_CONS(Qprocedure,Qnil);
    Qfuncall_focus_with_wait_inst = 
	    STATIC_SYMBOL("FUNCALL-FOCUS-WITH-WAIT-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_focus_with_wait_inst,
	    STATIC_FUNCTION(funcall_focus_with_wait_inst,NIL,FALSE,2,2));
    Qpprint_focus_with_wait_action = 
	    STATIC_SYMBOL("PPRINT-FOCUS-WITH-WAIT-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_focus_with_wait_action,
	    STATIC_FUNCTION(pprint_focus_with_wait_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qfocus_with_wait,
	    FIX((SI_Long)82L),list_constant_18,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_focus_with_wait_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_focus_with_wait_action),
	    Qfuncall_focus_with_wait_inst);
    Qexecuting_change_item_color_instruction_p = 
	    STATIC_SYMBOL("EXECUTING-CHANGE-ITEM-COLOR-INSTRUCTION-P",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qexecuting_change_item_color_instruction_p,
	    Executing_change_item_color_instruction_p);
    Qstack_acts = STATIC_SYMBOL("STACK-ACTS",AB_package);
    record_system_variable(Qexecuting_change_item_color_instruction_p,
	    Qstack_acts,Nil,Qnil,Qnil,Qnil,Qnil);
    string_constant_14 = 
	    STATIC_STRING("Cannot change the ~a region of ~NF.  The class definition for ~a ~\n     does not have a region named ~a.");
    string_constant_15 = 
	    STATIC_STRING("Cannot change an unnamed color region in ~NF using its color name ~\n       (~a).  Unnamed color regions cannot be changed.");
    Qcm = STATIC_SYMBOL(",",AB_package);
    string_constant_16 = STATIC_STRING(" are illegal colors");
    string_constant_17 = STATIC_STRING(" is an illegal color");
    Qmissing_color_region = STATIC_SYMBOL("MISSING-COLOR-REGION",AB_package);
    Qunnamed_color_region = STATIC_SYMBOL("UNNAMED-COLOR-REGION",AB_package);
    Qillegal_colors = STATIC_SYMBOL("ILLEGAL-COLORS",AB_package);
    Qchange_item_color = STATIC_SYMBOL("CHANGE-ITEM-COLOR",AB_package);
    Qfuncall_change_item_color_inst = 
	    STATIC_SYMBOL("FUNCALL-CHANGE-ITEM-COLOR-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_change_item_color_inst,
	    STATIC_FUNCTION(funcall_change_item_color_inst,NIL,FALSE,2,2));
    Qpprint_change_item_color_action = 
	    STATIC_SYMBOL("PPRINT-CHANGE-ITEM-COLOR-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_change_item_color_action,
	    STATIC_FUNCTION(pprint_change_item_color_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qchange_item_color,
	    FIX((SI_Long)8L),list_constant_17,FIX((SI_Long)3L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_change_item_color_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_change_item_color_action),
	    Qfuncall_change_item_color_inst);
    Qchange_item_color_pattern = STATIC_SYMBOL("CHANGE-ITEM-COLOR-PATTERN",
	    AB_package);
    list_constant_19 = STATIC_CONS(FIX((SI_Long)0L),Qnil);
    Qfuncall_change_item_color_pattern_inst = 
	    STATIC_SYMBOL("FUNCALL-CHANGE-ITEM-COLOR-PATTERN-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_change_item_color_pattern_inst,
	    STATIC_FUNCTION(funcall_change_item_color_pattern_inst,NIL,
	    FALSE,2,2));
    Qpprint_change_item_color_pattern_action = 
	    STATIC_SYMBOL("PPRINT-CHANGE-ITEM-COLOR-PATTERN-ACTION",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_change_item_color_pattern_action,
	    STATIC_FUNCTION(pprint_change_item_color_pattern_action,NIL,
	    FALSE,8,8));
    make_and_register_funcalled_instruction_description(Qchange_item_color_pattern,
	    FIX((SI_Long)9L),list_constant_17,list_constant_19,
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_change_item_color_pattern_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_change_item_color_pattern_action),
	    Qfuncall_change_item_color_pattern_inst);
    Qtruth_value = STATIC_SYMBOL("TRUTH-VALUE",AB_package);
    Qiteration_state = STATIC_SYMBOL("ITERATION-STATE",AB_package);
    Qshow_workspace = STATIC_SYMBOL("SHOW-WORKSPACE",AB_package);
    string_constant_18 = 
	    STATIC_STRING("Cannot show ~NF.  The show action has been restricted for this item.");
    Qshow_new = STATIC_SYMBOL("SHOW-NEW",AB_package);
    Qfuncall_show_new_inst = STATIC_SYMBOL("FUNCALL-SHOW-NEW-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_show_new_inst,
	    STATIC_FUNCTION(funcall_show_new_inst,NIL,FALSE,2,2));
    make_and_register_funcalled_instruction_description(Qshow_new,
	    FIX((SI_Long)27L),list_constant_17,FIX((SI_Long)19L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_show_new_inst),Qnil,
	    Nil,Qfuncall_show_new_inst);
    Qhide = STATIC_SYMBOL("HIDE",AB_package);
    Qfuncall_hide_inst = STATIC_SYMBOL("FUNCALL-HIDE-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_hide_inst,
	    STATIC_FUNCTION(funcall_hide_inst,NIL,FALSE,2,2));
    Qpprint_hide_action = STATIC_SYMBOL("PPRINT-HIDE-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_hide_action,
	    STATIC_FUNCTION(pprint_hide_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qhide,
	    FIX((SI_Long)10L),list_constant_17,FIX((SI_Long)2L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_hide_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_hide_action),Qfuncall_hide_inst);
    string_constant_19 = 
	    STATIC_STRING("Attempting to activate ~NF which has no subworkspace.");
    string_constant_20 = 
	    STATIC_STRING("Attempting to activate an item ~NF which is superior to the ~\n              item that is doing the activation.");
    Qactivatable_subworkspace = STATIC_SYMBOL("ACTIVATABLE-SUBWORKSPACE",
	    AB_package);
    string_constant_21 = 
	    STATIC_STRING("Attempting to activate ~NF, which is not an object that ~\n              is capable of having an activatable subworkspace.");
    string_constant_22 = 
	    STATIC_STRING("Attempting to activate a subworkspace of ~NF, which is ~\n                     not itself active.");
    Qactivate = STATIC_SYMBOL("ACTIVATE",AB_package);
    Qfuncall_activate_inst = STATIC_SYMBOL("FUNCALL-ACTIVATE-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_activate_inst,
	    STATIC_FUNCTION(funcall_activate_inst,NIL,FALSE,2,2));
    Qpprint_activate_action = STATIC_SYMBOL("PPRINT-ACTIVATE-ACTION",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_activate_action,
	    STATIC_FUNCTION(pprint_activate_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qactivate,
	    FIX((SI_Long)11L),list_constant_17,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_activate_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_activate_action),Qfuncall_activate_inst);
    Qparent_frame = STATIC_SYMBOL("PARENT-FRAME",AB_package);
    Qg2_complete_activation = STATIC_SYMBOL("G2-COMPLETE-ACTIVATION",
	    AB_package);
    Qfunction_keeps_procedure_environment_valid_qm = 
	    STATIC_SYMBOL("FUNCTION-KEEPS-PROCEDURE-ENVIRONMENT-VALID\?",
	    AB_package);
    gensymed_symbol = T;
    mutate_global_property(Qg2_complete_activation,gensymed_symbol,
	    Qfunction_keeps_procedure_environment_valid_qm);
    Qitem_active = STATIC_SYMBOL("ITEM-ACTIVE",AB_package);
    Qvirtual_attribute = STATIC_SYMBOL("VIRTUAL-ATTRIBUTE",AB_package);
    Qframe_status_and_notes = STATIC_SYMBOL("FRAME-STATUS-AND-NOTES",
	    AB_package);
    Qis_activated = STATIC_SYMBOL("IS-ACTIVATED",AB_package);
    SET_SYMBOL_FUNCTION(Qg2_complete_activation,
	    STATIC_FUNCTION(g2_complete_activation,NIL,FALSE,1,1));
    string_constant_23 = 
	    STATIC_STRING("Attempting to deactivate ~NF which has no subworkspace.");
    string_constant_24 = 
	    STATIC_STRING("Attempting to deactivate an object which is superior to the ~\n              item that is doing the deactivation.");
    string_constant_25 = 
	    STATIC_STRING("Attempting to deactivate ~NF, which is not an object that is ~\n              capable of having an activatable subworkspace.");
    G2_DEFSTRUCT_STRUCTURE_NAME_package = 
	    STATIC_PACKAGE("G2-DEFSTRUCT-STRUCTURE-NAME");
    Qg2_defstruct_structure_name_code_body_invocation_g2_struct = 
	    STATIC_SYMBOL("CODE-BODY-INVOCATION-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qg2_defstruct_structure_name_procedure_invocation_g2_struct = 
	    STATIC_SYMBOL("PROCEDURE-INVOCATION-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qg2_defstruct_structure_name_rule_instance_g2_struct = 
	    STATIC_SYMBOL("RULE-INSTANCE-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qdeactivate = STATIC_SYMBOL("DEACTIVATE",AB_package);
    Qfuncall_deactivate_inst = STATIC_SYMBOL("FUNCALL-DEACTIVATE-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_deactivate_inst,
	    STATIC_FUNCTION(funcall_deactivate_inst,NIL,FALSE,2,2));
    Qpprint_deactivate_action = STATIC_SYMBOL("PPRINT-DEACTIVATE-ACTION",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_deactivate_action,
	    STATIC_FUNCTION(pprint_deactivate_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qdeactivate,
	    FIX((SI_Long)12L),list_constant_17,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_deactivate_inst),
	    Qnil,SYMBOL_FUNCTION(Qpprint_deactivate_action),
	    Qfuncall_deactivate_inst);
    string_constant_26 = 
	    STATIC_STRING("A SET statement attempted to act on the parameter ~NF.  SET ~\n              can operate on parameters only from within a simulation ~\n              procedure.");
    Qsimulator_data_server = STATIC_SYMBOL("SIMULATOR-DATA-SERVER",AB_package);
    string_constant_27 = 
	    STATIC_STRING("A SET action cannot complete.  A data server cannot be ~\n                     found for ~NF, which was to receive the value ~NV.");
    Qcomputation = STATIC_SYMBOL("COMPUTATION",AB_package);
    string_constant_28 = 
	    string_append2(STATIC_STRING("A SET action could not change the value of ~NF, since ~\n                     its data server is the inference engine.  It should be G2 ~\n                     Simulator or some"),
	    STATIC_STRING(" external data server."));
    Qall = STATIC_SYMBOL("ALL",AB_package);
    Qfuncall_set_inst = STATIC_SYMBOL("FUNCALL-SET-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_set_inst,STATIC_FUNCTION(funcall_set_inst,
	    NIL,FALSE,2,2));
    Qpprint_set_action = STATIC_SYMBOL("PPRINT-SET-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_set_action,
	    STATIC_FUNCTION(pprint_set_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qset,
	    FIX((SI_Long)13L),Qall,FIX((SI_Long)2L),FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_set_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_set_action),Qfuncall_set_inst);
    Qoperator = STATIC_SYMBOL("OPERATOR",AB_package);
    Qavailable_frame_vector = STATIC_SYMBOL("AVAILABLE-FRAME-VECTOR",
	    AB_package);
    Qg2_defstruct_structure_name_class_description_g2_struct = 
	    STATIC_SYMBOL("CLASS-DESCRIPTION-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qdata_server_for_messages = STATIC_SYMBOL("DATA-SERVER-FOR-MESSAGES",
	    AB_package);
    string_constant_29 = 
	    STATIC_STRING("Inform may not post a message above or below an object ~\n              without specifying a workspace. The message is:~%~s.");
    string_constant_30 = 
	    string_append2(STATIC_STRING("Inform does not place messages above or below objects ~\n              not on the named workspace, or above or below ~\n              connections generally.  The message is:~%~s"),
	    STATIC_STRING("."));
    Qg2_defstruct_structure_name_data_server_g2_struct = 
	    STATIC_SYMBOL("DATA-SERVER-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qinform = STATIC_SYMBOL("INFORM",AB_package);
    list_constant_20 = STATIC_LIST((SI_Long)2L,Qprocedure,Qinference);
    Qfuncall_inform_inst = STATIC_SYMBOL("FUNCALL-INFORM-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_inform_inst,
	    STATIC_FUNCTION(funcall_inform_inst,NIL,FALSE,2,2));
    Qpprint_inform_action = STATIC_SYMBOL("PPRINT-INFORM-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_inform_action,
	    STATIC_FUNCTION(pprint_inform_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qinform,
	    FIX((SI_Long)14L),list_constant_20,FIX((SI_Long)6L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_inform_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_inform_action),Qfuncall_inform_inst);
    Qadd_relation = STATIC_SYMBOL("ADD-RELATION",AB_package);
    Qfuncall_add_relation_inst = STATIC_SYMBOL("FUNCALL-ADD-RELATION-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_add_relation_inst,
	    STATIC_FUNCTION(funcall_add_relation_inst,NIL,FALSE,2,2));
    Qpprint_add_relation_action = 
	    STATIC_SYMBOL("PPRINT-ADD-RELATION-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_add_relation_action,
	    STATIC_FUNCTION(pprint_add_relation_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qadd_relation,
	    FIX((SI_Long)15L),list_constant_20,FIX((SI_Long)4L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_add_relation_inst),
	    Qnil,SYMBOL_FUNCTION(Qpprint_add_relation_action),
	    Qfuncall_add_relation_inst);
    Qremove_relation = STATIC_SYMBOL("REMOVE-RELATION",AB_package);
    Qfuncall_remove_relation_inst = 
	    STATIC_SYMBOL("FUNCALL-REMOVE-RELATION-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_remove_relation_inst,
	    STATIC_FUNCTION(funcall_remove_relation_inst,NIL,FALSE,2,2));
    Qpprint_remove_relation_action = 
	    STATIC_SYMBOL("PPRINT-REMOVE-RELATION-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_remove_relation_action,
	    STATIC_FUNCTION(pprint_remove_relation_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qremove_relation,
	    FIX((SI_Long)16L),list_constant_20,FIX((SI_Long)3L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_remove_relation_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_remove_relation_action),
	    Qfuncall_remove_relation_inst);
    Qcreate = STATIC_SYMBOL("CREATE",AB_package);
    Qfuncall_create_inst = STATIC_SYMBOL("FUNCALL-CREATE-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_create_inst,
	    STATIC_FUNCTION(funcall_create_inst,NIL,FALSE,2,2));
    Qpprint_create_action = STATIC_SYMBOL("PPRINT-CREATE-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_create_action,
	    STATIC_FUNCTION(pprint_create_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qcreate,
	    FIX((SI_Long)17L),list_constant_20,FIX((SI_Long)1L),
	    FIX((SI_Long)1L),SYMBOL_FUNCTION(Qfuncall_create_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_create_action),Qfuncall_create_inst);
    Qclass_definition = STATIC_SYMBOL("CLASS-DEFINITION",AB_package);
    string_constant_31 = STATIC_STRING("~a is not a defined class.");
    Qsymbol_properties_hash_table = 
	    STATIC_SYMBOL("SYMBOL-PROPERTIES-HASH-TABLE",AB_package);
    Qab_gensym = STATIC_SYMBOL("GENSYM",AB_package);
    string_constant_32 = 
	    STATIC_STRING("Attempted to create an instance of ~a, but this class ~\n                    is not allowed to be created transiently.");
    Qnot_user_instantiable = STATIC_SYMBOL("NOT-USER-INSTANTIABLE",AB_package);
    string_constant_33 = 
	    string_append2(STATIC_STRING("An instance of ~a cannot be created because it is either an abstract ~\n                class or the instantitiate attribute on its class-definition ~\n                is set to"),
	    STATIC_STRING(" `no\'."));
    string_constant_34 = 
	    STATIC_STRING("Cannot create an instance of ~a.  This definition is transient.");
    string_constant_35 = 
	    string_append2(STATIC_STRING("When creating transient instances of the class ~a, ~\n                a subclass of connection, you must use the additional ~\n                CONNECTED grammar to initially con"),
	    STATIC_STRING("nect it to something."));
    Qkb_workspace = STATIC_SYMBOL("KB-WORKSPACE",AB_package);
    Qkb_workspace_initial_width = 
	    STATIC_SYMBOL("KB-WORKSPACE-INITIAL-WIDTH",AB_package);
    Qkb_workspace_initial_height = 
	    STATIC_SYMBOL("KB-WORKSPACE-INITIAL-HEIGHT",AB_package);
    Qmodule_this_is_part_of_qm = STATIC_SYMBOL("MODULE-THIS-IS-PART-OF\?",
	    AB_package);
    Qtrend_chart = STATIC_SYMBOL("TREND-CHART",AB_package);
    Ktransient = STATIC_SYMBOL("TRANSIENT",Pkeyword);
    Qg2_attributes_and_classes_to_initialize = 
	    STATIC_SYMBOL("G2-ATTRIBUTES-AND-CLASSES-TO-INITIALIZE",
	    AB_package);
    gensymed_symbol = T;
    mutate_global_property(Qg2_attributes_and_classes_to_initialize,
	    gensymed_symbol,Qfunction_keeps_procedure_environment_valid_qm);
    Qab_class_name = STATIC_SYMBOL("CLASS-NAME",AB_package);
    Qnotes = STATIC_SYMBOL("NOTES",AB_package);
    Qab_structure = STATIC_SYMBOL("STRUCTURE",AB_package);
    SET_SYMBOL_FUNCTION(Qg2_attributes_and_classes_to_initialize,
	    STATIC_FUNCTION(g2_attributes_and_classes_to_initialize,NIL,
	    FALSE,1,1));
    Qg2_install_subobject = STATIC_SYMBOL("G2-INSTALL-SUBOBJECT",AB_package);
    gensymed_symbol = T;
    mutate_global_property(Qg2_install_subobject,gensymed_symbol,
	    Qfunction_keeps_procedure_environment_valid_qm);
    SET_SYMBOL_FUNCTION(Qg2_install_subobject,
	    STATIC_FUNCTION(g2_install_subobject,NIL,FALSE,3,3));
    Qg2_post_create_interaction = 
	    STATIC_SYMBOL("G2-POST-CREATE-INTERACTION",AB_package);
    gensymed_symbol = T;
    mutate_global_property(Qg2_post_create_interaction,gensymed_symbol,
	    Qfunction_keeps_procedure_environment_valid_qm);
    list_constant = STATIC_CONS(Qab_structure,Qnil);
    Qcreate_interactively = STATIC_SYMBOL("CREATE-INTERACTIVELY",AB_package);
    Qx_in_window = STATIC_SYMBOL("X-IN-WINDOW",AB_package);
    Qy_in_window = STATIC_SYMBOL("Y-IN-WINDOW",AB_package);
    Qab_or = STATIC_SYMBOL("OR",AB_package);
    Qboolean = STATIC_SYMBOL("BOOLEAN",AB_package);
    Qab_class = STATIC_SYMBOL("CLASS",AB_package);
    Qg2_window = STATIC_SYMBOL("G2-WINDOW",AB_package);
    list_constant_21 = STATIC_LIST((SI_Long)2L,Qab_class,Qg2_window);
    list_constant_1 = STATIC_LIST((SI_Long)3L,Qab_or,Qboolean,
	    list_constant_21);
    string_constant_36 = 
	    STATIC_STRING("structure attribute CREATE-INTERACTIVELY has bad type");
    string_constant_37 = 
	    STATIC_STRING("structure attribute X-IN-WINDOW has bad type");
    string_constant_38 = 
	    STATIC_STRING("structure attribute Y-IN-WINDOW has bad type");
    string_constant_39 = 
	    STATIC_STRING("arg ~a is not of the appropriate type ");
    Qno_item = STATIC_SYMBOL("NO-ITEM",AB_package);
    list_constant_2 = STATIC_CONS(Qno_item,Qnil);
    Qis_created = STATIC_SYMBOL("IS-CREATED",AB_package);
    Qcenter = STATIC_SYMBOL("CENTER",AB_package);
    Qhand_place_on_return = STATIC_SYMBOL("HAND-PLACE-ON-RETURN",AB_package);
    Qreclaim_hand_placement_return_information = 
	    STATIC_SYMBOL("RECLAIM-HAND-PLACEMENT-RETURN-INFORMATION",
	    AB_package);
    Qbox_translation_and_text = STATIC_SYMBOL("BOX-TRANSLATION-AND-TEXT",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qg2_post_create_interaction,
	    STATIC_FUNCTION(g2_post_create_interaction,NIL,FALSE,2,2));
    Qg2_in_reset_state_p = STATIC_SYMBOL("G2-IN-RESET-STATE-P",AB_package);
    gensymed_symbol = T;
    mutate_global_property(Qg2_in_reset_state_p,gensymed_symbol,
	    Qfunction_keeps_procedure_environment_valid_qm);
    SET_SYMBOL_FUNCTION(Qg2_in_reset_state_p,
	    STATIC_FUNCTION(g2_in_reset_state_p,NIL,FALSE,0,0));
    Qnot_normally_transient = STATIC_SYMBOL("NOT-NORMALLY-TRANSIENT",
	    AB_package);
    Qsystem_table = STATIC_SYMBOL("SYSTEM-TABLE",AB_package);
    if (Currently_within_make_transient_instruction_p == UNBOUND)
	Currently_within_make_transient_instruction_p = Nil;
    Qtransient_class_definition = 
	    STATIC_SYMBOL("TRANSIENT-CLASS-DEFINITION",AB_package);
    Qtransient = STATIC_SYMBOL("TRANSIENT",AB_package);
    Qframe_flags = STATIC_SYMBOL("FRAME-FLAGS",AB_package);
    Qset_transient_and_propagate = 
	    STATIC_SYMBOL("SET-TRANSIENT-AND-PROPAGATE",AB_package);
    SET_SYMBOL_FUNCTION(Qset_transient_and_propagate,
	    STATIC_FUNCTION(set_transient_and_propagate,NIL,FALSE,2,2));
    Qoriginal_kb_state_plist = STATIC_SYMBOL("ORIGINAL-KB-STATE-PLIST",
	    AB_package);
    Qpermanent = STATIC_SYMBOL("PERMANENT",AB_package);
    Qset_permanent_and_propagate = 
	    STATIC_SYMBOL("SET-PERMANENT-AND-PROPAGATE",AB_package);
    SET_SYMBOL_FUNCTION(Qset_permanent_and_propagate,
	    STATIC_FUNCTION(set_permanent_and_propagate,NIL,FALSE,2,2));
    Qset_neither_permanent_nor_transient_and_propagate = 
	    STATIC_SYMBOL("SET-NEITHER-PERMANENT-NOR-TRANSIENT-AND-PROPAGATE",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qset_neither_permanent_nor_transient_and_propagate,
	    STATIC_FUNCTION(set_neither_permanent_nor_transient_and_propagate,
	    NIL,FALSE,2,2));
    if (Definition_with_subclass_or_instance_in_kb_hierarchy == UNBOUND)
	Definition_with_subclass_or_instance_in_kb_hierarchy = Nil;
    Qconnection = STATIC_SYMBOL("CONNECTION",AB_package);
    Qclass_inheritance_path_of_definition = 
	    STATIC_SYMBOL("CLASS-INHERITANCE-PATH-OF-DEFINITION",AB_package);
    Qentity = STATIC_SYMBOL("ENTITY",AB_package);
    Qlocate_definition_with_subclass_or_instance_1 = 
	    STATIC_SYMBOL("LOCATE-DEFINITION-WITH-SUBCLASS-OR-INSTANCE-1",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qlocate_definition_with_subclass_or_instance_1,
	    STATIC_FUNCTION(locate_definition_with_subclass_or_instance_1,
	    NIL,FALSE,2,2));
    Qwithout_permanence_checks = STATIC_SYMBOL("WITHOUT-PERMANENCE-CHECKS",
	    AB_package);
    Qwithout_permanence_checks_without_leaving_stubs = 
	    STATIC_SYMBOL("WITHOUT-PERMANENCE-CHECKS-WITHOUT-LEAVING-STUBS",
	    AB_package);
    Qfuncall_delete_inst = STATIC_SYMBOL("FUNCALL-DELETE-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_delete_inst,
	    STATIC_FUNCTION(funcall_delete_inst,NIL,FALSE,2,2));
    Qpprint_delete_action = STATIC_SYMBOL("PPRINT-DELETE-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_delete_action,
	    STATIC_FUNCTION(pprint_delete_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qdelete,
	    FIX((SI_Long)18L),list_constant_20,FIX((SI_Long)2L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_delete_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_delete_action),Qfuncall_delete_inst);
    string_constant_40 = 
	    STATIC_STRING("Cannot delete ~NF.  It is not a transient item.");
    string_constant_41 = 
	    STATIC_STRING("Cannot delete ~NF.  It is a permanent proprietary item.");
    string_constant_42 = 
	    string_append2(STATIC_STRING("This action cannot delete the procedure-invocation ~NF.  ~\n        This item is deleted automatically when the ~\n        procedure-invocation completes execution or if the ~\n "),
	    STATIC_STRING("       procedure or procedure-invocation is aborted."));
    string_constant_43 = 
	    STATIC_STRING("Cannot delete ~NF.  It is either an attribute or simulation ~\n        subtable of a superior object.");
    string_constant_44 = 
	    STATIC_STRING("Cannot delete ~NF, since the delete action is being ~\n        executed within ~NF, which would be deleted as part of ~NF.");
    Qchange_set_of_inferiors = STATIC_SYMBOL("CHANGE-SET-OF-INFERIORS",
	    AB_package);
    string_constant_45 = 
	    STATIC_STRING("In the TRANSFER action, the inferiors of ~a cannot be changed");
    Qchange_superior = STATIC_SYMBOL("CHANGE-SUPERIOR",AB_package);
    string_constant_46 = 
	    STATIC_STRING("In the TRANSFER action, the superior of ~a cannot be changed");
    Qslot_putter = STATIC_SYMBOL("SLOT-PUTTER",AB_package);
    Qslot_category = STATIC_SYMBOL("SLOT-CATEGORY",AB_package);
    Qput_attribute_value = STATIC_SYMBOL("PUT-ATTRIBUTE-VALUE",AB_package);
    Qdo_not_save = STATIC_SYMBOL("DO-NOT-SAVE",AB_package);
    Qsave = STATIC_SYMBOL("SAVE",AB_package);
    Qnote_slot_changes = STATIC_SYMBOL("NOTE-SLOT-CHANGES",AB_package);
    Qparent_attribute_name = STATIC_SYMBOL("PARENT-ATTRIBUTE-NAME",AB_package);
    Qtransfer = STATIC_SYMBOL("TRANSFER",AB_package);
    Qfuncall_transfer_inst = STATIC_SYMBOL("FUNCALL-TRANSFER-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_transfer_inst,
	    STATIC_FUNCTION(funcall_transfer_inst,NIL,FALSE,2,2));
    Qpprint_transfer_action = STATIC_SYMBOL("PPRINT-TRANSFER-ACTION",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_transfer_action,
	    STATIC_FUNCTION(pprint_transfer_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qtransfer,
	    FIX((SI_Long)19L),list_constant_20,FIX((SI_Long)4L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_transfer_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_transfer_action),Qfuncall_transfer_inst);
    Qimage_definition = STATIC_SYMBOL("IMAGE-DEFINITION",AB_package);
    Qimage_definition_media_bin = 
	    STATIC_SYMBOL("IMAGE-DEFINITION-MEDIA-BIN",AB_package);
    string_constant_47 = 
	    STATIC_STRING("Transfer is not permitted to ~NF, because ~A");
    string_constant_48 = 
	    STATIC_STRING("Transfer is not permitted for ~NF, because ~A");
    Qui_client_session = STATIC_SYMBOL("UI-CLIENT-SESSION",AB_package);
    string_constant_49 = STATIC_STRING("Transfer is not permitted for ~NF.");
    string_constant_50 = 
	    STATIC_STRING("Transfer can currently only be applied to transient items, ~\n              and ~NF is not transient.");
    string_constant_51 = 
	    STATIC_STRING("Transfer to ~NF is not permitted, because it is proprietary.");
    string_constant_52 = STATIC_STRING("Cannot transfer an item onto itself");
    string_constant_53 = STATIC_STRING("Cannot transfer a value into ~NV.");
    Qattribute = STATIC_SYMBOL("ATTRIBUTE",AB_package);
    string_constant_54 = 
	    STATIC_STRING("Objects with stubs cannot be transferred to attributes.");
    string_constant_55 = 
	    STATIC_STRING("Cannot transfer a value into the ~(~a~) of ~NF. ~\n                               The attribute is not defined.");
    string_constant_56 = 
	    STATIC_STRING("Cannot transfer a value into the ~(~a~) of ~NF, since ~\n                               that is a system attribute.");
    string_constant_57 = 
	    string_append2(STATIC_STRING("The value to transfer to the ~NS of ~NF must conform ~\n                                to the data type of its attribute type specification, ~\n                                "),
	    STATIC_STRING("~NT."));
    string_constant_58 = 
	    STATIC_STRING("Cannot transfer ~NF into the ~(~a~) of ~NF ~\n                                    because ~NF is a suboject of ~NF.");
    string_constant_59 = 
	    string_append2(STATIC_STRING("Cannot transfer ~NF into the ~(~a~) of ~NF ~\n                                    because ~NF is on a subworkspace of ~NF ~\n                                    or ~NF is a subo"),
	    STATIC_STRING("ject on a subworkspace of ~NF."));
    string_constant_60 = 
	    STATIC_STRING("The value to transfer to the ~NS of ~NF must be a frame");
    string_constant_61 = 
	    STATIC_STRING("Cannot transfer ~NF to an attribute.  The only instances allowed ~\n                     as attribute values are objects and procedures.");
    string_constant_62 = 
	    string_append2(STATIC_STRING("Cannot transfer ~NF because it is a kb-workspace.  The make ~\n                  subworkspace action can be used to give a transient ~\n                  kb-workspace a new supe"),
	    STATIC_STRING("rior object."));
    string_constant_63 = 
	    STATIC_STRING("Cannot transfer ~NF because it is a ~a.");
    string_constant_64 = 
	    STATIC_STRING("Cannot transfer ~NF into the ~(~a~) of ~NF, since that is a system attribute.");
    string_constant_65 = STATIC_STRING("Cannot transfer ~NF into ~NV.");
    string_constant_66 = 
	    STATIC_STRING("Cannot transfer ~NF to an attribute that already contains an object.");
    string_constant_67 = 
	    STATIC_STRING("Cannot transfer ~NF to the workspace ~NF because ~NF is superior to ~\n                 this workspace.");
    string_constant_68 = 
	    STATIC_STRING("Cannot transfer ~NF to the workspace ~NF.  ~NF is a dependent item ~\n                 containing a compiled attribute and ~NF is not dependent.");
    string_constant_69 = 
	    STATIC_STRING("Cannot transfer ~NF because it is connected to another item.");
    string_constant_70 = STATIC_STRING("TRANSFER");
    string_constant_71 = 
	    STATIC_STRING("Cannot transfer ~NF from the ~NQ of ~NF.  The attribute ~\n                 type specification requires the value to be of class ~\n                 ~a");
    string_constant_72 = STATIC_STRING("Cannot transfer ~a to an ~a.");
    string_constant_73 = STATIC_STRING("and");
    string_constant_74 = 
	    STATIC_STRING(" cannot be transferred due to connection to ~\n       a block which is not being transferred.");
    Qgsi_interface_name = STATIC_SYMBOL("GSI-INTERFACE-NAME",AB_package);
    list_constant_3 = STATIC_CONS(Qvariable,Qnil);
    list_constant_4 = STATIC_CONS(Qsymbol,Qnil);
    Qgsi_data_service = STATIC_SYMBOL("GSI-DATA-SERVICE",AB_package);
    Qgsi_message_service = STATIC_SYMBOL("GSI-MESSAGE-SERVICE",AB_package);
    list_constant_5 = STATIC_LIST((SI_Long)2L,Qgsi_data_service,
	    Qgsi_message_service);
    Qsize = STATIC_SYMBOL("SIZE",AB_package);
    Qmessage_board = STATIC_SYMBOL("MESSAGE-BOARD",AB_package);
    list_constant_6 = STATIC_LIST((SI_Long)2L,Qkb_workspace,Qmessage_board);
    Qremote_process_initialization_string = 
	    STATIC_SYMBOL("REMOTE-PROCESS-INITIALIZATION-STRING",AB_package);
    Qobject = STATIC_SYMBOL("OBJECT",AB_package);
    list_constant_7 = STATIC_CONS(Qobject,Qnil);
    Qtext = STATIC_SYMBOL("TEXT",AB_package);
    list_constant_8 = STATIC_CONS(Qtext,Qnil);
    Qgsi_interface = STATIC_SYMBOL("GSI-INTERFACE",AB_package);
    list_constant_9 = STATIC_CONS(Qgsi_interface,Qnil);
    Qarray_length = STATIC_SYMBOL("ARRAY-LENGTH",AB_package);
    Qg2_array = STATIC_SYMBOL("G2-ARRAY",AB_package);
    list_constant_10 = STATIC_CONS(Qg2_array,Qnil);
    list_constant_11 = STATIC_CONS(Qinteger,Qnil);
    Qname = STATIC_SYMBOL("NAME",AB_package);
    list_constant_12 = STATIC_CONS(Qitem,Qnil);
    string_constant_75 = 
	    STATIC_STRING("You cannot change the ~a attribute of the ~a ~NF.");
    Qlong = STATIC_SYMBOL("LONG",AB_package);
    Qinterval = STATIC_SYMBOL("INTERVAL",AB_package);
    list_constant_13 = STATIC_LIST((SI_Long)2L,Qseconds,Qinterval);
    string_constant_76 = 
	    STATIC_STRING("~NV is of the wrong type to be the value of the ~a attribute ~\n         of the ~a ~NF.");
    string_constant_77 = 
	    STATIC_STRING("You cannot change the ~a attribute of the ~a ~NF to ~NV because ~\n             its class definition does not have that attribute.");
    Qg2_array_length = STATIC_SYMBOL("G2-ARRAY-LENGTH",AB_package);
    string_constant_78 = 
	    STATIC_STRING("Cannot change the name of ~NF.  The name of a stable item ~\n               cannot be changed from an action.");
    Qchange_system_attribute = STATIC_SYMBOL("CHANGE-SYSTEM-ATTRIBUTE",
	    AB_package);
    Qfuncall_change_system_attribute_inst = 
	    STATIC_SYMBOL("FUNCALL-CHANGE-SYSTEM-ATTRIBUTE-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_change_system_attribute_inst,
	    STATIC_FUNCTION(funcall_change_system_attribute_inst,NIL,FALSE,
	    2,2));
    Qpprint_change_system_attribute_action = 
	    STATIC_SYMBOL("PPRINT-CHANGE-SYSTEM-ATTRIBUTE-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_change_system_attribute_action,
	    STATIC_FUNCTION(pprint_change_system_attribute_action,NIL,
	    FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qchange_system_attribute,
	    FIX((SI_Long)20L),list_constant_20,FIX((SI_Long)3L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_change_system_attribute_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_change_system_attribute_action),
	    Qfuncall_change_system_attribute_inst);
    Qaliased_attribute = STATIC_SYMBOL("ALIASED-ATTRIBUTE",AB_package);
    Qrule_scan_interval = STATIC_SYMBOL("RULE-SCAN-INTERVAL",AB_package);
    string_constant_79 = STATIC_STRING("Cannot change the text of ~NV.");
    Qscan_interval = STATIC_SYMBOL("SCAN-INTERVAL",AB_package);
    string_constant_80 = STATIC_STRING("~NF has no TEXT attribute.");
    string_constant_81 = 
	    STATIC_STRING("Cannot change the text of ~NF.  This ~a is currently executing.");
    string_constant_82 = 
	    STATIC_STRING("Cannot change the text of the ~a of ~NF.  ~\n          Attributes of tabular-functions cannot be changed from this action.");
    Qicon_description_for_class_qm = 
	    STATIC_SYMBOL("ICON-DESCRIPTION-FOR-CLASS\?",AB_package);
    Qicon_description = STATIC_SYMBOL("ICON-DESCRIPTION",AB_package);
    string_constant_83 = 
	    string_append2(STATIC_STRING("Cannot change the text of the icon-description of ~NF.  The ~\n          value of the direct-superior-classes attribute on the ~\n          class-definition does not indicate th"),
	    STATIC_STRING("at the class has a ~\n          changeable icon-description."));
    string_constant_84 = 
	    STATIC_STRING("Cannot change the text of the ~a of ~NF.  This ~\n               item does not have this attribute.");
    string_constant_85 = 
	    STATIC_STRING("Cannot change the text of the ~a of ~NF.  This ~\n               attribute cannot be modified from an action.");
    string_constant_86 = 
	    STATIC_STRING("Cannot change the text of the ~a of ~NF.  This ~\n               attribute contains an item.");
    Qedit_attribute = STATIC_SYMBOL("EDIT-ATTRIBUTE",AB_package);
    string_constant_87 = 
	    STATIC_STRING("Cannot change the text of ~NF.  The modification of this ~\n                   item has been restricted.");
    string_constant_88 = 
	    STATIC_STRING("Cannot change the text of the ~a of ~NF.  The modification ~\n                   of this item has been restricted.");
    string_constant_89 = 
	    string_append2(STATIC_STRING("Since this item is declared stable, this change would cause ~\n                 dependent parts of the KB to become ~\n                 incomplete and require recompilation.  Th"),
	    STATIC_STRING("is change is therefore ~\n                 not permitted from an action."));
    string_constant_90 = STATIC_STRING("");
    string_constant_91 = 
	    STATIC_STRING("~a~%The following text is not valid for this attribute:~%~%~A");
    Qchange_the_text_of_attribute = 
	    STATIC_SYMBOL("CHANGE-THE-TEXT-OF-ATTRIBUTE",AB_package);
    Qfuncall_change_the_text_of_attribute_inst = 
	    STATIC_SYMBOL("FUNCALL-CHANGE-THE-TEXT-OF-ATTRIBUTE-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_change_the_text_of_attribute_inst,
	    STATIC_FUNCTION(funcall_change_the_text_of_attribute_inst,NIL,
	    FALSE,2,2));
    Qpprint_change_the_text_of_attribute_action = 
	    STATIC_SYMBOL("PPRINT-CHANGE-THE-TEXT-OF-ATTRIBUTE-ACTION",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_change_the_text_of_attribute_action,
	    STATIC_FUNCTION(pprint_change_the_text_of_attribute_action,NIL,
	    FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qchange_the_text_of_attribute,
	    FIX((SI_Long)21L),list_constant_20,FIX((SI_Long)2L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_change_the_text_of_attribute_inst),
	    Qnil,
	    SYMBOL_FUNCTION(Qpprint_change_the_text_of_attribute_action),
	    Qfuncall_change_the_text_of_attribute_inst);
    Qtranslation_and_text_of_embedded_rule = 
	    STATIC_SYMBOL("TRANSLATION-AND-TEXT-OF-EMBEDDED-RULE",AB_package);
    Qaction_for_user_menu_choice_qm = 
	    STATIC_SYMBOL("ACTION-FOR-USER-MENU-CHOICE\?",AB_package);
    string_constant_92 = 
	    STATIC_STRING("Cannot change the text of the action of ~NF.  It is currently ~\n          executing.");
    string_constant_93 = STATIC_STRING("Cannot change the text of ");
    string_constant_94 = STATIC_STRING("~NF");
    string_constant_95 = STATIC_STRING("the ~NQ of ~NF");
    string_constant_96 = STATIC_STRING(".");
    string_constant_97 = STATIC_STRING("  ");
    Qfree = STATIC_SYMBOL("FREE",AB_package);
    Qfree_text_attribute = STATIC_SYMBOL("FREE-TEXT-ATTRIBUTE",AB_package);
    string_constant_98 = 
	    STATIC_STRING("Cannot ~(~a~) the element at index ~NV in array ~NF.  This ~\n            array is of length 0.");
    string_constant_99 = 
	    STATIC_STRING("Cannot ~(~a~) the element at index ~NV in array ~NF.  ~NV is ~\n            not in the range 0 to ~a.");
    string_constant_100 = 
	    STATIC_STRING("Cannot ~a the element at index ~NV in ~NF.  This g2-list ~\n        contains no elements.");
    string_constant_101 = STATIC_STRING("G2 List index is out of bounds");
    string_constant_102 = 
	    STATIC_STRING("Cannot ~(~a~) the element at index ~a in ~NF.  Since this ~\n                  g2-list contains ~a elements, the index must be in the range ~\n                  from 0 to ~a.");
    string_constant_103 = 
	    STATIC_STRING("Cannot ~(~a~) the element at index ~a in ~NF.  Since this g2-list ~\n                  contains 1 element, the index must be 0.");
    Qchange = STATIC_SYMBOL("CHANGE",AB_package);
    string_constant_104 = STATIC_STRING("Neither array nor list\?! ~NF");
    Qchange_nth_element = STATIC_SYMBOL("CHANGE-NTH-ELEMENT",AB_package);
    Qfuncall_change_nth_element_inst = 
	    STATIC_SYMBOL("FUNCALL-CHANGE-NTH-ELEMENT-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_change_nth_element_inst,
	    STATIC_FUNCTION(funcall_change_nth_element_inst,NIL,FALSE,2,2));
    Qpprint_change_nth_element_action = 
	    STATIC_SYMBOL("PPRINT-CHANGE-NTH-ELEMENT-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_change_nth_element_action,
	    STATIC_FUNCTION(pprint_change_nth_element_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qchange_nth_element,
	    FIX((SI_Long)22L),list_constant_20,FIX((SI_Long)3L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_change_nth_element_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_change_nth_element_action),
	    Qfuncall_change_nth_element_inst);
    string_constant_105 = 
	    STATIC_STRING("Cannot INSERT ~NA into the g2-list ~NF.  The element type of ~\n              the list, ~a, conflicts with the required type, ~NV, specified ~\n              in the action.");
    string_constant_106 = 
	    STATIC_STRING("Cannot INSERT ~NA into the g2-list ~NF.  The type of this ~\n              element conflicts with the list element type ~a.");
    string_constant_107 = 
	    STATIC_STRING("Cannot insert ~NA at the beginning of ~NF.  ~NA is already an ~\n                 element and the g2-list does not allow duplicate elements.");
    string_constant_108 = 
	    STATIC_STRING("Cannot insert ~NA at the end of ~NF.  ~NA is already an ~\n                element and the g2-list does not allow duplicate elements.");
    string_constant_109 = STATIC_STRING("Cannot insert ~NA into ~NF.");
    string_constant_110 = STATIC_STRING("Cannot insert ~NA ~a ~NA in ~NF.");
    string_constant_111 = 
	    STATIC_STRING("  ~NA is not an element of the g2-list.");
    string_constant_112 = 
	    STATIC_STRING("  ~NA is already an element and the g2-list does not ~\n                         allow duplicate elements.");
    Qg2_list_insert_expression = STATIC_SYMBOL("G2-LIST-INSERT-EXPRESSION",
	    AB_package);
    Qfuncall_g2_list_insert_expression_inst = 
	    STATIC_SYMBOL("FUNCALL-G2-LIST-INSERT-EXPRESSION-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_g2_list_insert_expression_inst,
	    STATIC_FUNCTION(funcall_g2_list_insert_expression_inst,NIL,
	    FALSE,2,2));
    Qpprint_g2_list_insert_action = 
	    STATIC_SYMBOL("PPRINT-G2-LIST-INSERT-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_g2_list_insert_action,
	    STATIC_FUNCTION(pprint_g2_list_insert_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qg2_list_insert_expression,
	    FIX((SI_Long)23L),list_constant_20,FIX((SI_Long)5L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_g2_list_insert_expression_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_g2_list_insert_action),
	    Qfuncall_g2_list_insert_expression_inst);
    string_constant_113 = 
	    STATIC_STRING("Cannot INSERT ~NA into the g2-list ~NF.  The element type of the ~\n              list, ~a, conflicts with the required type, ~NV, specified in ~\n              the action.");
    string_constant_114 = 
	    STATIC_STRING("Cannot INSERT ~NA into the g2-list ~NF.  The type of this ~\n              element conflicts with the list element type, ~a.");
    string_constant_115 = 
	    STATIC_STRING("Cannot insert ~NA at the beginning of ~NF.  ~NA is already an ~\n                element and the g2-list does not allow duplicate elements.");
    Qg2_list_insert_designation = 
	    STATIC_SYMBOL("G2-LIST-INSERT-DESIGNATION",AB_package);
    Qfuncall_g2_list_insert_designation_inst = 
	    STATIC_SYMBOL("FUNCALL-G2-LIST-INSERT-DESIGNATION-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_g2_list_insert_designation_inst,
	    STATIC_FUNCTION(funcall_g2_list_insert_designation_inst,NIL,
	    FALSE,2,2));
    make_and_register_funcalled_instruction_description(Qg2_list_insert_designation,
	    FIX((SI_Long)24L),list_constant_20,FIX((SI_Long)5L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_g2_list_insert_designation_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_g2_list_insert_action),
	    Qfuncall_g2_list_insert_designation_inst);
    Qbefore_element = STATIC_SYMBOL("BEFORE-ELEMENT",AB_package);
    Qafter_element = STATIC_SYMBOL("AFTER-ELEMENT",AB_package);
    list_constant_14 = STATIC_LIST((SI_Long)2L,Qbefore_element,Qafter_element);
    string_constant_116 = 
	    STATIC_STRING(" index ~NA does not designate an element of the g2-list.");
    Qg2_list_insert = STATIC_SYMBOL("G2-LIST-INSERT",AB_package);
    Qfuncall_g2_list_insert_inst = 
	    STATIC_SYMBOL("FUNCALL-G2-LIST-INSERT-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_g2_list_insert_inst,
	    STATIC_FUNCTION(funcall_g2_list_insert_inst,NIL,FALSE,2,2));
    Qpprint_g2_list_insert_item_or_value_action = 
	    STATIC_SYMBOL("PPRINT-G2-LIST-INSERT-ITEM-OR-VALUE-ACTION",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_g2_list_insert_item_or_value_action,
	    STATIC_FUNCTION(pprint_g2_list_insert_item_or_value_action,NIL,
	    FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qg2_list_insert,
	    FIX((SI_Long)71L),list_constant_20,FIX((SI_Long)4L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_g2_list_insert_inst),
	    Qnil,
	    SYMBOL_FUNCTION(Qpprint_g2_list_insert_item_or_value_action),
	    Qfuncall_g2_list_insert_inst);
    array_constant_86 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)0L,(SI_Long)67L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)1L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)2L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)3L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)4L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)5L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)6L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)7L,(SI_Long)82L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)8L,(SI_Long)69L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)9L,(SI_Long)77L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)10L,(SI_Long)79L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)11L,(SI_Long)86L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)12L,(SI_Long)69L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)13L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)22L,(SI_Long)14L);
    UBYTE_16_ISASET_1(array_constant_86,(SI_Long)23L,(SI_Long)57344L);
    string_constant_117 = STATIC_STRING("the first ~a ");
    string_constant_118 = STATIC_STRING("the second ~a ");
    string_constant_119 = STATIC_STRING("~NA ");
    array_constant_87 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)16L));
    UBYTE_16_ISASET_1(array_constant_87,(SI_Long)0L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_87,(SI_Long)1L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_87,(SI_Long)2L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_87,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_87,(SI_Long)4L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_87,(SI_Long)5L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_87,(SI_Long)6L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_87,(SI_Long)7L,(SI_Long)109L);
    UBYTE_16_ISASET_1(array_constant_87,(SI_Long)8L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_87,(SI_Long)9L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_87,(SI_Long)10L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_87,(SI_Long)11L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_87,(SI_Long)14L,(SI_Long)12L);
    UBYTE_16_ISASET_1(array_constant_87,(SI_Long)15L,(SI_Long)57344L);
    string_constant_120 = 
	    STATIC_STRING("from ~NF.  The element type, ~a, conflicts with ~a ~\n                the element-type of the g2-list.");
    string_constant_121 = 
	    STATIC_STRING("Cannot REMOVE ~NA from the g2-list ~NF.  The type of ~\n                        this element conflicts with the list element type, ~a.");
    string_constant_122 = 
	    STATIC_STRING("Cannot REMOVE element ~NA from ~NF.  This element is not in the ~\n                        g2-list.");
    Qremove_element = STATIC_SYMBOL("REMOVE-ELEMENT",AB_package);
    Qg2_list_remove_expression = STATIC_SYMBOL("G2-LIST-REMOVE-EXPRESSION",
	    AB_package);
    Qfuncall_g2_list_remove_expression_inst = 
	    STATIC_SYMBOL("FUNCALL-G2-LIST-REMOVE-EXPRESSION-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_g2_list_remove_expression_inst,
	    STATIC_FUNCTION(funcall_g2_list_remove_expression_inst,NIL,
	    FALSE,2,2));
    Qpprint_g2_list_remove_action = 
	    STATIC_SYMBOL("PPRINT-G2-LIST-REMOVE-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_g2_list_remove_action,
	    STATIC_FUNCTION(pprint_g2_list_remove_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qg2_list_remove_expression,
	    FIX((SI_Long)25L),list_constant_20,FIX((SI_Long)4L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_g2_list_remove_expression_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_g2_list_remove_action),
	    Qfuncall_g2_list_remove_expression_inst);
    string_constant_123 = 
	    STATIC_STRING("Cannot REMOVE ~NA from ~NF.  This element is not in the ~\n                        g2-list.");
    Qg2_list_remove_designation = 
	    STATIC_SYMBOL("G2-LIST-REMOVE-DESIGNATION",AB_package);
    Qfuncall_g2_list_remove_designation_inst = 
	    STATIC_SYMBOL("FUNCALL-G2-LIST-REMOVE-DESIGNATION-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_g2_list_remove_designation_inst,
	    STATIC_FUNCTION(funcall_g2_list_remove_designation_inst,NIL,
	    FALSE,2,2));
    make_and_register_funcalled_instruction_description(Qg2_list_remove_designation,
	    FIX((SI_Long)26L),list_constant_20,FIX((SI_Long)4L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_g2_list_remove_designation_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_g2_list_remove_action),
	    Qfuncall_g2_list_remove_designation_inst);
    string_constant_124 = 
	    STATIC_STRING("from ~NF.  The element type, ~a, conflicts with ~a ~\n           , the element-type of the g2-list.");
    string_constant_125 = 
	    STATIC_STRING("Cannot REMOVE ~NA from the g2-list ~NF.  The type of ~\n            this element conflicts with the list element type, ~a.");
    string_constant_126 = 
	    STATIC_STRING("Cannot REMOVE element ~NA from ~NF, as it is not in the ~\n            g2-list.");
    Qelement_position = STATIC_SYMBOL("ELEMENT-POSITION",AB_package);
    string_constant_127 = 
	    STATIC_STRING("Cannot REMOVE item at index ~NA from the g2-list ~NF, as there is ~\n            no item at that index");
    Qg2_list_remove = STATIC_SYMBOL("G2-LIST-REMOVE",AB_package);
    Qfuncall_g2_list_remove_inst = 
	    STATIC_SYMBOL("FUNCALL-G2-LIST-REMOVE-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_g2_list_remove_inst,
	    STATIC_FUNCTION(funcall_g2_list_remove_inst,NIL,FALSE,2,2));
    Qpprint_g2_list_remove_item_or_value_action = 
	    STATIC_SYMBOL("PPRINT-G2-LIST-REMOVE-ITEM-OR-VALUE-ACTION",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_g2_list_remove_item_or_value_action,
	    STATIC_FUNCTION(pprint_g2_list_remove_item_or_value_action,NIL,
	    FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qg2_list_remove,
	    FIX((SI_Long)72L),list_constant_20,FIX((SI_Long)4L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_g2_list_remove_inst),
	    Qnil,
	    SYMBOL_FUNCTION(Qpprint_g2_list_remove_item_or_value_action),
	    Qfuncall_g2_list_remove_inst);
    string_constant_128 = STATIC_STRING("CREATE-EXPLANATION");
    Qcreate_explanation = STATIC_SYMBOL("CREATE-EXPLANATION",AB_package);
    Qfuncall_create_explanation_inst = 
	    STATIC_SYMBOL("FUNCALL-CREATE-EXPLANATION-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_create_explanation_inst,
	    STATIC_FUNCTION(funcall_create_explanation_inst,NIL,FALSE,2,2));
    Qpprint_create_explanation_action = 
	    STATIC_SYMBOL("PPRINT-CREATE-EXPLANATION-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_create_explanation_action,
	    STATIC_FUNCTION(pprint_create_explanation_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qcreate_explanation,
	    FIX((SI_Long)28L),list_constant_20,FIX((SI_Long)1L),
	    FIX((SI_Long)1L),
	    SYMBOL_FUNCTION(Qfuncall_create_explanation_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_create_explanation_action),
	    Qfuncall_create_explanation_inst);
    Qfreeform_table = STATIC_SYMBOL("FREEFORM-TABLE",AB_package);
    string_constant_129 = 
	    STATIC_STRING("Cannot update ~NF, can only update kinds of displays.");
    Qupdate = STATIC_SYMBOL("UPDATE",AB_package);
    Qfuncall_update_inst = STATIC_SYMBOL("FUNCALL-UPDATE-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_update_inst,
	    STATIC_FUNCTION(funcall_update_inst,NIL,FALSE,2,2));
    Qpprint_update_action = STATIC_SYMBOL("PPRINT-UPDATE-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_update_action,
	    STATIC_FUNCTION(pprint_update_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qupdate,
	    FIX((SI_Long)29L),list_constant_20,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_update_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_update_action),Qfuncall_update_inst);
    string_constant_130 = 
	    STATIC_STRING("Cannot start procedure ~NF at priority ~a.  The priority must be in ~\n         the range 1 to 10.");
    Qstart = STATIC_SYMBOL("START",AB_package);
    array_constant_88 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)0L,(SI_Long)83L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)1L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)2L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)3L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)4L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)5L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)6L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)7L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)8L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)9L,(SI_Long)112L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)10L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)11L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)12L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)13L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)14L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)15L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)16L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)17L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)18L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)22L,(SI_Long)19L);
    UBYTE_16_ISASET_1(array_constant_88,(SI_Long)23L,(SI_Long)57344L);
    string_constant_131 = STATIC_STRING(" at priority ~a");
    array_constant_89 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_89,(SI_Long)0L,(SI_Long)46L);
    UBYTE_16_ISASET_1(array_constant_89,(SI_Long)6L,(SI_Long)1L);
    UBYTE_16_ISASET_1(array_constant_89,(SI_Long)7L,(SI_Long)57344L);
    list_constant_22 = STATIC_LIST((SI_Long)3L,Qplus,list_constant_19,
	    FIX((SI_Long)3L));
    Qfuncall_start_inst = STATIC_SYMBOL("FUNCALL-START-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_start_inst,
	    STATIC_FUNCTION(funcall_start_inst,NIL,FALSE,2,2));
    Qpprint_start_action = STATIC_SYMBOL("PPRINT-START-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_start_action,
	    STATIC_FUNCTION(pprint_start_action,NIL,FALSE,8,8));
    make_and_register_funcalled_instruction_description(Qstart,
	    FIX((SI_Long)30L),list_constant_20,list_constant_22,
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_start_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_start_action),Qfuncall_start_inst);
    string_constant_132 = 
	    STATIC_STRING("Cannot start procedure ~NF across ~NF at priority ~a.  The priority ~\n         must be in the range 1 to 10.");
    string_constant_133 = 
	    string_append2(STATIC_STRING("~NF is a list or array that is not active, or has no elements, ~\n                     and so cannot be used as a pathway for ~\n                     a remote procedure call or "),
	    STATIC_STRING("remote procedure start."));
    string_constant_134 = 
	    string_append2(STATIC_STRING("~NF contained an element without the capability G2-TO-G2-DATA-INTERFACE or ~\n                     GSI-INTERFACE, and so cannot be used as a pathway for ~\n                     "),
	    STATIC_STRING("a remote procedure call or remote procedure start."));
    string_constant_135 = 
	    string_append2(STATIC_STRING("~NF did not have the capability G2-TO-G2-DATA-INTERFACE or ~\n         GSI-INTERFACE, and so cannot be used as a pathway for ~\n         a remote procedure call or remote proced"),
	    STATIC_STRING("ure start."));
    string_constant_136 = STATIC_STRING("Starting remote procedure ~NF(");
    string_constant_137 = STATIC_STRING(") across ~NF");
    string_constant_138 = STATIC_STRING(" after ~NC");
    Qstart_rpc = STATIC_SYMBOL("START-RPC",AB_package);
    list_constant_23 = STATIC_LIST((SI_Long)3L,Qplus,list_constant_19,
	    FIX((SI_Long)4L));
    Qfuncall_start_rpc_inst = STATIC_SYMBOL("FUNCALL-START-RPC-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_start_rpc_inst,
	    STATIC_FUNCTION(funcall_start_rpc_inst,NIL,FALSE,2,2));
    Qpprint_start_rpc_action = STATIC_SYMBOL("PPRINT-START-RPC-ACTION",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_start_rpc_action,
	    STATIC_FUNCTION(pprint_start_rpc_action,NIL,FALSE,8,8));
    make_and_register_funcalled_instruction_description(Qstart_rpc,
	    FIX((SI_Long)31L),list_constant_20,list_constant_23,
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_start_rpc_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_start_rpc_action),Qfuncall_start_rpc_inst);
    Qabort_g2 = STATIC_SYMBOL("ABORT",AB_package);
    Qfuncall_abort_inst = STATIC_SYMBOL("FUNCALL-ABORT-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_abort_inst,
	    STATIC_FUNCTION(funcall_abort_inst,NIL,FALSE,2,2));
    Qpprint_abort_action = STATIC_SYMBOL("PPRINT-ABORT-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_abort_action,
	    STATIC_FUNCTION(pprint_abort_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qabort_g2,
	    FIX((SI_Long)38L),list_constant_20,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_abort_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_abort_action),Qfuncall_abort_inst);
    Qrequested = STATIC_SYMBOL("REQUESTED",AB_package);
    Qshut_down_g2 = STATIC_SYMBOL("SHUT-DOWN-G2",AB_package);
    Qfuncall_shut_down_g2_inst = STATIC_SYMBOL("FUNCALL-SHUT-DOWN-G2-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_shut_down_g2_inst,
	    STATIC_FUNCTION(funcall_shut_down_g2_inst,NIL,FALSE,2,2));
    Qpprint_shut_down_g2_action = 
	    STATIC_SYMBOL("PPRINT-SHUT-DOWN-G2-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_shut_down_g2_action,
	    STATIC_FUNCTION(pprint_shut_down_g2_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qshut_down_g2,
	    FIX((SI_Long)39L),list_constant_20,FIX((SI_Long)0L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_shut_down_g2_inst),
	    Qnil,SYMBOL_FUNCTION(Qpprint_shut_down_g2_action),
	    Qfuncall_shut_down_g2_inst);
    Qcreate_by_cloning = STATIC_SYMBOL("CREATE-BY-CLONING",AB_package);
    Qfuncall_create_by_cloning_inst = 
	    STATIC_SYMBOL("FUNCALL-CREATE-BY-CLONING-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_create_by_cloning_inst,
	    STATIC_FUNCTION(funcall_create_by_cloning_inst,NIL,FALSE,2,2));
    Qpprint_create_by_cloning_action = 
	    STATIC_SYMBOL("PPRINT-CREATE-BY-CLONING-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_create_by_cloning_action,
	    STATIC_FUNCTION(pprint_create_by_cloning_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qcreate_by_cloning,
	    FIX((SI_Long)40L),list_constant_20,FIX((SI_Long)2L),
	    FIX((SI_Long)1L),
	    SYMBOL_FUNCTION(Qfuncall_create_by_cloning_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_create_by_cloning_action),
	    Qfuncall_create_by_cloning_inst);
    string_constant_139 = 
	    STATIC_STRING("Attempted to create an instance of ~a, but this class ~\n                is not allowed to be created transiently.");
    string_constant_140 = 
	    STATIC_STRING("Attempted to create an instance of ~a, but this class ~\n            is not allowed to be created transiently.");
    string_constant_141 = 
	    string_append2(STATIC_STRING("When creating transient instances of a subclass ~\n            of connection, you must not clone it and must use the additional ~\n            CONNECTED grammar to initially con"),
	    STATIC_STRING("nect it to something."));
    Qclone_block = STATIC_SYMBOL("CLONE-BLOCK",AB_package);
    string_constant_142 = 
	    STATIC_STRING("Cannot create an item by cloning ~NF.  The clone action has been ~\n            restricted for this item.");
    string_constant_143 = STATIC_STRING("Error in CREATE BY CLONING of ~NF.");
    Qg2_attributes_and_classes_to_clone = 
	    STATIC_SYMBOL("G2-ATTRIBUTES-AND-CLASSES-TO-CLONE",AB_package);
    gensymed_symbol = T;
    mutate_global_property(Qg2_attributes_and_classes_to_clone,
	    gensymed_symbol,Qfunction_keeps_procedure_environment_valid_qm);
    Qdo_not_clone = STATIC_SYMBOL("DO-NOT-CLONE",AB_package);
    Qattribute_name = STATIC_SYMBOL("ATTRIBUTE-NAME",AB_package);
    Qattribute_value = STATIC_SYMBOL("ATTRIBUTE-VALUE",AB_package);
    SET_SYMBOL_FUNCTION(Qg2_attributes_and_classes_to_clone,
	    STATIC_FUNCTION(g2_attributes_and_classes_to_clone,NIL,FALSE,2,2));
    Qg2_post_clone_interaction = STATIC_SYMBOL("G2-POST-CLONE-INTERACTION",
	    AB_package);
    gensymed_symbol = T;
    mutate_global_property(Qg2_post_clone_interaction,gensymed_symbol,
	    Qfunction_keeps_procedure_environment_valid_qm);
    Qclone_interactively = STATIC_SYMBOL("CLONE-INTERACTIVELY",AB_package);
    string_constant_144 = 
	    STATIC_STRING("structure attribute CLONE-INTERACTIVELY has bad type");
    SET_SYMBOL_FUNCTION(Qg2_post_clone_interaction,
	    STATIC_FUNCTION(g2_post_clone_interaction,NIL,FALSE,2,2));
    Qmake_permanent = STATIC_SYMBOL("MAKE-PERMANENT",AB_package);
    Qfuncall_make_permanent_inst = 
	    STATIC_SYMBOL("FUNCALL-MAKE-PERMANENT-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_make_permanent_inst,
	    STATIC_FUNCTION(funcall_make_permanent_inst,NIL,FALSE,2,2));
    Qpprint_make_permanent_action = 
	    STATIC_SYMBOL("PPRINT-MAKE-PERMANENT-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_make_permanent_action,
	    STATIC_FUNCTION(pprint_make_permanent_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qmake_permanent,
	    FIX((SI_Long)41L),list_constant_20,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_make_permanent_inst),
	    Qnil,SYMBOL_FUNCTION(Qpprint_make_permanent_action),
	    Qfuncall_make_permanent_inst);
    string_constant_145 = 
	    STATIC_STRING("Cannot make ~NF permanent.  The superior of this item is transient.");
    string_constant_146 = 
	    STATIC_STRING("Cannot make ~NF permanent.  It must be either transient ~\n              or permanent to begin with.");
    string_constant_147 = 
	    STATIC_STRING("Cannot make ~NF permanent.  It is must be either a kb-workspace ~\n              or found on a kb-workspace or permanent to begin with.");
    string_constant_148 = 
	    STATIC_STRING("~NF cannot be made permanent because it is a ~\n              procedure-invocation.");
    string_constant_149 = 
	    STATIC_STRING("Cannot make ~NF permanent.  The make permanent action has been ~\n              restricted for this item.");
    Qmake_subworkspace = STATIC_SYMBOL("MAKE-SUBWORKSPACE",AB_package);
    Qfuncall_make_subworkspace_inst = 
	    STATIC_SYMBOL("FUNCALL-MAKE-SUBWORKSPACE-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_make_subworkspace_inst,
	    STATIC_FUNCTION(funcall_make_subworkspace_inst,NIL,FALSE,2,2));
    Qpprint_make_subworkspace_action = 
	    STATIC_SYMBOL("PPRINT-MAKE-SUBWORKSPACE-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_make_subworkspace_action,
	    STATIC_FUNCTION(pprint_make_subworkspace_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qmake_subworkspace,
	    FIX((SI_Long)42L),list_constant_20,FIX((SI_Long)2L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_make_subworkspace_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_make_subworkspace_action),
	    Qfuncall_make_subworkspace_inst);
    Qsubworkspaces = STATIC_SYMBOL("SUBWORKSPACES",AB_package);
    string_constant_150 = 
	    STATIC_STRING("Cannot make ~NF the subworkspace of ~NF because ~NF is not ~\n              transient.");
    string_constant_151 = 
	    STATIC_STRING("Cannot make ~NF a subworkspace of ~NF.  ~NF is an attribute ~\n                  of ~NF.");
    string_constant_152 = 
	    STATIC_STRING("Cannot make ~NF a subworkspace of ~NF.  ~NF is a ~a.");
    string_constant_153 = 
	    STATIC_STRING("Cannot make ~NF a subworkspace of ~NF because ~NF is either on ~\n              this subworkspace or on a further subworkspace.");
    string_constant_154 = 
	    STATIC_STRING("Cannot make ~NF the subworkspace of ~NF.  This action has been ~\n              restricted for ~NF.");
    string_constant_155 = 
	    STATIC_STRING("Cannot make ~NF the subworkspace of ~NF because ~NF already ~\n                has a subworkspace.");
    string_constant_156 = 
	    STATIC_STRING("Cannot print ~NF because it is not a workspace.");
    string_constant_157 = 
	    STATIC_STRING("Cannot print ~NF.  The print action has been restricted for this ~\n              item.");
    Qfuncall_print_inst = STATIC_SYMBOL("FUNCALL-PRINT-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_print_inst,
	    STATIC_FUNCTION(funcall_print_inst,NIL,FALSE,2,2));
    Qpprint_print_action = STATIC_SYMBOL("PPRINT-PRINT-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_print_action,
	    STATIC_FUNCTION(pprint_print_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qprint,
	    FIX((SI_Long)43L),list_constant_20,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_print_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_print_action),Qfuncall_print_inst);
    Qmake_transient = STATIC_SYMBOL("MAKE-TRANSIENT",AB_package);
    Qfuncall_make_transient_inst = 
	    STATIC_SYMBOL("FUNCALL-MAKE-TRANSIENT-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_make_transient_inst,
	    STATIC_FUNCTION(funcall_make_transient_inst,NIL,FALSE,2,2));
    Qpprint_make_transient_action = 
	    STATIC_SYMBOL("PPRINT-MAKE-TRANSIENT-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_make_transient_action,
	    STATIC_FUNCTION(pprint_make_transient_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qmake_transient,
	    FIX((SI_Long)44L),list_constant_20,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_make_transient_inst),
	    Qnil,SYMBOL_FUNCTION(Qpprint_make_transient_action),
	    Qfuncall_make_transient_inst);
    string_constant_158 = 
	    STATIC_STRING("Cannot make ~NF transient.  The make transient action has been ~\n              restricted for this item.");
    string_constant_159 = 
	    STATIC_STRING("Cannot make ~NF transient because it is a stable item.");
    string_constant_160 = 
	    STATIC_STRING("Cannot make ~NF transient because it is an attribute of ~NF.");
    string_constant_161 = 
	    STATIC_STRING("Cannot make ~NF transient.  It is must be either a kb-workspace or ~\n            found on a kb-workspace.");
    string_constant_162 = STATIC_STRING("Cannot make ~NF transient.  ");
    array_constant_90 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)32L));
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)0L,(SI_Long)84L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)1L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)2L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)3L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)4L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)5L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)6L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)7L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)8L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)9L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)10L,(SI_Long)45L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)11L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)12L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)13L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)14L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)15L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)16L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)17L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)18L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)19L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)20L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)21L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)30L,(SI_Long)22L);
    UBYTE_16_ISASET_1(array_constant_90,(SI_Long)31L,(SI_Long)57344L);
    string_constant_163 = 
	    STATIC_STRING("An inferior item, the class-definition ~a, ");
    array_constant_91 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)0L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)1L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)2L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)4L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)5L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)6L,(SI_Long)98L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)7L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)8L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)9L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)10L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)11L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)12L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)13L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)14L,(SI_Long)46L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)22L,(SI_Long)15L);
    UBYTE_16_ISASET_1(array_constant_91,(SI_Long)23L,(SI_Long)57344L);
    array_constant_92 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)0L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)1L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)2L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)4L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)5L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)6L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)7L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)8L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)9L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)10L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)11L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)12L,(SI_Long)115L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)13L,(SI_Long)46L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)22L,(SI_Long)14L);
    UBYTE_16_ISASET_1(array_constant_92,(SI_Long)23L,(SI_Long)57344L);
    string_constant_164 = 
	    STATIC_STRING("Cannot make ~NF transient.  It is of class ~a.");
    string_constant_165 = STATIC_STRING("WAIT UNTIL EVENT");
    Qreceives_a_value = STATIC_SYMBOL("RECEIVES-A-VALUE",AB_package);
    string_constant_166 = 
	    STATIC_STRING("Cannot wait until ~NV receives a value.");
    string_constant_167 = 
	    STATIC_STRING("Cannot wait until ~NV receives a value.  This event detector ~\n                  can only be registered on variables, parameters, or ~\n                  attributes of items.");
    string_constant_168 = 
	    string_append2(STATIC_STRING("Attempted to register an event detector on ~a events, which are not ~\n          defined.  Please report this bug in the wait until statement to~\n          Gensym software supp"),
	    STATIC_STRING("ort."));
    Qinstall_event_detector = STATIC_SYMBOL("INSTALL-EVENT-DETECTOR",
	    AB_package);
    Qfuncall_install_event_detector_inst = 
	    STATIC_SYMBOL("FUNCALL-INSTALL-EVENT-DETECTOR-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_install_event_detector_inst,
	    STATIC_FUNCTION(funcall_install_event_detector_inst,NIL,FALSE,
	    2,2));
    make_and_register_funcalled_instruction_description(Qinstall_event_detector,
	    FIX((SI_Long)45L),list_constant_20,FIX((SI_Long)2L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_install_event_detector_inst),Qnil,Nil,
	    Qfuncall_install_event_detector_inst);
    Qclear_event_detectors = STATIC_SYMBOL("CLEAR-EVENT-DETECTORS",AB_package);
    Qfuncall_clear_event_detectors_inst = 
	    STATIC_SYMBOL("FUNCALL-CLEAR-EVENT-DETECTORS-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_clear_event_detectors_inst,
	    STATIC_FUNCTION(funcall_clear_event_detectors_inst,NIL,FALSE,2,2));
    make_and_register_funcalled_instruction_description(Qclear_event_detectors,
	    FIX((SI_Long)46L),list_constant_20,FIX((SI_Long)0L),
	    FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_clear_event_detectors_inst),Qnil,Nil,
	    Qfuncall_clear_event_detectors_inst);
    Qprepare_procedure_arguments = 
	    STATIC_SYMBOL("PREPARE-PROCEDURE-ARGUMENTS",AB_package);
    Qfuncall_prepare_procedure_arguments_inst = 
	    STATIC_SYMBOL("FUNCALL-PREPARE-PROCEDURE-ARGUMENTS-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_prepare_procedure_arguments_inst,
	    STATIC_FUNCTION(funcall_prepare_procedure_arguments_inst,NIL,
	    FALSE,2,2));
    make_and_register_funcalled_instruction_description(Qprepare_procedure_arguments,
	    FIX((SI_Long)47L),Qall,list_constant_19,list_constant_19,
	    SYMBOL_FUNCTION(Qfuncall_prepare_procedure_arguments_inst),
	    Qnil,Nil,Qfuncall_prepare_procedure_arguments_inst);
    string_constant_169 = 
	    STATIC_STRING("Internal G2 error: bad procedure ~a while preparing arguments.");
    Kgeneral_description = STATIC_SYMBOL("GENERAL-DESCRIPTION",Pkeyword);
    Kall_remaining = STATIC_SYMBOL("ALL-REMAINING",Pkeyword);
    Qinference_engine = STATIC_SYMBOL("INFERENCE-ENGINE",AB_package);
    Qprepare_possibly_unknown_procedure_arguments = 
	    STATIC_SYMBOL("PREPARE-POSSIBLY-UNKNOWN-PROCEDURE-ARGUMENTS",
	    AB_package);
    Qfuncall_prepare_possibly_unknown_procedure_arguments_inst = 
	    STATIC_SYMBOL("FUNCALL-PREPARE-POSSIBLY-UNKNOWN-PROCEDURE-ARGUMENTS-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_prepare_possibly_unknown_procedure_arguments_inst,
	    STATIC_FUNCTION(funcall_prepare_possibly_unknown_procedure_arguments_inst,
	    NIL,FALSE,2,2));
    make_and_register_funcalled_instruction_description(Qprepare_possibly_unknown_procedure_arguments,
	    FIX((SI_Long)48L),Qall,FIX((SI_Long)1L),FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_prepare_possibly_unknown_procedure_arguments_inst),
	    Qnil,Nil,
	    Qfuncall_prepare_possibly_unknown_procedure_arguments_inst);
    Qcoerce_item_or_values_to_matching_element_type = 
	    STATIC_SYMBOL("COERCE-ITEM-OR-VALUES-TO-MATCHING-ELEMENT-TYPE",
	    AB_package);
    Qfuncall_coerce_item_or_values_to_matching_element_type_inst = 
	    STATIC_SYMBOL("FUNCALL-COERCE-ITEM-OR-VALUES-TO-MATCHING-ELEMENT-TYPE-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_coerce_item_or_values_to_matching_element_type_inst,
	    STATIC_FUNCTION(funcall_coerce_item_or_values_to_matching_element_type_inst,
	    NIL,FALSE,2,2));
    make_and_register_funcalled_instruction_description(Qcoerce_item_or_values_to_matching_element_type,
	    FIX((SI_Long)73L),Qall,FIX((SI_Long)1L),FIX((SI_Long)1L),
	    SYMBOL_FUNCTION(Qfuncall_coerce_item_or_values_to_matching_element_type_inst),
	    Qnil,Nil,
	    Qfuncall_coerce_item_or_values_to_matching_element_type_inst);
    Qcoerce_item_or_values_to_matching_element_type_or_unknown = 
	    STATIC_SYMBOL("COERCE-ITEM-OR-VALUES-TO-MATCHING-ELEMENT-TYPE-OR-UNKNOWN",
	    AB_package);
    Qfuncall_coerce_item_or_values_to_matching_element_type_or_unknown_inst 
	    = 
	    STATIC_SYMBOL("FUNCALL-COERCE-ITEM-OR-VALUES-TO-MATCHING-ELEMENT-TYPE-OR-UNKNOWN-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_coerce_item_or_values_to_matching_element_type_or_unknown_inst,
	    STATIC_FUNCTION(funcall_coerce_item_or_values_to_matching_element_type_or_unknown_inst,
	    NIL,FALSE,2,2));
    make_and_register_funcalled_instruction_description(Qcoerce_item_or_values_to_matching_element_type_or_unknown,
	    FIX((SI_Long)74L),Qall,list_constant_19,list_constant_19,
	    SYMBOL_FUNCTION(Qfuncall_coerce_item_or_values_to_matching_element_type_or_unknown_inst),
	    Qnil,Nil,
	    Qfuncall_coerce_item_or_values_to_matching_element_type_or_unknown_inst);
    Qcurrent_computation_frame = 
	    STATIC_SYMBOL("*CURRENT-COMPUTATION-FRAME*",AB_package);
    string_constant_170 = 
	    STATIC_STRING("The attribute ~a is only found on items.");
    string_constant_171 = 
	    STATIC_STRING("No support for concluding into ~NB components.  This is a G2 ~@\n        internal error, please call Gensym customer support.");
    Qg2_defstruct_structure_name_component_change_report_g2_struct = 
	    STATIC_SYMBOL("COMPONENT-CHANGE-REPORT-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qcomponent_change_report = STATIC_SYMBOL("COMPONENT-CHANGE-REPORT",
	    AB_package);
    Qab_name_of_unique_structure_type = 
	    STATIC_SYMBOL("AB-NAME-OF-UNIQUE-STRUCTURE-TYPE",AB_package);
    mutate_global_property(Qg2_defstruct_structure_name_component_change_report_g2_struct,
	    Qcomponent_change_report,Qab_name_of_unique_structure_type);
    Qunique_structure_type_of_ab_name_qm = 
	    STATIC_SYMBOL("UNIQUE-STRUCTURE-TYPE-OF-AB-NAME\?",AB_package);
    mutate_global_property(Qcomponent_change_report,
	    Qg2_defstruct_structure_name_component_change_report_g2_struct,
	    Qunique_structure_type_of_ab_name_qm);
    if (The_type_description_of_component_change_report == UNBOUND)
	The_type_description_of_component_change_report = Nil;
    string_constant_203 = 
	    STATIC_STRING("43Dy8m83gAy1n83gAy8n8k1l8n0000001l1n8y83-3Jy1l83saykmk0k0");
    temp = The_type_description_of_component_change_report;
    The_type_description_of_component_change_report = 
	    load_and_initialize_type_description(temp,
	    regenerate_optimized_constant(string_constant_203));
    Qtype_description_of_unique_type_name_of_gensym_structure = 
	    STATIC_SYMBOL("TYPE-DESCRIPTION-OF-UNIQUE-TYPE-NAME-OF-GENSYM-STRUCTURE",
	    AB_package);
    mutate_global_property(Qg2_defstruct_structure_name_component_change_report_g2_struct,
	    The_type_description_of_component_change_report,
	    Qtype_description_of_unique_type_name_of_gensym_structure);
    Qtype_description_of_type = STATIC_SYMBOL("TYPE-DESCRIPTION-OF-TYPE",
	    AB_package);
    mutate_global_property(Qcomponent_change_report,
	    The_type_description_of_component_change_report,
	    Qtype_description_of_type);
    Qoutstanding_component_change_report_count = 
	    STATIC_SYMBOL("OUTSTANDING-COMPONENT-CHANGE-REPORT-COUNT",
	    AB_package);
    Qcomponent_change_report_structure_memory_usage = 
	    STATIC_SYMBOL("COMPONENT-CHANGE-REPORT-STRUCTURE-MEMORY-USAGE",
	    AB_package);
    string_constant_204 = STATIC_STRING("1q83gAy8s83-NTy09k9l");
    clear_optimized_constants();
    push_optimized_constant(Qoutstanding_component_change_report_count);
    push_optimized_constant(Qcomponent_change_report_structure_memory_usage);
    update_object_pool_meters_list(regenerate_optimized_constant(string_constant_204));
    Qchain_of_available_component_change_reports = 
	    STATIC_SYMBOL("CHAIN-OF-AVAILABLE-COMPONENT-CHANGE-REPORTS",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qchain_of_available_component_change_reports,
	    Chain_of_available_component_change_reports);
    Qutilities2 = STATIC_SYMBOL("UTILITIES2",AB_package);
    record_system_variable(Qchain_of_available_component_change_reports,
	    Qutilities2,Nil,Qnil,Qt,Qnil,Qnil);
    Qcomponent_change_report_count = 
	    STATIC_SYMBOL("COMPONENT-CHANGE-REPORT-COUNT",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qcomponent_change_report_count,
	    Component_change_report_count);
    record_system_variable(Qcomponent_change_report_count,Qutilities2,
	    FIX((SI_Long)0L),Qnil,Qt,Qnil,Qnil);
    SET_SYMBOL_FUNCTION(Qcomponent_change_report_structure_memory_usage,
	    STATIC_FUNCTION(component_change_report_structure_memory_usage,
	    NIL,FALSE,0,0));
    SET_SYMBOL_FUNCTION(Qoutstanding_component_change_report_count,
	    STATIC_FUNCTION(outstanding_component_change_report_count,NIL,
	    FALSE,0,0));
    Qreclaim_structure = STATIC_SYMBOL("RECLAIM-STRUCTURE",AB_package);
    reclaim_structure_for_component_change_report_1 = 
	    STATIC_FUNCTION(reclaim_structure_for_component_change_report,
	    NIL,FALSE,1,1);
    record_direct_structure_method(Qreclaim_structure,
	    Qcomponent_change_report,
	    reclaim_structure_for_component_change_report_1);
    string_constant_172 = 
	    STATIC_STRING("Unable set the ~a of ~NA, it\'s not a structure.");
    string_constant_173 = 
	    STATIC_STRING("Unable to change values within the ~a attribute, since ~@\n                     ~NA has no value for that attribute.");
    string_constant_174 = 
	    STATIC_STRING("Unable to set element ~a of ~NA, it\'s not a sequence.");
    string_constant_175 = 
	    STATIC_STRING("Unable to change values within element ~a, since ~NA has ~@\n                    no value at that index.");
    array_constant_93 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)48L));
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)0L,(SI_Long)85L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)1L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)2L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)3L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)4L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)5L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)6L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)7L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)8L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)9L,(SI_Long)122L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)10L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)11L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)12L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)13L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)14L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)15L,(SI_Long)102L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)16L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)17L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)18L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)19L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)20L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)21L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)22L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)23L,(SI_Long)119L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)24L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)25L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)26L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)27L,(SI_Long)105L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)28L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)29L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)30L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)31L,(SI_Long)111L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)32L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)33L,(SI_Long)99L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)34L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)35L,(SI_Long)117L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)36L,(SI_Long)100L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)37L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)38L,(SI_Long)58L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)39L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)46L,(SI_Long)40L);
    UBYTE_16_ISASET_1(array_constant_93,(SI_Long)47L,(SI_Long)57344L);
    if (Change_the_text_of_attributes_without_category_evaluator_interfaces_p 
	    == UNBOUND)
	Change_the_text_of_attributes_without_category_evaluator_interfaces_p 
		= Nil;
    string_constant_176 = 
	    STATIC_STRING("Unable change ~a attribute, ~NA it\'s not a structure.");
    string_constant_177 = 
	    STATIC_STRING("Cannot edit ~NF, because ~A.  See the saving-parameters.");
    Qg2_defstruct_structure_name_slot_description_g2_struct = 
	    STATIC_SYMBOL("SLOT-DESCRIPTION-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    string_constant_178 = 
	    STATIC_STRING("Unable to conclude into ~NB, since the ~NS of ~NF contained ~@\n                     an item, ~NF, when a structure or sequence was expected.");
    string_constant_179 = 
	    string_append2(STATIC_STRING("While executing a CONCLUDE action, could not locate a ~\n                       variable or parameter attribute of ~NF which has ~NV in ~\n                       its range of po"),
	    STATIC_STRING("ssible values."));
    string_constant_180 = 
	    STATIC_STRING("Cannot conclude a value for ~NF, since it is a ~(~a~), ~@\n                       not a variable-or-parameter.");
    string_constant_181 = 
	    STATIC_STRING("Unable to conclude that ~NF has no value, because ~@\n                          it is not an instance of the class variable.");
    string_constant_182 = 
	    STATIC_STRING("Cannot conclude into the ~NS of ~NF because the item in ~@\n                  this attribute (~NF) is not active.");
    Qnot_user_editable = STATIC_SYMBOL("NOT-USER-EDITABLE",AB_package);
    string_constant_183 = 
	    STATIC_STRING("The attribute ~A of ~NF is read-only.");
    Qcategory_evaluator_interface = 
	    STATIC_SYMBOL("CATEGORY-EVALUATOR-INTERFACE",AB_package);
    Qtext_category_evaluator_interface_p = 
	    STATIC_SYMBOL("TEXT-CATEGORY-EVALUATOR-INTERFACE-P",AB_package);
    string_constant_184 = 
	    STATIC_STRING("Unable to conclude ~NB, unable to fetch the ~@\n\t\t\t\t~NS attribute to modify its subparts.");
    string_constant_185 = 
	    STATIC_STRING("Unable to conclude a new value into the ~NS of ~NF: ~a");
    Qidentifier_of_basis_kb = STATIC_SYMBOL("IDENTIFIER-OF-BASIS-KB",
	    AB_package);
    Qfilename_of_basis_kb = STATIC_SYMBOL("FILENAME-OF-BASIS-KB",AB_package);
    list_constant_15 = STATIC_LIST((SI_Long)2L,Qidentifier_of_basis_kb,
	    Qfilename_of_basis_kb);
    string_constant_186 = STATIC_STRING("The ~(~A ~NF~)");
    string_constant_187 = STATIC_STRING("none");
    string_constant_188 = STATIC_STRING("The value ~NV");
    string_constant_189 = STATIC_STRING("The ~(~NT~) ~NV");
    string_constant_190 = 
	    STATIC_STRING(", concluded for the ~NS of ~NF does not ~\n      conform to the data type of its attribute type ~\n      specification, ~NT.");
    string_constant_191 = 
	    STATIC_STRING("Unable to conclude into ~NB, no value could be read ~@\n                        from ~a to produce the new structured value.");
    string_constant_192 = STATIC_STRING("Error concluding the ~NQ of ~NF: ~A");
    string_constant_193 = 
	    STATIC_STRING("The attribute ~a of ~NF is read-only.");
    string_constant_194 = 
	    STATIC_STRING("Cannot conclude a new element at index ~a for ~NF.  ~@\n                                This item is a ~a, but should be a g2-array or g2-list.");
    Qconclude_attribute = STATIC_SYMBOL("CONCLUDE-ATTRIBUTE",AB_package);
    Qfuncall_conclude_attribute_inst = 
	    STATIC_SYMBOL("FUNCALL-CONCLUDE-ATTRIBUTE-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_conclude_attribute_inst,
	    STATIC_FUNCTION(funcall_conclude_attribute_inst,NIL,FALSE,2,2));
    Qpprint_conclude_attribute_action = 
	    STATIC_SYMBOL("PPRINT-CONCLUDE-ATTRIBUTE-ACTION",AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_conclude_attribute_action,
	    STATIC_FUNCTION(pprint_conclude_attribute_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qconclude_attribute,
	    FIX((SI_Long)77L),Qall,FIX((SI_Long)4L),FIX((SI_Long)0L),
	    SYMBOL_FUNCTION(Qfuncall_conclude_attribute_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_conclude_attribute_action),
	    Qfuncall_conclude_attribute_inst);
    string_constant_195 = 
	    STATIC_STRING("Unable to conclude a new value into the ~NQ of ~NF: ~a");
    string_constant_196 = 
	    STATIC_STRING("Attempt to Start KB failed because KB is already running.");
    string_constant_197 = 
	    STATIC_STRING("Attempt to Start KB failed because KB is paused.  The Resume KB ~\n             action should be used when the KB is paused.");
    Qstart_kb = STATIC_SYMBOL("START-KB",AB_package);
    Qfuncall_start_kb_inst = STATIC_SYMBOL("FUNCALL-START-KB-INST",AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_start_kb_inst,
	    STATIC_FUNCTION(funcall_start_kb_inst,NIL,FALSE,2,2));
    Qpprint_start_kb_action = STATIC_SYMBOL("PPRINT-START-KB-ACTION",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_start_kb_action,
	    STATIC_FUNCTION(pprint_start_kb_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qstart_kb,
	    FIX((SI_Long)80L),list_constant_20,FIX((SI_Long)0L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_start_kb_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_start_kb_action),Qfuncall_start_kb_inst);
    Qg2_get_system_tables_to_activate = 
	    STATIC_SYMBOL("G2-GET-SYSTEM-TABLES-TO-ACTIVATE",AB_package);
    gensymed_symbol = T;
    mutate_global_property(Qg2_get_system_tables_to_activate,
	    gensymed_symbol,Qfunction_keeps_procedure_environment_valid_qm);
    Qsystem_frame = STATIC_SYMBOL("SYSTEM-FRAME",AB_package);
    SET_SYMBOL_FUNCTION(Qg2_get_system_tables_to_activate,
	    STATIC_FUNCTION(g2_get_system_tables_to_activate,NIL,FALSE,0,0));
    Qg2_get_message_boards = STATIC_SYMBOL("G2-GET-MESSAGE-BOARDS",AB_package);
    gensymed_symbol = T;
    mutate_global_property(Qg2_get_message_boards,gensymed_symbol,
	    Qfunction_keeps_procedure_environment_valid_qm);
    SET_SYMBOL_FUNCTION(Qg2_get_message_boards,
	    STATIC_FUNCTION(g2_get_message_boards,NIL,FALSE,0,0));
    Qg2_get_top_level_workspaces = 
	    STATIC_SYMBOL("G2-GET-TOP-LEVEL-WORKSPACES",AB_package);
    gensymed_symbol = T;
    mutate_global_property(Qg2_get_top_level_workspaces,gensymed_symbol,
	    Qfunction_keeps_procedure_environment_valid_qm);
    SET_SYMBOL_FUNCTION(Qg2_get_top_level_workspaces,
	    STATIC_FUNCTION(g2_get_top_level_workspaces,NIL,FALSE,0,0));
    Qg2_get_top_level_extensions = 
	    STATIC_SYMBOL("G2-GET-TOP-LEVEL-EXTENSIONS",AB_package);
    gensymed_symbol = T;
    mutate_global_property(Qg2_get_top_level_extensions,gensymed_symbol,
	    Qfunction_keeps_procedure_environment_valid_qm);
    Qg2_extension = STATIC_SYMBOL("G2-EXTENSION",AB_package);
    SET_SYMBOL_FUNCTION(Qg2_get_top_level_extensions,
	    STATIC_FUNCTION(g2_get_top_level_extensions,NIL,FALSE,0,0));
    string_constant_198 = 
	    STATIC_STRING("Attempt to Resume KB failed because KB is already running.");
    string_constant_199 = 
	    STATIC_STRING("Attempt to Resume KB failed because KB is not paused.  The Start KB ~\n             action should be used when the KB is not paused.");
    Qresume_kb = STATIC_SYMBOL("RESUME-KB",AB_package);
    Qfuncall_resume_kb_inst = STATIC_SYMBOL("FUNCALL-RESUME-KB-INST",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qfuncall_resume_kb_inst,
	    STATIC_FUNCTION(funcall_resume_kb_inst,NIL,FALSE,2,2));
    Qpprint_resume_kb_action = STATIC_SYMBOL("PPRINT-RESUME-KB-ACTION",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpprint_resume_kb_action,
	    STATIC_FUNCTION(pprint_resume_kb_action,NIL,FALSE,6,6));
    make_and_register_funcalled_instruction_description(Qresume_kb,
	    FIX((SI_Long)81L),list_constant_20,FIX((SI_Long)0L),
	    FIX((SI_Long)0L),SYMBOL_FUNCTION(Qfuncall_resume_kb_inst),Qnil,
	    SYMBOL_FUNCTION(Qpprint_resume_kb_action),Qfuncall_resume_kb_inst);
    string_constant_200 = 
	    STATIC_STRING("Cannot ~a the element at index ~NV in ~NF to ");
    Qg2_defstruct_structure_name_temporary_constant_g2_struct = 
	    STATIC_SYMBOL("TEMPORARY-CONSTANT-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    array_constant_94 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)8L));
    UBYTE_16_ISASET_1(array_constant_94,(SI_Long)0L,(SI_Long)46L);
    UBYTE_16_ISASET_1(array_constant_94,(SI_Long)1L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_94,(SI_Long)2L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_94,(SI_Long)6L,(SI_Long)3L);
    UBYTE_16_ISASET_1(array_constant_94,(SI_Long)7L,(SI_Long)57344L);
    string_constant_201 = 
	    STATIC_STRING("This value is already in element ~a and this g2-list ~\n             does not allow duplicate elements.");
    array_constant_95 = STATIC_ARRAY(list_constant_16,(SI_Long)1L,
	    FIX((SI_Long)24L));
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)0L,(SI_Long)84L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)1L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)2L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)3L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)4L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)5L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)6L,(SI_Long)114L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)7L,(SI_Long)97L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)8L,(SI_Long)121L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)9L,(SI_Long)45L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)10L,(SI_Long)108L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)11L,(SI_Long)101L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)12L,(SI_Long)110L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)13L,(SI_Long)103L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)14L,(SI_Long)116L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)15L,(SI_Long)104L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)16L,(SI_Long)32L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)22L,(SI_Long)17L);
    UBYTE_16_ISASET_1(array_constant_95,(SI_Long)23L,(SI_Long)57344L);
    string_constant_202 = STATIC_STRING(" is not valid for the G2-array ~NF.");
}
