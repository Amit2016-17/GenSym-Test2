
package com.gensym.dlgruntime;

import java.util.EventListener;
/**
 * An interface for listening to the current state
 * of a dialog that has been launched
 */

public interface DialogCommandListener extends EventListener{

  /**
   * Called when the changes on the dialog are
   * being flushed. This method should attempt
   * to leave the dialog with no pending
   * state.
   */
  void dialogChangesFlushed (DialogCommandEvent dlg);

  /**
   * Called when the dialog is no longer needed.
   * This method should attempt to hide the user-interface
   * of the dialog, since no more events should be generated.
   */
  void dialogShutdown (DialogCommandEvent dlg);

  /**
   * Called when the dialog is launched.
   */
  void dialogLaunched (DialogCommandEvent dlgEvnt);

}

