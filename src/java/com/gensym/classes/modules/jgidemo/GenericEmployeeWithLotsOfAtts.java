/*
 *  Copyright (C) 1986-2017 Gensym Corporation.
 *  All Rights Reserved.
 *
 *      GenericEmployeeWithLotsOfAtts.java
 *
 *   Description: Generated Interface file. Do not edit!
 *
 *        Author: Gensym Corp.
 *
 *       Version: 5.1 Rev. 1
 *
 *          Date: Fri Sep 21 13:50:20 EDT 2007
 *
 */


package com.gensym.classes.modules.jgidemo;

import com.gensym.classes.*;
import com.gensym.util.Structure;
import com.gensym.util.Sequence;
import com.gensym.util.Symbol;
import com.gensym.util.symbol.SystemAttributeSymbols;
import com.gensym.jgi.*;
import com.gensym.classes.Object;

public interface GenericEmployeeWithLotsOfAtts extends com.gensym.classes.modules.jgidemo.GenericREmployee {

  public static final Symbol GENERIC_EMPLOYEE_WITH_LOTS_OF_ATTS_ = Symbol.intern ("GENERIC-EMPLOYEE-WITH-LOTS-OF-ATTS");
  static final Symbol g2ClassName = GENERIC_EMPLOYEE_WITH_LOTS_OF_ATTS_;
  static final Symbol[] classInheritancePath = new Symbol[] {GENERIC_EMPLOYEE_WITH_LOTS_OF_ATTS_, GENERIC_R_EMPLOYEE_, R_EMPLOYEE_, REPOSITORY_OBJECT_, GENERIC_R_OBJECT_, OBJECT_, ITEM_, ENTITY_, BLOCK_, KB_FRAME_, SYSTEM_ITEM_, ROOT_};


  static final Symbol[] staticAttributes = new Symbol[] {};


  /**
   * Generated Property Getter for attribute -- LOTS-OF-ATTS
   * @return the value of the LOTS-OF-ATTS attribute of this item
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for LOTS-OF-ATTS is : 
   * (OR ItemOrValue
      NoItem)
   *
   */
  public java.lang.Object getLotsOfAtts() throws G2AccessException;

  /**
   * Generated Property Setter for attribute -- LOTS-OF-ATTS
   * @param lotsOfAtts new value to conclude for LOTS-OF-ATTS
   * @exception G2AccessException if there are any communication problems
   *              or the value does not match with the type specification
   */
  public void setLotsOfAtts(java.lang.Object lotsOfAtts) throws G2AccessException;

}
