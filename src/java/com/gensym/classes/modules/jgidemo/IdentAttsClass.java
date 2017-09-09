/*
 *  Copyright (C) 1986-2017 Gensym Corporation.
 *  All Rights Reserved.
 *
 *      IdentAttsClass.java
 *
 *   Description: Generated Interface file. Do not edit!
 *
 *        Author: Gensym Corp.
 *
 *       Version: 5.1 Rev. 1
 *
 *          Date: Fri Sep 21 13:52:25 EDT 2007
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

public interface IdentAttsClass extends com.gensym.classes.Object {

  public static final Symbol IDENT_ATTS_CLASS_ = Symbol.intern ("IDENT-ATTS-CLASS");
  static final Symbol g2ClassName = IDENT_ATTS_CLASS_;
  static final Symbol[] classInheritancePath = new Symbol[] {IDENT_ATTS_CLASS_, OBJECT_, ITEM_, ENTITY_, BLOCK_, KB_FRAME_, SYSTEM_ITEM_, ROOT_};

  static final Symbol AUTHORS_ = Symbol.intern ("AUTHORS");
  static final Symbol CHANGE_LOG_ = Symbol.intern ("CHANGE-LOG");
  static final Symbol CLASS_NAME_ = Symbol.intern ("CLASS-NAME");
  static final Symbol DIRECT_SUPERIOR_CLASSES_ = Symbol.intern ("DIRECT-SUPERIOR-CLASSES");
  static final Symbol CLASS_SPECIFIC_ATTRIBUTES_ = Symbol.intern ("CLASS-SPECIFIC-ATTRIBUTES");
  static final Symbol CLASS_RESTRICTIONS_ = Symbol.intern ("CLASS-RESTRICTIONS");
  static final Symbol INSTANCE_CONFIGURATION_ = Symbol.intern ("INSTANCE-CONFIGURATION");
  static final Symbol CHANGE_ = Symbol.intern ("CHANGE");
  static final Symbol CLASS_INHERITANCE_PATH_ = Symbol.intern ("CLASS-INHERITANCE-PATH");
  static final Symbol INHERITED_ATTRIBUTES_ = Symbol.intern ("INHERITED-ATTRIBUTES");
  static final Symbol INITIALIZABLE_SYSTEM_ATTRIBUTES_ = Symbol.intern ("INITIALIZABLE-SYSTEM-ATTRIBUTES");
  static final Symbol ATTRIBUTE_INITIALIZATIONS_ = Symbol.intern ("ATTRIBUTE-INITIALIZATIONS");
  static final Symbol SUPERIOR_CLASS_ = Symbol.intern ("SUPERIOR-CLASS");
  static final Symbol CAPABILITIES_AND_RESTRICTIONS_ = Symbol.intern ("CAPABILITIES-AND-RESTRICTIONS");
  static final Symbol ATTRIBUTES_SPECIFIC_TO_CLASS_ = Symbol.intern ("ATTRIBUTES-SPECIFIC-TO-CLASS");
  static final Symbol MENU_OPTION_ = Symbol.intern ("MENU-OPTION");

  static final Symbol[] staticAttributes = new Symbol[] {AUTHORS_, CHANGE_LOG_, CLASS_NAME_, DIRECT_SUPERIOR_CLASSES_, CLASS_SPECIFIC_ATTRIBUTES_, CLASS_RESTRICTIONS_, INSTANCE_CONFIGURATION_, CHANGE_, CLASS_INHERITANCE_PATH_, INHERITED_ATTRIBUTES_, INITIALIZABLE_SYSTEM_ATTRIBUTES_, ATTRIBUTE_INITIALIZATIONS_, SUPERIOR_CLASS_, CAPABILITIES_AND_RESTRICTIONS_, ATTRIBUTES_SPECIFIC_TO_CLASS_, MENU_OPTION_};


  /**
   * Generated Property Getter for attribute -- UPDATE-RATE
   * @return the value of the UPDATE-RATE attribute of this item
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for UPDATE-RATE is : 
   * Integer
   *
   */
  public int getUpdateRate() throws G2AccessException;

  /**
   * Generated Property Setter for attribute -- UPDATE-RATE
   * @param updateRate new value to conclude for UPDATE-RATE
   * @exception G2AccessException if there are any communication problems
   *              or the value does not match with the type specification
   */
  public void setUpdateRate(int updateRate) throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- EXTERNAL-UNIT-NO
   * @return the value of the EXTERNAL-UNIT-NO attribute of this item
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for EXTERNAL-UNIT-NO is : 
   * Text
   *
   */
  public java.lang.String getExternalUnitNo() throws G2AccessException;

  /**
   * Generated Property Setter for attribute -- EXTERNAL-UNIT-NO
   * @param externalUnitNo new value to conclude for EXTERNAL-UNIT-NO
   * @exception G2AccessException if there are any communication problems
   *              or the value does not match with the type specification
   */
  public void setExternalUnitNo(java.lang.String externalUnitNo) throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- AUTHORS
   * @return the value of the AUTHORS attribute of this class
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
  public com.gensym.util.Structure getAuthorsForClass() throws G2AccessException;

  /**
   * Generated Property Setter for attribute -- AUTHORS
   * @param authors new value to conclude for AUTHORS
   * @exception G2AccessException if there are any communication problems
   *              or the value does not match with the type specification
   */
  public void setAuthorsForClass(com.gensym.util.Structure authors) throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- CHANGE-LOG
   * @return the value of the CHANGE-LOG attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for CHANGE-LOG is : 
   * (OR (Sequence)
      NoItem)
   *
   */
  public com.gensym.util.Sequence getChangeLogForClass() throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- CLASS-NAME
   * @return the value of the CLASS-NAME attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for CLASS-NAME is : 
   * (OR NoItem
      Symbol)
   *
   */
  public com.gensym.util.Symbol getClassNameForClass() throws G2AccessException;

  /**
   * Generated Property Setter for attribute -- CLASS-NAME
   * @param className new value to conclude for CLASS-NAME
   * @exception G2AccessException if there are any communication problems
   *              or the value does not match with the type specification
   */
  public void setClassNameForClass(com.gensym.util.Symbol className) throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- DIRECT-SUPERIOR-CLASSES
   * @return the value of the DIRECT-SUPERIOR-CLASSES attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for DIRECT-SUPERIOR-CLASSES is : 
   * (OR NoItem
      (Sequence Symbol 1))
   *
   */
  public com.gensym.util.Sequence getDirectSuperiorClassesForClass() throws G2AccessException;

  /**
   * Generated Property Setter for attribute -- DIRECT-SUPERIOR-CLASSES
   * @param directSuperiorClasses new value to conclude for DIRECT-SUPERIOR-CLASSES
   * @exception G2AccessException if there are any communication problems
   *              or the value does not match with the type specification
   */
  public void setDirectSuperiorClassesForClass(com.gensym.util.Sequence directSuperiorClasses) throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- CLASS-SPECIFIC-ATTRIBUTES
   * @return the value of the CLASS-SPECIFIC-ATTRIBUTES attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for CLASS-SPECIFIC-ATTRIBUTES is : 
   * (OR NoItem
      (Sequence 
        (Structure 
          ATTRIBUTE-NAME Symbol
          ATTRIBUTE-TYPE-SPECIFICATION Symbol
          ATTRIBUTE-FORMAT
            (OR Symbol
                (Structure 
                  WHOLE-NUMBER-PRECISION Integer
                  FRACTION-PRECISION Integer))
          ATTRIBUTE-INITIAL-VALUE Value
          ATTRIBUTE-INITIAL-ITEM-CLASS Symbol
          ATTRIBUTE-INITIAL-ITEM-CLASS-RESTRICTED-TO-VARIABLE-OR-PARAMETER BooleanTruthValue
          ATTRIBUTE-INITIAL-TYPE Symbol
          ATTRIBUTE-RANGE
            (Sequence Symbol 1)
          ATTRIBUTE-IS-INDEXED BooleanTruthValue)
        1)))
   *
   */
  public com.gensym.util.Sequence getClassSpecificAttributesForClass() throws G2AccessException;

  /**
   * Generated Property Setter for attribute -- CLASS-SPECIFIC-ATTRIBUTES
   * @param classSpecificAttributes new value to conclude for CLASS-SPECIFIC-ATTRIBUTES
   * @exception G2AccessException if there are any communication problems
   *              or the value does not match with the type specification
   */
  public void setClassSpecificAttributesForClass(com.gensym.util.Sequence classSpecificAttributes) throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- CLASS-RESTRICTIONS
   * @return the value of the CLASS-RESTRICTIONS attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Attribute CLASS-RESTRICTIONS has no type
   *
   */
  public java.lang.Object getClassRestrictionsForClass() throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- INSTANCE-CONFIGURATION
   * @return the value of the INSTANCE-CONFIGURATION attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for INSTANCE-CONFIGURATION is : 
   * (OR NoItem
      (Sequence 
        (Structure 
          TYPE
            (MEMBER CONFIGURE-USER-INTERFACE RESTRICT-PROPRIETARY-ITEMS SET-UP-NETWORK-ACCESS 
                    DECLARE-PROPERTIES COMMENT)
          CLAUSES
            (OR (Sequence 
                  (Structure 
                    APPLICABLE-USER-MODES
                      (Structure 
                        NEGATIVE BooleanTruthValue
                        MODES
                          (Sequence Symbol 1))
                    STATEMENTS
                      (Sequence 
                        (OR (Structure 
                              OPERATION-TYPE
                                (MEMBER WORKSPACE-MENU ITEM-MENU NON-MENU)
                              RESTRICTION-TYPE
                                (MEMBER INCLUDE INCLUDE-ADDITIONALLY EXCLUDE EXCLUDE-ADDITIONALLY 
                                        EXCLUDE-ABSOLUTELY)
                              MENU-CHOICES
                                (Sequence Symbol 0)
                              APPLICABLE-ITEMS
                                (Sequence Symbol 1))
                            (Structure 
                              OPERATION-TYPE
                                (MEMBER TABLE-MENU)
                              RESTRICTION-TYPE
                                (MEMBER INCLUDE INCLUDE-ADDITIONALLY EXCLUDE EXCLUDE-ADDITIONALLY 
                                        EXCLUDE-ABSOLUTELY)
                              MENU-CHOICES
                                (Sequence 
                                  (MEMBER SUBTABLE DELETE-SUBTABLE CHANGE-TO-NO CHANGE-TO-YES 
                                          CHANGE-TO SHOW-SUBTABLE-OF-UNSAVED-ATTRIBUTES 
                                          ADD-OPTIONAL-SUBTABLE TABLE CHOOSE-EXISTING-CLASS EDIT 
                                          EDIT-ICON TRANSFER MOVE CLONE SHOW-ATTRIBUTE-DISPLAY 
                                          ADD-ANOTHER-ATTRIBUTE DELETE-ATTRIBUTE 
                                          ADD-NAME-OF-ATTRIBUTE DELETE-NAME-OF-ATTRIBUTE 
                                          HIDE-ATTRIBUTE-DISPLAY CHANGE-SIZE ENABLE DISABLE 
                                          GO-TO-ORIGINAL DELETE-ORIGINAL TRANSFER-ORIGINAL 
                                          DESCRIBE-CONFIGURATION DESCRIBE VIEW-CHANGE-LOG SHOW-VALUE 
                                          SHOW-TEXT SHOW-SUMMARY-OF-TEXT ADD-SUBTABLE SUBTABLES 
                                          DYNAMIC-BACKWARD-CHAINING DESCRIBE-CHAINING 
                                          DYNAMIC-GENERIC-RULE-DISPLAY HIDE DELETE HIDE-TABLE 
                                          MARK-TO-STRIP-TEXT MARK-TO-STRIP-TEXT-* 
                                          REMOVE-STRIP-TEXT-MARK REMOVE-STRIP-TEXT-MARK-* 
                                          MARK-NOT-TO-STRIP-TEXT-* MARK-NOT-TO-STRIP-TEXT 
                                          REMOVE-DO-NOT-STRIP-TEXT-MARK-* 
                                          REMOVE-DO-NOT-STRIP-TEXT-MARK)
                                  0))
                              APPLICABLE-ATTRIBUTES
                                (Sequence Symbol 0)
                              APPLICABLE-ITEMS
                                (Sequence Symbol 1))
                            (Structure 
                              OPERATION-TYPE
                                (MEMBER ATTRIBUTE-VISIBILITY)
                              RESTRICTION-TYPE
                                (MEMBER INCLUDE INCLUDE-ADDITIONALLY EXCLUDE EXCLUDE-ADDITIONALLY 
                                        EXCLUDE-ABSOLUTELY)
                              ATTRIBUTES
                                (Sequence Symbol 0)
                              APPLICABLE-ITEMS
                                (Sequence Symbol 1))
                            (Structure 
                              OPERATION-TYPE
                                (MEMBER PRESSING RELEASING CLICKING)
                              KEY-CODE
                                (Structure 
                                  MODIFIERS Integer
                                  MOUSE-BUTTON
                                    (MEMBER ANY LEFT MIDDLE RIGHT))
                              CONSEQUENT-ACTION
                                (OR (OR (MEMBER LIFT-TO-TOP DROP-TO-BOTTOM GO-TO-REFERENCED-ITEM 
                                                CLONE-AS-TREND-CHART TABLE EDIT TRANSFER MOVE CLONE 
                                                CHANGE-MIN-SIZE ALIGN-TEXT FONT 
                                                SHOW-UNSAVED-ATTRIBUTES TABLE-OF-HIDDEN-ATTRIBUTES 
                                                COLOR DELETE GO-TO-MESSAGE-ORIGIN ENABLE DISABLE 
                                                DESCRIBE VIEW-CHANGE-LOG COMPILE-G2GL-PROCESS 
                                                CLEAN-UP-G2GL-COMPILATION-POSTINGS-ON-PROCESS 
                                                EXECUTE-G2GL-PROCESS DYNAMIC-RULE-INVOCATION-DISPLAY 
                                                DESCRIBE-CONFIGURATION MARK-TO-STRIP-TEXT 
                                                MARK-TO-STRIP-TEXT-* REMOVE-STRIP-TEXT-MARK 
                                                REMOVE-STRIP-TEXT-MARK-* MARK-NOT-TO-STRIP-TEXT-* 
                                                MARK-NOT-TO-STRIP-TEXT 
                                                REMOVE-DO-NOT-STRIP-TEXT-MARK-* 
                                                REMOVE-DO-NOT-STRIP-TEXT-MARK GO-TO-SUBWORKSPACE 
                                                CREATE-INSTANCE SET-TEMPORARY-BREAKPOINT 
                                                REMOVE-TEMPORARY-BREAKPOINT 
                                                ADD-STUB-FOR-LOCAL-HANDLER EDIT-ICON TABLE-OF-VALUES 
                                                NAME ROTATE-REFLECT CHANGE-SIZE 
                                                RESTORE-TO-NORMAL-SIZE DYNAMIC-BACKWARD-CHAINING 
                                                DESCRIBE-CHAINING DYNAMIC-GENERIC-RULE-DISPLAY 
                                                CREATE-SUBWORKSPACE EDIT-CELL-EXPRESSION 
                                                EDIT-CELL-FORMAT OTHER-EDITS ADD-ROW ADD-COLUMN 
                                                DELETE-ROW DELETE-COLUMN HIDE-NAME)
                                        Symbol)
                                    (Structure 
                                      MOUSE-TRACKING-PROCEDURE-NAME Symbol
                                      MOUSE-TRACKING-APPLICABLE-ITEMS
                                        (Sequence Symbol 1)
                                      MOUSE-MOTION-TRACKING? BooleanTruthValue))
                              APPLICABLE-ITEMS
                                (Sequence Symbol 1))
                            (Structure 
                              OPERATION-TYPE
                                (MEMBER TYPING HOVERING)
                              KEY-CODE
                                (Structure 
                                  MODIFIERS Integer
                                  KEYBOARD-SYMBOL
                                    (MEMBER F1 F2 F3 F4 F5 F6 F7 F8 F9 F10 F11 F12 BACKSPACE TAB 
                                            LINEFEED RETURN ESCAPE 0 1 2 3 4 5 6 7 8 9 : ; < = > ? A 
                                            B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ ] ^ 
                                            _ ` { | } SPACE ! " # $ % & ' ( ) * + , - . / DELETE 
                                            MOUSE-WHEEL-FORWARD MOUSE-WHEEL-BACKWARD MOUSE-HOVER 
                                            BREAK ENTER HELP INSERT REDO MENU FIND HOME BEGIN END 
                                            PAUSE SELECT PRINT EXECUTE ABORT CLEAR-SCREEN UP-ARROW 
                                            DOWN-ARROW LEFT-ARROW RIGHT-ARROW PREVIOUS-SCREEN 
                                            NEXT-SCREEN))
                              CONSEQUENT-ACTION
                                (OR (OR (MEMBER LIFT-TO-TOP DROP-TO-BOTTOM GO-TO-REFERENCED-ITEM 
                                                CLONE-AS-TREND-CHART TABLE EDIT TRANSFER MOVE CLONE 
                                                CHANGE-MIN-SIZE ALIGN-TEXT FONT 
                                                SHOW-UNSAVED-ATTRIBUTES TABLE-OF-HIDDEN-ATTRIBUTES 
                                                COLOR DELETE GO-TO-MESSAGE-ORIGIN ENABLE DISABLE 
                                                DESCRIBE VIEW-CHANGE-LOG COMPILE-G2GL-PROCESS 
                                                CLEAN-UP-G2GL-COMPILATION-POSTINGS-ON-PROCESS 
                                                EXECUTE-G2GL-PROCESS DYNAMIC-RULE-INVOCATION-DISPLAY 
                                                DESCRIBE-CONFIGURATION MARK-TO-STRIP-TEXT 
                                                MARK-TO-STRIP-TEXT-* REMOVE-STRIP-TEXT-MARK 
                                                REMOVE-STRIP-TEXT-MARK-* MARK-NOT-TO-STRIP-TEXT-* 
                                                MARK-NOT-TO-STRIP-TEXT 
                                                REMOVE-DO-NOT-STRIP-TEXT-MARK-* 
                                                REMOVE-DO-NOT-STRIP-TEXT-MARK GO-TO-SUBWORKSPACE 
                                                CREATE-INSTANCE SET-TEMPORARY-BREAKPOINT 
                                                REMOVE-TEMPORARY-BREAKPOINT 
                                                ADD-STUB-FOR-LOCAL-HANDLER EDIT-ICON TABLE-OF-VALUES 
                                                NAME ROTATE-REFLECT CHANGE-SIZE 
                                                RESTORE-TO-NORMAL-SIZE DYNAMIC-BACKWARD-CHAINING 
                                                DESCRIBE-CHAINING DYNAMIC-GENERIC-RULE-DISPLAY 
                                                CREATE-SUBWORKSPACE EDIT-CELL-EXPRESSION 
                                                EDIT-CELL-FORMAT OTHER-EDITS ADD-ROW ADD-COLUMN 
                                                DELETE-ROW DELETE-COLUMN HIDE-NAME)
                                        Symbol)
                                    (Structure 
                                      MOUSE-TRACKING-PROCEDURE-NAME Symbol
                                      MOUSE-TRACKING-APPLICABLE-ITEMS
                                        (Sequence Symbol 1)
                                      MOUSE-MOTION-TRACKING? BooleanTruthValue))
                              APPLICABLE-ITEMS
                                (Sequence Symbol 1))
                            (Structure 
                              OPERATION-TYPE
                                (MEMBER SELECTING SELECTING-ABSOLUTELY)
                              CONSEQUENT-ACTION
                                (OR (OR (MEMBER LIFT-TO-TOP DROP-TO-BOTTOM GO-TO-REFERENCED-ITEM 
                                                CLONE-AS-TREND-CHART TABLE EDIT TRANSFER MOVE CLONE 
                                                CHANGE-MIN-SIZE ALIGN-TEXT FONT 
                                                SHOW-UNSAVED-ATTRIBUTES TABLE-OF-HIDDEN-ATTRIBUTES 
                                                COLOR DELETE GO-TO-MESSAGE-ORIGIN ENABLE DISABLE 
                                                DESCRIBE VIEW-CHANGE-LOG COMPILE-G2GL-PROCESS 
                                                CLEAN-UP-G2GL-COMPILATION-POSTINGS-ON-PROCESS 
                                                EXECUTE-G2GL-PROCESS DYNAMIC-RULE-INVOCATION-DISPLAY 
                                                DESCRIBE-CONFIGURATION MARK-TO-STRIP-TEXT 
                                                MARK-TO-STRIP-TEXT-* REMOVE-STRIP-TEXT-MARK 
                                                REMOVE-STRIP-TEXT-MARK-* MARK-NOT-TO-STRIP-TEXT-* 
                                                MARK-NOT-TO-STRIP-TEXT 
                                                REMOVE-DO-NOT-STRIP-TEXT-MARK-* 
                                                REMOVE-DO-NOT-STRIP-TEXT-MARK GO-TO-SUBWORKSPACE 
                                                CREATE-INSTANCE SET-TEMPORARY-BREAKPOINT 
                                                REMOVE-TEMPORARY-BREAKPOINT 
                                                ADD-STUB-FOR-LOCAL-HANDLER EDIT-ICON TABLE-OF-VALUES 
                                                NAME ROTATE-REFLECT CHANGE-SIZE 
                                                RESTORE-TO-NORMAL-SIZE DYNAMIC-BACKWARD-CHAINING 
                                                DESCRIBE-CHAINING DYNAMIC-GENERIC-RULE-DISPLAY 
                                                CREATE-SUBWORKSPACE EDIT-CELL-EXPRESSION 
                                                EDIT-CELL-FORMAT OTHER-EDITS ADD-ROW ADD-COLUMN 
                                                DELETE-ROW DELETE-COLUMN HIDE-NAME)
                                        Symbol)
                                    (Structure 
                                      MOUSE-TRACKING-PROCEDURE-NAME Symbol
                                      MOUSE-TRACKING-APPLICABLE-ITEMS
                                        (Sequence Symbol 1)
                                      MOUSE-MOTION-TRACKING? BooleanTruthValue))
                              APPLICABLE-ITEMS
                                (Sequence Symbol 1))
                            (Structure 
                              OPERATION-TYPE
                                (MEMBER MOVING)
                              TYPE-OF-REGION
                                (MEMBER RECTANGLE GRID)
                              CONSTRAINED-REGION
                                (OR (Structure 
                                      LEFT-EDGE Integer
                                      RIGHT-EDGE Integer
                                      TOP-EDGE Integer
                                      BOTTOM-EDGE Integer)
                                    (Structure 
                                      X-GRID-LENGTH Integer
                                      Y-GRID-LENGTH Integer))
                              APPLICABLE-ITEMS
                                (Sequence Symbol 1)))
                        1)))
                  1))
                (Sequence 
                  (OR (Structure 
                        OPERATION-TYPE
                          (MEMBER WORKSPACE-MENU ITEM-MENU NON-MENU)
                        RESTRICTION-TYPE
                          (MEMBER INCLUDE INCLUDE-ADDITIONALLY EXCLUDE EXCLUDE-ADDITIONALLY 
                                  EXCLUDE-ABSOLUTELY)
                        MENU-CHOICES
                          (Sequence Symbol 0)
                        APPLICABLE-ITEMS
                          (Sequence Symbol 1))
                      (Structure 
                        OPERATION-TYPE
                          (MEMBER TABLE-MENU)
                        RESTRICTION-TYPE
                          (MEMBER INCLUDE INCLUDE-ADDITIONALLY EXCLUDE EXCLUDE-ADDITIONALLY 
                                  EXCLUDE-ABSOLUTELY)
                        MENU-CHOICES
                          (Sequence 
                            (MEMBER SUBTABLE DELETE-SUBTABLE CHANGE-TO-NO CHANGE-TO-YES CHANGE-TO 
                                    SHOW-SUBTABLE-OF-UNSAVED-ATTRIBUTES ADD-OPTIONAL-SUBTABLE TABLE 
                                    CHOOSE-EXISTING-CLASS EDIT EDIT-ICON TRANSFER MOVE CLONE 
                                    SHOW-ATTRIBUTE-DISPLAY ADD-ANOTHER-ATTRIBUTE DELETE-ATTRIBUTE 
                                    ADD-NAME-OF-ATTRIBUTE DELETE-NAME-OF-ATTRIBUTE 
                                    HIDE-ATTRIBUTE-DISPLAY CHANGE-SIZE ENABLE DISABLE GO-TO-ORIGINAL 
                                    DELETE-ORIGINAL TRANSFER-ORIGINAL DESCRIBE-CONFIGURATION 
                                    DESCRIBE VIEW-CHANGE-LOG SHOW-VALUE SHOW-TEXT 
                                    SHOW-SUMMARY-OF-TEXT ADD-SUBTABLE SUBTABLES 
                                    DYNAMIC-BACKWARD-CHAINING DESCRIBE-CHAINING 
                                    DYNAMIC-GENERIC-RULE-DISPLAY HIDE DELETE HIDE-TABLE 
                                    MARK-TO-STRIP-TEXT MARK-TO-STRIP-TEXT-* REMOVE-STRIP-TEXT-MARK 
                                    REMOVE-STRIP-TEXT-MARK-* MARK-NOT-TO-STRIP-TEXT-* 
                                    MARK-NOT-TO-STRIP-TEXT REMOVE-DO-NOT-STRIP-TEXT-MARK-* 
                                    REMOVE-DO-NOT-STRIP-TEXT-MARK)
                            0))
                        APPLICABLE-ATTRIBUTES
                          (Sequence Symbol 0)
                        APPLICABLE-ITEMS
                          (Sequence Symbol 1))
                      (Structure 
                        OPERATION-TYPE
                          (MEMBER ATTRIBUTE-VISIBILITY)
                        RESTRICTION-TYPE
                          (MEMBER INCLUDE INCLUDE-ADDITIONALLY EXCLUDE EXCLUDE-ADDITIONALLY 
                                  EXCLUDE-ABSOLUTELY)
                        ATTRIBUTES
                          (Sequence Symbol 0)
                        APPLICABLE-ITEMS
                          (Sequence Symbol 1))
                      (Structure 
                        OPERATION-TYPE
                          (MEMBER PRESSING RELEASING CLICKING)
                        KEY-CODE
                          (Structure 
                            MODIFIERS Integer
                            MOUSE-BUTTON
                              (MEMBER ANY LEFT MIDDLE RIGHT))
                        CONSEQUENT-ACTION
                          (OR (OR (MEMBER LIFT-TO-TOP DROP-TO-BOTTOM GO-TO-REFERENCED-ITEM 
                                          CLONE-AS-TREND-CHART TABLE EDIT TRANSFER MOVE CLONE 
                                          CHANGE-MIN-SIZE ALIGN-TEXT FONT SHOW-UNSAVED-ATTRIBUTES 
                                          TABLE-OF-HIDDEN-ATTRIBUTES COLOR DELETE 
                                          GO-TO-MESSAGE-ORIGIN ENABLE DISABLE DESCRIBE 
                                          VIEW-CHANGE-LOG COMPILE-G2GL-PROCESS 
                                          CLEAN-UP-G2GL-COMPILATION-POSTINGS-ON-PROCESS 
                                          EXECUTE-G2GL-PROCESS DYNAMIC-RULE-INVOCATION-DISPLAY 
                                          DESCRIBE-CONFIGURATION MARK-TO-STRIP-TEXT 
                                          MARK-TO-STRIP-TEXT-* REMOVE-STRIP-TEXT-MARK 
                                          REMOVE-STRIP-TEXT-MARK-* MARK-NOT-TO-STRIP-TEXT-* 
                                          MARK-NOT-TO-STRIP-TEXT REMOVE-DO-NOT-STRIP-TEXT-MARK-* 
                                          REMOVE-DO-NOT-STRIP-TEXT-MARK GO-TO-SUBWORKSPACE 
                                          CREATE-INSTANCE SET-TEMPORARY-BREAKPOINT 
                                          REMOVE-TEMPORARY-BREAKPOINT ADD-STUB-FOR-LOCAL-HANDLER 
                                          EDIT-ICON TABLE-OF-VALUES NAME ROTATE-REFLECT CHANGE-SIZE 
                                          RESTORE-TO-NORMAL-SIZE DYNAMIC-BACKWARD-CHAINING 
                                          DESCRIBE-CHAINING DYNAMIC-GENERIC-RULE-DISPLAY 
                                          CREATE-SUBWORKSPACE EDIT-CELL-EXPRESSION EDIT-CELL-FORMAT 
                                          OTHER-EDITS ADD-ROW ADD-COLUMN DELETE-ROW DELETE-COLUMN 
                                          HIDE-NAME)
                                  Symbol)
                              (Structure 
                                MOUSE-TRACKING-PROCEDURE-NAME Symbol
                                MOUSE-TRACKING-APPLICABLE-ITEMS
                                  (Sequence Symbol 1)
                                MOUSE-MOTION-TRACKING? BooleanTruthValue))
                        APPLICABLE-ITEMS
                          (Sequence Symbol 1))
                      (Structure 
                        OPERATION-TYPE
                          (MEMBER TYPING HOVERING)
                        KEY-CODE
                          (Structure 
                            MODIFIERS Integer
                            KEYBOARD-SYMBOL
                              (MEMBER F1 F2 F3 F4 F5 F6 F7 F8 F9 F10 F11 F12 BACKSPACE TAB LINEFEED 
                                      RETURN ESCAPE 0 1 2 3 4 5 6 7 8 9 : ; < = > ? A B C D E F G H 
                                      I J K L M N O P Q R S T U V W X Y Z [ ] ^ _ ` { | } SPACE ! " 
                                      # $ % & ' ( ) * + , - . / DELETE MOUSE-WHEEL-FORWARD 
                                      MOUSE-WHEEL-BACKWARD MOUSE-HOVER BREAK ENTER HELP INSERT REDO 
                                      MENU FIND HOME BEGIN END PAUSE SELECT PRINT EXECUTE ABORT 
                                      CLEAR-SCREEN UP-ARROW DOWN-ARROW LEFT-ARROW RIGHT-ARROW 
                                      PREVIOUS-SCREEN NEXT-SCREEN))
                        CONSEQUENT-ACTION
                          (OR (OR (MEMBER LIFT-TO-TOP DROP-TO-BOTTOM GO-TO-REFERENCED-ITEM 
                                          CLONE-AS-TREND-CHART TABLE EDIT TRANSFER MOVE CLONE 
                                          CHANGE-MIN-SIZE ALIGN-TEXT FONT SHOW-UNSAVED-ATTRIBUTES 
                                          TABLE-OF-HIDDEN-ATTRIBUTES COLOR DELETE 
                                          GO-TO-MESSAGE-ORIGIN ENABLE DISABLE DESCRIBE 
                                          VIEW-CHANGE-LOG COMPILE-G2GL-PROCESS 
                                          CLEAN-UP-G2GL-COMPILATION-POSTINGS-ON-PROCESS 
                                          EXECUTE-G2GL-PROCESS DYNAMIC-RULE-INVOCATION-DISPLAY 
                                          DESCRIBE-CONFIGURATION MARK-TO-STRIP-TEXT 
                                          MARK-TO-STRIP-TEXT-* REMOVE-STRIP-TEXT-MARK 
                                          REMOVE-STRIP-TEXT-MARK-* MARK-NOT-TO-STRIP-TEXT-* 
                                          MARK-NOT-TO-STRIP-TEXT REMOVE-DO-NOT-STRIP-TEXT-MARK-* 
                                          REMOVE-DO-NOT-STRIP-TEXT-MARK GO-TO-SUBWORKSPACE 
                                          CREATE-INSTANCE SET-TEMPORARY-BREAKPOINT 
                                          REMOVE-TEMPORARY-BREAKPOINT ADD-STUB-FOR-LOCAL-HANDLER 
                                          EDIT-ICON TABLE-OF-VALUES NAME ROTATE-REFLECT CHANGE-SIZE 
                                          RESTORE-TO-NORMAL-SIZE DYNAMIC-BACKWARD-CHAINING 
                                          DESCRIBE-CHAINING DYNAMIC-GENERIC-RULE-DISPLAY 
                                          CREATE-SUBWORKSPACE EDIT-CELL-EXPRESSION EDIT-CELL-FORMAT 
                                          OTHER-EDITS ADD-ROW ADD-COLUMN DELETE-ROW DELETE-COLUMN 
                                          HIDE-NAME)
                                  Symbol)
                              (Structure 
                                MOUSE-TRACKING-PROCEDURE-NAME Symbol
                                MOUSE-TRACKING-APPLICABLE-ITEMS
                                  (Sequence Symbol 1)
                                MOUSE-MOTION-TRACKING? BooleanTruthValue))
                        APPLICABLE-ITEMS
                          (Sequence Symbol 1))
                      (Structure 
                        OPERATION-TYPE
                          (MEMBER SELECTING SELECTING-ABSOLUTELY)
                        CONSEQUENT-ACTION
                          (OR (OR (MEMBER LIFT-TO-TOP DROP-TO-BOTTOM GO-TO-REFERENCED-ITEM 
                                          CLONE-AS-TREND-CHART TABLE EDIT TRANSFER MOVE CLONE 
                                          CHANGE-MIN-SIZE ALIGN-TEXT FONT SHOW-UNSAVED-ATTRIBUTES 
                                          TABLE-OF-HIDDEN-ATTRIBUTES COLOR DELETE 
                                          GO-TO-MESSAGE-ORIGIN ENABLE DISABLE DESCRIBE 
                                          VIEW-CHANGE-LOG COMPILE-G2GL-PROCESS 
                                          CLEAN-UP-G2GL-COMPILATION-POSTINGS-ON-PROCESS 
                                          EXECUTE-G2GL-PROCESS DYNAMIC-RULE-INVOCATION-DISPLAY 
                                          DESCRIBE-CONFIGURATION MARK-TO-STRIP-TEXT 
                                          MARK-TO-STRIP-TEXT-* REMOVE-STRIP-TEXT-MARK 
                                          REMOVE-STRIP-TEXT-MARK-* MARK-NOT-TO-STRIP-TEXT-* 
                                          MARK-NOT-TO-STRIP-TEXT REMOVE-DO-NOT-STRIP-TEXT-MARK-* 
                                          REMOVE-DO-NOT-STRIP-TEXT-MARK GO-TO-SUBWORKSPACE 
                                          CREATE-INSTANCE SET-TEMPORARY-BREAKPOINT 
                                          REMOVE-TEMPORARY-BREAKPOINT ADD-STUB-FOR-LOCAL-HANDLER 
                                          EDIT-ICON TABLE-OF-VALUES NAME ROTATE-REFLECT CHANGE-SIZE 
                                          RESTORE-TO-NORMAL-SIZE DYNAMIC-BACKWARD-CHAINING 
                                          DESCRIBE-CHAINING DYNAMIC-GENERIC-RULE-DISPLAY 
                                          CREATE-SUBWORKSPACE EDIT-CELL-EXPRESSION EDIT-CELL-FORMAT 
                                          OTHER-EDITS ADD-ROW ADD-COLUMN DELETE-ROW DELETE-COLUMN 
                                          HIDE-NAME)
                                  Symbol)
                              (Structure 
                                MOUSE-TRACKING-PROCEDURE-NAME Symbol
                                MOUSE-TRACKING-APPLICABLE-ITEMS
                                  (Sequence Symbol 1)
                                MOUSE-MOTION-TRACKING? BooleanTruthValue))
                        APPLICABLE-ITEMS
                          (Sequence Symbol 1))
                      (Structure 
                        OPERATION-TYPE
                          (MEMBER MOVING)
                        TYPE-OF-REGION
                          (MEMBER RECTANGLE GRID)
                        CONSTRAINED-REGION
                          (OR (Structure 
                                LEFT-EDGE Integer
                                RIGHT-EDGE Integer
                                TOP-EDGE Integer
                                BOTTOM-EDGE Integer)
                              (Structure 
                                X-GRID-LENGTH Integer
                                Y-GRID-LENGTH Integer))
                        APPLICABLE-ITEMS
                          (Sequence Symbol 1)))
                  1))
                (Sequence 
                  (Structure 
                    RESTRICTION-TYPE
                      (MEMBER ALLOW PROHIBIT PROHIBIT-ABSOLUTELY)
                    ACCESS-TYPES
                      (Sequence 
                        (MEMBER EXECUTE CONNECT INFORM READ WRITE)
                        1))
                    ACCESS-AGENT
                      (MEMBER ANY G2 GSI G2-AND-GSI G2-AND-TELEWINDOWS G2-AND-TELEWINDOWS-AND-GSI 
                              TELEWINDOWS-AND-GSI)
                    APPLICABLE-ITEMS
                      (Sequence Symbol 1))
                  1))
                (Structure 
                  DECLARED-PROPERTIES
                    (Structure 
                      INDEPENDENT-FOR-ALL-COMPILATIONS BooleanTruthValue
                      STABLE-FOR-DEPENDENT-COMPILATIONS BooleanTruthValue
                      STABLE-HIERARCHY BooleanTruthValue
                      MANUAL-CONNECTIONS BooleanTruthValue
                      OPTIMIZABLE BooleanTruthValue
                      INLINEABLE BooleanTruthValue
                      ACTIVATABLE-SUBWORKSPACE BooleanTruthValue
                      EXTERNAL-SIMULATION BooleanTruthValue
                      SUBWORKSPACE-CONNECTION-POSTS BooleanTruthValue)
                  APPLICABLE-ITEMS
                    (Sequence Symbol 1))
                (Sequence 
                  (Structure 
                    TAG-NAME Symbol
                    ASSOCIATED-TEXT Text)
                  1))))
        1)))
   *
   */
  public com.gensym.util.Sequence getInstanceConfigurationForClass() throws G2AccessException;

  /**
   * Generated Property Setter for attribute -- INSTANCE-CONFIGURATION
   * @param instanceConfiguration new value to conclude for INSTANCE-CONFIGURATION
   * @exception G2AccessException if there are any communication problems
   *              or the value does not match with the type specification
   */
  public void setInstanceConfigurationForClass(com.gensym.util.Sequence instanceConfiguration) throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- CHANGE
   * @return the value of the CHANGE attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Attribute CHANGE has no type
   *
   */
  public java.lang.Object getChangeForClass() throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- CLASS-INHERITANCE-PATH
   * @return the value of the CLASS-INHERITANCE-PATH attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for CLASS-INHERITANCE-PATH is : 
   * (OR NoItem
      (Sequence Symbol 1))
   *
   */
  public com.gensym.util.Sequence getClassInheritancePathForClass() throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- INHERITED-ATTRIBUTES
   * @return the value of the INHERITED-ATTRIBUTES attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for INHERITED-ATTRIBUTES is : 
   * (OR NoItem
      (Sequence 
        (Structure 
          ATTRIBUTE-NAME Symbol
          ATTRIBUTE-TYPE-SPECIFICATION Symbol
          ATTRIBUTE-INITIAL-VALUE Value
          ATTRIBUTE-INITIAL-ITEM-CLASS Symbol
          ATTRIBUTE-INITIAL-TYPE Symbol
          ATTRIBUTE-RANGE
            (Sequence Symbol 1)
          ATTRIBUTE-IS-INDEXED BooleanTruthValue)
        1)))
   *
   */
  public com.gensym.util.Sequence getInheritedAttributesForClass() throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- INITIALIZABLE-SYSTEM-ATTRIBUTES
   * @return the value of the INITIALIZABLE-SYSTEM-ATTRIBUTES attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for INITIALIZABLE-SYSTEM-ATTRIBUTES is : 
   * (OR NoItem
      (Sequence Symbol 1))
   *
   */
  public com.gensym.util.Sequence getInitializableSystemAttributesForClass() throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- ATTRIBUTE-INITIALIZATIONS
   * @return the value of the ATTRIBUTE-INITIALIZATIONS attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Type Specification for ATTRIBUTE-INITIALIZATIONS is : 
   * (OR NoItem
      (Sequence 
        (OR (Structure 
              USER-ATTRIBUTE-NAME Symbol
              INITIALIZATION
                (Structure 
                  INITIAL-VALUE Value
                  INITIAL-ITEM-CLASS Symbol
                  INITIAL-TYPE Symbol))
            (Structure 
              SYSTEM-ATTRIBUTE-DESIGNATION Symbol
              INITIALIZATION
                (OR (MEMBER LINE-CHART-STYLE COLUMN-CHART-STYLE SCATTER-CHART-STYLE)
                    (Structure 
                      NUMBER-OF-COLUMNS Integer
                      NUMBER-OF-ROWS Integer)
                    (OR NoItem
                        (Structure 
                          BACKGROUND-COLOR
                            (MEMBER FOREGROUND BACKGROUND TRANSPARENT AQUAMARINE BLACK BLUE BROWN 
                                    CADET-BLUE CORAL CYAN DARK-GRAY DARK-SLATE-BLUE DIM-GRAY 
                                    FOREST-GREEN GOLD GOLDENROD GRAY GREEN GREEN-YELLOW INDIAN-RED 
                                    KHAKI LIGHT-BLUE LIGHT-GRAY LIME-GREEN MAGENTA MAROON 
                                    MEDIUM-AQUAMARINE MEDIUM-BLUE MEDIUM-GOLDENROD MEDIUM-ORCHID 
                                    ORANGE PALE-GREEN PINK PLUM PURPLE RED SALMON SIENNA SKY-BLUE 
                                    SLATE-BLUE TAN THISTLE TURQUOISE VIOLET VIOLET-RED WHEAT WHITE 
                                    YELLOW SMOKE FLORAL-WHITE LINEN ANTIQUE-WHITE IVORY AZURE 
                                    LAVENDER LIGHT-STEEL-BLUE POWDER-BLUE PALE-TURQUOISE LIGHT-CYAN 
                                    PALE-GOLDENROD LIGHT-GOLDENROD-YELLOW LIGHT-YELLOW 
                                    LIGHT-GOLDENROD BEIGE LIGHT-PINK EXTRA-LIGHT-GRAY)
                          LINE-COLOR
                            (MEMBER FOREGROUND BACKGROUND TRANSPARENT AQUAMARINE BLACK BLUE BROWN 
                                    CADET-BLUE CORAL CYAN DARK-GRAY DARK-SLATE-BLUE DIM-GRAY 
                                    FOREST-GREEN GOLD GOLDENROD GRAY GREEN GREEN-YELLOW INDIAN-RED 
                                    KHAKI LIGHT-BLUE LIGHT-GRAY LIME-GREEN MAGENTA MAROON 
                                    MEDIUM-AQUAMARINE MEDIUM-BLUE MEDIUM-GOLDENROD MEDIUM-ORCHID 
                                    ORANGE PALE-GREEN PINK PLUM PURPLE RED SALMON SIENNA SKY-BLUE 
                                    SLATE-BLUE TAN THISTLE TURQUOISE VIOLET VIOLET-RED WHEAT WHITE 
                                    YELLOW SMOKE FLORAL-WHITE LINEN ANTIQUE-WHITE IVORY AZURE 
                                    LAVENDER LIGHT-STEEL-BLUE POWDER-BLUE PALE-TURQUOISE LIGHT-CYAN 
                                    PALE-GOLDENROD LIGHT-GOLDENROD-YELLOW LIGHT-YELLOW 
                                    LIGHT-GOLDENROD BEIGE LIGHT-PINK EXTRA-LIGHT-GRAY)
                          BORDER-COLOR
                            (MEMBER FOREGROUND BACKGROUND TRANSPARENT AQUAMARINE BLACK BLUE BROWN 
                                    CADET-BLUE CORAL CYAN DARK-GRAY DARK-SLATE-BLUE DIM-GRAY 
                                    FOREST-GREEN GOLD GOLDENROD GRAY GREEN GREEN-YELLOW INDIAN-RED 
                                    KHAKI LIGHT-BLUE LIGHT-GRAY LIME-GREEN MAGENTA MAROON 
                                    MEDIUM-AQUAMARINE MEDIUM-BLUE MEDIUM-GOLDENROD MEDIUM-ORCHID 
                                    ORANGE PALE-GREEN PINK PLUM PURPLE RED SALMON SIENNA SKY-BLUE 
                                    SLATE-BLUE TAN THISTLE TURQUOISE VIOLET VIOLET-RED WHEAT WHITE 
                                    YELLOW SMOKE FLORAL-WHITE LINEN ANTIQUE-WHITE IVORY AZURE 
                                    LAVENDER LIGHT-STEEL-BLUE POWDER-BLUE PALE-TURQUOISE LIGHT-CYAN 
                                    PALE-GOLDENROD LIGHT-GOLDENROD-YELLOW LIGHT-YELLOW 
                                    LIGHT-GOLDENROD BEIGE LIGHT-PINK EXTRA-LIGHT-GRAY)
                          TEXT-COLOR
                            (MEMBER FOREGROUND BACKGROUND TRANSPARENT AQUAMARINE BLACK BLUE BROWN 
                                    CADET-BLUE CORAL CYAN DARK-GRAY DARK-SLATE-BLUE DIM-GRAY 
                                    FOREST-GREEN GOLD GOLDENROD GRAY GREEN GREEN-YELLOW INDIAN-RED 
                                    KHAKI LIGHT-BLUE LIGHT-GRAY LIME-GREEN MAGENTA MAROON 
                                    MEDIUM-AQUAMARINE MEDIUM-BLUE MEDIUM-GOLDENROD MEDIUM-ORCHID 
                                    ORANGE PALE-GREEN PINK PLUM PURPLE RED SALMON SIENNA SKY-BLUE 
                                    SLATE-BLUE TAN THISTLE TURQUOISE VIOLET VIOLET-RED WHEAT WHITE 
                                    YELLOW SMOKE FLORAL-WHITE LINEN ANTIQUE-WHITE IVORY AZURE 
                                    LAVENDER LIGHT-STEEL-BLUE POWDER-BLUE PALE-TURQUOISE LIGHT-CYAN 
                                    PALE-GOLDENROD LIGHT-GOLDENROD-YELLOW LIGHT-YELLOW 
                                    LIGHT-GOLDENROD BEIGE LIGHT-PINK EXTRA-LIGHT-GRAY)
                          TEXT-ALIGNMENT
                            (MEMBER LEFT CENTER RIGHT)
                          TEXT-SIZE
                            (MEMBER SMALL LARGE EXTRA-LARGE)
                          WIDTH Integer
                          HEIGHT Integer))
                    (OR NoItem
                        (Structure 
                          PRIORITY
                            (MEMBER 1 2 3 4 5 6 7 8 9 10)
                          SCAN-INTERVAL Quantity
                          INITIAL-SCAN-WAIT-INTERVAL Quantity
                          VALUE-DOMAIN
                            (MEMBER INFERENCE-ENGINE G2-SIMULATOR)
                          UPDATE-ONLY-WHEN-SHOWN BooleanTruthValue
                          TRACE-MESSAGE-LEVEL
                            (MEMBER 0 1 2 3)
                          WARNING-MESSAGE-LEVEL
                            (MEMBER 0 1 2 3)
                          BREAK-MESSAGE-LEVEL
                            (MEMBER 0 1 2 3)
                          TIME-OUT-WHEN-REQUESTING-DATA-SEEKING Integer
                          MAY-REQUEST-EVENT-UPDATES BooleanTruthValue
                          MAY-REQUEST-DATA-SEEKING BooleanTruthValue
                          MAY-PROVIDE-DATA-ON-REQUEST BooleanTruthValue
                          MAY-PROVIDE-EVENT-UPDATES BooleanTruthValue))
                    (OR NoItem
                        Symbol)
                    (MEMBER ONE-TO-ONE ONE-TO-MANY MANY-TO-ONE MANY-TO-MANY)
                    BooleanTruthValue
                    (OR NoItem
                        (Sequence 
                          (Structure 
                            COLOR Symbol
                            WIDTH Integer)
                          1)))
                    (OR NoItem
                        (Sequence Symbol 1))
                    (OR NoItem
                        (Sequence ItemOrValue 1)
                        (Structure 
                          VALUES
                            (Sequence 
                              (OR ItemOrValue
                                  NoItem)
                              1))
                          ITEMS
                            (Sequence 
                              (OR Value
                                  NoItem)
                              1))))
                    (OR NoItem
                        Quantity)
                    (OR NoItem
                        (Sequence Symbol 1))
                    (OR NoItem
                        (Sequence Symbol 1))
                    (OR (MEMBER DEFAULT INTERVAL TIME-STAMP FREE-TEXT)
                        (Structure 
                          WHOLE-NUMBER-PRECISION Integer
                          FRACTION-PRECISION Integer))
                    (MEMBER ONLY-WHILE-SLIDING ALWAYS NEVER)
                    (OR NoItem
                        (Sequence Symbol 1))
                    (OR NoItem
                        (Sequence 
                          (OR Symbol
                              (Structure 
                                CLASS Symbol
                                CLASS-IDENTIFYING-ATTRIBUTES
                                  (Sequence 
                                    (OR Symbol
                                        (Structure 
                                          ATTRIBUTE Symbol
                                          NAME-FOR-NETWORK Symbol))
                                    1))))
                          1)))
                    (OR NoItem
                        Integer
                        (MEMBER WHEN-VARIABLES-RECEIVE-VALUES WHEN-ACTIVATED 
                                WHEN-ACTIVATED-WITHOUT-INTERRUPTION))
                    (MEMBER EXPLICIT-TIME-STAMP RELATIVE-TIME-STAMP)
                    (OR NoItem
                        (MEMBER EVENT-LOG SPREADSHEET))
                    (OR NoItem
                        (MEMBER ASYNCHRONOUS-INPUT ASYNCHRONOUS-INPUT-IGNORING-THE-DATA-SERVER 
                                INPUT-ON-REQUEST-PRESERVING-TIME-STAMPS 
                                INPUT-ON-REQUEST-SAMPLE-AND-HOLD INPUT-WHEN-ACTIVATED 
                                INPUT-WHEN-ACTIVATED-WITHOUT-INTERRUPTION))
                    (OR NoItem
                        Symbol)
                    (Sequence Value 1)
                    (OR NoItem
                        (Sequence (Class ITEM) 1)
                        (Sequence Value 1))
                    (Sequence Quantity 1)
                    (Sequence Integer 1)
                    (Sequence Float 1)
                    (Sequence Symbol 1)
                    (Sequence Text 1)
                    (Sequence BooleanTruthValue 1)
                    Quantity
                    Quantity
                    Quantity
                    (OR (MEMBER DEFAULT INTERVAL TIME-STAMP FREE-TEXT)
                        Symbol
                        (Structure 
                          WHOLE-NUMBER-PRECISION Integer
                          FRACTION-PRECISION Integer))
                    (OR NoItem
                        (MEMBER USE-DEFAULT)
                        Integer)
                    (MEMBER 1 2 3 4 5 6 7 8 9 10)
                    (OR NoItem
                        (MEMBER PROCEDURE-INVOCATION)
                        Symbol)
                    (OR (MEMBER DEFAULT)
                        (Structure 
                          WARNING-MESSAGE-LEVEL
                            (MEMBER 0 1 2 3)
                          TRACING-MESSAGE-LEVEL
                            (MEMBER 0 1 2 3)
                          BREAKPOINT-LEVEL
                            (MEMBER 0 1 2 3)
                          SOURCE-STEPPING-LEVEL
                            (MEMBER 0 1)))
                    (OR NoItem
                        (Sequence 
                          (Structure 
                            REGION
                              (MEMBER BORDER-COLOR BACKGROUND-COLOR TEXT-COLOR)
                            COLOR
                              (MEMBER FOREGROUND BACKGROUND TRANSPARENT AQUAMARINE BLACK BLUE BROWN 
                                      CADET-BLUE CORAL CYAN DARK-GRAY DARK-SLATE-BLUE DIM-GRAY 
                                      FOREST-GREEN GOLD GOLDENROD GRAY GREEN GREEN-YELLOW INDIAN-RED 
                                      KHAKI LIGHT-BLUE LIGHT-GRAY LIME-GREEN MAGENTA MAROON 
                                      MEDIUM-AQUAMARINE MEDIUM-BLUE MEDIUM-GOLDENROD MEDIUM-ORCHID 
                                      ORANGE PALE-GREEN PINK PLUM PURPLE RED SALMON SIENNA SKY-BLUE 
                                      SLATE-BLUE TAN THISTLE TURQUOISE VIOLET VIOLET-RED WHEAT WHITE 
                                      YELLOW SMOKE FLORAL-WHITE LINEN ANTIQUE-WHITE IVORY AZURE 
                                      LAVENDER LIGHT-STEEL-BLUE POWDER-BLUE PALE-TURQUOISE 
                                      LIGHT-CYAN PALE-GOLDENROD LIGHT-GOLDENROD-YELLOW LIGHT-YELLOW 
                                      LIGHT-GOLDENROD BEIGE LIGHT-PINK EXTRA-LIGHT-GRAY))
                          1)))
                    (OR NoItem
                        (Structure 
                          MESSAGE-TEXT-COLOR
                            (OR NoItem
                                Symbol)
                          MESSAGE-BACKGROUND-COLOR
                            (OR NoItem
                                Symbol)
                          MESSAGE-BORDER-COLOR
                            (OR NoItem
                                Symbol)
                          MESSAGE-MINIMUM-WIDTH
                            (OR NoItem
                                Integer)
                          MESSAGE-MINIMUM-HEIGHT
                            (OR NoItem
                                Integer)
                          MESSAGE-FONT
                            (OR NoItem
                                (MEMBER SMALL LARGE EXTRA-LARGE))
                          MESSAGE-TEXT-ALIGNMENT
                            (OR NoItem
                                (MEMBER LEFT CENTER RIGHT))))
                    (OR NoItem
                        Symbol)
                    (OR NoItem
                        Symbol)
                    Integer
                    Symbol
                    (OR NoItem
                        Integer)
                    (OR NoItem
                        (MEMBER INHERITED)
                        (Sequence 
                          (Structure 
                            PORTNAME Symbol
                            CONNECTION-CLASS Symbol
                            STUB-DIRECTION
                              (MEMBER INPUT OUTPUT)
                            EDGE-LOCATION
                              (MEMBER TOP BOTTOM RIGHT LEFT)
                            COORDINATE-LOCATION Integer
                            STYLE
                              (MEMBER DIAGONAL ORTHOGONAL)
                            CONNECTION-ARROWS
                              (OR NoItem
                                  (MEMBER DEFAULT NONE ARROW TRIANGLE DIAMOND CIRCLE)
                                  (Sequence 
                                    (Structure 
                                      SHAPE
                                        (MEMBER ARROW TRIANGLE DIAMOND CIRCLE)
                                      FILLED BooleanTruthValue
                                      SCALE Float
                                      ASPECT-RATIO Float
                                      LINE-WEIGHT Float
                                      PLACEMENT
                                        (MEMBER DEFAULT OUTPUT INPUT BOTH)))))
                            LINE-PATTERN
                              (OR NoItem
                                  (MEMBER SOLID DASH DOT LONG-DASH SHORT-DASH COARSE-DOT FINE-DOT)
                                  (Sequence Symbol 1)
                                  (Sequence Integer 1)
                                  (Structure 
                                    PATTERN
                                      (Sequence Integer 1)
                                    NOT-SCALED-BY-LINE-WIDTH BooleanTruthValue)))
                          1)))
                    (OR NoItem
                        (MEMBER INHERITED)
                        (Sequence 
                          (Structure 
                            ATTRIBUTE-LIST
                              (Sequence 
                                (Structure 
                                  ATTRIBUTE Symbol
                                  QUALIFIED-CLASS Symbol
                                  DISPLAY-WITH-NAME BooleanTruthValue)
                                1))
                            POSITION
                              (OR (MEMBER AT-STANDARD-POSITION)
                                  (Structure 
                                    X-OFFSET Integer
                                    Y-OFFSET Integer)))
                          1)))
                    (OR NoItem
                        Symbol
                        BooleanTruthValue
                        Quantity
                        Text
                        (Sequence)
                        (Structure))
                    Integer
                    (OR NoItem
                        Symbol)
                    (OR NoItem
                        BooleanTruthValue)
                    (OR NoItem
                        Quantity)
                    (OR NoItem
                        Float)
                    (OR NoItem
                        Integer)
                    (OR NoItem
                        Symbol)
                    (OR NoItem
                        Text)
                    (OR Quantity
                        NoItem)
                    (Structure 
                      FORWARD-CHAIN BooleanTruthValue
                      FORWARD-CHAIN-EVEN-FOR-SAME-VALUE BooleanTruthValue
                      BACKWARD-CHAIN
                        (MEMBER BREADTH-FIRST DEPTH-FIRST DO-NOT-BACKWARD-CHAIN DO-NOT-SEEK-DATA)
                      EXPLANATION-DATA BooleanTruthValue)
                    (Structure 
                      FORWARD-CHAIN BooleanTruthValue
                      FORWARD-CHAIN-EVEN-FOR-SAME-VALUE BooleanTruthValue
                      EXPLANATION-DATA BooleanTruthValue)
                    (OR (MEMBER SUPPLIED INDEFINITE)
                        Integer)
                    (OR NoItem
                        (Structure 
                          CROSS-SECTION-REGIONS
                            (Sequence 
                              (Structure 
                                REGION-NAME Symbol
                                REGION-COLOR
                                  (MEMBER FOREGROUND BACKGROUND TRANSPARENT AQUAMARINE BLACK BLUE 
                                          BROWN CADET-BLUE CORAL CYAN DARK-GRAY DARK-SLATE-BLUE 
                                          DIM-GRAY FOREST-GREEN GOLD GOLDENROD GRAY GREEN 
                                          GREEN-YELLOW INDIAN-RED KHAKI LIGHT-BLUE LIGHT-GRAY 
                                          LIME-GREEN MAGENTA MAROON MEDIUM-AQUAMARINE MEDIUM-BLUE 
                                          MEDIUM-GOLDENROD MEDIUM-ORCHID ORANGE PALE-GREEN PINK PLUM 
                                          PURPLE RED SALMON SIENNA SKY-BLUE SLATE-BLUE TAN THISTLE 
                                          TURQUOISE VIOLET VIOLET-RED WHEAT WHITE YELLOW SMOKE 
                                          FLORAL-WHITE LINEN ANTIQUE-WHITE IVORY AZURE LAVENDER 
                                          LIGHT-STEEL-BLUE POWDER-BLUE PALE-TURQUOISE LIGHT-CYAN 
                                          PALE-GOLDENROD LIGHT-GOLDENROD-YELLOW LIGHT-YELLOW 
                                          LIGHT-GOLDENROD BEIGE LIGHT-PINK EXTRA-LIGHT-GRAY))
                              1))
                          CROSS-SECTION-STRIPES
                            (Sequence 
                              (Structure 
                                REGION-NAME Symbol
                                REGION-SIZE Integer)
                              1))))
                    (OR Symbol
                        Quantity)
                    (OR NoItem
                        Symbol)
                    BooleanTruthValue
                    (OR NoItem
                        Quantity)
                    BooleanTruthValue
                    (OR (OR (MEMBER QUANTITY)
                            (OR (MEMBER FLOAT TIME-STAMP)
                                Symbol)
                            (OR (MEMBER INTEGER INTERVAL)
                                Symbol))
                        (MEMBER VALUE SYMBOL TEXT TRUTH-VALUE))
                    (OR (MEMBER QUANTITY)
                        (OR (MEMBER FLOAT TIME-STAMP)
                            Symbol)
                        (OR (MEMBER INTEGER INTERVAL)
                            Symbol))
                    (OR (MEMBER INFERENCE-ENGINE G2-SIMULATOR G2-METER GFI-DATA-SERVER 
                                GSI-DATA-SERVER G2-DATA-SERVER)
                        Symbol)
                    (OR NoItem
                        (Structure 
                          MAXIMUM-NUMBER-OF-DATA-POINTS Integer
                          MAXIMUM-AGE-OF-DATA-POINTS Integer
                          MINIMUM-INTERVAL-BETWEEN-DATA-POINTS Quantity))
                    Symbol
                    (OR NoItem
                        Symbol)
                    (OR NoItem
                        Symbol)))))))
   *
   */
  public com.gensym.util.Sequence getAttributeInitializationsForClass() throws G2AccessException;

  /**
   * Generated Property Setter for attribute -- ATTRIBUTE-INITIALIZATIONS
   * @param attributeInitializations new value to conclude for ATTRIBUTE-INITIALIZATIONS
   * @exception G2AccessException if there are any communication problems
   *              or the value does not match with the type specification
   */
  public void setAttributeInitializationsForClass(com.gensym.util.Sequence attributeInitializations) throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- SUPERIOR-CLASS
   * @return the value of the SUPERIOR-CLASS attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Attribute SUPERIOR-CLASS has no type
   *
   */
  public java.lang.Object getSuperiorClassForClass() throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- CAPABILITIES-AND-RESTRICTIONS
   * @return the value of the CAPABILITIES-AND-RESTRICTIONS attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Attribute CAPABILITIES-AND-RESTRICTIONS has no type
   *
   */
  public java.lang.Object getCapabilitiesAndRestrictionsForClass() throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- ATTRIBUTES-SPECIFIC-TO-CLASS
   * @return the value of the ATTRIBUTES-SPECIFIC-TO-CLASS attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Attribute ATTRIBUTES-SPECIFIC-TO-CLASS has no type
   *
   */
  public java.lang.Object getAttributesSpecificToClassForClass() throws G2AccessException;

  /**
   * Generated Property Getter for attribute -- MENU-OPTION
   * @return the value of the MENU-OPTION attribute of this class
   * @exception G2AccessException if there are any communication problems
   *
   * Attribute MENU-OPTION has no type
   *
   */
  public java.lang.Object getMenuOptionForClass() throws G2AccessException;

}
