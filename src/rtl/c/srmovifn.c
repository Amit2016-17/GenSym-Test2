/*
 * srmovifn.c -  Chestnut Run-Time Library entry for function SI_remove_if_n
 *
 * Copyright (c) 1990-1992 Chestnut Software, Inc.  All Rights Reserved.
 * Use of this Library is subject to the terms of a license from
 * Chestnut Software, Inc.  Please refer to the License for details.
 *
 */

#include "runtime.h"

extern Object Kcount;
extern Object Kend;
extern Object Kfrom_end;
extern Object Kkey;
extern Object Kstart;

#if SI_USE_PROTOTYPES

extern Object SI_obtain_rest_list(long rest_position, long arg_position, long nargs, va_list *ap);
extern Object remove_if(Object test, Object sequence, Object from_end, Object start, Object end, Object count, Object key);

#else

extern Object SI_obtain_rest_list();
extern Object remove_if();

#endif




/*VARARGS*/
Object SI_remove_if_n varargs_1(int, n)
{
    XDeclare_varargs;
    Object r1;
    Object r2;
    Object k1;
    Object k2;
    Object k3;
    Object k4;
    Object k5;
    BEGIN_ARGS(n);
        REQUIRED_ARGS_2(r1, r2);
        KEYWORD_ARGS_5(Kfrom_end, k1, Kstart, k2, Kend, k3, Kcount, k4, Kkey, k5);
    END_ARGS();
    return remove_if(r1, r2, k1, k2, k3, k4, k5);
}
