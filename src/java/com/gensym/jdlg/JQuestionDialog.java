
package com.gensym.jdlg;

import java.awt.*;
import java.awt.event.*;

/**
 * Class for requesting simple feedback from the user.
 * It has an appropriate icon and buttons for this kind of usage.
 * Users can accept, decline or cancel the query.
 * Users should simply need to create a QuestionDialog and
 * display it: 
 * <p><blockquote><pre>
 *     QuestionDialog qd = new QuestionDialog (currentFrame, "Application Exit",
 *                             true, "Would you like to save changes before quitting?", null);
 *     qd.setVisible (true);
 * </pre></blockquote>
 * Applications could use this to bring situations like improper data entry
 * to the users attention.
 *
 * @author vkp
 * @version 1.1 4/28/98 added Javadoc
 *
 */ public class JQuestionDialog extends JIconDialog {

  private static Image img;
  private static final Class thisClass = com.gensym.dlg.QuestionDialog.class;

  static {
    img =  Toolkit.getDefaultToolkit ().getImage (thisClass.getResource ("question.gif"));
  }

  private JQuestionDialog (String  title,
			  boolean isModal,
			  String  message,
			  JStandardDialogClient client) {
    this (null, title, isModal, message, client);
  }

  /**
   * Creates a new QuestionDialog with the specified attributes.
   * An appropriate icon is used and 3 buttons are placed on the
   * dialog by default, allowing the user to answer in the
   * affirmative, negative, or cancel the dialog without answering.
   * @param frame the parent Frame
   * @param title the String to display in a title bar
   * @param isModal whether the dialog is modal
   * @param message a String containing the text of information that
   *    needs to be displayed to the user
   * @param client a JStandardDialogClient that is notified of all
   *    commands generated by buttons on the dialog
   */
  public JQuestionDialog (Frame   frame,
			 String  title,
			 boolean isModal,
			 String  message,
			 JStandardDialogClient client) {
    this (frame, title, isModal, message, img, client);
  }

  /**
   * Creates a custom QuestionDialog.
   * Subclasses can use this to override the default properties
   * like the number and type of buttons, and the Image that
   * is displayed
   * @param frame the parent Frame
   * @param title the String to display in a title bar
   * @param isModal whether the dialog is modal
   * @param message a String containing the text of information that
   *    needs to be displayed to the user
   * @param buttonLabels an array of String labels for the buttons
   *    at the bottom of the dialog
   * @param buttonCodes an array of codes for the buttons on the
   *    dialog
   * @param img the Image to be displayed along with the message
   *    text
   * @param client a JStandardDialogClient that is notified of all
   *   commands generated by buttons on the dialog
   */
   protected JQuestionDialog (Frame frame, String title, boolean isModal,
			    String[] buttonLabels, int[] buttonCodes,
			    String message, Image img, 
			    JStandardDialogClient client) {
    super (frame, title, isModal, buttonLabels, buttonCodes, 
	   message, (img != null ? img : JQuestionDialog.img),
	   message.indexOf ("\n") >= 0, client);
  }

  private JQuestionDialog (Frame frame, String title, boolean isModal,
			    String message, Image img,
			    JStandardDialogClient client) {
    super(frame, title, isModal,
	  new String[] {YES_LABEL, NO_LABEL, CANCEL_LABEL},
	  new int[] {YES, NO, CANCEL},
	  message, img,
	  message.indexOf ("\n") >= 0,
	  client);
    setDefaultButton (YES);
    setCancelButton (CANCEL);
  }

  /**
   * Determines the alignment of the command buttons at the
   * bottom of the JStandardDialog
   * @return a code indicating the preferred position of the buttons
   * @see com.gensym.dlg.JStandardDialog#getButtonAlignment
   */
  @Override
  protected int getButtonAlignment () {
    return CENTER;
  }

  /*
  public void setVisible (boolean showQ) {
    if (showQ)
      okButton.requestFocus();
    super.setVisible (showQ);
  }
  */


  /**
   * Overrides setVisible in JStandardDialog to beep at the user
   * if the dialog is being managed modally.
   * @param showQ true if the Dialog is being shown, false if
   *    hidden
   */
  @Override
  public void setVisible (boolean showQ) {
    if (isModal ())		// Does not work on solaris -vkp, 4/28/98
      Toolkit.getDefaultToolkit().beep ();
    super.setVisible (showQ);
  }


   /**
    * @undocumented
    */
  public static void main (String[] args) {
    MenuItem mi;
    Frame f = new Frame ("Inform Dialog Test");
    registerFrame (f);
    MenuBar mb = new MenuBar ();
    Menu fileMenu = new Menu ("File");
    fileMenu.add (mi = new MenuItem ("Open"));
    final JStandardDialogClient sd = new JStandardDialogClient () {
      @Override
      public void dialogDismissed (JStandardDialog dlg, int code) {
      }
    };
    mi.addActionListener (new ActionListener () {
      @Override
      public void actionPerformed (ActionEvent e) {
	new JQuestionDialog ("From Menu", true, "Message From Menu", sd).show ();
      }
    });
    mb.add (fileMenu);
    f.setMenuBar (mb);
    f.setSize (300, 300);
    f.setVisible (true);
    new Thread (new QuestionDialogLauncher ()).start ();
    System.out.println ("Showing second dialog");
    JQuestionDialog d =new JQuestionDialog ("Helloooooo...",
				    true,
				    "No message!",
				    sd);
    d.show ();
  }

}

class QuestionDialogLauncher implements Runnable {
  @Override
  public void run () {
    JStandardDialogClient sd = new JStandardDialogClient () {
      @Override
      public void dialogDismissed (JStandardDialog dlg, int code) {
      }
    };
    JQuestionDialog d = new JQuestionDialog (null,
					   "Blah...",
					   true,
					   "No Real message!",
					   sd);
    d.show ();
  }
}
