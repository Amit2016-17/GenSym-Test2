/* userfuns.c -- Function linking code for Lisp-to-C Translator
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
 */

#include "user.h"
#include "userfuns.h"

void initfuns()
{
    SET_SYMBOL_FUNCTION(Qcar,
	STATIC_FUNCTION(car,NIL,FALSE,1,1));
    SET_SYMBOL_FUNCTION(Qcdr,
	STATIC_FUNCTION(cdr,NIL,FALSE,1,1));
    SET_SYMBOL_FUNCTION(Qcharacter,
	STATIC_FUNCTION(character,NIL,FALSE,1,1));
    SET_SYMBOL_FUNCTION(Qcons,
	STATIC_FUNCTION(cons,NIL,FALSE,2,2));
    SET_SYMBOL_FUNCTION(Qconsp,
	STATIC_FUNCTION(consp,NIL,FALSE,1,1));
    SET_SYMBOL_FUNCTION(Qeq,
	STATIC_FUNCTION(eq,NIL,FALSE,2,2));
    SET_SYMBOL_FUNCTION(Qequal,
	STATIC_FUNCTION(equal,NIL,FALSE,2,2));
    SET_SYMBOL_FUNCTION(Qerror,
	STATIC_FUNCTION(errorn,NIL,TRUE,1,1));
    SET_SYMBOL_FUNCTION(Qgentemp,
	STATIC_FUNCTION(gentemp,NIL,FALSE,0,2));
    SET_SYMBOL_FUNCTION(Qget,
	STATIC_FUNCTION(get,NIL,FALSE,2,3));
    SET_SYMBOL_FUNCTION(Qintern,
	STATIC_FUNCTION(intern,NIL,FALSE,1,2));
    SET_SYMBOL_FUNCTION(Qfloat,
	STATIC_FUNCTION(lfloat,NIL,FALSE,1,2));
    SET_SYMBOL_FUNCTION(Qlist,
	STATIC_FUNCTION(list,NIL,TRUE,0,0));
    SET_SYMBOL_FUNCTION(Qmake_array,
	STATIC_FUNCTION(make_array,NIL,TRUE,1,1));
    SET_SYMBOL_FUNCTION(Qmember,
	STATIC_FUNCTION(member,NIL,TRUE,2,2));
    SET_SYMBOL_FUNCTION(Qnot,
	STATIC_FUNCTION(not,NIL,FALSE,1,1));
    SET_SYMBOL_FUNCTION(Qnull,
	STATIC_FUNCTION(null,NIL,FALSE,1,1));
    SET_SYMBOL_FUNCTION(Qnum_lt,
	STATIC_FUNCTION(num_ltn,NIL,TRUE,1,1));
    SET_SYMBOL_FUNCTION(Qsecond,
	STATIC_FUNCTION(second,NIL,FALSE,1,1));
    SET_SYMBOL_FUNCTION(Qstring,
	STATIC_FUNCTION(string,NIL,FALSE,1,1));
    SET_SYMBOL_FUNCTION(Qstring_eq,
	STATIC_FUNCTION(string_eq,NIL,TRUE,2,2));
    SET_SYMBOL_FUNCTION(Qstring_equal,
	STATIC_FUNCTION(string_equal,NIL,TRUE,2,2));
    SET_SYMBOL_FUNCTION(Qstringp,
	STATIC_FUNCTION(stringp,NIL,FALSE,1,1));
    SET_SYMBOL_FUNCTION(Qsymbolp,
	STATIC_FUNCTION(symbolp,NIL,FALSE,1,1));
    SET_SYMBOL_FUNCTION(Qvector,
	STATIC_FUNCTION(vector,NIL,TRUE,0,0));
}

void user_initfuns()
{
}
