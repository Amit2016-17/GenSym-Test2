/*
 *  Copyright (C) 1986-2017 Gensym Corporation.
 *  All Rights Reserved.
 *
 *      WebServiceDescriptionImpl.java
 *
 *   Description: Generated Interface file. Do not edit!
 *
 *        Author: Gensym Corp.
 *
 *       Version: 8.4 Rev 0 (JJ12)
 *
 *          Date: Fri Oct 12 14:15:27 EDT 2007
 *
 */


package com.gensym.classes;

import com.gensym.util.Structure;
import com.gensym.util.Sequence;
import com.gensym.util.Symbol;
import com.gensym.util.symbol.SystemAttributeSymbols;
import com.gensym.jgi.*;

public class WebServiceDescriptionImpl extends com.gensym.classes.WebServiceObjectImpl implements WebServiceDescription {


  static final long serialVersionUID = 2L;

  /* Generated constructors */

  public WebServiceDescriptionImpl() {
    super();
  }

  public WebServiceDescriptionImpl(G2Access context, int handle, Structure attributes) {
    super (context, handle, attributes);
  }


  public WebServiceDescriptionImpl(G2Access context, int handle, int handleVersion, G2__BaseImpl wrap, Structure attributes) {
    super (context, handle, handleVersion, wrap, attributes);
  }


  private static String NoBodyExceptionString = "This method has no implementation for local access";
  
  
}
