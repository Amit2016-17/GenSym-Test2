/* win2.c
 * Input file:  windows2.lisp
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
 */

#include "user.h"
#include "win2.h"


Object All_stipples = UNBOUND;

Object Map_to_stipple_value_prop = UNBOUND;

/* STIPPLE-RECTANGLE-IN-SCRATCHPAD-RASTER */
Object stipple_rectangle_in_scratchpad_raster(scratchpad_raster,
	    scratchpad_raster_type,left_edge_of_rectangle,
	    top_edge_of_rectangle,right_edge_of_rectangle,
	    bottom_edge_of_rectangle,stipple)
    Object scratchpad_raster, scratchpad_raster_type, left_edge_of_rectangle;
    Object top_edge_of_rectangle, right_edge_of_rectangle;
    Object bottom_edge_of_rectangle, stipple;
{
    Object temp, decff_1_arg, gensymed_symbol, tile_size, tile_arrays;
    Object number_of_rows_1, number_of_columns_1, tile_to_paint;
    SI_Long temp_1, temp_2, left_edge_column, top_edge_column;
    SI_Long right_edge_column, bottom_edge_column, i, ab_loop_bind_, j;
    SI_Long ab_loop_bind__1, x_offset, y_offset, left_edge_of_rectangle_1;
    SI_Long right_edge_of_rectangle_1, top_edge_of_rectangle_1;
    SI_Long bottom_edge_of_rectangle_1;

    x_note_fn_call(51,0);
    if (Current_scratchpad_raster_tiled_p) {
	temp = Current_x_offset_for_stored_raster_qm;
	if (Current_x_offset_for_stored_raster_qm) {
	    decff_1_arg = temp;
	    left_edge_of_rectangle = FIXNUM_MINUS(left_edge_of_rectangle,
		    decff_1_arg);
	    decff_1_arg = temp;
	    right_edge_of_rectangle = FIXNUM_MINUS(right_edge_of_rectangle,
		    decff_1_arg);
	    decff_1_arg = Current_y_offset_for_stored_raster_qm;
	    top_edge_of_rectangle = FIXNUM_MINUS(top_edge_of_rectangle,
		    decff_1_arg);
	    decff_1_arg = Current_y_offset_for_stored_raster_qm;
	    bottom_edge_of_rectangle = 
		    FIXNUM_MINUS(bottom_edge_of_rectangle,decff_1_arg);
	    Current_x_offset_for_stored_raster_qm = Nil;
	}
	gensymed_symbol = scratchpad_raster;
	tile_size = ISVREF(gensymed_symbol,(SI_Long)2L);
	tile_arrays = ISVREF(gensymed_symbol,(SI_Long)1L);
	number_of_rows_1 = FIXNUM_SUB1(ISVREF(tile_arrays,(SI_Long)1L));
	number_of_columns_1 = 
		FIXNUM_SUB1(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
		(SI_Long)1L),Maximum_in_place_array_size) ? 
		ISVREF(tile_arrays,(SI_Long)0L + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(SI_Long)2L),(SI_Long)0L),
		(SI_Long)1L));
	temp_1 = IFIX(left_edge_of_rectangle) / IFIX(tile_size);
	temp_2 = MAX(temp_1,(SI_Long)0L);
	temp_1 = IFIX(number_of_columns_1);
	left_edge_column = MIN(temp_2,temp_1);
	temp_1 = IFIX(top_edge_of_rectangle) / IFIX(tile_size);
	temp_2 = MAX(temp_1,(SI_Long)0L);
	temp_1 = IFIX(number_of_rows_1);
	top_edge_column = MIN(temp_2,temp_1);
	temp_1 = IFIX(FIXNUM_SUB1(right_edge_of_rectangle)) / IFIX(tile_size);
	temp_2 = MAX(temp_1,left_edge_column);
	temp_1 = IFIX(number_of_columns_1);
	right_edge_column = MIN(temp_2,temp_1);
	temp_1 = IFIX(FIXNUM_SUB1(bottom_edge_of_rectangle)) / IFIX(tile_size);
	temp_2 = MAX(temp_1,top_edge_column);
	temp_1 = IFIX(number_of_rows_1);
	bottom_edge_column = MIN(temp_2,temp_1);
	tile_to_paint = Nil;
	i = top_edge_column;
	ab_loop_bind_ = bottom_edge_column;
      next_loop:
	if (i > ab_loop_bind_)
	    goto end_loop;
	j = left_edge_column;
	ab_loop_bind__1 = right_edge_column;
      next_loop_1:
	if (j > ab_loop_bind__1)
	    goto end_loop_1;
	tile_to_paint = FIXNUM_LE(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
		(SI_Long)1L),Maximum_in_place_array_size) ? 
		ISVREF(tile_arrays,i + IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(i >>  -  - (SI_Long)10L) + 
		(SI_Long)2L),i & (SI_Long)1023L),(SI_Long)1L),
		Maximum_in_place_array_size) ? 
		ISVREF(FIXNUM_LE(ISVREF(tile_arrays,(SI_Long)1L),
		Maximum_in_place_array_size) ? ISVREF(tile_arrays,i + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(i >>  -  - (SI_Long)10L) + 
		(SI_Long)2L),i & (SI_Long)1023L),j + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,(SI_Long)1L),
		Maximum_in_place_array_size) ? ISVREF(tile_arrays,i + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(i >>  -  - (SI_Long)10L) + 
		(SI_Long)2L),i & (SI_Long)1023L),(j >>  -  - (SI_Long)10L) 
		+ (SI_Long)2L),j & (SI_Long)1023L);
	x_offset = j * IFIX(tile_size);
	y_offset = i * IFIX(tile_size);
	left_edge_of_rectangle_1 = IFIX(left_edge_of_rectangle) - x_offset;
	right_edge_of_rectangle_1 = IFIX(right_edge_of_rectangle) - x_offset;
	top_edge_of_rectangle_1 = IFIX(top_edge_of_rectangle) - y_offset;
	bottom_edge_of_rectangle_1 = IFIX(bottom_edge_of_rectangle) - y_offset;
	stipple_rectangle_in_scratchpad_raster_1(tile_to_paint,
		scratchpad_raster_type,FIX(left_edge_of_rectangle_1),
		FIX(top_edge_of_rectangle_1),
		FIX(right_edge_of_rectangle_1),
		FIX(bottom_edge_of_rectangle_1),stipple);
	j = j + (SI_Long)1L;
	goto next_loop_1;
      end_loop_1:;
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:;
	Current_x_offset_for_stored_raster_qm = temp;
    }
    else
	stipple_rectangle_in_scratchpad_raster_1(scratchpad_raster,
		scratchpad_raster_type,left_edge_of_rectangle,
		top_edge_of_rectangle,right_edge_of_rectangle,
		bottom_edge_of_rectangle,stipple);
    return VALUES_1(Nil);
}

static Object Qx11_pixmap;         /* x11-pixmap */

static Object Qmap_to_stipple_value;  /* map-to-stipple-value */

/* STIPPLE-RECTANGLE-IN-SCRATCHPAD-RASTER-1 */
Object stipple_rectangle_in_scratchpad_raster_1(scratchpad_raster,
	    scratchpad_raster_type,left_edge_of_rectangle,
	    top_edge_of_rectangle,right_edge_of_rectangle,
	    bottom_edge_of_rectangle,stipple_qm)
    Object scratchpad_raster, scratchpad_raster_type, left_edge_of_rectangle;
    Object top_edge_of_rectangle, right_edge_of_rectangle;
    Object bottom_edge_of_rectangle, stipple_qm;
{
    Object temp;

    x_note_fn_call(51,1);
    if (EQ(scratchpad_raster_type,Qx11_pixmap)) {
	temp = getfq_function_no_default(INLINE_SYMBOL_PLIST(stipple_qm),
		Qmap_to_stipple_value);
	if (temp);
	else
	    temp = No_stipple_value;
	g2ext_p_stipple_rect(IFIX(scratchpad_raster),IFIX(temp),
		IFIX(left_edge_of_rectangle),IFIX(top_edge_of_rectangle),
		IFIX(FIXNUM_MINUS(right_edge_of_rectangle,
		left_edge_of_rectangle)),
		IFIX(FIXNUM_MINUS(bottom_edge_of_rectangle,
		top_edge_of_rectangle)));
    }
    return VALUES_1(Nil);
}

static Object Qstipple_rectangle_in_current_scratchpad_raster;  /* stipple-rectangle-in-current-scratchpad-raster */

static Object Qicp;                /* icp */

static Object Qcorresponding_icp_object_map_for_symbol;  /* corresponding-icp-object-map-for-symbol */

static Object string_constant;     /* "[message]" */

static Object Qmessage;            /* message */

static Object Qclipped_left_edge;  /* clipped-left-edge */

static Object string_constant_1;   /* "[value arg]" */

static Object Qargument;           /* argument */

static Object Qclipped_top_edge;   /* clipped-top-edge */

static Object Qclipped_right_edge;  /* clipped-right-edge */

static Object Qclipped_bottom_edge;  /* clipped-bottom-edge */

static Object Qcolor_value;        /* color-value */

static Object Qstipple;            /* stipple */

static Object string_constant_2;   /* "[object arg]" */

static Object Qprinter;            /* printer */

static Object list_constant;       /* # */

static Object string_constant_3;   /* "resumable icp synch error: ~S expected, ~S found" */

/* STIPPLE-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER */
Object stipple_rectangle_in_current_scratchpad_raster(clipped_left_edge,
	    clipped_top_edge,clipped_right_edge,clipped_bottom_edge,
	    color_value,stipple)
    Object clipped_left_edge, clipped_top_edge, clipped_right_edge;
    Object clipped_bottom_edge, color_value, stipple;
{
    Object index_of_top_of_backtrace_stack, temp, svref_arg_2, temp_1, tracep;
    Object byte_count_before, current_icp_write_trace_level, tracep_1;
    Object byte_count_before_1, result_of_write, goal_color_value;
    Object scratchpad_raster, ab_loop_list_, color_value_for_this_raster;
    Object ab_loop_list__1, foreground_layer_p, resumable_icp_state_1;
    Object icp_suspend_1, top, key, value, value_1;
    Declare_special(3);
    Object result;

    x_note_fn_call(51,2);
    if (Disable_resumability) {
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qstipple_rectangle_in_current_scratchpad_raster;
	  }
	  if (EQ(Current_scratchpad_raster_type,Qicp)) {
	      icp_message_functions_icp_prologue(Qstipple_rectangle_in_current_scratchpad_raster);
	      temp_1 = 
		      getfq_function_no_default(INLINE_SYMBOL_PLIST(stipple),
		      Qcorresponding_icp_object_map_for_symbol);
	      temp_1 = getfq_function_no_default(temp_1,Current_icp_port);
	      if (temp_1);
	      else
		  temp_1 = make_corresponding_icp_symbol(stipple);
	      stipple = temp_1;
	      start_writing_icp_message(FIX((SI_Long)365L));
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qstipple_rectangle_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_left_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_integer(clipped_left_edge);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_left_edge,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(clipped_left_edge);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_top_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_integer(clipped_top_edge);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_top_edge,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(clipped_top_edge);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_right_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_integer(clipped_right_edge);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_right_edge,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(clipped_right_edge);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_bottom_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_integer(clipped_bottom_edge);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_bottom_edge,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(clipped_bottom_edge);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_unsigned_integer(color_value);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_unsigned_integer(color_value);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qstipple,
				    string_constant_2,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_corresponding_object_index(stipple);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qstipple,string_constant_2,Qargument,
				      Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			result_of_write = 
				write_icp_corresponding_object_index(stipple);
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qstipple_rectangle_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		  POP_SPECIAL();
	      }
	      else {
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_left_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(clipped_left_edge);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_left_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(clipped_left_edge);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qclipped_top_edge,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(clipped_top_edge);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_top_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(clipped_top_edge);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_right_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_integer(clipped_right_edge);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_right_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(clipped_right_edge);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_bottom_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_integer(clipped_bottom_edge);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_bottom_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(clipped_bottom_edge);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_unsigned_integer(color_value);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_unsigned_integer(color_value);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qstipple,
				  string_constant_2,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_corresponding_object_index(stipple);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qstipple,string_constant_2,Qargument,
				    Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_corresponding_object_index(stipple);
	      }
	  }
	  else if (EQ(Current_scratchpad_raster_type,Qprinter))
	      funcall(7,aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)365L)),clipped_left_edge,
		      clipped_top_edge,clipped_right_edge,
		      clipped_bottom_edge,color_value,stipple);
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p)
		  stipple_rectangle_in_scratchpad_raster(Current_scratchpad_raster,
			  Current_scratchpad_raster_type,clipped_left_edge,
			  clipped_top_edge,clipped_right_edge,
			  clipped_bottom_edge,stipple);
	      goto next_loop;
	    end_loop:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qstipple_rectangle_in_current_scratchpad_raster,top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qstipple_rectangle_in_current_scratchpad_raster,
			top,Nil);
		goto end_stipple_rectangle_in_current_scratchpad_raster;
	    }
	}
	clipped_left_edge = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : clipped_left_edge;
	clipped_top_edge = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : clipped_top_edge;
	clipped_right_edge = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : clipped_right_edge;
	clipped_bottom_edge = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : clipped_bottom_edge;
	color_value = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
		 TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : color_value;
	stipple = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : stipple;
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qstipple_rectangle_in_current_scratchpad_raster;
	  }
	  key = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		  TRUEP(Nil)) &&  
		  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		  resumable_icp_pop() : Current_scratchpad_raster_type;
	  if (EQ(key,Qicp)) {
	      if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) {
		  temp_1 = resumable_icp_pop();
		  if (! !(FIXNUMP(temp_1) && FIXNUM_LE(FIX((SI_Long)-128L),
			  temp_1) && FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
		      switch (INTEGER_TO_CHAR(temp_1)) {
			case 1:
			  goto l1;
			  break;
			case 2:
			  goto l2;
			  break;
			case 3:
			  goto l3;
			  break;
			default:
			  break;
		      }
	      }
	      icp_message_functions_icp_prologue(Qstipple_rectangle_in_current_scratchpad_raster);
	    l1:
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  value = resumable_icp_pop();
	      else {
		  temp_1 = 
			  getfq_function_no_default(INLINE_SYMBOL_PLIST(stipple),
			  Qcorresponding_icp_object_map_for_symbol);
		  value = getfq_function_no_default(temp_1,Current_icp_port);
	      }
	      if ( !(resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) && value)
		  stipple = value;
	      else {
		  value_1 = make_corresponding_icp_symbol(stipple);
		  if (EQ(icp_suspend_1,value_1)) {
		      resumable_icp_push(value);
		      resumable_icp_push(FIX((SI_Long)1L));
		      temp_1 = Icp_suspend;
		      goto end_block;
		  }
		  stipple = value_1;
	      }
	    l2:
	      if (EQ(icp_suspend_1,
		      start_writing_icp_message(FIX((SI_Long)365L)))) {
		  resumable_icp_push(FIX((SI_Long)2L));
		  temp_1 = Icp_suspend;
		  goto end_block;
	      }
	    l3:
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qstipple_rectangle_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) 
			    : TRUEP(Nil)) {
			temp_1 = resumable_icp_pop();
			if (! !(FIXNUMP(temp_1) && 
				FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
				FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			    switch (INTEGER_TO_CHAR(temp_1)) {
			      case 1:
				goto l1_1;
				break;
			      case 2:
				goto l2_1;
				break;
			      case 3:
				goto l3_1;
				break;
			      case 4:
				goto l4;
				break;
			      case 5:
				goto l5;
				break;
			      case 6:
				goto l6;
				break;
			      default:
				break;
			    }
		    }
		  l1_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_left_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_integer(clipped_left_edge))) {
			      resumable_icp_push(FIX((SI_Long)1L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_left_edge,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_integer(clipped_left_edge))) {
			resumable_icp_push(FIX((SI_Long)1L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l2_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_top_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_integer(clipped_top_edge))) {
			      resumable_icp_push(FIX((SI_Long)2L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_top_edge,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_integer(clipped_top_edge))) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l3_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_right_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_integer(clipped_right_edge))) {
			      resumable_icp_push(FIX((SI_Long)3L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_right_edge,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_integer(clipped_right_edge))) {
			resumable_icp_push(FIX((SI_Long)3L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l4:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_bottom_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_integer(clipped_bottom_edge))) {
			      resumable_icp_push(FIX((SI_Long)4L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_bottom_edge,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_integer(clipped_bottom_edge))) {
			resumable_icp_push(FIX((SI_Long)4L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l5:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_unsigned_integer(color_value))) {
			      resumable_icp_push(FIX((SI_Long)5L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_unsigned_integer(color_value))) {
			resumable_icp_push(FIX((SI_Long)5L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l6:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qstipple,
				    string_constant_2,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_corresponding_object_index(stipple))) 
				      {
			      resumable_icp_push(FIX((SI_Long)6L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qstipple,string_constant_2,Qargument,
				      Nil,Nil,Nil,Nil);
			  temp_1 = result_of_write;
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_corresponding_object_index(stipple))) {
			resumable_icp_push(FIX((SI_Long)6L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		    else
			temp_1 = Nil;
		    goto end_block_1;
		  end_block_1:
		    if (EQ(icp_suspend_1,temp_1)) {
			resumable_icp_push(FIX((SI_Long)3L));
			temp_1 = Icp_suspend;
			POP_SPECIAL();
			goto end_block;
		    }
		    else
			result_of_write = Nil;
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qstipple_rectangle_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		    temp_1 = result_of_write;
		  POP_SPECIAL();
	      }
	      else {
		  if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			  TRUEP(Nil)) {
		      temp_1 = resumable_icp_pop();
		      if (! !(FIXNUMP(temp_1) && 
			      FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
			      FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			  switch (INTEGER_TO_CHAR(temp_1)) {
			    case 1:
			      goto l1_2;
			      break;
			    case 2:
			      goto l2_2;
			      break;
			    case 3:
			      goto l3_2;
			      break;
			    case 4:
			      goto l4_1;
			      break;
			    case 5:
			      goto l5_1;
			      break;
			    case 6:
			      goto l6_1;
			      break;
			    default:
			      break;
			  }
		  }
		l1_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_left_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_integer(clipped_left_edge))) {
			    resumable_icp_push(FIX((SI_Long)1L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_left_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_integer(clipped_left_edge))) {
		      resumable_icp_push(FIX((SI_Long)1L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l2_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qclipped_top_edge,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_integer(clipped_top_edge))) {
			    resumable_icp_push(FIX((SI_Long)2L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_top_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_integer(clipped_top_edge))) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l3_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_right_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_integer(clipped_right_edge))) {
			    resumable_icp_push(FIX((SI_Long)3L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_right_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_integer(clipped_right_edge))) {
		      resumable_icp_push(FIX((SI_Long)3L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l4_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_bottom_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_integer(clipped_bottom_edge))) {
			    resumable_icp_push(FIX((SI_Long)4L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_bottom_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_integer(clipped_bottom_edge))) {
		      resumable_icp_push(FIX((SI_Long)4L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l5_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_unsigned_integer(color_value))) {
			    resumable_icp_push(FIX((SI_Long)5L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_unsigned_integer(color_value))) {
		      resumable_icp_push(FIX((SI_Long)5L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l6_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qstipple,
				  string_constant_2,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_corresponding_object_index(stipple))) 
				    {
			    resumable_icp_push(FIX((SI_Long)6L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qstipple,string_constant_2,Qargument,
				    Nil,Nil,Nil,Nil);
			temp_1 = result_of_write;
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_corresponding_object_index(stipple))) {
		      resumable_icp_push(FIX((SI_Long)6L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		  else
		      temp_1 = Nil;
		  goto end_block_2;
		end_block_2:
		  if (EQ(icp_suspend_1,temp_1)) {
		      resumable_icp_push(FIX((SI_Long)3L));
		      temp_1 = Icp_suspend;
		      goto end_block;
		  }
		  else
		      temp_1 = Nil;
	      }
	      goto end_block;
	    end_block:
	      if (EQ(icp_suspend_1,temp_1)) {
		  resumable_icp_push(key);
		  resumable_icp_push(stipple);
		  resumable_icp_push(color_value);
		  resumable_icp_push(clipped_bottom_edge);
		  resumable_icp_push(clipped_right_edge);
		  resumable_icp_push(clipped_top_edge);
		  resumable_icp_push(clipped_left_edge);
		  resumable_icp_push(Qstipple_rectangle_in_current_scratchpad_raster);
		  result = VALUES_1(Icp_suspend);
		  POP_SPECIAL();
		  goto end_stipple_rectangle_in_current_scratchpad_raster;
	      }
	  }
	  else if (EQ(key,Qprinter))
	      funcall(7,aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)365L)),clipped_left_edge,
		      clipped_top_edge,clipped_right_edge,
		      clipped_bottom_edge,color_value,stipple);
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop_1:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop_1;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop_1;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p)
		  stipple_rectangle_in_scratchpad_raster(Current_scratchpad_raster,
			  Current_scratchpad_raster_type,clipped_left_edge,
			  clipped_top_edge,clipped_right_edge,
			  clipped_bottom_edge,stipple);
	      goto next_loop_1;
	    end_loop_1:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    result = VALUES_1(temp_1);
  end_stipple_rectangle_in_current_scratchpad_raster:
    return result;
}

static Object string_constant_4;   /* "[msg funct]" */

static Object Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster;  /* handle-icp-stipple-rectangle-in-current-scratchpad-raster */

static Object Qresumable_icp_list_end;  /* resumable-icp-list-end */

/* HANDLE-ICP-STIPPLE-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER */
Object handle_icp_stipple_rectangle_in_current_scratchpad_raster()
{
    Object tracep, byte_count_before, current_icp_read_trace_level, tracep_1;
    Object byte_count_before_1, result_of_read, clipped_left_edge;
    Object clipped_top_edge, clipped_right_edge, clipped_bottom_edge;
    Object color_value, index_1, index_space, stipple, temp;
    Object resumable_icp_state_1, icp_suspend_1, top, value;
    Declare_special(2);
    Object result;

    x_note_fn_call(51,3);
    if (Disable_resumability) {
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qstipple_rectangle_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_left_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_left_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_left_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  clipped_left_edge = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_top_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_top_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_top_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  clipped_top_edge = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_right_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_right_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_right_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  clipped_right_edge = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_bottom_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_bottom_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_bottom_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  clipped_bottom_edge = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_unsigned_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  color_value = read_icp_unsigned_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qstipple,
			      string_constant_2,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    index_1 = read_icp_corresponding_object_index();
		    index_space = Current_temporary_icp_object_index_space;
		    if (index_space);
		    else
			index_space = Current_standard_icp_object_index_space;
		    if (FIXNUMP(index_1)) {
			if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			    enlarge_index_space(index_space,index_1);
			result_of_read = ISVREF(ISVREF(ISVREF(index_space,
				(SI_Long)2L),IFIX(index_1) >>  -  - 
				(SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		    }
		    else
			result_of_read = Nil;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qstipple,string_constant_2,Qargument,T,
				result_of_read,Nil,Nil);
		    stipple = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  index_1 = read_icp_corresponding_object_index();
		  index_space = Current_temporary_icp_object_index_space;
		  if (index_space);
		  else
		      index_space = Current_standard_icp_object_index_space;
		  if (FIXNUMP(index_1)) {
		      if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			  enlarge_index_space(index_space,index_1);
		      stipple = ISVREF(ISVREF(ISVREF(index_space,
			      (SI_Long)2L),IFIX(index_1) >>  -  - 
			      (SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		  }
		  else
		      stipple = Nil;
	      }
	      result_of_read = 
		      stipple_rectangle_in_current_scratchpad_raster(clipped_left_edge,
		      clipped_top_edge,clipped_right_edge,
		      clipped_bottom_edge,color_value,stipple);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qstipple_rectangle_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_left_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_left_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_left_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else
		clipped_left_edge = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_top_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_top_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_top_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else
		clipped_top_edge = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_right_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_right_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_right_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else
		clipped_right_edge = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_bottom_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_bottom_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_bottom_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else
		clipped_bottom_edge = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_unsigned_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else
		color_value = read_icp_unsigned_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qstipple,
			    string_constant_2,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  index_1 = read_icp_corresponding_object_index();
		  index_space = Current_temporary_icp_object_index_space;
		  if (index_space);
		  else
		      index_space = Current_standard_icp_object_index_space;
		  if (FIXNUMP(index_1)) {
		      if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			  enlarge_index_space(index_space,index_1);
		      result_of_read = ISVREF(ISVREF(ISVREF(index_space,
			      (SI_Long)2L),IFIX(index_1) >>  -  - 
			      (SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		  }
		  else
		      result_of_read = Nil;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qstipple,string_constant_2,Qargument,T,
			      result_of_read,Nil,Nil);
		  stipple = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		index_1 = read_icp_corresponding_object_index();
		index_space = Current_temporary_icp_object_index_space;
		if (index_space);
		else
		    index_space = Current_standard_icp_object_index_space;
		if (FIXNUMP(index_1)) {
		    if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			enlarge_index_space(index_space,index_1);
		    stipple = ISVREF(ISVREF(ISVREF(index_space,
			    (SI_Long)2L),IFIX(index_1) >>  -  - 
			    (SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		}
		else
		    stipple = Nil;
	    }
	    stipple_rectangle_in_current_scratchpad_raster(clipped_left_edge,
		    clipped_top_edge,clipped_right_edge,
		    clipped_bottom_edge,color_value,stipple);
	}
	temp = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( 
		    !EQ(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster,
		    top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster,
			top,Nil);
		goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
	    }
	}
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qstipple_rectangle_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  clipped_left_edge = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_left_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_left_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_left_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		  }
		  clipped_left_edge = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  clipped_top_edge = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_top_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(clipped_left_edge);
			resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_top_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_top_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		  }
		  clipped_top_edge = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  clipped_right_edge = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_right_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(clipped_top_edge);
			resumable_icp_push(clipped_left_edge);
			resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_right_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_right_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		  }
		  clipped_right_edge = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  clipped_bottom_edge = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_bottom_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(clipped_right_edge);
			resumable_icp_push(clipped_top_edge);
			resumable_icp_push(clipped_left_edge);
			resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_bottom_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_bottom_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_right_edge);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		  }
		  clipped_bottom_edge = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  color_value = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_unsigned_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(clipped_bottom_edge);
			resumable_icp_push(clipped_right_edge);
			resumable_icp_push(clipped_top_edge);
			resumable_icp_push(clipped_left_edge);
			resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_bottom_edge);
		      resumable_icp_push(clipped_right_edge);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		  }
		  color_value = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  stipple = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qstipple,
			      string_constant_2,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    if ((resumable_icp_state_1 ? 
			    TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
			    !TRUEP(resumable_icp_pop_list_if_end_marker()))
			index_1 = resumable_icp_pop();
		    else {
			value = read_icp_corresponding_object_index();
			if (EQ(icp_suspend_1,value)) {
			    resumable_icp_push(Qresumable_icp_list_end);
			    resumable_icp_push(Qresumable_icp_list_end);
			    resumable_icp_push(color_value);
			    resumable_icp_push(clipped_bottom_edge);
			    resumable_icp_push(clipped_right_edge);
			    resumable_icp_push(clipped_top_edge);
			    resumable_icp_push(clipped_left_edge);
			    resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
			    result = VALUES_1(Icp_suspend);
			    POP_SPECIAL();
			    POP_SPECIAL();
			    goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
			}
			index_1 = value;
		    }
		    index_space = Current_temporary_icp_object_index_space;
		    if (index_space);
		    else
			index_space = Current_standard_icp_object_index_space;
		    if (FIXNUMP(index_1)) {
			if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			    enlarge_index_space(index_space,index_1);
			result_of_read = ISVREF(ISVREF(ISVREF(index_space,
				(SI_Long)2L),IFIX(index_1) >>  -  - 
				(SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		    }
		    else
			result_of_read = Nil;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qstipple,string_constant_2,Qargument,T,
				result_of_read,Nil,Nil);
		    stipple = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
			   TRUEP(Nil)) &&  
			  !TRUEP(resumable_icp_pop_list_if_end_marker()))
		      index_1 = resumable_icp_pop();
		  else {
		      value = read_icp_corresponding_object_index();
		      if (EQ(icp_suspend_1,value)) {
			  resumable_icp_push(Qresumable_icp_list_end);
			  resumable_icp_push(Qresumable_icp_list_end);
			  resumable_icp_push(color_value);
			  resumable_icp_push(clipped_bottom_edge);
			  resumable_icp_push(clipped_right_edge);
			  resumable_icp_push(clipped_top_edge);
			  resumable_icp_push(clipped_left_edge);
			  resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
			  result = VALUES_1(Icp_suspend);
			  POP_SPECIAL();
			  goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		      }
		      index_1 = value;
		  }
		  index_space = Current_temporary_icp_object_index_space;
		  if (index_space);
		  else
		      index_space = Current_standard_icp_object_index_space;
		  if (FIXNUMP(index_1)) {
		      if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			  enlarge_index_space(index_space,index_1);
		      stipple = ISVREF(ISVREF(ISVREF(index_space,
			      (SI_Long)2L),IFIX(index_1) >>  -  - 
			      (SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		  }
		  else
		      stipple = Nil;
	      }
	      result_of_read = 
		      stipple_rectangle_in_current_scratchpad_raster(clipped_left_edge,
		      clipped_top_edge,clipped_right_edge,
		      clipped_bottom_edge,color_value,stipple);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qstipple_rectangle_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		clipped_left_edge = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_left_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_left_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_left_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		}
		clipped_left_edge = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		clipped_top_edge = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_top_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_top_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_top_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(clipped_left_edge);
		    resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		}
		clipped_top_edge = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		clipped_right_edge = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_right_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_right_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_right_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(clipped_top_edge);
		    resumable_icp_push(clipped_left_edge);
		    resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		}
		clipped_right_edge = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		clipped_bottom_edge = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_bottom_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_right_edge);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_bottom_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_bottom_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(clipped_right_edge);
		    resumable_icp_push(clipped_top_edge);
		    resumable_icp_push(clipped_left_edge);
		    resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		}
		clipped_bottom_edge = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		color_value = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_bottom_edge);
		      resumable_icp_push(clipped_right_edge);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(clipped_bottom_edge);
		    resumable_icp_push(clipped_right_edge);
		    resumable_icp_push(clipped_top_edge);
		    resumable_icp_push(clipped_left_edge);
		    resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		}
		color_value = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		stipple = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qstipple,
			    string_constant_2,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
			   TRUEP(Nil)) &&  
			  !TRUEP(resumable_icp_pop_list_if_end_marker()))
		      index_1 = resumable_icp_pop();
		  else {
		      value = read_icp_corresponding_object_index();
		      if (EQ(icp_suspend_1,value)) {
			  resumable_icp_push(Qresumable_icp_list_end);
			  resumable_icp_push(Qresumable_icp_list_end);
			  resumable_icp_push(color_value);
			  resumable_icp_push(clipped_bottom_edge);
			  resumable_icp_push(clipped_right_edge);
			  resumable_icp_push(clipped_top_edge);
			  resumable_icp_push(clipped_left_edge);
			  resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
			  result = VALUES_1(Icp_suspend);
			  POP_SPECIAL();
			  goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		      }
		      index_1 = value;
		  }
		  index_space = Current_temporary_icp_object_index_space;
		  if (index_space);
		  else
		      index_space = Current_standard_icp_object_index_space;
		  if (FIXNUMP(index_1)) {
		      if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			  enlarge_index_space(index_space,index_1);
		      result_of_read = ISVREF(ISVREF(ISVREF(index_space,
			      (SI_Long)2L),IFIX(index_1) >>  -  - 
			      (SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		  }
		  else
		      result_of_read = Nil;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qstipple,string_constant_2,Qargument,T,
			      result_of_read,Nil,Nil);
		  stipple = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			TRUEP(Nil)) &&  
			!TRUEP(resumable_icp_pop_list_if_end_marker()))
		    index_1 = resumable_icp_pop();
		else {
		    value = read_icp_corresponding_object_index();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(color_value);
			resumable_icp_push(clipped_bottom_edge);
			resumable_icp_push(clipped_right_edge);
			resumable_icp_push(clipped_top_edge);
			resumable_icp_push(clipped_left_edge);
			resumable_icp_push(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			goto end_handle_icp_stipple_rectangle_in_current_scratchpad_raster;
		    }
		    index_1 = value;
		}
		index_space = Current_temporary_icp_object_index_space;
		if (index_space);
		else
		    index_space = Current_standard_icp_object_index_space;
		if (FIXNUMP(index_1)) {
		    if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			enlarge_index_space(index_space,index_1);
		    stipple = ISVREF(ISVREF(ISVREF(index_space,
			    (SI_Long)2L),IFIX(index_1) >>  -  - 
			    (SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		}
		else
		    stipple = Nil;
	    }
	    stipple_rectangle_in_current_scratchpad_raster(clipped_left_edge,
		    clipped_top_edge,clipped_right_edge,
		    clipped_bottom_edge,color_value,stipple);
	}
	temp = Nil;
    }
    result = VALUES_1(temp);
  end_handle_icp_stipple_rectangle_in_current_scratchpad_raster:
    return result;
}

/* FILL-RECTANGLE-ON-SCRATCHPAD-RASTER */
Object fill_rectangle_on_scratchpad_raster(scratchpad_raster,
	    scratchpad_raster_type,left_edge_of_rectangle,
	    top_edge_of_rectangle,right_edge_of_rectangle,
	    bottom_edge_of_rectangle,color_value)
    Object scratchpad_raster, scratchpad_raster_type, left_edge_of_rectangle;
    Object top_edge_of_rectangle, right_edge_of_rectangle;
    Object bottom_edge_of_rectangle, color_value;
{
    Object temp, decff_1_arg, gensymed_symbol, tile_size, tile_arrays;
    Object number_of_rows_1, number_of_columns_1, tile_to_paint;
    SI_Long temp_1, temp_2, left_edge_column, top_edge_column;
    SI_Long right_edge_column, bottom_edge_column, i, ab_loop_bind_, j;
    SI_Long ab_loop_bind__1, x_offset, y_offset, left_edge_of_rectangle_1;
    SI_Long right_edge_of_rectangle_1, top_edge_of_rectangle_1;
    SI_Long bottom_edge_of_rectangle_1;

    x_note_fn_call(51,4);
    if (Current_scratchpad_raster_tiled_p) {
	temp = Current_x_offset_for_stored_raster_qm;
	if (Current_x_offset_for_stored_raster_qm) {
	    decff_1_arg = temp;
	    left_edge_of_rectangle = FIXNUM_MINUS(left_edge_of_rectangle,
		    decff_1_arg);
	    decff_1_arg = temp;
	    right_edge_of_rectangle = FIXNUM_MINUS(right_edge_of_rectangle,
		    decff_1_arg);
	    decff_1_arg = Current_y_offset_for_stored_raster_qm;
	    top_edge_of_rectangle = FIXNUM_MINUS(top_edge_of_rectangle,
		    decff_1_arg);
	    decff_1_arg = Current_y_offset_for_stored_raster_qm;
	    bottom_edge_of_rectangle = 
		    FIXNUM_MINUS(bottom_edge_of_rectangle,decff_1_arg);
	    Current_x_offset_for_stored_raster_qm = Nil;
	}
	gensymed_symbol = scratchpad_raster;
	tile_size = ISVREF(gensymed_symbol,(SI_Long)2L);
	tile_arrays = ISVREF(gensymed_symbol,(SI_Long)1L);
	number_of_rows_1 = FIXNUM_SUB1(ISVREF(tile_arrays,(SI_Long)1L));
	number_of_columns_1 = 
		FIXNUM_SUB1(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
		(SI_Long)1L),Maximum_in_place_array_size) ? 
		ISVREF(tile_arrays,(SI_Long)0L + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(SI_Long)2L),(SI_Long)0L),
		(SI_Long)1L));
	temp_1 = IFIX(left_edge_of_rectangle) / IFIX(tile_size);
	temp_2 = MAX(temp_1,(SI_Long)0L);
	temp_1 = IFIX(number_of_columns_1);
	left_edge_column = MIN(temp_2,temp_1);
	temp_1 = IFIX(top_edge_of_rectangle) / IFIX(tile_size);
	temp_2 = MAX(temp_1,(SI_Long)0L);
	temp_1 = IFIX(number_of_rows_1);
	top_edge_column = MIN(temp_2,temp_1);
	temp_1 = IFIX(FIXNUM_SUB1(right_edge_of_rectangle)) / IFIX(tile_size);
	temp_2 = MAX(temp_1,left_edge_column);
	temp_1 = IFIX(number_of_columns_1);
	right_edge_column = MIN(temp_2,temp_1);
	temp_1 = IFIX(FIXNUM_SUB1(bottom_edge_of_rectangle)) / IFIX(tile_size);
	temp_2 = MAX(temp_1,top_edge_column);
	temp_1 = IFIX(number_of_rows_1);
	bottom_edge_column = MIN(temp_2,temp_1);
	tile_to_paint = Nil;
	i = top_edge_column;
	ab_loop_bind_ = bottom_edge_column;
      next_loop:
	if (i > ab_loop_bind_)
	    goto end_loop;
	j = left_edge_column;
	ab_loop_bind__1 = right_edge_column;
      next_loop_1:
	if (j > ab_loop_bind__1)
	    goto end_loop_1;
	tile_to_paint = FIXNUM_LE(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
		(SI_Long)1L),Maximum_in_place_array_size) ? 
		ISVREF(tile_arrays,i + IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(i >>  -  - (SI_Long)10L) + 
		(SI_Long)2L),i & (SI_Long)1023L),(SI_Long)1L),
		Maximum_in_place_array_size) ? 
		ISVREF(FIXNUM_LE(ISVREF(tile_arrays,(SI_Long)1L),
		Maximum_in_place_array_size) ? ISVREF(tile_arrays,i + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(i >>  -  - (SI_Long)10L) + 
		(SI_Long)2L),i & (SI_Long)1023L),j + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,(SI_Long)1L),
		Maximum_in_place_array_size) ? ISVREF(tile_arrays,i + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(i >>  -  - (SI_Long)10L) + 
		(SI_Long)2L),i & (SI_Long)1023L),(j >>  -  - (SI_Long)10L) 
		+ (SI_Long)2L),j & (SI_Long)1023L);
	x_offset = j * IFIX(tile_size);
	y_offset = i * IFIX(tile_size);
	left_edge_of_rectangle_1 = IFIX(left_edge_of_rectangle) - x_offset;
	right_edge_of_rectangle_1 = IFIX(right_edge_of_rectangle) - x_offset;
	top_edge_of_rectangle_1 = IFIX(top_edge_of_rectangle) - y_offset;
	bottom_edge_of_rectangle_1 = IFIX(bottom_edge_of_rectangle) - y_offset;
	fill_rectangle_on_scratchpad_raster_1(tile_to_paint,
		scratchpad_raster_type,FIX(left_edge_of_rectangle_1),
		FIX(top_edge_of_rectangle_1),
		FIX(right_edge_of_rectangle_1),
		FIX(bottom_edge_of_rectangle_1),color_value);
	j = j + (SI_Long)1L;
	goto next_loop_1;
      end_loop_1:;
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:;
	Current_x_offset_for_stored_raster_qm = temp;
    }
    else
	fill_rectangle_on_scratchpad_raster_1(scratchpad_raster,
		scratchpad_raster_type,left_edge_of_rectangle,
		top_edge_of_rectangle,right_edge_of_rectangle,
		bottom_edge_of_rectangle,color_value);
    return VALUES_1(Nil);
}

/* FILL-RECTANGLE-ON-SCRATCHPAD-RASTER-1 */
Object fill_rectangle_on_scratchpad_raster_1(scratchpad_raster,
	    scratchpad_raster_type,left_edge_of_rectangle,
	    top_edge_of_rectangle,right_edge_of_rectangle,
	    bottom_edge_of_rectangle,color_value)
    Object scratchpad_raster, scratchpad_raster_type, left_edge_of_rectangle;
    Object top_edge_of_rectangle, right_edge_of_rectangle;
    Object bottom_edge_of_rectangle, color_value;
{
    x_note_fn_call(51,5);
    if (EQ(scratchpad_raster_type,Qx11_pixmap))
	g2ext_p_fill_rect(IFIX(scratchpad_raster),
		IFIX(left_edge_of_rectangle),IFIX(top_edge_of_rectangle),
		IFIX(FIXNUM_MINUS(right_edge_of_rectangle,
		left_edge_of_rectangle)),
		IFIX(FIXNUM_MINUS(bottom_edge_of_rectangle,
		top_edge_of_rectangle)),IFIX(color_value));
    return VALUES_1(Nil);
}

static Object Qpaint_solid_rectangle_in_current_scratchpad_raster;  /* paint-solid-rectangle-in-current-scratchpad-raster */

/* PAINT-SOLID-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER */
Object paint_solid_rectangle_in_current_scratchpad_raster(clipped_left_edge,
	    clipped_top_edge,clipped_right_edge,clipped_bottom_edge,
	    color_value)
    Object clipped_left_edge, clipped_top_edge, clipped_right_edge;
    Object clipped_bottom_edge, color_value;
{
    Object index_of_top_of_backtrace_stack, temp, svref_arg_2, tracep;
    Object byte_count_before, current_icp_write_trace_level, tracep_1;
    Object byte_count_before_1, result_of_write, temp_1, goal_color_value;
    Object scratchpad_raster, ab_loop_list_, color_value_for_this_raster;
    Object ab_loop_list__1, foreground_layer_p, resumable_icp_state_1;
    Object icp_suspend_1, top, key;
    Declare_special(3);
    Object result;

    x_note_fn_call(51,6);
    if (Disable_resumability) {
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_solid_rectangle_in_current_scratchpad_raster;
	  }
	  if (EQ(Current_scratchpad_raster_type,Qicp)) {
	      icp_message_functions_icp_prologue(Qpaint_solid_rectangle_in_current_scratchpad_raster);
	      start_writing_icp_message(FIX((SI_Long)32L));
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_solid_rectangle_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_left_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_integer(clipped_left_edge);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_left_edge,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(clipped_left_edge);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_top_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_integer(clipped_top_edge);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_top_edge,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(clipped_top_edge);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_right_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_integer(clipped_right_edge);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_right_edge,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(clipped_right_edge);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_bottom_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_integer(clipped_bottom_edge);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_bottom_edge,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(clipped_bottom_edge);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_unsigned_integer(color_value);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			result_of_write = 
				write_icp_unsigned_integer(color_value);
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_solid_rectangle_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		  POP_SPECIAL();
	      }
	      else {
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_left_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(clipped_left_edge);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_left_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(clipped_left_edge);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qclipped_top_edge,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(clipped_top_edge);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_top_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(clipped_top_edge);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_right_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_integer(clipped_right_edge);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_right_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(clipped_right_edge);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_bottom_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_integer(clipped_bottom_edge);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_bottom_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(clipped_bottom_edge);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_unsigned_integer(color_value);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_unsigned_integer(color_value);
	      }
	  }
	  else if (EQ(Current_scratchpad_raster_type,Qprinter)) {
	      temp_1 = aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)32L));
	      FUNCALL_5(temp_1,clipped_left_edge,clipped_top_edge,
		      clipped_right_edge,clipped_bottom_edge,color_value);
	  }
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p)
		  fill_rectangle_on_scratchpad_raster(Current_scratchpad_raster,
			  Current_scratchpad_raster_type,clipped_left_edge,
			  clipped_top_edge,clipped_right_edge,
			  clipped_bottom_edge,color_value);
	      goto next_loop;
	    end_loop:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qpaint_solid_rectangle_in_current_scratchpad_raster,
			top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qpaint_solid_rectangle_in_current_scratchpad_raster,
			top,Nil);
		goto end_paint_solid_rectangle_in_current_scratchpad_raster;
	    }
	}
	clipped_left_edge = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : clipped_left_edge;
	clipped_top_edge = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : clipped_top_edge;
	clipped_right_edge = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : clipped_right_edge;
	clipped_bottom_edge = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : clipped_bottom_edge;
	color_value = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
		 TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : color_value;
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_solid_rectangle_in_current_scratchpad_raster;
	  }
	  key = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		  TRUEP(Nil)) &&  
		  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		  resumable_icp_pop() : Current_scratchpad_raster_type;
	  if (EQ(key,Qicp)) {
	      if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) {
		  temp_1 = resumable_icp_pop();
		  if (! !(FIXNUMP(temp_1) && FIXNUM_LE(FIX((SI_Long)-128L),
			  temp_1) && FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
		      switch (INTEGER_TO_CHAR(temp_1)) {
			case 1:
			  goto l1;
			  break;
			case 2:
			  goto l2;
			  break;
			default:
			  break;
		      }
	      }
	      icp_message_functions_icp_prologue(Qpaint_solid_rectangle_in_current_scratchpad_raster);
	    l1:
	      if (EQ(icp_suspend_1,
		      start_writing_icp_message(FIX((SI_Long)32L)))) {
		  resumable_icp_push(FIX((SI_Long)1L));
		  temp_1 = Icp_suspend;
		  goto end_block;
	      }
	    l2:
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_solid_rectangle_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) 
			    : TRUEP(Nil)) {
			temp_1 = resumable_icp_pop();
			if (! !(FIXNUMP(temp_1) && 
				FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
				FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			    switch (INTEGER_TO_CHAR(temp_1)) {
			      case 1:
				goto l1_1;
				break;
			      case 2:
				goto l2_1;
				break;
			      case 3:
				goto l3;
				break;
			      case 4:
				goto l4;
				break;
			      case 5:
				goto l5;
				break;
			      default:
				break;
			    }
		    }
		  l1_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_left_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_integer(clipped_left_edge))) {
			      resumable_icp_push(FIX((SI_Long)1L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_left_edge,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_integer(clipped_left_edge))) {
			resumable_icp_push(FIX((SI_Long)1L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l2_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_top_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_integer(clipped_top_edge))) {
			      resumable_icp_push(FIX((SI_Long)2L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_top_edge,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_integer(clipped_top_edge))) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l3:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_right_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_integer(clipped_right_edge))) {
			      resumable_icp_push(FIX((SI_Long)3L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_right_edge,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_integer(clipped_right_edge))) {
			resumable_icp_push(FIX((SI_Long)3L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l4:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_bottom_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_integer(clipped_bottom_edge))) {
			      resumable_icp_push(FIX((SI_Long)4L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_bottom_edge,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_integer(clipped_bottom_edge))) {
			resumable_icp_push(FIX((SI_Long)4L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l5:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_unsigned_integer(color_value))) {
			      resumable_icp_push(FIX((SI_Long)5L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			  temp_1 = result_of_write;
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_unsigned_integer(color_value))) {
			resumable_icp_push(FIX((SI_Long)5L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		    else
			temp_1 = Nil;
		    goto end_block_1;
		  end_block_1:
		    if (EQ(icp_suspend_1,temp_1)) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			POP_SPECIAL();
			goto end_block;
		    }
		    else
			result_of_write = Nil;
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_solid_rectangle_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		    temp_1 = result_of_write;
		  POP_SPECIAL();
	      }
	      else {
		  if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			  TRUEP(Nil)) {
		      temp_1 = resumable_icp_pop();
		      if (! !(FIXNUMP(temp_1) && 
			      FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
			      FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			  switch (INTEGER_TO_CHAR(temp_1)) {
			    case 1:
			      goto l1_2;
			      break;
			    case 2:
			      goto l2_2;
			      break;
			    case 3:
			      goto l3_1;
			      break;
			    case 4:
			      goto l4_1;
			      break;
			    case 5:
			      goto l5_1;
			      break;
			    default:
			      break;
			  }
		  }
		l1_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_left_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_integer(clipped_left_edge))) {
			    resumable_icp_push(FIX((SI_Long)1L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_left_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_integer(clipped_left_edge))) {
		      resumable_icp_push(FIX((SI_Long)1L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l2_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qclipped_top_edge,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_integer(clipped_top_edge))) {
			    resumable_icp_push(FIX((SI_Long)2L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_top_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_integer(clipped_top_edge))) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l3_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_right_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_integer(clipped_right_edge))) {
			    resumable_icp_push(FIX((SI_Long)3L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_right_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_integer(clipped_right_edge))) {
		      resumable_icp_push(FIX((SI_Long)3L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l4_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_bottom_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_integer(clipped_bottom_edge))) {
			    resumable_icp_push(FIX((SI_Long)4L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_bottom_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_integer(clipped_bottom_edge))) {
		      resumable_icp_push(FIX((SI_Long)4L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l5_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_unsigned_integer(color_value))) {
			    resumable_icp_push(FIX((SI_Long)5L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			temp_1 = result_of_write;
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_unsigned_integer(color_value))) {
		      resumable_icp_push(FIX((SI_Long)5L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		  else
		      temp_1 = Nil;
		  goto end_block_2;
		end_block_2:
		  if (EQ(icp_suspend_1,temp_1)) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block;
		  }
		  else
		      temp_1 = Nil;
	      }
	      goto end_block;
	    end_block:
	      if (EQ(icp_suspend_1,temp_1)) {
		  resumable_icp_push(key);
		  resumable_icp_push(color_value);
		  resumable_icp_push(clipped_bottom_edge);
		  resumable_icp_push(clipped_right_edge);
		  resumable_icp_push(clipped_top_edge);
		  resumable_icp_push(clipped_left_edge);
		  resumable_icp_push(Qpaint_solid_rectangle_in_current_scratchpad_raster);
		  result = VALUES_1(Icp_suspend);
		  POP_SPECIAL();
		  goto end_paint_solid_rectangle_in_current_scratchpad_raster;
	      }
	  }
	  else if (EQ(key,Qprinter)) {
	      temp_1 = aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)32L));
	      FUNCALL_5(temp_1,clipped_left_edge,clipped_top_edge,
		      clipped_right_edge,clipped_bottom_edge,color_value);
	  }
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop_1:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop_1;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop_1;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p)
		  fill_rectangle_on_scratchpad_raster(Current_scratchpad_raster,
			  Current_scratchpad_raster_type,clipped_left_edge,
			  clipped_top_edge,clipped_right_edge,
			  clipped_bottom_edge,color_value);
	      goto next_loop_1;
	    end_loop_1:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    result = VALUES_1(temp_1);
  end_paint_solid_rectangle_in_current_scratchpad_raster:
    return result;
}

static Object Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster;  /* handle-icp-paint-solid-rectangle-in-current-scratchpad-raster */

/* HANDLE-ICP-PAINT-SOLID-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER */
Object handle_icp_paint_solid_rectangle_in_current_scratchpad_raster()
{
    Object tracep, byte_count_before, current_icp_read_trace_level, tracep_1;
    Object byte_count_before_1, result_of_read, clipped_left_edge;
    Object clipped_top_edge, clipped_right_edge, clipped_bottom_edge;
    Object color_value, temp, resumable_icp_state_1, icp_suspend_1, top, value;
    Declare_special(2);
    Object result;

    x_note_fn_call(51,7);
    if (Disable_resumability) {
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_solid_rectangle_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_left_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_left_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_left_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  clipped_left_edge = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_top_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_top_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_top_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  clipped_top_edge = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_right_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_right_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_right_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  clipped_right_edge = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_bottom_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_bottom_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_bottom_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  clipped_bottom_edge = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_unsigned_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  color_value = read_icp_unsigned_integer();
	      result_of_read = 
		      paint_solid_rectangle_in_current_scratchpad_raster(clipped_left_edge,
		      clipped_top_edge,clipped_right_edge,
		      clipped_bottom_edge,color_value);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_solid_rectangle_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_left_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_left_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_left_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else
		clipped_left_edge = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_top_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_top_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_top_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else
		clipped_top_edge = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_right_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_right_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_right_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else
		clipped_right_edge = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_bottom_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_bottom_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_bottom_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else
		clipped_bottom_edge = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_unsigned_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else
		color_value = read_icp_unsigned_integer();
	    paint_solid_rectangle_in_current_scratchpad_raster(clipped_left_edge,
		    clipped_top_edge,clipped_right_edge,
		    clipped_bottom_edge,color_value);
	}
	temp = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( 
		    !EQ(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster,
		    top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster,
			top,Nil);
		goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
	    }
	}
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_solid_rectangle_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  clipped_left_edge = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_left_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_left_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_left_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		  }
		  clipped_left_edge = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  clipped_top_edge = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_top_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(clipped_left_edge);
			resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_top_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_top_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		  }
		  clipped_top_edge = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  clipped_right_edge = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_right_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(clipped_top_edge);
			resumable_icp_push(clipped_left_edge);
			resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_right_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_right_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		  }
		  clipped_right_edge = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  clipped_bottom_edge = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_bottom_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(clipped_right_edge);
			resumable_icp_push(clipped_top_edge);
			resumable_icp_push(clipped_left_edge);
			resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_bottom_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_bottom_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_right_edge);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		  }
		  clipped_bottom_edge = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  color_value = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_unsigned_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(clipped_bottom_edge);
			resumable_icp_push(clipped_right_edge);
			resumable_icp_push(clipped_top_edge);
			resumable_icp_push(clipped_left_edge);
			resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_bottom_edge);
		      resumable_icp_push(clipped_right_edge);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		  }
		  color_value = value;
	      }
	      result_of_read = 
		      paint_solid_rectangle_in_current_scratchpad_raster(clipped_left_edge,
		      clipped_top_edge,clipped_right_edge,
		      clipped_bottom_edge,color_value);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_solid_rectangle_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		clipped_left_edge = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_left_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_left_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_left_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		}
		clipped_left_edge = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		clipped_top_edge = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_top_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_top_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_top_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(clipped_left_edge);
		    resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		}
		clipped_top_edge = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		clipped_right_edge = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_right_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_right_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_right_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(clipped_top_edge);
		    resumable_icp_push(clipped_left_edge);
		    resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		}
		clipped_right_edge = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		clipped_bottom_edge = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_bottom_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_right_edge);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_bottom_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_bottom_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(clipped_right_edge);
		    resumable_icp_push(clipped_top_edge);
		    resumable_icp_push(clipped_left_edge);
		    resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		}
		clipped_bottom_edge = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		color_value = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_bottom_edge);
		      resumable_icp_push(clipped_right_edge);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(clipped_bottom_edge);
		    resumable_icp_push(clipped_right_edge);
		    resumable_icp_push(clipped_top_edge);
		    resumable_icp_push(clipped_left_edge);
		    resumable_icp_push(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster;
		}
		color_value = value;
	    }
	    paint_solid_rectangle_in_current_scratchpad_raster(clipped_left_edge,
		    clipped_top_edge,clipped_right_edge,
		    clipped_bottom_edge,color_value);
	}
	temp = Nil;
    }
    result = VALUES_1(temp);
  end_handle_icp_paint_solid_rectangle_in_current_scratchpad_raster:
    return result;
}

static Object Qpaint_clearing_rectangle_in_current_scratchpad_raster;  /* paint-clearing-rectangle-in-current-scratchpad-raster */

/* PAINT-CLEARING-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER */
Object paint_clearing_rectangle_in_current_scratchpad_raster(clipped_left_edge,
	    clipped_top_edge,clipped_right_edge,clipped_bottom_edge,
	    color_value)
    Object clipped_left_edge, clipped_top_edge, clipped_right_edge;
    Object clipped_bottom_edge, color_value;
{
    Object index_of_top_of_backtrace_stack, temp, svref_arg_2, tracep;
    Object byte_count_before, current_icp_write_trace_level, tracep_1;
    Object byte_count_before_1, result_of_write, temp_1;
    Object paint_only_target_monochrome_raster_p, goal_color_value;
    Object scratchpad_raster, ab_loop_list_, color_value_for_this_raster;
    Object ab_loop_list__1, foreground_layer_p, resumable_icp_state_1;
    Object icp_suspend_1, top, key;
    Declare_special(3);
    Object result;

    x_note_fn_call(51,8);
    if (Disable_resumability) {
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_clearing_rectangle_in_current_scratchpad_raster;
	  }
	  if (EQ(Current_scratchpad_raster_type,Qicp)) {
	      icp_message_functions_icp_prologue(Qpaint_clearing_rectangle_in_current_scratchpad_raster);
	      start_writing_icp_message(FIX((SI_Long)193L));
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_clearing_rectangle_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_left_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_integer(clipped_left_edge);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_left_edge,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(clipped_left_edge);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_top_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_integer(clipped_top_edge);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_top_edge,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(clipped_top_edge);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_right_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_integer(clipped_right_edge);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_right_edge,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(clipped_right_edge);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_bottom_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_integer(clipped_bottom_edge);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_bottom_edge,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(clipped_bottom_edge);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_unsigned_integer(color_value);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			result_of_write = 
				write_icp_unsigned_integer(color_value);
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_clearing_rectangle_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		  POP_SPECIAL();
	      }
	      else {
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_left_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(clipped_left_edge);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_left_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(clipped_left_edge);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qclipped_top_edge,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(clipped_top_edge);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_top_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(clipped_top_edge);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_right_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_integer(clipped_right_edge);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_right_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(clipped_right_edge);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_bottom_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_integer(clipped_bottom_edge);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_bottom_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(clipped_bottom_edge);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_unsigned_integer(color_value);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_unsigned_integer(color_value);
	      }
	  }
	  else if (EQ(Current_scratchpad_raster_type,Qprinter)) {
	      temp_1 = aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)193L));
	      FUNCALL_5(temp_1,clipped_left_edge,clipped_top_edge,
		      clipped_right_edge,clipped_bottom_edge,color_value);
	  }
	  else {
	      paint_only_target_monochrome_raster_p = Nil;
	      PUSH_SPECIAL(Paint_only_target_monochrome_raster_p,paint_only_target_monochrome_raster_p,
		      0);
		goal_color_value = color_value;
		scratchpad_raster = Nil;
		ab_loop_list_ = On_monochrome_raster_list_p ? 
			Current_scratchpad_raster_list : list_constant;
		color_value_for_this_raster = Nil;
		ab_loop_list__1 = On_monochrome_raster_list_p ? 
			Current_scratchpad_color_value_list : list_constant;
	      next_loop:
		if ( !TRUEP(ab_loop_list_))
		    goto end_loop;
		scratchpad_raster = M_CAR(ab_loop_list_);
		ab_loop_list_ = M_CDR(ab_loop_list_);
		if ( !TRUEP(ab_loop_list__1))
		    goto end_loop;
		color_value_for_this_raster = M_CAR(ab_loop_list__1);
		ab_loop_list__1 = M_CDR(ab_loop_list__1);
		foreground_layer_p = On_monochrome_raster_list_p ? 
			(FIXNUM_EQ(goal_color_value,
			color_value_for_this_raster) ? T : Nil) : Qnil;
		if (On_monochrome_raster_list_p) {
		    color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			    FIX((SI_Long)0L);
		    Current_scratchpad_raster = scratchpad_raster;
		}
		if ( !TRUEP(On_monochrome_raster_list_p) ||  
			!TRUEP(Paint_only_target_monochrome_raster_p) || 
			foreground_layer_p)
		    fill_rectangle_on_scratchpad_raster(Current_scratchpad_raster,
			    Current_scratchpad_raster_type,
			    clipped_left_edge,clipped_top_edge,
			    clipped_right_edge,clipped_bottom_edge,
			    color_value);
		goto next_loop;
	      end_loop:;
	      POP_SPECIAL();
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( 
		    !EQ(Qpaint_clearing_rectangle_in_current_scratchpad_raster,
		    top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qpaint_clearing_rectangle_in_current_scratchpad_raster,
			top,Nil);
		goto end_paint_clearing_rectangle_in_current_scratchpad_raster;
	    }
	}
	clipped_left_edge = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : clipped_left_edge;
	clipped_top_edge = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : clipped_top_edge;
	clipped_right_edge = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : clipped_right_edge;
	clipped_bottom_edge = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : clipped_bottom_edge;
	color_value = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
		 TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : color_value;
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_clearing_rectangle_in_current_scratchpad_raster;
	  }
	  key = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		  TRUEP(Nil)) &&  
		  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		  resumable_icp_pop() : Current_scratchpad_raster_type;
	  if (EQ(key,Qicp)) {
	      if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) {
		  temp_1 = resumable_icp_pop();
		  if (! !(FIXNUMP(temp_1) && FIXNUM_LE(FIX((SI_Long)-128L),
			  temp_1) && FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
		      switch (INTEGER_TO_CHAR(temp_1)) {
			case 1:
			  goto l1;
			  break;
			case 2:
			  goto l2;
			  break;
			default:
			  break;
		      }
	      }
	      icp_message_functions_icp_prologue(Qpaint_clearing_rectangle_in_current_scratchpad_raster);
	    l1:
	      if (EQ(icp_suspend_1,
		      start_writing_icp_message(FIX((SI_Long)193L)))) {
		  resumable_icp_push(FIX((SI_Long)1L));
		  temp_1 = Icp_suspend;
		  goto end_block;
	      }
	    l2:
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_clearing_rectangle_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) 
			    : TRUEP(Nil)) {
			temp_1 = resumable_icp_pop();
			if (! !(FIXNUMP(temp_1) && 
				FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
				FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			    switch (INTEGER_TO_CHAR(temp_1)) {
			      case 1:
				goto l1_1;
				break;
			      case 2:
				goto l2_1;
				break;
			      case 3:
				goto l3;
				break;
			      case 4:
				goto l4;
				break;
			      case 5:
				goto l5;
				break;
			      default:
				break;
			    }
		    }
		  l1_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_left_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_integer(clipped_left_edge))) {
			      resumable_icp_push(FIX((SI_Long)1L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_left_edge,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_integer(clipped_left_edge))) {
			resumable_icp_push(FIX((SI_Long)1L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l2_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_top_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_integer(clipped_top_edge))) {
			      resumable_icp_push(FIX((SI_Long)2L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_top_edge,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_integer(clipped_top_edge))) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l3:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_right_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_integer(clipped_right_edge))) {
			      resumable_icp_push(FIX((SI_Long)3L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_right_edge,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_integer(clipped_right_edge))) {
			resumable_icp_push(FIX((SI_Long)3L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l4:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qclipped_bottom_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_integer(clipped_bottom_edge))) {
			      resumable_icp_push(FIX((SI_Long)4L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qclipped_bottom_edge,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_integer(clipped_bottom_edge))) {
			resumable_icp_push(FIX((SI_Long)4L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l5:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_unsigned_integer(color_value))) {
			      resumable_icp_push(FIX((SI_Long)5L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			  temp_1 = result_of_write;
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_unsigned_integer(color_value))) {
			resumable_icp_push(FIX((SI_Long)5L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		    else
			temp_1 = Nil;
		    goto end_block_1;
		  end_block_1:
		    if (EQ(icp_suspend_1,temp_1)) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			POP_SPECIAL();
			goto end_block;
		    }
		    else
			result_of_write = Nil;
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_clearing_rectangle_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		    temp_1 = result_of_write;
		  POP_SPECIAL();
	      }
	      else {
		  if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			  TRUEP(Nil)) {
		      temp_1 = resumable_icp_pop();
		      if (! !(FIXNUMP(temp_1) && 
			      FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
			      FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			  switch (INTEGER_TO_CHAR(temp_1)) {
			    case 1:
			      goto l1_2;
			      break;
			    case 2:
			      goto l2_2;
			      break;
			    case 3:
			      goto l3_1;
			      break;
			    case 4:
			      goto l4_1;
			      break;
			    case 5:
			      goto l5_1;
			      break;
			    default:
			      break;
			  }
		  }
		l1_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_left_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_integer(clipped_left_edge))) {
			    resumable_icp_push(FIX((SI_Long)1L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_left_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_integer(clipped_left_edge))) {
		      resumable_icp_push(FIX((SI_Long)1L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l2_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qclipped_top_edge,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_integer(clipped_top_edge))) {
			    resumable_icp_push(FIX((SI_Long)2L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_top_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_integer(clipped_top_edge))) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l3_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_right_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_integer(clipped_right_edge))) {
			    resumable_icp_push(FIX((SI_Long)3L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_right_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_integer(clipped_right_edge))) {
		      resumable_icp_push(FIX((SI_Long)3L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l4_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qclipped_bottom_edge,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_integer(clipped_bottom_edge))) {
			    resumable_icp_push(FIX((SI_Long)4L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qclipped_bottom_edge,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_integer(clipped_bottom_edge))) {
		      resumable_icp_push(FIX((SI_Long)4L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l5_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_unsigned_integer(color_value))) {
			    resumable_icp_push(FIX((SI_Long)5L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			temp_1 = result_of_write;
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_unsigned_integer(color_value))) {
		      resumable_icp_push(FIX((SI_Long)5L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		  else
		      temp_1 = Nil;
		  goto end_block_2;
		end_block_2:
		  if (EQ(icp_suspend_1,temp_1)) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block;
		  }
		  else
		      temp_1 = Nil;
	      }
	      goto end_block;
	    end_block:
	      if (EQ(icp_suspend_1,temp_1)) {
		  resumable_icp_push(key);
		  resumable_icp_push(color_value);
		  resumable_icp_push(clipped_bottom_edge);
		  resumable_icp_push(clipped_right_edge);
		  resumable_icp_push(clipped_top_edge);
		  resumable_icp_push(clipped_left_edge);
		  resumable_icp_push(Qpaint_clearing_rectangle_in_current_scratchpad_raster);
		  result = VALUES_1(Icp_suspend);
		  POP_SPECIAL();
		  goto end_paint_clearing_rectangle_in_current_scratchpad_raster;
	      }
	  }
	  else if (EQ(key,Qprinter)) {
	      temp_1 = aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)193L));
	      FUNCALL_5(temp_1,clipped_left_edge,clipped_top_edge,
		      clipped_right_edge,clipped_bottom_edge,color_value);
	  }
	  else {
	      paint_only_target_monochrome_raster_p = Nil;
	      PUSH_SPECIAL(Paint_only_target_monochrome_raster_p,paint_only_target_monochrome_raster_p,
		      0);
		goal_color_value = color_value;
		scratchpad_raster = Nil;
		ab_loop_list_ = On_monochrome_raster_list_p ? 
			Current_scratchpad_raster_list : list_constant;
		color_value_for_this_raster = Nil;
		ab_loop_list__1 = On_monochrome_raster_list_p ? 
			Current_scratchpad_color_value_list : list_constant;
	      next_loop_1:
		if ( !TRUEP(ab_loop_list_))
		    goto end_loop_1;
		scratchpad_raster = M_CAR(ab_loop_list_);
		ab_loop_list_ = M_CDR(ab_loop_list_);
		if ( !TRUEP(ab_loop_list__1))
		    goto end_loop_1;
		color_value_for_this_raster = M_CAR(ab_loop_list__1);
		ab_loop_list__1 = M_CDR(ab_loop_list__1);
		foreground_layer_p = On_monochrome_raster_list_p ? 
			(FIXNUM_EQ(goal_color_value,
			color_value_for_this_raster) ? T : Nil) : Qnil;
		if (On_monochrome_raster_list_p) {
		    color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			    FIX((SI_Long)0L);
		    Current_scratchpad_raster = scratchpad_raster;
		}
		if ( !TRUEP(On_monochrome_raster_list_p) ||  
			!TRUEP(Paint_only_target_monochrome_raster_p) || 
			foreground_layer_p)
		    fill_rectangle_on_scratchpad_raster(Current_scratchpad_raster,
			    Current_scratchpad_raster_type,
			    clipped_left_edge,clipped_top_edge,
			    clipped_right_edge,clipped_bottom_edge,
			    color_value);
		goto next_loop_1;
	      end_loop_1:;
	      POP_SPECIAL();
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    result = VALUES_1(temp_1);
  end_paint_clearing_rectangle_in_current_scratchpad_raster:
    return result;
}

static Object Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;  /* handle-icp-paint-clearing-rectangle-in-current-scratchpad-raster */

/* HANDLE-ICP-PAINT-CLEARING-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER */
Object handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster()
{
    Object tracep, byte_count_before, current_icp_read_trace_level, tracep_1;
    Object byte_count_before_1, result_of_read, clipped_left_edge;
    Object clipped_top_edge, clipped_right_edge, clipped_bottom_edge;
    Object color_value, temp, resumable_icp_state_1, icp_suspend_1, top, value;
    Declare_special(2);
    Object result;

    x_note_fn_call(51,9);
    if (Disable_resumability) {
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_clearing_rectangle_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_left_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_left_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_left_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  clipped_left_edge = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_top_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_top_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_top_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  clipped_top_edge = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_right_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_right_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_right_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  clipped_right_edge = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_bottom_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_bottom_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_bottom_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  clipped_bottom_edge = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_unsigned_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  color_value = read_icp_unsigned_integer();
	      result_of_read = 
		      paint_clearing_rectangle_in_current_scratchpad_raster(clipped_left_edge,
		      clipped_top_edge,clipped_right_edge,
		      clipped_bottom_edge,color_value);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_clearing_rectangle_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_left_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_left_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_left_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else
		clipped_left_edge = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_top_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_top_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_top_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else
		clipped_top_edge = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_right_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_right_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_right_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else
		clipped_right_edge = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_bottom_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_bottom_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_bottom_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else
		clipped_bottom_edge = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_unsigned_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else
		color_value = read_icp_unsigned_integer();
	    paint_clearing_rectangle_in_current_scratchpad_raster(clipped_left_edge,
		    clipped_top_edge,clipped_right_edge,
		    clipped_bottom_edge,color_value);
	}
	temp = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( 
		    !EQ(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster,
		    top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster,
			top,Nil);
		goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
	    }
	}
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_clearing_rectangle_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  clipped_left_edge = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_left_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_left_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_left_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		  }
		  clipped_left_edge = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  clipped_top_edge = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_top_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(clipped_left_edge);
			resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_top_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_top_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		  }
		  clipped_top_edge = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  clipped_right_edge = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_right_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(clipped_top_edge);
			resumable_icp_push(clipped_left_edge);
			resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_right_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_right_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		  }
		  clipped_right_edge = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  clipped_bottom_edge = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qclipped_bottom_edge,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(clipped_right_edge);
			resumable_icp_push(clipped_top_edge);
			resumable_icp_push(clipped_left_edge);
			resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qclipped_bottom_edge,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    clipped_bottom_edge = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_right_edge);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		  }
		  clipped_bottom_edge = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  color_value = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_unsigned_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(clipped_bottom_edge);
			resumable_icp_push(clipped_right_edge);
			resumable_icp_push(clipped_top_edge);
			resumable_icp_push(clipped_left_edge);
			resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_bottom_edge);
		      resumable_icp_push(clipped_right_edge);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		  }
		  color_value = value;
	      }
	      result_of_read = 
		      paint_clearing_rectangle_in_current_scratchpad_raster(clipped_left_edge,
		      clipped_top_edge,clipped_right_edge,
		      clipped_bottom_edge,color_value);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_clearing_rectangle_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		clipped_left_edge = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_left_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_left_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_left_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		}
		clipped_left_edge = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		clipped_top_edge = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_top_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_top_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_top_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(clipped_left_edge);
		    resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		}
		clipped_top_edge = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		clipped_right_edge = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_right_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_right_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_right_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(clipped_top_edge);
		    resumable_icp_push(clipped_left_edge);
		    resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		}
		clipped_right_edge = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		clipped_bottom_edge = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qclipped_bottom_edge,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_right_edge);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qclipped_bottom_edge,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  clipped_bottom_edge = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(clipped_right_edge);
		    resumable_icp_push(clipped_top_edge);
		    resumable_icp_push(clipped_left_edge);
		    resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		}
		clipped_bottom_edge = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		color_value = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(clipped_bottom_edge);
		      resumable_icp_push(clipped_right_edge);
		      resumable_icp_push(clipped_top_edge);
		      resumable_icp_push(clipped_left_edge);
		      resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(clipped_bottom_edge);
		    resumable_icp_push(clipped_right_edge);
		    resumable_icp_push(clipped_top_edge);
		    resumable_icp_push(clipped_left_edge);
		    resumable_icp_push(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster;
		}
		color_value = value;
	    }
	    paint_clearing_rectangle_in_current_scratchpad_raster(clipped_left_edge,
		    clipped_top_edge,clipped_right_edge,
		    clipped_bottom_edge,color_value);
	}
	temp = Nil;
    }
    result = VALUES_1(temp);
  end_handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster:
    return result;
}

static Object Qpaint_point_in_current_scratchpad_raster;  /* paint-point-in-current-scratchpad-raster */

static Object Qx;                  /* x */

static Object Qy;                  /* y */

/* PAINT-POINT-IN-CURRENT-SCRATCHPAD-RASTER */
Object paint_point_in_current_scratchpad_raster(x,y,color_value)
    Object x, y, color_value;
{
    Object index_of_top_of_backtrace_stack, temp, svref_arg_2, tracep;
    Object byte_count_before, current_icp_write_trace_level, tracep_1;
    Object byte_count_before_1, result_of_write, temp_1, goal_color_value;
    Object scratchpad_raster, ab_loop_list_, color_value_for_this_raster;
    Object ab_loop_list__1, foreground_layer_p, decff_1_arg, gensymed_symbol;
    Object tile_size, tile_arrays, number_of_rows_1, number_of_columns_1;
    Object tile_to_paint, current_scratchpad_raster, resumable_icp_state_1;
    Object icp_suspend_1, top, key;
    SI_Long temp_2, temp_3, left_edge_column, top_edge_column;
    SI_Long right_edge_column, bottom_edge_column, i, ab_loop_bind_, j;
    SI_Long ab_loop_bind__1, x_offset, y_offset, x_1, y_1;
    Declare_special(3);
    Object result;

    x_note_fn_call(51,10);
    if (Disable_resumability) {
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_point_in_current_scratchpad_raster;
	  }
	  if (EQ(Current_scratchpad_raster_type,Qicp)) {
	      icp_message_functions_icp_prologue(Qpaint_point_in_current_scratchpad_raster);
	      start_writing_icp_message(FIX((SI_Long)37L));
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_point_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(x);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(x);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(y);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(y);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_unsigned_integer(color_value);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			result_of_write = 
				write_icp_unsigned_integer(color_value);
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_point_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		  POP_SPECIAL();
	      }
	      else {
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(x);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx,string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(x);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(y);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy,string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(y);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_unsigned_integer(color_value);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_unsigned_integer(color_value);
	      }
	  }
	  else if (EQ(Current_scratchpad_raster_type,Qprinter)) {
	      temp_1 = aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)37L));
	      FUNCALL_3(temp_1,x,y,color_value);
	  }
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p) {
		  if (Current_scratchpad_raster_tiled_p) {
		      temp_1 = Current_x_offset_for_stored_raster_qm;
		      if (Current_x_offset_for_stored_raster_qm) {
			  decff_1_arg = temp_1;
			  x = FIXNUM_MINUS(x,decff_1_arg);
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  y = FIXNUM_MINUS(y,decff_1_arg);
			  Current_x_offset_for_stored_raster_qm = Nil;
		      }
		      gensymed_symbol = Current_scratchpad_raster;
		      tile_size = ISVREF(gensymed_symbol,(SI_Long)2L);
		      tile_arrays = ISVREF(gensymed_symbol,(SI_Long)1L);
		      number_of_rows_1 = FIXNUM_SUB1(ISVREF(tile_arrays,
			      (SI_Long)1L));
		      number_of_columns_1 = 
			      FIXNUM_SUB1(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,(SI_Long)0L + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(SI_Long)2L),
			      (SI_Long)0L),(SI_Long)1L));
		      temp_2 = IFIX(x) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,(SI_Long)0L);
		      temp_2 = IFIX(number_of_columns_1);
		      left_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(y) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,(SI_Long)0L);
		      temp_2 = IFIX(number_of_rows_1);
		      top_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(FIXNUM_SUB1(x)) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,left_edge_column);
		      temp_2 = IFIX(number_of_columns_1);
		      right_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(FIXNUM_SUB1(y)) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,top_edge_column);
		      temp_2 = IFIX(number_of_rows_1);
		      bottom_edge_column = MIN(temp_3,temp_2);
		      tile_to_paint = Nil;
		      i = top_edge_column;
		      ab_loop_bind_ = bottom_edge_column;
		    next_loop_1:
		      if (i > ab_loop_bind_)
			  goto end_loop_1;
		      j = left_edge_column;
		      ab_loop_bind__1 = right_edge_column;
		    next_loop_2:
		      if (j > ab_loop_bind__1)
			  goto end_loop_2;
		      tile_to_paint = 
			      FIXNUM_LE(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(SI_Long)1L),
			      Maximum_in_place_array_size) ? 
			      ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),j + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(j >>  -  - (SI_Long)10L) + 
			      (SI_Long)2L),j & (SI_Long)1023L);
		      x_offset = j * IFIX(tile_size);
		      y_offset = i * IFIX(tile_size);
		      x_1 = IFIX(x) - x_offset;
		      y_1 = IFIX(y) - y_offset;
		      current_scratchpad_raster = tile_to_paint;
		      PUSH_SPECIAL(Current_scratchpad_raster,current_scratchpad_raster,
			      0);
			if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
			    g2ext_p_draw_point(IFIX(Current_scratchpad_raster),
				    x_1,y_1,IFIX(color_value));
		      POP_SPECIAL();
		      j = j + (SI_Long)1L;
		      goto next_loop_2;
		    end_loop_2:;
		      i = i + (SI_Long)1L;
		      goto next_loop_1;
		    end_loop_1:;
		      Current_x_offset_for_stored_raster_qm = temp_1;
		  }
		  else if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
		      g2ext_p_draw_point(IFIX(Current_scratchpad_raster),
			      IFIX(x),IFIX(y),IFIX(color_value));
	      }
	      goto next_loop;
	    end_loop:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qpaint_point_in_current_scratchpad_raster,top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qpaint_point_in_current_scratchpad_raster,top,Nil);
		goto end_paint_point_in_current_scratchpad_raster;
	    }
	}
	x = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : x;
	y = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : y;
	color_value = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
		 TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : color_value;
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_point_in_current_scratchpad_raster;
	  }
	  key = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		  TRUEP(Nil)) &&  
		  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		  resumable_icp_pop() : Current_scratchpad_raster_type;
	  if (EQ(key,Qicp)) {
	      if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) {
		  temp_1 = resumable_icp_pop();
		  if (! !(FIXNUMP(temp_1) && FIXNUM_LE(FIX((SI_Long)-128L),
			  temp_1) && FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
		      switch (INTEGER_TO_CHAR(temp_1)) {
			case 1:
			  goto l1;
			  break;
			case 2:
			  goto l2;
			  break;
			default:
			  break;
		      }
	      }
	      icp_message_functions_icp_prologue(Qpaint_point_in_current_scratchpad_raster);
	    l1:
	      if (EQ(icp_suspend_1,
		      start_writing_icp_message(FIX((SI_Long)37L)))) {
		  resumable_icp_push(FIX((SI_Long)1L));
		  temp_1 = Icp_suspend;
		  goto end_block;
	      }
	    l2:
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_point_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) 
			    : TRUEP(Nil)) {
			temp_1 = resumable_icp_pop();
			if (! !(FIXNUMP(temp_1) && 
				FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
				FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			    switch (INTEGER_TO_CHAR(temp_1)) {
			      case 1:
				goto l1_1;
				break;
			      case 2:
				goto l2_1;
				break;
			      case 3:
				goto l3;
				break;
			      default:
				break;
			    }
		    }
		  l1_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(x))) {
			      resumable_icp_push(FIX((SI_Long)1L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(x))) {
			resumable_icp_push(FIX((SI_Long)1L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l2_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(y))) {
			      resumable_icp_push(FIX((SI_Long)2L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(y))) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l3:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_unsigned_integer(color_value))) {
			      resumable_icp_push(FIX((SI_Long)3L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			  temp_1 = result_of_write;
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_unsigned_integer(color_value))) {
			resumable_icp_push(FIX((SI_Long)3L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		    else
			temp_1 = Nil;
		    goto end_block_1;
		  end_block_1:
		    if (EQ(icp_suspend_1,temp_1)) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			POP_SPECIAL();
			goto end_block;
		    }
		    else
			result_of_write = Nil;
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_point_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		    temp_1 = result_of_write;
		  POP_SPECIAL();
	      }
	      else {
		  if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			  TRUEP(Nil)) {
		      temp_1 = resumable_icp_pop();
		      if (! !(FIXNUMP(temp_1) && 
			      FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
			      FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			  switch (INTEGER_TO_CHAR(temp_1)) {
			    case 1:
			      goto l1_2;
			      break;
			    case 2:
			      goto l2_2;
			      break;
			    case 3:
			      goto l3_1;
			      break;
			    default:
			      break;
			  }
		  }
		l1_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(x))) {
			    resumable_icp_push(FIX((SI_Long)1L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx,string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(x))) {
		      resumable_icp_push(FIX((SI_Long)1L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l2_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(y))) {
			    resumable_icp_push(FIX((SI_Long)2L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy,string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(y))) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l3_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_unsigned_integer(color_value))) {
			    resumable_icp_push(FIX((SI_Long)3L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			temp_1 = result_of_write;
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_unsigned_integer(color_value))) {
		      resumable_icp_push(FIX((SI_Long)3L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		  else
		      temp_1 = Nil;
		  goto end_block_2;
		end_block_2:
		  if (EQ(icp_suspend_1,temp_1)) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block;
		  }
		  else
		      temp_1 = Nil;
	      }
	      goto end_block;
	    end_block:
	      if (EQ(icp_suspend_1,temp_1)) {
		  resumable_icp_push(key);
		  resumable_icp_push(color_value);
		  resumable_icp_push(y);
		  resumable_icp_push(x);
		  resumable_icp_push(Qpaint_point_in_current_scratchpad_raster);
		  result = VALUES_1(Icp_suspend);
		  POP_SPECIAL();
		  goto end_paint_point_in_current_scratchpad_raster;
	      }
	  }
	  else if (EQ(key,Qprinter)) {
	      temp_1 = aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)37L));
	      FUNCALL_3(temp_1,x,y,color_value);
	  }
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop_3:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop_3;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop_3;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p) {
		  if (Current_scratchpad_raster_tiled_p) {
		      temp_1 = Current_x_offset_for_stored_raster_qm;
		      if (Current_x_offset_for_stored_raster_qm) {
			  decff_1_arg = temp_1;
			  x = FIXNUM_MINUS(x,decff_1_arg);
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  y = FIXNUM_MINUS(y,decff_1_arg);
			  Current_x_offset_for_stored_raster_qm = Nil;
		      }
		      gensymed_symbol = Current_scratchpad_raster;
		      tile_size = ISVREF(gensymed_symbol,(SI_Long)2L);
		      tile_arrays = ISVREF(gensymed_symbol,(SI_Long)1L);
		      number_of_rows_1 = FIXNUM_SUB1(ISVREF(tile_arrays,
			      (SI_Long)1L));
		      number_of_columns_1 = 
			      FIXNUM_SUB1(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,(SI_Long)0L + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(SI_Long)2L),
			      (SI_Long)0L),(SI_Long)1L));
		      temp_2 = IFIX(x) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,(SI_Long)0L);
		      temp_2 = IFIX(number_of_columns_1);
		      left_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(y) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,(SI_Long)0L);
		      temp_2 = IFIX(number_of_rows_1);
		      top_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(FIXNUM_SUB1(x)) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,left_edge_column);
		      temp_2 = IFIX(number_of_columns_1);
		      right_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(FIXNUM_SUB1(y)) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,top_edge_column);
		      temp_2 = IFIX(number_of_rows_1);
		      bottom_edge_column = MIN(temp_3,temp_2);
		      tile_to_paint = Nil;
		      i = top_edge_column;
		      ab_loop_bind_ = bottom_edge_column;
		    next_loop_4:
		      if (i > ab_loop_bind_)
			  goto end_loop_4;
		      j = left_edge_column;
		      ab_loop_bind__1 = right_edge_column;
		    next_loop_5:
		      if (j > ab_loop_bind__1)
			  goto end_loop_5;
		      tile_to_paint = 
			      FIXNUM_LE(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(SI_Long)1L),
			      Maximum_in_place_array_size) ? 
			      ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),j + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(j >>  -  - (SI_Long)10L) + 
			      (SI_Long)2L),j & (SI_Long)1023L);
		      x_offset = j * IFIX(tile_size);
		      y_offset = i * IFIX(tile_size);
		      x_1 = IFIX(x) - x_offset;
		      y_1 = IFIX(y) - y_offset;
		      current_scratchpad_raster = tile_to_paint;
		      PUSH_SPECIAL(Current_scratchpad_raster,current_scratchpad_raster,
			      0);
			if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
			    g2ext_p_draw_point(IFIX(Current_scratchpad_raster),
				    x_1,y_1,IFIX(color_value));
		      POP_SPECIAL();
		      j = j + (SI_Long)1L;
		      goto next_loop_5;
		    end_loop_5:;
		      i = i + (SI_Long)1L;
		      goto next_loop_4;
		    end_loop_4:;
		      Current_x_offset_for_stored_raster_qm = temp_1;
		  }
		  else if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
		      g2ext_p_draw_point(IFIX(Current_scratchpad_raster),
			      IFIX(x),IFIX(y),IFIX(color_value));
	      }
	      goto next_loop_3;
	    end_loop_3:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    result = VALUES_1(temp_1);
  end_paint_point_in_current_scratchpad_raster:
    return result;
}

static Object Qhandle_icp_paint_point_in_current_scratchpad_raster;  /* handle-icp-paint-point-in-current-scratchpad-raster */

/* HANDLE-ICP-PAINT-POINT-IN-CURRENT-SCRATCHPAD-RASTER */
Object handle_icp_paint_point_in_current_scratchpad_raster()
{
    Object tracep, byte_count_before, current_icp_read_trace_level, tracep_1;
    Object byte_count_before_1, result_of_read, x, y, color_value, temp;
    Object resumable_icp_state_1, icp_suspend_1, top, value;
    Declare_special(2);
    Object result;

    x_note_fn_call(51,11);
    if (Disable_resumability) {
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_point_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  x = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  y = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_unsigned_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  color_value = read_icp_unsigned_integer();
	      result_of_read = paint_point_in_current_scratchpad_raster(x,
		      y,color_value);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_point_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x = result_of_read;
		POP_SPECIAL();
	    }
	    else
		x = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y = result_of_read;
		POP_SPECIAL();
	    }
	    else
		y = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_unsigned_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else
		color_value = read_icp_unsigned_integer();
	    paint_point_in_current_scratchpad_raster(x,y,color_value);
	}
	temp = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qhandle_icp_paint_point_in_current_scratchpad_raster,
			top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qhandle_icp_paint_point_in_current_scratchpad_raster,
			top,Nil);
		goto end_handle_icp_paint_point_in_current_scratchpad_raster;
	    }
	}
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_point_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  x = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(Qhandle_icp_paint_point_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_point_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_point_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_point_in_current_scratchpad_raster;
		  }
		  x = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  y = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(x);
			resumable_icp_push(Qhandle_icp_paint_point_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_point_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x);
		      resumable_icp_push(Qhandle_icp_paint_point_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_point_in_current_scratchpad_raster;
		  }
		  y = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  color_value = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_unsigned_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(y);
			resumable_icp_push(x);
			resumable_icp_push(Qhandle_icp_paint_point_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_point_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y);
		      resumable_icp_push(x);
		      resumable_icp_push(Qhandle_icp_paint_point_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_point_in_current_scratchpad_raster;
		  }
		  color_value = value;
	      }
	      result_of_read = paint_point_in_current_scratchpad_raster(x,
		      y,color_value);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_point_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		x = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_point_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_point_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(Qhandle_icp_paint_point_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_point_in_current_scratchpad_raster;
		}
		x = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		y = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x);
		      resumable_icp_push(Qhandle_icp_paint_point_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_point_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(x);
		    resumable_icp_push(Qhandle_icp_paint_point_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_point_in_current_scratchpad_raster;
		}
		y = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		color_value = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y);
		      resumable_icp_push(x);
		      resumable_icp_push(Qhandle_icp_paint_point_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_point_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(y);
		    resumable_icp_push(x);
		    resumable_icp_push(Qhandle_icp_paint_point_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_point_in_current_scratchpad_raster;
		}
		color_value = value;
	    }
	    paint_point_in_current_scratchpad_raster(x,y,color_value);
	}
	temp = Nil;
    }
    result = VALUES_1(temp);
  end_handle_icp_paint_point_in_current_scratchpad_raster:
    return result;
}

static Object Qpaint_filled_triangle_in_current_scratchpad_raster;  /* paint-filled-triangle-in-current-scratchpad-raster */

static Object Qx1;                 /* x1 */

static Object Qy1;                 /* y1 */

static Object Qx2;                 /* x2 */

static Object Qy2;                 /* y2 */

static Object Qx3;                 /* x3 */

static Object Qy3;                 /* y3 */

/* PAINT-FILLED-TRIANGLE-IN-CURRENT-SCRATCHPAD-RASTER */
Object paint_filled_triangle_in_current_scratchpad_raster(x1,y1_1,x2,y2,x3,
	    y3,color_value)
    Object x1, y1_1, x2, y2, x3, y3, color_value;
{
    Object index_of_top_of_backtrace_stack, temp, svref_arg_2, tracep;
    Object byte_count_before, current_icp_write_trace_level, tracep_1;
    Object byte_count_before_1, result_of_write, goal_color_value;
    Object scratchpad_raster, ab_loop_list_, color_value_for_this_raster;
    Object ab_loop_list__1, foreground_layer_p, temp_1, decff_1_arg;
    Object gensymed_symbol, tile_size, tile_arrays, number_of_rows_1;
    Object number_of_columns_1, temp_2, tile_to_paint, resumable_icp_state_1;
    Object icp_suspend_1, top, key;
    SI_Long temp_3, temp_4, left_edge_column, top_edge_column;
    SI_Long right_edge_column, bottom_edge_column, i, ab_loop_bind_, j;
    SI_Long ab_loop_bind__1, x_offset, y_offset, x1_1, x2_1, x3_1, y1_2, y2_1;
    SI_Long y3_1;
    Declare_special(3);
    Object result;

    x_note_fn_call(51,12);
    if (Disable_resumability) {
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_filled_triangle_in_current_scratchpad_raster;
	  }
	  if (EQ(Current_scratchpad_raster_type,Qicp)) {
	      icp_message_functions_icp_prologue(Qpaint_filled_triangle_in_current_scratchpad_raster);
	      start_writing_icp_message(FIX((SI_Long)35L));
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_filled_triangle_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(x1);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(x1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(y1_1);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(y1_1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(x2);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(x2);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(y2);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(y2);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx3,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(x3);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx3,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(x3);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy3,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(y3);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy3,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(y3);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_unsigned_integer(color_value);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			result_of_write = 
				write_icp_unsigned_integer(color_value);
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_filled_triangle_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		  POP_SPECIAL();
	      }
	      else {
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(x1);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(x1);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(y1_1);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(y1_1);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(x2);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(x2);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(y2);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(y2);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx3,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(x3);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx3,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(x3);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy3,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(y3);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy3,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(y3);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_unsigned_integer(color_value);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_unsigned_integer(color_value);
	      }
	  }
	  else if (EQ(Current_scratchpad_raster_type,Qprinter))
	      funcall(8,aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)35L)),x1,y1_1,x2,y2,x3,y3,color_value);
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p) {
		  if (Current_scratchpad_raster_tiled_p) {
		      temp_1 = Current_x_offset_for_stored_raster_qm;
		      if (Current_x_offset_for_stored_raster_qm) {
			  decff_1_arg = temp_1;
			  x1 = FIXNUM_MINUS(x1,decff_1_arg);
			  decff_1_arg = temp_1;
			  x2 = FIXNUM_MINUS(x2,decff_1_arg);
			  decff_1_arg = temp_1;
			  x3 = FIXNUM_MINUS(x3,decff_1_arg);
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  y1_1 = FIXNUM_MINUS(y1_1,decff_1_arg);
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  y2 = FIXNUM_MINUS(y2,decff_1_arg);
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  y3 = FIXNUM_MINUS(y3,decff_1_arg);
			  Current_x_offset_for_stored_raster_qm = Nil;
		      }
		      gensymed_symbol = Current_scratchpad_raster;
		      tile_size = ISVREF(gensymed_symbol,(SI_Long)2L);
		      tile_arrays = ISVREF(gensymed_symbol,(SI_Long)1L);
		      number_of_rows_1 = FIXNUM_SUB1(ISVREF(tile_arrays,
			      (SI_Long)1L));
		      number_of_columns_1 = 
			      FIXNUM_SUB1(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,(SI_Long)0L + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(SI_Long)2L),
			      (SI_Long)0L),(SI_Long)1L));
		      temp_2 = FIXNUM_MIN(x1,x2);
		      temp_3 = IFIX(FIXNUM_MIN(temp_2,x3)) / IFIX(tile_size);
		      temp_4 = MAX(temp_3,(SI_Long)0L);
		      temp_3 = IFIX(number_of_columns_1);
		      left_edge_column = MIN(temp_4,temp_3);
		      temp_2 = FIXNUM_MIN(y1_1,y2);
		      temp_3 = IFIX(FIXNUM_MIN(temp_2,y3)) / IFIX(tile_size);
		      temp_4 = MAX(temp_3,(SI_Long)0L);
		      temp_3 = IFIX(number_of_rows_1);
		      top_edge_column = MIN(temp_4,temp_3);
		      temp_2 = FIXNUM_MAX(x1,x2);
		      temp_3 = IFIX(FIXNUM_SUB1(FIXNUM_MAX(temp_2,x3))) / 
			      IFIX(tile_size);
		      temp_4 = MAX(temp_3,left_edge_column);
		      temp_3 = IFIX(number_of_columns_1);
		      right_edge_column = MIN(temp_4,temp_3);
		      temp_2 = FIXNUM_MAX(y1_1,y2);
		      temp_3 = IFIX(FIXNUM_SUB1(FIXNUM_MAX(temp_2,y3))) / 
			      IFIX(tile_size);
		      temp_4 = MAX(temp_3,top_edge_column);
		      temp_3 = IFIX(number_of_rows_1);
		      bottom_edge_column = MIN(temp_4,temp_3);
		      tile_to_paint = Nil;
		      i = top_edge_column;
		      ab_loop_bind_ = bottom_edge_column;
		    next_loop_1:
		      if (i > ab_loop_bind_)
			  goto end_loop_1;
		      j = left_edge_column;
		      ab_loop_bind__1 = right_edge_column;
		    next_loop_2:
		      if (j > ab_loop_bind__1)
			  goto end_loop_2;
		      tile_to_paint = 
			      FIXNUM_LE(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(SI_Long)1L),
			      Maximum_in_place_array_size) ? 
			      ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),j + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(j >>  -  - (SI_Long)10L) + 
			      (SI_Long)2L),j & (SI_Long)1023L);
		      x_offset = j * IFIX(tile_size);
		      y_offset = i * IFIX(tile_size);
		      x1_1 = IFIX(x1) - x_offset;
		      x2_1 = IFIX(x2) - x_offset;
		      x3_1 = IFIX(x3) - x_offset;
		      y1_2 = IFIX(y1_1) - y_offset;
		      y2_1 = IFIX(y2) - y_offset;
		      y3_1 = IFIX(y3) - y_offset;
		      if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
			  g2ext_p_fill_triangle(IFIX(tile_to_paint),x1_1,
				  y1_2,x2_1,y2_1,x3_1,y3_1,IFIX(color_value));
		      j = j + (SI_Long)1L;
		      goto next_loop_2;
		    end_loop_2:;
		      i = i + (SI_Long)1L;
		      goto next_loop_1;
		    end_loop_1:;
		      Current_x_offset_for_stored_raster_qm = temp_1;
		  }
		  else if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
		      g2ext_p_fill_triangle(IFIX(Current_scratchpad_raster),
			      IFIX(x1),IFIX(y1_1),IFIX(x2),IFIX(y2),
			      IFIX(x3),IFIX(y3),IFIX(color_value));
	      }
	      goto next_loop;
	    end_loop:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qpaint_filled_triangle_in_current_scratchpad_raster,
			top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qpaint_filled_triangle_in_current_scratchpad_raster,
			top,Nil);
		goto end_paint_filled_triangle_in_current_scratchpad_raster;
	    }
	}
	x1 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : x1;
	y1_1 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : y1_1;
	x2 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : x2;
	y2 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : y2;
	x3 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : x3;
	y3 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : y3;
	color_value = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
		 TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : color_value;
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_filled_triangle_in_current_scratchpad_raster;
	  }
	  key = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		  TRUEP(Nil)) &&  
		  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		  resumable_icp_pop() : Current_scratchpad_raster_type;
	  if (EQ(key,Qicp)) {
	      if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) {
		  temp_1 = resumable_icp_pop();
		  if (! !(FIXNUMP(temp_1) && FIXNUM_LE(FIX((SI_Long)-128L),
			  temp_1) && FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
		      switch (INTEGER_TO_CHAR(temp_1)) {
			case 1:
			  goto l1;
			  break;
			case 2:
			  goto l2;
			  break;
			default:
			  break;
		      }
	      }
	      icp_message_functions_icp_prologue(Qpaint_filled_triangle_in_current_scratchpad_raster);
	    l1:
	      if (EQ(icp_suspend_1,
		      start_writing_icp_message(FIX((SI_Long)35L)))) {
		  resumable_icp_push(FIX((SI_Long)1L));
		  temp_1 = Icp_suspend;
		  goto end_block;
	      }
	    l2:
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_filled_triangle_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) 
			    : TRUEP(Nil)) {
			temp_1 = resumable_icp_pop();
			if (! !(FIXNUMP(temp_1) && 
				FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
				FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			    switch (INTEGER_TO_CHAR(temp_1)) {
			      case 1:
				goto l1_1;
				break;
			      case 2:
				goto l2_1;
				break;
			      case 3:
				goto l3;
				break;
			      case 4:
				goto l4;
				break;
			      case 5:
				goto l5;
				break;
			      case 6:
				goto l6;
				break;
			      case 7:
				goto l7;
				break;
			      default:
				break;
			    }
		    }
		  l1_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(x1))) {
			      resumable_icp_push(FIX((SI_Long)1L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(x1))) {
			resumable_icp_push(FIX((SI_Long)1L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l2_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
			      resumable_icp_push(FIX((SI_Long)2L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l3:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(x2))) {
			      resumable_icp_push(FIX((SI_Long)3L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(x2))) {
			resumable_icp_push(FIX((SI_Long)3L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l4:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(y2))) {
			      resumable_icp_push(FIX((SI_Long)4L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(y2))) {
			resumable_icp_push(FIX((SI_Long)4L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l5:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx3,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(x3))) {
			      resumable_icp_push(FIX((SI_Long)5L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx3,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(x3))) {
			resumable_icp_push(FIX((SI_Long)5L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l6:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy3,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(y3))) {
			      resumable_icp_push(FIX((SI_Long)6L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy3,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(y3))) {
			resumable_icp_push(FIX((SI_Long)6L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l7:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_unsigned_integer(color_value))) {
			      resumable_icp_push(FIX((SI_Long)7L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			  temp_1 = result_of_write;
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_unsigned_integer(color_value))) {
			resumable_icp_push(FIX((SI_Long)7L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		    else
			temp_1 = Nil;
		    goto end_block_1;
		  end_block_1:
		    if (EQ(icp_suspend_1,temp_1)) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			POP_SPECIAL();
			goto end_block;
		    }
		    else
			result_of_write = Nil;
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_filled_triangle_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		    temp_1 = result_of_write;
		  POP_SPECIAL();
	      }
	      else {
		  if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			  TRUEP(Nil)) {
		      temp_1 = resumable_icp_pop();
		      if (! !(FIXNUMP(temp_1) && 
			      FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
			      FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			  switch (INTEGER_TO_CHAR(temp_1)) {
			    case 1:
			      goto l1_2;
			      break;
			    case 2:
			      goto l2_2;
			      break;
			    case 3:
			      goto l3_1;
			      break;
			    case 4:
			      goto l4_1;
			      break;
			    case 5:
			      goto l5_1;
			      break;
			    case 6:
			      goto l6_1;
			      break;
			    case 7:
			      goto l7_1;
			      break;
			    default:
			      break;
			  }
		  }
		l1_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(x1))) {
			    resumable_icp_push(FIX((SI_Long)1L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(x1))) {
		      resumable_icp_push(FIX((SI_Long)1L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l2_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
			    resumable_icp_push(FIX((SI_Long)2L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l3_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(x2))) {
			    resumable_icp_push(FIX((SI_Long)3L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(x2))) {
		      resumable_icp_push(FIX((SI_Long)3L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l4_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(y2))) {
			    resumable_icp_push(FIX((SI_Long)4L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(y2))) {
		      resumable_icp_push(FIX((SI_Long)4L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l5_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx3,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(x3))) {
			    resumable_icp_push(FIX((SI_Long)5L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx3,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(x3))) {
		      resumable_icp_push(FIX((SI_Long)5L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l6_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy3,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(y3))) {
			    resumable_icp_push(FIX((SI_Long)6L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy3,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(y3))) {
		      resumable_icp_push(FIX((SI_Long)6L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l7_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_unsigned_integer(color_value))) {
			    resumable_icp_push(FIX((SI_Long)7L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			temp_1 = result_of_write;
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_unsigned_integer(color_value))) {
		      resumable_icp_push(FIX((SI_Long)7L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		  else
		      temp_1 = Nil;
		  goto end_block_2;
		end_block_2:
		  if (EQ(icp_suspend_1,temp_1)) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block;
		  }
		  else
		      temp_1 = Nil;
	      }
	      goto end_block;
	    end_block:
	      if (EQ(icp_suspend_1,temp_1)) {
		  resumable_icp_push(key);
		  resumable_icp_push(color_value);
		  resumable_icp_push(y3);
		  resumable_icp_push(x3);
		  resumable_icp_push(y2);
		  resumable_icp_push(x2);
		  resumable_icp_push(y1_1);
		  resumable_icp_push(x1);
		  resumable_icp_push(Qpaint_filled_triangle_in_current_scratchpad_raster);
		  result = VALUES_1(Icp_suspend);
		  POP_SPECIAL();
		  goto end_paint_filled_triangle_in_current_scratchpad_raster;
	      }
	  }
	  else if (EQ(key,Qprinter))
	      funcall(8,aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)35L)),x1,y1_1,x2,y2,x3,y3,color_value);
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop_3:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop_3;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop_3;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p) {
		  if (Current_scratchpad_raster_tiled_p) {
		      temp_1 = Current_x_offset_for_stored_raster_qm;
		      if (Current_x_offset_for_stored_raster_qm) {
			  decff_1_arg = temp_1;
			  x1 = FIXNUM_MINUS(x1,decff_1_arg);
			  decff_1_arg = temp_1;
			  x2 = FIXNUM_MINUS(x2,decff_1_arg);
			  decff_1_arg = temp_1;
			  x3 = FIXNUM_MINUS(x3,decff_1_arg);
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  y1_1 = FIXNUM_MINUS(y1_1,decff_1_arg);
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  y2 = FIXNUM_MINUS(y2,decff_1_arg);
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  y3 = FIXNUM_MINUS(y3,decff_1_arg);
			  Current_x_offset_for_stored_raster_qm = Nil;
		      }
		      gensymed_symbol = Current_scratchpad_raster;
		      tile_size = ISVREF(gensymed_symbol,(SI_Long)2L);
		      tile_arrays = ISVREF(gensymed_symbol,(SI_Long)1L);
		      number_of_rows_1 = FIXNUM_SUB1(ISVREF(tile_arrays,
			      (SI_Long)1L));
		      number_of_columns_1 = 
			      FIXNUM_SUB1(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,(SI_Long)0L + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(SI_Long)2L),
			      (SI_Long)0L),(SI_Long)1L));
		      temp_2 = FIXNUM_MIN(x1,x2);
		      temp_3 = IFIX(FIXNUM_MIN(temp_2,x3)) / IFIX(tile_size);
		      temp_4 = MAX(temp_3,(SI_Long)0L);
		      temp_3 = IFIX(number_of_columns_1);
		      left_edge_column = MIN(temp_4,temp_3);
		      temp_2 = FIXNUM_MIN(y1_1,y2);
		      temp_3 = IFIX(FIXNUM_MIN(temp_2,y3)) / IFIX(tile_size);
		      temp_4 = MAX(temp_3,(SI_Long)0L);
		      temp_3 = IFIX(number_of_rows_1);
		      top_edge_column = MIN(temp_4,temp_3);
		      temp_2 = FIXNUM_MAX(x1,x2);
		      temp_3 = IFIX(FIXNUM_SUB1(FIXNUM_MAX(temp_2,x3))) / 
			      IFIX(tile_size);
		      temp_4 = MAX(temp_3,left_edge_column);
		      temp_3 = IFIX(number_of_columns_1);
		      right_edge_column = MIN(temp_4,temp_3);
		      temp_2 = FIXNUM_MAX(y1_1,y2);
		      temp_3 = IFIX(FIXNUM_SUB1(FIXNUM_MAX(temp_2,y3))) / 
			      IFIX(tile_size);
		      temp_4 = MAX(temp_3,top_edge_column);
		      temp_3 = IFIX(number_of_rows_1);
		      bottom_edge_column = MIN(temp_4,temp_3);
		      tile_to_paint = Nil;
		      i = top_edge_column;
		      ab_loop_bind_ = bottom_edge_column;
		    next_loop_4:
		      if (i > ab_loop_bind_)
			  goto end_loop_4;
		      j = left_edge_column;
		      ab_loop_bind__1 = right_edge_column;
		    next_loop_5:
		      if (j > ab_loop_bind__1)
			  goto end_loop_5;
		      tile_to_paint = 
			      FIXNUM_LE(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(SI_Long)1L),
			      Maximum_in_place_array_size) ? 
			      ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),j + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(j >>  -  - (SI_Long)10L) + 
			      (SI_Long)2L),j & (SI_Long)1023L);
		      x_offset = j * IFIX(tile_size);
		      y_offset = i * IFIX(tile_size);
		      x1_1 = IFIX(x1) - x_offset;
		      x2_1 = IFIX(x2) - x_offset;
		      x3_1 = IFIX(x3) - x_offset;
		      y1_2 = IFIX(y1_1) - y_offset;
		      y2_1 = IFIX(y2) - y_offset;
		      y3_1 = IFIX(y3) - y_offset;
		      if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
			  g2ext_p_fill_triangle(IFIX(tile_to_paint),x1_1,
				  y1_2,x2_1,y2_1,x3_1,y3_1,IFIX(color_value));
		      j = j + (SI_Long)1L;
		      goto next_loop_5;
		    end_loop_5:;
		      i = i + (SI_Long)1L;
		      goto next_loop_4;
		    end_loop_4:;
		      Current_x_offset_for_stored_raster_qm = temp_1;
		  }
		  else if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
		      g2ext_p_fill_triangle(IFIX(Current_scratchpad_raster),
			      IFIX(x1),IFIX(y1_1),IFIX(x2),IFIX(y2),
			      IFIX(x3),IFIX(y3),IFIX(color_value));
	      }
	      goto next_loop_3;
	    end_loop_3:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    result = VALUES_1(temp_1);
  end_paint_filled_triangle_in_current_scratchpad_raster:
    return result;
}

static Object Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster;  /* handle-icp-paint-filled-triangle-in-current-scratchpad-raster */

/* HANDLE-ICP-PAINT-FILLED-TRIANGLE-IN-CURRENT-SCRATCHPAD-RASTER */
Object handle_icp_paint_filled_triangle_in_current_scratchpad_raster()
{
    Object tracep, byte_count_before, current_icp_read_trace_level, tracep_1;
    Object byte_count_before_1, result_of_read, x1, y1_1, x2, y2, x3, y3;
    Object color_value, temp, resumable_icp_state_1, icp_suspend_1, top, value;
    Declare_special(2);
    Object result;

    x_note_fn_call(51,13);
    if (Disable_resumability) {
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_filled_triangle_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  x1 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y1_1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  y1_1 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  x2 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  y2 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx3,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx3,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x3 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  x3 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy3,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy3,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y3 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  y3 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_unsigned_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  color_value = read_icp_unsigned_integer();
	      result_of_read = 
		      paint_filled_triangle_in_current_scratchpad_raster(x1,
		      y1_1,x2,y2,x3,y3,color_value);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_filled_triangle_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x1 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		x1 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y1_1 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		y1_1 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x2 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		x2 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y2 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		y2 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx3,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx3,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x3 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		x3 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy3,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy3,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y3 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		y3 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_unsigned_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else
		color_value = read_icp_unsigned_integer();
	    paint_filled_triangle_in_current_scratchpad_raster(x1,y1_1,x2,
		    y2,x3,y3,color_value);
	}
	temp = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( 
		    !EQ(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster,
		    top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster,
			top,Nil);
		goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
	    }
	}
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_filled_triangle_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  x1 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		  }
		  x1 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  y1_1 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y1_1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		  }
		  y1_1 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  x2 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		  }
		  x2 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  y2 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		  }
		  y2 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  x3 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx3,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx3,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x3 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		  }
		  x3 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  y3 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy3,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(x3);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy3,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y3 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		  }
		  y3 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  color_value = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_unsigned_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(y3);
			resumable_icp_push(x3);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y3);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		  }
		  color_value = value;
	      }
	      result_of_read = 
		      paint_filled_triangle_in_current_scratchpad_raster(x1,
		      y1_1,x2,y2,x3,y3,color_value);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_filled_triangle_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		x1 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x1 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		}
		x1 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		y1_1 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y1_1 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		}
		y1_1 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		x2 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x2 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		}
		x2 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		y2 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y2 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		}
		y2 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		x3 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx3,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx3,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x3 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		}
		x3 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		y3 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy3,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy3,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y3 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(x3);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		}
		y3 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		color_value = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y3);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(y3);
		    resumable_icp_push(x3);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster;
		}
		color_value = value;
	    }
	    paint_filled_triangle_in_current_scratchpad_raster(x1,y1_1,x2,
		    y2,x3,y3,color_value);
	}
	temp = Nil;
    }
    result = VALUES_1(temp);
  end_handle_icp_paint_filled_triangle_in_current_scratchpad_raster:
    return result;
}

Object The_polygon_data_buffer = UNBOUND;

/* FILL-POLYGON-DATA-BUFFER-FROM-UNSIGNED-POINT-LIST */
Object fill_polygon_data_buffer_from_unsigned_point_list(unsigned_point_list)
    Object unsigned_point_list;
{
    Object ab_loop_list_, ab_loop_iter_flag_, schar_arg_1, schar_new_value;
    SI_Long x, i, gensymed_symbol, schar_arg_2;

    x_note_fn_call(51,14);
    x = (SI_Long)0L;
    ab_loop_list_ = unsigned_point_list;
    i = (SI_Long)0L;
    ab_loop_iter_flag_ = T;
  next_loop:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    x = IFIX(M_CAR(ab_loop_list_));
    ab_loop_list_ = M_CDR(ab_loop_list_);
    if ( !TRUEP(ab_loop_iter_flag_))
	i = i + (SI_Long)2L;
    schar_arg_1 = The_polygon_data_buffer;
    gensymed_symbol = x & (SI_Long)255L;
    schar_new_value = CODE_CHAR(FIX(gensymed_symbol));
    SET_ISCHAR(schar_arg_1,i,ICHAR_CODE(schar_new_value));
    schar_arg_1 = The_polygon_data_buffer;
    schar_arg_2 = i + (SI_Long)1L;
    gensymed_symbol = x >>  -  - (SI_Long)8L & (SI_Long)255L;
    schar_new_value = CODE_CHAR(FIX(gensymed_symbol));
    SET_ISCHAR(schar_arg_1,schar_arg_2,ICHAR_CODE(schar_new_value));
    ab_loop_iter_flag_ = Nil;
    goto next_loop;
  end_loop:
    return VALUES_1(The_polygon_data_buffer);
    return VALUES_1(Qnil);
}

static Object Qab_gensym;          /* gensym */

/* SEPARATE-X-Y-COORDINATES */
Object separate_x_y_coordinates(points)
    Object points;
{
    Object x, y, ab_loop_list_, x_coords, ab_loopvar_, ab_loopvar__1, y_coords;
    Object ab_loopvar__2, temp, new_cons, gensymed_symbol;

    x_note_fn_call(51,15);
    x = Nil;
    y = Nil;
    ab_loop_list_ = points;
    x_coords = Nil;
    ab_loopvar_ = Nil;
    ab_loopvar__1 = Nil;
    y_coords = Nil;
    ab_loopvar__2 = Nil;
    ab_loopvar__1 = Nil;
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
  next_loop:
    x = CAR(ab_loop_list_);
    temp = CDR(ab_loop_list_);
    y = CAR(temp);
    new_cons = Available_gensym_conses;
    if (new_cons) {
	Available_gensym_conses = M_CDR(new_cons);
	gensymed_symbol = new_cons;
    }
    else
	gensymed_symbol = Nil;
    if ( !TRUEP(gensymed_symbol))
	gensymed_symbol = replenish_gensym_cons_pool();
    M_CAR(gensymed_symbol) = x;
    M_CDR(gensymed_symbol) = Nil;
    inline_note_allocate_cons(gensymed_symbol,Qab_gensym);
    ab_loopvar__1 = gensymed_symbol;
    if (ab_loopvar_)
	M_CDR(ab_loopvar_) = ab_loopvar__1;
    else
	x_coords = ab_loopvar__1;
    ab_loopvar_ = ab_loopvar__1;
    new_cons = Available_gensym_conses;
    if (new_cons) {
	Available_gensym_conses = M_CDR(new_cons);
	gensymed_symbol = new_cons;
    }
    else
	gensymed_symbol = Nil;
    if ( !TRUEP(gensymed_symbol))
	gensymed_symbol = replenish_gensym_cons_pool();
    M_CAR(gensymed_symbol) = y;
    M_CDR(gensymed_symbol) = Nil;
    inline_note_allocate_cons(gensymed_symbol,Qab_gensym);
    ab_loopvar__1 = gensymed_symbol;
    if (ab_loopvar__2)
	M_CDR(ab_loopvar__2) = ab_loopvar__1;
    else
	y_coords = ab_loopvar__1;
    ab_loopvar__2 = ab_loopvar__1;
    ab_loop_list_ = CDDR(ab_loop_list_);
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    goto next_loop;
  end_loop:
    return VALUES_2(x_coords,y_coords);
    return VALUES_1(Qnil);
}

/* COMBINE-X-AND-Y-COORDINATES */
Object combine_x_and_y_coordinates(x_coords,y_coords)
    Object x_coords, y_coords;
{
    Object x, ab_loop_list_, y, ab_loop_list__1, ab_loopvar_, ab_loopvar__1;
    Object ab_loopvar__2, new_cons, gensymed_symbol;

    x_note_fn_call(51,16);
    x = Nil;
    ab_loop_list_ = x_coords;
    y = Nil;
    ab_loop_list__1 = y_coords;
    ab_loopvar_ = Nil;
    ab_loopvar__1 = Nil;
    ab_loopvar__2 = Nil;
  next_loop:
    if ( !TRUEP(ab_loop_list_))
	goto end_loop;
    x = M_CAR(ab_loop_list_);
    ab_loop_list_ = M_CDR(ab_loop_list_);
    if ( !TRUEP(ab_loop_list__1))
	goto end_loop;
    y = M_CAR(ab_loop_list__1);
    ab_loop_list__1 = M_CDR(ab_loop_list__1);
    new_cons = Available_gensym_conses;
    if (new_cons) {
	Available_gensym_conses = M_CDR(new_cons);
	gensymed_symbol = new_cons;
    }
    else
	gensymed_symbol = Nil;
    if ( !TRUEP(gensymed_symbol))
	gensymed_symbol = replenish_gensym_cons_pool();
    M_CAR(gensymed_symbol) = x;
    M_CDR(gensymed_symbol) = Nil;
    inline_note_allocate_cons(gensymed_symbol,Qab_gensym);
    ab_loopvar__2 = gensymed_symbol;
    if (ab_loopvar__1)
	M_CDR(ab_loopvar__1) = ab_loopvar__2;
    else
	ab_loopvar_ = ab_loopvar__2;
    ab_loopvar__1 = ab_loopvar__2;
    new_cons = Available_gensym_conses;
    if (new_cons) {
	Available_gensym_conses = M_CDR(new_cons);
	gensymed_symbol = new_cons;
    }
    else
	gensymed_symbol = Nil;
    if ( !TRUEP(gensymed_symbol))
	gensymed_symbol = replenish_gensym_cons_pool();
    M_CAR(gensymed_symbol) = y;
    M_CDR(gensymed_symbol) = Nil;
    inline_note_allocate_cons(gensymed_symbol,Qab_gensym);
    ab_loopvar__2 = gensymed_symbol;
    if (ab_loopvar__1)
	M_CDR(ab_loopvar__1) = ab_loopvar__2;
    else
	ab_loopvar_ = ab_loopvar__2;
    ab_loopvar__1 = ab_loopvar__2;
    goto next_loop;
  end_loop:
    return VALUES_1(ab_loopvar_);
    return VALUES_1(Qnil);
}

/* CALCULATE-BOUNDS-OF-UNSIGNED-POINT-LIST */
Object calculate_bounds_of_unsigned_point_list(point_list)
    Object point_list;
{
    Object left, top, right, bottom, tail, x, y, ignore, temp, temp_2;
    SI_Long temp_1;

    x_note_fn_call(51,17);
    left = CAR(point_list);
    top = CADR(point_list);
    right = left;
    bottom = top;
    tail = CDDR(point_list);
    x = Nil;
    y = Nil;
    ignore = Nil;
  next_loop:
    if ( !TRUEP(tail))
	goto end_loop;
    x = CAR(tail);
    temp = CDR(tail);
    y = CAR(temp);
    temp = CDR(tail);
    ignore = CDR(temp);
    left = FIXNUM_MIN(left,x);
    right = FIXNUM_MAX(right,x);
    top = FIXNUM_MIN(top,y);
    bottom = FIXNUM_MAX(bottom,y);
    tail = CDDR(tail);
    goto next_loop;
  end_loop:
    temp_1 = IFIX(left) - (SI_Long)8192L;
    temp_2 = FIX(MAX((SI_Long)0L,temp_1));
    temp_1 = IFIX(top) - (SI_Long)8192L;
    temp = FIX(MAX((SI_Long)0L,temp_1));
    return VALUES_4(temp_2,temp,FIX(IFIX(right) - (SI_Long)8192L),
	    FIX(IFIX(bottom) - (SI_Long)8192L));
    return VALUES_1(Qnil);
}

static Object Qpaint_filled_polygon_in_current_scratchpad_raster;  /* paint-filled-polygon-in-current-scratchpad-raster */

static Object Qunsigned_polygon_point_list;  /* unsigned-polygon-point-list */

/* PAINT-FILLED-POLYGON-IN-CURRENT-SCRATCHPAD-RASTER */
Object paint_filled_polygon_in_current_scratchpad_raster(unsigned_polygon_point_list,
	    color_value)
    Object unsigned_polygon_point_list, color_value;
{
    Object index_of_top_of_backtrace_stack, temp, svref_arg_2, tracep;
    Object byte_count_before, current_icp_write_trace_level, tracep_1;
    Object byte_count_before_1, result_of_write, temp_1, goal_color_value;
    Object scratchpad_raster, ab_loop_list_, color_value_for_this_raster;
    Object ab_loop_list__1, foreground_layer_p, left, top, right, bottom;
    Object x_coords, y_coords, decff_1_arg, list_1, decf_arg, gensymed_symbol;
    Object tile_size, tile_arrays, number_of_rows_1, number_of_columns_1;
    Object tile_to_paint, x, ab_loop_list__2, ab_loopvar_, ab_loopvar__1;
    Object ab_loopvar__2, x_coords_1, y, y_coords_1;
    Object adjusted_unsigned_point_list, point_data, number_of_points;
    Object resumable_icp_state_1, icp_suspend_1, key;
    SI_Long temp_2, temp_3, left_edge_column, top_edge_column;
    SI_Long right_edge_column, bottom_edge_column, i, ab_loop_bind_, j;
    SI_Long ab_loop_bind__1, x_offset, y_offset, left_1, right_1, top_1;
    SI_Long bottom_1;
    Declare_special(3);
    Object result;

    x_note_fn_call(51,18);
    if (Disable_resumability) {
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_filled_polygon_in_current_scratchpad_raster;
	  }
	  if (EQ(Current_scratchpad_raster_type,Qicp)) {
	      icp_message_functions_icp_prologue(Qpaint_filled_polygon_in_current_scratchpad_raster);
	      start_writing_icp_message(FIX((SI_Long)58L));
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_filled_polygon_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qunsigned_polygon_point_list,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_list_of_unsigned_integers(unsigned_polygon_point_list);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qunsigned_polygon_point_list,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_list_of_unsigned_integers(unsigned_polygon_point_list);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_unsigned_integer(color_value);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			result_of_write = 
				write_icp_unsigned_integer(color_value);
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_filled_polygon_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		  POP_SPECIAL();
	      }
	      else {
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qunsigned_polygon_point_list,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_list_of_unsigned_integers(unsigned_polygon_point_list);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qunsigned_polygon_point_list,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_list_of_unsigned_integers(unsigned_polygon_point_list);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_unsigned_integer(color_value);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_unsigned_integer(color_value);
	      }
	  }
	  else if (EQ(Current_scratchpad_raster_type,Qprinter)) {
	      temp_1 = aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)58L));
	      FUNCALL_2(temp_1,unsigned_polygon_point_list,color_value);
	  }
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p) {
		  result = calculate_bounds_of_unsigned_point_list(unsigned_polygon_point_list);
		  MVS_4(result,left,top,right,bottom);
		  if (Current_scratchpad_raster_tiled_p) {
		      result = separate_x_y_coordinates(unsigned_polygon_point_list);
		      MVS_2(result,x_coords,y_coords);
		      temp_1 = Current_x_offset_for_stored_raster_qm;
		      if (Current_x_offset_for_stored_raster_qm) {
			  decff_1_arg = temp_1;
			  left = FIXNUM_MINUS(left,decff_1_arg);
			  decff_1_arg = temp_1;
			  right = FIXNUM_MINUS(right,decff_1_arg);
			  list_1 = x_coords;
			next_loop_1:
			  if ( !TRUEP(list_1))
			      goto end_loop_1;
			  decff_1_arg = temp_1;
			  temp = FIXNUM_MINUS(CAR(list_1),decff_1_arg);
			  M_CAR(list_1) = temp;
			  M_CAR(list_1) = temp;
			  list_1 = M_CDR(list_1);
			  goto next_loop_1;
			end_loop_1:;
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  top = FIXNUM_MINUS(top,decff_1_arg);
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  bottom = FIXNUM_MINUS(bottom,decff_1_arg);
			  list_1 = y_coords;
			next_loop_2:
			  if ( !TRUEP(list_1))
			      goto end_loop_2;
			  decf_arg = Current_y_offset_for_stored_raster_qm;
			  temp = minus(CAR(list_1),decf_arg);
			  M_CAR(list_1) = temp;
			  M_CAR(list_1) = temp;
			  list_1 = M_CDR(list_1);
			  goto next_loop_2;
			end_loop_2:;
			  Current_x_offset_for_stored_raster_qm = Nil;
		      }
		      gensymed_symbol = Current_scratchpad_raster;
		      tile_size = ISVREF(gensymed_symbol,(SI_Long)2L);
		      tile_arrays = ISVREF(gensymed_symbol,(SI_Long)1L);
		      number_of_rows_1 = FIXNUM_SUB1(ISVREF(tile_arrays,
			      (SI_Long)1L));
		      number_of_columns_1 = 
			      FIXNUM_SUB1(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,(SI_Long)0L + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(SI_Long)2L),
			      (SI_Long)0L),(SI_Long)1L));
		      temp_2 = IFIX(left) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,(SI_Long)0L);
		      temp_2 = IFIX(number_of_columns_1);
		      left_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(top) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,(SI_Long)0L);
		      temp_2 = IFIX(number_of_rows_1);
		      top_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(FIXNUM_SUB1(right)) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,left_edge_column);
		      temp_2 = IFIX(number_of_columns_1);
		      right_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(FIXNUM_SUB1(bottom)) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,top_edge_column);
		      temp_2 = IFIX(number_of_rows_1);
		      bottom_edge_column = MIN(temp_3,temp_2);
		      tile_to_paint = Nil;
		      i = top_edge_column;
		      ab_loop_bind_ = bottom_edge_column;
		    next_loop_3:
		      if (i > ab_loop_bind_)
			  goto end_loop_3;
		      j = left_edge_column;
		      ab_loop_bind__1 = right_edge_column;
		    next_loop_4:
		      if (j > ab_loop_bind__1)
			  goto end_loop_4;
		      tile_to_paint = 
			      FIXNUM_LE(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(SI_Long)1L),
			      Maximum_in_place_array_size) ? 
			      ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),j + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(j >>  -  - (SI_Long)10L) + 
			      (SI_Long)2L),j & (SI_Long)1023L);
		      x_offset = j * IFIX(tile_size);
		      y_offset = i * IFIX(tile_size);
		      left_1 = IFIX(left) - x_offset;
		      right_1 = IFIX(right) - x_offset;
		      x = Nil;
		      ab_loop_list__2 = x_coords;
		      ab_loopvar_ = Nil;
		      ab_loopvar__1 = Nil;
		      ab_loopvar__2 = Nil;
		    next_loop_5:
		      if ( !TRUEP(ab_loop_list__2))
			  goto end_loop_5;
		      x = M_CAR(ab_loop_list__2);
		      ab_loop_list__2 = M_CDR(ab_loop_list__2);
		      ab_loopvar__2 = gensym_cons_1(FIX(IFIX(x) - 
			      x_offset),Nil);
		      if (ab_loopvar__1)
			  M_CDR(ab_loopvar__1) = ab_loopvar__2;
		      else
			  ab_loopvar_ = ab_loopvar__2;
		      ab_loopvar__1 = ab_loopvar__2;
		      goto next_loop_5;
		    end_loop_5:
		      x_coords_1 = ab_loopvar_;
		      goto end;
		      x_coords_1 = Qnil;
		    end:;
		      top_1 = IFIX(top) - y_offset;
		      bottom_1 = IFIX(bottom) - y_offset;
		      y = Nil;
		      ab_loop_list__2 = y_coords;
		      ab_loopvar_ = Nil;
		      ab_loopvar__1 = Nil;
		      ab_loopvar__2 = Nil;
		    next_loop_6:
		      if ( !TRUEP(ab_loop_list__2))
			  goto end_loop_6;
		      y = M_CAR(ab_loop_list__2);
		      ab_loop_list__2 = M_CDR(ab_loop_list__2);
		      ab_loopvar__2 = gensym_cons_1(FIX(IFIX(y) - 
			      y_offset),Nil);
		      if (ab_loopvar__1)
			  M_CDR(ab_loopvar__1) = ab_loopvar__2;
		      else
			  ab_loopvar_ = ab_loopvar__2;
		      ab_loopvar__1 = ab_loopvar__2;
		      goto next_loop_6;
		    end_loop_6:
		      y_coords_1 = ab_loopvar_;
		      goto end_1;
		      y_coords_1 = Qnil;
		    end_1:;
		      adjusted_unsigned_point_list = 
			      combine_x_and_y_coordinates(x_coords_1,
			      y_coords_1);
		      if (EQ(Current_scratchpad_raster_type,Qx11_pixmap)) {
			  point_data = 
				  fill_polygon_data_buffer_from_unsigned_point_list(adjusted_unsigned_point_list);
			  number_of_points = 
				  chestnut_floorf_function(length(adjusted_unsigned_point_list),
				  FIX((SI_Long)2L));
			  c_x11_pfill_clipped_polygon(tile_to_paint,
				  point_data,number_of_points,FIX(left_1),
				  FIX(top_1),FIX(right_1),FIX(bottom_1),
				  color_value);
		      }
		      reclaim_gensym_tree_1(adjusted_unsigned_point_list);
		      reclaim_gensym_list_1(x_coords_1);
		      reclaim_gensym_list_1(y_coords_1);
		      j = j + (SI_Long)1L;
		      goto next_loop_4;
		    end_loop_4:;
		      i = i + (SI_Long)1L;
		      goto next_loop_3;
		    end_loop_3:;
		      Current_x_offset_for_stored_raster_qm = temp_1;
		      reclaim_gensym_list_1(x_coords);
		      reclaim_gensym_list_1(y_coords);
		  }
		  else if (EQ(Current_scratchpad_raster_type,Qx11_pixmap)) {
		      point_data = 
			      fill_polygon_data_buffer_from_unsigned_point_list(unsigned_polygon_point_list);
		      number_of_points = 
			      chestnut_floorf_function(length(unsigned_polygon_point_list),
			      FIX((SI_Long)2L));
		      c_x11_pfill_clipped_polygon(Current_scratchpad_raster,
			      point_data,number_of_points,left,top,right,
			      bottom,color_value);
		  }
	      }
	      goto next_loop;
	    end_loop:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qpaint_filled_polygon_in_current_scratchpad_raster,top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qpaint_filled_polygon_in_current_scratchpad_raster,
			top,Nil);
		goto end_paint_filled_polygon_in_current_scratchpad_raster;
	    }
	}
	unsigned_polygon_point_list = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : unsigned_polygon_point_list;
	color_value = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
		 TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : color_value;
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_filled_polygon_in_current_scratchpad_raster;
	  }
	  key = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		  TRUEP(Nil)) &&  
		  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		  resumable_icp_pop() : Current_scratchpad_raster_type;
	  if (EQ(key,Qicp)) {
	      if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) {
		  temp_1 = resumable_icp_pop();
		  if (! !(FIXNUMP(temp_1) && FIXNUM_LE(FIX((SI_Long)-128L),
			  temp_1) && FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
		      switch (INTEGER_TO_CHAR(temp_1)) {
			case 1:
			  goto l1;
			  break;
			case 2:
			  goto l2;
			  break;
			default:
			  break;
		      }
	      }
	      icp_message_functions_icp_prologue(Qpaint_filled_polygon_in_current_scratchpad_raster);
	    l1:
	      if (EQ(icp_suspend_1,
		      start_writing_icp_message(FIX((SI_Long)58L)))) {
		  resumable_icp_push(FIX((SI_Long)1L));
		  temp_1 = Icp_suspend;
		  goto end_block;
	      }
	    l2:
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_filled_polygon_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) 
			    : TRUEP(Nil)) {
			temp_1 = resumable_icp_pop();
			if (! !(FIXNUMP(temp_1) && 
				FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
				FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			    switch (INTEGER_TO_CHAR(temp_1)) {
			      case 1:
				goto l1_1;
				break;
			      case 2:
				goto l2_1;
				break;
			      default:
				break;
			    }
		    }
		  l1_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qunsigned_polygon_point_list,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_list_of_unsigned_integers(unsigned_polygon_point_list))) 
				      {
			      resumable_icp_push(FIX((SI_Long)1L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qunsigned_polygon_point_list,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_list_of_unsigned_integers(unsigned_polygon_point_list))) 
				{
			resumable_icp_push(FIX((SI_Long)1L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l2_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_unsigned_integer(color_value))) {
			      resumable_icp_push(FIX((SI_Long)2L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			  temp_1 = result_of_write;
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_unsigned_integer(color_value))) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		    else
			temp_1 = Nil;
		    goto end_block_1;
		  end_block_1:
		    if (EQ(icp_suspend_1,temp_1)) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			POP_SPECIAL();
			goto end_block;
		    }
		    else
			result_of_write = Nil;
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_filled_polygon_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		    temp_1 = result_of_write;
		  POP_SPECIAL();
	      }
	      else {
		  if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			  TRUEP(Nil)) {
		      temp_1 = resumable_icp_pop();
		      if (! !(FIXNUMP(temp_1) && 
			      FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
			      FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			  switch (INTEGER_TO_CHAR(temp_1)) {
			    case 1:
			      goto l1_2;
			      break;
			    case 2:
			      goto l2_2;
			      break;
			    default:
			      break;
			  }
		  }
		l1_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qunsigned_polygon_point_list,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_list_of_unsigned_integers(unsigned_polygon_point_list))) 
				    {
			    resumable_icp_push(FIX((SI_Long)1L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qunsigned_polygon_point_list,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_list_of_unsigned_integers(unsigned_polygon_point_list))) 
			      {
		      resumable_icp_push(FIX((SI_Long)1L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l2_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_unsigned_integer(color_value))) {
			    resumable_icp_push(FIX((SI_Long)2L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			temp_1 = result_of_write;
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_unsigned_integer(color_value))) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		  else
		      temp_1 = Nil;
		  goto end_block_2;
		end_block_2:
		  if (EQ(icp_suspend_1,temp_1)) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block;
		  }
		  else
		      temp_1 = Nil;
	      }
	      goto end_block;
	    end_block:
	      if (EQ(icp_suspend_1,temp_1)) {
		  resumable_icp_push(key);
		  resumable_icp_push(color_value);
		  resumable_icp_push(unsigned_polygon_point_list);
		  resumable_icp_push(Qpaint_filled_polygon_in_current_scratchpad_raster);
		  result = VALUES_1(Icp_suspend);
		  POP_SPECIAL();
		  goto end_paint_filled_polygon_in_current_scratchpad_raster;
	      }
	  }
	  else if (EQ(key,Qprinter)) {
	      temp_1 = aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)58L));
	      FUNCALL_2(temp_1,unsigned_polygon_point_list,color_value);
	  }
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop_7:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop_7;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop_7;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p) {
		  result = calculate_bounds_of_unsigned_point_list(unsigned_polygon_point_list);
		  MVS_4(result,left,top,right,bottom);
		  if (Current_scratchpad_raster_tiled_p) {
		      result = separate_x_y_coordinates(unsigned_polygon_point_list);
		      MVS_2(result,x_coords,y_coords);
		      temp_1 = Current_x_offset_for_stored_raster_qm;
		      if (Current_x_offset_for_stored_raster_qm) {
			  decff_1_arg = temp_1;
			  left = FIXNUM_MINUS(left,decff_1_arg);
			  decff_1_arg = temp_1;
			  right = FIXNUM_MINUS(right,decff_1_arg);
			  list_1 = x_coords;
			next_loop_8:
			  if ( !TRUEP(list_1))
			      goto end_loop_8;
			  decff_1_arg = temp_1;
			  temp = FIXNUM_MINUS(CAR(list_1),decff_1_arg);
			  M_CAR(list_1) = temp;
			  M_CAR(list_1) = temp;
			  list_1 = M_CDR(list_1);
			  goto next_loop_8;
			end_loop_8:;
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  top = FIXNUM_MINUS(top,decff_1_arg);
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  bottom = FIXNUM_MINUS(bottom,decff_1_arg);
			  list_1 = y_coords;
			next_loop_9:
			  if ( !TRUEP(list_1))
			      goto end_loop_9;
			  decf_arg = Current_y_offset_for_stored_raster_qm;
			  temp = minus(CAR(list_1),decf_arg);
			  M_CAR(list_1) = temp;
			  M_CAR(list_1) = temp;
			  list_1 = M_CDR(list_1);
			  goto next_loop_9;
			end_loop_9:;
			  Current_x_offset_for_stored_raster_qm = Nil;
		      }
		      gensymed_symbol = Current_scratchpad_raster;
		      tile_size = ISVREF(gensymed_symbol,(SI_Long)2L);
		      tile_arrays = ISVREF(gensymed_symbol,(SI_Long)1L);
		      number_of_rows_1 = FIXNUM_SUB1(ISVREF(tile_arrays,
			      (SI_Long)1L));
		      number_of_columns_1 = 
			      FIXNUM_SUB1(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,(SI_Long)0L + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(SI_Long)2L),
			      (SI_Long)0L),(SI_Long)1L));
		      temp_2 = IFIX(left) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,(SI_Long)0L);
		      temp_2 = IFIX(number_of_columns_1);
		      left_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(top) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,(SI_Long)0L);
		      temp_2 = IFIX(number_of_rows_1);
		      top_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(FIXNUM_SUB1(right)) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,left_edge_column);
		      temp_2 = IFIX(number_of_columns_1);
		      right_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(FIXNUM_SUB1(bottom)) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,top_edge_column);
		      temp_2 = IFIX(number_of_rows_1);
		      bottom_edge_column = MIN(temp_3,temp_2);
		      tile_to_paint = Nil;
		      i = top_edge_column;
		      ab_loop_bind_ = bottom_edge_column;
		    next_loop_10:
		      if (i > ab_loop_bind_)
			  goto end_loop_10;
		      j = left_edge_column;
		      ab_loop_bind__1 = right_edge_column;
		    next_loop_11:
		      if (j > ab_loop_bind__1)
			  goto end_loop_11;
		      tile_to_paint = 
			      FIXNUM_LE(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(SI_Long)1L),
			      Maximum_in_place_array_size) ? 
			      ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),j + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(j >>  -  - (SI_Long)10L) + 
			      (SI_Long)2L),j & (SI_Long)1023L);
		      x_offset = j * IFIX(tile_size);
		      y_offset = i * IFIX(tile_size);
		      left_1 = IFIX(left) - x_offset;
		      right_1 = IFIX(right) - x_offset;
		      x = Nil;
		      ab_loop_list__2 = x_coords;
		      ab_loopvar_ = Nil;
		      ab_loopvar__1 = Nil;
		      ab_loopvar__2 = Nil;
		    next_loop_12:
		      if ( !TRUEP(ab_loop_list__2))
			  goto end_loop_12;
		      x = M_CAR(ab_loop_list__2);
		      ab_loop_list__2 = M_CDR(ab_loop_list__2);
		      ab_loopvar__2 = gensym_cons_1(FIX(IFIX(x) - 
			      x_offset),Nil);
		      if (ab_loopvar__1)
			  M_CDR(ab_loopvar__1) = ab_loopvar__2;
		      else
			  ab_loopvar_ = ab_loopvar__2;
		      ab_loopvar__1 = ab_loopvar__2;
		      goto next_loop_12;
		    end_loop_12:
		      x_coords_1 = ab_loopvar_;
		      goto end_2;
		      x_coords_1 = Qnil;
		    end_2:;
		      top_1 = IFIX(top) - y_offset;
		      bottom_1 = IFIX(bottom) - y_offset;
		      y = Nil;
		      ab_loop_list__2 = y_coords;
		      ab_loopvar_ = Nil;
		      ab_loopvar__1 = Nil;
		      ab_loopvar__2 = Nil;
		    next_loop_13:
		      if ( !TRUEP(ab_loop_list__2))
			  goto end_loop_13;
		      y = M_CAR(ab_loop_list__2);
		      ab_loop_list__2 = M_CDR(ab_loop_list__2);
		      ab_loopvar__2 = gensym_cons_1(FIX(IFIX(y) - 
			      y_offset),Nil);
		      if (ab_loopvar__1)
			  M_CDR(ab_loopvar__1) = ab_loopvar__2;
		      else
			  ab_loopvar_ = ab_loopvar__2;
		      ab_loopvar__1 = ab_loopvar__2;
		      goto next_loop_13;
		    end_loop_13:
		      y_coords_1 = ab_loopvar_;
		      goto end_3;
		      y_coords_1 = Qnil;
		    end_3:;
		      adjusted_unsigned_point_list = 
			      combine_x_and_y_coordinates(x_coords_1,
			      y_coords_1);
		      if (EQ(Current_scratchpad_raster_type,Qx11_pixmap)) {
			  point_data = 
				  fill_polygon_data_buffer_from_unsigned_point_list(adjusted_unsigned_point_list);
			  number_of_points = 
				  chestnut_floorf_function(length(adjusted_unsigned_point_list),
				  FIX((SI_Long)2L));
			  c_x11_pfill_clipped_polygon(tile_to_paint,
				  point_data,number_of_points,FIX(left_1),
				  FIX(top_1),FIX(right_1),FIX(bottom_1),
				  color_value);
		      }
		      reclaim_gensym_tree_1(adjusted_unsigned_point_list);
		      reclaim_gensym_list_1(x_coords_1);
		      reclaim_gensym_list_1(y_coords_1);
		      j = j + (SI_Long)1L;
		      goto next_loop_11;
		    end_loop_11:;
		      i = i + (SI_Long)1L;
		      goto next_loop_10;
		    end_loop_10:;
		      Current_x_offset_for_stored_raster_qm = temp_1;
		      reclaim_gensym_list_1(x_coords);
		      reclaim_gensym_list_1(y_coords);
		  }
		  else if (EQ(Current_scratchpad_raster_type,Qx11_pixmap)) {
		      point_data = 
			      fill_polygon_data_buffer_from_unsigned_point_list(unsigned_polygon_point_list);
		      number_of_points = 
			      chestnut_floorf_function(length(unsigned_polygon_point_list),
			      FIX((SI_Long)2L));
		      c_x11_pfill_clipped_polygon(Current_scratchpad_raster,
			      point_data,number_of_points,left,top,right,
			      bottom,color_value);
		  }
	      }
	      goto next_loop_7;
	    end_loop_7:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    result = VALUES_1(temp_1);
  end_paint_filled_polygon_in_current_scratchpad_raster:
    return result;
}

static Object Qlist_of_unsigned_integers;  /* list-of-unsigned-integers */

static Object string_constant_5;   /* "[value]" */

static Object Qvalue;              /* value */

static Object Qhandle_icp_paint_filled_polygon_in_current_scratchpad_raster;  /* handle-icp-paint-filled-polygon-in-current-scratchpad-raster */

/* HANDLE-ICP-PAINT-FILLED-POLYGON-IN-CURRENT-SCRATCHPAD-RASTER */
Object handle_icp_paint_filled_polygon_in_current_scratchpad_raster()
{
    Object tracep, byte_count_before, current_icp_read_trace_level, tracep_1;
    Object byte_count_before_1, tracep_2, byte_count_before_2, ab_loopvar_;
    Object ab_loopvar__1, ab_loopvar__2, result_of_read;
    Object unsigned_polygon_point_list, color_value, temp;
    Object resumable_icp_state_1, icp_suspend_1, top, value;
    SI_Long ab_loop_repeat_;
    Declare_special(3);
    Object result;

    x_note_fn_call(51,19);
    if (Disable_resumability) {
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_filled_polygon_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    2);
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,
			      Qunsigned_polygon_point_list,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  1);
		    if (Icp_read_trace_cutoff_level_qm) {
			tracep_2 = EQ(Icp_read_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_2);
			else
			    tracep_2 = 
				    IFIX(Icp_read_trace_cutoff_level_qm) 
				    >= (SI_Long)4L ? T : Nil;
			if (tracep_2) {
			    emit_icp_read_trace(T,Nil,Nil,
				    Qlist_of_unsigned_integers,
				    string_constant_5,Qvalue,Nil,Nil,Nil,Nil);
			    byte_count_before_2 = 
				    instantaneous_icp_reader_byte_count();
			}
			else
			    byte_count_before_2 = Nil;
			current_icp_read_trace_level = 
				FIXNUM_ADD1(Current_icp_read_trace_level);
			PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
				0);
			  ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
			  ab_loopvar_ = Nil;
			  ab_loopvar__1 = Nil;
			  ab_loopvar__2 = Nil;
			next_loop:
			  if ( !((SI_Long)0L < ab_loop_repeat_))
			      goto end_loop;
			  ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
			  ab_loopvar__2 = 
				  gensym_cons_1(read_icp_unsigned_integer(),
				  Nil);
			  if (ab_loopvar__1)
			      M_CDR(ab_loopvar__1) = ab_loopvar__2;
			  else
			      ab_loopvar_ = ab_loopvar__2;
			  ab_loopvar__1 = ab_loopvar__2;
			  goto next_loop;
			end_loop:
			  result_of_read = ab_loopvar_;
			  goto end;
			  result_of_read = Qnil;
			end:;
			  if (tracep_2)
			      emit_icp_read_trace(Nil,byte_count_before_2,
				      instantaneous_icp_reader_byte_count(),
				      Qlist_of_unsigned_integers,
				      string_constant_5,Qvalue,T,
				      result_of_read,Nil,Nil);
			POP_SPECIAL();
		    }
		    else {
			ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
			ab_loopvar_ = Nil;
			ab_loopvar__1 = Nil;
			ab_loopvar__2 = Nil;
		      next_loop_1:
			if ( !((SI_Long)0L < ab_loop_repeat_))
			    goto end_loop_1;
			ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
			ab_loopvar__2 = 
				gensym_cons_1(read_icp_unsigned_integer(),Nil);
			if (ab_loopvar__1)
			    M_CDR(ab_loopvar__1) = ab_loopvar__2;
			else
			    ab_loopvar_ = ab_loopvar__2;
			ab_loopvar__1 = ab_loopvar__2;
			goto next_loop_1;
		      end_loop_1:
			result_of_read = ab_loopvar_;
			goto end_1;
			result_of_read = Qnil;
		      end_1:;
		    }
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qunsigned_polygon_point_list,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    unsigned_polygon_point_list = result_of_read;
		  POP_SPECIAL();
	      }
	      else if (Icp_read_trace_cutoff_level_qm) {
		  tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep_1);
		  else
		      tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			      (SI_Long)4L ? T : Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,
			      Qlist_of_unsigned_integers,string_constant_5,
			      Qvalue,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
		    ab_loopvar_ = Nil;
		    ab_loopvar__1 = Nil;
		    ab_loopvar__2 = Nil;
		  next_loop_2:
		    if ( !((SI_Long)0L < ab_loop_repeat_))
			goto end_loop_2;
		    ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
		    ab_loopvar__2 = 
			    gensym_cons_1(read_icp_unsigned_integer(),Nil);
		    if (ab_loopvar__1)
			M_CDR(ab_loopvar__1) = ab_loopvar__2;
		    else
			ab_loopvar_ = ab_loopvar__2;
		    ab_loopvar__1 = ab_loopvar__2;
		    goto next_loop_2;
		  end_loop_2:
		    result_of_read = ab_loopvar_;
		    goto end_2;
		    result_of_read = Qnil;
		  end_2:;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qlist_of_unsigned_integers,
				string_constant_5,Qvalue,T,result_of_read,
				Nil,Nil);
		    unsigned_polygon_point_list = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
		  ab_loopvar_ = Nil;
		  ab_loopvar__1 = Nil;
		  ab_loopvar__2 = Nil;
		next_loop_3:
		  if ( !((SI_Long)0L < ab_loop_repeat_))
		      goto end_loop_3;
		  ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
		  ab_loopvar__2 = 
			  gensym_cons_1(read_icp_unsigned_integer(),Nil);
		  if (ab_loopvar__1)
		      M_CDR(ab_loopvar__1) = ab_loopvar__2;
		  else
		      ab_loopvar_ = ab_loopvar__2;
		  ab_loopvar__1 = ab_loopvar__2;
		  goto next_loop_3;
		end_loop_3:
		  unsigned_polygon_point_list = ab_loopvar_;
		  goto end_3;
		  unsigned_polygon_point_list = Qnil;
		end_3:;
	      }
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_unsigned_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  color_value = read_icp_unsigned_integer();
	      paint_filled_polygon_in_current_scratchpad_raster(unsigned_polygon_point_list,
		      color_value);
	      result_of_read = 
		      reclaim_gensym_list_1(unsigned_polygon_point_list);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_filled_polygon_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,
			    Qunsigned_polygon_point_list,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			1);
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)4L ? T : Nil;
		      if (tracep_1) {
			  emit_icp_read_trace(T,Nil,Nil,
				  Qlist_of_unsigned_integers,
				  string_constant_5,Qvalue,Nil,Nil,Nil,Nil);
			  byte_count_before_1 = 
				  instantaneous_icp_reader_byte_count();
		      }
		      else
			  byte_count_before_1 = Nil;
		      current_icp_read_trace_level = 
			      FIXNUM_ADD1(Current_icp_read_trace_level);
		      PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			      0);
			ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
			ab_loopvar_ = Nil;
			ab_loopvar__1 = Nil;
			ab_loopvar__2 = Nil;
		      next_loop_4:
			if ( !((SI_Long)0L < ab_loop_repeat_))
			    goto end_loop_4;
			ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
			ab_loopvar__2 = 
				gensym_cons_1(read_icp_unsigned_integer(),Nil);
			if (ab_loopvar__1)
			    M_CDR(ab_loopvar__1) = ab_loopvar__2;
			else
			    ab_loopvar_ = ab_loopvar__2;
			ab_loopvar__1 = ab_loopvar__2;
			goto next_loop_4;
		      end_loop_4:
			result_of_read = ab_loopvar_;
			goto end_4;
			result_of_read = Qnil;
		      end_4:;
			if (tracep_1)
			    emit_icp_read_trace(Nil,byte_count_before_1,
				    instantaneous_icp_reader_byte_count(),
				    Qlist_of_unsigned_integers,
				    string_constant_5,Qvalue,T,
				    result_of_read,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else {
		      ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
		      ab_loopvar_ = Nil;
		      ab_loopvar__1 = Nil;
		      ab_loopvar__2 = Nil;
		    next_loop_5:
		      if ( !((SI_Long)0L < ab_loop_repeat_))
			  goto end_loop_5;
		      ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
		      ab_loopvar__2 = 
			      gensym_cons_1(read_icp_unsigned_integer(),Nil);
		      if (ab_loopvar__1)
			  M_CDR(ab_loopvar__1) = ab_loopvar__2;
		      else
			  ab_loopvar_ = ab_loopvar__2;
		      ab_loopvar__1 = ab_loopvar__2;
		      goto next_loop_5;
		    end_loop_5:
		      result_of_read = ab_loopvar_;
		      goto end_5;
		      result_of_read = Qnil;
		    end_5:;
		  }
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qunsigned_polygon_point_list,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  unsigned_polygon_point_list = result_of_read;
		POP_SPECIAL();
	    }
	    else if (Icp_read_trace_cutoff_level_qm) {
		tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		if (tracep);
		else
		    tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			    (SI_Long)4L ? T : Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,
			    Qlist_of_unsigned_integers,string_constant_5,
			    Qvalue,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
		  ab_loopvar_ = Nil;
		  ab_loopvar__1 = Nil;
		  ab_loopvar__2 = Nil;
		next_loop_6:
		  if ( !((SI_Long)0L < ab_loop_repeat_))
		      goto end_loop_6;
		  ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
		  ab_loopvar__2 = 
			  gensym_cons_1(read_icp_unsigned_integer(),Nil);
		  if (ab_loopvar__1)
		      M_CDR(ab_loopvar__1) = ab_loopvar__2;
		  else
		      ab_loopvar_ = ab_loopvar__2;
		  ab_loopvar__1 = ab_loopvar__2;
		  goto next_loop_6;
		end_loop_6:
		  result_of_read = ab_loopvar_;
		  goto end_6;
		  result_of_read = Qnil;
		end_6:;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qlist_of_unsigned_integers,string_constant_5,
			      Qvalue,T,result_of_read,Nil,Nil);
		  unsigned_polygon_point_list = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
		ab_loopvar_ = Nil;
		ab_loopvar__1 = Nil;
		ab_loopvar__2 = Nil;
	      next_loop_7:
		if ( !((SI_Long)0L < ab_loop_repeat_))
		    goto end_loop_7;
		ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
		ab_loopvar__2 = gensym_cons_1(read_icp_unsigned_integer(),Nil);
		if (ab_loopvar__1)
		    M_CDR(ab_loopvar__1) = ab_loopvar__2;
		else
		    ab_loopvar_ = ab_loopvar__2;
		ab_loopvar__1 = ab_loopvar__2;
		goto next_loop_7;
	      end_loop_7:
		unsigned_polygon_point_list = ab_loopvar_;
		goto end_7;
		unsigned_polygon_point_list = Qnil;
	      end_7:;
	    }
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_unsigned_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else
		color_value = read_icp_unsigned_integer();
	    paint_filled_polygon_in_current_scratchpad_raster(unsigned_polygon_point_list,
		    color_value);
	    reclaim_gensym_list_1(unsigned_polygon_point_list);
	}
	temp = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( 
		    !EQ(Qhandle_icp_paint_filled_polygon_in_current_scratchpad_raster,
		    top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qhandle_icp_paint_filled_polygon_in_current_scratchpad_raster,
			top,Nil);
		goto end_handle_icp_paint_filled_polygon_in_current_scratchpad_raster;
	    }
	}
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_filled_polygon_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    2);
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  unsigned_polygon_point_list = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,
			      Qunsigned_polygon_point_list,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  1);
		    if (Icp_read_trace_cutoff_level_qm) {
			tracep_2 = EQ(Icp_read_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_2);
			else
			    tracep_2 = 
				    IFIX(Icp_read_trace_cutoff_level_qm) 
				    >= (SI_Long)4L ? T : Nil;
			if (tracep_2) {
			    emit_icp_read_trace(T,Nil,Nil,
				    Qlist_of_unsigned_integers,
				    string_constant_5,Qvalue,Nil,Nil,Nil,Nil);
			    byte_count_before_2 = 
				    instantaneous_icp_reader_byte_count();
			}
			else
			    byte_count_before_2 = Nil;
			current_icp_read_trace_level = 
				FIXNUM_ADD1(Current_icp_read_trace_level);
			PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
				0);
			  ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
			  ab_loopvar_ = Nil;
			  ab_loopvar__1 = Nil;
			  ab_loopvar__2 = Nil;
			next_loop_8:
			  if ( !((SI_Long)0L < ab_loop_repeat_))
			      goto end_loop_8;
			  ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
			  ab_loopvar__2 = 
				  gensym_cons_1(read_icp_unsigned_integer(),
				  Nil);
			  if (ab_loopvar__1)
			      M_CDR(ab_loopvar__1) = ab_loopvar__2;
			  else
			      ab_loopvar_ = ab_loopvar__2;
			  ab_loopvar__1 = ab_loopvar__2;
			  goto next_loop_8;
			end_loop_8:
			  result_of_read = ab_loopvar_;
			  goto end_8;
			  result_of_read = Qnil;
			end_8:;
			  if (tracep_2)
			      emit_icp_read_trace(Nil,byte_count_before_2,
				      instantaneous_icp_reader_byte_count(),
				      Qlist_of_unsigned_integers,
				      string_constant_5,Qvalue,T,
				      result_of_read,Nil,Nil);
			  value = result_of_read;
			POP_SPECIAL();
		    }
		    else {
			ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
			ab_loopvar_ = Nil;
			ab_loopvar__1 = Nil;
			ab_loopvar__2 = Nil;
		      next_loop_9:
			if ( !((SI_Long)0L < ab_loop_repeat_))
			    goto end_loop_9;
			ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
			ab_loopvar__2 = 
				gensym_cons_1(read_icp_unsigned_integer(),Nil);
			if (ab_loopvar__1)
			    M_CDR(ab_loopvar__1) = ab_loopvar__2;
			else
			    ab_loopvar_ = ab_loopvar__2;
			ab_loopvar__1 = ab_loopvar__2;
			goto next_loop_9;
		      end_loop_9:
			value = ab_loopvar_;
			goto end_9;
			value = Qnil;
		      end_9:;
		    }
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(Qhandle_icp_paint_filled_polygon_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_filled_polygon_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qunsigned_polygon_point_list,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    unsigned_polygon_point_list = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)4L ? T : Nil;
		      if (tracep_1) {
			  emit_icp_read_trace(T,Nil,Nil,
				  Qlist_of_unsigned_integers,
				  string_constant_5,Qvalue,Nil,Nil,Nil,Nil);
			  byte_count_before_1 = 
				  instantaneous_icp_reader_byte_count();
		      }
		      else
			  byte_count_before_1 = Nil;
		      current_icp_read_trace_level = 
			      FIXNUM_ADD1(Current_icp_read_trace_level);
		      PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			      0);
			ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
			ab_loopvar_ = Nil;
			ab_loopvar__1 = Nil;
			ab_loopvar__2 = Nil;
		      next_loop_10:
			if ( !((SI_Long)0L < ab_loop_repeat_))
			    goto end_loop_10;
			ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
			ab_loopvar__2 = 
				gensym_cons_1(read_icp_unsigned_integer(),Nil);
			if (ab_loopvar__1)
			    M_CDR(ab_loopvar__1) = ab_loopvar__2;
			else
			    ab_loopvar_ = ab_loopvar__2;
			ab_loopvar__1 = ab_loopvar__2;
			goto next_loop_10;
		      end_loop_10:
			result_of_read = ab_loopvar_;
			goto end_10;
			result_of_read = Qnil;
		      end_10:;
			if (tracep_1)
			    emit_icp_read_trace(Nil,byte_count_before_1,
				    instantaneous_icp_reader_byte_count(),
				    Qlist_of_unsigned_integers,
				    string_constant_5,Qvalue,T,
				    result_of_read,Nil,Nil);
			value = result_of_read;
		      POP_SPECIAL();
		  }
		  else {
		      ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
		      ab_loopvar_ = Nil;
		      ab_loopvar__1 = Nil;
		      ab_loopvar__2 = Nil;
		    next_loop_11:
		      if ( !((SI_Long)0L < ab_loop_repeat_))
			  goto end_loop_11;
		      ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
		      ab_loopvar__2 = 
			      gensym_cons_1(read_icp_unsigned_integer(),Nil);
		      if (ab_loopvar__1)
			  M_CDR(ab_loopvar__1) = ab_loopvar__2;
		      else
			  ab_loopvar_ = ab_loopvar__2;
		      ab_loopvar__1 = ab_loopvar__2;
		      goto next_loop_11;
		    end_loop_11:
		      value = ab_loopvar_;
		      goto end_11;
		      value = Qnil;
		    end_11:;
		  }
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_filled_polygon_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_polygon_in_current_scratchpad_raster;
		  }
		  unsigned_polygon_point_list = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  color_value = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_unsigned_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(unsigned_polygon_point_list);
			resumable_icp_push(Qhandle_icp_paint_filled_polygon_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_filled_polygon_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(unsigned_polygon_point_list);
		      resumable_icp_push(Qhandle_icp_paint_filled_polygon_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_polygon_in_current_scratchpad_raster;
		  }
		  color_value = value;
	      }
	      paint_filled_polygon_in_current_scratchpad_raster(unsigned_polygon_point_list,
		      color_value);
	      result_of_read = 
		      reclaim_gensym_list_1(unsigned_polygon_point_list);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_filled_polygon_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		unsigned_polygon_point_list = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,
			    Qunsigned_polygon_point_list,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			1);
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)4L ? T : Nil;
		      if (tracep_1) {
			  emit_icp_read_trace(T,Nil,Nil,
				  Qlist_of_unsigned_integers,
				  string_constant_5,Qvalue,Nil,Nil,Nil,Nil);
			  byte_count_before_1 = 
				  instantaneous_icp_reader_byte_count();
		      }
		      else
			  byte_count_before_1 = Nil;
		      current_icp_read_trace_level = 
			      FIXNUM_ADD1(Current_icp_read_trace_level);
		      PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			      0);
			ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
			ab_loopvar_ = Nil;
			ab_loopvar__1 = Nil;
			ab_loopvar__2 = Nil;
		      next_loop_12:
			if ( !((SI_Long)0L < ab_loop_repeat_))
			    goto end_loop_12;
			ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
			ab_loopvar__2 = 
				gensym_cons_1(read_icp_unsigned_integer(),Nil);
			if (ab_loopvar__1)
			    M_CDR(ab_loopvar__1) = ab_loopvar__2;
			else
			    ab_loopvar_ = ab_loopvar__2;
			ab_loopvar__1 = ab_loopvar__2;
			goto next_loop_12;
		      end_loop_12:
			result_of_read = ab_loopvar_;
			goto end_12;
			result_of_read = Qnil;
		      end_12:;
			if (tracep_1)
			    emit_icp_read_trace(Nil,byte_count_before_1,
				    instantaneous_icp_reader_byte_count(),
				    Qlist_of_unsigned_integers,
				    string_constant_5,Qvalue,T,
				    result_of_read,Nil,Nil);
			value = result_of_read;
		      POP_SPECIAL();
		  }
		  else {
		      ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
		      ab_loopvar_ = Nil;
		      ab_loopvar__1 = Nil;
		      ab_loopvar__2 = Nil;
		    next_loop_13:
		      if ( !((SI_Long)0L < ab_loop_repeat_))
			  goto end_loop_13;
		      ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
		      ab_loopvar__2 = 
			      gensym_cons_1(read_icp_unsigned_integer(),Nil);
		      if (ab_loopvar__1)
			  M_CDR(ab_loopvar__1) = ab_loopvar__2;
		      else
			  ab_loopvar_ = ab_loopvar__2;
		      ab_loopvar__1 = ab_loopvar__2;
		      goto next_loop_13;
		    end_loop_13:
		      value = ab_loopvar_;
		      goto end_13;
		      value = Qnil;
		    end_13:;
		  }
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_filled_polygon_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_polygon_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qunsigned_polygon_point_list,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  unsigned_polygon_point_list = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)4L ? T : Nil;
		    if (tracep) {
			emit_icp_read_trace(T,Nil,Nil,
				Qlist_of_unsigned_integers,
				string_constant_5,Qvalue,Nil,Nil,Nil,Nil);
			byte_count_before = 
				instantaneous_icp_reader_byte_count();
		    }
		    else
			byte_count_before = Nil;
		    current_icp_read_trace_level = 
			    FIXNUM_ADD1(Current_icp_read_trace_level);
		    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			    0);
		      ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
		      ab_loopvar_ = Nil;
		      ab_loopvar__1 = Nil;
		      ab_loopvar__2 = Nil;
		    next_loop_14:
		      if ( !((SI_Long)0L < ab_loop_repeat_))
			  goto end_loop_14;
		      ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
		      ab_loopvar__2 = 
			      gensym_cons_1(read_icp_unsigned_integer(),Nil);
		      if (ab_loopvar__1)
			  M_CDR(ab_loopvar__1) = ab_loopvar__2;
		      else
			  ab_loopvar_ = ab_loopvar__2;
		      ab_loopvar__1 = ab_loopvar__2;
		      goto next_loop_14;
		    end_loop_14:
		      result_of_read = ab_loopvar_;
		      goto end_14;
		      result_of_read = Qnil;
		    end_14:;
		      if (tracep)
			  emit_icp_read_trace(Nil,byte_count_before,
				  instantaneous_icp_reader_byte_count(),
				  Qlist_of_unsigned_integers,
				  string_constant_5,Qvalue,T,
				  result_of_read,Nil,Nil);
		      value = result_of_read;
		    POP_SPECIAL();
		}
		else {
		    ab_loop_repeat_ = IFIX(read_icp_unsigned_integer());
		    ab_loopvar_ = Nil;
		    ab_loopvar__1 = Nil;
		    ab_loopvar__2 = Nil;
		  next_loop_15:
		    if ( !((SI_Long)0L < ab_loop_repeat_))
			goto end_loop_15;
		    ab_loop_repeat_ = ab_loop_repeat_ - (SI_Long)1L;
		    ab_loopvar__2 = 
			    gensym_cons_1(read_icp_unsigned_integer(),Nil);
		    if (ab_loopvar__1)
			M_CDR(ab_loopvar__1) = ab_loopvar__2;
		    else
			ab_loopvar_ = ab_loopvar__2;
		    ab_loopvar__1 = ab_loopvar__2;
		    goto next_loop_15;
		  end_loop_15:
		    value = ab_loopvar_;
		    goto end_15;
		    value = Qnil;
		  end_15:;
		}
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(Qhandle_icp_paint_filled_polygon_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_filled_polygon_in_current_scratchpad_raster;
		}
		unsigned_polygon_point_list = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		color_value = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(unsigned_polygon_point_list);
		      resumable_icp_push(Qhandle_icp_paint_filled_polygon_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_filled_polygon_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(unsigned_polygon_point_list);
		    resumable_icp_push(Qhandle_icp_paint_filled_polygon_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_filled_polygon_in_current_scratchpad_raster;
		}
		color_value = value;
	    }
	    paint_filled_polygon_in_current_scratchpad_raster(unsigned_polygon_point_list,
		    color_value);
	    reclaim_gensym_list_1(unsigned_polygon_point_list);
	}
	temp = Nil;
    }
    result = VALUES_1(temp);
  end_handle_icp_paint_filled_polygon_in_current_scratchpad_raster:
    return result;
}

static Object Qpaint_line_in_current_scratchpad_raster;  /* paint-line-in-current-scratchpad-raster */

static Object Qpaint_last_point_qm;  /* paint-last-point? */

/* PAINT-LINE-IN-CURRENT-SCRATCHPAD-RASTER */
Object paint_line_in_current_scratchpad_raster(x1,y1_1,x2,y2,color_value,
	    paint_last_point_qm)
    Object x1, y1_1, x2, y2, color_value, paint_last_point_qm;
{
    Object index_of_top_of_backtrace_stack, temp, svref_arg_2, tracep;
    Object byte_count_before, current_icp_write_trace_level, tracep_1;
    Object byte_count_before_1, result_of_write, goal_color_value;
    Object scratchpad_raster, ab_loop_list_, color_value_for_this_raster;
    Object ab_loop_list__1, foreground_layer_p, temp_1, decff_1_arg;
    Object gensymed_symbol, tile_size, tile_arrays, number_of_rows_1;
    Object number_of_columns_1, tile_to_paint, resumable_icp_state_1;
    Object icp_suspend_1, top, key;
    SI_Long temp_2, temp_3, left_edge_column, top_edge_column;
    SI_Long right_edge_column, bottom_edge_column, i, ab_loop_bind_, j;
    SI_Long ab_loop_bind__1, x_offset, y_offset, x1_1, x2_1, y1_2, y2_1;
    Declare_special(3);
    Object result;

    x_note_fn_call(51,20);
    if (Disable_resumability) {
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_line_in_current_scratchpad_raster;
	  }
	  if (EQ(Current_scratchpad_raster_type,Qicp)) {
	      icp_message_functions_icp_prologue(Qpaint_line_in_current_scratchpad_raster);
	      start_writing_icp_message(FIX((SI_Long)33L));
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_line_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(x1);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(x1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(y1_1);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(y1_1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(x2);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(x2);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(y2);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(y2);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_unsigned_integer(color_value);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_unsigned_integer(color_value);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qpaint_last_point_qm,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_boolean(paint_last_point_qm);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qpaint_last_point_qm,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			result_of_write = 
				write_icp_boolean(paint_last_point_qm);
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_line_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		  POP_SPECIAL();
	      }
	      else {
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(x1);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(x1);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(y1_1);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(y1_1);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(x2);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(x2);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(y2);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(y2);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_unsigned_integer(color_value);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_unsigned_integer(color_value);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qpaint_last_point_qm,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_boolean(paint_last_point_qm);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qpaint_last_point_qm,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_boolean(paint_last_point_qm);
	      }
	  }
	  else if (EQ(Current_scratchpad_raster_type,Qprinter))
	      funcall(7,aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)33L)),x1,y1_1,x2,y2,color_value,
		      paint_last_point_qm);
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p) {
		  if (Current_scratchpad_raster_tiled_p) {
		      temp_1 = Current_x_offset_for_stored_raster_qm;
		      if (Current_x_offset_for_stored_raster_qm) {
			  decff_1_arg = temp_1;
			  x1 = FIXNUM_MINUS(x1,decff_1_arg);
			  decff_1_arg = temp_1;
			  x2 = FIXNUM_MINUS(x2,decff_1_arg);
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  y1_1 = FIXNUM_MINUS(y1_1,decff_1_arg);
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  y2 = FIXNUM_MINUS(y2,decff_1_arg);
			  Current_x_offset_for_stored_raster_qm = Nil;
		      }
		      gensymed_symbol = Current_scratchpad_raster;
		      tile_size = ISVREF(gensymed_symbol,(SI_Long)2L);
		      tile_arrays = ISVREF(gensymed_symbol,(SI_Long)1L);
		      number_of_rows_1 = FIXNUM_SUB1(ISVREF(tile_arrays,
			      (SI_Long)1L));
		      number_of_columns_1 = 
			      FIXNUM_SUB1(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,(SI_Long)0L + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(SI_Long)2L),
			      (SI_Long)0L),(SI_Long)1L));
		      temp_2 = IFIX(FIXNUM_MIN(x1,x2)) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,(SI_Long)0L);
		      temp_2 = IFIX(number_of_columns_1);
		      left_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(FIXNUM_MIN(y1_1,y2)) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,(SI_Long)0L);
		      temp_2 = IFIX(number_of_rows_1);
		      top_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(FIXNUM_SUB1(FIXNUM_MAX(x1,x2))) / 
			      IFIX(tile_size);
		      temp_3 = MAX(temp_2,left_edge_column);
		      temp_2 = IFIX(number_of_columns_1);
		      right_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(FIXNUM_SUB1(FIXNUM_MAX(y1_1,y2))) / 
			      IFIX(tile_size);
		      temp_3 = MAX(temp_2,top_edge_column);
		      temp_2 = IFIX(number_of_rows_1);
		      bottom_edge_column = MIN(temp_3,temp_2);
		      tile_to_paint = Nil;
		      i = top_edge_column;
		      ab_loop_bind_ = bottom_edge_column;
		    next_loop_1:
		      if (i > ab_loop_bind_)
			  goto end_loop_1;
		      j = left_edge_column;
		      ab_loop_bind__1 = right_edge_column;
		    next_loop_2:
		      if (j > ab_loop_bind__1)
			  goto end_loop_2;
		      tile_to_paint = 
			      FIXNUM_LE(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(SI_Long)1L),
			      Maximum_in_place_array_size) ? 
			      ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),j + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(j >>  -  - (SI_Long)10L) + 
			      (SI_Long)2L),j & (SI_Long)1023L);
		      x_offset = j * IFIX(tile_size);
		      y_offset = i * IFIX(tile_size);
		      x1_1 = IFIX(x1) - x_offset;
		      x2_1 = IFIX(x2) - x_offset;
		      y1_2 = IFIX(y1_1) - y_offset;
		      y2_1 = IFIX(y2) - y_offset;
		      if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
			  g2ext_p_draw_line(IFIX(tile_to_paint),x1_1,y1_2,
				  x2_1,y2_1,IFIX(color_value));
		      j = j + (SI_Long)1L;
		      goto next_loop_2;
		    end_loop_2:;
		      i = i + (SI_Long)1L;
		      goto next_loop_1;
		    end_loop_1:;
		      Current_x_offset_for_stored_raster_qm = temp_1;
		  }
		  else if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
		      g2ext_p_draw_line(IFIX(Current_scratchpad_raster),
			      IFIX(x1),IFIX(y1_1),IFIX(x2),IFIX(y2),
			      IFIX(color_value));
	      }
	      goto next_loop;
	    end_loop:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qpaint_line_in_current_scratchpad_raster,top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qpaint_line_in_current_scratchpad_raster,top,Nil);
		goto end_paint_line_in_current_scratchpad_raster;
	    }
	}
	x1 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : x1;
	y1_1 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : y1_1;
	x2 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : x2;
	y2 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : y2;
	color_value = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
		 TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : color_value;
	paint_last_point_qm = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : paint_last_point_qm;
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_line_in_current_scratchpad_raster;
	  }
	  key = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		  TRUEP(Nil)) &&  
		  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		  resumable_icp_pop() : Current_scratchpad_raster_type;
	  if (EQ(key,Qicp)) {
	      if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) {
		  temp_1 = resumable_icp_pop();
		  if (! !(FIXNUMP(temp_1) && FIXNUM_LE(FIX((SI_Long)-128L),
			  temp_1) && FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
		      switch (INTEGER_TO_CHAR(temp_1)) {
			case 1:
			  goto l1;
			  break;
			case 2:
			  goto l2;
			  break;
			default:
			  break;
		      }
	      }
	      icp_message_functions_icp_prologue(Qpaint_line_in_current_scratchpad_raster);
	    l1:
	      if (EQ(icp_suspend_1,
		      start_writing_icp_message(FIX((SI_Long)33L)))) {
		  resumable_icp_push(FIX((SI_Long)1L));
		  temp_1 = Icp_suspend;
		  goto end_block;
	      }
	    l2:
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_line_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) 
			    : TRUEP(Nil)) {
			temp_1 = resumable_icp_pop();
			if (! !(FIXNUMP(temp_1) && 
				FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
				FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			    switch (INTEGER_TO_CHAR(temp_1)) {
			      case 1:
				goto l1_1;
				break;
			      case 2:
				goto l2_1;
				break;
			      case 3:
				goto l3;
				break;
			      case 4:
				goto l4;
				break;
			      case 5:
				goto l5;
				break;
			      case 6:
				goto l6;
				break;
			      default:
				break;
			    }
		    }
		  l1_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(x1))) {
			      resumable_icp_push(FIX((SI_Long)1L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(x1))) {
			resumable_icp_push(FIX((SI_Long)1L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l2_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
			      resumable_icp_push(FIX((SI_Long)2L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l3:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(x2))) {
			      resumable_icp_push(FIX((SI_Long)3L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(x2))) {
			resumable_icp_push(FIX((SI_Long)3L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l4:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(y2))) {
			      resumable_icp_push(FIX((SI_Long)4L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(y2))) {
			resumable_icp_push(FIX((SI_Long)4L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l5:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_unsigned_integer(color_value))) {
			      resumable_icp_push(FIX((SI_Long)5L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_unsigned_integer(color_value))) {
			resumable_icp_push(FIX((SI_Long)5L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l6:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qpaint_last_point_qm,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_boolean(paint_last_point_qm))) {
			      resumable_icp_push(FIX((SI_Long)6L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qpaint_last_point_qm,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			  temp_1 = result_of_write;
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_boolean(paint_last_point_qm))) {
			resumable_icp_push(FIX((SI_Long)6L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		    else
			temp_1 = Nil;
		    goto end_block_1;
		  end_block_1:
		    if (EQ(icp_suspend_1,temp_1)) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			POP_SPECIAL();
			goto end_block;
		    }
		    else
			result_of_write = Nil;
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_line_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		    temp_1 = result_of_write;
		  POP_SPECIAL();
	      }
	      else {
		  if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			  TRUEP(Nil)) {
		      temp_1 = resumable_icp_pop();
		      if (! !(FIXNUMP(temp_1) && 
			      FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
			      FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			  switch (INTEGER_TO_CHAR(temp_1)) {
			    case 1:
			      goto l1_2;
			      break;
			    case 2:
			      goto l2_2;
			      break;
			    case 3:
			      goto l3_1;
			      break;
			    case 4:
			      goto l4_1;
			      break;
			    case 5:
			      goto l5_1;
			      break;
			    case 6:
			      goto l6_1;
			      break;
			    default:
			      break;
			  }
		  }
		l1_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(x1))) {
			    resumable_icp_push(FIX((SI_Long)1L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(x1))) {
		      resumable_icp_push(FIX((SI_Long)1L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l2_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
			    resumable_icp_push(FIX((SI_Long)2L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l3_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(x2))) {
			    resumable_icp_push(FIX((SI_Long)3L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(x2))) {
		      resumable_icp_push(FIX((SI_Long)3L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l4_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(y2))) {
			    resumable_icp_push(FIX((SI_Long)4L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(y2))) {
		      resumable_icp_push(FIX((SI_Long)4L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l5_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_unsigned_integer(color_value))) {
			    resumable_icp_push(FIX((SI_Long)5L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_unsigned_integer(color_value))) {
		      resumable_icp_push(FIX((SI_Long)5L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l6_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qpaint_last_point_qm,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_boolean(paint_last_point_qm))) {
			    resumable_icp_push(FIX((SI_Long)6L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qpaint_last_point_qm,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			temp_1 = result_of_write;
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_boolean(paint_last_point_qm))) {
		      resumable_icp_push(FIX((SI_Long)6L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		  else
		      temp_1 = Nil;
		  goto end_block_2;
		end_block_2:
		  if (EQ(icp_suspend_1,temp_1)) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block;
		  }
		  else
		      temp_1 = Nil;
	      }
	      goto end_block;
	    end_block:
	      if (EQ(icp_suspend_1,temp_1)) {
		  resumable_icp_push(key);
		  resumable_icp_push(paint_last_point_qm);
		  resumable_icp_push(color_value);
		  resumable_icp_push(y2);
		  resumable_icp_push(x2);
		  resumable_icp_push(y1_1);
		  resumable_icp_push(x1);
		  resumable_icp_push(Qpaint_line_in_current_scratchpad_raster);
		  result = VALUES_1(Icp_suspend);
		  POP_SPECIAL();
		  goto end_paint_line_in_current_scratchpad_raster;
	      }
	  }
	  else if (EQ(key,Qprinter))
	      funcall(7,aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)33L)),x1,y1_1,x2,y2,color_value,
		      paint_last_point_qm);
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop_3:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop_3;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop_3;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p) {
		  if (Current_scratchpad_raster_tiled_p) {
		      temp_1 = Current_x_offset_for_stored_raster_qm;
		      if (Current_x_offset_for_stored_raster_qm) {
			  decff_1_arg = temp_1;
			  x1 = FIXNUM_MINUS(x1,decff_1_arg);
			  decff_1_arg = temp_1;
			  x2 = FIXNUM_MINUS(x2,decff_1_arg);
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  y1_1 = FIXNUM_MINUS(y1_1,decff_1_arg);
			  decff_1_arg = Current_y_offset_for_stored_raster_qm;
			  y2 = FIXNUM_MINUS(y2,decff_1_arg);
			  Current_x_offset_for_stored_raster_qm = Nil;
		      }
		      gensymed_symbol = Current_scratchpad_raster;
		      tile_size = ISVREF(gensymed_symbol,(SI_Long)2L);
		      tile_arrays = ISVREF(gensymed_symbol,(SI_Long)1L);
		      number_of_rows_1 = FIXNUM_SUB1(ISVREF(tile_arrays,
			      (SI_Long)1L));
		      number_of_columns_1 = 
			      FIXNUM_SUB1(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,(SI_Long)0L + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(SI_Long)2L),
			      (SI_Long)0L),(SI_Long)1L));
		      temp_2 = IFIX(FIXNUM_MIN(x1,x2)) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,(SI_Long)0L);
		      temp_2 = IFIX(number_of_columns_1);
		      left_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(FIXNUM_MIN(y1_1,y2)) / IFIX(tile_size);
		      temp_3 = MAX(temp_2,(SI_Long)0L);
		      temp_2 = IFIX(number_of_rows_1);
		      top_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(FIXNUM_SUB1(FIXNUM_MAX(x1,x2))) / 
			      IFIX(tile_size);
		      temp_3 = MAX(temp_2,left_edge_column);
		      temp_2 = IFIX(number_of_columns_1);
		      right_edge_column = MIN(temp_3,temp_2);
		      temp_2 = IFIX(FIXNUM_SUB1(FIXNUM_MAX(y1_1,y2))) / 
			      IFIX(tile_size);
		      temp_3 = MAX(temp_2,top_edge_column);
		      temp_2 = IFIX(number_of_rows_1);
		      bottom_edge_column = MIN(temp_3,temp_2);
		      tile_to_paint = Nil;
		      i = top_edge_column;
		      ab_loop_bind_ = bottom_edge_column;
		    next_loop_4:
		      if (i > ab_loop_bind_)
			  goto end_loop_4;
		      j = left_edge_column;
		      ab_loop_bind__1 = right_edge_column;
		    next_loop_5:
		      if (j > ab_loop_bind__1)
			  goto end_loop_5;
		      tile_to_paint = 
			      FIXNUM_LE(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(SI_Long)1L),
			      Maximum_in_place_array_size) ? 
			      ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),j + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
			      (SI_Long)1L),Maximum_in_place_array_size) ? 
			      ISVREF(tile_arrays,i + 
			      IFIX(Managed_array_index_offset)) : 
			      ISVREF(ISVREF(tile_arrays,(i >>  -  - 
			      (SI_Long)10L) + (SI_Long)2L),i & 
			      (SI_Long)1023L),(j >>  -  - (SI_Long)10L) + 
			      (SI_Long)2L),j & (SI_Long)1023L);
		      x_offset = j * IFIX(tile_size);
		      y_offset = i * IFIX(tile_size);
		      x1_1 = IFIX(x1) - x_offset;
		      x2_1 = IFIX(x2) - x_offset;
		      y1_2 = IFIX(y1_1) - y_offset;
		      y2_1 = IFIX(y2) - y_offset;
		      if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
			  g2ext_p_draw_line(IFIX(tile_to_paint),x1_1,y1_2,
				  x2_1,y2_1,IFIX(color_value));
		      j = j + (SI_Long)1L;
		      goto next_loop_5;
		    end_loop_5:;
		      i = i + (SI_Long)1L;
		      goto next_loop_4;
		    end_loop_4:;
		      Current_x_offset_for_stored_raster_qm = temp_1;
		  }
		  else if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
		      g2ext_p_draw_line(IFIX(Current_scratchpad_raster),
			      IFIX(x1),IFIX(y1_1),IFIX(x2),IFIX(y2),
			      IFIX(color_value));
	      }
	      goto next_loop_3;
	    end_loop_3:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    result = VALUES_1(temp_1);
  end_paint_line_in_current_scratchpad_raster:
    return result;
}

static Object Qhandle_icp_paint_line_in_current_scratchpad_raster;  /* handle-icp-paint-line-in-current-scratchpad-raster */

/* HANDLE-ICP-PAINT-LINE-IN-CURRENT-SCRATCHPAD-RASTER */
Object handle_icp_paint_line_in_current_scratchpad_raster()
{
    Object tracep, byte_count_before, current_icp_read_trace_level, tracep_1;
    Object byte_count_before_1, result_of_read, x1, y1_1, x2, y2, color_value;
    Object paint_last_point_qm, temp, resumable_icp_state_1, icp_suspend_1;
    Object top, value;
    Declare_special(2);
    Object result;

    x_note_fn_call(51,21);
    if (Disable_resumability) {
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_line_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  x1 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y1_1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  y1_1 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  x2 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  y2 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_unsigned_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  color_value = read_icp_unsigned_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qpaint_last_point_qm,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_boolean();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qpaint_last_point_qm,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    paint_last_point_qm = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  paint_last_point_qm = read_icp_boolean();
	      result_of_read = paint_line_in_current_scratchpad_raster(x1,
		      y1_1,x2,y2,color_value,paint_last_point_qm);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_line_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x1 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		x1 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y1_1 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		y1_1 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x2 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		x2 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y2 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		y2 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_unsigned_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else
		color_value = read_icp_unsigned_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qpaint_last_point_qm,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_boolean();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qpaint_last_point_qm,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  paint_last_point_qm = result_of_read;
		POP_SPECIAL();
	    }
	    else
		paint_last_point_qm = read_icp_boolean();
	    paint_line_in_current_scratchpad_raster(x1,y1_1,x2,y2,
		    color_value,paint_last_point_qm);
	}
	temp = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qhandle_icp_paint_line_in_current_scratchpad_raster,
			top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qhandle_icp_paint_line_in_current_scratchpad_raster,
			top,Nil);
		goto end_handle_icp_paint_line_in_current_scratchpad_raster;
	    }
	}
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_line_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  x1 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		  }
		  x1 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  y1_1 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y1_1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		  }
		  y1_1 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  x2 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		  }
		  x2 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  y2 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		  }
		  y2 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  color_value = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_unsigned_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		  }
		  color_value = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  paint_last_point_qm = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qpaint_last_point_qm,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_boolean();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(color_value);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qpaint_last_point_qm,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    paint_last_point_qm = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_boolean();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(color_value);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		  }
		  paint_last_point_qm = value;
	      }
	      result_of_read = paint_line_in_current_scratchpad_raster(x1,
		      y1_1,x2,y2,color_value,paint_last_point_qm);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_line_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		x1 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x1 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		}
		x1 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		y1_1 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y1_1 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		}
		y1_1 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		x2 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x2 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		}
		x2 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		y2 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y2 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		}
		y2 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		color_value = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		}
		color_value = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		paint_last_point_qm = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qpaint_last_point_qm,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_boolean();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(color_value);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qpaint_last_point_qm,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  paint_last_point_qm = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_boolean();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(color_value);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_line_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_line_in_current_scratchpad_raster;
		}
		paint_last_point_qm = value;
	    }
	    paint_line_in_current_scratchpad_raster(x1,y1_1,x2,y2,
		    color_value,paint_last_point_qm);
	}
	temp = Nil;
    }
    result = VALUES_1(temp);
  end_handle_icp_paint_line_in_current_scratchpad_raster:
    return result;
}

/* PAINT-WIDE-LINE-IN-CURRENT-SCRATCHPAD-RASTER-1 */
Object paint_wide_line_in_current_scratchpad_raster_1(x1,y1_1,x2,y2,
	    color_value,line_width)
    Object x1, y1_1, x2, y2, color_value, line_width;
{
    Object temp, decff_1_arg, gensymed_symbol, tile_size, tile_arrays;
    Object number_of_rows_1, number_of_columns_1, tile_to_paint;
    Object current_scratchpad_raster, current_scratchpad_raster_tiled_p;
    SI_Long temp_1, temp_2, left_edge_column, top_edge_column;
    SI_Long right_edge_column, bottom_edge_column, i, ab_loop_bind_, j;
    SI_Long ab_loop_bind__1, x_offset, y_offset, x1_1, x2_1, y1_2, y2_1;
    Declare_special(2);

    x_note_fn_call(51,22);
    if (Current_scratchpad_raster_tiled_p) {
	temp = Current_x_offset_for_stored_raster_qm;
	if (Current_x_offset_for_stored_raster_qm) {
	    decff_1_arg = temp;
	    x1 = FIXNUM_MINUS(x1,decff_1_arg);
	    decff_1_arg = temp;
	    x2 = FIXNUM_MINUS(x2,decff_1_arg);
	    decff_1_arg = Current_y_offset_for_stored_raster_qm;
	    y1_1 = FIXNUM_MINUS(y1_1,decff_1_arg);
	    decff_1_arg = Current_y_offset_for_stored_raster_qm;
	    y2 = FIXNUM_MINUS(y2,decff_1_arg);
	    Current_x_offset_for_stored_raster_qm = Nil;
	}
	gensymed_symbol = Current_scratchpad_raster;
	tile_size = ISVREF(gensymed_symbol,(SI_Long)2L);
	tile_arrays = ISVREF(gensymed_symbol,(SI_Long)1L);
	number_of_rows_1 = FIXNUM_SUB1(ISVREF(tile_arrays,(SI_Long)1L));
	number_of_columns_1 = 
		FIXNUM_SUB1(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
		(SI_Long)1L),Maximum_in_place_array_size) ? 
		ISVREF(tile_arrays,(SI_Long)0L + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(SI_Long)2L),(SI_Long)0L),
		(SI_Long)1L));
	temp_1 = IFIX(FIXNUM_MIN(x1,x2)) / IFIX(tile_size);
	temp_2 = MAX(temp_1,(SI_Long)0L);
	temp_1 = IFIX(number_of_columns_1);
	left_edge_column = MIN(temp_2,temp_1);
	temp_1 = IFIX(FIXNUM_MIN(y1_1,y2)) / IFIX(tile_size);
	temp_2 = MAX(temp_1,(SI_Long)0L);
	temp_1 = IFIX(number_of_rows_1);
	top_edge_column = MIN(temp_2,temp_1);
	temp_1 = IFIX(FIXNUM_SUB1(FIXNUM_MAX(x1,x2))) / IFIX(tile_size);
	temp_2 = MAX(temp_1,left_edge_column);
	temp_1 = IFIX(number_of_columns_1);
	right_edge_column = MIN(temp_2,temp_1);
	temp_1 = IFIX(FIXNUM_SUB1(FIXNUM_MAX(y1_1,y2))) / IFIX(tile_size);
	temp_2 = MAX(temp_1,top_edge_column);
	temp_1 = IFIX(number_of_rows_1);
	bottom_edge_column = MIN(temp_2,temp_1);
	tile_to_paint = Nil;
	i = top_edge_column;
	ab_loop_bind_ = bottom_edge_column;
      next_loop:
	if (i > ab_loop_bind_)
	    goto end_loop;
	j = left_edge_column;
	ab_loop_bind__1 = right_edge_column;
      next_loop_1:
	if (j > ab_loop_bind__1)
	    goto end_loop_1;
	tile_to_paint = FIXNUM_LE(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
		(SI_Long)1L),Maximum_in_place_array_size) ? 
		ISVREF(tile_arrays,i + IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(i >>  -  - (SI_Long)10L) + 
		(SI_Long)2L),i & (SI_Long)1023L),(SI_Long)1L),
		Maximum_in_place_array_size) ? 
		ISVREF(FIXNUM_LE(ISVREF(tile_arrays,(SI_Long)1L),
		Maximum_in_place_array_size) ? ISVREF(tile_arrays,i + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(i >>  -  - (SI_Long)10L) + 
		(SI_Long)2L),i & (SI_Long)1023L),j + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,(SI_Long)1L),
		Maximum_in_place_array_size) ? ISVREF(tile_arrays,i + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(i >>  -  - (SI_Long)10L) + 
		(SI_Long)2L),i & (SI_Long)1023L),(j >>  -  - (SI_Long)10L) 
		+ (SI_Long)2L),j & (SI_Long)1023L);
	x_offset = j * IFIX(tile_size);
	y_offset = i * IFIX(tile_size);
	x1_1 = IFIX(x1) - x_offset;
	x2_1 = IFIX(x2) - x_offset;
	y1_2 = IFIX(y1_1) - y_offset;
	y2_1 = IFIX(y2) - y_offset;
	current_scratchpad_raster = tile_to_paint;
	current_scratchpad_raster_tiled_p = Nil;
	PUSH_SPECIAL(Current_scratchpad_raster_tiled_p,current_scratchpad_raster_tiled_p,
		1);
	  PUSH_SPECIAL(Current_scratchpad_raster,current_scratchpad_raster,0);
	    if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
		g2ext_p_draw_wide_line(IFIX(Current_scratchpad_raster),
			x1_1,y1_2,x2_1,y2_1,IFIX(color_value),
			IFIX(line_width));
	  POP_SPECIAL();
	POP_SPECIAL();
	j = j + (SI_Long)1L;
	goto next_loop_1;
      end_loop_1:;
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:;
	Current_x_offset_for_stored_raster_qm = temp;
    }
    else if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
	g2ext_p_draw_wide_line(IFIX(Current_scratchpad_raster),IFIX(x1),
		IFIX(y1_1),IFIX(x2),IFIX(y2),IFIX(color_value),
		IFIX(line_width));
    return VALUES_1(Nil);
}

static Object Qpaint_wide_line_in_current_scratchpad_raster;  /* paint-wide-line-in-current-scratchpad-raster */

static Object Qline_width;         /* line-width */

/* PAINT-WIDE-LINE-IN-CURRENT-SCRATCHPAD-RASTER */
Object paint_wide_line_in_current_scratchpad_raster(x1,y1_1,x2,y2,
	    color_value,paint_last_point_qm,line_width)
    Object x1, y1_1, x2, y2, color_value, paint_last_point_qm, line_width;
{
    Object index_of_top_of_backtrace_stack, temp, svref_arg_2, tracep;
    Object byte_count_before, current_icp_write_trace_level, tracep_1;
    Object byte_count_before_1, result_of_write, goal_color_value;
    Object scratchpad_raster, ab_loop_list_, color_value_for_this_raster;
    Object ab_loop_list__1, foreground_layer_p, temp_1, resumable_icp_state_1;
    Object icp_suspend_1, top, key;
    Declare_special(3);
    Object result;

    x_note_fn_call(51,23);
    if (Disable_resumability) {
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_wide_line_in_current_scratchpad_raster;
	  }
	  if (EQ(Current_scratchpad_raster_type,Qicp)) {
	      icp_message_functions_icp_prologue(Qpaint_wide_line_in_current_scratchpad_raster);
	      start_writing_icp_message(FIX((SI_Long)36L));
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_wide_line_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(x1);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(x1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(y1_1);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(y1_1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(x2);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(x2);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(y2);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(y2);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_unsigned_integer(color_value);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_unsigned_integer(color_value);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qpaint_last_point_qm,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_boolean(paint_last_point_qm);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qpaint_last_point_qm,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_boolean(paint_last_point_qm);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qline_width,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_unsigned_integer(line_width);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qline_width,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			result_of_write = 
				write_icp_unsigned_integer(line_width);
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_wide_line_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		  POP_SPECIAL();
	      }
	      else {
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(x1);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(x1);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(y1_1);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(y1_1);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(x2);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(x2);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(y2);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(y2);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_unsigned_integer(color_value);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_unsigned_integer(color_value);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qpaint_last_point_qm,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_boolean(paint_last_point_qm);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qpaint_last_point_qm,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_boolean(paint_last_point_qm);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qline_width,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_unsigned_integer(line_width);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qline_width,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_unsigned_integer(line_width);
	      }
	  }
	  else if (EQ(Current_scratchpad_raster_type,Qprinter))
	      funcall(8,aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)36L)),x1,y1_1,x2,y2,color_value,
		      paint_last_point_qm,line_width);
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p)
		  paint_wide_line_in_current_scratchpad_raster_1(x1,y1_1,
			  x2,y2,color_value,line_width);
	      goto next_loop;
	    end_loop:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qpaint_wide_line_in_current_scratchpad_raster,top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qpaint_wide_line_in_current_scratchpad_raster,top,Nil);
		goto end_paint_wide_line_in_current_scratchpad_raster;
	    }
	}
	x1 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : x1;
	y1_1 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : y1_1;
	x2 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : x2;
	y2 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : y2;
	color_value = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
		 TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : color_value;
	paint_last_point_qm = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : paint_last_point_qm;
	line_width = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : line_width;
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_wide_line_in_current_scratchpad_raster;
	  }
	  key = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		  TRUEP(Nil)) &&  
		  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		  resumable_icp_pop() : Current_scratchpad_raster_type;
	  if (EQ(key,Qicp)) {
	      if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) {
		  temp_1 = resumable_icp_pop();
		  if (! !(FIXNUMP(temp_1) && FIXNUM_LE(FIX((SI_Long)-128L),
			  temp_1) && FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
		      switch (INTEGER_TO_CHAR(temp_1)) {
			case 1:
			  goto l1;
			  break;
			case 2:
			  goto l2;
			  break;
			default:
			  break;
		      }
	      }
	      icp_message_functions_icp_prologue(Qpaint_wide_line_in_current_scratchpad_raster);
	    l1:
	      if (EQ(icp_suspend_1,
		      start_writing_icp_message(FIX((SI_Long)36L)))) {
		  resumable_icp_push(FIX((SI_Long)1L));
		  temp_1 = Icp_suspend;
		  goto end_block;
	      }
	    l2:
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_wide_line_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) 
			    : TRUEP(Nil)) {
			temp_1 = resumable_icp_pop();
			if (! !(FIXNUMP(temp_1) && 
				FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
				FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			    switch (INTEGER_TO_CHAR(temp_1)) {
			      case 1:
				goto l1_1;
				break;
			      case 2:
				goto l2_1;
				break;
			      case 3:
				goto l3;
				break;
			      case 4:
				goto l4;
				break;
			      case 5:
				goto l5;
				break;
			      case 6:
				goto l6;
				break;
			      case 7:
				goto l7;
				break;
			      default:
				break;
			    }
		    }
		  l1_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(x1))) {
			      resumable_icp_push(FIX((SI_Long)1L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(x1))) {
			resumable_icp_push(FIX((SI_Long)1L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l2_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
			      resumable_icp_push(FIX((SI_Long)2L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l3:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(x2))) {
			      resumable_icp_push(FIX((SI_Long)3L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(x2))) {
			resumable_icp_push(FIX((SI_Long)3L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l4:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(y2))) {
			      resumable_icp_push(FIX((SI_Long)4L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(y2))) {
			resumable_icp_push(FIX((SI_Long)4L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l5:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_unsigned_integer(color_value))) {
			      resumable_icp_push(FIX((SI_Long)5L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_unsigned_integer(color_value))) {
			resumable_icp_push(FIX((SI_Long)5L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l6:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,
				    Qpaint_last_point_qm,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_boolean(paint_last_point_qm))) {
			      resumable_icp_push(FIX((SI_Long)6L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qpaint_last_point_qm,
				      string_constant_1,Qargument,Nil,Nil,
				      Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_boolean(paint_last_point_qm))) {
			resumable_icp_push(FIX((SI_Long)6L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l7:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qline_width,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_unsigned_integer(line_width))) {
			      resumable_icp_push(FIX((SI_Long)7L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qline_width,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			  temp_1 = result_of_write;
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_unsigned_integer(line_width))) {
			resumable_icp_push(FIX((SI_Long)7L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		    else
			temp_1 = Nil;
		    goto end_block_1;
		  end_block_1:
		    if (EQ(icp_suspend_1,temp_1)) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			POP_SPECIAL();
			goto end_block;
		    }
		    else
			result_of_write = Nil;
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_wide_line_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		    temp_1 = result_of_write;
		  POP_SPECIAL();
	      }
	      else {
		  if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			  TRUEP(Nil)) {
		      temp_1 = resumable_icp_pop();
		      if (! !(FIXNUMP(temp_1) && 
			      FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
			      FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			  switch (INTEGER_TO_CHAR(temp_1)) {
			    case 1:
			      goto l1_2;
			      break;
			    case 2:
			      goto l2_2;
			      break;
			    case 3:
			      goto l3_1;
			      break;
			    case 4:
			      goto l4_1;
			      break;
			    case 5:
			      goto l5_1;
			      break;
			    case 6:
			      goto l6_1;
			      break;
			    case 7:
			      goto l7_1;
			      break;
			    default:
			      break;
			  }
		  }
		l1_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(x1))) {
			    resumable_icp_push(FIX((SI_Long)1L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(x1))) {
		      resumable_icp_push(FIX((SI_Long)1L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l2_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
			    resumable_icp_push(FIX((SI_Long)2L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l3_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(x2))) {
			    resumable_icp_push(FIX((SI_Long)3L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(x2))) {
		      resumable_icp_push(FIX((SI_Long)3L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l4_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(y2))) {
			    resumable_icp_push(FIX((SI_Long)4L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(y2))) {
		      resumable_icp_push(FIX((SI_Long)4L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l5_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_unsigned_integer(color_value))) {
			    resumable_icp_push(FIX((SI_Long)5L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_unsigned_integer(color_value))) {
		      resumable_icp_push(FIX((SI_Long)5L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l6_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,
				  Qpaint_last_point_qm,string_constant_1,
				  Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_boolean(paint_last_point_qm))) {
			    resumable_icp_push(FIX((SI_Long)6L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qpaint_last_point_qm,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_boolean(paint_last_point_qm))) {
		      resumable_icp_push(FIX((SI_Long)6L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l7_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qline_width,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_unsigned_integer(line_width))) {
			    resumable_icp_push(FIX((SI_Long)7L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qline_width,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
			temp_1 = result_of_write;
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_unsigned_integer(line_width))) {
		      resumable_icp_push(FIX((SI_Long)7L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		  else
		      temp_1 = Nil;
		  goto end_block_2;
		end_block_2:
		  if (EQ(icp_suspend_1,temp_1)) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block;
		  }
		  else
		      temp_1 = Nil;
	      }
	      goto end_block;
	    end_block:
	      if (EQ(icp_suspend_1,temp_1)) {
		  resumable_icp_push(key);
		  resumable_icp_push(line_width);
		  resumable_icp_push(paint_last_point_qm);
		  resumable_icp_push(color_value);
		  resumable_icp_push(y2);
		  resumable_icp_push(x2);
		  resumable_icp_push(y1_1);
		  resumable_icp_push(x1);
		  resumable_icp_push(Qpaint_wide_line_in_current_scratchpad_raster);
		  result = VALUES_1(Icp_suspend);
		  POP_SPECIAL();
		  goto end_paint_wide_line_in_current_scratchpad_raster;
	      }
	  }
	  else if (EQ(key,Qprinter))
	      funcall(8,aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)36L)),x1,y1_1,x2,y2,color_value,
		      paint_last_point_qm,line_width);
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop_1:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop_1;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop_1;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p)
		  paint_wide_line_in_current_scratchpad_raster_1(x1,y1_1,
			  x2,y2,color_value,line_width);
	      goto next_loop_1;
	    end_loop_1:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    result = VALUES_1(temp_1);
  end_paint_wide_line_in_current_scratchpad_raster:
    return result;
}

static Object Qhandle_icp_paint_wide_line_in_current_scratchpad_raster;  /* handle-icp-paint-wide-line-in-current-scratchpad-raster */

/* HANDLE-ICP-PAINT-WIDE-LINE-IN-CURRENT-SCRATCHPAD-RASTER */
Object handle_icp_paint_wide_line_in_current_scratchpad_raster()
{
    Object tracep, byte_count_before, current_icp_read_trace_level, tracep_1;
    Object byte_count_before_1, result_of_read, x1, y1_1, x2, y2, color_value;
    Object paint_last_point_qm, line_width, temp, resumable_icp_state_1;
    Object icp_suspend_1, top, value;
    Declare_special(2);
    Object result;

    x_note_fn_call(51,24);
    if (Disable_resumability) {
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_wide_line_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  x1 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y1_1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  y1_1 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  x2 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  y2 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_unsigned_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  color_value = read_icp_unsigned_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qpaint_last_point_qm,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_boolean();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qpaint_last_point_qm,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    paint_last_point_qm = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  paint_last_point_qm = read_icp_boolean();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qline_width,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_unsigned_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qline_width,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    line_width = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  line_width = read_icp_unsigned_integer();
	      result_of_read = 
		      paint_wide_line_in_current_scratchpad_raster(x1,y1_1,
		      x2,y2,color_value,paint_last_point_qm,line_width);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_wide_line_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x1 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		x1 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y1_1 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		y1_1 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x2 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		x2 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y2 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		y2 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_unsigned_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else
		color_value = read_icp_unsigned_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qpaint_last_point_qm,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_boolean();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qpaint_last_point_qm,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  paint_last_point_qm = result_of_read;
		POP_SPECIAL();
	    }
	    else
		paint_last_point_qm = read_icp_boolean();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qline_width,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_unsigned_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qline_width,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  line_width = result_of_read;
		POP_SPECIAL();
	    }
	    else
		line_width = read_icp_unsigned_integer();
	    paint_wide_line_in_current_scratchpad_raster(x1,y1_1,x2,y2,
		    color_value,paint_last_point_qm,line_width);
	}
	temp = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( 
		    !EQ(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster,
		    top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qhandle_icp_paint_wide_line_in_current_scratchpad_raster,
			top,Nil);
		goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
	    }
	}
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_wide_line_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  x1 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		  }
		  x1 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  y1_1 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y1_1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		  }
		  y1_1 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  x2 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		  }
		  x2 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  y2 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		  }
		  y2 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  color_value = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_unsigned_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		  }
		  color_value = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  paint_last_point_qm = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qpaint_last_point_qm,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_boolean();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(color_value);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qpaint_last_point_qm,string_constant_1,
				Qargument,T,result_of_read,Nil,Nil);
		    paint_last_point_qm = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_boolean();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(color_value);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		  }
		  paint_last_point_qm = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  line_width = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qline_width,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_unsigned_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(paint_last_point_qm);
			resumable_icp_push(color_value);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qline_width,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    line_width = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(paint_last_point_qm);
		      resumable_icp_push(color_value);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		  }
		  line_width = value;
	      }
	      result_of_read = 
		      paint_wide_line_in_current_scratchpad_raster(x1,y1_1,
		      x2,y2,color_value,paint_last_point_qm,line_width);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_wide_line_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		x1 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x1 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		}
		x1 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		y1_1 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y1_1 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		}
		y1_1 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		x2 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x2 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		}
		x2 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		y2 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y2 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		}
		y2 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		color_value = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		}
		color_value = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		paint_last_point_qm = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qpaint_last_point_qm,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_boolean();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(color_value);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qpaint_last_point_qm,string_constant_1,
			      Qargument,T,result_of_read,Nil,Nil);
		  paint_last_point_qm = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_boolean();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(color_value);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		}
		paint_last_point_qm = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		line_width = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qline_width,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(paint_last_point_qm);
		      resumable_icp_push(color_value);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qline_width,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  line_width = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(paint_last_point_qm);
		    resumable_icp_push(color_value);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_wide_line_in_current_scratchpad_raster;
		}
		line_width = value;
	    }
	    paint_wide_line_in_current_scratchpad_raster(x1,y1_1,x2,y2,
		    color_value,paint_last_point_qm,line_width);
	}
	temp = Nil;
    }
    result = VALUES_1(temp);
  end_handle_icp_paint_wide_line_in_current_scratchpad_raster:
    return result;
}

/* PAINT-ARC-OR-CIRCLE-IN-CURRENT-SCRATCHPAD-RASTER-1 */
Object paint_arc_or_circle_in_current_scratchpad_raster_1(x1,y1_1,x2,y2,x3,
	    y3,x_scale,y_scale,color_value,circle_qm,filled_qm)
    Object x1, y1_1, x2, y2, x3, y3, x_scale, y_scale, color_value, circle_qm;
    Object filled_qm;
{
    Object min_x, min_y, max_x, max_y, gensymed_symbol, tile_size, tile_arrays;
    Object number_of_rows_1, number_of_columns_1, tile_to_paint;
    Object region_and_tile_x_offset, region_and_tile_y_offset;
    Object current_scratchpad_raster, current_scratchpad_raster_tiled_p;
    SI_Long unshifted_result, temp, temp_1, left_edge_column, top_edge_column;
    SI_Long right_edge_column, bottom_edge_column, i, ab_loop_bind_, j;
    SI_Long ab_loop_bind__1;
    Declare_special(4);
    Object result;

    x_note_fn_call(51,25);
    if (Current_scratchpad_raster_tiled_p) {
	if (circle_qm)
	    result = compute_circle_bounding_box(x1,y1_1,x2,y2,x3,y3);
	else
	    result = compute_arc_bounding_box(x1,y1_1,x2,y2,x3,y3);
	MVS_4(result,min_x,min_y,max_x,max_y);
	if (IFIX(x_scale) == (SI_Long)4096L);
	else if (FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,x_scale) 
		&& FIXNUM_LT(x_scale,Isqrt_of_most_positive_fixnum) && 
		FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,min_x) && 
		FIXNUM_LT(min_x,Isqrt_of_most_positive_fixnum)) {
	    unshifted_result = IFIX(FIXNUM_TIMES(x_scale,min_x)) + 
		    (SI_Long)2048L;
	    min_x = FIX(unshifted_result >>  -  - (SI_Long)12L);
	}
	else
	    min_x = scalef_function(x_scale,min_x);
	if (IFIX(x_scale) == (SI_Long)4096L);
	else if (FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,x_scale) 
		&& FIXNUM_LT(x_scale,Isqrt_of_most_positive_fixnum) && 
		FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,max_x) && 
		FIXNUM_LT(max_x,Isqrt_of_most_positive_fixnum)) {
	    unshifted_result = IFIX(FIXNUM_TIMES(x_scale,max_x)) + 
		    (SI_Long)2048L;
	    max_x = FIX(unshifted_result >>  -  - (SI_Long)12L);
	}
	else
	    max_x = scalef_function(x_scale,max_x);
	if (IFIX(y_scale) == (SI_Long)4096L);
	else if (FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,y_scale) 
		&& FIXNUM_LT(y_scale,Isqrt_of_most_positive_fixnum) && 
		FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,min_y) && 
		FIXNUM_LT(min_y,Isqrt_of_most_positive_fixnum)) {
	    unshifted_result = IFIX(FIXNUM_TIMES(y_scale,min_y)) + 
		    (SI_Long)2048L;
	    min_y = FIX(unshifted_result >>  -  - (SI_Long)12L);
	}
	else
	    min_y = scalef_function(y_scale,min_y);
	if (IFIX(y_scale) == (SI_Long)4096L);
	else if (FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,y_scale) 
		&& FIXNUM_LT(y_scale,Isqrt_of_most_positive_fixnum) && 
		FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,max_y) && 
		FIXNUM_LT(max_y,Isqrt_of_most_positive_fixnum)) {
	    unshifted_result = IFIX(FIXNUM_TIMES(y_scale,max_y)) + 
		    (SI_Long)2048L;
	    max_y = FIX(unshifted_result >>  -  - (SI_Long)12L);
	}
	else
	    max_y = scalef_function(y_scale,max_y);
	if (Current_x_offset_for_stored_raster_qm) {
	    min_x = FIXNUM_MINUS(min_x,Current_x_offset_for_stored_raster_qm);
	    max_x = FIXNUM_MINUS(max_x,Current_x_offset_for_stored_raster_qm);
	    min_y = FIXNUM_MINUS(min_y,Current_y_offset_for_stored_raster_qm);
	    max_y = FIXNUM_MINUS(max_y,Current_y_offset_for_stored_raster_qm);
	}
	gensymed_symbol = Current_scratchpad_raster;
	tile_size = ISVREF(gensymed_symbol,(SI_Long)2L);
	tile_arrays = ISVREF(gensymed_symbol,(SI_Long)1L);
	number_of_rows_1 = FIXNUM_SUB1(ISVREF(tile_arrays,(SI_Long)1L));
	number_of_columns_1 = 
		FIXNUM_SUB1(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
		(SI_Long)1L),Maximum_in_place_array_size) ? 
		ISVREF(tile_arrays,(SI_Long)0L + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(SI_Long)2L),(SI_Long)0L),
		(SI_Long)1L));
	temp = IFIX(min_x) / IFIX(tile_size);
	temp_1 = MAX(temp,(SI_Long)0L);
	temp = IFIX(number_of_columns_1);
	left_edge_column = MIN(temp_1,temp);
	temp = IFIX(min_y) / IFIX(tile_size);
	temp_1 = MAX(temp,(SI_Long)0L);
	temp = IFIX(number_of_rows_1);
	top_edge_column = MIN(temp_1,temp);
	temp = IFIX(FIXNUM_SUB1(max_x)) / IFIX(tile_size);
	temp_1 = MAX(temp,left_edge_column);
	temp = IFIX(number_of_columns_1);
	right_edge_column = MIN(temp_1,temp);
	temp = IFIX(FIXNUM_SUB1(max_y)) / IFIX(tile_size);
	temp_1 = MAX(temp,top_edge_column);
	temp = IFIX(number_of_rows_1);
	bottom_edge_column = MIN(temp_1,temp);
	tile_to_paint = Nil;
	i = top_edge_column;
	ab_loop_bind_ = bottom_edge_column;
      next_loop:
	if (i > ab_loop_bind_)
	    goto end_loop;
	j = left_edge_column;
	ab_loop_bind__1 = right_edge_column;
      next_loop_1:
	if (j > ab_loop_bind__1)
	    goto end_loop_1;
	tile_to_paint = FIXNUM_LE(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,
		(SI_Long)1L),Maximum_in_place_array_size) ? 
		ISVREF(tile_arrays,i + IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(i >>  -  - (SI_Long)10L) + 
		(SI_Long)2L),i & (SI_Long)1023L),(SI_Long)1L),
		Maximum_in_place_array_size) ? 
		ISVREF(FIXNUM_LE(ISVREF(tile_arrays,(SI_Long)1L),
		Maximum_in_place_array_size) ? ISVREF(tile_arrays,i + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(i >>  -  - (SI_Long)10L) + 
		(SI_Long)2L),i & (SI_Long)1023L),j + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(FIXNUM_LE(ISVREF(tile_arrays,(SI_Long)1L),
		Maximum_in_place_array_size) ? ISVREF(tile_arrays,i + 
		IFIX(Managed_array_index_offset)) : 
		ISVREF(ISVREF(tile_arrays,(i >>  -  - (SI_Long)10L) + 
		(SI_Long)2L),i & (SI_Long)1023L),(j >>  -  - (SI_Long)10L) 
		+ (SI_Long)2L),j & (SI_Long)1023L);
	region_and_tile_x_offset = FIX(j * IFIX(tile_size));
	region_and_tile_y_offset = FIX(i * IFIX(tile_size));
	PUSH_SPECIAL(Region_and_tile_y_offset,region_and_tile_y_offset,3);
	  PUSH_SPECIAL(Region_and_tile_x_offset,region_and_tile_x_offset,2);
	    if (Current_x_offset_for_stored_raster_qm) {
		Region_and_tile_x_offset = 
			FIXNUM_ADD(Region_and_tile_x_offset,
			Current_x_offset_for_stored_raster_qm);
		Region_and_tile_y_offset = 
			FIXNUM_ADD(Region_and_tile_y_offset,
			Current_y_offset_for_stored_raster_qm);
	    }
	    current_scratchpad_raster = tile_to_paint;
	    current_scratchpad_raster_tiled_p = Nil;
	    PUSH_SPECIAL(Current_scratchpad_raster_tiled_p,current_scratchpad_raster_tiled_p,
		    1);
	      PUSH_SPECIAL(Current_scratchpad_raster,current_scratchpad_raster,
		      0);
		paint_arc_or_circle_in_current_scratchpad_raster_2(x1,y1_1,
			x2,y2,x3,y3,x_scale,y_scale,color_value,circle_qm,
			filled_qm);
	      POP_SPECIAL();
	    POP_SPECIAL();
	  POP_SPECIAL();
	POP_SPECIAL();
	j = j + (SI_Long)1L;
	goto next_loop_1;
      end_loop_1:;
	i = i + (SI_Long)1L;
	goto next_loop;
      end_loop:;
    }
    else
	paint_arc_or_circle_in_current_scratchpad_raster_2(x1,y1_1,x2,y2,
		x3,y3,x_scale,y_scale,color_value,circle_qm,filled_qm);
    return VALUES_1(Nil);
}

static Object float_constant;      /* 2.0 */

static Object float_constant_1;    /* 0.0 */

static Object float_constant_2;    /* 2.44140625E# */

static Object float_constant_3;    /* 3666.9298888372687 */

/* PAINT-ARC-OR-CIRCLE-IN-CURRENT-SCRATCHPAD-RASTER-2 */
Object paint_arc_or_circle_in_current_scratchpad_raster_2(x1,y1_1,x2,y2,x3,
	    y3,x_scale,y_scale,color_value,circle_qm,filled_qm)
    Object x1, y1_1, x2, y2, x3, y3, x_scale, y_scale, color_value, circle_qm;
    Object filled_qm;
{
    Object temp, temp_1, temp_2, c1, c2, determinant, temp_3, x_center;
    Object y_center, normalized_x_scale, normalized_y_scale, radius, diameter;
    SI_Long a1, b1, a2, b2, unshifted_result, scaled_x_offset, scaled_y_offset;
    SI_Long scaled_width, scaled_height, angle_1, angle_2, angle_3;
    SI_Long start_angle, inc_angle;
    XDeclare_area(1);
    XDeclare_frontier(1);

    x_note_fn_call(51,26);
    if (EQ(Current_scratchpad_raster_type,Qx11_pixmap)) {
	if (PUSH_LOCAL_ALLOCATION(Local_area,0,0)) {
	    a1 = IFIX(FIXNUM_MINUS(x2,x1));
	    b1 = IFIX(FIXNUM_MINUS(y2,y1_1));
	    temp = ltimes(x2,x2);
	    temp_1 = ltimes(y2,y2);
	    temp_2 = negate(ltimes(x1,x1));
	    c1 = divide(addn(4,temp,temp_1,temp_2,negate(ltimes(y1_1,
		    y1_1))),float_constant);
	    a2 = IFIX(FIXNUM_MINUS(x3,x2));
	    b2 = IFIX(FIXNUM_MINUS(y3,y2));
	    temp = ltimes(x3,x3);
	    temp_1 = ltimes(y3,y3);
	    temp_2 = negate(ltimes(x2,x2));
	    c2 = divide(addn(4,temp,temp_1,temp_2,negate(ltimes(y2,y2))),
		    float_constant);
	    determinant = minus(ltimes(FIX(a1),FIX(b2)),ltimes(FIX(a2),
		    FIX(b1)));
	    temp_2 = FIX((SI_Long)0L);
	    if (NUM_EQ(determinant,temp_2)) {
		if (IFIX(x_scale) == (SI_Long)4096L)
		    temp_2 = x1;
		else if (FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,
			x_scale) && FIXNUM_LT(x_scale,
			Isqrt_of_most_positive_fixnum) && 
			FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,
			x1) && FIXNUM_LT(x1,Isqrt_of_most_positive_fixnum)) {
		    unshifted_result = IFIX(FIXNUM_TIMES(x_scale,x1)) + 
			    (SI_Long)2048L;
		    temp_2 = FIX(unshifted_result >>  -  - (SI_Long)12L);
		}
		else
		    temp_2 = scalef_function(x_scale,x1);
		if (IFIX(y_scale) == (SI_Long)4096L)
		    temp_1 = y1_1;
		else if (FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,
			y_scale) && FIXNUM_LT(y_scale,
			Isqrt_of_most_positive_fixnum) && 
			FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,
			y1_1) && FIXNUM_LT(y1_1,
			    Isqrt_of_most_positive_fixnum)) {
		    unshifted_result = IFIX(FIXNUM_TIMES(y_scale,y1_1)) + 
			    (SI_Long)2048L;
		    temp_1 = FIX(unshifted_result >>  -  - (SI_Long)12L);
		}
		else
		    temp_1 = scalef_function(y_scale,y1_1);
		if (IFIX(x_scale) == (SI_Long)4096L)
		    temp = x3;
		else if (FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,
			x_scale) && FIXNUM_LT(x_scale,
			Isqrt_of_most_positive_fixnum) && 
			FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,
			x3) && FIXNUM_LT(x3,Isqrt_of_most_positive_fixnum)) {
		    unshifted_result = IFIX(FIXNUM_TIMES(x_scale,x3)) + 
			    (SI_Long)2048L;
		    temp = FIX(unshifted_result >>  -  - (SI_Long)12L);
		}
		else
		    temp = scalef_function(x_scale,x3);
		if (IFIX(y_scale) == (SI_Long)4096L)
		    temp_3 = y3;
		else if (FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,
			y_scale) && FIXNUM_LT(y_scale,
			Isqrt_of_most_positive_fixnum) && 
			FIXNUM_LT(Minus_of_isqrt_of_most_positive_fixnum,
			y3) && FIXNUM_LT(y3,Isqrt_of_most_positive_fixnum)) {
		    unshifted_result = IFIX(FIXNUM_TIMES(y_scale,y3)) + 
			    (SI_Long)2048L;
		    temp_3 = FIX(unshifted_result >>  -  - (SI_Long)12L);
		}
		else
		    temp_3 = scalef_function(y_scale,y3);
		paint_line_in_current_scratchpad_raster(temp_2,temp_1,temp,
			temp_3,color_value,T);
	    }
	    else {
		x_center = lfloat(divide(add(ltimes(c1,FIX(b2)),ltimes(c2,
			FIX( - b1))),determinant),float_constant_1);
		y_center = lfloat(divide(add(ltimes(c1,FIX( - a2)),
			ltimes(c2,FIX(a1))),determinant),float_constant_1);
		normalized_x_scale = ltimes(x_scale,float_constant_2);
		normalized_y_scale = ltimes(y_scale,float_constant_2);
		radius = compute_float_circle_radius(x_center,y_center,x1,
			y1_1);
		diameter = add(radius,radius);
		scaled_x_offset = IFIX(l_round(ltimes(minus(x_center,
			radius),normalized_x_scale),_));
		scaled_y_offset = IFIX(l_round(ltimes(minus(y_center,
			radius),normalized_y_scale),_));
		scaled_width = IFIX(l_round(ltimes(diameter,
			normalized_x_scale),_));
		scaled_height = IFIX(l_round(ltimes(diameter,
			normalized_y_scale),_));
		if (circle_qm) {
		    if (filled_qm)
			g2ext_p_fill_arc(IFIX(Current_scratchpad_raster),
				scaled_x_offset - 
				IFIX(Region_and_tile_x_offset),
				scaled_y_offset - 
				IFIX(Region_and_tile_y_offset),
				scaled_width,scaled_height,(SI_Long)0L,
				(SI_Long)23040L,IFIX(color_value));
		    else
			g2ext_p_draw_arc(IFIX(Current_scratchpad_raster),
				scaled_x_offset - 
				IFIX(Region_and_tile_x_offset),
				scaled_y_offset - 
				IFIX(Region_and_tile_y_offset),
				scaled_width,scaled_height,(SI_Long)0L,
				(SI_Long)23040L,IFIX(color_value));
		}
		else {
		    angle_1 = 
			    IFIX(l_round(ltimes(latan(ltimes(minus(y_center,
			    y1_1),normalized_y_scale),ltimes(minus(x1,
			    x_center),normalized_x_scale)),
			    float_constant_3),_));
		    angle_2 = 
			    IFIX(l_round(ltimes(latan(ltimes(minus(y_center,
			    y2),normalized_y_scale),ltimes(minus(x2,
			    x_center),normalized_x_scale)),
			    float_constant_3),_));
		    angle_3 = 
			    IFIX(l_round(ltimes(latan(ltimes(minus(y_center,
			    y3),normalized_y_scale),ltimes(minus(x3,
			    x_center),normalized_x_scale)),
			    float_constant_3),_));
		    start_angle = (SI_Long)0L;
		    inc_angle = (SI_Long)0L;
		    if (angle_1 < (SI_Long)0L)
			angle_1 = (SI_Long)23040L + angle_1;
		    if (angle_2 < (SI_Long)0L)
			angle_2 = (SI_Long)23040L + angle_2;
		    if (angle_3 < (SI_Long)0L)
			angle_3 = (SI_Long)23040L + angle_3;
		    if (angle_1 > angle_2) {
			if (angle_1 > angle_3) {
			    if (angle_2 > angle_3) {
				start_angle = angle_3;
				inc_angle = angle_1 - angle_3;
			    }
			    else {
				start_angle = angle_3;
				inc_angle = angle_1 - angle_3 - 
					(SI_Long)23040L;
			    }
			}
			else {
			    start_angle = angle_1;
			    inc_angle = angle_3 - angle_1 - (SI_Long)23040L;
			}
		    }
		    else if (angle_1 > angle_3) {
			start_angle = angle_3;
			inc_angle = angle_1 - angle_3 - (SI_Long)23040L;
		    }
		    else if (angle_2 > angle_3) {
			start_angle = angle_1;
			inc_angle = angle_3 - angle_1 - (SI_Long)23040L;
		    }
		    else {
			start_angle = angle_1;
			inc_angle = angle_3 - angle_1;
		    }
		    g2ext_p_draw_arc(IFIX(Current_scratchpad_raster),
			    scaled_x_offset - 
			    IFIX(Region_and_tile_x_offset),scaled_y_offset 
			    - IFIX(Region_and_tile_y_offset),scaled_width,
			    scaled_height,start_angle,inc_angle,
			    IFIX(color_value));
		}
	    }
	}
	POP_LOCAL_ALLOCATION(0,0);
    }
    return VALUES_1(Nil);
}

static Object Qpaint_arc_or_circle_in_current_scratchpad_raster;  /* paint-arc-or-circle-in-current-scratchpad-raster */

static Object Qx_scale;            /* x-scale */

static Object Qy_scale;            /* y-scale */

static Object Qcircle_qm;          /* circle? */

static Object Qfilled_qm;          /* filled? */

/* PAINT-ARC-OR-CIRCLE-IN-CURRENT-SCRATCHPAD-RASTER */
Object paint_arc_or_circle_in_current_scratchpad_raster(x1,y1_1,x2,y2,x3,
	    y3,x_scale,y_scale,color_value,circle_qm,filled_qm)
    Object x1, y1_1, x2, y2, x3, y3, x_scale, y_scale, color_value, circle_qm;
    Object filled_qm;
{
    Object index_of_top_of_backtrace_stack, temp, svref_arg_2, tracep;
    Object byte_count_before, current_icp_write_trace_level, tracep_1;
    Object byte_count_before_1, result_of_write, goal_color_value;
    Object scratchpad_raster, ab_loop_list_, color_value_for_this_raster;
    Object ab_loop_list__1, foreground_layer_p, temp_1, resumable_icp_state_1;
    Object icp_suspend_1, top, key;
    Declare_special(3);
    Object result;

    x_note_fn_call(51,27);
    if (Disable_resumability) {
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_arc_or_circle_in_current_scratchpad_raster;
	  }
	  if (EQ(Current_scratchpad_raster_type,Qicp)) {
	      icp_message_functions_icp_prologue(Qpaint_arc_or_circle_in_current_scratchpad_raster);
	      start_writing_icp_message(FIX((SI_Long)34L));
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_arc_or_circle_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(x1);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(x1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(y1_1);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(y1_1);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(x2);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(x2);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(y2);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(y2);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx3,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(x3);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx3,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(x3);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy3,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_integer(y3);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy3,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_integer(y3);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx_scale,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_unsigned_integer(x_scale);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx_scale,string_constant_1,Qargument,
				      Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_unsigned_integer(x_scale);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy_scale,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_unsigned_integer(y_scale);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy_scale,string_constant_1,Qargument,
				      Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_unsigned_integer(y_scale);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = 
				  write_icp_unsigned_integer(color_value);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_unsigned_integer(color_value);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcircle_qm,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_boolean(circle_qm);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcircle_qm,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			write_icp_boolean(circle_qm);
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qfilled_qm,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  result_of_write = write_icp_boolean(filled_qm);
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qfilled_qm,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else
			result_of_write = write_icp_boolean(filled_qm);
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_arc_or_circle_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		  POP_SPECIAL();
	      }
	      else {
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(x1);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(x1);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(y1_1);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(y1_1);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(x2);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(x2);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(y2);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(y2);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx3,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(x3);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx3,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(x3);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy3,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_integer(y3);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy3,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_integer(y3);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx_scale,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_unsigned_integer(x_scale);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx_scale,string_constant_1,Qargument,
				    Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_unsigned_integer(x_scale);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy_scale,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_unsigned_integer(y_scale);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy_scale,string_constant_1,Qargument,
				    Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_unsigned_integer(y_scale);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = 
				write_icp_unsigned_integer(color_value);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_unsigned_integer(color_value);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcircle_qm,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_boolean(circle_qm);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcircle_qm,string_constant_1,Qargument,
				    Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_boolean(circle_qm);
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qfilled_qm,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			result_of_write = write_icp_boolean(filled_qm);
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qfilled_qm,string_constant_1,Qargument,
				    Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else
		      write_icp_boolean(filled_qm);
	      }
	  }
	  else if (EQ(Current_scratchpad_raster_type,Qprinter))
	      funcall(12,aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)34L)),x1,y1_1,x2,y2,x3,y3,x_scale,
		      y_scale,color_value,circle_qm,filled_qm);
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p)
		  paint_arc_or_circle_in_current_scratchpad_raster_1(x1,
			  y1_1,x2,y2,x3,y3,x_scale,y_scale,color_value,
			  circle_qm,filled_qm);
	      goto next_loop;
	    end_loop:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qpaint_arc_or_circle_in_current_scratchpad_raster,top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qpaint_arc_or_circle_in_current_scratchpad_raster,
			top,Nil);
		goto end_paint_arc_or_circle_in_current_scratchpad_raster;
	    }
	}
	x1 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : x1;
	y1_1 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : y1_1;
	x2 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : x2;
	y2 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : y2;
	x3 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : x3;
	y3 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : y3;
	x_scale = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : x_scale;
	y_scale = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : y_scale;
	color_value = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
		 TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : color_value;
	circle_qm = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : circle_qm;
	filled_qm = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : filled_qm;
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = 
		      Qpaint_arc_or_circle_in_current_scratchpad_raster;
	  }
	  key = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		  TRUEP(Nil)) &&  
		  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		  resumable_icp_pop() : Current_scratchpad_raster_type;
	  if (EQ(key,Qicp)) {
	      if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) {
		  temp_1 = resumable_icp_pop();
		  if (! !(FIXNUMP(temp_1) && FIXNUM_LE(FIX((SI_Long)-128L),
			  temp_1) && FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
		      switch (INTEGER_TO_CHAR(temp_1)) {
			case 1:
			  goto l1;
			  break;
			case 2:
			  goto l2;
			  break;
			default:
			  break;
		      }
	      }
	      icp_message_functions_icp_prologue(Qpaint_arc_or_circle_in_current_scratchpad_raster);
	    l1:
	      if (EQ(icp_suspend_1,
		      start_writing_icp_message(FIX((SI_Long)34L)))) {
		  resumable_icp_push(FIX((SI_Long)1L));
		  temp_1 = Icp_suspend;
		  goto end_block;
	      }
	    l2:
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)2L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qpaint_arc_or_circle_in_current_scratchpad_raster,
			      string_constant,Qmessage,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  1);
		    if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) 
			    : TRUEP(Nil)) {
			temp_1 = resumable_icp_pop();
			if (! !(FIXNUMP(temp_1) && 
				FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
				FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			    switch (INTEGER_TO_CHAR(temp_1)) {
			      case 1:
				goto l1_1;
				break;
			      case 2:
				goto l2_1;
				break;
			      case 3:
				goto l3;
				break;
			      case 4:
				goto l4;
				break;
			      case 5:
				goto l5;
				break;
			      case 6:
				goto l6;
				break;
			      case 7:
				goto l7;
				break;
			      case 8:
				goto l8;
				break;
			      case 9:
				goto l9;
				break;
			      case 10:
				goto l10;
				break;
			      case 11:
				goto l11;
				break;
			      default:
				break;
			    }
		    }
		  l1_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(x1))) {
			      resumable_icp_push(FIX((SI_Long)1L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(x1))) {
			resumable_icp_push(FIX((SI_Long)1L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l2_1:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy1,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
			      resumable_icp_push(FIX((SI_Long)2L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy1,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l3:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(x2))) {
			      resumable_icp_push(FIX((SI_Long)3L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(x2))) {
			resumable_icp_push(FIX((SI_Long)3L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l4:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy2,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(y2))) {
			      resumable_icp_push(FIX((SI_Long)4L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy2,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(y2))) {
			resumable_icp_push(FIX((SI_Long)4L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l5:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx3,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(x3))) {
			      resumable_icp_push(FIX((SI_Long)5L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx3,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(x3))) {
			resumable_icp_push(FIX((SI_Long)5L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l6:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy3,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_integer(y3))) {
			      resumable_icp_push(FIX((SI_Long)6L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy3,string_constant_1,Qargument,Nil,
				      Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_integer(y3))) {
			resumable_icp_push(FIX((SI_Long)6L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l7:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qx_scale,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_unsigned_integer(x_scale))) {
			      resumable_icp_push(FIX((SI_Long)7L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qx_scale,string_constant_1,Qargument,
				      Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_unsigned_integer(x_scale))) {
			resumable_icp_push(FIX((SI_Long)7L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l8:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qy_scale,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_unsigned_integer(y_scale))) {
			      resumable_icp_push(FIX((SI_Long)8L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qy_scale,string_constant_1,Qargument,
				      Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_unsigned_integer(y_scale))) {
			resumable_icp_push(FIX((SI_Long)8L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l9:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,
				  write_icp_unsigned_integer(color_value))) {
			      resumable_icp_push(FIX((SI_Long)9L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcolor_value,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,
			    write_icp_unsigned_integer(color_value))) {
			resumable_icp_push(FIX((SI_Long)9L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l10:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qcircle_qm,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_boolean(circle_qm))) {
			      resumable_icp_push(FIX((SI_Long)10L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qcircle_qm,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_boolean(circle_qm))) {
			resumable_icp_push(FIX((SI_Long)10L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		  l11:
		    if (Icp_write_trace_cutoff_level_qm) {
			tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? 
				T : Nil;
			if (tracep_1);
			else
			    tracep_1 = 
				    IFIX(Icp_write_trace_cutoff_level_qm) 
				    >= (SI_Long)3L ? T : Nil;
			if (tracep_1) {
			    emit_icp_write_trace(T,Nil,Nil,Qfilled_qm,
				    string_constant_1,Qargument,Nil,Nil,
				    Nil,Nil);
			    byte_count_before_1 = 
				    instantaneous_icp_writer_byte_count();
			}
			else
			    byte_count_before_1 = Nil;
			current_icp_write_trace_level = 
				FIXNUM_ADD1(Current_icp_write_trace_level);
			PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
				0);
			  if (EQ(icp_suspend_1,write_icp_boolean(filled_qm))) {
			      resumable_icp_push(FIX((SI_Long)11L));
			      temp_1 = Icp_suspend;
			      POP_SPECIAL();
			      goto end_block_1;
			  }
			  else
			      result_of_write = Nil;
			  if (tracep_1)
			      emit_icp_write_trace(Nil,byte_count_before_1,
				      instantaneous_icp_writer_byte_count(),
				      Qfilled_qm,string_constant_1,
				      Qargument,Nil,Nil,Nil,Nil);
			  temp_1 = result_of_write;
			POP_SPECIAL();
		    }
		    else if (EQ(icp_suspend_1,write_icp_boolean(filled_qm))) {
			resumable_icp_push(FIX((SI_Long)11L));
			temp_1 = Icp_suspend;
			goto end_block_1;
		    }
		    else
			temp_1 = Nil;
		    goto end_block_1;
		  end_block_1:
		    if (EQ(icp_suspend_1,temp_1)) {
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			POP_SPECIAL();
			goto end_block;
		    }
		    else
			result_of_write = Nil;
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qpaint_arc_or_circle_in_current_scratchpad_raster,
				string_constant,Qmessage,Nil,Nil,Nil,Nil);
		    temp_1 = result_of_write;
		  POP_SPECIAL();
	      }
	      else {
		  if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			  TRUEP(Nil)) {
		      temp_1 = resumable_icp_pop();
		      if (! !(FIXNUMP(temp_1) && 
			      FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
			      FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			  switch (INTEGER_TO_CHAR(temp_1)) {
			    case 1:
			      goto l1_2;
			      break;
			    case 2:
			      goto l2_2;
			      break;
			    case 3:
			      goto l3_1;
			      break;
			    case 4:
			      goto l4_1;
			      break;
			    case 5:
			      goto l5_1;
			      break;
			    case 6:
			      goto l6_1;
			      break;
			    case 7:
			      goto l7_1;
			      break;
			    case 8:
			      goto l8_1;
			      break;
			    case 9:
			      goto l9_1;
			      break;
			    case 10:
			      goto l10_1;
			      break;
			    case 11:
			      goto l11_1;
			      break;
			    default:
			      break;
			  }
		  }
		l1_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(x1))) {
			    resumable_icp_push(FIX((SI_Long)1L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(x1))) {
		      resumable_icp_push(FIX((SI_Long)1L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l2_2:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy1,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
			    resumable_icp_push(FIX((SI_Long)2L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy1,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(y1_1))) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l3_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(x2))) {
			    resumable_icp_push(FIX((SI_Long)3L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(x2))) {
		      resumable_icp_push(FIX((SI_Long)3L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l4_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy2,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(y2))) {
			    resumable_icp_push(FIX((SI_Long)4L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy2,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(y2))) {
		      resumable_icp_push(FIX((SI_Long)4L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l5_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx3,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(x3))) {
			    resumable_icp_push(FIX((SI_Long)5L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx3,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(x3))) {
		      resumable_icp_push(FIX((SI_Long)5L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l6_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy3,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_integer(y3))) {
			    resumable_icp_push(FIX((SI_Long)6L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy3,string_constant_1,Qargument,Nil,
				    Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_integer(y3))) {
		      resumable_icp_push(FIX((SI_Long)6L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l7_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qx_scale,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_unsigned_integer(x_scale))) {
			    resumable_icp_push(FIX((SI_Long)7L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qx_scale,string_constant_1,Qargument,
				    Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_unsigned_integer(x_scale))) {
		      resumable_icp_push(FIX((SI_Long)7L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l8_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qy_scale,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_unsigned_integer(y_scale))) {
			    resumable_icp_push(FIX((SI_Long)8L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qy_scale,string_constant_1,Qargument,
				    Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_unsigned_integer(y_scale))) {
		      resumable_icp_push(FIX((SI_Long)8L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l9_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcolor_value,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,
				write_icp_unsigned_integer(color_value))) {
			    resumable_icp_push(FIX((SI_Long)9L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcolor_value,string_constant_1,
				    Qargument,Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,
			  write_icp_unsigned_integer(color_value))) {
		      resumable_icp_push(FIX((SI_Long)9L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l10_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qcircle_qm,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_boolean(circle_qm))) {
			    resumable_icp_push(FIX((SI_Long)10L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qcircle_qm,string_constant_1,Qargument,
				    Nil,Nil,Nil,Nil);
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_boolean(circle_qm))) {
		      resumable_icp_push(FIX((SI_Long)10L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		l11_1:
		  if (Icp_write_trace_cutoff_level_qm) {
		      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		      if (tracep);
		      else
			  tracep = IFIX(Icp_write_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		      if (tracep) {
			  emit_icp_write_trace(T,Nil,Nil,Qfilled_qm,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			  byte_count_before = 
				  instantaneous_icp_writer_byte_count();
		      }
		      else
			  byte_count_before = Nil;
		      current_icp_write_trace_level = 
			      FIXNUM_ADD1(Current_icp_write_trace_level);
		      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			      0);
			if (EQ(icp_suspend_1,write_icp_boolean(filled_qm))) {
			    resumable_icp_push(FIX((SI_Long)11L));
			    temp_1 = Icp_suspend;
			    POP_SPECIAL();
			    goto end_block_2;
			}
			else
			    result_of_write = Nil;
			if (tracep)
			    emit_icp_write_trace(Nil,byte_count_before,
				    instantaneous_icp_writer_byte_count(),
				    Qfilled_qm,string_constant_1,Qargument,
				    Nil,Nil,Nil,Nil);
			temp_1 = result_of_write;
		      POP_SPECIAL();
		  }
		  else if (EQ(icp_suspend_1,write_icp_boolean(filled_qm))) {
		      resumable_icp_push(FIX((SI_Long)11L));
		      temp_1 = Icp_suspend;
		      goto end_block_2;
		  }
		  else
		      temp_1 = Nil;
		  goto end_block_2;
		end_block_2:
		  if (EQ(icp_suspend_1,temp_1)) {
		      resumable_icp_push(FIX((SI_Long)2L));
		      temp_1 = Icp_suspend;
		      goto end_block;
		  }
		  else
		      temp_1 = Nil;
	      }
	      goto end_block;
	    end_block:
	      if (EQ(icp_suspend_1,temp_1)) {
		  resumable_icp_push(key);
		  resumable_icp_push(filled_qm);
		  resumable_icp_push(circle_qm);
		  resumable_icp_push(color_value);
		  resumable_icp_push(y_scale);
		  resumable_icp_push(x_scale);
		  resumable_icp_push(y3);
		  resumable_icp_push(x3);
		  resumable_icp_push(y2);
		  resumable_icp_push(x2);
		  resumable_icp_push(y1_1);
		  resumable_icp_push(x1);
		  resumable_icp_push(Qpaint_arc_or_circle_in_current_scratchpad_raster);
		  result = VALUES_1(Icp_suspend);
		  POP_SPECIAL();
		  goto end_paint_arc_or_circle_in_current_scratchpad_raster;
	      }
	  }
	  else if (EQ(key,Qprinter))
	      funcall(12,aref1(Icp_printing_message_handler_array,
		      FIX((SI_Long)34L)),x1,y1_1,x2,y2,x3,y3,x_scale,
		      y_scale,color_value,circle_qm,filled_qm);
	  else {
	      goal_color_value = color_value;
	      scratchpad_raster = Nil;
	      ab_loop_list_ = On_monochrome_raster_list_p ? 
		      Current_scratchpad_raster_list : list_constant;
	      color_value_for_this_raster = Nil;
	      ab_loop_list__1 = On_monochrome_raster_list_p ? 
		      Current_scratchpad_color_value_list : list_constant;
	    next_loop_1:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop_1;
	      scratchpad_raster = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop_1;
	      color_value_for_this_raster = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      foreground_layer_p = On_monochrome_raster_list_p ? 
		      (FIXNUM_EQ(goal_color_value,
		      color_value_for_this_raster) ? T : Nil) : Qnil;
	      if (On_monochrome_raster_list_p) {
		  color_value = foreground_layer_p ? FIX((SI_Long)1L) : 
			  FIX((SI_Long)0L);
		  Current_scratchpad_raster = scratchpad_raster;
	      }
	      if ( !TRUEP(On_monochrome_raster_list_p) ||  
		      !TRUEP(Paint_only_target_monochrome_raster_p) || 
		      foreground_layer_p)
		  paint_arc_or_circle_in_current_scratchpad_raster_1(x1,
			  y1_1,x2,y2,x3,y3,x_scale,y_scale,color_value,
			  circle_qm,filled_qm);
	      goto next_loop_1;
	    end_loop_1:;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    result = VALUES_1(temp_1);
  end_paint_arc_or_circle_in_current_scratchpad_raster:
    return result;
}

static Object Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster;  /* handle-icp-paint-arc-or-circle-in-current-scratchpad-raster */

/* HANDLE-ICP-PAINT-ARC-OR-CIRCLE-IN-CURRENT-SCRATCHPAD-RASTER */
Object handle_icp_paint_arc_or_circle_in_current_scratchpad_raster()
{
    Object tracep, byte_count_before, current_icp_read_trace_level, tracep_1;
    Object byte_count_before_1, result_of_read, x1, y1_1, x2, y2, x3, y3;
    Object x_scale, y_scale, color_value, circle_qm, filled_qm, temp;
    Object resumable_icp_state_1, icp_suspend_1, top, value;
    Declare_special(2);
    Object result;

    x_note_fn_call(51,28);
    if (Disable_resumability) {
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_arc_or_circle_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  x1 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y1_1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  y1_1 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  x2 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  y2 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx3,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx3,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x3 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  x3 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy3,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy3,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y3 = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  y3 = read_icp_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx_scale,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_unsigned_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qx_scale,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x_scale = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  x_scale = read_icp_unsigned_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy_scale,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_unsigned_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qy_scale,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y_scale = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  y_scale = read_icp_unsigned_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_unsigned_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  color_value = read_icp_unsigned_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcircle_qm,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_boolean();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcircle_qm,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    circle_qm = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  circle_qm = read_icp_boolean();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qfilled_qm,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_boolean();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qfilled_qm,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    filled_qm = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  filled_qm = read_icp_boolean();
	      result_of_read = 
		      paint_arc_or_circle_in_current_scratchpad_raster(x1,
		      y1_1,x2,y2,x3,y3,x_scale,y_scale,color_value,
		      circle_qm,filled_qm);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_arc_or_circle_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x1 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		x1 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y1_1 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		y1_1 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x2 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		x2 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y2 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		y2 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx3,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx3,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x3 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		x3 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy3,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy3,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y3 = result_of_read;
		POP_SPECIAL();
	    }
	    else
		y3 = read_icp_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx_scale,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_unsigned_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qx_scale,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  x_scale = result_of_read;
		POP_SPECIAL();
	    }
	    else
		x_scale = read_icp_unsigned_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy_scale,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_unsigned_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qy_scale,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  y_scale = result_of_read;
		POP_SPECIAL();
	    }
	    else
		y_scale = read_icp_unsigned_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_unsigned_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else
		color_value = read_icp_unsigned_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcircle_qm,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_boolean();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcircle_qm,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  circle_qm = result_of_read;
		POP_SPECIAL();
	    }
	    else
		circle_qm = read_icp_boolean();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qfilled_qm,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_boolean();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qfilled_qm,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  filled_qm = result_of_read;
		POP_SPECIAL();
	    }
	    else
		filled_qm = read_icp_boolean();
	    paint_arc_or_circle_in_current_scratchpad_raster(x1,y1_1,x2,y2,
		    x3,y3,x_scale,y_scale,color_value,circle_qm,filled_qm);
	}
	temp = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( 
		    !EQ(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster,
		    top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster,
			top,Nil);
		goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
	    }
	}
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qpaint_arc_or_circle_in_current_scratchpad_raster,
			string_constant_4,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  x1 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  x1 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  y1_1 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy1,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y1_1 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  y1_1 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  x2 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  x2 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  y2 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy2,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y2 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  y2 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  x3 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx3,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qx3,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x3 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  x3 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  y3 = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy3,string_constant_1,
			      Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(x3);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),Qy3,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y3 = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  y3 = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  x_scale = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qx_scale,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_unsigned_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(y3);
			resumable_icp_push(x3);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qx_scale,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    x_scale = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y3);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  x_scale = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  y_scale = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qy_scale,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_unsigned_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(x_scale);
			resumable_icp_push(y3);
			resumable_icp_push(x3);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qy_scale,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    y_scale = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x_scale);
		      resumable_icp_push(y3);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  y_scale = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  color_value = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_unsigned_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(y_scale);
			resumable_icp_push(x_scale);
			resumable_icp_push(y3);
			resumable_icp_push(x3);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcolor_value,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    color_value = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y_scale);
		      resumable_icp_push(x_scale);
		      resumable_icp_push(y3);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  color_value = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  circle_qm = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qcircle_qm,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_boolean();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(color_value);
			resumable_icp_push(y_scale);
			resumable_icp_push(x_scale);
			resumable_icp_push(y3);
			resumable_icp_push(x3);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcircle_qm,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    circle_qm = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_boolean();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(color_value);
		      resumable_icp_push(y_scale);
		      resumable_icp_push(x_scale);
		      resumable_icp_push(y3);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  circle_qm = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  filled_qm = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qfilled_qm,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_boolean();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(circle_qm);
			resumable_icp_push(color_value);
			resumable_icp_push(y_scale);
			resumable_icp_push(x_scale);
			resumable_icp_push(y3);
			resumable_icp_push(x3);
			resumable_icp_push(y2);
			resumable_icp_push(x2);
			resumable_icp_push(y1_1);
			resumable_icp_push(x1);
			resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qfilled_qm,string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    filled_qm = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_boolean();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(circle_qm);
		      resumable_icp_push(color_value);
		      resumable_icp_push(y_scale);
		      resumable_icp_push(x_scale);
		      resumable_icp_push(y3);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  filled_qm = value;
	      }
	      result_of_read = 
		      paint_arc_or_circle_in_current_scratchpad_raster(x1,
		      y1_1,x2,y2,x3,y3,x_scale,y_scale,color_value,
		      circle_qm,filled_qm);
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qpaint_arc_or_circle_in_current_scratchpad_raster,
			  string_constant_4,Qmessage,Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		x1 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x1 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		}
		x1 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		y1_1 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy1,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy1,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y1_1 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		}
		y1_1 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		x2 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x2 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		}
		x2 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		y2 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy2,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy2,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y2 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		}
		y2 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		x3 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx3,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qx3,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  x3 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		}
		x3 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		y3 = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy3,string_constant_1,
			    Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),Qy3,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  y3 = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(x3);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		}
		y3 = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		x_scale = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qx_scale,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y3);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qx_scale,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  x_scale = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(y3);
		    resumable_icp_push(x3);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		}
		x_scale = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		y_scale = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qy_scale,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(x_scale);
		      resumable_icp_push(y3);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qy_scale,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  y_scale = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(x_scale);
		    resumable_icp_push(y3);
		    resumable_icp_push(x3);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		}
		y_scale = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		color_value = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcolor_value,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(y_scale);
		      resumable_icp_push(x_scale);
		      resumable_icp_push(y3);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcolor_value,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  color_value = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(y_scale);
		    resumable_icp_push(x_scale);
		    resumable_icp_push(y3);
		    resumable_icp_push(x3);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		}
		color_value = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		circle_qm = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qcircle_qm,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_boolean();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(color_value);
		      resumable_icp_push(y_scale);
		      resumable_icp_push(x_scale);
		      resumable_icp_push(y3);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcircle_qm,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  circle_qm = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_boolean();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(color_value);
		    resumable_icp_push(y_scale);
		    resumable_icp_push(x_scale);
		    resumable_icp_push(y3);
		    resumable_icp_push(x3);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		}
		circle_qm = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		filled_qm = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qfilled_qm,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_boolean();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(circle_qm);
		      resumable_icp_push(color_value);
		      resumable_icp_push(y_scale);
		      resumable_icp_push(x_scale);
		      resumable_icp_push(y3);
		      resumable_icp_push(x3);
		      resumable_icp_push(y2);
		      resumable_icp_push(x2);
		      resumable_icp_push(y1_1);
		      resumable_icp_push(x1);
		      resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qfilled_qm,string_constant_1,Qargument,T,
			      result_of_read,Nil,Nil);
		  filled_qm = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_boolean();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(circle_qm);
		    resumable_icp_push(color_value);
		    resumable_icp_push(y_scale);
		    resumable_icp_push(x_scale);
		    resumable_icp_push(y3);
		    resumable_icp_push(x3);
		    resumable_icp_push(y2);
		    resumable_icp_push(x2);
		    resumable_icp_push(y1_1);
		    resumable_icp_push(x1);
		    resumable_icp_push(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster;
		}
		filled_qm = value;
	    }
	    paint_arc_or_circle_in_current_scratchpad_raster(x1,y1_1,x2,y2,
		    x3,y3,x_scale,y_scale,color_value,circle_qm,filled_qm);
	}
	temp = Nil;
    }
    result = VALUES_1(temp);
  end_handle_icp_paint_arc_or_circle_in_current_scratchpad_raster:
    return result;
}

/* CIRCLE-CONVERT-FLOAT-TO-INTEGER */
Object circle_convert_float_to_integer(float_1,decimal_point_shift_factor)
    Object float_1, decimal_point_shift_factor;
{
    Object temp_1;
    double temp, temp_2;

    x_note_fn_call(51,29);
    temp = DOUBLE_FLOAT_TO_DOUBLE(float_1);
    temp_1 = lfloat(decimal_point_shift_factor,float_constant_1);
    temp_2 = DOUBLE_FLOAT_TO_DOUBLE(temp_1);
    return l_round(DOUBLE_TO_DOUBLE_FLOAT(temp * temp_2),_);
}

/* QUADRANT-OF-POINT */
Object quadrant_of_point(x,y)
    Object x, y;
{
    Object temp;

    x_note_fn_call(51,30);
    temp = FIX((SI_Long)0L);
    if (NUM_LT(x,temp)) {
	temp = FIX((SI_Long)0L);
	if (NUM_LT(y,temp))
	    return VALUES_1(FIX((SI_Long)3L));
	else
	    return VALUES_1(FIX((SI_Long)2L));
    }
    else {
	temp = FIX((SI_Long)0L);
	if (NUM_LT(y,temp))
	    return VALUES_1(FIX((SI_Long)4L));
	else
	    return VALUES_1(FIX((SI_Long)1L));
    }
}

/* COMPUTE-FLOAT-CIRCLE-RADIUS */
Object compute_float_circle_radius(x_center,y_center,x1,y1_1)
    Object x_center, y_center, x1, y1_1;
{
    Object number, number_1;

    x_note_fn_call(51,31);
    number = minus(x1,x_center);
    number_1 = minus(y1_1,y_center);
    return lfloat(lsqrt(add(ltimes(number,number),ltimes(number_1,
	    number_1))),float_constant_1);
}

/* CLOCKWISE-ARC? */
Object clockwise_arc_qm(x1,y1_1,x2,y2,x3,y3)
    Object x1, y1_1, x2, y2, x3, y3;
{
    x_note_fn_call(51,32);
    return minus(ltimes(minus(x2,x1),minus(y3,y1_1)),ltimes(minus(x3,x1),
	    minus(y2,y1_1)));
}

/* CALCULATE-CENTER-OF-CIRCLE */
Object calculate_center_of_circle(x1_init,y1_init,x2_init,y2_init,x3_init,
	    y3_init)
    Object x1_init, y1_init, x2_init, y2_init, x3_init, y3_init;
{
    Object temp, temp_1, temp_2, c1, c2, determinant, x_center, y_center;
    SI_Long x1, y1_1, x2, y2, x3, y3, a1, b1, a2, b2;

    x_note_fn_call(51,33);
    x1 = IFIX(x1_init);
    y1_1 = IFIX(y1_init);
    x2 = IFIX(x2_init);
    y2 = IFIX(y2_init);
    x3 = IFIX(x3_init);
    y3 = IFIX(y3_init);
    a1 = x2 - x1;
    b1 = y2 - y1_1;
    temp = ltimes(FIX(x2),FIX(x2));
    temp_1 = ltimes(FIX(y2),FIX(y2));
    temp_2 = negate(ltimes(FIX(x1),FIX(x1)));
    c1 = divide(addn(4,temp,temp_1,temp_2,negate(ltimes(FIX(y1_1),
	    FIX(y1_1)))),float_constant);
    a2 = x3 - x2;
    b2 = y3 - y2;
    temp = ltimes(FIX(x3),FIX(x3));
    temp_1 = ltimes(FIX(y3),FIX(y3));
    temp_2 = negate(ltimes(FIX(x2),FIX(x2)));
    c2 = divide(addn(4,temp,temp_1,temp_2,negate(ltimes(FIX(y2),FIX(y2)))),
	    float_constant);
    determinant = minus(ltimes(FIX(a1),FIX(b2)),ltimes(FIX(a2),FIX(b1)));
    temp_2 = FIX((SI_Long)0L);
    if (NUM_EQ(temp_2,determinant))
	return VALUES_1(Nil);
    else {
	temp_2 = ltimes(c1,FIX(b2));
	x_center = divide(add(temp_2,ltimes(c2,negate(FIX(b1)))),determinant);
	temp_2 = ltimes(c1,negate(FIX(a2)));
	y_center = divide(add(temp_2,ltimes(c2,FIX(a1))),determinant);
	return VALUES_2(x_center,y_center);
    }
}

static Object float_constant_4;    /* 0.5 */

/* CALCULATE-CENTER-AND-RADIUS-OF-CIRCLE */
Object calculate_center_and_radius_of_circle(x1,y1_1,x2,y2,x3,y3)
    Object x1, y1_1, x2, y2, x3, y3;
{
    Object fixnum_x_center_qm, fixnum_y_center_qm, fixnum_radius_qm;
    Object x_center_qm, y_center_qm, temp, d1, d2;
    XDeclare_area(1);
    XDeclare_frontier(1);
    Object result;

    x_note_fn_call(51,34);
    fixnum_x_center_qm = Nil;
    fixnum_y_center_qm = Nil;
    fixnum_radius_qm = Nil;
    if (PUSH_LOCAL_ALLOCATION(Local_area,0,0)) {
	result = calculate_center_of_circle(x1,y1_1,x2,y2,x3,y3);
	MVS_2(result,x_center_qm,y_center_qm);
	if (x_center_qm && y_center_qm) {
	    temp = FIX((SI_Long)0L);
	    fixnum_x_center_qm = ltruncate(NUM_GT(x_center_qm,temp) ? 
		    add(x_center_qm,float_constant_4) : minus(x_center_qm,
		    float_constant_4),_);
	    temp = FIX((SI_Long)0L);
	    fixnum_y_center_qm = ltruncate(NUM_GT(y_center_qm,temp) ? 
		    add(y_center_qm,float_constant_4) : minus(y_center_qm,
		    float_constant_4),_);
	    d1 = minus(x1,fixnum_x_center_qm);
	    d2 = minus(y1_1,fixnum_y_center_qm);
	    fixnum_radius_qm = isqrt(FIXNUM_ADD(FIXNUM_TIMES(d1,d1),
		    FIXNUM_TIMES(d2,d2)));
	}
    }
    POP_LOCAL_ALLOCATION(0,0);
    return VALUES_3(fixnum_x_center_qm,fixnum_y_center_qm,fixnum_radius_qm);
}

/* COMPUTE-ARC-BOUNDING-BOX */
Object compute_arc_bounding_box(x1_init,y1_init,x2_init,y2_init,x3_init,
	    y3_init)
    Object x1_init, y1_init, x2_init, y2_init, x3_init, y3_init;
{
    Object min_x, max_x, min_y, max_y, number, temp_1, x1_temp, y1_temp;
    Object center_x, center_y, radius, temp_2;
    SI_Long x1, y1_1, x2, y2, x3, y3, temp, arc_direction;
    SI_Long cardinal_point_clipping_margin;
    XDeclare_area(2);
    XDeclare_frontier(2);
    Object result;

    x_note_fn_call(51,35);
    x1 = IFIX(x1_init);
    y1_1 = IFIX(y1_init);
    x2 = IFIX(x2_init);
    y2 = IFIX(y2_init);
    x3 = IFIX(x3_init);
    y3 = IFIX(y3_init);
    temp = MIN(x1,x2);
    min_x = FIX(MIN(temp,x3));
    temp = MAX(x1,x2);
    max_x = FIX(MAX(temp,x3));
    temp = MIN(y1_1,y2);
    min_y = FIX(MIN(temp,y3));
    temp = MAX(y1_1,y2);
    max_y = FIX(MAX(temp,y3));
    if (PUSH_LOCAL_ALLOCATION(Local_area,1,1)) {
	number = clockwise_arc_qm(FIX(x1),FIX(y1_1),FIX(x2),FIX(y2),
		FIX(x3),FIX(y3));
	temp_1 = FIX((SI_Long)0L);
	arc_direction = IFIX(ltruncate(NUM_GT(number,temp_1) ? add(number,
		float_constant_4) : minus(number,float_constant_4),_));
	if ( !(arc_direction == (SI_Long)0L)) {
	    if (arc_direction < (SI_Long)0L) {
		x1_temp = FIX(x3);
		x3 = x1;
		x1 = IFIX(x1_temp);
		y1_temp = FIX(y3);
		y3 = y1_1;
		y1_1 = IFIX(y1_temp);
	    }
	    if (PUSH_LOCAL_ALLOCATION(Local_area,0,0)) {
		result = calculate_center_of_circle(FIX(x1),FIX(y1_1),
			FIX(x2),FIX(y2),FIX(x3),FIX(y3));
		MVS_2(result,center_x,center_y);
		radius = compute_float_circle_radius(center_x,center_y,
			FIX(x1),FIX(y1_1));
		cardinal_point_clipping_margin = (SI_Long)1L;
		temp_1 = clockwise_arc_qm(FIX(x1),FIX(y1_1),center_x,
			minus(center_y,radius),FIX(x3),FIX(y3));
		temp_2 = FIX((SI_Long)0L);
		if (NUM_GT(temp_1,temp_2))
		    min_y = l_round(minusn(3,center_y,radius,
			    FIX(cardinal_point_clipping_margin)),_);
		temp_1 = clockwise_arc_qm(FIX(x1),FIX(y1_1),minus(center_x,
			radius),center_y,FIX(x3),FIX(y3));
		temp_2 = FIX((SI_Long)0L);
		if (NUM_GT(temp_1,temp_2))
		    min_x = l_round(minusn(3,center_x,radius,
			    FIX(cardinal_point_clipping_margin)),_);
		temp_1 = clockwise_arc_qm(FIX(x1),FIX(y1_1),add(center_x,
			radius),center_y,FIX(x3),FIX(y3));
		temp_2 = FIX((SI_Long)0L);
		if (NUM_GT(temp_1,temp_2))
		    max_x = l_round(addn(3,center_x,radius,
			    FIX(cardinal_point_clipping_margin)),_);
		temp_1 = clockwise_arc_qm(FIX(x1),FIX(y1_1),center_x,
			add(center_y,radius),FIX(x3),FIX(y3));
		temp_2 = FIX((SI_Long)0L);
		if (NUM_GT(temp_1,temp_2))
		    max_y = l_round(addn(3,center_y,radius,
			    FIX(cardinal_point_clipping_margin)),_);
	    }
	    POP_LOCAL_ALLOCATION(0,0);
	}
    }
    POP_LOCAL_ALLOCATION(1,1);
    return VALUES_4(min_x,min_y,max_x,max_y);
}

/* COMPUTE-CIRCLE-BOUNDING-BOX */
Object compute_circle_bounding_box(x1,y1_1,x2,y2,x3,y3)
    Object x1, y1_1, x2, y2, x3, y3;
{
    Object min_x, min_y, max_x, max_y, x_center_qm, y_center_qm, temp, radius;
    SI_Long cardinal_point_clipping_margin;
    XDeclare_area(1);
    XDeclare_frontier(1);
    Object result;

    x_note_fn_call(51,36);
    min_x = Nil;
    min_y = Nil;
    max_x = Nil;
    max_y = Nil;
    if (PUSH_LOCAL_ALLOCATION(Local_area,0,0)) {
	result = calculate_center_of_circle(x1,y1_1,x2,y2,x3,y3);
	MVS_2(result,x_center_qm,y_center_qm);
	if ( !TRUEP(x_center_qm)) {
	    temp = FIXNUM_MIN(x1,x2);
	    min_x = FIXNUM_MIN(temp,x3);
	    temp = FIXNUM_MAX(x1,x2);
	    max_x = FIXNUM_MAX(temp,x3);
	    temp = FIXNUM_MIN(y1_1,y2);
	    min_y = FIXNUM_MIN(temp,y3);
	    temp = FIXNUM_MAX(y1_1,y2);
	    max_y = FIXNUM_MAX(temp,y3);
	}
	else {
	    radius = compute_float_circle_radius(x_center_qm,y_center_qm,
		    x1,y1_1);
	    cardinal_point_clipping_margin = (SI_Long)1L;
	    min_x = l_round(minusn(3,x_center_qm,radius,
		    FIX(cardinal_point_clipping_margin)),_);
	    min_y = l_round(minusn(3,y_center_qm,radius,
		    FIX(cardinal_point_clipping_margin)),_);
	    max_x = l_round(addn(3,x_center_qm,radius,
		    FIX(cardinal_point_clipping_margin)),_);
	    max_y = l_round(addn(3,y_center_qm,radius,
		    FIX(cardinal_point_clipping_margin)),_);
	}
    }
    POP_LOCAL_ALLOCATION(0,0);
    return VALUES_4(min_x,min_y,max_x,max_y);
}

/* TRANSFER-REGION-TO-SMALLER-RASTER */
Object transfer_region_to_smaller_raster(left_edge_in_scratchpad_raster,
	    top_edge_in_scratchpad_raster,right_edge_in_scratchpad_raster,
	    bottom_edge_in_scratchpad_raster,stored_raster,
	    left_edge_in_stored_raster,top_edge_in_stored_raster,color_value)
    Object left_edge_in_scratchpad_raster, top_edge_in_scratchpad_raster;
    Object right_edge_in_scratchpad_raster, bottom_edge_in_scratchpad_raster;
    Object stored_raster, left_edge_in_stored_raster;
    Object top_edge_in_stored_raster, color_value;
{
    x_note_fn_call(51,37);
    if (EQ(Current_scratchpad_raster_type,Qx11_pixmap))
	g2ext_copy_bitmap_to_bitmap(IFIX(stored_raster),
		IFIX(Current_scratchpad_raster),
		IFIX(left_edge_in_stored_raster),
		IFIX(top_edge_in_stored_raster),
		IFIX(left_edge_in_scratchpad_raster),
		IFIX(top_edge_in_scratchpad_raster),
		IFIX(FIXNUM_MINUS(right_edge_in_scratchpad_raster,
		left_edge_in_scratchpad_raster)),
		IFIX(FIXNUM_MINUS(bottom_edge_in_scratchpad_raster,
		top_edge_in_scratchpad_raster)),IFIX(color_value));
    return VALUES_1(Nil);
}

/* CLEAR-STORED-RASTER */
Object clear_stored_raster(stored_raster,raster_type,width,height)
    Object stored_raster, raster_type, width, height;
{
    x_note_fn_call(51,38);
    fill_rectangle_on_scratchpad_raster_1(stored_raster,raster_type,
	    FIX((SI_Long)0L),FIX((SI_Long)0L),width,height,FIX((SI_Long)0L));
    return VALUES_1(stored_raster);
}

Object Available_tiling_patterns = UNBOUND;

/* GET-TILING-PATTERN */
Object get_tiling_pattern(pattern_name)
    Object pattern_name;
{
    Object temp;

    x_note_fn_call(51,39);
    temp = assq_function(pattern_name,Available_tiling_patterns);
    return VALUES_1(CADR(temp));
}

Object Tiling_pattern_foreground_color = UNBOUND;

Object Tiling_pattern_background_color = UNBOUND;

Object The_type_description_of_tiling_pattern = UNBOUND;

Object Chain_of_available_tiling_patterns = UNBOUND;

Object Tiling_pattern_count = UNBOUND;

/* TILING-PATTERN-STRUCTURE-MEMORY-USAGE */
Object tiling_pattern_structure_memory_usage()
{
    Object temp;

    x_note_fn_call(51,40);
    temp = Tiling_pattern_count;
    temp = FIXNUM_TIMES(temp,bytes_per_simple_vector(FIX((SI_Long)7L)));
    return VALUES_1(temp);
}

/* OUTSTANDING-TILING-PATTERN-COUNT */
Object outstanding_tiling_pattern_count()
{
    Object def_structure_tiling_pattern_variable, count_1;
    SI_Long gensymed_symbol, gensymed_symbol_1;

    x_note_fn_call(51,41);
    gensymed_symbol = IFIX(Tiling_pattern_count);
    def_structure_tiling_pattern_variable = Chain_of_available_tiling_patterns;
    count_1 = FIX((SI_Long)0L);
  next_loop:
    if ( !TRUEP(def_structure_tiling_pattern_variable))
	goto end_loop;
    def_structure_tiling_pattern_variable = 
	    ISVREF(def_structure_tiling_pattern_variable,(SI_Long)0L);
    count_1 = FIXNUM_ADD1(count_1);
    goto next_loop;
  end_loop:
    gensymed_symbol_1 = IFIX(count_1);
    goto end;
    gensymed_symbol_1 = IFIX(Qnil);
  end:;
    return VALUES_1(FIX(gensymed_symbol - gensymed_symbol_1));
}

/* RECLAIM-TILING-PATTERN-1 */
Object reclaim_tiling_pattern_1(tiling_pattern)
    Object tiling_pattern;
{
    Object old_structure_being_reclaimed, svref_new_value;

    x_note_fn_call(51,42);
    inline_note_reclaim_cons(tiling_pattern,Nil);
    old_structure_being_reclaimed = Structure_being_reclaimed;
    Structure_being_reclaimed = tiling_pattern;
    reclaim_gensym_tree_1(ISVREF(tiling_pattern,(SI_Long)3L));
    SVREF(tiling_pattern,FIX((SI_Long)3L)) = Nil;
    reclaim_gensym_list_1(ISVREF(tiling_pattern,(SI_Long)6L));
    SVREF(tiling_pattern,FIX((SI_Long)6L)) = Nil;
    Structure_being_reclaimed = old_structure_being_reclaimed;
    svref_new_value = Chain_of_available_tiling_patterns;
    SVREF(tiling_pattern,FIX((SI_Long)0L)) = svref_new_value;
    Chain_of_available_tiling_patterns = tiling_pattern;
    return VALUES_1(Nil);
}

/* RECLAIM-STRUCTURE-FOR-TILING-PATTERN */
Object reclaim_structure_for_tiling_pattern(tiling_pattern)
    Object tiling_pattern;
{
    x_note_fn_call(51,43);
    return reclaim_tiling_pattern_1(tiling_pattern);
}

static Object Qg2_defstruct_structure_name_tiling_pattern_g2_struct;  /* g2-defstruct-structure-name::tiling-pattern-g2-struct */

/* MAKE-PERMANENT-TILING-PATTERN-STRUCTURE-INTERNAL */
Object make_permanent_tiling_pattern_structure_internal()
{
    Object def_structure_tiling_pattern_variable;
    Object tiling_pattern_count_new_value;
    Object defstruct_g2_tiling_pattern_variable, the_array;
    SI_Long gensymed_symbol, i, ab_loop_bind_;
    XDeclare_area(1);

    x_note_fn_call(51,44);
    def_structure_tiling_pattern_variable = Nil;
    tiling_pattern_count_new_value = FIXNUM_ADD1(Tiling_pattern_count);
    Tiling_pattern_count = tiling_pattern_count_new_value;
    if (PUSH_AREA(Dynamic_area,0)) {
	defstruct_g2_tiling_pattern_variable = Nil;
	gensymed_symbol = (SI_Long)7L;
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
	defstruct_g2_tiling_pattern_variable = the_array;
	SVREF(defstruct_g2_tiling_pattern_variable,FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_tiling_pattern_g2_struct;
	def_structure_tiling_pattern_variable = 
		defstruct_g2_tiling_pattern_variable;
    }
    POP_AREA(0);
    return VALUES_1(def_structure_tiling_pattern_variable);
}

/* MAKE-TILING-PATTERN-STRUCTURE-1 */
Object make_tiling_pattern_structure_1(gensym_window_for_tiling_pattern,
	    tiling_pattern_width,tiling_pattern_height,
	    tiling_pattern_rows_with_color_values,
	    tiling_pattern_stored_raster_qm)
    Object gensym_window_for_tiling_pattern, tiling_pattern_width;
    Object tiling_pattern_height, tiling_pattern_rows_with_color_values;
    Object tiling_pattern_stored_raster_qm;
{
    Object def_structure_tiling_pattern_variable;

    x_note_fn_call(51,45);
    def_structure_tiling_pattern_variable = Chain_of_available_tiling_patterns;
    if (def_structure_tiling_pattern_variable) {
	Chain_of_available_tiling_patterns = 
		ISVREF(def_structure_tiling_pattern_variable,(SI_Long)0L);
	SVREF(def_structure_tiling_pattern_variable,FIX((SI_Long)0L)) = 
		Qg2_defstruct_structure_name_tiling_pattern_g2_struct;
    }
    else
	def_structure_tiling_pattern_variable = 
		make_permanent_tiling_pattern_structure_internal();
    inline_note_allocate_cons(def_structure_tiling_pattern_variable,Nil);
    SVREF(def_structure_tiling_pattern_variable,FIX((SI_Long)5L)) = 
	    gensym_window_for_tiling_pattern;
    SVREF(def_structure_tiling_pattern_variable,FIX((SI_Long)1L)) = 
	    tiling_pattern_width;
    SVREF(def_structure_tiling_pattern_variable,FIX((SI_Long)2L)) = 
	    tiling_pattern_height;
    SVREF(def_structure_tiling_pattern_variable,FIX((SI_Long)3L)) = 
	    tiling_pattern_rows_with_color_values;
    SVREF(def_structure_tiling_pattern_variable,FIX((SI_Long)4L)) = 
	    tiling_pattern_stored_raster_qm;
    SVREF(def_structure_tiling_pattern_variable,FIX((SI_Long)6L)) = Nil;
    return VALUES_1(def_structure_tiling_pattern_variable);
}

static Object Qstandard_icp_object_index_space;  /* standard-icp-object-index-space */

static Object Qestablish_new_object_index_for_tiling_pattern;  /* establish-new-object-index-for-tiling-pattern */

/* ESTABLISH-NEW-OBJECT-INDEX-FOR-TILING-PATTERN */
Object establish_new_object_index_for_tiling_pattern varargs_1(int, n)
{
    Object tiling_pattern, icp_port;
    Object send_enlarge_message_p, corresponding_icp_object_index;
    Object new_index_limit_plus_one_qm, svref_new_value, resumable_icp_state_1;
    Object icp_suspend_1, top;
    Declare_varargs_nonrelocating;
    Object result;

    x_note_fn_call(51,46);
    INIT_ARGS_nonrelocating();
    tiling_pattern = REQUIRED_ARG_nonrelocating();
    icp_port = REQUIRED_ARG_nonrelocating();
    send_enlarge_message_p = OPTIONAL_ARG_P_nonrelocating() ? 
	    OPTIONAL_ARG_nonrelocating() : T;
    END_ARGS_nonrelocating();
    if (Disable_resumability) {
	result = assign_corresponding_icp_object_index(tiling_pattern,
		Qstandard_icp_object_index_space,send_enlarge_message_p);
	MVS_2(result,corresponding_icp_object_index,
		new_index_limit_plus_one_qm);
	svref_new_value = gensym_cons_1(icp_port,
		gensym_cons_1(corresponding_icp_object_index,
		ISVREF(tiling_pattern,(SI_Long)6L)));
	SVREF(tiling_pattern,FIX((SI_Long)6L)) = svref_new_value;
	if (send_enlarge_message_p)
	    return VALUES_1(corresponding_icp_object_index);
	else
	    return VALUES_2(corresponding_icp_object_index,
		    new_index_limit_plus_one_qm);
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qestablish_new_object_index_for_tiling_pattern,top))
		return icp_error_internal(Qerror,string_constant_3,
			Qestablish_new_object_index_for_tiling_pattern,top,
			Nil);
	}
	tiling_pattern = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : tiling_pattern;
	icp_port = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : icp_port;
	send_enlarge_message_p = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : send_enlarge_message_p;
	result = assign_corresponding_icp_object_index(tiling_pattern,
		Qstandard_icp_object_index_space,send_enlarge_message_p);
	MVS_2(result,corresponding_icp_object_index,
		new_index_limit_plus_one_qm);
	svref_new_value = gensym_cons_1(icp_port,
		gensym_cons_1(corresponding_icp_object_index,
		ISVREF(tiling_pattern,(SI_Long)6L)));
	SVREF(tiling_pattern,FIX((SI_Long)6L)) = svref_new_value;
	if (send_enlarge_message_p)
	    return VALUES_1(corresponding_icp_object_index);
	else
	    return VALUES_2(corresponding_icp_object_index,
		    new_index_limit_plus_one_qm);
    }
}

static Object Qmake_corresponding_icp_tiling_pattern;  /* make-corresponding-icp-tiling-pattern */

/* MAKE-CORRESPONDING-ICP-TILING-PATTERN */
Object make_corresponding_icp_tiling_pattern(tiling_pattern)
    Object tiling_pattern;
{
    Object writing_resumable_icp_messages_p, corresponding_icp_object_index;
    Object new_index_limit_plus_one_qm, svref_new_value, temp;
    Object resumable_icp_state_1, icp_suspend_1, top, v1, v2, v3;
    Declare_special(1);
    Object result;

    x_note_fn_call(51,47);
    if (Disable_resumability) {
	write_icp_maybe_suspend();
	writing_resumable_icp_messages_p = Nil;
	PUSH_SPECIAL(Writing_resumable_icp_messages_p,writing_resumable_icp_messages_p,
		0);
	  result = assign_corresponding_icp_object_index(tiling_pattern,
		  Qstandard_icp_object_index_space,T);
	  MVS_2(result,corresponding_icp_object_index,
		  new_index_limit_plus_one_qm);
	  svref_new_value = gensym_cons_1(Current_icp_port,
		  gensym_cons_1(corresponding_icp_object_index,
		  ISVREF(tiling_pattern,(SI_Long)6L)));
	  SVREF(tiling_pattern,FIX((SI_Long)6L)) = svref_new_value;
	  if (T);
	  else {
	      temp = corresponding_icp_object_index;
	      corresponding_icp_object_index = temp;
	  }
	  if ( !TRUEP(Inhibit_corresponding_icp_object_making))
	      send_icp_make_tiling_pattern(corresponding_icp_object_index,
		      ISVREF(tiling_pattern,(SI_Long)5L),
		      ISVREF(tiling_pattern,(SI_Long)3L));
	  result = VALUES_1(corresponding_icp_object_index);
	POP_SPECIAL();
	return result;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qmake_corresponding_icp_tiling_pattern,top))
		return icp_error_internal(Qerror,string_constant_3,
			Qmake_corresponding_icp_tiling_pattern,top,Nil);
	}
	tiling_pattern = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : tiling_pattern;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    temp = resumable_icp_pop();
	    if (! !(FIXNUMP(temp) && FIXNUM_LE(FIX((SI_Long)-128L),temp) 
		    && FIXNUM_LE(temp,FIX((SI_Long)127L))))
		switch (INTEGER_TO_CHAR(temp)) {
		  case 1:
		    goto l1;
		    break;
		  case 2:
		    goto l2;
		    break;
		  default:
		    break;
		}
	}
      l1:
	if (EQ(icp_suspend_1,write_icp_maybe_suspend())) {
	    resumable_icp_push(FIX((SI_Long)1L));
	    result = VALUES_1(Icp_suspend);
	    goto end_block;
	}
      l2:
	writing_resumable_icp_messages_p = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : Nil;
	PUSH_SPECIAL(Writing_resumable_icp_messages_p,writing_resumable_icp_messages_p,
		0);
	  if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		  TRUEP(Nil)) &&  
		  !TRUEP(resumable_icp_pop_list_if_end_marker()))
	      corresponding_icp_object_index = resumable_icp_pop();
	  else {
	      result = assign_corresponding_icp_object_index(tiling_pattern,
		      Qstandard_icp_object_index_space,T);
	      MVS_2(result,corresponding_icp_object_index,
		      new_index_limit_plus_one_qm);
	      svref_new_value = gensym_cons_1(Current_icp_port,
		      gensym_cons_1(corresponding_icp_object_index,
		      ISVREF(tiling_pattern,(SI_Long)6L)));
	      SVREF(tiling_pattern,FIX((SI_Long)6L)) = svref_new_value;
	      if (T);
	      else {
		  temp = corresponding_icp_object_index;
		  corresponding_icp_object_index = temp;
	      }
	  }
	  if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		  TRUEP(Nil)) ||  
		  !TRUEP(Inhibit_corresponding_icp_object_making)) {
	      if (EQ(icp_suspend_1,
		      send_icp_make_tiling_pattern(corresponding_icp_object_index,
		      ISVREF(tiling_pattern,(SI_Long)5L),
		      ISVREF(tiling_pattern,(SI_Long)3L)))) {
		  resumable_icp_push(corresponding_icp_object_index);
		  resumable_icp_push(Writing_resumable_icp_messages_p);
		  resumable_icp_push(FIX((SI_Long)2L));
		  result = VALUES_1(Icp_suspend);
		  POP_SPECIAL();
		  goto end_block;
	      }
	  }
	  result = VALUES_1(corresponding_icp_object_index);
	POP_SPECIAL();
	goto end_block;
      end_block:
	MVS_3(result,v1,v2,v3);
	if (EQ(icp_suspend_1,v1)) {
	    resumable_icp_push(tiling_pattern);
	    resumable_icp_push(Qmake_corresponding_icp_tiling_pattern);
	    return VALUES_1(Icp_suspend);
	}
	return VALUES_3(v1,v2,v3);
    }
}

/* GET-ICP-OBJECT-INDEX-FOR-TILING-PATTERN */
Object get_icp_object_index_for_tiling_pattern(tiling_pattern,icp_port)
    Object tiling_pattern, icp_port;
{
    x_note_fn_call(51,48);
    return getfq_function_no_default(ISVREF(tiling_pattern,(SI_Long)6L),
	    icp_port);
}

/* SET-ICP-OBJECT-INDEX-FOR-TILING-PATTERN */
Object set_icp_object_index_for_tiling_pattern(tiling_pattern,
	    corresponding_icp_object_index,icp_port)
    Object tiling_pattern, corresponding_icp_object_index, icp_port;
{
    Object svref_new_value;

    x_note_fn_call(51,49);
    svref_new_value = gensym_cons_1(icp_port,
	    gensym_cons_1(corresponding_icp_object_index,
	    ISVREF(tiling_pattern,(SI_Long)6L)));
    return VALUES_1(SVREF(tiling_pattern,FIX((SI_Long)6L)) = svref_new_value);
}

/* RECLAIM-ICP-OBJECT-MAP-FOR-TILING-PATTERN */
Object reclaim_icp_object_map_for_tiling_pattern(tiling_pattern)
    Object tiling_pattern;
{
    Object icp_object_map;

    x_note_fn_call(51,50);
    icp_object_map = ISVREF(tiling_pattern,(SI_Long)6L);
    if (icp_object_map)
	return reclaim_icp_object_map(tiling_pattern,icp_object_map,
		Qstandard_icp_object_index_space);
    else
	return VALUES_1(Nil);
}

static Object Qset_access_form_for_tiling_pattern;  /* set-access-form-for-tiling-pattern */

/* RECLAIM-ICP-PORT-ENTRY-FOR-TILING-PATTERN */
Object reclaim_icp_port_entry_for_tiling_pattern(tiling_pattern,icp_port)
    Object tiling_pattern, icp_port;
{
    x_note_fn_call(51,51);
    return reclaim_icp_port_entry(icp_port,tiling_pattern,
	    ISVREF(tiling_pattern,(SI_Long)6L),
	    Qset_access_form_for_tiling_pattern);
}

/* SET-ACCESS-FORM-FOR-TILING-PATTERN */
Object set_access_form_for_tiling_pattern(tiling_pattern,new_value)
    Object tiling_pattern, new_value;
{
    x_note_fn_call(51,52);
    return VALUES_1(SVREF(tiling_pattern,FIX((SI_Long)6L)) = new_value);
}

static Object Qsend_icp_make_tiling_pattern;  /* send-icp-make-tiling-pattern */

static Object Qmake_tiling_pattern;  /* make-tiling-pattern */

static Object Qcorresponding_icp_object_index;  /* corresponding-icp-object-index */

static Object Qgensym_window;      /* gensym-window */

static Object Qtiling_pattern_rows_with_color_values;  /* tiling-pattern-rows-with-color-values */

/* SEND-ICP-MAKE-TILING-PATTERN */
Object send_icp_make_tiling_pattern(corresponding_icp_object_index,
	    gensym_window,tiling_pattern_rows_with_color_values)
    Object corresponding_icp_object_index, gensym_window;
    Object tiling_pattern_rows_with_color_values;
{
    Object index_of_top_of_backtrace_stack, temp, svref_arg_2, temp_1, tracep;
    Object byte_count_before, current_icp_write_trace_level, tracep_1;
    Object byte_count_before_1, result_of_write, resumable_icp_state_1;
    Object icp_suspend_1, top, value, value_1;
    Declare_special(3);
    Object result;

    x_note_fn_call(51,53);
    if (Disable_resumability) {
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Qsend_icp_make_tiling_pattern;
	  }
	  temp_1 = getfq_function_no_default(ISVREF(gensym_window,
		  (SI_Long)14L),Current_icp_port);
	  if (temp_1);
	  else
	      temp_1 = make_corresponding_icp_gensym_window(gensym_window);
	  gensym_window = temp_1;
	  start_writing_icp_message(FIX((SI_Long)83L));
	  if (Icp_write_trace_cutoff_level_qm) {
	      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
	      if (tracep);
	      else
		  tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			  (SI_Long)2L ? T : Nil;
	      if (tracep) {
		  emit_icp_write_trace(T,Nil,Nil,Qmake_tiling_pattern,
			  string_constant,Qmessage,Nil,Nil,Nil,Nil);
		  byte_count_before = instantaneous_icp_writer_byte_count();
	      }
	      else
		  byte_count_before = Nil;
	      current_icp_write_trace_level = 
		      FIXNUM_ADD1(Current_icp_write_trace_level);
	      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
		      1);
		if (Icp_write_trace_cutoff_level_qm) {
		    tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep_1);
		    else
			tracep_1 = IFIX(Icp_write_trace_cutoff_level_qm) 
				>= (SI_Long)3L ? T : Nil;
		    if (tracep_1) {
			emit_icp_write_trace(T,Nil,Nil,
				Qcorresponding_icp_object_index,
				string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			byte_count_before_1 = 
				instantaneous_icp_writer_byte_count();
		    }
		    else
			byte_count_before_1 = Nil;
		    current_icp_write_trace_level = 
			    FIXNUM_ADD1(Current_icp_write_trace_level);
		    PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			    0);
		      result_of_write = 
			      write_icp_unsigned_integer(corresponding_icp_object_index);
		      if (tracep_1)
			  emit_icp_write_trace(Nil,byte_count_before_1,
				  instantaneous_icp_writer_byte_count(),
				  Qcorresponding_icp_object_index,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    POP_SPECIAL();
		}
		else
		    write_icp_unsigned_integer(corresponding_icp_object_index);
		if (Icp_write_trace_cutoff_level_qm) {
		    tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep_1);
		    else
			tracep_1 = IFIX(Icp_write_trace_cutoff_level_qm) 
				>= (SI_Long)3L ? T : Nil;
		    if (tracep_1) {
			emit_icp_write_trace(T,Nil,Nil,Qgensym_window,
				string_constant_2,Qargument,Nil,Nil,Nil,Nil);
			byte_count_before_1 = 
				instantaneous_icp_writer_byte_count();
		    }
		    else
			byte_count_before_1 = Nil;
		    current_icp_write_trace_level = 
			    FIXNUM_ADD1(Current_icp_write_trace_level);
		    PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			    0);
		      result_of_write = 
			      write_icp_corresponding_object_index(gensym_window);
		      if (tracep_1)
			  emit_icp_write_trace(Nil,byte_count_before_1,
				  instantaneous_icp_writer_byte_count(),
				  Qgensym_window,string_constant_2,
				  Qargument,Nil,Nil,Nil,Nil);
		    POP_SPECIAL();
		}
		else
		    write_icp_corresponding_object_index(gensym_window);
		if (Icp_write_trace_cutoff_level_qm) {
		    tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep_1);
		    else
			tracep_1 = IFIX(Icp_write_trace_cutoff_level_qm) 
				>= (SI_Long)3L ? T : Nil;
		    if (tracep_1) {
			emit_icp_write_trace(T,Nil,Nil,
				Qtiling_pattern_rows_with_color_values,
				string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			byte_count_before_1 = 
				instantaneous_icp_writer_byte_count();
		    }
		    else
			byte_count_before_1 = Nil;
		    current_icp_write_trace_level = 
			    FIXNUM_ADD1(Current_icp_write_trace_level);
		    PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			    0);
		      result_of_write = 
			      write_icp_tiling_pattern_rows_with_color_values(tiling_pattern_rows_with_color_values);
		      if (tracep_1)
			  emit_icp_write_trace(Nil,byte_count_before_1,
				  instantaneous_icp_writer_byte_count(),
				  Qtiling_pattern_rows_with_color_values,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    POP_SPECIAL();
		}
		else
		    result_of_write = 
			    write_icp_tiling_pattern_rows_with_color_values(tiling_pattern_rows_with_color_values);
		if (tracep)
		    emit_icp_write_trace(Nil,byte_count_before,
			    instantaneous_icp_writer_byte_count(),
			    Qmake_tiling_pattern,string_constant,Qmessage,
			    Nil,Nil,Nil,Nil);
	      POP_SPECIAL();
	  }
	  else {
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)3L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qcorresponding_icp_object_index,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  0);
		    result_of_write = 
			    write_icp_unsigned_integer(corresponding_icp_object_index);
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qcorresponding_icp_object_index,
				string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		  POP_SPECIAL();
	      }
	      else
		  write_icp_unsigned_integer(corresponding_icp_object_index);
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)3L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,Qgensym_window,
			      string_constant_2,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  0);
		    result_of_write = 
			    write_icp_corresponding_object_index(gensym_window);
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qgensym_window,string_constant_2,Qargument,
				Nil,Nil,Nil,Nil);
		  POP_SPECIAL();
	      }
	      else
		  write_icp_corresponding_object_index(gensym_window);
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)3L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qtiling_pattern_rows_with_color_values,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  0);
		    result_of_write = 
			    write_icp_tiling_pattern_rows_with_color_values(tiling_pattern_rows_with_color_values);
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qtiling_pattern_rows_with_color_values,
				string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		  POP_SPECIAL();
	      }
	      else
		  write_icp_tiling_pattern_rows_with_color_values(tiling_pattern_rows_with_color_values);
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qsend_icp_make_tiling_pattern,top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qsend_icp_make_tiling_pattern,top,Nil);
		goto end_send_icp_make_tiling_pattern;
	    }
	}
	corresponding_icp_object_index = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : corresponding_icp_object_index;
	gensym_window = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : gensym_window;
	tiling_pattern_rows_with_color_values = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : tiling_pattern_rows_with_color_values;
	index_of_top_of_backtrace_stack = Index_of_top_of_backtrace_stack;
	PUSH_SPECIAL(Index_of_top_of_backtrace_stack,index_of_top_of_backtrace_stack,
		2);
	  if (FIXNUM_LE(FIXNUM_ADD(Index_of_top_of_backtrace_stack,
		  Size_of_basic_backtrace_information),
		  Maximum_index_in_backtrace_stack_for_internal_error)) {
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = FIX((SI_Long)0L);
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Nil;
	      temp = FIXNUM_ADD1(Index_of_top_of_backtrace_stack);
	      Index_of_top_of_backtrace_stack = temp;
	      temp = Backtrace_stack_for_internal_error;
	      svref_arg_2 = Index_of_top_of_backtrace_stack;
	      SVREF(temp,svref_arg_2) = Qsend_icp_make_tiling_pattern;
	  }
	  if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) {
	      temp_1 = resumable_icp_pop();
	      if (! !(FIXNUMP(temp_1) && FIXNUM_LE(FIX((SI_Long)-128L),
		      temp_1) && FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
		  switch (INTEGER_TO_CHAR(temp_1)) {
		    case 1:
		      goto l1;
		      break;
		    case 2:
		      goto l2;
		      break;
		    case 3:
		      goto l3;
		      break;
		    default:
		      break;
		  }
	  }
	l1:
	  value = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		  TRUEP(Nil)) &&  
		  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		  resumable_icp_pop() : 
		  getfq_function_no_default(ISVREF(gensym_window,
		  (SI_Long)14L),Current_icp_port);
	  if ( !(resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		  TRUEP(Nil)) && value)
	      gensym_window = value;
	  else {
	      value_1 = make_corresponding_icp_gensym_window(gensym_window);
	      if (EQ(icp_suspend_1,value_1)) {
		  resumable_icp_push(value);
		  resumable_icp_push(FIX((SI_Long)1L));
		  temp_1 = Icp_suspend;
		  goto end_block;
	      }
	      gensym_window = value_1;
	  }
	l2:
	  if (EQ(icp_suspend_1,start_writing_icp_message(FIX((SI_Long)83L)))) {
	      resumable_icp_push(FIX((SI_Long)2L));
	      temp_1 = Icp_suspend;
	      goto end_block;
	  }
	l3:
	  if (Icp_write_trace_cutoff_level_qm) {
	      tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
	      if (tracep);
	      else
		  tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			  (SI_Long)2L ? T : Nil;
	      if (tracep) {
		  emit_icp_write_trace(T,Nil,Nil,Qmake_tiling_pattern,
			  string_constant,Qmessage,Nil,Nil,Nil,Nil);
		  byte_count_before = instantaneous_icp_writer_byte_count();
	      }
	      else
		  byte_count_before = Nil;
	      current_icp_write_trace_level = 
		      FIXNUM_ADD1(Current_icp_write_trace_level);
	      PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
		      1);
		if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			TRUEP(Nil)) {
		    temp_1 = resumable_icp_pop();
		    if (! !(FIXNUMP(temp_1) && 
			    FIXNUM_LE(FIX((SI_Long)-128L),temp_1) && 
			    FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
			switch (INTEGER_TO_CHAR(temp_1)) {
			  case 1:
			    goto l1_1;
			    break;
			  case 2:
			    goto l2_1;
			    break;
			  case 3:
			    goto l3_1;
			    break;
			  default:
			    break;
			}
		}
	      l1_1:
		if (Icp_write_trace_cutoff_level_qm) {
		    tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep_1);
		    else
			tracep_1 = IFIX(Icp_write_trace_cutoff_level_qm) 
				>= (SI_Long)3L ? T : Nil;
		    if (tracep_1) {
			emit_icp_write_trace(T,Nil,Nil,
				Qcorresponding_icp_object_index,
				string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			byte_count_before_1 = 
				instantaneous_icp_writer_byte_count();
		    }
		    else
			byte_count_before_1 = Nil;
		    current_icp_write_trace_level = 
			    FIXNUM_ADD1(Current_icp_write_trace_level);
		    PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			    0);
		      if (EQ(icp_suspend_1,
			      write_icp_unsigned_integer(corresponding_icp_object_index))) 
				  {
			  resumable_icp_push(FIX((SI_Long)1L));
			  temp_1 = Icp_suspend;
			  POP_SPECIAL();
			  goto end_block_1;
		      }
		      else
			  result_of_write = Nil;
		      if (tracep_1)
			  emit_icp_write_trace(Nil,byte_count_before_1,
				  instantaneous_icp_writer_byte_count(),
				  Qcorresponding_icp_object_index,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    POP_SPECIAL();
		}
		else if (EQ(icp_suspend_1,
			write_icp_unsigned_integer(corresponding_icp_object_index))) 
			    {
		    resumable_icp_push(FIX((SI_Long)1L));
		    temp_1 = Icp_suspend;
		    goto end_block_1;
		}
	      l2_1:
		if (Icp_write_trace_cutoff_level_qm) {
		    tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep_1);
		    else
			tracep_1 = IFIX(Icp_write_trace_cutoff_level_qm) 
				>= (SI_Long)3L ? T : Nil;
		    if (tracep_1) {
			emit_icp_write_trace(T,Nil,Nil,Qgensym_window,
				string_constant_2,Qargument,Nil,Nil,Nil,Nil);
			byte_count_before_1 = 
				instantaneous_icp_writer_byte_count();
		    }
		    else
			byte_count_before_1 = Nil;
		    current_icp_write_trace_level = 
			    FIXNUM_ADD1(Current_icp_write_trace_level);
		    PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			    0);
		      if (EQ(icp_suspend_1,
			      write_icp_corresponding_object_index(gensym_window))) 
				  {
			  resumable_icp_push(FIX((SI_Long)2L));
			  temp_1 = Icp_suspend;
			  POP_SPECIAL();
			  goto end_block_1;
		      }
		      else
			  result_of_write = Nil;
		      if (tracep_1)
			  emit_icp_write_trace(Nil,byte_count_before_1,
				  instantaneous_icp_writer_byte_count(),
				  Qgensym_window,string_constant_2,
				  Qargument,Nil,Nil,Nil,Nil);
		    POP_SPECIAL();
		}
		else if (EQ(icp_suspend_1,
			write_icp_corresponding_object_index(gensym_window))) {
		    resumable_icp_push(FIX((SI_Long)2L));
		    temp_1 = Icp_suspend;
		    goto end_block_1;
		}
	      l3_1:
		if (Icp_write_trace_cutoff_level_qm) {
		    tracep_1 = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep_1);
		    else
			tracep_1 = IFIX(Icp_write_trace_cutoff_level_qm) 
				>= (SI_Long)3L ? T : Nil;
		    if (tracep_1) {
			emit_icp_write_trace(T,Nil,Nil,
				Qtiling_pattern_rows_with_color_values,
				string_constant_1,Qargument,Nil,Nil,Nil,Nil);
			byte_count_before_1 = 
				instantaneous_icp_writer_byte_count();
		    }
		    else
			byte_count_before_1 = Nil;
		    current_icp_write_trace_level = 
			    FIXNUM_ADD1(Current_icp_write_trace_level);
		    PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			    0);
		      if (EQ(icp_suspend_1,
			      write_icp_tiling_pattern_rows_with_color_values(tiling_pattern_rows_with_color_values))) 
				  {
			  resumable_icp_push(FIX((SI_Long)3L));
			  temp_1 = Icp_suspend;
			  POP_SPECIAL();
			  goto end_block_1;
		      }
		      else
			  result_of_write = Nil;
		      if (tracep_1)
			  emit_icp_write_trace(Nil,byte_count_before_1,
				  instantaneous_icp_writer_byte_count(),
				  Qtiling_pattern_rows_with_color_values,
				  string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      temp_1 = result_of_write;
		    POP_SPECIAL();
		}
		else if (EQ(icp_suspend_1,
			write_icp_tiling_pattern_rows_with_color_values(tiling_pattern_rows_with_color_values))) 
			    {
		    resumable_icp_push(FIX((SI_Long)3L));
		    temp_1 = Icp_suspend;
		    goto end_block_1;
		}
		else
		    temp_1 = Nil;
		goto end_block_1;
	      end_block_1:
		if (EQ(icp_suspend_1,temp_1)) {
		    resumable_icp_push(FIX((SI_Long)3L));
		    temp_1 = Icp_suspend;
		    POP_SPECIAL();
		    goto end_block;
		}
		else
		    result_of_write = Nil;
		if (tracep)
		    emit_icp_write_trace(Nil,byte_count_before,
			    instantaneous_icp_writer_byte_count(),
			    Qmake_tiling_pattern,string_constant,Qmessage,
			    Nil,Nil,Nil,Nil);
		temp_1 = result_of_write;
	      POP_SPECIAL();
	  }
	  else {
	      if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) {
		  temp_1 = resumable_icp_pop();
		  if (! !(FIXNUMP(temp_1) && FIXNUM_LE(FIX((SI_Long)-128L),
			  temp_1) && FIXNUM_LE(temp_1,FIX((SI_Long)127L))))
		      switch (INTEGER_TO_CHAR(temp_1)) {
			case 1:
			  goto l1_2;
			  break;
			case 2:
			  goto l2_2;
			  break;
			case 3:
			  goto l3_2;
			  break;
			default:
			  break;
		      }
	      }
	    l1_2:
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)3L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qcorresponding_icp_object_index,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  0);
		    if (EQ(icp_suspend_1,
			    write_icp_unsigned_integer(corresponding_icp_object_index))) 
				{
			resumable_icp_push(FIX((SI_Long)1L));
			temp_1 = Icp_suspend;
			POP_SPECIAL();
			goto end_block_2;
		    }
		    else
			result_of_write = Nil;
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qcorresponding_icp_object_index,
				string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		  POP_SPECIAL();
	      }
	      else if (EQ(icp_suspend_1,
		      write_icp_unsigned_integer(corresponding_icp_object_index))) 
			  {
		  resumable_icp_push(FIX((SI_Long)1L));
		  temp_1 = Icp_suspend;
		  goto end_block_2;
	      }
	    l2_2:
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)3L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,Qgensym_window,
			      string_constant_2,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  0);
		    if (EQ(icp_suspend_1,
			    write_icp_corresponding_object_index(gensym_window))) 
				{
			resumable_icp_push(FIX((SI_Long)2L));
			temp_1 = Icp_suspend;
			POP_SPECIAL();
			goto end_block_2;
		    }
		    else
			result_of_write = Nil;
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qgensym_window,string_constant_2,Qargument,
				Nil,Nil,Nil,Nil);
		  POP_SPECIAL();
	      }
	      else if (EQ(icp_suspend_1,
		      write_icp_corresponding_object_index(gensym_window))) {
		  resumable_icp_push(FIX((SI_Long)2L));
		  temp_1 = Icp_suspend;
		  goto end_block_2;
	      }
	    l3_2:
	      if (Icp_write_trace_cutoff_level_qm) {
		  tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
		  if (tracep);
		  else
		      tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			      (SI_Long)3L ? T : Nil;
		  if (tracep) {
		      emit_icp_write_trace(T,Nil,Nil,
			      Qtiling_pattern_rows_with_color_values,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before = 
			      instantaneous_icp_writer_byte_count();
		  }
		  else
		      byte_count_before = Nil;
		  current_icp_write_trace_level = 
			  FIXNUM_ADD1(Current_icp_write_trace_level);
		  PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
			  0);
		    if (EQ(icp_suspend_1,
			    write_icp_tiling_pattern_rows_with_color_values(tiling_pattern_rows_with_color_values))) 
				{
			resumable_icp_push(FIX((SI_Long)3L));
			temp_1 = Icp_suspend;
			POP_SPECIAL();
			goto end_block_2;
		    }
		    else
			result_of_write = Nil;
		    if (tracep)
			emit_icp_write_trace(Nil,byte_count_before,
				instantaneous_icp_writer_byte_count(),
				Qtiling_pattern_rows_with_color_values,
				string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    temp_1 = result_of_write;
		  POP_SPECIAL();
	      }
	      else if (EQ(icp_suspend_1,
		      write_icp_tiling_pattern_rows_with_color_values(tiling_pattern_rows_with_color_values))) 
			  {
		  resumable_icp_push(FIX((SI_Long)3L));
		  temp_1 = Icp_suspend;
		  goto end_block_2;
	      }
	      else
		  temp_1 = Nil;
	      goto end_block_2;
	    end_block_2:
	      if (EQ(icp_suspend_1,temp_1)) {
		  resumable_icp_push(FIX((SI_Long)3L));
		  temp_1 = Icp_suspend;
		  goto end_block;
	      }
	      else
		  temp_1 = Nil;
	  }
	  goto end_block;
	end_block:
	  if (EQ(icp_suspend_1,temp_1)) {
	      resumable_icp_push(tiling_pattern_rows_with_color_values);
	      resumable_icp_push(gensym_window);
	      resumable_icp_push(corresponding_icp_object_index);
	      resumable_icp_push(Qsend_icp_make_tiling_pattern);
	      result = VALUES_1(Icp_suspend);
	      POP_SPECIAL();
	      goto end_send_icp_make_tiling_pattern;
	  }
	POP_SPECIAL();
	temp_1 = Nil;
    }
    result = VALUES_1(temp_1);
  end_send_icp_make_tiling_pattern:
    return result;
}

/* HANDLE-ICP-MAKE-TILING-PATTERN--BODY */
Object handle_icp_make_tiling_pattern__body(corresponding_icp_object_index,
	    gensym_window,tiling_pattern_rows_with_color_values)
    Object corresponding_icp_object_index, gensym_window;
    Object tiling_pattern_rows_with_color_values;
{
    x_note_fn_call(51,54);
    telewindows_check_version_of_remote_g2(gensym_window);
    store_corresponding_icp_object(corresponding_icp_object_index,
	    make_and_install_tiling_pattern(gensym_window,
	    tiling_pattern_rows_with_color_values));
    reclaim_gensym_tree_1(tiling_pattern_rows_with_color_values);
    return VALUES_1(Nil);
}

static Object Qhandle_icp_make_tiling_pattern;  /* handle-icp-make-tiling-pattern */

/* HANDLE-ICP-MAKE-TILING-PATTERN */
Object handle_icp_make_tiling_pattern()
{
    Object tracep, byte_count_before, current_icp_read_trace_level, tracep_1;
    Object byte_count_before_1, result_of_read, corresponding_icp_object_index;
    Object index_1, index_space, gensym_window;
    Object tiling_pattern_rows_with_color_values, abort_for_icp_catcher_qm;
    Object temp, resumable_icp_state_1, icp_suspend_1, top, value;
    Declare_special(2);
    Object result;

    x_note_fn_call(51,55);
    if (Disable_resumability) {
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,Qmake_tiling_pattern,
			string_constant,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,
			      Qcorresponding_icp_object_index,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = read_icp_unsigned_integer();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcorresponding_icp_object_index,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    corresponding_icp_object_index = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  corresponding_icp_object_index = read_icp_unsigned_integer();
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qgensym_window,
			      string_constant_2,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    index_1 = read_icp_corresponding_object_index();
		    index_space = Current_temporary_icp_object_index_space;
		    if (index_space);
		    else
			index_space = Current_standard_icp_object_index_space;
		    if (FIXNUMP(index_1)) {
			if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			    enlarge_index_space(index_space,index_1);
			result_of_read = ISVREF(ISVREF(ISVREF(index_space,
				(SI_Long)2L),IFIX(index_1) >>  -  - 
				(SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		    }
		    else
			result_of_read = Nil;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qgensym_window,string_constant_2,Qargument,
				T,result_of_read,Nil,Nil);
		    gensym_window = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  index_1 = read_icp_corresponding_object_index();
		  index_space = Current_temporary_icp_object_index_space;
		  if (index_space);
		  else
		      index_space = Current_standard_icp_object_index_space;
		  if (FIXNUMP(index_1)) {
		      if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			  enlarge_index_space(index_space,index_1);
		      gensym_window = ISVREF(ISVREF(ISVREF(index_space,
			      (SI_Long)2L),IFIX(index_1) >>  -  - 
			      (SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		  }
		  else
		      gensym_window = Nil;
	      }
	      if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,
			      Qtiling_pattern_rows_with_color_values,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    result_of_read = 
			    read_icp_tiling_pattern_rows_with_color_values();
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qtiling_pattern_rows_with_color_values,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    tiling_pattern_rows_with_color_values = result_of_read;
		  POP_SPECIAL();
	      }
	      else
		  tiling_pattern_rows_with_color_values = 
			  read_icp_tiling_pattern_rows_with_color_values();
	      abort_for_icp_catcher_qm = Nil;
	      PUSH_SPECIAL(Abort_for_icp_catcher_qm,abort_for_icp_catcher_qm,
		      0);
		result_of_read = 
			handle_icp_make_tiling_pattern__body(corresponding_icp_object_index,
			gensym_window,tiling_pattern_rows_with_color_values);
	      POP_SPECIAL();
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qmake_tiling_pattern,string_constant,Qmessage,
			  Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,
			    Qcorresponding_icp_object_index,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = read_icp_unsigned_integer();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcorresponding_icp_object_index,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  corresponding_icp_object_index = result_of_read;
		POP_SPECIAL();
	    }
	    else
		corresponding_icp_object_index = read_icp_unsigned_integer();
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qgensym_window,
			    string_constant_2,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  index_1 = read_icp_corresponding_object_index();
		  index_space = Current_temporary_icp_object_index_space;
		  if (index_space);
		  else
		      index_space = Current_standard_icp_object_index_space;
		  if (FIXNUMP(index_1)) {
		      if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			  enlarge_index_space(index_space,index_1);
		      result_of_read = ISVREF(ISVREF(ISVREF(index_space,
			      (SI_Long)2L),IFIX(index_1) >>  -  - 
			      (SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		  }
		  else
		      result_of_read = Nil;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qgensym_window,string_constant_2,Qargument,T,
			      result_of_read,Nil,Nil);
		  gensym_window = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		index_1 = read_icp_corresponding_object_index();
		index_space = Current_temporary_icp_object_index_space;
		if (index_space);
		else
		    index_space = Current_standard_icp_object_index_space;
		if (FIXNUMP(index_1)) {
		    if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			enlarge_index_space(index_space,index_1);
		    gensym_window = ISVREF(ISVREF(ISVREF(index_space,
			    (SI_Long)2L),IFIX(index_1) >>  -  - 
			    (SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		}
		else
		    gensym_window = Nil;
	    }
	    if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,
			    Qtiling_pattern_rows_with_color_values,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  result_of_read = 
			  read_icp_tiling_pattern_rows_with_color_values();
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qtiling_pattern_rows_with_color_values,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  tiling_pattern_rows_with_color_values = result_of_read;
		POP_SPECIAL();
	    }
	    else
		tiling_pattern_rows_with_color_values = 
			read_icp_tiling_pattern_rows_with_color_values();
	    abort_for_icp_catcher_qm = Nil;
	    PUSH_SPECIAL(Abort_for_icp_catcher_qm,abort_for_icp_catcher_qm,0);
	      handle_icp_make_tiling_pattern__body(corresponding_icp_object_index,
		      gensym_window,tiling_pattern_rows_with_color_values);
	    POP_SPECIAL();
	}
	temp = Nil;
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qhandle_icp_make_tiling_pattern,top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qhandle_icp_make_tiling_pattern,top,Nil);
		goto end_handle_icp_make_tiling_pattern;
	    }
	}
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)2L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,Qmake_tiling_pattern,
			string_constant,Qmessage,Nil,Nil,Nil,T);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    1);
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  corresponding_icp_object_index = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,
			      Qcorresponding_icp_object_index,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_unsigned_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(Qhandle_icp_make_tiling_pattern);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_make_tiling_pattern;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qcorresponding_icp_object_index,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    corresponding_icp_object_index = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_make_tiling_pattern);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_make_tiling_pattern;
		  }
		  corresponding_icp_object_index = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  gensym_window = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,Qgensym_window,
			      string_constant_2,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    if ((resumable_icp_state_1 ? 
			    TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
			    !TRUEP(resumable_icp_pop_list_if_end_marker()))
			index_1 = resumable_icp_pop();
		    else {
			value = read_icp_corresponding_object_index();
			if (EQ(icp_suspend_1,value)) {
			    resumable_icp_push(Qresumable_icp_list_end);
			    resumable_icp_push(Qresumable_icp_list_end);
			    resumable_icp_push(corresponding_icp_object_index);
			    resumable_icp_push(Qhandle_icp_make_tiling_pattern);
			    result = VALUES_1(Icp_suspend);
			    POP_SPECIAL();
			    POP_SPECIAL();
			    goto end_handle_icp_make_tiling_pattern;
			}
			index_1 = value;
		    }
		    index_space = Current_temporary_icp_object_index_space;
		    if (index_space);
		    else
			index_space = Current_standard_icp_object_index_space;
		    if (FIXNUMP(index_1)) {
			if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			    enlarge_index_space(index_space,index_1);
			result_of_read = ISVREF(ISVREF(ISVREF(index_space,
				(SI_Long)2L),IFIX(index_1) >>  -  - 
				(SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		    }
		    else
			result_of_read = Nil;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qgensym_window,string_constant_2,Qargument,
				T,result_of_read,Nil,Nil);
		    gensym_window = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
			   TRUEP(Nil)) &&  
			  !TRUEP(resumable_icp_pop_list_if_end_marker()))
		      index_1 = resumable_icp_pop();
		  else {
		      value = read_icp_corresponding_object_index();
		      if (EQ(icp_suspend_1,value)) {
			  resumable_icp_push(Qresumable_icp_list_end);
			  resumable_icp_push(Qresumable_icp_list_end);
			  resumable_icp_push(corresponding_icp_object_index);
			  resumable_icp_push(Qhandle_icp_make_tiling_pattern);
			  result = VALUES_1(Icp_suspend);
			  POP_SPECIAL();
			  goto end_handle_icp_make_tiling_pattern;
		      }
		      index_1 = value;
		  }
		  index_space = Current_temporary_icp_object_index_space;
		  if (index_space);
		  else
		      index_space = Current_standard_icp_object_index_space;
		  if (FIXNUMP(index_1)) {
		      if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			  enlarge_index_space(index_space,index_1);
		      gensym_window = ISVREF(ISVREF(ISVREF(index_space,
			      (SI_Long)2L),IFIX(index_1) >>  -  - 
			      (SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		  }
		  else
		      gensym_window = Nil;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  tiling_pattern_rows_with_color_values = resumable_icp_pop();
	      else if (Icp_read_trace_cutoff_level_qm) {
		  if (Icp_read_trace_cutoff_level_qm) {
		      tracep_1 = EQ(Icp_read_trace_cutoff_level_qm,T) ? T :
			       Nil;
		      if (tracep_1);
		      else
			  tracep_1 = IFIX(Icp_read_trace_cutoff_level_qm) 
				  >= (SI_Long)3L ? T : Nil;
		  }
		  else
		      tracep_1 = Nil;
		  if (tracep_1) {
		      emit_icp_read_trace(T,Nil,Nil,
			      Qtiling_pattern_rows_with_color_values,
			      string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		      byte_count_before_1 = 
			      instantaneous_icp_reader_byte_count();
		  }
		  else
		      byte_count_before_1 = Nil;
		  current_icp_read_trace_level = 
			  FIXNUM_ADD1(Current_icp_read_trace_level);
		  PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			  0);
		    value = read_icp_tiling_pattern_rows_with_color_values();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(gensym_window);
			resumable_icp_push(corresponding_icp_object_index);
			resumable_icp_push(Qhandle_icp_make_tiling_pattern);
			result = VALUES_1(Icp_suspend);
			POP_SPECIAL();
			POP_SPECIAL();
			goto end_handle_icp_make_tiling_pattern;
		    }
		    result_of_read = value;
		    if (tracep_1)
			emit_icp_read_trace(Nil,byte_count_before_1,
				instantaneous_icp_reader_byte_count(),
				Qtiling_pattern_rows_with_color_values,
				string_constant_1,Qargument,T,
				result_of_read,Nil,Nil);
		    tiling_pattern_rows_with_color_values = result_of_read;
		  POP_SPECIAL();
	      }
	      else {
		  value = read_icp_tiling_pattern_rows_with_color_values();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(gensym_window);
		      resumable_icp_push(corresponding_icp_object_index);
		      resumable_icp_push(Qhandle_icp_make_tiling_pattern);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_make_tiling_pattern;
		  }
		  tiling_pattern_rows_with_color_values = value;
	      }
	      abort_for_icp_catcher_qm = Nil;
	      PUSH_SPECIAL(Abort_for_icp_catcher_qm,abort_for_icp_catcher_qm,
		      0);
		result_of_read = 
			handle_icp_make_tiling_pattern__body(corresponding_icp_object_index,
			gensym_window,tiling_pattern_rows_with_color_values);
	      POP_SPECIAL();
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qmake_tiling_pattern,string_constant,Qmessage,
			  Nil,result_of_read,Nil,T);
	    POP_SPECIAL();
	}
	else {
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		corresponding_icp_object_index = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,
			    Qcorresponding_icp_object_index,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qhandle_icp_make_tiling_pattern);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_make_tiling_pattern;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qcorresponding_icp_object_index,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  corresponding_icp_object_index = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(Qhandle_icp_make_tiling_pattern);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_make_tiling_pattern;
		}
		corresponding_icp_object_index = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		gensym_window = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,Qgensym_window,
			    string_constant_2,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
			   TRUEP(Nil)) &&  
			  !TRUEP(resumable_icp_pop_list_if_end_marker()))
		      index_1 = resumable_icp_pop();
		  else {
		      value = read_icp_corresponding_object_index();
		      if (EQ(icp_suspend_1,value)) {
			  resumable_icp_push(Qresumable_icp_list_end);
			  resumable_icp_push(Qresumable_icp_list_end);
			  resumable_icp_push(corresponding_icp_object_index);
			  resumable_icp_push(Qhandle_icp_make_tiling_pattern);
			  result = VALUES_1(Icp_suspend);
			  POP_SPECIAL();
			  goto end_handle_icp_make_tiling_pattern;
		      }
		      index_1 = value;
		  }
		  index_space = Current_temporary_icp_object_index_space;
		  if (index_space);
		  else
		      index_space = Current_standard_icp_object_index_space;
		  if (FIXNUMP(index_1)) {
		      if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			  enlarge_index_space(index_space,index_1);
		      result_of_read = ISVREF(ISVREF(ISVREF(index_space,
			      (SI_Long)2L),IFIX(index_1) >>  -  - 
			      (SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		  }
		  else
		      result_of_read = Nil;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qgensym_window,string_constant_2,Qargument,T,
			      result_of_read,Nil,Nil);
		  gensym_window = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			TRUEP(Nil)) &&  
			!TRUEP(resumable_icp_pop_list_if_end_marker()))
		    index_1 = resumable_icp_pop();
		else {
		    value = read_icp_corresponding_object_index();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(corresponding_icp_object_index);
			resumable_icp_push(Qhandle_icp_make_tiling_pattern);
			result = VALUES_1(Icp_suspend);
			goto end_handle_icp_make_tiling_pattern;
		    }
		    index_1 = value;
		}
		index_space = Current_temporary_icp_object_index_space;
		if (index_space);
		else
		    index_space = Current_standard_icp_object_index_space;
		if (FIXNUMP(index_1)) {
		    if (FIXNUM_GE(index_1,ISVREF(index_space,(SI_Long)4L)))
			enlarge_index_space(index_space,index_1);
		    gensym_window = ISVREF(ISVREF(ISVREF(index_space,
			    (SI_Long)2L),IFIX(index_1) >>  -  - 
			    (SI_Long)10L),IFIX(index_1) & (SI_Long)1023L);
		}
		else
		    gensym_window = Nil;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		tiling_pattern_rows_with_color_values = resumable_icp_pop();
	    else if (Icp_read_trace_cutoff_level_qm) {
		if (Icp_read_trace_cutoff_level_qm) {
		    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
		    if (tracep);
		    else
			tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
				(SI_Long)3L ? T : Nil;
		}
		else
		    tracep = Nil;
		if (tracep) {
		    emit_icp_read_trace(T,Nil,Nil,
			    Qtiling_pattern_rows_with_color_values,
			    string_constant_1,Qargument,Nil,Nil,Nil,Nil);
		    byte_count_before = instantaneous_icp_reader_byte_count();
		}
		else
		    byte_count_before = Nil;
		current_icp_read_trace_level = 
			FIXNUM_ADD1(Current_icp_read_trace_level);
		PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
			0);
		  value = read_icp_tiling_pattern_rows_with_color_values();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(gensym_window);
		      resumable_icp_push(corresponding_icp_object_index);
		      resumable_icp_push(Qhandle_icp_make_tiling_pattern);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_handle_icp_make_tiling_pattern;
		  }
		  result_of_read = value;
		  if (tracep)
		      emit_icp_read_trace(Nil,byte_count_before,
			      instantaneous_icp_reader_byte_count(),
			      Qtiling_pattern_rows_with_color_values,
			      string_constant_1,Qargument,T,result_of_read,
			      Nil,Nil);
		  tiling_pattern_rows_with_color_values = result_of_read;
		POP_SPECIAL();
	    }
	    else {
		value = read_icp_tiling_pattern_rows_with_color_values();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(gensym_window);
		    resumable_icp_push(corresponding_icp_object_index);
		    resumable_icp_push(Qhandle_icp_make_tiling_pattern);
		    result = VALUES_1(Icp_suspend);
		    goto end_handle_icp_make_tiling_pattern;
		}
		tiling_pattern_rows_with_color_values = value;
	    }
	    abort_for_icp_catcher_qm = Nil;
	    PUSH_SPECIAL(Abort_for_icp_catcher_qm,abort_for_icp_catcher_qm,0);
	      handle_icp_make_tiling_pattern__body(corresponding_icp_object_index,
		      gensym_window,tiling_pattern_rows_with_color_values);
	    POP_SPECIAL();
	}
	temp = Nil;
    }
    result = VALUES_1(temp);
  end_handle_icp_make_tiling_pattern:
    return result;
}

static Object Qread_icp_tiling_pattern_rows_with_color_values;  /* read-icp-tiling-pattern-rows-with-color-values */

/* READ-ICP-TILING-PATTERN-ROWS-WITH-COLOR-VALUES */
Object read_icp_tiling_pattern_rows_with_color_values()
{
    Object tracep, byte_count_before, current_icp_read_trace_level, width;
    Object height, ab_loopvar_, ab_loopvar__1, ab_loopvar__2, ab_loopvar__3;
    Object ab_loopvar__4, temp, result_of_read, resumable_icp_state_1;
    Object icp_suspend_1, top, value, arg1, ab_loopvar__5, arg2;
    SI_Long j, ab_loop_bind_, i, ab_loop_bind__1;
    Declare_special(1);
    Object result;

    x_note_fn_call(51,56);
    if (Disable_resumability) {
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)4L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qtiling_pattern_rows_with_color_values,
			string_constant_5,Qvalue,Nil,Nil,Nil,Nil);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    0);
	      width = read_icp_unsigned_integer();
	      height = read_icp_unsigned_integer();
	      j = (SI_Long)0L;
	      ab_loop_bind_ = IFIX(height);
	      ab_loopvar_ = Nil;
	      ab_loopvar__1 = Nil;
	      ab_loopvar__2 = Nil;
	    next_loop:
	      if (j >= ab_loop_bind_)
		  goto end_loop;
	      i = (SI_Long)0L;
	      ab_loop_bind__1 = IFIX(width);
	      ab_loopvar__2 = Nil;
	      ab_loopvar__3 = Nil;
	      ab_loopvar__4 = Nil;
	    next_loop_1:
	      if (i >= ab_loop_bind__1)
		  goto end_loop_1;
	      ab_loopvar__4 = gensym_cons_1(read_icp_unsigned_integer(),Nil);
	      if (ab_loopvar__3)
		  M_CDR(ab_loopvar__3) = ab_loopvar__4;
	      else
		  ab_loopvar__2 = ab_loopvar__4;
	      ab_loopvar__3 = ab_loopvar__4;
	      i = i + (SI_Long)1L;
	      goto next_loop_1;
	    end_loop_1:
	      temp = ab_loopvar__2;
	      goto end;
	      temp = Qnil;
	    end:;
	      ab_loopvar__2 = gensym_cons_1(temp,Nil);
	      if (ab_loopvar__1)
		  M_CDR(ab_loopvar__1) = ab_loopvar__2;
	      else
		  ab_loopvar_ = ab_loopvar__2;
	      ab_loopvar__1 = ab_loopvar__2;
	      j = j + (SI_Long)1L;
	      goto next_loop;
	    end_loop:
	      result_of_read = ab_loopvar_;
	      goto end_1;
	      result_of_read = Qnil;
	    end_1:;
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qtiling_pattern_rows_with_color_values,
			  string_constant_5,Qvalue,T,result_of_read,Nil,Nil);
	      temp = result_of_read;
	    POP_SPECIAL();
	}
	else {
	    width = read_icp_unsigned_integer();
	    height = read_icp_unsigned_integer();
	    j = (SI_Long)0L;
	    ab_loop_bind_ = IFIX(height);
	    ab_loopvar_ = Nil;
	    ab_loopvar__1 = Nil;
	    ab_loopvar__2 = Nil;
	  next_loop_2:
	    if (j >= ab_loop_bind_)
		goto end_loop_2;
	    i = (SI_Long)0L;
	    ab_loop_bind__1 = IFIX(width);
	    ab_loopvar__2 = Nil;
	    ab_loopvar__3 = Nil;
	    ab_loopvar__4 = Nil;
	  next_loop_3:
	    if (i >= ab_loop_bind__1)
		goto end_loop_3;
	    ab_loopvar__4 = gensym_cons_1(read_icp_unsigned_integer(),Nil);
	    if (ab_loopvar__3)
		M_CDR(ab_loopvar__3) = ab_loopvar__4;
	    else
		ab_loopvar__2 = ab_loopvar__4;
	    ab_loopvar__3 = ab_loopvar__4;
	    i = i + (SI_Long)1L;
	    goto next_loop_3;
	  end_loop_3:
	    temp = ab_loopvar__2;
	    goto end_2;
	    temp = Qnil;
	  end_2:;
	    ab_loopvar__2 = gensym_cons_1(temp,Nil);
	    if (ab_loopvar__1)
		M_CDR(ab_loopvar__1) = ab_loopvar__2;
	    else
		ab_loopvar_ = ab_loopvar__2;
	    ab_loopvar__1 = ab_loopvar__2;
	    j = j + (SI_Long)1L;
	    goto next_loop_2;
	  end_loop_2:
	    temp = ab_loopvar_;
	    goto end_3;
	    temp = Qnil;
	  end_3:;
	}
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qread_icp_tiling_pattern_rows_with_color_values,top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qread_icp_tiling_pattern_rows_with_color_values,
			top,Nil);
		goto end_read_icp_tiling_pattern_rows_with_color_values;
	    }
	}
	if (Icp_read_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_read_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_read_trace_cutoff_level_qm) >= 
			(SI_Long)4L ? T : Nil;
	    if (tracep) {
		emit_icp_read_trace(T,Nil,Nil,
			Qtiling_pattern_rows_with_color_values,
			string_constant_5,Qvalue,Nil,Nil,Nil,Nil);
		byte_count_before = instantaneous_icp_reader_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_read_trace_level = 
		    FIXNUM_ADD1(Current_icp_read_trace_level);
	    PUSH_SPECIAL(Current_icp_read_trace_level,current_icp_read_trace_level,
		    0);
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  width = resumable_icp_pop();
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(Qread_icp_tiling_pattern_rows_with_color_values);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_read_icp_tiling_pattern_rows_with_color_values;
		  }
		  width = value;
	      }
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  height = resumable_icp_pop();
	      else {
		  value = read_icp_unsigned_integer();
		  if (EQ(icp_suspend_1,value)) {
		      resumable_icp_push(Qresumable_icp_list_end);
		      resumable_icp_push(width);
		      resumable_icp_push(Qread_icp_tiling_pattern_rows_with_color_values);
		      result = VALUES_1(Icp_suspend);
		      POP_SPECIAL();
		      goto end_read_icp_tiling_pattern_rows_with_color_values;
		  }
		  height = value;
	      }
	      j = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		      IFIX(resumable_icp_pop()) : (SI_Long)0L;
	      ab_loop_bind_ = (resumable_icp_state_1 ? 
		      TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		      IFIX(resumable_icp_pop()) : IFIX(height);
	      ab_loopvar_ = (resumable_icp_state_1 ? 
		      TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		      resumable_icp_pop() : Nil;
	      ab_loopvar__1 = (resumable_icp_state_1 ? 
		      TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		      resumable_icp_pop() : Nil;
	      ab_loopvar__2 = (resumable_icp_state_1 ? 
		      TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		      resumable_icp_pop() : Nil;
	      if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil))
		  goto resume;
	    next_loop_4:
	      if (j >= ab_loop_bind_)
		  goto end_loop_4;
	    resume:
	      if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()))
		  arg1 = resumable_icp_pop();
	      else {
		  i = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
			   TRUEP(Nil)) &&  
			  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
			  IFIX(resumable_icp_pop()) : (SI_Long)0L;
		  ab_loop_bind__1 = (resumable_icp_state_1 ? 
			  TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
			  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
			  IFIX(resumable_icp_pop()) : IFIX(width);
		  ab_loopvar__3 = (resumable_icp_state_1 ? 
			  TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
			  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
			  resumable_icp_pop() : Nil;
		  ab_loopvar__4 = (resumable_icp_state_1 ? 
			  TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
			  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
			  resumable_icp_pop() : Nil;
		  ab_loopvar__5 = (resumable_icp_state_1 ? 
			  TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
			  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
			  resumable_icp_pop() : Nil;
		  if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			  TRUEP(Nil))
		      goto resume_1;
		next_loop_5:
		  if (i >= ab_loop_bind__1)
		      goto end_loop_5;
		resume_1:
		  if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) :
			   TRUEP(Nil)) &&  
			  !TRUEP(resumable_icp_pop_list_if_end_marker()))
		      arg1 = resumable_icp_pop();
		  else {
		      value = read_icp_unsigned_integer();
		      if (EQ(icp_suspend_1,value)) {
			  resumable_icp_push(Qresumable_icp_list_end);
			  resumable_icp_push(ab_loopvar__5);
			  resumable_icp_push(ab_loopvar__4);
			  resumable_icp_push(ab_loopvar__3);
			  resumable_icp_push(FIX(ab_loop_bind__1));
			  resumable_icp_push(FIX(i));
			  resumable_icp_push(Qresumable_icp_list_end);
			  resumable_icp_push(ab_loopvar__2);
			  resumable_icp_push(ab_loopvar__1);
			  resumable_icp_push(ab_loopvar_);
			  resumable_icp_push(FIX(ab_loop_bind_));
			  resumable_icp_push(FIX(j));
			  resumable_icp_push(height);
			  resumable_icp_push(width);
			  resumable_icp_push(Qread_icp_tiling_pattern_rows_with_color_values);
			  result = VALUES_1(Icp_suspend);
			  POP_SPECIAL();
			  goto end_read_icp_tiling_pattern_rows_with_color_values;
		      }
		      arg1 = value;
		  }
		  arg2 = (resumable_icp_state_1 ? 
			  TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
			  !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
			  resumable_icp_pop() : Nil;
		  ab_loopvar__5 = gensym_cons_1(arg1,arg2);
		  if (ab_loopvar__4)
		      M_CDR(ab_loopvar__4) = ab_loopvar__5;
		  else
		      ab_loopvar__3 = ab_loopvar__5;
		  ab_loopvar__4 = ab_loopvar__5;
		  i = i + (SI_Long)1L;
		  goto next_loop_5;
		end_loop_5:
		  arg1 = ab_loopvar__3;
		  goto end_4;
		  arg1 = Qnil;
		end_4:;
	      }
	      arg2 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		      resumable_icp_pop() : Nil;
	      ab_loopvar__2 = gensym_cons_1(arg1,arg2);
	      if (ab_loopvar__1)
		  M_CDR(ab_loopvar__1) = ab_loopvar__2;
	      else
		  ab_loopvar_ = ab_loopvar__2;
	      ab_loopvar__1 = ab_loopvar__2;
	      j = j + (SI_Long)1L;
	      goto next_loop_4;
	    end_loop_4:
	      result_of_read = ab_loopvar_;
	      goto end_5;
	      result_of_read = Qnil;
	    end_5:;
	      if (tracep)
		  emit_icp_read_trace(Nil,byte_count_before,
			  instantaneous_icp_reader_byte_count(),
			  Qtiling_pattern_rows_with_color_values,
			  string_constant_5,Qvalue,T,result_of_read,Nil,Nil);
	      temp = result_of_read;
	    POP_SPECIAL();
	}
	else {
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		width = resumable_icp_pop();
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(Qread_icp_tiling_pattern_rows_with_color_values);
		    result = VALUES_1(Icp_suspend);
		    goto end_read_icp_tiling_pattern_rows_with_color_values;
		}
		width = value;
	    }
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		height = resumable_icp_pop();
	    else {
		value = read_icp_unsigned_integer();
		if (EQ(icp_suspend_1,value)) {
		    resumable_icp_push(Qresumable_icp_list_end);
		    resumable_icp_push(width);
		    resumable_icp_push(Qread_icp_tiling_pattern_rows_with_color_values);
		    result = VALUES_1(Icp_suspend);
		    goto end_read_icp_tiling_pattern_rows_with_color_values;
		}
		height = value;
	    }
	    j = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		    IFIX(resumable_icp_pop()) : (SI_Long)0L;
	    ab_loop_bind_ = (resumable_icp_state_1 ? 
		    TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		    IFIX(resumable_icp_pop()) : IFIX(height);
	    ab_loopvar_ = (resumable_icp_state_1 ? 
		    TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		    resumable_icp_pop() : Nil;
	    ab_loopvar__1 = (resumable_icp_state_1 ? 
		    TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		    resumable_icp_pop() : Nil;
	    ab_loopvar__2 = (resumable_icp_state_1 ? 
		    TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		    resumable_icp_pop() : Nil;
	    if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil))
		goto resume_2;
	  next_loop_6:
	    if (j >= ab_loop_bind_)
		goto end_loop_6;
	  resume_2:
	    if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()))
		arg1 = resumable_icp_pop();
	    else {
		i = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			TRUEP(Nil)) &&  
			!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
			IFIX(resumable_icp_pop()) : (SI_Long)0L;
		ab_loop_bind__1 = (resumable_icp_state_1 ? 
			TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
			!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
			IFIX(resumable_icp_pop()) : IFIX(width);
		ab_loopvar__3 = (resumable_icp_state_1 ? 
			TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
			!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
			resumable_icp_pop() : Nil;
		ab_loopvar__4 = (resumable_icp_state_1 ? 
			TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
			!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
			resumable_icp_pop() : Nil;
		ab_loopvar__5 = (resumable_icp_state_1 ? 
			TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
			!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
			resumable_icp_pop() : Nil;
		if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			TRUEP(Nil))
		    goto resume_3;
	      next_loop_7:
		if (i >= ab_loop_bind__1)
		    goto end_loop_7;
	      resume_3:
		if ((resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
			TRUEP(Nil)) &&  
			!TRUEP(resumable_icp_pop_list_if_end_marker()))
		    arg1 = resumable_icp_pop();
		else {
		    value = read_icp_unsigned_integer();
		    if (EQ(icp_suspend_1,value)) {
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(ab_loopvar__5);
			resumable_icp_push(ab_loopvar__4);
			resumable_icp_push(ab_loopvar__3);
			resumable_icp_push(FIX(ab_loop_bind__1));
			resumable_icp_push(FIX(i));
			resumable_icp_push(Qresumable_icp_list_end);
			resumable_icp_push(ab_loopvar__2);
			resumable_icp_push(ab_loopvar__1);
			resumable_icp_push(ab_loopvar_);
			resumable_icp_push(FIX(ab_loop_bind_));
			resumable_icp_push(FIX(j));
			resumable_icp_push(height);
			resumable_icp_push(width);
			resumable_icp_push(Qread_icp_tiling_pattern_rows_with_color_values);
			result = VALUES_1(Icp_suspend);
			goto end_read_icp_tiling_pattern_rows_with_color_values;
		    }
		    arg1 = value;
		}
		arg2 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) 
			: TRUEP(Nil)) &&  
			!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
			resumable_icp_pop() : Nil;
		ab_loopvar__5 = gensym_cons_1(arg1,arg2);
		if (ab_loopvar__4)
		    M_CDR(ab_loopvar__4) = ab_loopvar__5;
		else
		    ab_loopvar__3 = ab_loopvar__5;
		ab_loopvar__4 = ab_loopvar__5;
		i = i + (SI_Long)1L;
		goto next_loop_7;
	      end_loop_7:
		arg1 = ab_loopvar__3;
		goto end_6;
		arg1 = Qnil;
	      end_6:;
	    }
	    arg2 = (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		    resumable_icp_pop() : Nil;
	    ab_loopvar__2 = gensym_cons_1(arg1,arg2);
	    if (ab_loopvar__1)
		M_CDR(ab_loopvar__1) = ab_loopvar__2;
	    else
		ab_loopvar_ = ab_loopvar__2;
	    ab_loopvar__1 = ab_loopvar__2;
	    j = j + (SI_Long)1L;
	    goto next_loop_6;
	  end_loop_6:
	    temp = ab_loopvar_;
	    goto end_7;
	    temp = Qnil;
	  end_7:;
	}
    }
    result = VALUES_1(temp);
  end_read_icp_tiling_pattern_rows_with_color_values:
    return result;
}

static Object Qwrite_icp_tiling_pattern_rows_with_color_values;  /* write-icp-tiling-pattern-rows-with-color-values */

/* WRITE-ICP-TILING-PATTERN-ROWS-WITH-COLOR-VALUES */
Object write_icp_tiling_pattern_rows_with_color_values(tiling_pattern_rows_with_color_values)
    Object tiling_pattern_rows_with_color_values;
{
    Object tracep, byte_count_before, current_icp_write_trace_level;
    Object tiling_pattern_row, ab_loop_list_, color_value, ab_loop_list__1;
    Object result_of_write, temp, resumable_icp_state_1, icp_suspend_1, top;
    Object v1, v2, v3;
    Declare_special(1);
    Object result;

    x_note_fn_call(51,57);
    if (Disable_resumability) {
	if (Icp_write_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			(SI_Long)4L ? T : Nil;
	    if (tracep) {
		emit_icp_write_trace(T,Nil,Nil,
			Qtiling_pattern_rows_with_color_values,
			string_constant_5,Qvalue,T,
			tiling_pattern_rows_with_color_values,Nil,Nil);
		byte_count_before = instantaneous_icp_writer_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_write_trace_level = 
		    FIXNUM_ADD1(Current_icp_write_trace_level);
	    PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
		    0);
	      write_icp_unsigned_integer(length(FIRST(tiling_pattern_rows_with_color_values)));
	      write_icp_unsigned_integer(length(tiling_pattern_rows_with_color_values));
	      tiling_pattern_row = Nil;
	      ab_loop_list_ = tiling_pattern_rows_with_color_values;
	    next_loop:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop;
	      tiling_pattern_row = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	      color_value = Nil;
	      ab_loop_list__1 = tiling_pattern_row;
	    next_loop_1:
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop_1;
	      color_value = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	      write_icp_unsigned_integer(color_value);
	      goto next_loop_1;
	    end_loop_1:;
	      goto next_loop;
	    end_loop:
	      result_of_write = Qnil;
	      if (tracep)
		  emit_icp_write_trace(Nil,byte_count_before,
			  instantaneous_icp_writer_byte_count(),
			  Qtiling_pattern_rows_with_color_values,
			  string_constant_5,Qvalue,Nil,Nil,Nil,Nil);
	      temp = result_of_write;
	    POP_SPECIAL();
	}
	else {
	    write_icp_unsigned_integer(length(FIRST(tiling_pattern_rows_with_color_values)));
	    write_icp_unsigned_integer(length(tiling_pattern_rows_with_color_values));
	    tiling_pattern_row = Nil;
	    ab_loop_list_ = tiling_pattern_rows_with_color_values;
	  next_loop_2:
	    if ( !TRUEP(ab_loop_list_))
		goto end_loop_2;
	    tiling_pattern_row = M_CAR(ab_loop_list_);
	    ab_loop_list_ = M_CDR(ab_loop_list_);
	    color_value = Nil;
	    ab_loop_list__1 = tiling_pattern_row;
	  next_loop_3:
	    if ( !TRUEP(ab_loop_list__1))
		goto end_loop_3;
	    color_value = M_CAR(ab_loop_list__1);
	    ab_loop_list__1 = M_CDR(ab_loop_list__1);
	    write_icp_unsigned_integer(color_value);
	    goto next_loop_3;
	  end_loop_3:;
	    goto next_loop_2;
	  end_loop_2:
	    temp = Qnil;
	}
    }
    else {
	resumable_icp_state_1 = Resumable_icp_state;
	icp_suspend_1 = Icp_suspend;
	if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : TRUEP(Nil)) {
	    top = resumable_icp_pop();
	    if ( !EQ(Qwrite_icp_tiling_pattern_rows_with_color_values,top)) {
		result = icp_error_internal(Qerror,string_constant_3,
			Qwrite_icp_tiling_pattern_rows_with_color_values,
			top,Nil);
		goto end_write_icp_tiling_pattern_rows_with_color_values;
	    }
	}
	tiling_pattern_rows_with_color_values = (resumable_icp_state_1 ? 
		TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		!TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		resumable_icp_pop() : tiling_pattern_rows_with_color_values;
	if (Icp_write_trace_cutoff_level_qm) {
	    tracep = EQ(Icp_write_trace_cutoff_level_qm,T) ? T : Nil;
	    if (tracep);
	    else
		tracep = IFIX(Icp_write_trace_cutoff_level_qm) >= 
			(SI_Long)4L ? T : Nil;
	    if (tracep) {
		emit_icp_write_trace(T,Nil,Nil,
			Qtiling_pattern_rows_with_color_values,
			string_constant_5,Qvalue,T,
			tiling_pattern_rows_with_color_values,Nil,Nil);
		byte_count_before = instantaneous_icp_writer_byte_count();
	    }
	    else
		byte_count_before = Nil;
	    current_icp_write_trace_level = 
		    FIXNUM_ADD1(Current_icp_write_trace_level);
	    PUSH_SPECIAL(Current_icp_write_trace_level,current_icp_write_trace_level,
		    0);
	      if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil)) {
		  temp = resumable_icp_pop();
		  if (! !(FIXNUMP(temp) && FIXNUM_LE(FIX((SI_Long)-128L),
			  temp) && FIXNUM_LE(temp,FIX((SI_Long)127L))))
		      switch (INTEGER_TO_CHAR(temp)) {
			case 1:
			  goto l1;
			  break;
			case 2:
			  goto l2;
			  break;
			case 3:
			  goto l3;
			  break;
			default:
			  break;
		      }
	      }
	    l1:
	      if (EQ(icp_suspend_1,
		      write_icp_unsigned_integer(length(FIRST(tiling_pattern_rows_with_color_values))))) 
			  {
		  resumable_icp_push(FIX((SI_Long)1L));
		  result = VALUES_1(Icp_suspend);
		  goto end_block;
	      }
	    l2:
	      if (EQ(icp_suspend_1,
		      write_icp_unsigned_integer(length(tiling_pattern_rows_with_color_values)))) 
			  {
		  resumable_icp_push(FIX((SI_Long)2L));
		  result = VALUES_1(Icp_suspend);
		  goto end_block;
	      }
	    l3:
	      tiling_pattern_row = (resumable_icp_state_1 ? 
		      TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		      resumable_icp_pop() : Nil;
	      ab_loop_list_ = (resumable_icp_state_1 ? 
		      TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		      resumable_icp_pop() : 
		      tiling_pattern_rows_with_color_values;
	      if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil))
		  goto resume;
	    next_loop_4:
	      if ( !TRUEP(ab_loop_list_))
		  goto end_loop_4;
	      tiling_pattern_row = M_CAR(ab_loop_list_);
	      ab_loop_list_ = M_CDR(ab_loop_list_);
	    resume:
	      color_value = (resumable_icp_state_1 ? 
		      TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		      resumable_icp_pop() : Nil;
	      ab_loop_list__1 = (resumable_icp_state_1 ? 
		      TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		      !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		      resumable_icp_pop() : tiling_pattern_row;
	      if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		      TRUEP(Nil))
		  goto resume_1;
	    next_loop_5:
	      if ( !TRUEP(ab_loop_list__1))
		  goto end_loop_5;
	      color_value = M_CAR(ab_loop_list__1);
	      ab_loop_list__1 = M_CDR(ab_loop_list__1);
	    resume_1:
	      if (EQ(icp_suspend_1,write_icp_unsigned_integer(color_value))) {
		  resumable_icp_push(ab_loop_list__1);
		  resumable_icp_push(color_value);
		  resumable_icp_push(ab_loop_list_);
		  resumable_icp_push(tiling_pattern_row);
		  resumable_icp_push(FIX((SI_Long)3L));
		  result = VALUES_1(Icp_suspend);
		  goto end_block;
	      }
	      goto next_loop_5;
	    end_loop_5:;
	      goto next_loop_4;
	    end_loop_4:
	      result = VALUES_1(Qnil);
	      goto end_block;
	    end_block:
	      MVS_3(result,v1,v2,v3);
	      if (EQ(icp_suspend_1,v1)) {
		  resumable_icp_push(tiling_pattern_rows_with_color_values);
		  resumable_icp_push(Qwrite_icp_tiling_pattern_rows_with_color_values);
		  result = VALUES_1(Icp_suspend);
		  POP_SPECIAL();
		  goto end_write_icp_tiling_pattern_rows_with_color_values;
	      }
	      temp = v1;
	      result_of_write = temp;
	      if (tracep)
		  emit_icp_write_trace(Nil,byte_count_before,
			  instantaneous_icp_writer_byte_count(),
			  Qtiling_pattern_rows_with_color_values,
			  string_constant_5,Qvalue,Nil,Nil,Nil,Nil);
	      temp = result_of_write;
	    POP_SPECIAL();
	}
	else {
	    if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil)) {
		temp = resumable_icp_pop();
		if (! !(FIXNUMP(temp) && FIXNUM_LE(FIX((SI_Long)-128L),
			temp) && FIXNUM_LE(temp,FIX((SI_Long)127L))))
		    switch (INTEGER_TO_CHAR(temp)) {
		      case 1:
			goto l1_1;
			break;
		      case 2:
			goto l2_1;
			break;
		      case 3:
			goto l3_1;
			break;
		      default:
			break;
		    }
	    }
	  l1_1:
	    if (EQ(icp_suspend_1,
		    write_icp_unsigned_integer(length(FIRST(tiling_pattern_rows_with_color_values))))) 
			{
		resumable_icp_push(FIX((SI_Long)1L));
		result = VALUES_1(Icp_suspend);
		goto end_block_1;
	    }
	  l2_1:
	    if (EQ(icp_suspend_1,
		    write_icp_unsigned_integer(length(tiling_pattern_rows_with_color_values)))) 
			{
		resumable_icp_push(FIX((SI_Long)2L));
		result = VALUES_1(Icp_suspend);
		goto end_block_1;
	    }
	  l3_1:
	    tiling_pattern_row = (resumable_icp_state_1 ? 
		    TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		    resumable_icp_pop() : Nil;
	    ab_loop_list_ = (resumable_icp_state_1 ? 
		    TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		    resumable_icp_pop() : 
		    tiling_pattern_rows_with_color_values;
	    if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil))
		goto resume_2;
	  next_loop_6:
	    if ( !TRUEP(ab_loop_list_))
		goto end_loop_6;
	    tiling_pattern_row = M_CAR(ab_loop_list_);
	    ab_loop_list_ = M_CDR(ab_loop_list_);
	  resume_2:
	    color_value = (resumable_icp_state_1 ? 
		    TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		    resumable_icp_pop() : Nil;
	    ab_loop_list__1 = (resumable_icp_state_1 ? 
		    TRUEP(Resumable_icp_state) : TRUEP(Nil)) &&  
		    !TRUEP(resumable_icp_pop_list_if_end_marker()) ? 
		    resumable_icp_pop() : tiling_pattern_row;
	    if (resumable_icp_state_1 ? TRUEP(Resumable_icp_state) : 
		    TRUEP(Nil))
		goto resume_3;
	  next_loop_7:
	    if ( !TRUEP(ab_loop_list__1))
		goto end_loop_7;
	    color_value = M_CAR(ab_loop_list__1);
	    ab_loop_list__1 = M_CDR(ab_loop_list__1);
	  resume_3:
	    if (EQ(icp_suspend_1,write_icp_unsigned_integer(color_value))) {
		resumable_icp_push(ab_loop_list__1);
		resumable_icp_push(color_value);
		resumable_icp_push(ab_loop_list_);
		resumable_icp_push(tiling_pattern_row);
		resumable_icp_push(FIX((SI_Long)3L));
		result = VALUES_1(Icp_suspend);
		goto end_block_1;
	    }
	    goto next_loop_7;
	  end_loop_7:;
	    goto next_loop_6;
	  end_loop_6:
	    result = VALUES_1(Qnil);
	    goto end_block_1;
	  end_block_1:
	    MVS_3(result,v1,v2,v3);
	    if (EQ(icp_suspend_1,v1)) {
		resumable_icp_push(tiling_pattern_rows_with_color_values);
		resumable_icp_push(Qwrite_icp_tiling_pattern_rows_with_color_values);
		result = VALUES_1(Icp_suspend);
		goto end_write_icp_tiling_pattern_rows_with_color_values;
	    }
	    temp = v1;
	}
    }
    result = VALUES_1(temp);
  end_write_icp_tiling_pattern_rows_with_color_values:
    return result;
}

static Object Qx11_window;         /* x11-window */

static Object Qblack;              /* black */

static Object Qwhite;              /* white */

/* INSTALL-TILING-PATTERN */
Object install_tiling_pattern(gensym_window)
    Object gensym_window;
{
    Object temp, tiling_pattern_or_color, current_color_map, foreground;
    Object background;
    Declare_special(1);

    x_note_fn_call(51,58);
    temp = ISVREF(gensym_window,(SI_Long)1L);
    if (EQ(temp,Qx11_window)) {
	tiling_pattern_or_color = ISVREF(gensym_window,(SI_Long)21L);
	if (SIMPLE_VECTOR_P(tiling_pattern_or_color) && 
		EQ(ISVREF(tiling_pattern_or_color,(SI_Long)0L),
		Qg2_defstruct_structure_name_tiling_pattern_g2_struct)) {
	    current_color_map = ISVREF(gensym_window,(SI_Long)20L);
	    PUSH_SPECIAL(Current_color_map,current_color_map,0);
	      foreground = map_to_color_value(Tiling_pattern_foreground_color);
	      background = map_to_color_value(Tiling_pattern_background_color);
	      if (FIXNUM_EQ(background,foreground)) {
		  foreground = map_to_color_value(Qblack);
		  background = map_to_color_value(Qwhite);
	      }
	      g2ext_x11_initialize_tile(IFIX(ISVREF(gensym_window,
		      (SI_Long)17L)),IFIX(ISVREF(tiling_pattern_or_color,
		      (SI_Long)4L)),IFIX(foreground),IFIX(background));
	    POP_SPECIAL();
	}
    }
    return VALUES_1(Nil);
}

/* MAKE-AND-INSTALL-TILING-PATTERN */
Object make_and_install_tiling_pattern(gensym_window,tiling_pattern_rows)
    Object gensym_window, tiling_pattern_rows;
{
    Object temp;

    x_note_fn_call(51,59);
    temp = make_tiling_pattern(gensym_window,tiling_pattern_rows);
    install_tiling_pattern(gensym_window);
    return VALUES_1(temp);
}

/* MAKE-TILING-PATTERN */
Object make_tiling_pattern(gensym_window,tiling_pattern_rows)
    Object gensym_window, tiling_pattern_rows;
{
    Object tiling_pattern_width, tiling_pattern_height, current_color_map;
    Object tiling_pattern_row, ab_loop_list_, ab_loopvar_, ab_loopvar__1;
    Object ab_loopvar__2, i, ab_loopvar__3, ab_loopvar__4;
    Object color_or_color_value, ab_loop_list__1, ab_loopvar__5, ab_loopvar__6;
    Object temp, tiling_pattern_rows_with_color_values;
    Object tiling_pattern_stored_raster_qm, current_scratchpad_raster_type;
    Object current_scratchpad_raster_tiled_p, current_scratchpad_raster_width;
    Object current_scratchpad_raster_height, current_scratchpad_raster_depth;
    Object on_monochrome_raster_list_p, current_x_offset_for_stored_raster_qm;
    Object current_y_offset_for_stored_raster_qm;
    Object current_x_max_for_stored_raster_qm;
    Object current_y_max_for_stored_raster_qm, current_scratchpad_raster;
    Object ab_loop_iter_flag_, bit_1;
    SI_Long j, i_1;
    Declare_special(12);
    Object result;

    x_note_fn_call(51,60);
    tiling_pattern_width = length(FIRST(tiling_pattern_rows));
    tiling_pattern_height = length(tiling_pattern_rows);
    current_color_map = ISVREF(gensym_window,(SI_Long)20L);
    PUSH_SPECIAL(Current_color_map,current_color_map,11);
      tiling_pattern_row = Nil;
      ab_loop_list_ = tiling_pattern_rows;
      ab_loopvar_ = Nil;
      ab_loopvar__1 = Nil;
      ab_loopvar__2 = Nil;
    next_loop:
      if ( !TRUEP(ab_loop_list_))
	  goto end_loop;
      tiling_pattern_row = M_CAR(ab_loop_list_);
      ab_loop_list_ = M_CDR(ab_loop_list_);
      i = FIX((SI_Long)0L);
      ab_loopvar__2 = Nil;
      ab_loopvar__3 = Nil;
      ab_loopvar__4 = Nil;
    next_loop_1:
      color_or_color_value = Nil;
      ab_loop_list__1 = tiling_pattern_row;
      ab_loopvar__4 = Nil;
      ab_loopvar__5 = Nil;
      ab_loopvar__6 = Nil;
    next_loop_2:
      if ( !TRUEP(ab_loop_list__1))
	  goto end_loop_1;
      color_or_color_value = M_CAR(ab_loop_list__1);
      ab_loop_list__1 = M_CDR(ab_loop_list__1);
      ab_loopvar__6 = gensym_cons_1(INTEGERP(color_or_color_value) ? 
	      color_or_color_value : 
	      map_to_color_value(color_or_color_value),Nil);
      if (ab_loopvar__5)
	  M_CDR(ab_loopvar__5) = ab_loopvar__6;
      else
	  ab_loopvar__4 = ab_loopvar__6;
      ab_loopvar__5 = ab_loopvar__6;
      i = FIXNUM_ADD1(i);
      if (FIXNUM_EQ(i,tiling_pattern_width))
	  goto end_loop_1;
      goto next_loop_2;
    end_loop_1:
      goto end;
      ab_loopvar__4 = Qnil;
    end:;
      if (ab_loopvar__4) {
	  if (ab_loopvar__3)
	      M_CDR(ab_loopvar__3) = ab_loopvar__4;
	  else
	      ab_loopvar__2 = ab_loopvar__4;
	  ab_loopvar__3 = last(ab_loopvar__4,_);
      }
      if (FIXNUM_EQ(i,tiling_pattern_width))
	  goto end_loop_2;
      goto next_loop_1;
    end_loop_2:
      temp = ab_loopvar__2;
      goto end_1;
      temp = Qnil;
    end_1:;
      ab_loopvar__2 = gensym_cons_1(temp,Nil);
      if (ab_loopvar__1)
	  M_CDR(ab_loopvar__1) = ab_loopvar__2;
      else
	  ab_loopvar_ = ab_loopvar__2;
      ab_loopvar__1 = ab_loopvar__2;
      goto next_loop;
    end_loop:
      tiling_pattern_rows_with_color_values = ab_loopvar_;
      goto end_2;
      tiling_pattern_rows_with_color_values = Qnil;
    end_2:;
      temp = ISVREF(gensym_window,(SI_Long)1L);
      if (EQ(temp,Qicp))
	  tiling_pattern_stored_raster_qm = Nil;
      else if (EQ(temp,Qprinter))
	  tiling_pattern_stored_raster_qm = Nil;
      else {
	  current_scratchpad_raster_type = ISVREF(gensym_window,(SI_Long)23L);
	  PUSH_SPECIAL(Current_scratchpad_raster_type,current_scratchpad_raster_type,
		  10);
	    current_scratchpad_raster_tiled_p = Nil;
	    PUSH_SPECIAL(Current_scratchpad_raster_tiled_p,current_scratchpad_raster_tiled_p,
		    9);
	      current_scratchpad_raster_width = tiling_pattern_width;
	      PUSH_SPECIAL(Current_scratchpad_raster_width,current_scratchpad_raster_width,
		      8);
		current_scratchpad_raster_height = tiling_pattern_height;
		PUSH_SPECIAL(Current_scratchpad_raster_height,current_scratchpad_raster_height,
			7);
		  current_scratchpad_raster_depth = FIX((SI_Long)1L);
		  PUSH_SPECIAL(Current_scratchpad_raster_depth,current_scratchpad_raster_depth,
			  6);
		    on_monochrome_raster_list_p = Nil;
		    PUSH_SPECIAL(On_monochrome_raster_list_p,on_monochrome_raster_list_p,
			    5);
		      current_x_offset_for_stored_raster_qm = Nil;
		      PUSH_SPECIAL(Current_x_offset_for_stored_raster_qm,current_x_offset_for_stored_raster_qm,
			      4);
			current_y_offset_for_stored_raster_qm = Nil;
			PUSH_SPECIAL(Current_y_offset_for_stored_raster_qm,current_y_offset_for_stored_raster_qm,
				3);
			  current_x_max_for_stored_raster_qm = Nil;
			  PUSH_SPECIAL(Current_x_max_for_stored_raster_qm,current_x_max_for_stored_raster_qm,
				  2);
			    current_y_max_for_stored_raster_qm = Nil;
			    PUSH_SPECIAL(Current_y_max_for_stored_raster_qm,current_y_max_for_stored_raster_qm,
				    1);
			      current_scratchpad_raster = Nil;
			      PUSH_SPECIAL(Current_scratchpad_raster,current_scratchpad_raster,
				      0);
				initialize_scratchpad_raster(gensym_window,
					tiling_pattern_width,
					tiling_pattern_height,
					FIX((SI_Long)1L),T);
				tiling_pattern_row = Nil;
				ab_loop_list_ = 
					tiling_pattern_rows_with_color_values;
				j = (SI_Long)0L;
				ab_loop_iter_flag_ = T;
			      next_loop_3:
				if ( !TRUEP(ab_loop_list_))
				    goto end_loop_3;
				tiling_pattern_row = M_CAR(ab_loop_list_);
				ab_loop_list_ = M_CDR(ab_loop_list_);
				if ( !TRUEP(ab_loop_iter_flag_))
				    j = j + (SI_Long)1L;
				i_1 = (SI_Long)0L;
				bit_1 = Nil;
				ab_loop_list__1 = tiling_pattern_row;
			      next_loop_4:
				if ( !TRUEP(ab_loop_list__1))
				    goto end_loop_4;
				bit_1 = M_CAR(ab_loop_list__1);
				ab_loop_list__1 = M_CDR(ab_loop_list__1);
				if (IFIX(bit_1) == (SI_Long)1L) {
				    if (EQ(Current_scratchpad_raster_type,
					    Qx11_pixmap))
					g2ext_p_draw_point(IFIX(Current_scratchpad_raster),
						i_1,j,IFIX(bit_1));
				}
				i_1 = i_1 + (SI_Long)1L;
				goto next_loop_4;
			      end_loop_4:;
				ab_loop_iter_flag_ = Nil;
				goto next_loop_3;
			      end_loop_3:;
				tiling_pattern_stored_raster_qm = 
					convert_current_scratchpad_raster_to_stored_raster(gensym_window,
					tiling_pattern_width,
					tiling_pattern_height,
					FIX((SI_Long)1L),T);
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
      }
      result = make_tiling_pattern_structure_1(gensym_window,
	      tiling_pattern_width,tiling_pattern_height,
	      tiling_pattern_rows_with_color_values,
	      tiling_pattern_stored_raster_qm);
    POP_SPECIAL();
    return result;
}

/* RECLAIM-DEFAULT-PANE-BACKGROUND-COLOR-OR-TILING-PATTERN */
Object reclaim_default_pane_background_color_or_tiling_pattern(color_or_tiling_pattern)
    Object color_or_tiling_pattern;
{
    x_note_fn_call(51,61);
    if (SIMPLE_VECTOR_P(color_or_tiling_pattern) && 
	    EQ(ISVREF(color_or_tiling_pattern,(SI_Long)0L),
	    Qg2_defstruct_structure_name_tiling_pattern_g2_struct))
	return reclaim_tiling_pattern_1(color_or_tiling_pattern);
    else
	return VALUES_1(Nil);
}

/* GET-BACKGROUND-COLOR-FOR-SYMBOL */
Object get_background_color_for_symbol(color_symbol)
    Object color_symbol;
{
    Object r_qm, g_qm, b_qm, temp;
    SI_Long temp_1, temp_2;
    Object result;

    x_note_fn_call(51,62);
    if (color_symbol)
	result = rgb_from_color(color_symbol);
    else
	result = VALUES_1(Nil);
    MVS_3(result,r_qm,g_qm,b_qm);
    temp = r_qm;
    if (temp);
    else
	temp = FIX((SI_Long)-1L);
    temp_1 = IFIX(temp);
    temp = g_qm;
    if (temp);
    else
	temp = FIX((SI_Long)-1L);
    temp_2 = IFIX(temp);
    temp = b_qm;
    if (temp);
    else
	temp = FIX((SI_Long)-1L);
    g2ext_set_mdi_client_background_color(temp_1,temp_2,IFIX(temp));
    return VALUES_1(color_symbol);
}

static Object Qbackground;         /* background */

static Object string_constant_6;   /* "~s is not a color or background pattern file." */

static Object string_constant_7;   /* "Problem reading background pattern ~s: ~a" */

/* GET-BACKGROUND-COLOR-OR-TILING-PATTERN-FROM-COMMAND-LINE */
Object get_background_color_or_tiling_pattern_from_command_line()
{
    Object path_or_symbol, raster_or_error, tiling_pattern, temp;

    x_note_fn_call(51,63);
    path_or_symbol = getf(Command_line_arguments,Qbackground,_);
    raster_or_error = Nil;
    tiling_pattern = get_tiling_pattern(path_or_symbol);
    if (tiling_pattern)
	return copy_tree_using_gensym_conses_1(tiling_pattern);
    else if (SYMBOLP(path_or_symbol))
	return get_background_color_for_symbol(path_or_symbol);
    else if ( !(INLINE_UNSIGNED_BYTE_16_VECTOR_P(path_or_symbol) != 
	    (SI_Long)0L) ||  
	    !TRUEP(gensym_probe_file_for_truth_value(path_or_symbol))) {
	notify_user_at_console(2,string_constant_6,path_or_symbol);
	g2ext_set_mdi_client_background_color((SI_Long)-1L,(SI_Long)-1L,
		(SI_Long)-1L);
	return VALUES_1(Nil);
    }
    else {
	raster_or_error = read_raster(1,path_or_symbol);
	if (text_string_p(raster_or_error)) {
	    notify_user_at_console(3,string_constant_7,path_or_symbol,
		    raster_or_error);
	    reclaim_text_string(raster_or_error);
	    g2ext_set_mdi_client_background_color((SI_Long)-1L,
		    (SI_Long)-1L,(SI_Long)-1L);
	    return VALUES_1(Nil);
	}
	else {
	    temp = shredded_raster_to_background_tile(raster_or_error);
	    reclaim_shredded_raster(raster_or_error);
	    return VALUES_1(temp);
	}
    }
}

static Object Qtelewindows;        /* telewindows */

static Object Qdark_gray;          /* dark-gray */

static Object Qlight_gray;         /* light-gray */

/* GET-BACKGROUND-COLOR-OR-TILING-PATTERN */
Object get_background_color_or_tiling_pattern()
{
    Object temp;

    x_note_fn_call(51,64);
    temp = get_background_color_or_tiling_pattern_from_command_line();
    if (temp);
    else
	temp = EQ(Current_system_name,Qtelewindows) && 
		telewindows_mdi_frame_p() ? Qdark_gray : Nil;
    if (temp)
	return VALUES_1(temp);
    else
	return VALUES_1(Qlight_gray);
}

void windows2_INIT()
{
    Object temp, temp_1, reclaim_structure_for_tiling_pattern_1;
    Object AB_package, Qreclaim_icp_port_entry_for_tiling_pattern;
    Object Qtiling_pattern, list_constant_25;
    Object Qcorresponding_icp_object_map_for_tiling_pattern;
    Object Qreclaim_structure, Qoutstanding_tiling_pattern_count;
    Object Qtiling_pattern_structure_memory_usage, Qutilities2;
    Object Qtiling_pattern_count, Qchain_of_available_tiling_patterns;
    Object string_constant_9, Qtype_description_of_type;
    Object Qtype_description_of_unique_type_name_of_gensym_structure;
    Object string_constant_8, Qunique_structure_type_of_ab_name_qm;
    Object Qab_name_of_unique_structure_type;
    Object G2_DEFSTRUCT_STRUCTURE_NAME_package, Qgray, list_constant_24;
    Object list_constant_23, list_constant_17, list_constant_22;
    Object list_constant_21, list_constant_20, list_constant_19;
    Object list_constant_18, list_constant_16, list_constant_15;
    Object list_constant_14, list_constant_13, list_constant_12;
    Object list_constant_11, list_constant_4, list_constant_10;
    Object list_constant_3, list_constant_5, list_constant_9, list_constant_8;
    Object list_constant_7, list_constant_6;
    Object Qhandler_for_printing_paint_arc_or_circle_in_current_scratchpad_raster;
    Object Qhandler_for_printing_paint_wide_line_in_current_scratchpad_raster;
    Object Qhandler_for_printing_paint_line_in_current_scratchpad_raster;
    Object Qhandler_for_printing_paint_filled_polygon_in_current_scratchpad_raster;
    Object list_constant_2, Qwindows2, Qthe_polygon_data_buffer;
    Object Qobtain_simple_gensym_string, Kfuncall;
    Object Qhandler_for_printing_paint_filled_triangle_in_current_scratchpad_raster;
    Object Qhandler_for_printing_paint_point_in_current_scratchpad_raster;
    Object Qhandler_for_printing_paint_clearing_rectangle_in_current_scratchpad_raster;
    Object Qhandler_for_printing_paint_solid_rectangle_in_current_scratchpad_raster;
    Object Qhandler_for_printing_stipple_rectangle_in_current_scratchpad_raster;
    Object Qdark_stipple, Qmedium_stipple, Qlight_stipple, list_constant_1;

    x_note_fn_call(51,65);
    SET_PACKAGE("AB");
    AB_package = STATIC_PACKAGE("AB");
    Qlight_stipple = STATIC_SYMBOL("LIGHT-STIPPLE",AB_package);
    Qmedium_stipple = STATIC_SYMBOL("MEDIUM-STIPPLE",AB_package);
    Qdark_stipple = STATIC_SYMBOL("DARK-STIPPLE",AB_package);
    list_constant_1 = STATIC_LIST((SI_Long)3L,Qlight_stipple,
	    Qmedium_stipple,Qdark_stipple);
    All_stipples = list_constant_1;
    Qmap_to_stipple_value = STATIC_SYMBOL("MAP-TO-STIPPLE-VALUE",AB_package);
    Map_to_stipple_value_prop = Qmap_to_stipple_value;
    mutate_global_property(Qlight_stipple,FIX((SI_Long)1L),
	    Qmap_to_stipple_value);
    mutate_global_property(Qmedium_stipple,FIX((SI_Long)2L),
	    Qmap_to_stipple_value);
    mutate_global_property(Qdark_stipple,FIX((SI_Long)3L),
	    Qmap_to_stipple_value);
    Qx11_pixmap = STATIC_SYMBOL("X11-PIXMAP",AB_package);
    Qhandler_for_printing_stipple_rectangle_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("HANDLER-FOR-PRINTING-STIPPLE-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    temp = Icp_printing_message_handler_array;
    set_aref1(temp,FIX((SI_Long)365L),
	    Qhandler_for_printing_stipple_rectangle_in_current_scratchpad_raster);
    Qstipple_rectangle_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("STIPPLE-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    Qicp = STATIC_SYMBOL("ICP",AB_package);
    Qcorresponding_icp_object_map_for_symbol = 
	    STATIC_SYMBOL("CORRESPONDING-ICP-OBJECT-MAP-FOR-SYMBOL",
	    AB_package);
    string_constant = STATIC_STRING("[message]");
    Qmessage = STATIC_SYMBOL("MESSAGE",AB_package);
    Qclipped_left_edge = STATIC_SYMBOL("CLIPPED-LEFT-EDGE",AB_package);
    string_constant_1 = STATIC_STRING("[value arg]");
    Qargument = STATIC_SYMBOL("ARGUMENT",AB_package);
    Qclipped_top_edge = STATIC_SYMBOL("CLIPPED-TOP-EDGE",AB_package);
    Qclipped_right_edge = STATIC_SYMBOL("CLIPPED-RIGHT-EDGE",AB_package);
    Qclipped_bottom_edge = STATIC_SYMBOL("CLIPPED-BOTTOM-EDGE",AB_package);
    Qcolor_value = STATIC_SYMBOL("COLOR-VALUE",AB_package);
    Qstipple = STATIC_SYMBOL("STIPPLE",AB_package);
    string_constant_2 = STATIC_STRING("[object arg]");
    Qprinter = STATIC_SYMBOL("PRINTER",AB_package);
    list_constant = STATIC_CONS(Qnil,Qnil);
    string_constant_3 = 
	    STATIC_STRING("resumable icp synch error: ~S expected, ~S found");
    SET_SYMBOL_FUNCTION(Qstipple_rectangle_in_current_scratchpad_raster,
	    STATIC_FUNCTION(stipple_rectangle_in_current_scratchpad_raster,
	    NIL,FALSE,6,6));
    string_constant_4 = STATIC_STRING("[msg funct]");
    Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("HANDLE-ICP-STIPPLE-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    Qresumable_icp_list_end = STATIC_SYMBOL("RESUMABLE-ICP-LIST-END",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster,
	    STATIC_FUNCTION(handle_icp_stipple_rectangle_in_current_scratchpad_raster,
	    NIL,FALSE,0,0));
    add_icp_message_handler(Qhandle_icp_stipple_rectangle_in_current_scratchpad_raster,
	    FIX((SI_Long)365L));
    Qhandler_for_printing_paint_solid_rectangle_in_current_scratchpad_raster 
	    = 
	    STATIC_SYMBOL("HANDLER-FOR-PRINTING-PAINT-SOLID-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    temp = Icp_printing_message_handler_array;
    set_aref1(temp,FIX((SI_Long)32L),
	    Qhandler_for_printing_paint_solid_rectangle_in_current_scratchpad_raster);
    Qpaint_solid_rectangle_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("PAINT-SOLID-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpaint_solid_rectangle_in_current_scratchpad_raster,
	    STATIC_FUNCTION(paint_solid_rectangle_in_current_scratchpad_raster,
	    NIL,FALSE,5,5));
    Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("HANDLE-ICP-PAINT-SOLID-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster,
	    STATIC_FUNCTION(handle_icp_paint_solid_rectangle_in_current_scratchpad_raster,
	    NIL,FALSE,0,0));
    add_icp_message_handler(Qhandle_icp_paint_solid_rectangle_in_current_scratchpad_raster,
	    FIX((SI_Long)32L));
    Qhandler_for_printing_paint_clearing_rectangle_in_current_scratchpad_raster 
	    = 
	    STATIC_SYMBOL("HANDLER-FOR-PRINTING-PAINT-CLEARING-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    temp = Icp_printing_message_handler_array;
    set_aref1(temp,FIX((SI_Long)193L),
	    Qhandler_for_printing_paint_clearing_rectangle_in_current_scratchpad_raster);
    Qpaint_clearing_rectangle_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("PAINT-CLEARING-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qpaint_clearing_rectangle_in_current_scratchpad_raster,
	    STATIC_FUNCTION(paint_clearing_rectangle_in_current_scratchpad_raster,
	    NIL,FALSE,5,5));
    Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("HANDLE-ICP-PAINT-CLEARING-RECTANGLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster,
	    STATIC_FUNCTION(handle_icp_paint_clearing_rectangle_in_current_scratchpad_raster,
	    NIL,FALSE,0,0));
    add_icp_message_handler(Qhandle_icp_paint_clearing_rectangle_in_current_scratchpad_raster,
	    FIX((SI_Long)193L));
    Qhandler_for_printing_paint_point_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("HANDLER-FOR-PRINTING-PAINT-POINT-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    temp = Icp_printing_message_handler_array;
    set_aref1(temp,FIX((SI_Long)37L),
	    Qhandler_for_printing_paint_point_in_current_scratchpad_raster);
    Qpaint_point_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("PAINT-POINT-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    Qx = STATIC_SYMBOL("X",AB_package);
    Qy = STATIC_SYMBOL("Y",AB_package);
    SET_SYMBOL_FUNCTION(Qpaint_point_in_current_scratchpad_raster,
	    STATIC_FUNCTION(paint_point_in_current_scratchpad_raster,NIL,
	    FALSE,3,3));
    Qhandle_icp_paint_point_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("HANDLE-ICP-PAINT-POINT-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qhandle_icp_paint_point_in_current_scratchpad_raster,
	    STATIC_FUNCTION(handle_icp_paint_point_in_current_scratchpad_raster,
	    NIL,FALSE,0,0));
    add_icp_message_handler(Qhandle_icp_paint_point_in_current_scratchpad_raster,
	    FIX((SI_Long)37L));
    Qhandler_for_printing_paint_filled_triangle_in_current_scratchpad_raster 
	    = 
	    STATIC_SYMBOL("HANDLER-FOR-PRINTING-PAINT-FILLED-TRIANGLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    temp = Icp_printing_message_handler_array;
    set_aref1(temp,FIX((SI_Long)35L),
	    Qhandler_for_printing_paint_filled_triangle_in_current_scratchpad_raster);
    Qpaint_filled_triangle_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("PAINT-FILLED-TRIANGLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    Qx1 = STATIC_SYMBOL("X1",AB_package);
    Qy1 = STATIC_SYMBOL("Y1",AB_package);
    Qx2 = STATIC_SYMBOL("X2",AB_package);
    Qy2 = STATIC_SYMBOL("Y2",AB_package);
    Qx3 = STATIC_SYMBOL("X3",AB_package);
    Qy3 = STATIC_SYMBOL("Y3",AB_package);
    SET_SYMBOL_FUNCTION(Qpaint_filled_triangle_in_current_scratchpad_raster,
	    STATIC_FUNCTION(paint_filled_triangle_in_current_scratchpad_raster,
	    NIL,FALSE,7,7));
    Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("HANDLE-ICP-PAINT-FILLED-TRIANGLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster,
	    STATIC_FUNCTION(handle_icp_paint_filled_triangle_in_current_scratchpad_raster,
	    NIL,FALSE,0,0));
    add_icp_message_handler(Qhandle_icp_paint_filled_triangle_in_current_scratchpad_raster,
	    FIX((SI_Long)35L));
    Qthe_polygon_data_buffer = STATIC_SYMBOL("THE-POLYGON-DATA-BUFFER",
	    AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qthe_polygon_data_buffer,
	    The_polygon_data_buffer);
    Qwindows2 = STATIC_SYMBOL("WINDOWS2",AB_package);
    Kfuncall = STATIC_SYMBOL("FUNCALL",Pkeyword);
    Qobtain_simple_gensym_string = 
	    STATIC_SYMBOL("OBTAIN-SIMPLE-GENSYM-STRING",AB_package);
    SET_SYMBOL_FUNCTION(Qobtain_simple_gensym_string,
	    STATIC_FUNCTION(obtain_simple_gensym_string,NIL,FALSE,1,1));
    list_constant_2 = STATIC_LIST((SI_Long)3L,Kfuncall,
	    Qobtain_simple_gensym_string,FIX((SI_Long)2000L));
    record_system_variable(Qthe_polygon_data_buffer,Qwindows2,
	    list_constant_2,Qnil,Qnil,Qnil,Qnil);
    Qab_gensym = STATIC_SYMBOL("GENSYM",AB_package);
    Qhandler_for_printing_paint_filled_polygon_in_current_scratchpad_raster 
	    = 
	    STATIC_SYMBOL("HANDLER-FOR-PRINTING-PAINT-FILLED-POLYGON-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    temp = Icp_printing_message_handler_array;
    set_aref1(temp,FIX((SI_Long)58L),
	    Qhandler_for_printing_paint_filled_polygon_in_current_scratchpad_raster);
    Qpaint_filled_polygon_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("PAINT-FILLED-POLYGON-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    Qunsigned_polygon_point_list = 
	    STATIC_SYMBOL("UNSIGNED-POLYGON-POINT-LIST",AB_package);
    SET_SYMBOL_FUNCTION(Qpaint_filled_polygon_in_current_scratchpad_raster,
	    STATIC_FUNCTION(paint_filled_polygon_in_current_scratchpad_raster,
	    NIL,FALSE,2,2));
    Qlist_of_unsigned_integers = STATIC_SYMBOL("LIST-OF-UNSIGNED-INTEGERS",
	    AB_package);
    string_constant_5 = STATIC_STRING("[value]");
    Qvalue = STATIC_SYMBOL("VALUE",AB_package);
    Qhandle_icp_paint_filled_polygon_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("HANDLE-ICP-PAINT-FILLED-POLYGON-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qhandle_icp_paint_filled_polygon_in_current_scratchpad_raster,
	    STATIC_FUNCTION(handle_icp_paint_filled_polygon_in_current_scratchpad_raster,
	    NIL,FALSE,0,0));
    add_icp_message_handler(Qhandle_icp_paint_filled_polygon_in_current_scratchpad_raster,
	    FIX((SI_Long)58L));
    Qhandler_for_printing_paint_line_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("HANDLER-FOR-PRINTING-PAINT-LINE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    temp = Icp_printing_message_handler_array;
    set_aref1(temp,FIX((SI_Long)33L),
	    Qhandler_for_printing_paint_line_in_current_scratchpad_raster);
    Qpaint_line_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("PAINT-LINE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    Qpaint_last_point_qm = STATIC_SYMBOL("PAINT-LAST-POINT\?",AB_package);
    SET_SYMBOL_FUNCTION(Qpaint_line_in_current_scratchpad_raster,
	    STATIC_FUNCTION(paint_line_in_current_scratchpad_raster,NIL,
	    FALSE,6,6));
    Qhandle_icp_paint_line_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("HANDLE-ICP-PAINT-LINE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qhandle_icp_paint_line_in_current_scratchpad_raster,
	    STATIC_FUNCTION(handle_icp_paint_line_in_current_scratchpad_raster,
	    NIL,FALSE,0,0));
    add_icp_message_handler(Qhandle_icp_paint_line_in_current_scratchpad_raster,
	    FIX((SI_Long)33L));
    Qhandler_for_printing_paint_wide_line_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("HANDLER-FOR-PRINTING-PAINT-WIDE-LINE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    temp = Icp_printing_message_handler_array;
    set_aref1(temp,FIX((SI_Long)36L),
	    Qhandler_for_printing_paint_wide_line_in_current_scratchpad_raster);
    Qpaint_wide_line_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("PAINT-WIDE-LINE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    Qline_width = STATIC_SYMBOL("LINE-WIDTH",AB_package);
    SET_SYMBOL_FUNCTION(Qpaint_wide_line_in_current_scratchpad_raster,
	    STATIC_FUNCTION(paint_wide_line_in_current_scratchpad_raster,
	    NIL,FALSE,7,7));
    Qhandle_icp_paint_wide_line_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("HANDLE-ICP-PAINT-WIDE-LINE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster,
	    STATIC_FUNCTION(handle_icp_paint_wide_line_in_current_scratchpad_raster,
	    NIL,FALSE,0,0));
    add_icp_message_handler(Qhandle_icp_paint_wide_line_in_current_scratchpad_raster,
	    FIX((SI_Long)36L));
    float_constant = STATIC_FLOAT(2.0);
    float_constant_1 = STATIC_FLOAT(0.0);
    float_constant_2 = STATIC_FLOAT(2.44140625E-4);
    float_constant_3 = STATIC_FLOAT(3666.9298888372687);
    Qhandler_for_printing_paint_arc_or_circle_in_current_scratchpad_raster 
	    = 
	    STATIC_SYMBOL("HANDLER-FOR-PRINTING-PAINT-ARC-OR-CIRCLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    temp = Icp_printing_message_handler_array;
    set_aref1(temp,FIX((SI_Long)34L),
	    Qhandler_for_printing_paint_arc_or_circle_in_current_scratchpad_raster);
    Qpaint_arc_or_circle_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("PAINT-ARC-OR-CIRCLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    Qx_scale = STATIC_SYMBOL("X-SCALE",AB_package);
    Qy_scale = STATIC_SYMBOL("Y-SCALE",AB_package);
    Qcircle_qm = STATIC_SYMBOL("CIRCLE\?",AB_package);
    Qfilled_qm = STATIC_SYMBOL("FILLED\?",AB_package);
    SET_SYMBOL_FUNCTION(Qpaint_arc_or_circle_in_current_scratchpad_raster,
	    STATIC_FUNCTION(paint_arc_or_circle_in_current_scratchpad_raster,
	    NIL,FALSE,11,11));
    Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster = 
	    STATIC_SYMBOL("HANDLE-ICP-PAINT-ARC-OR-CIRCLE-IN-CURRENT-SCRATCHPAD-RASTER",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster,
	    STATIC_FUNCTION(handle_icp_paint_arc_or_circle_in_current_scratchpad_raster,
	    NIL,FALSE,0,0));
    add_icp_message_handler(Qhandle_icp_paint_arc_or_circle_in_current_scratchpad_raster,
	    FIX((SI_Long)34L));
    float_constant_4 = STATIC_FLOAT(0.5);
    if (Available_tiling_patterns == UNBOUND)
	Available_tiling_patterns = Qnil;
    list_constant_3 = STATIC_CONS(FIX((SI_Long)0L),Qnil);
    list_constant_4 = STATIC_LIST_STAR((SI_Long)3L,FIX((SI_Long)0L),
	    FIX((SI_Long)0L),list_constant_3);
    list_constant_5 = STATIC_CONS(FIX((SI_Long)0L),list_constant_4);
    list_constant_6 = STATIC_CONS(FIX((SI_Long)1L),list_constant_5);
    list_constant_7 = STATIC_CONS(FIX((SI_Long)0L),list_constant_6);
    list_constant_8 = STATIC_LIST_STAR((SI_Long)5L,FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    list_constant_7);
    list_constant_12 = STATIC_LIST_STAR((SI_Long)23L,FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)1L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)1L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)1L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    list_constant_8);
    list_constant_13 = STATIC_LIST_STAR((SI_Long)28L,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),list_constant_6);
    list_constant_14 = STATIC_LIST_STAR((SI_Long)27L,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)1L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),list_constant_7);
    list_constant_9 = STATIC_CONS(FIX((SI_Long)0L),list_constant_8);
    list_constant_15 = STATIC_LIST_STAR((SI_Long)22L,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),list_constant_9);
    list_constant_16 = STATIC_LIST_STAR((SI_Long)22L,FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)1L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)1L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),list_constant_9);
    list_constant_17 = STATIC_LIST_STAR((SI_Long)29L,FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    list_constant_5);
    list_constant_10 = STATIC_CONS(FIX((SI_Long)1L),Qnil);
    list_constant_11 = STATIC_LIST_STAR((SI_Long)12L,FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)1L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),list_constant_10);
    list_constant_18 = STATIC_LIST_STAR((SI_Long)21L,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)1L),
	    FIX((SI_Long)1L),list_constant_11);
    list_constant_19 = STATIC_LIST_STAR((SI_Long)32L,FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    list_constant_3);
    list_constant_20 = STATIC_LIST_STAR((SI_Long)32L,FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)1L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    list_constant_10);
    list_constant_21 = STATIC_LIST_STAR((SI_Long)30L,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),list_constant_4);
    list_constant_22 = STATIC_LIST_STAR((SI_Long)21L,FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)1L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)0L),FIX((SI_Long)0L),
	    FIX((SI_Long)0L),FIX((SI_Long)1L),FIX((SI_Long)1L),
	    FIX((SI_Long)0L),list_constant_11);
    list_constant_23 = STATIC_LIST((SI_Long)16L,list_constant_12,
	    list_constant_13,list_constant_14,list_constant_15,
	    list_constant_16,list_constant_17,list_constant_17,
	    list_constant_17,list_constant_18,list_constant_19,
	    list_constant_20,list_constant_21,list_constant_22,
	    list_constant_17,list_constant_17,list_constant_17);
    list_constant_24 = STATIC_LIST((SI_Long)2L,Qab_gensym,list_constant_23);
    temp = CONS(list_constant_24,Available_tiling_patterns);
    Available_tiling_patterns = temp;
    Qwhite = STATIC_SYMBOL("WHITE",AB_package);
    Tiling_pattern_foreground_color = Qwhite;
    Qgray = STATIC_SYMBOL("GRAY",AB_package);
    Tiling_pattern_background_color = Qgray;
    G2_DEFSTRUCT_STRUCTURE_NAME_package = 
	    STATIC_PACKAGE("G2-DEFSTRUCT-STRUCTURE-NAME");
    Qg2_defstruct_structure_name_tiling_pattern_g2_struct = 
	    STATIC_SYMBOL("TILING-PATTERN-G2-STRUCT",
	    G2_DEFSTRUCT_STRUCTURE_NAME_package);
    Qtiling_pattern = STATIC_SYMBOL("TILING-PATTERN",AB_package);
    Qab_name_of_unique_structure_type = 
	    STATIC_SYMBOL("AB-NAME-OF-UNIQUE-STRUCTURE-TYPE",AB_package);
    mutate_global_property(Qg2_defstruct_structure_name_tiling_pattern_g2_struct,
	    Qtiling_pattern,Qab_name_of_unique_structure_type);
    Qunique_structure_type_of_ab_name_qm = 
	    STATIC_SYMBOL("UNIQUE-STRUCTURE-TYPE-OF-AB-NAME\?",AB_package);
    mutate_global_property(Qtiling_pattern,
	    Qg2_defstruct_structure_name_tiling_pattern_g2_struct,
	    Qunique_structure_type_of_ab_name_qm);
    if (The_type_description_of_tiling_pattern == UNBOUND)
	The_type_description_of_tiling_pattern = Nil;
    string_constant_8 = 
	    STATIC_STRING("43Dy8l83-ny1n83-ny8m8k1l8m0000001l1n8n832Ry1p830Ty8349y8346y8347y8348ykrk0k0");
    temp_1 = The_type_description_of_tiling_pattern;
    The_type_description_of_tiling_pattern = 
	    load_and_initialize_type_description(temp_1,
	    regenerate_optimized_constant(string_constant_8));
    Qtype_description_of_unique_type_name_of_gensym_structure = 
	    STATIC_SYMBOL("TYPE-DESCRIPTION-OF-UNIQUE-TYPE-NAME-OF-GENSYM-STRUCTURE",
	    AB_package);
    mutate_global_property(Qg2_defstruct_structure_name_tiling_pattern_g2_struct,
	    The_type_description_of_tiling_pattern,
	    Qtype_description_of_unique_type_name_of_gensym_structure);
    Qtype_description_of_type = STATIC_SYMBOL("TYPE-DESCRIPTION-OF-TYPE",
	    AB_package);
    mutate_global_property(Qtiling_pattern,
	    The_type_description_of_tiling_pattern,Qtype_description_of_type);
    Qoutstanding_tiling_pattern_count = 
	    STATIC_SYMBOL("OUTSTANDING-TILING-PATTERN-COUNT",AB_package);
    Qtiling_pattern_structure_memory_usage = 
	    STATIC_SYMBOL("TILING-PATTERN-STRUCTURE-MEMORY-USAGE",AB_package);
    string_constant_9 = STATIC_STRING("1q83-ny8o837Sy09k9l");
    clear_optimized_constants();
    push_optimized_constant(Qoutstanding_tiling_pattern_count);
    push_optimized_constant(Qtiling_pattern_structure_memory_usage);
    update_object_pool_meters_list(regenerate_optimized_constant(string_constant_9));
    Qchain_of_available_tiling_patterns = 
	    STATIC_SYMBOL("CHAIN-OF-AVAILABLE-TILING-PATTERNS",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qchain_of_available_tiling_patterns,
	    Chain_of_available_tiling_patterns);
    Qutilities2 = STATIC_SYMBOL("UTILITIES2",AB_package);
    record_system_variable(Qchain_of_available_tiling_patterns,Qutilities2,
	    Nil,Qnil,Qt,Qnil,Qnil);
    Qtiling_pattern_count = STATIC_SYMBOL("TILING-PATTERN-COUNT",AB_package);
    SET_SYMBOL_VALUE_LOCATION(Qtiling_pattern_count,Tiling_pattern_count);
    record_system_variable(Qtiling_pattern_count,Qutilities2,
	    FIX((SI_Long)0L),Qnil,Qt,Qnil,Qnil);
    SET_SYMBOL_FUNCTION(Qtiling_pattern_structure_memory_usage,
	    STATIC_FUNCTION(tiling_pattern_structure_memory_usage,NIL,
	    FALSE,0,0));
    SET_SYMBOL_FUNCTION(Qoutstanding_tiling_pattern_count,
	    STATIC_FUNCTION(outstanding_tiling_pattern_count,NIL,FALSE,0,0));
    Qreclaim_structure = STATIC_SYMBOL("RECLAIM-STRUCTURE",AB_package);
    reclaim_structure_for_tiling_pattern_1 = 
	    STATIC_FUNCTION(reclaim_structure_for_tiling_pattern,NIL,FALSE,
	    1,1);
    record_direct_structure_method(Qreclaim_structure,Qtiling_pattern,
	    reclaim_structure_for_tiling_pattern_1);
    Qstandard_icp_object_index_space = 
	    STATIC_SYMBOL("STANDARD-ICP-OBJECT-INDEX-SPACE",AB_package);
    Qestablish_new_object_index_for_tiling_pattern = 
	    STATIC_SYMBOL("ESTABLISH-NEW-OBJECT-INDEX-FOR-TILING-PATTERN",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qestablish_new_object_index_for_tiling_pattern,
	    STATIC_FUNCTION(establish_new_object_index_for_tiling_pattern,
	    NIL,TRUE,2,3));
    Qmake_corresponding_icp_tiling_pattern = 
	    STATIC_SYMBOL("MAKE-CORRESPONDING-ICP-TILING-PATTERN",AB_package);
    SET_SYMBOL_FUNCTION(Qmake_corresponding_icp_tiling_pattern,
	    STATIC_FUNCTION(make_corresponding_icp_tiling_pattern,NIL,
	    FALSE,1,1));
    Qset_access_form_for_tiling_pattern = 
	    STATIC_SYMBOL("SET-ACCESS-FORM-FOR-TILING-PATTERN",AB_package);
    SET_SYMBOL_FUNCTION(Qset_access_form_for_tiling_pattern,
	    STATIC_FUNCTION(set_access_form_for_tiling_pattern,NIL,FALSE,2,2));
    Qcorresponding_icp_object_map_for_tiling_pattern = 
	    STATIC_SYMBOL("CORRESPONDING-ICP-OBJECT-MAP-FOR-TILING-PATTERN",
	    AB_package);
    list_constant_25 = STATIC_LIST((SI_Long)2L,
	    Qcorresponding_icp_object_map_for_tiling_pattern,Qtiling_pattern);
    initialize_icp_object_type_compile(Qtiling_pattern,
	    Qstandard_icp_object_index_space,list_constant_25);
    Qreclaim_icp_port_entry_for_tiling_pattern = 
	    STATIC_SYMBOL("RECLAIM-ICP-PORT-ENTRY-FOR-TILING-PATTERN",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qreclaim_icp_port_entry_for_tiling_pattern,
	    STATIC_FUNCTION(reclaim_icp_port_entry_for_tiling_pattern,NIL,
	    FALSE,2,2));
    initialize_icp_object_type(Qtiling_pattern,Qnil,Qnil,
	    Qreclaim_icp_port_entry_for_tiling_pattern);
    Qsend_icp_make_tiling_pattern = 
	    STATIC_SYMBOL("SEND-ICP-MAKE-TILING-PATTERN",AB_package);
    Qmake_tiling_pattern = STATIC_SYMBOL("MAKE-TILING-PATTERN",AB_package);
    Qcorresponding_icp_object_index = 
	    STATIC_SYMBOL("CORRESPONDING-ICP-OBJECT-INDEX",AB_package);
    Qgensym_window = STATIC_SYMBOL("GENSYM-WINDOW",AB_package);
    Qtiling_pattern_rows_with_color_values = 
	    STATIC_SYMBOL("TILING-PATTERN-ROWS-WITH-COLOR-VALUES",AB_package);
    SET_SYMBOL_FUNCTION(Qsend_icp_make_tiling_pattern,
	    STATIC_FUNCTION(send_icp_make_tiling_pattern,NIL,FALSE,3,3));
    Qhandle_icp_make_tiling_pattern = 
	    STATIC_SYMBOL("HANDLE-ICP-MAKE-TILING-PATTERN",AB_package);
    SET_SYMBOL_FUNCTION(Qhandle_icp_make_tiling_pattern,
	    STATIC_FUNCTION(handle_icp_make_tiling_pattern,NIL,FALSE,0,0));
    add_icp_message_handler(Qhandle_icp_make_tiling_pattern,FIX((SI_Long)83L));
    Qread_icp_tiling_pattern_rows_with_color_values = 
	    STATIC_SYMBOL("READ-ICP-TILING-PATTERN-ROWS-WITH-COLOR-VALUES",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qread_icp_tiling_pattern_rows_with_color_values,
	    STATIC_FUNCTION(read_icp_tiling_pattern_rows_with_color_values,
	    NIL,FALSE,0,0));
    Qwrite_icp_tiling_pattern_rows_with_color_values = 
	    STATIC_SYMBOL("WRITE-ICP-TILING-PATTERN-ROWS-WITH-COLOR-VALUES",
	    AB_package);
    SET_SYMBOL_FUNCTION(Qwrite_icp_tiling_pattern_rows_with_color_values,
	    STATIC_FUNCTION(write_icp_tiling_pattern_rows_with_color_values,
	    NIL,FALSE,1,1));
    Qx11_window = STATIC_SYMBOL("X11-WINDOW",AB_package);
    Qblack = STATIC_SYMBOL("BLACK",AB_package);
    SET_SYMBOL_FUNCTION(Qmake_tiling_pattern,
	    STATIC_FUNCTION(make_tiling_pattern,NIL,FALSE,2,2));
    Qbackground = STATIC_SYMBOL("BACKGROUND",AB_package);
    string_constant_6 = 
	    STATIC_STRING("~s is not a color or background pattern file.");
    string_constant_7 = 
	    STATIC_STRING("Problem reading background pattern ~s: ~a");
    Qtelewindows = STATIC_SYMBOL("TELEWINDOWS",AB_package);
    Qdark_gray = STATIC_SYMBOL("DARK-GRAY",AB_package);
    Qlight_gray = STATIC_SYMBOL("LIGHT-GRAY",AB_package);
}
