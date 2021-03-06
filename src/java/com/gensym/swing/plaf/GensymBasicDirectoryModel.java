package com.gensym.swing.plaf;

import java.io.File;
import java.util.Vector;
import javax.swing.*;
import javax.swing.filechooser.*;
import javax.swing.event.*;
import javax.swing.plaf.*;
import javax.swing.plaf.basic.*;
import java.beans.*;


public class GensymBasicDirectoryModel extends BasicDirectoryModel
{
  private JFileChooser filechooser = null;
  private Vector fileCache = null;
  private LoadFilesThread loadThread = null;
  private Vector files = null;
  private Vector directories = null;
  private int fetchID = 0;
  private boolean superconstructorCalled = false;
  
  public GensymBasicDirectoryModel(JFileChooser filechooser) {
    super(filechooser);
    superconstructorCalled = true;
    this.filechooser = filechooser;
    validateFileCache();
  }

  @Override
  public void propertyChange(PropertyChangeEvent e) {
    String prop = e.getPropertyName();
    if(prop == JFileChooser.DIRECTORY_CHANGED_PROPERTY ||
       prop == JFileChooser.FILE_VIEW_CHANGED_PROPERTY ||
       prop == JFileChooser.FILE_FILTER_CHANGED_PROPERTY ||
       prop == JFileChooser.FILE_HIDING_CHANGED_PROPERTY ||
       prop == JFileChooser.FILE_SELECTION_MODE_CHANGED_PROPERTY) {
      invalidateFileCache();
      validateFileCache();
    }
  }
  
  @Override
  public void invalidateFileCache() {
    files = null;
    directories = null;
    fileCache = null;
  }
  
  @Override
  public Vector getDirectories() {
    if(directories != null) {
      return directories;
    }
    Vector fls = getFiles();
    return directories;
  }
  
  @Override
  public Vector getFiles() {
    if(files != null) {
      return files;
    }
    files = new Vector();
    directories = new Vector();
    directories.addElement(filechooser.getFileSystemView()
			   .createFileObject(
					     filechooser.getCurrentDirectory(), "..")
			   );
    
    if(fileCache != null) {
      for(int i = 0; i < getSize(); i++) {
	File f = (File) fileCache.elementAt(i);
	if(filechooser.isTraversable(f)) {
	  directories.addElement(f);
	} else {
	  files.addElement(f);
	}
      }
    }
    return files;
  }
  
  @Override
  public void validateFileCache() {
    if (!superconstructorCalled)
      return;
    
    File currentDirectory = filechooser.getCurrentDirectory();
    
    if(currentDirectory == null) {
      invalidateFileCache(); 
      return;
    }
    
    if(loadThread != null) {
	loadThread.setVirtuallyDead();
    }
    
    fetchID++;
    
    // PENDING(jeff) pick the size more sensibly
    invalidateFileCache();
    fileCache = new Vector(50);
    
    loadThread = new LoadFilesThread(currentDirectory, fetchID);
    loadThread.start();
  }
  
  // PENDING(jeff) - this is inefficient - should sent out
  // incremental adjustment values instead of saying that the
  // whole list has changed.
  @Override
  public void fireContentsChanged() {
    // System.out.println("BasicDirectoryModel: firecontentschanged");
    files = null;
    directories = null;
    fireContentsChanged(this, 0, getSize()-1);
  }
  
  @Override
  public int getSize() {
    if(fileCache != null) {
      return fileCache.size();
    } else {
      return 0;
    }
  }
  
  @Override
  public boolean contains(Object o) {
    if(fileCache != null) {
      return fileCache.contains(o);
    } else {
      return false;
    }
  }
  
  @Override
  public int indexOf(Object o) {
    if(fileCache != null) {
      return fileCache.indexOf(o);
    } else {
      return 0;
    }
  }
  
  @Override
  public Object getElementAt(int index) {
    if(fileCache != null) {
      return fileCache.elementAt(index);
    } else {
      return null;
    }
  }
  
  // PENDING(jeff) - implement
  @Override
  public void intervalAdded(ListDataEvent e) {
  }
  
  // PENDING(jeff) - implement
  @Override
  public void intervalRemoved(ListDataEvent e) {
  }
  
  @Override
  protected void sort(Vector v){
    quickSort(v, 0, v.size()-1);
  }
  
  
  // Liberated from the 1.1 SortDemo
  //
  // This is a generic version of C.A.R Hoare's Quick Sort
  // algorithm.  This will handle arrays that are already
  // sorted, and arrays with duplicate keys.<BR>
  //
  // If you think of a one dimensional array as going from
  // the lowest index on the left to the highest index on the right
  // then the parameters to this function are lowest index or
  // left and highest index or right.  The first time you call
  // this function it will be with the parameters 0, a.length - 1.
  //
  // @param a       an integer array
  // @param lo0     left boundary of array partition
  // @param hi0     right boundary of array partition
  private void quickSort(Vector v, int lo0, int hi0) {
    int lo = lo0;
    int hi = hi0;
    File mid;
    
    if (hi0 > lo0) {
      // Arbitrarily establishing partition element as the midpoint of
      // the array.
      mid = (File) v.elementAt((lo0 + hi0) / 2);
      
      // loop through the array until indices cross
      while(lo <= hi) {
	// find the first element that is greater than or equal to
	// the partition element starting from the left Index.
	//
	// Nasty to have to cast here. Would it be quicker
	// to copy the vectors into arrays and sort the arrays?
	while((lo < hi0) && lt((File)v.elementAt(lo), mid)) {
	  ++lo;
	}
	
	// find an element that is smaller than or equal to
	// the partition element starting from the right Index.
	while((hi > lo0) && lt(mid, (File)v.elementAt(hi))) {
	  --hi;
	}
	
	// if the indexes have not crossed, swap
	if(lo <= hi) {
	  swap(v, lo, hi);
	  ++lo;
	  --hi;
	}
      }
      
      
      // If the right index has not reached the left side of array
      // must now sort the left partition.
      if(lo0 < hi) {
	quickSort(v, lo0, hi);
      }
      
      // If the left index has not reached the right side of array
      // must now sort the right partition.
      if(lo < hi0) {
	quickSort(v, lo, hi0);
      }
      
    }
  }
  
  private void swap(Vector a, int i, int j) {
    Object T = a.elementAt(i);
    a.setElementAt(a.elementAt(j), i);
    a.setElementAt(T, j);
  }
  
  @Override
  protected boolean lt(File a, File b) {
    // ignore case when comparing
    return a.getName().toLowerCase().compareTo(b.getName().toLowerCase()) < 0;
  }
  
  
  class LoadFilesThread extends Thread {
    File currentDirectory = null;
    int fid;
      boolean virtuallyDead = false;
    
    public LoadFilesThread(File currentDirectory, int fid) {
      super("Basic L&F File Loading Thread");
      this.currentDirectory = currentDirectory;
      this.fid = fid;
    }

      synchronized void setVirtuallyDead()
      {
	  virtuallyDead = true;
      }

      synchronized boolean isVirtuallyDead()
      {
	  return virtuallyDead;
      }


    
    @Override
    public void run() {
      Vector runnables = new Vector(10);
      FileSystemView fileSystem = filechooser.getFileSystemView();
      
      File[] list = fileSystem.getFiles(currentDirectory, filechooser.isFileHidingEnabled());
      
      Vector acceptsList = new Vector();
      
      // run through the file list, add directories and selectable files to fileCache
      for (int i = 0; i < list.length; i++) {
	if(filechooser.accept(list[i])) {
	  acceptsList.addElement(list[i]);
	}
      }
      
      // First sort alphabetically by filename
      sort(acceptsList);
      
      Vector directories = new Vector(10);
      Vector files = new Vector();
      // run through list grabbing directories in chunks of ten
      for(int i = 0; i < acceptsList.size(); i++) {
	File f = (File) acceptsList.elementAt(i);
	boolean isTraversable = filechooser.isTraversable(f);
	if(isTraversable) {
	  directories.addElement(f);
	} else if(!isTraversable && filechooser.isFileSelectionEnabled()) {
	  files.addElement(f);
	}
	if((directories.size() == 10) || (i == acceptsList.size()-1)) {
	    DoChangeContents runnable = new DoChangeContents(directories, fid, this);
	  runnables.addElement(runnable);
	  SwingUtilities.invokeLater(runnable);
	  directories = new Vector(10);
	}
	if(isVirtuallyDead()) {
	  // interrupted, cancel all runnables
	  cancelRunnables(runnables);
	  return;
	}
      }
      // PENDING(jeff) - run through the files in blocks instead of
      // sending them along as one big chunk
      DoChangeContents runnable = new DoChangeContents(files, fid, this);
      runnables.addElement(runnable);
      SwingUtilities.invokeLater(runnable);
      if(isVirtuallyDead()) {
	// interrupted, blow out
	cancelRunnables(runnables);
	return;
      }
    }
    
    public void cancelRunnables(Vector runnables) {
      for(int i = 0; i < runnables.size(); i++) {
	((DoChangeContents)runnables.elementAt(i)).cancel();
      }
    }
  }
  
  class DoChangeContents implements Runnable {
    private Vector files;
    private boolean doFire = true;
    private Object lock = new Object();
    private int fid;
      private LoadFilesThread thread;
    
    public DoChangeContents(Vector files, int fid, LoadFilesThread thread) {
      this.files = files;
      this.fid = fid;
      this.thread = thread;
    }
    
    synchronized void cancel() {
      synchronized(lock) {
	doFire = false;
      }
    }
    
    @Override
    public void run() {
      if(fetchID == fid) {
	synchronized(lock) {
	  if(doFire && !thread.isVirtuallyDead()) {
	    if(fileCache != null) {
	      for(int i = 0; i < files.size(); i++) {
		fileCache.addElement(files.elementAt(i));
	      }
	    }
	  }
	  fireContentsChanged();
	}
      }
    }
  }
}

