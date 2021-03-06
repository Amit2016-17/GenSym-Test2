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


public class dispVBComponentsEvents extends com.gensym.com.ActiveXDispatchableImpl
{
  private static Guid classID =
    new Guid(0x2e193, 0x0, 0x0,
             (short) 0xc0, (short) 0x0, (short) 0x0, (short) 0x0,
             (short) 0x0, (short) 0x0, (short) 0x0, (short) 0x46);

  public dispVBComponentsEvents (ActiveXDispatchable axDispatch) throws ActiveXCastException
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

/* Type info #27
    A set of methods and properties that are accessible through IDispatch::Invoke.
    Type info name is: _dispVBComponentsEvents
    Doc string is: Returned by the VBComponentsEvents property. This object is the source of events that occur when an object is added, removed, selected, renamed, or activated.
    Help file is: C:\Program Files\DevStudio\VB\VB5EXT.HLP
    Type Info contains 6 functions.
    Type Info contains zero properties.
 */

  public void ItemAdded (Variant param1)
    throws ActiveXException {
    // memid = 0x1

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0x1, AX_INVOKE, true, args);
  }

  public void ItemRemoved (Variant param1)
    throws ActiveXException {
    // memid = 0x2

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0x2, AX_INVOKE, true, args);
  }

  public void ItemRenamed (Variant param1, String param2)
    throws ActiveXException {
    // memid = 0x3

    Vector args = new Vector(2);
    args.addElement(param1);
    args.addElement(new Variant(param2));
    axInvoke(0x3, AX_INVOKE, true, args);
  }

  public void ItemSelected (Variant param1)
    throws ActiveXException {
    // memid = 0x4

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0x4, AX_INVOKE, true, args);
  }

  public void ItemActivated (Variant param1)
    throws ActiveXException {
    // memid = 0x5

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0x5, AX_INVOKE, true, args);
  }

  public void ItemReloaded (Variant param1)
    throws ActiveXException {
    // memid = 0x6

    Vector args = new Vector(1);
    args.addElement(param1);
    axInvoke(0x6, AX_INVOKE, true, args);
  }

@Override
public String toString() {
    return "<dispVBComponentsEvents, super = " + super.toString() + ">";
}


}

