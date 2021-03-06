/*
 *  Copyright (C) 1986-2017 Gensym Corporation.
 *  All Rights Reserved.
 *
 *      UilNavigationButtonImpl.java
 *
 *   Description: Generated Interface file. Do not edit!
 *
 *        Author: Gensym Corp.
 *
 *       Version: 5.1 Rev. 1
 *
 *          Date: Mon Oct 22 11:14:44 EDT 2007
 *
 */


package com.gensym.classes.modules.uilroot;

import com.gensym.classes.*;
import com.gensym.util.Structure;
import com.gensym.util.Sequence;
import com.gensym.util.Symbol;
import com.gensym.util.symbol.SystemAttributeSymbols;
import com.gensym.jgi.*;
import com.gensym.classes.Object;

public class UilNavigationButtonImpl extends com.gensym.classes.modules.uilroot.UilWorkspaceButtonImpl implements UilNavigationButton {


  static final long serialVersionUID = 2L;
  private static final Symbol UIL_RELEASE_BUTTON_AFTER_SELECTION_ = Symbol.intern ("UIL-RELEASE-BUTTON-AFTER-SELECTION");

  /* Generated constructors */

  public UilNavigationButtonImpl() {
    super();
  }

  public UilNavigationButtonImpl(G2Access context, int handle, Structure attributes) {
    super (context, handle, attributes);
  }


  public UilNavigationButtonImpl(G2Access context, int handle, int handleVersion, G2__BaseImpl wrap, Structure attributes) {
    super (context, handle, handleVersion, wrap, attributes);
  }


  /**
   * Generated Property Setter for attribute -- UIL-RELEASE-BUTTON-AFTER-SELECTION
   * @param uilReleaseButtonAfterSelection new value to conclude for UIL-RELEASE-BUTTON-AFTER-SELECTION
   * @exception G2AccessException if there are any communication problems
   *              or the value does not match with the type specification
   */
  @Override
  public void setUilReleaseButtonAfterSelection(java.lang.Object uilReleaseButtonAfterSelection) throws G2AccessException {
    setAttributeValue (UIL_RELEASE_BUTTON_AFTER_SELECTION_, uilReleaseButtonAfterSelection);
  }

  /**
   * Generated Property Getter for attribute -- UIL-RELEASE-BUTTON-AFTER-SELECTION
   * @return the value of the UIL-RELEASE-BUTTON-AFTER-SELECTION attribute of this item
   * @exception G2AccessException if there are any communication problems
   */
  @Override
  public java.lang.Object getUilReleaseButtonAfterSelection() throws G2AccessException {
    java.lang.Object retnValue = getAttributeValue (UIL_RELEASE_BUTTON_AFTER_SELECTION_);
    return (java.lang.Object)retnValue;
  }

  // Method Name Constants
  private static final Symbol MethodName_UPP_SET_BUTTON_LABEL_ = Symbol.intern ("UPP-SET-BUTTON-LABEL");
  private static String NoBodyExceptionString = "This method has no implementation for local access";
  
  
  //Generated Methods 

  /**
   * Auto Generated method for G2 Method
   * UIL-NAVIGATION-BUTTON::UPP-SET-BUTTON-LABEL
   * @exception G2AccessException if there are any communication problems
   * (this:CLASS UIL-NAVIGATION-BUTTON,arg1:TEXT) = ()
   */
  @Override
  public  void uppSetButtonLabel(java.lang.String arg1) throws G2AccessException
{
    if (isByHandle()) {
      java.lang.Object result;
      java.lang.Object[] args = new java.lang.Object[] {this,arg1};
      result = (java.lang.Object)callRPC(MethodName_UPP_SET_BUTTON_LABEL_, args);
    }
    else {
      // No MethodBody for by-copy exported
      throw new RuntimeException(NoBodyExceptionString);
    }
  }
  
}
