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


public class GroupObjects extends com.gensym.com.ActiveXDispatchableImpl
{
  private static Guid classID =
    new Guid(0x20899, 0x0, 0x0,
             (short) 0xc0, (short) 0x0, (short) 0x0, (short) 0x0,
             (short) 0x0, (short) 0x0, (short) 0x0, (short) 0x46);

  public GroupObjects (ActiveXDispatchable axDispatch) throws ActiveXCastException
  {
       super(axDispatch);
       axProxy.checkCast(getDispatchPointer(), classID);
  }

  public static Guid getStaticClassID ()
  {
      return classID;
  }

  public Guid getClassID ()
  {
      return classID;
  }

    // Library name is: Excel
    // DocString is: Microsoft Excel 8.0 Object Library
    // Help file is: C:\Program Files\Microsoft Office\Office\VBAXL8.HLP
    // There are 526 TypeInfos in the library

/* Type info #419
    A set of methods and properties that are accessible through IDispatch::Invoke.
    Type info name is: GroupObjects
    Help file is: C:\Program Files\Microsoft Office\Office\VBAXL8.HLP
    Type Info contains 112 functions.
    Type Info contains zero properties.
 */

  public void QueryInterface (Variant param1, Variant param2)
    throws ActiveXException {
    // memid = 0x60000000

    Vector args = new Vector(2);
    args.addElement(param1);
    args.addElement(param2);
    axInvoke(0x60000000, AX_INVOKE, true, args);
  }

  public long AddRef ()
    throws ActiveXException {
    // memid = 0x60000001

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x60000001, AX_INVOKE, false, args);
    long result = vResult.getLongValue();
    return result;
  }

  public long Release ()
    throws ActiveXException {
    // memid = 0x60000002

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x60000002, AX_INVOKE, false, args);
    long result = vResult.getLongValue();
    return result;
  }

  public void GetTypeInfoCount (Variant param1)
    throws ActiveXException {
    // memid = 0x60010000

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0x60010000, AX_INVOKE, true, args);
  }

  public void GetTypeInfo (long param1, long param2, Variant param3)
    throws ActiveXException {
    // memid = 0x60010001

    Vector args = new Vector(3);
    args.addElement(new Variant(param1));
    args.addElement(new Variant(param2));
    args.addElement(param3);
    axInvoke(0x60010001, AX_INVOKE, true, args);
  }

  public void GetIDsOfNames (Variant param1, Variant param2, long param3, long param4, Variant param5)
    throws ActiveXException {
    // memid = 0x60010002

    Vector args = new Vector(5);
    args.addElement(param1);
    args.addElement(param2);
    args.addElement(new Variant(param3));
    args.addElement(new Variant(param4));
    args.addElement(param5);
    axInvoke(0x60010002, AX_INVOKE, true, args);
  }

  public void Invoke (int param1, Variant param2, long param3, int param4, Variant param5, Variant param6, Variant param7, Variant param8)
    throws ActiveXException {
    // memid = 0x60010003

    Vector args = new Vector(8);
    args.addElement(new Variant(param1));
    args.addElement(param2);
    args.addElement(new Variant(param3));
    args.addElement(new Variant(param4));
    args.addElement(param5);
    args.addElement(param6);
    args.addElement(param7);
    args.addElement(param8);
    axInvoke(0x60010003, AX_INVOKE, true, args);
  }

  public ExcelApplication getAxApplication ()
    throws ActiveXException {
    // memid = 0x94

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x94, AX_PROPERTYGET, false, args);
    ExcelApplication result = new ExcelApplication(vResult.getActiveXDispatchableValue());
    return result;
  }

    // Enumeration type = XlCreator
  public int getAxCreator ()
    throws ActiveXException {
    // memid = 0x95

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x95, AX_PROPERTYGET, false, args);
    int result = vResult.getIntValue();
    return result;
  }

  public ActiveXDispatchable getAxParent ()
    throws ActiveXException {
    // memid = 0x96

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x96, AX_PROPERTYGET, false, args);
    ActiveXDispatchable result = vResult.getActiveXDispatchableValue();
    return result;
  }

  public void _Dummy3 ()
    throws ActiveXException {
    // memid = 0x10003

    Vector args = new Vector(0);
    axInvoke(0x10003, AX_INVOKE, true, args);
  }

  public void BringToFront ()
    throws ActiveXException {
    // memid = 0x25a

    Vector args = new Vector(0);
    axInvoke(0x25a, AX_INVOKE, true, args);
  }

  public void Copy ()
    throws ActiveXException {
    // memid = 0x227

    Vector args = new Vector(0);
    axInvoke(0x227, AX_INVOKE, true, args);
  }

  public void CopyPicture (int param1, int param2)
    throws ActiveXException {
    // memid = 0xd5

    Vector args = new Vector(2);
    args.addElement(new Variant(param1));
    args.addElement(new Variant(param2));
    axInvoke(0xd5, AX_INVOKE, true, args);
  }

  public void Cut ()
    throws ActiveXException {
    // memid = 0x235

    Vector args = new Vector(0);
    axInvoke(0x235, AX_INVOKE, true, args);
  }

  public void Delete ()
    throws ActiveXException {
    // memid = 0x75

    Vector args = new Vector(0);
    axInvoke(0x75, AX_INVOKE, true, args);
  }

  public ActiveXDispatchable Duplicate ()
    throws ActiveXException {
    // memid = 0x40f

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x40f, AX_INVOKE, false, args);
    ActiveXDispatchable result = vResult.getActiveXDispatchableValue();
    return result;
  }

  public boolean getAxEnabled ()
    throws ActiveXException {
    // memid = 0x258

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x258, AX_PROPERTYGET, false, args);
    boolean result = vResult.getBooleanValue();
    return result;
  }

  public void setAxEnabled (boolean param1)
    throws ActiveXException {
    // memid = 0x258

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x258, AX_PROPERTYSET, true, args);
  }

  public double getAxHeight ()
    throws ActiveXException {
    // memid = 0x7b

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x7b, AX_PROPERTYGET, false, args);
    double result = vResult.getDoubleValue();
    return result;
  }

  public void setAxHeight (double param1)
    throws ActiveXException {
    // memid = 0x7b

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x7b, AX_PROPERTYSET, true, args);
  }

  public void _Dummy12 ()
    throws ActiveXException {
    // memid = 0x1000c

    Vector args = new Vector(0);
    axInvoke(0x1000c, AX_INVOKE, true, args);
  }

  public double getAxLeft ()
    throws ActiveXException {
    // memid = 0x7f

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x7f, AX_PROPERTYGET, false, args);
    double result = vResult.getDoubleValue();
    return result;
  }

  public void setAxLeft (double param1)
    throws ActiveXException {
    // memid = 0x7f

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x7f, AX_PROPERTYSET, true, args);
  }

  public boolean getAxLocked ()
    throws ActiveXException {
    // memid = 0x10d

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x10d, AX_PROPERTYGET, false, args);
    boolean result = vResult.getBooleanValue();
    return result;
  }

  public void setAxLocked (boolean param1)
    throws ActiveXException {
    // memid = 0x10d

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x10d, AX_PROPERTYSET, true, args);
  }

  public void _Dummy15 ()
    throws ActiveXException {
    // memid = 0x1000f

    Vector args = new Vector(0);
    axInvoke(0x1000f, AX_INVOKE, true, args);
  }

  public String getAxOnAction ()
    throws ActiveXException {
    // memid = 0x254

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x254, AX_PROPERTYGET, false, args);
    String result = vResult.getStringValue();
    return result;
  }

  public void setAxOnAction (String param1)
    throws ActiveXException {
    // memid = 0x254

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x254, AX_PROPERTYSET, true, args);
  }

  public Variant getAxPlacement ()
    throws ActiveXException {
    // memid = 0x269

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x269, AX_PROPERTYGET, false, args);
    return vResult;
  }

  public void setAxPlacement (Variant param1)
    throws ActiveXException {
    // memid = 0x269

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0x269, AX_PROPERTYSET, true, args);
  }

  public boolean getAxPrintObject ()
    throws ActiveXException {
    // memid = 0x26a

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x26a, AX_PROPERTYGET, false, args);
    boolean result = vResult.getBooleanValue();
    return result;
  }

  public void setAxPrintObject (boolean param1)
    throws ActiveXException {
    // memid = 0x26a

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x26a, AX_PROPERTYSET, true, args);
  }

  public void Select ()
    throws ActiveXException {
    // memid = 0xeb

    Vector args = new Vector(0);
    axInvoke(0xeb, AX_INVOKE, true, args);
  }

  public void Select (Variant param1)
    throws ActiveXException {
    // memid = 0xeb

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0xeb, AX_INVOKE, true, args);
  }

  public void SendToBack ()
    throws ActiveXException {
    // memid = 0x25d

    Vector args = new Vector(0);
    axInvoke(0x25d, AX_INVOKE, true, args);
  }

  public double getAxTop ()
    throws ActiveXException {
    // memid = 0x7e

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x7e, AX_PROPERTYGET, false, args);
    double result = vResult.getDoubleValue();
    return result;
  }

  public void setAxTop (double param1)
    throws ActiveXException {
    // memid = 0x7e

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x7e, AX_PROPERTYSET, true, args);
  }

  public void _Dummy22 ()
    throws ActiveXException {
    // memid = 0x10016

    Vector args = new Vector(0);
    axInvoke(0x10016, AX_INVOKE, true, args);
  }

  public boolean getAxVisible ()
    throws ActiveXException {
    // memid = 0x22e

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x22e, AX_PROPERTYGET, false, args);
    boolean result = vResult.getBooleanValue();
    return result;
  }

  public void setAxVisible (boolean param1)
    throws ActiveXException {
    // memid = 0x22e

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x22e, AX_PROPERTYSET, true, args);
  }

  public double getAxWidth ()
    throws ActiveXException {
    // memid = 0x7a

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x7a, AX_PROPERTYGET, false, args);
    double result = vResult.getDoubleValue();
    return result;
  }

  public void setAxWidth (double param1)
    throws ActiveXException {
    // memid = 0x7a

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x7a, AX_PROPERTYSET, true, args);
  }

  public int getAxZOrder ()
    throws ActiveXException {
    // memid = 0x26e

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x26e, AX_PROPERTYGET, false, args);
    int result = vResult.getIntValue();
    return result;
  }

  public ShapeRange getAxShapeRange ()
    throws ActiveXException {
    // memid = 0x5f8

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x5f8, AX_PROPERTYGET, false, args);
    ShapeRange result = new ShapeRange(vResult.getActiveXDispatchableValue());
    return result;
  }

  public void _Dummy27 ()
    throws ActiveXException {
    // memid = 0x1001b

    Vector args = new Vector(0);
    axInvoke(0x1001b, AX_INVOKE, true, args);
  }

  public void _Dummy28 ()
    throws ActiveXException {
    // memid = 0x1001c

    Vector args = new Vector(0);
    axInvoke(0x1001c, AX_INVOKE, true, args);
  }

  public boolean getAxAddIndent ()
    throws ActiveXException {
    // memid = 0x427

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x427, AX_PROPERTYGET, false, args);
    boolean result = vResult.getBooleanValue();
    return result;
  }

  public void setAxAddIndent (boolean param1)
    throws ActiveXException {
    // memid = 0x427

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x427, AX_PROPERTYSET, true, args);
  }

  public void _Dummy30 ()
    throws ActiveXException {
    // memid = 0x1001e

    Vector args = new Vector(0);
    axInvoke(0x1001e, AX_INVOKE, true, args);
  }

  public Variant getAxArrowHeadLength ()
    throws ActiveXException {
    // memid = 0x263

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x263, AX_PROPERTYGET, false, args);
    return vResult;
  }

  public void setAxArrowHeadLength (Variant param1)
    throws ActiveXException {
    // memid = 0x263

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0x263, AX_PROPERTYSET, true, args);
  }

  public Variant getAxArrowHeadStyle ()
    throws ActiveXException {
    // memid = 0x264

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x264, AX_PROPERTYGET, false, args);
    return vResult;
  }

  public void setAxArrowHeadStyle (Variant param1)
    throws ActiveXException {
    // memid = 0x264

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0x264, AX_PROPERTYSET, true, args);
  }

  public Variant getAxArrowHeadWidth ()
    throws ActiveXException {
    // memid = 0x265

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x265, AX_PROPERTYGET, false, args);
    return vResult;
  }

  public void setAxArrowHeadWidth (Variant param1)
    throws ActiveXException {
    // memid = 0x265

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0x265, AX_PROPERTYSET, true, args);
  }

  public boolean getAxAutoSize ()
    throws ActiveXException {
    // memid = 0x266

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x266, AX_PROPERTYGET, false, args);
    boolean result = vResult.getBooleanValue();
    return result;
  }

  public void setAxAutoSize (boolean param1)
    throws ActiveXException {
    // memid = 0x266

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x266, AX_PROPERTYSET, true, args);
  }

  public Border getAxBorder ()
    throws ActiveXException {
    // memid = 0x80

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x80, AX_PROPERTYGET, false, args);
    Border result = new Border(vResult.getActiveXDispatchableValue());
    return result;
  }

  public void _Dummy36 ()
    throws ActiveXException {
    // memid = 0x10024

    Vector args = new Vector(0);
    axInvoke(0x10024, AX_INVOKE, true, args);
  }

  public void _Dummy37 ()
    throws ActiveXException {
    // memid = 0x10025

    Vector args = new Vector(0);
    axInvoke(0x10025, AX_INVOKE, true, args);
  }

  public void _Dummy38 ()
    throws ActiveXException {
    // memid = 0x10026

    Vector args = new Vector(0);
    axInvoke(0x10026, AX_INVOKE, true, args);
  }

  public void CheckSpelling ()
    throws ActiveXException {
    // memid = 0x1f9

    Vector args = new Vector(0);
    axInvoke(0x1f9, AX_INVOKE, true, args);
  }

  public void CheckSpelling (Variant param1)
    throws ActiveXException {
    // memid = 0x1f9

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0x1f9, AX_INVOKE, true, args);
  }

  public void CheckSpelling (Variant param1, Variant param2)
    throws ActiveXException {
    // memid = 0x1f9

    Vector args = new Vector(2);
    args.addElement(param1);
    args.addElement(param2);
    axInvoke(0x1f9, AX_INVOKE, true, args);
  }

  public void CheckSpelling (Variant param1, Variant param2, Variant param3)
    throws ActiveXException {
    // memid = 0x1f9

    Vector args = new Vector(3);
    args.addElement(param1);
    args.addElement(param2);
    args.addElement(param3);
    axInvoke(0x1f9, AX_INVOKE, true, args);
  }

  public void CheckSpelling (Variant param1, Variant param2, Variant param3, Variant param4)
    throws ActiveXException {
    // memid = 0x1f9

    Vector args = new Vector(4);
    args.addElement(param1);
    args.addElement(param2);
    args.addElement(param3);
    args.addElement(param4);
    axInvoke(0x1f9, AX_INVOKE, true, args);
  }

  public void CheckSpelling (Variant param1, Variant param2, Variant param3, Variant param4, Variant param5)
    throws ActiveXException {
    // memid = 0x1f9

    Vector args = new Vector(5);
    args.addElement(param1);
    args.addElement(param2);
    args.addElement(param3);
    args.addElement(param4);
    args.addElement(param5);
    axInvoke(0x1f9, AX_INVOKE, true, args);
  }

  public void CheckSpelling (Variant param1, Variant param2, Variant param3, Variant param4, Variant param5, Variant param6)
    throws ActiveXException {
    // memid = 0x1f9

    Vector args = new Vector(6);
    args.addElement(param1);
    args.addElement(param2);
    args.addElement(param3);
    args.addElement(param4);
    args.addElement(param5);
    args.addElement(param6);
    axInvoke(0x1f9, AX_INVOKE, true, args);
  }

  public int getAx_Default ()
    throws ActiveXException {
    // memid = 0x0

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x0, AX_PROPERTYGET, false, args);
    int result = vResult.getIntValue();
    return result;
  }

  public void setAx_Default (int param1)
    throws ActiveXException {
    // memid = 0x0

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x0, AX_PROPERTYSET, true, args);
  }

  public void _Dummy41 ()
    throws ActiveXException {
    // memid = 0x10029

    Vector args = new Vector(0);
    axInvoke(0x10029, AX_INVOKE, true, args);
  }

  public void _Dummy42 ()
    throws ActiveXException {
    // memid = 0x1002a

    Vector args = new Vector(0);
    axInvoke(0x1002a, AX_INVOKE, true, args);
  }

  public void _Dummy43 ()
    throws ActiveXException {
    // memid = 0x1002b

    Vector args = new Vector(0);
    axInvoke(0x1002b, AX_INVOKE, true, args);
  }

  public void _Dummy44 ()
    throws ActiveXException {
    // memid = 0x1002c

    Vector args = new Vector(0);
    axInvoke(0x1002c, AX_INVOKE, true, args);
  }

  public void _Dummy45 ()
    throws ActiveXException {
    // memid = 0x1002d

    Vector args = new Vector(0);
    axInvoke(0x1002d, AX_INVOKE, true, args);
  }

  public Font getAxFont ()
    throws ActiveXException {
    // memid = 0x92

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x92, AX_PROPERTYGET, false, args);
    Font result = new Font(vResult.getActiveXDispatchableValue());
    return result;
  }

  public void _Dummy47 ()
    throws ActiveXException {
    // memid = 0x1002f

    Vector args = new Vector(0);
    axInvoke(0x1002f, AX_INVOKE, true, args);
  }

  public void _Dummy48 ()
    throws ActiveXException {
    // memid = 0x10030

    Vector args = new Vector(0);
    axInvoke(0x10030, AX_INVOKE, true, args);
  }

  public Variant getAxHorizontalAlignment ()
    throws ActiveXException {
    // memid = 0x88

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x88, AX_PROPERTYGET, false, args);
    return vResult;
  }

  public void setAxHorizontalAlignment (Variant param1)
    throws ActiveXException {
    // memid = 0x88

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0x88, AX_PROPERTYSET, true, args);
  }

  public void _Dummy50 ()
    throws ActiveXException {
    // memid = 0x10032

    Vector args = new Vector(0);
    axInvoke(0x10032, AX_INVOKE, true, args);
  }

  public Interior getAxInterior ()
    throws ActiveXException {
    // memid = 0x81

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x81, AX_PROPERTYGET, false, args);
    Interior result = new Interior(vResult.getActiveXDispatchableValue());
    return result;
  }

  public void _Dummy52 ()
    throws ActiveXException {
    // memid = 0x10034

    Vector args = new Vector(0);
    axInvoke(0x10034, AX_INVOKE, true, args);
  }

  public void _Dummy53 ()
    throws ActiveXException {
    // memid = 0x10035

    Vector args = new Vector(0);
    axInvoke(0x10035, AX_INVOKE, true, args);
  }

  public void _Dummy54 ()
    throws ActiveXException {
    // memid = 0x10036

    Vector args = new Vector(0);
    axInvoke(0x10036, AX_INVOKE, true, args);
  }

  public void _Dummy55 ()
    throws ActiveXException {
    // memid = 0x10037

    Vector args = new Vector(0);
    axInvoke(0x10037, AX_INVOKE, true, args);
  }

  public void _Dummy56 ()
    throws ActiveXException {
    // memid = 0x10038

    Vector args = new Vector(0);
    axInvoke(0x10038, AX_INVOKE, true, args);
  }

  public void _Dummy57 ()
    throws ActiveXException {
    // memid = 0x10039

    Vector args = new Vector(0);
    axInvoke(0x10039, AX_INVOKE, true, args);
  }

  public void _Dummy58 ()
    throws ActiveXException {
    // memid = 0x1003a

    Vector args = new Vector(0);
    axInvoke(0x1003a, AX_INVOKE, true, args);
  }

  public void _Dummy59 ()
    throws ActiveXException {
    // memid = 0x1003b

    Vector args = new Vector(0);
    axInvoke(0x1003b, AX_INVOKE, true, args);
  }

  public void _Dummy60 ()
    throws ActiveXException {
    // memid = 0x1003c

    Vector args = new Vector(0);
    axInvoke(0x1003c, AX_INVOKE, true, args);
  }

  public void _Dummy61 ()
    throws ActiveXException {
    // memid = 0x1003d

    Vector args = new Vector(0);
    axInvoke(0x1003d, AX_INVOKE, true, args);
  }

  public void _Dummy62 ()
    throws ActiveXException {
    // memid = 0x1003e

    Vector args = new Vector(0);
    axInvoke(0x1003e, AX_INVOKE, true, args);
  }

  public void _Dummy63 ()
    throws ActiveXException {
    // memid = 0x1003f

    Vector args = new Vector(0);
    axInvoke(0x1003f, AX_INVOKE, true, args);
  }

  public Variant getAxOrientation ()
    throws ActiveXException {
    // memid = 0x86

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x86, AX_PROPERTYGET, false, args);
    return vResult;
  }

  public void setAxOrientation (Variant param1)
    throws ActiveXException {
    // memid = 0x86

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0x86, AX_PROPERTYSET, true, args);
  }

  public void _Dummy65 ()
    throws ActiveXException {
    // memid = 0x10041

    Vector args = new Vector(0);
    axInvoke(0x10041, AX_INVOKE, true, args);
  }

  public void _Dummy66 ()
    throws ActiveXException {
    // memid = 0x10042

    Vector args = new Vector(0);
    axInvoke(0x10042, AX_INVOKE, true, args);
  }

  public void _Dummy67 ()
    throws ActiveXException {
    // memid = 0x10043

    Vector args = new Vector(0);
    axInvoke(0x10043, AX_INVOKE, true, args);
  }

  public void _Dummy68 ()
    throws ActiveXException {
    // memid = 0x10044

    Vector args = new Vector(0);
    axInvoke(0x10044, AX_INVOKE, true, args);
  }

  public boolean getAxRoundedCorners ()
    throws ActiveXException {
    // memid = 0x26b

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x26b, AX_PROPERTYGET, false, args);
    boolean result = vResult.getBooleanValue();
    return result;
  }

  public void setAxRoundedCorners (boolean param1)
    throws ActiveXException {
    // memid = 0x26b

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x26b, AX_PROPERTYSET, true, args);
  }

  public void _Dummy70 ()
    throws ActiveXException {
    // memid = 0x10046

    Vector args = new Vector(0);
    axInvoke(0x10046, AX_INVOKE, true, args);
  }

  public boolean getAxShadow ()
    throws ActiveXException {
    // memid = 0x67

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x67, AX_PROPERTYGET, false, args);
    boolean result = vResult.getBooleanValue();
    return result;
  }

  public void setAxShadow (boolean param1)
    throws ActiveXException {
    // memid = 0x67

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x67, AX_PROPERTYSET, true, args);
  }

  public void _Dummy72 ()
    throws ActiveXException {
    // memid = 0x10048

    Vector args = new Vector(0);
    axInvoke(0x10048, AX_INVOKE, true, args);
  }

  public void _Dummy73 ()
    throws ActiveXException {
    // memid = 0x10049

    Vector args = new Vector(0);
    axInvoke(0x10049, AX_INVOKE, true, args);
  }

  public ActiveXDispatchable Ungroup ()
    throws ActiveXException {
    // memid = 0xf4

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0xf4, AX_INVOKE, false, args);
    ActiveXDispatchable result = vResult.getActiveXDispatchableValue();
    return result;
  }

  public void _Dummy75 ()
    throws ActiveXException {
    // memid = 0x1004b

    Vector args = new Vector(0);
    axInvoke(0x1004b, AX_INVOKE, true, args);
  }

  public Variant getAxVerticalAlignment ()
    throws ActiveXException {
    // memid = 0x89

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x89, AX_PROPERTYGET, false, args);
    return vResult;
  }

  public void setAxVerticalAlignment (Variant param1)
    throws ActiveXException {
    // memid = 0x89

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0x89, AX_PROPERTYSET, true, args);
  }

  public void _Dummy77 ()
    throws ActiveXException {
    // memid = 0x1004d

    Vector args = new Vector(0);
    axInvoke(0x1004d, AX_INVOKE, true, args);
  }

  public int getAxReadingOrder ()
    throws ActiveXException {
    // memid = 0x3cf

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x3cf, AX_PROPERTYGET, false, args);
    int result = vResult.getIntValue();
    return result;
  }

  public void setAxReadingOrder (int param1)
    throws ActiveXException {
    // memid = 0x3cf

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x3cf, AX_PROPERTYSET, true, args);
  }

  public int getAxCount ()
    throws ActiveXException {
    // memid = 0x76

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x76, AX_PROPERTYGET, false, args);
    int result = vResult.getIntValue();
    return result;
  }

  public GroupObject Group ()
    throws ActiveXException {
    // memid = 0x2e

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x2e, AX_INVOKE, false, args);
    GroupObject result = new GroupObject(vResult.getActiveXDispatchableValue());
    return result;
  }

  public ActiveXDispatchable Item (Variant param1)
    throws ActiveXException {
    // memid = 0xaa

    Vector args = new Vector(1);
    args.addElement(param1);
    Variant vResult = axInvoke(0xaa, AX_INVOKE, false, args);
    ActiveXDispatchable result = vResult.getActiveXDispatchableValue();
    return result;
  }

  public Object _NewEnum ()
    throws ActiveXException {
    // memid = 0xfffffffc

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0xfffffffc, AX_INVOKE, false, args);
    Object result = vResult.getGenericValue();
    return result;
  }

@Override
public String toString() {
    return "<GroupObjects, super = " + super.toString() + ">";
}


}

