/*
 *  Copyright (C) 1986-2017 Gensym Corporation.
 *  All Rights Reserved.
 *
 *      QuantitativeParameter.java
 *
 *   Description: Generated Interface file. Do not edit!
 *
 *        Author: Gensym Corp.
 *
 *       Version: 8.4 Rev 0 (JI21)
 *
 *          Date: Fri Sep 21 13:05:05 EDT 2007
 *
 */


package com.gensym.classes;

import com.gensym.util.Structure;
import com.gensym.util.Sequence;
import com.gensym.util.Symbol;
import com.gensym.util.symbol.SystemAttributeSymbols;
import com.gensym.jgi.*;

public interface QuantitativeParameter extends com.gensym.classes.Parameter {

  public static final Symbol QUANTITATIVE_PARAMETER_ = com.gensym.util.symbol.G2ClassSymbols.QUANTITATIVE_PARAMETER_;
  static final Symbol g2ClassName = QUANTITATIVE_PARAMETER_;
  static final Symbol[] classInheritancePath = new Symbol[] {QUANTITATIVE_PARAMETER_, PARAMETER_, VARIABLE_OR_PARAMETER_, OBJECT_, ITEM_, ENTITY_, BLOCK_, KB_FRAME_, SYSTEM_ITEM_, ROOT_};


  static final Symbol[] staticAttributes = new Symbol[] {};


  /**
   * Generated Property Getter for attribute -- INITIAL-VALUE
   * @return the value of the INITIAL-VALUE attribute of this item
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for INITIAL-VALUE is : 
   * Quantity
   *
   */
  public java.lang.Number getInitialValue() throws G2AccessException;

  /**
   * Generated Property Setter for attribute -- INITIAL-VALUE
   * @param initialValue new value to conclude for INITIAL-VALUE
   * @exception G2AccessException if there are any communication problems
   *              or the value does not match with the type specification
   */
  public void setInitialValue(java.lang.Number initialValue) throws G2AccessException;

}
