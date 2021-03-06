package com.gensym.com.beans.excel12;

import com.gensym.com.ActiveXModes;
import com.gensym.com.ActiveXProxy;
import com.gensym.com.ActiveXException;
import com.gensym.com.ActiveXCastException;
import com.gensym.com.Guid;
import com.gensym.com.ActiveXDefaultComponentImpl;
import com.gensym.com.ActiveXDispatchable;
import com.gensym.com.ActiveXDispatchableImpl;
import com.gensym.com.NativeMethodBroker;
import com.gensym.com.Variant;

import com.gensym.com.Hwnd;

import java.awt.Color;

import java.util.Date;
import java.util.Vector;


public interface XlIMEMode
{

  public static final Guid classID =
    new Guid(0x0, 0x0, 0x0,
             (short) 0x0, (short) 0x0, (short) 0x0, (short) 0x0,
             (short) 0x0, (short) 0x0, (short) 0x0, (short) 0x0);

    // Library name is: Excel
    // DocString is: Microsoft Excel 8.0 Object Library
    // Help file is: C:\Program Files\Microsoft Office\Office\VBAXL8.HLP
    // There are 526 TypeInfos in the library

/* Type info #112
    An enumeration type.
    Type info name is: XlIMEMode
    Help file is: C:\Program Files\Microsoft Office\Office\VBAXL8.HLP
 */

  public static final int XL_IME_MODE_NO_CONTROL = 0;

  public static final int XL_IME_MODE_ON = 1;

  public static final int XL_IME_MODE_OFF = 2;

  public static final int XL_IME_MODE_DISABLE = 3;

  public static final int XL_IME_MODE_HIRAGANA = 4;

  public static final int XL_IME_MODE_KATAKANA = 5;

  public static final int XL_IME_MODE_KATAKANA_HALF = 6;

  public static final int XL_IME_MODE_ALPHA_FULL = 7;

  public static final int XL_IME_MODE_ALPHA = 8;

  public static final int XL_IME_MODE_HANGUL_FULL = 9;

  public static final int XL_IME_MODE_HANGUL = 10;


}

