/********************* Revision Control Information **********************************
*                                                                                    *
*     $Header: /media/gensym/home/versata1/cvs_repo_copyDec06/ab-repos/fnt/c/fontmath.h,v 1.1 1995-11-13 22:31:40 mes Exp $                                                                       *
*                                                                                    *
*     $Log: not supported by cvs2svn $
*     Revision 1.1  1995/10/03 00:35:47  jra
*     Adding ext files from 4.0 Rev. 1 as initial commit for AB.
*
*     Revision 1.1  1993/05/19 22:02:26  mhd
*     Added Bitstream fontrip (Font Raster Image Processor) c & h files.  Not
*     all are compiles -- some are demos, or test modules.
*
 * Revision 1.1  1993/05/04  20:13:32  mhd
 * The flat-directory version of the Bitstream 4-in-1 software.
 *
 * Revision 1.1.1.1  1993/04/15  20:14:36  mhd
 * Initial checkin of Version 2.1 of 4-in-1 from Bitstream.  -jra & mpc
 *
 * Revision 6.44  93/03/15  13:10:03  roberte
 * Release
 * 
 * Revision 6.4  93/03/02  16:50:49  mark
 * added prototypes for all fixed point functions
 * 
 * Revision 6.3  92/11/19  15:45:57  roberte
 * Release
 * 
 * Revision 6.1  91/08/14  16:45:14  mark
 * Release
 * 
 * Revision 5.1  91/08/07  12:26:26  mark
 * Release
 * 
 * Revision 4.3  91/08/07  11:50:58  mark
 * remove rcsstatus string
 * 
 * Revision 4.2  91/08/07  11:41:57  mark
 * added RCS control strings
 * 
*************************************************************************************/

/*
	File:		FontMath.h

	Contains:	xxx put contents here xxx

	Written by:	xxx put writers here xxx

	Copyright:	(c) 1990 by Apple Computer, Inc., all rights reserved.

	Change History (most recent first):

		 <4>	11/27/90	MR		make pascal declaration a macro, conditionalize traps -vs-
									externs for Fix/Frac math routines. [ph]
		 <3>	 11/5/90	MR		Move [U]SHORTMUL into FSCdefs.h Rename FixMulDiv to LongMulDiv.
									[rb]
		 <2>	10/20/90	MR		Add some new math routines (stolen from skia). [rj]
		 <1>	 4/11/90	dba		first checked in

	To Do:
*/

#define HIBITSET			0x80000000
#define POSINFINITY			0x7FFFFFFF
#define NEGINFINITY			0x80000000
#define HIWORDMASK			0xffff0000
#define LOWORDMASK			0x0000ffff
#define FIXONEHALF			0x00008000
#define ONESHORTFRAC		(1 << 14)

#define FIXROUND( x )		(int16)(((x) + FIXONEHALF) >> 16)
#define ROUNDFIXED( x )		(((x) + FIXONEHALF) & HIWORDMASK)
#define DOT6TOFIX(n)		((n) << 10)
#define HIWORD(n)			((uint16)((uint32)(n) >> 16))
#define LOWORD(n)			((uint16)(n))
#define LOWSIXBITS			63

typedef short ShortFrac;			/* 2.14 */

#ifdef NOT_ON_THE_MAC
/*  PASCAL Fixed FixRatio(short numer,short denom);
/*  PASCAL Fixed FixMul(Fixed a,Fixed b);
/*  PASCAL Fixed FixDiv(Fixed x,Fixed y);
/*  PASCAL Fract FracMul(Fract x,Fract y);
/*  PASCAL Fract FracDiv(Fract x,Fract y);
/*  PASCAL Fract FracSqrt(Fract x);         */
    PASCAL Fixed FixRatio();
    PASCAL Fixed FixMul PROTO((Fixed x, Fixed y));
    PASCAL Fixed FixDiv PROTO((Fixed x, Fixed y));
    PASCAL Fract FracMul PROTO((Fract x, Fract y));
    PASCAL Fract FracDiv PROTO((Fract x, Fract y));
    PASCAL Fract FracSqrt PROTO((Fract x));
#else
#ifndef __TOOLUTILS__
	PASCAL Fixed FixRatio(short numer,short denom) = 0xA869;
	PASCAL Fixed FixMul(Fixed a,Fixed b) = 0xA868;
#endif
#ifndef __FIXMATH__
	PASCAL Fixed FixDiv(Fixed x,Fixed y) = 0xA84D;
	PASCAL Fract FracMul(Fract x,Fract y) = 0xA84A;
	PASCAL Fract FracDiv(Fract x,Fract y) = 0xA84B;
	PASCAL Fract FracSqrt(Fract x) = 0xA849;
#endif
#endif

/* long LongMulDiv(long a, long b, long c);		/* (a*b)/c */
/* long ShortFracMul(long a, ShortFrac b);
/* ShortFrac ShortFracDot(ShortFrac a, ShortFrac b);
/* int32 ShortMulDiv(int32 a, int16 b, int16 c);	/* (a*b)/c */
/* F26Dot6 Mul26Dot6(F26Dot6 a, F26Dot6 b);
/* F26Dot6 Div26Dot6(F26Dot6 a, F26Dot6 b);
*/
long LongMulDiv PROTO((int32 a, int32 b, int32 c ));              /* (a*b)/c */
long ShortFracMul PROTO((long a, ShortFrac b));
ShortFrac ShortFracDot PROTO((ShortFrac a, ShortFrac b));
int32 ShortMulDiv PROTO((int32 a, int16 b, int16 c));            /* (a*b)/c */
F26Dot6 Mul26Dot6 PROTO((F26Dot6 a, F26Dot6 b));
F26Dot6 Div26Dot6 PROTO((F26Dot6 a, F26Dot6 b));

