
package com.gensym.jdlg;

import java.awt.*;
import java.awt.event.*;
import com.gensym.dlg.CommandConstants;

/**
 * A Class that implements a multiple input edit dialog.
 * It creates a Dialog with one or more TextFields for
 * user input. The prompts for each
 * edit field and the initial values in each field are
 * passed in to the constructor. The results of the
 * editing session can be gathered by calling getResults
 * on the dialog after it is dismissed.<p>
 *
 * A simple usage of this dialog to determine range
 * bounds is shown below.
 * <p><blockquote><pre>
 *     InputDialog id = new InputDialog (currentFrame, "Bounds", true,
 *                                       new String[] {"Minimum", "Maximum"},
 *                                       new String[] {"0.0", "100.0"},
 *                                       null);
 *     id.setVisible (true);
 *     String[] bounds = id.getResults ();
 *     float minumum   = Float.valueOf (bounds[0]);
 *     float maximum   = Float.valueOf (bounds[1]);
 * </pre></blockquote>
 * @author vkp
 * @version 1.1 4/28/98 Added Javadoc
 *
 */
public class JInputDialog extends JStandardDialog implements CommandConstants {
  private MultiEditPanel mep;
  private int numEdits;
  private boolean wasCancelled = false;
  private int initialFocusIndex;
  private boolean keyListening;

  /**
   * The preferred constructor for this Class. In addition to
   * standard arguments like parent Frame, title, modality, and
   * the notification client, the labels for each edit field
   * prompt and their initial text values are required.
   * @param parent the parent Frame of the Dialog
   * @param title the text to present in the title bar
   * @param isModal whether the Dialog is modal or not
   * @param labels the text Strings for the prompts for each input
   * @param initialValues the initial contents of each input field
   * @param client a JStandardDialogClient that will be notified
   *    of all events generated on the Dialog. May be null if no
   *    notification is desired
   */
  public JInputDialog (Frame parent, String title, boolean isModal,
		      String[] labels, String[] initialValues,
		      JStandardDialogClient client) {
    super (parent, title, isModal,
	   new String[] {OK_LABEL, CANCEL_LABEL},
	   new int[] {OK, CANCEL},
           new MultiEditPanel (labels, initialValues), client);
    mep = (MultiEditPanel) getDialogComponent ();
    pack ();
  }

  /**
   * @deprecated
   */
  public JInputDialog (Frame parent, String title, boolean isModal,
			  String[] labels, String[] buttonLabels,
			  String[] initialValues,
			  JStandardDialogClient client) {

    super (parent, title, isModal, buttonLabels, new int[] {OK, CANCEL},
           new MultiEditPanel (labels, initialValues), client);
    mep = (MultiEditPanel) getDialogComponent ();
    pack ();
  }

  /**
   * The full featured constructor for this Class. In addition to
   * standard arguments like parent Frame, title, modality, and
   * the notification client, the labels for each edit field
   * prompt and their initial text values are required. This
   * constructor also allows subclasses to alter the number,
   * type and labels of the buttons on the Dialog.
   * @param parent the parent Frame of the Dialog
   * @param title the text to present in the title bar
   * @param isModal whether the Dialog is modal or not
   * @param labels the text Strings for the prompts for each input
   * @param initialValues the initial contents of each input field
   * @param buttonLabels the labels for the command buttons at the
   *    the bottom of the Dialog
   * @param cmdCodes the codes to be generated by the command buttons
   * @param client a JStandardDialogClient that will be notified
   *    of all events generated on the Dialog. May be null if no
   *    notification is desired
   */
  protected JInputDialog (Frame parent, String title, boolean isModal,
			 String[] labels,
			 String[] initialValues,
			 String[] buttonLabels,
			 int[] cmdCodes,
			 JStandardDialogClient client) {
    super (parent, title, isModal, buttonLabels, cmdCodes,
           new MultiEditPanel (labels, initialValues),
	   client);
    mep = (MultiEditPanel) getDialogComponent ();
    pack ();
  }

  @Override
  public void setDefaultButton (int code) {
    super.setDefaultButton (code);
    if (!keyListening) {
      mep.hookupKeyListener (getStandardKeyInterpreter ());
      keyListening = true;
    }
  }

  @Override
  public void setCancelButton (int code) {
    super.setCancelButton (code);
    if (!keyListening) {
      mep.hookupKeyListener (getStandardKeyInterpreter ());
      keyListening = true;
    }
  }


  /**
   * Sets the width of the input edit fields. This can be
   * used to change the initial width of the Dialog.
   * @param numCols the number of columns initially in
   *    each TextField
   */
  public void setInputFieldColumns (int numCols) {
    mep.setColumns (numCols);
    pack ();
  }


  /**
   * Sets a specific edit field to not echo the typed
   * characters. This can be used to implement a
   * password entry field.
   * @param editFieldIndex an index into the entries
   *    requested in the constructor.
   */
  public void setNoEcho (int editFieldIndex) {
    if (editFieldIndex >= mep.textControls.length)
      throw new IllegalArgumentException ("Index outside bounds " + editFieldIndex);
    mep.textControls[editFieldIndex].setEchoChar ('*');
  }

  public void setInitialFocus (int initFieldIndex) {
    if (initFieldIndex >= mep.textControls.length)
      throw new IllegalArgumentException ("Index outside bounds " + initFieldIndex);
    initialFocusIndex = initFieldIndex;
  }

  /**
   * Retrieves the results of the editing session.
   * It returns a array of Strings containing the
   * current values of the edit fields.
   * @return the current contents of the input fields
   */
  public String[] getResults () {
    int numEdits = mep.numEdits;
    TextField[] controls = mep.textControls;
    String[] results = new String[numEdits];
    for (int i=0; i<numEdits; i++)
      results[i] = controls[i].getText ();
    return results;
  }

  private boolean firstPaint = true;
  @Override
  public void paint (Graphics g) {
    super.paint (g);
    if (firstPaint) {
      if (initialFocusIndex > 0)
	mep.textControls[initialFocusIndex].requestFocus ();
      firstPaint = false;
    }
  }
}

class MultiEditPanel extends Panel {

  TextField[] textControls;
  private static final Insets stdInsets = new Insets (0, 10, 0, 10);
  int numEdits;

  void setColumns (int numCols) {
    for (int i=0; i<textControls.length; i++)
      textControls[i].setColumns (numCols);
  }

  private void createMultiEditPanel (String[] labels, String[] initialValues, int textFieldColumns){

    Insets firstLabelInsets = new Insets (10, 0, 5, 0);
    Insets labelInsets = new Insets (5, 0, 5, 0);
    Insets firstTextInsets = new Insets (10, 10, 5, 0);
    Insets textInsets = new Insets (5, 10, 5, 0);

    numEdits = labels.length;
    GridBagLayout gbl = new GridBagLayout ();
    GridBagConstraints gbc = new GridBagConstraints ();
    gbc.insets = new Insets (5, 0, 5, 0);
    gbc.anchor = GridBagConstraints.CENTER;
    gbc.weighty = 0.5;
    textControls = new TextField[numEdits];

    setLayout (gbl);
    for (int i=0; i<numEdits; i++) {
      if (i == 0)
	gbc.insets = firstLabelInsets;
      else
	gbc.insets = labelInsets;
      Label l = new Label (labels[i], Label.RIGHT);
      if (i == 0)
	gbc.insets = firstTextInsets;
      else
	gbc.insets = textInsets;
      TextField t = new AutoSelectingTextField (initialValues[i], textFieldColumns);

      int numChars = initialValues[i].length ();
      textControls[i] = t;

      // add Label
      gbc.gridwidth = 50;
      gbc.weightx = 0.0;
      gbc.fill = GridBagConstraints.NONE;
      gbc.anchor = GridBagConstraints.EAST;
      gbl.setConstraints (l, gbc);
      add (l);

      // add TextField
      gbc.weightx = 1.0;
      gbc.gridwidth = 200;
      gbc.gridwidth = GridBagConstraints.REMAINDER;
      gbc.fill = GridBagConstraints.HORIZONTAL;
      gbc.anchor = GridBagConstraints.WEST;
      gbl.setConstraints (t, gbc);
      add (t);
    }
  }

  public MultiEditPanel (String[] labels, String[] initialValues, int textFieldColumns) {
    createMultiEditPanel (labels, initialValues, textFieldColumns);
  }

  public MultiEditPanel (String[] labels, String[] initialValues) {
    createMultiEditPanel (labels, initialValues, 14);
  }

  @Override
  public Insets getInsets () {
    return stdInsets;
  }

  void hookupKeyListener (KeyListener kl) {
    for (int i=0; i<textControls.length; i++)
      textControls[i].addKeyListener (kl);
  }

}

class AutoSelectingTextField extends TextField {
  AutoSelectingTextField (String initialText, int numColumns) {
    super (initialText, numColumns);
    enableEvents (AWTEvent.FOCUS_EVENT_MASK);
  }
  @Override
  protected void processFocusEvent (java.awt.event.FocusEvent e) {
    if (!e.isTemporary ()) {
      if (e.getID() == FocusEvent.FOCUS_GAINED) {
	String currentText = getText ();
	select (0, currentText.length ());
      } else
	select (0, 0);
    }
  }

}
