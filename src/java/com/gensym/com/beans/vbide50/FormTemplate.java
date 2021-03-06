package com.gensym.com.beans.vbide50;

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


public class FormTemplate extends com.gensym.com.ActiveXDispatchableImpl
{
  private static Guid classID =
    new Guid(0x79b1f921, 0xec2c, 0x101a,
             (short) 0xb1, (short) 0xf9, (short) 0x8, (short) 0x0,
             (short) 0x2b, (short) 0x2b, (short) 0x8c, (short) 0xda);

  public FormTemplate (ActiveXDispatchable axDispatch) throws ActiveXCastException
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

    // Library name is: VBIDE
    // DocString is: Microsoft Visual Basic 5.0 Extensibility
    // Help file is: C:\Program Files\DevStudio\VB\VB5EXT.HLP
    // There are 108 TypeInfos in the library

/* Type info #67
    A set of methods and properties that are accessible through IDispatch::Invoke.
    Type info name is: FormTemplate
    Help file is: C:\Program Files\DevStudio\VB\VB5EXT.HLP
    Type Info contains 14 functions.
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

  public Application getAxApplication ()
    throws ActiveXException {
    // memid = 0x1

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x1, AX_PROPERTYGET, false, args);
    Application result = new Application(vResult.getActiveXDispatchableValue());
    return result;
  }

  public ProjectTemplate getAxParent ()
    throws ActiveXException {
    // memid = 0x2

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x2, AX_PROPERTYGET, false, args);
    ProjectTemplate result = new ProjectTemplate(vResult.getActiveXDispatchableValue());
    return result;
  }

  public SelectedControlTemplates getAxSelectedControlTemplates ()
    throws ActiveXException {
    // memid = 0x2a

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x2a, AX_PROPERTYGET, false, args);
    SelectedControlTemplates result = new SelectedControlTemplates(vResult.getActiveXDispatchableValue());
    return result;
  }

  public ControlTemplates getAxControlTemplates ()
    throws ActiveXException {
    // memid = 0x2b

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x2b, AX_PROPERTYGET, false, args);
    ControlTemplates result = new ControlTemplates(vResult.getActiveXDispatchableValue());
    return result;
  }

  public Variant getAxProperties ()
    throws ActiveXException {
    // memid = 0x2c

    Vector args = new Vector(0);
    Variant vResult = axInvoke(0x2c, AX_PROPERTYGET, false, args);
    return vResult;
  }

  public ControlTemplate AddMenuTemplate (String param1, ControlTemplate param2)
    throws ActiveXException {
    // memid = 0x2d

    Vector args = new Vector(2);
    args.addElement(new Variant(param1));
    args.addElement(new Variant(param2));
    Variant vResult = axInvoke(0x2d, AX_INVOKE, false, args);
    ControlTemplate result = new ControlTemplate(vResult.getActiveXDispatchableValue());
    return result;
  }

  public void InsertFile (String param1)
    throws ActiveXException {
    // memid = 0x2e

    Vector args = new Vector(1);
    args.addElement(new Variant(param1));
    axInvoke(0x2e, AX_INVOKE, true, args);
  }

@Override
public String toString() {
    return "<FormTemplate, super = " + super.toString() + ">";
}


}

