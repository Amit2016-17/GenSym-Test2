/*
 *  Copyright (C) 1986-2017 Gensym Corporation.
 *  All Rights Reserved.
 *
 *      ExternalSimulationDefinition.java
 *
 *   Description: Generated Interface file. Do not edit!
 *
 *        Author: Gensym Corp.
 *
 *       Version: 8.4 Rev 0 (JI21)
 *
 *          Date: Fri Sep 21 12:41:13 EDT 2007
 *
 */


package com.gensym.classes;

import com.gensym.util.Structure;
import com.gensym.util.Sequence;
import com.gensym.util.Symbol;
import com.gensym.util.symbol.SystemAttributeSymbols;
import com.gensym.jgi.*;

public interface ExternalSimulationDefinition extends com.gensym.classes.Item, com.gensym.classes.Entity {

  public static final Symbol EXTERNAL_SIMULATION_DEFINITION_ = com.gensym.util.symbol.G2ClassSymbols.EXTERNAL_SIMULATION_DEFINITION_;
  static final Symbol g2ClassName = EXTERNAL_SIMULATION_DEFINITION_;
  static final Symbol[] classInheritancePath = new Symbol[] {EXTERNAL_SIMULATION_DEFINITION_, ITEM_, ENTITY_, BLOCK_, KB_FRAME_, SYSTEM_ITEM_, ROOT_};


  static final Symbol[] staticAttributes = new Symbol[] {};


  /**
   * Generated Property Getter for attribute -- AUTHORS
   * @return the value of the AUTHORS attribute of this item
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for AUTHORS is : 
   * (OR NoItem
      (Structure 
        TIMESTAMP
          (Structure 
            YEAR Integer
            MONTH Integer
            DATE Integer
            HOURS Integer
            MINUTES Integer)
        AUTHORS
          (Sequence Symbol 0)))
   *
   */
  public com.gensym.util.Structure getAuthors() throws G2AccessException;

  /**
   * Generated Property Setter for attribute -- AUTHORS
   * @param authors new value to conclude for AUTHORS
   * @exception G2AccessException if there are any communication problems
   *              or the value does not match with the type specification
   */
  public void setAuthors(com.gensym.util.Structure authors) throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- CHANGE-LOG
   * @return the value of the CHANGE-LOG attribute of this item
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for CHANGE-LOG is : 
   * (OR (Sequence)
      NoItem)
   *
   */
  public com.gensym.util.Sequence getChangeLog() throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- CLASS-OF-OBJECT-COMPUTED-BY-THIS
   * @return the value of the CLASS-OF-OBJECT-COMPUTED-BY-THIS attribute of this item
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for CLASS-OF-OBJECT-COMPUTED-BY-THIS is : 
   * (OR NoItem
      Symbol)
   *
   */
  public com.gensym.util.Symbol getClassOfObjectComputedByThis() throws G2AccessException;

  /**
   * Generated Property Setter for attribute -- CLASS-OF-OBJECT-COMPUTED-BY-THIS
   * @param classOfObjectComputedByThis new value to conclude for CLASS-OF-OBJECT-COMPUTED-BY-THIS
   * @exception G2AccessException if there are any communication problems
   *              or the value does not match with the type specification
   */
  public void setClassOfObjectComputedByThis(com.gensym.util.Symbol classOfObjectComputedByThis) throws G2AccessException;

}
