;; -*- Mode: Lisp; Package: AB; Base: 10; Syntax: Common-Lisp -*-
(in-package "AB")

;;;; Module GSI-LEAK

(defconstant store-size 5)

;; One array required for each remote procedure we declare.
(defvar send-object-copy-to-g2 (make-array 1))
(defvar g2-hello-world (make-array 1))
(defvar g2-receive-hello (make-array 1))
(defvar g2-receive-hello-and-back (make-array 1))

(defvar last-object-transferred)
(defvar name-of-last-object-transferred)
(defvar item-or-value-store? nil)
(defvar error-object-array nil)
(defvar store-index gsi-magic-offset)
(defvar foo-count nil)

(defun-simple gsi-get-tcp-port () 22088)

(defun-simple gsi-initialize-context (remote-process-initialization-string length)
  (declare (ignore remote-process-initialization-string length))
  (gsi-rpc-declare-remote g2-hello-world "HELLO-WORLD"
			  'gsi-generic-rpc-return-handler 0 0 gsi-current-context-number)
  (gsi-rpc-declare-remote g2-receive-hello "RECEIVE-HELLO"
			  'gsi-generic-rpc-return-handler 1 0 gsi-current-context-number)
  (gsi-rpc-declare-remote g2-receive-hello-and-back "RECEIVE-HELLO-AND-BACK"
			  'gsi-generic-rpc-return-handler 1 1 gsi-current-context-number)
  (gsi-rpc-declare-remote send-object-copy-to-g2 "RECEIVE-OBJECT-COPY"
			  'gsi-generic-rpc-return-handler 1 0 gsi-current-context-number)

  (setf item-or-value-store? (gsi-make-items store-size))
  (setf store-index gsi-magic-offset)
  (setf foo-count 0)
  0)

(defun-simple gsi-pause-context ()
  (format t "~%gsi-pause-context"))

(defun-simple gsi-resume-context ()
  (format t "~%gsi-resume-context"))

(defun-simple gsi-shutdown-context ()
;  (format t "~%context = ~a~%" gsi-current-context-number)
  (loop for i from gsi-magic-offset to store-size
	as item-or-value = (gsi-managed-svref item-or-value-store? i)
	do (free-argument-memory item-or-value)
	finally (gsi-reclaim-items item-or-value-store?)))

(defmacro itemref (item)
  `(managed-svref ,item (+f gsi-magic-offset 0)))

(defun-simple gsi-displace-array (array index)
  (let* ((array-length (length array))
	 (displaced-length (+ (- array-length index) gsi-magic-offset))
	 (displaced-array (gsi-allocate-managed-array displaced-length)))
    (loop with displaced-index = gsi-magic-offset
	  for array-index from index below array-length
	  do
      (setf (gsi-managed-svref displaced-array displaced-index)
	    (gsi-managed-svref array array-index))
      (incf displaced-index))
    displaced-array))

(defun-simple gsi-receive-registration (gsi-item-definition)
  (format t
	  "~%gsi-receive-registration index:~a  type:~a  interval:~a~%"
	  (gsi-handle-of gsi-item-definition)
	  (gsi-type-of gsi-item-definition)
	  (gsi-interval-of gsi-item-definition))

      
    (let* ((item (gsi-make-registered-items 1))
	   (attributes (gsi-make-attrs 2)))

      (gsi-set-handle (itemref item) (gsi-handle-of gsi-item-definition))
      (gsi-set-status (itemref item) 0)

      (case (gsi-type-of gsi-item-definition)
	(#.gsi-integer-type-tag (gsi-set-int (itemref item) 0))
	(#.gsi-symbol-type-tag (gsi-set-sym (itemref item) 'defined))
	(#.gsi-string-type-tag (gsi-set-str (itemref item) "defined"))
	(#.gsi-logical-type-tag (gsi-set-log (itemref item) 0))
	(#.gsi-64bit-float-type-tag (gsi-set-flt (itemref item) 0.0))
	(t (cerror "Continue" "Unexpected type for newly defined item.")))

      (gsi-set-attr-name (managed-svref attributes (+f gsi-magic-offset 0)) "OBJECT-INDEX")
      (gsi-set-int (managed-svref attributes (+f gsi-magic-offset 0)) (gsi-handle-of gsi-item-definition))
      (gsi-set-attr-name (managed-svref attributes (+f gsi-magic-offset 1)) "SYMBOLIC-STATUS")
      (gsi-set-sym (managed-svref attributes (+f gsi-magic-offset 1)) 'defined)

      (gsi-return-attrs (itemref item)
			(gsi-displace-array attributes 0)
			2 gsi-current-context-number)))

(defun-simple gsi-g2-poll ())

(defun-simple gsi-get-data (gsi-items gsi-item-count)

;;;  (break "gsi-get-data")

  (format t "~%gsi-get-data for ~a items" gsi-item-count)
  (loop for index from gsi-magic-offset below (+f gsi-item-count gsi-magic-offset)
	as item = (managed-svref gsi-items index)
	do
    (case (gsi-type-of (gsi-def-of (gsi-handle-of item)
				   gsi-current-context-number))
      (#.gsi-integer-type-tag (gsi-set-int item 99))
      (#.gsi-symbol-type-tag (gsi-set-sym item 'hello))
      (#.gsi-string-type-tag (gsi-set-str item "hello"))
      (#.gsi-logical-type-tag (gsi-set-log item 1000))
      (#.gsi-64bit-float-type-tag (gsi-set-flt item 3.1415))
      (t (cerror "Continue" "Unexpected type for newly defined item."))))

  (gsi-return-values (gsi-displace-array gsi-items 0) gsi-item-count gsi-current-context-number))

(defun-simple gsi-set-data (gsi-items gsi-item-count)
  (declare (ignore gsi-items))
  (format t "~%gsi-set-data for ~a items" gsi-item-count))

(defun-simple gsi-receive-deregistrations (gsi-items gsi-item-count)
  (declare (ignore gsi-items))
;  (cerror "" "")
  (format t "~%gsi-receive-deregistrations for ~a items" gsi-item-count))

(defun-simple gsi-receive-message (message message-length)
  (declare (ignore message-length))
  (format t "~%gsi-receive-message ~a" message)
  (gsi-return-message "Boomerang" gsi-current-context-number)
  (gsi-return-message message gsi-current-context-number))

(defun-simple my-error-handler (context number message)
  (declare (ignore context number message))
  (cerror "Continue" "Abort requested by user code"))

(defun-simple gsi-set-up ()
  (gsi-install-error-handler 'my-error-handler)
  
  (gsi-rpc-declare-local 'hello-world "GSI-HELLO-WORLD")
  (gsi-rpc-declare-local 'receive-item-or-value "RECEIVE-AND-DISPLAY-ITEM")
  (gsi-rpc-declare-local 'receive-and-return-copy "RECEIVE-AND-RETURN-ITEM-COPY")
  (gsi-rpc-declare-local 'receive-item-transfer "RECEIVE-AND-DISPLAY-TRANSFER")
  (gsi-rpc-declare-local 'receive-request-for-copy "RECEIVE-REQUEST-ITEM-COPY")
  (gsi-rpc-declare-local 'hello-and-back "GSI-SEND-HELLO-AND-BACK")

  (setf error-object-array (gsi-make-items 1))
  (let* ((error-object (gsi-managed-svref error-object-array gsi-magic-offset))
	 (name-attr-array (gsi-make-attrs-with-items 1))
	 (name-attr (gsi-managed-svref name-attr-array gsi-magic-offset)))
    (gsi-set-attr-name name-attr 'name)
    (gsi-set-sym name-attr 'error-object)
    (gsi-set-attrs error-object name-attr-array 1)
    (gsi-set-class-name error-object 'object)))

(defun-simple hello-world (arguments count)
  (format t "~%Hey tuna!  ")
  (loop for i from gsi-magic-offset below (+f count gsi-magic-offset)
	as argument = (gsi-managed-svref arguments i)
	do
    (case (gsi-type-of argument)
      (#.gsi-integer-type-tag (format t "~a" (gsi-int-of argument)))
      (#.gsi-symbol-type-tag (format t "~a" (gsi-sym-of argument)))
      (#.gsi-string-type-tag (format t "~a" (gsi-str-of argument)))
      (#.gsi-logical-type-tag (format t "~a" (gsi-log-of argument)))
      (#.gsi-64bit-float-type-tag (format t "~a" (gsi-flt-of argument)))
      (t (cerror "Continue" "Unexpected type for newly defined item."))))
  (format t "~%")
  (unless current-invocation-remotely-started-p
    (gsi-rpc-return-values (gsi-displace-array arguments 0) count))
  (gsi-rpc-start (svref g2-hello-world 0)
		 (gsi-displace-array arguments 0)
		 gsi-current-context-number)
;;;  (gsi-rpc-start (svref g2-receive-hello 0) (gsi-displace-array arguments 0) gsi-current-context-number)
;;;  (gsi-rpc-call (svref g2-hello-and-back 0) nil gsi-current-context-number)
;;;  (gsi-rpc-call (svref g2-receive-hello-and-back 0)  nil gsi-current-context-number) 
  )



(defun-simple hello-and-back (arguments count)
  (format t "~%Love is no small potato.  ")
  (loop for i from gsi-magic-offset below (+f count gsi-magic-offset)
	as argument = (gsi-managed-svref arguments i)
	do
    (case (gsi-type-of argument)
      (#.gsi-integer-type-tag (format t "~a" (gsi-int-of argument)))
      (#.gsi-symbol-type-tag (format t "~a" (gsi-sym-of argument)))
      (#.gsi-string-type-tag (format t "~a" (gsi-str-of argument)))
      (#.gsi-logical-type-tag (format t "~a" (gsi-log-of argument)))
      (#.gsi-64bit-float-type-tag (format t "~a" (gsi-flt-of argument)))
      (t (cerror "Continue" "Unexpected type for newly defined item."))))
  (format t "~%")
  (unless current-invocation-remotely-started-p
    (gsi-rpc-return-values (gsi-displace-array arguments 0) count)))

(defun-simple gsi-generic-rpc-return-handler (arguments count)
  (loop for i from gsi-magic-offset below (+f count gsi-magic-offset)
	as argument = (gsi-managed-svref arguments i)
	do
    (case (gsi-type-of argument)
      (#.gsi-integer-type-tag (format t "~a" (gsi-int-of argument)))
      (#.gsi-symbol-type-tag (format t "~a" (gsi-sym-of argument)))
      (#.gsi-string-type-tag (format t "~a" (gsi-str-of argument)))
      (#.gsi-logical-type-tag (format t "~a" (gsi-log-of argument)))
      (#.gsi-64bit-float-type-tag (format t "~a" (gsi-flt-of argument)))
      (t (cerror "Continue" "Unexpected type for newly defined item."))))
  (format t "~%"))

(defun gsi-user-indent (level))
 ; (loop for i from 1 to level
;	do
 ;   (format t "  ")))

(defun-simple print-array (argument-type argument level duplicate)
  (let* ((attr-count (gsi-attr-count-of argument))
	 (element-count (gsi-element-count-of argument))
	 (class-name (gsi-class-name-of argument)))
      (gsi-user-indent level)
;      (format t "Array, a ~a with ~a " class-name element-count)
      (gsi-set-class-name duplicate class-name)
      (incf level)
      (case argument-type
	(#.gsi-integer-array-type-tag
;	 (format t "integer elements: ")
	 (loop with integers = (gsi-int-array-of argument)
	       for i from 0 below element-count
	       as integer = (gsi-managed-svref integers i)
	       do; (format t "~a  " integer)
	       finally (gsi-set-int-array duplicate integers element-count))
	; (format t "~%")
	 )
	(#.gsi-logical-array-type-tag
;	 (format t "logical elements: ")
	 (loop with logicals = (gsi-log-array-of argument)
	       for i from 0 below element-count
	       as logical = (gsi-managed-svref logicals i)
	       do; (format t "~a  " logical)
	       finally (gsi-set-log-array duplicate logicals element-count))
	; (format t "~%")
	 )
	(#.gsi-64bit-float-array-type-tag
	; (format t "double elements: ")
	 (loop with doubles = (gsi-flt-array-of argument)
	       for i from 0 below element-count
	       as double = (float-vector-aref doubles i)
	       do; (format t "~a  " double)
	       finally (gsi-set-flt-array duplicate doubles element-count))
	; (format t "~%")
	 )	
	(#.gsi-symbol-array-type-tag
	; (format t "symbolic elements: ")
	 (loop with symbols = (gsi-sym-array-of argument)
	       for i from 0 below element-count
	       as symbol = (gsi-managed-svref symbols i)
	       do; (format t "~a  " symbol)
	       finally (gsi-set-sym-array duplicate symbols element-count))
	; (format t "~%")
	 )
	(#.gsi-string-array-type-tag
	; (format t "string elements: ")
	 (loop with strings = (gsi-str-array-of argument)
	       for i from 0 below element-count
	       as string = (gsi-managed-svref strings i)
	       do ;(format t "~a  " string)
	       finally (gsi-set-str-array duplicate strings element-count))
	; (format t "~%")
	 )
	((#.gsi-value-array-type-tag #.gsi-item-array-type-tag)
	; (format t "mixed elements:")
	 (loop with elements = (gsi-elements-of argument)
	       with sub-duplicates = (gsi-make-items element-count)
	       for i from gsi-magic-offset below (+f element-count gsi-magic-offset)
	       as element = (gsi-managed-svref elements i)
	       as sub-duplicate = (gsi-managed-svref sub-duplicates i)
	       do (print-argument element (+ level 1) sub-duplicate)
	       finally (gsi-set-elements duplicate sub-duplicates element-count argument-type))
	; (format t "~%")
	 ))
      (cond ((zerop attr-count)
	     (gsi-user-indent (- level 1))
	   ;  (format t " and no attributes.~%")
	     )
	    (t
	     (gsi-user-indent (- level 1))
	     (let* ((duplicate-attrs (gsi-make-attrs-with-items attr-count)))
	       (gsi-set-attrs duplicate duplicate-attrs attr-count)
	     ;  (format t " and attributes...~%")
	       (loop with attributes = (gsi-attrs-of argument)
		     for i from gsi-magic-offset below (+f attr-count gsi-magic-offset)
		     as attribute = (gsi-managed-svref attributes i)
		     as duplicate-attr = (gsi-managed-svref duplicate-attrs i)
		     as attr-name = (intern (gsi-attr-name-of attribute))
		     do
		 (gsi-user-indent level)
		; (format t "~a:" attr-name)
		 (gsi-set-attr-name duplicate-attr attr-name)
		 (print-argument (gsi-item-of-attr attribute)
				 level
				 (gsi-item-of-attr duplicate-attr))))))))

(defun-simple print-list (argument-type argument level duplicate)
  (let* ((attr-count (gsi-attr-count-of argument))
	 (element-count (gsi-element-count-of argument))
	 (class-name (gsi-class-name-of argument)))
      (gsi-user-indent level)
    ;  (format t "List, a ~a with ~a " class-name element-count)
      (gsi-set-class-name duplicate class-name)
      (incf level)
      (case argument-type
	(#.gsi-integer-list-type-tag
	; (format t "integer elements: ")
	 (loop with integers = (gsi-int-list-of argument)
	       for i from 0 below element-count
	       as integer = (gsi-managed-svref integers i)
	       do ;(format t "~a  " integer)
	       finally (gsi-set-int-list duplicate integers element-count))
	; (format t "~%")
	 )
	(#.gsi-logical-list-type-tag
	; (format t "logical elements: ")
	 (loop with logicals = (gsi-log-list-of argument)
	       for i from 0 below element-count
	       as logical = (gsi-managed-svref logicals i)
	       do ;(format t "~a  " logical)
	       finally (gsi-set-log-list duplicate logicals element-count))
	; (format t "~%")
	 )
	(#.gsi-64bit-float-list-type-tag
;	 (format t "double elements: ")
	 (loop with doubles = (gsi-flt-list-of argument)
	       for i from 0 below element-count
	       as double = (float-vector-aref doubles i)
	       do ;(format t "~a  " double)
	       finally (gsi-set-flt-list duplicate doubles element-count))
	; (format t "~%")
	 )
	(#.gsi-symbol-list-type-tag
	; (format t "symbolic elements: ")
	 (loop with symbols = (gsi-sym-list-of argument)
	       for i from 0 below element-count
	       as symbol = (gsi-managed-svref symbols i)
	       do ;(format t "~a  " symbol)
	       finally (gsi-set-sym-list duplicate symbols element-count))
;	 (format t "~%")
	 )
	(#.gsi-string-list-type-tag
;	 (format t "string elements: ")
	 (loop with strings = (gsi-str-list-of argument)
	       for i from 0 below element-count
	       as string = (gsi-managed-svref strings i)
	       do; (format t "~a  " string)
	       finally (gsi-set-str-list duplicate strings element-count))
	 ;(format t "~%")
	 )
	((#.gsi-value-list-type-tag #.gsi-item-list-type-tag)
;	 (format t "mixed elements:")
	 (loop with elements = (gsi-elements-of argument)
	       with sub-duplicates = (gsi-make-items element-count)
	       for i from gsi-magic-offset below (+f element-count gsi-magic-offset)
	       as element = (gsi-managed-svref elements i)
	       as sub-duplicate = (gsi-managed-svref sub-duplicates i)
	       do (print-argument element (+ level 1) sub-duplicate)
	       finally (gsi-set-elements duplicate sub-duplicates element-count argument-type))
	; (format t "~%")
	 )
	 )
      (cond ((zerop attr-count)
	     (gsi-user-indent (- level 1))
	    ; (format t " and no attributes.~%")
	     )
	    (t
	     (gsi-user-indent (- level 1))
	     (let* ((duplicate-attrs (gsi-make-attrs-with-items attr-count)))
	       (gsi-set-attrs duplicate duplicate-attrs attr-count)
	     ;  (format t " and attributes...~%")
	       (loop with attributes = (gsi-attrs-of argument)
		     for i from gsi-magic-offset below (+f attr-count gsi-magic-offset)
		     as attribute = (gsi-managed-svref attributes i)
		     as duplicate-attr = (gsi-managed-svref duplicate-attrs i)
		     as attr-name = (intern (gsi-attr-name-of attribute))
		     do
		 (gsi-user-indent level)
		; (format t "~a:" attr-name)
		 (gsi-set-attr-name duplicate-attr attr-name)
		 (print-argument (gsi-item-of-attr attribute)
				 level
				 (gsi-item-of-attr duplicate-attr))))))))

(defun-simple free-array-memory (argument-type argument)
  (let* ((attr-count (gsi-attr-count-of argument))
	 (element-count (gsi-element-count-of argument)))
    (case argument-type
      ((#.gsi-value-array-type-tag #.gsi-item-array-type-tag)
       (unless (zerop element-count)
	 (loop with items = (gsi-elements-of argument)
	       for i from gsi-magic-offset below (+f element-count gsi-magic-offset)
	       as item = (gsi-managed-svref items i)
	       do (free-argument-memory item)
	       finally (gsi-reclaim-items items)))))
    (unless (zerop attr-count)
      (loop with attributes = (gsi-attrs-of argument)
	    for i from gsi-magic-offset below (+f attr-count gsi-magic-offset)
	    as attribute = (gsi-managed-svref attributes i)
	    as item = (gsi-item-of-attr attribute)
	    do (free-argument-memory item)
	    finally (gsi-reclaim-attrs-with-items attributes)))))

(defun-simple free-list-memory (argument-type argument)
  (let* ((attr-count (gsi-attr-count-of argument))
	 (element-count (gsi-element-count-of argument)))
    (case argument-type
      ((#.gsi-value-list-type-tag #.gsi-item-list-type-tag)
       (unless (zerop element-count)
	 (loop with items = (gsi-elements-of argument)
	       for i from gsi-magic-offset below (+f element-count gsi-magic-offset)
	       as item = (gsi-managed-svref items i)
	       do (free-argument-memory item)
	       finally (gsi-reclaim-items items)))))
    (unless (zerop attr-count)
      (loop with attributes = (gsi-attrs-of argument)
	    for i from gsi-magic-offset below (+f attr-count gsi-magic-offset)
	    as attribute = (gsi-managed-svref attributes i)
	    as item = (gsi-item-of-attr attribute)
	    do (free-argument-memory item)
	    finally (gsi-reclaim-attrs-with-items attributes)))))

(defun-simple get-value-of-any-simple-type (item)
  (case (gsi-type-of item)
    (#.gsi-integer-type-tag
     (gsi-int-of item))
    (#.gsi-symbol-type-tag
     (gsi-sym-of item))
    (#.gsi-string-type-tag
     (gsi-str-of item))
    (#.gsi-logical-type-tag
     (gsi-log-of item))
    (#.gsi-64bit-float-type-tag
     (gsi-flt-of item))))

(defun-simple set-simple-value-in-item (item value type)
  (case type
    (#.gsi-integer-type-tag
     (gsi-set-int item value))
    (#.gsi-symbol-type-tag
     (gsi-set-sym item value))
    (#.gsi-string-type-tag
     (gsi-set-str item value))
    (#.gsi-logical-type-tag
     (gsi-set-log item value))
    (#.gsi-64bit-float-type-tag
     (gsi-set-flt item value))))

(defun-simple print-item (argument level duplicate)
  (gsi-user-indent level)
  (let* ((class-name (gsi-class-name-of argument))
	 (attr-count (gsi-attr-count-of argument))
	 (history-count (gsi-history-count-of argument)))
  ;  (format t "Item, a ~a with " class-name)
    (gsi-set-class-name duplicate class-name)
    (cond ((zerop attr-count)
	 ;  (format t "no attributes.~%")
	   )
	  (t
	   (let* ((duplicate-attrs (gsi-make-attrs-with-items attr-count)))
	     (gsi-set-attrs duplicate duplicate-attrs attr-count)
	  ;   (format t "attributes...~%")
	     (loop with attributes = (gsi-attrs-of argument)
		   for i from gsi-magic-offset below (+f attr-count gsi-magic-offset)
		   as attribute = (gsi-managed-svref attributes i)
		   as duplicate-attr = (gsi-managed-svref duplicate-attrs i)
		   as attr-name = (intern (gsi-attr-name-of attribute))
		   do
	       (gsi-user-indent level)
	      ; (format t " ~a:" attr-name)
	       (gsi-set-attr-name duplicate-attr attr-name)
	       (print-argument (gsi-item-of-attr attribute)
			       (+f level 1)
			       (gsi-item-of-attr duplicate-attr))))))
    (unless (zerop history-count)
      (let* ((values-holder (gsi-allocate-managed-array 1))
	     (timestamps-holder (gsi-allocate-managed-array 1))
	     (type-holder (gsi-allocate-managed-array 1))
	     (max-count-holder (gsi-allocate-managed-array 1))
	     (max-age-holder (gsi-allocate-managed-array 1))
	     (year-holder (gsi-allocate-managed-array 1))
	     (month-holder (gsi-allocate-managed-array 1))
	     (day-holder (gsi-allocate-managed-array 1))
	     (hour-holder (gsi-allocate-managed-array 1))
	     (minute-holder (gsi-allocate-managed-array 1))
	     (second-holder (gsi-allocate-managed-array 1)))
	(gsi-user-indent level)
;	(format t " ~a historical values whose spec allows for" history-count)
	(gsi-extract-history argument values-holder timestamps-holder type-holder)
	(gsi-extract-history-spec argument max-count-holder max-age-holder)
	(let ((max-count (gsi-managed-svref max-count-holder 0))
	      (max-age (gsi-managed-svref max-age-holder 0)))
	  ;(unless (zerop max-count)
;	    (format t " ~a values~%" max-count)
;	    (gsi-user-indent level)
;	    (unless (zerop max-age)
;	      (format t "  no more than ~a seconds old.~%" max-age)))
;	  (when (zerop max-count)
;	    (format t " values no more than ~a seconds old.~%" max-age))
;	  (gsi-user-indent level)
;	  (format t " Current contents of history are...")
	  (loop with timestamps = (gsi-managed-svref timestamps-holder 0)
		with values = (gsi-managed-svref values-holder 0)
		with history-type = (gsi-managed-svref type-holder 0)
		with duplicate-values =
	          (case history-type
		    ((#.gsi-integer-type-tag #.gsi-logical-type-tag)
		     (allocate-simple-integer-vector history-count))
		    (#.gsi-64bit-float-type-tag
		     (allocate-managed-simple-float-array history-count))
		    ((#.gsi-string-type-tag #.gsi-symbol-type-tag)
		     (gsi-allocate-managed-array history-count))
		    (#.gsi-value-type-tag
		     (gsi-make-items history-count)))
		with duplicate-timestamps = (allocate-managed-simple-float-array
					      history-count)
		for i from 0 below history-count
		as value-type = (if (= history-type gsi-value-type-tag)
				    (gsi-type-of (gsi-managed-svref values (+ i gsi-magic-offset)))
				    history-type)
		as value = (case history-type
			     ((#.gsi-integer-type-tag #.gsi-logical-type-tag)
			      (integer-vector-aref values i))
			     (#.gsi-64bit-float-type-tag
			      (float-vector-aref values i))
			     ((#.gsi-string-type-tag #.gsi-symbol-type-tag)
			      (gsi-managed-svref values i))
			     (#.gsi-value-type-tag
			      (get-value-of-any-simple-type
				(gsi-managed-svref values (+ i gsi-magic-offset)))))
		as timestamp = (float-vector-aref timestamps i)
		do (gsi-decode-timestamp
		     timestamp year-holder month-holder day-holder
		     hour-holder minute-holder second-holder)
		   (let ((year (gsi-managed-svref year-holder 0))
			 (month (gsi-managed-svref month-holder 0))
			 (day (gsi-managed-svref day-holder 0))
			 (hour (gsi-managed-svref hour-holder 0))
			 (minute (gsi-managed-svref minute-holder 0))
			 (second (gsi-managed-svref second-holder 0))
			 (remainder (- timestamp (truncate timestamp))))
		  ;   (format t "~%")
		     (gsi-user-indent level)
		   ;  (format t " ~a/~a/~a ~a:~a:~a"
		;	     month day year hour minute second)
		     (case history-type
		       (#.gsi-integer-type-tag
		;	(format t " integer ~a" value)
			(setf (integer-vector-aref duplicate-values i) value))
		       (#.gsi-logical-type-tag
		;	(format t " logical ~a" value)
			(setf (integer-vector-aref duplicate-values i) value))
		       (#.gsi-64bit-float-type-tag
			;(format t " float ~a" value)
			(setf (float-vector-aref duplicate-values i) value))
		       (#.gsi-string-type-tag
			;(format t " string ~a" value)
			(setf (gsi-managed-svref duplicate-values i) value))
		       (#.gsi-symbol-type-tag
			;(format t " symbol ~a" value)
			(setf (gsi-managed-svref duplicate-values i) value))
		       (#.gsi-value-type-tag
			;(format t " mixed ~a" value)
			(set-simple-value-in-item
			  (gsi-managed-svref duplicate-values (+ i gsi-magic-offset))
			  value
			  value-type)))
		     (setf (float-vector-aref duplicate-timestamps i)
			   (+ (gsi-encode-timestamp
				year month day hour minute second)
			      remainder)))
		finally
		  (progn
		   ; (format t "~%")
		    (gsi-set-history duplicate
				     duplicate-values
				     duplicate-timestamps
				     history-count
				     history-type
				     max-count
				     max-age)
		    (case history-type
		      ((#.gsi-integer-type-tag #.gsi-logical-type-tag)
		       (reclaim-simple-integer-vector duplicate-values))
		      (#.gsi-64bit-float-type-tag
		       (reclaim-managed-simple-float-array duplicate-values))
		      ((#.gsi-string-type-tag #.gsi-symbol-type-tag)
		       (gsi-reclaim-managed-array duplicate-values))
		      (#.gsi-value-type-tag
		       (gsi-reclaim-items duplicate-values)))
		    (reclaim-managed-simple-float-array duplicate-timestamps))))
	(gsi-reclaim-managed-array values-holder)
	(gsi-reclaim-managed-array timestamps-holder)
	(gsi-reclaim-managed-array type-holder)
	(gsi-reclaim-managed-array max-count-holder)
	(gsi-reclaim-managed-array max-age-holder)
	(gsi-reclaim-managed-array year-holder)
	(gsi-reclaim-managed-array month-holder)
	(gsi-reclaim-managed-array day-holder)
	(gsi-reclaim-managed-array hour-holder)
	(gsi-reclaim-managed-array minute-holder)
	(gsi-reclaim-managed-array second-holder)))))

(defun-simple free-item-memory (argument)
  (let* ((attr-count (gsi-attr-count-of argument)))
    (unless (zerop attr-count)
      (loop with attributes = (gsi-attrs-of argument)
	    for i from gsi-magic-offset below (+f attr-count gsi-magic-offset)
	    as attribute = (gsi-managed-svref attributes i)
	    as item = (gsi-item-of-attr attribute)
	    do
;	(derror "Continue" "Debugging break in loop")
	(free-argument-memory item)
	    finally
	      (gsi-reclaim-attrs-with-items attributes)))))

(defun-simple print-argument (argument level duplicate)
  (gsi-user-indent level)
  (let* ((argument-type (gsi-type-of argument)))
    (case argument-type
      (#.gsi-integer-type-tag
      ; (format t "Integer ~a~%" (gsi-int-of argument))
       (gsi-set-int duplicate (gsi-int-of argument)))
      (#.gsi-symbol-type-tag
       ;(format t "Symbol ~a~%" (gsi-sym-of argument))
       (gsi-set-sym duplicate (gsi-sym-of argument)))
      (#.gsi-string-type-tag
      ; (format t "String ~a~%" (gsi-str-of argument))
       (gsi-set-str duplicate (gsi-str-of argument)))
      (#.gsi-logical-type-tag
       ;(format t "Logical ~a~%" (gsi-log-of argument))
       (gsi-set-log duplicate (gsi-log-of argument)))
      (#.gsi-64bit-float-type-tag
       ;(format t "Float ~a~%" (gsi-flt-of argument))
       (gsi-set-flt duplicate (gsi-flt-of argument)))
      (#.gsi-item-handle-type-tag
     ;  (format t "Handle ~a~%" (gsi-handle-of argument))
       (gsi-set-handle duplicate (gsi-handle-of argument)))
      (#.gsi-item-type-tag (print-item argument level duplicate))
      ((#.gsi-integer-array-type-tag
	  #.gsi-logical-array-type-tag
	  #.gsi-64bit-float-array-type-tag
	  #.gsi-string-array-type-tag
	  #.gsi-symbol-array-type-tag
	  #.gsi-value-array-type-tag
	  #.gsi-item-array-type-tag)
       (print-array argument-type argument level duplicate))
      ((#.gsi-integer-list-type-tag
	  #.gsi-logical-list-type-tag
	  #.gsi-64bit-float-list-type-tag
	  #.gsi-string-list-type-tag
	  #.gsi-symbol-list-type-tag
	  #.gsi-value-list-type-tag
	  #.gsi-item-list-type-tag)
       (print-list argument-type argument level duplicate))
      (#.gsi-null-type-tag
      ; (format t "No value~%")
       (gsi-set-type duplicate gsi-null-type-tag))
      (otherwise
       (gsi-signal-error "print-argument" 1001 "****  Error - Unknown type")))))

(defun-simple free-argument-memory (argument)
  (let* ((argument-type (gsi-type-of argument)))
    (case argument-type
      (#.gsi-item-type-tag
       (free-item-memory argument))
      ((#.gsi-integer-array-type-tag
	  #.gsi-logical-array-type-tag
	  #.gsi-64bit-float-array-type-tag
	  #.gsi-string-array-type-tag
	  #.gsi-symbol-array-type-tag
	  #.gsi-value-array-type-tag
	  #.gsi-item-array-type-tag)
       (free-array-memory argument-type argument))
      ((#.gsi-integer-list-type-tag
	  #.gsi-logical-list-type-tag
	  #.gsi-64bit-float-list-type-tag
	  #.gsi-string-list-type-tag
	  #.gsi-symbol-list-type-tag
	  #.gsi-value-list-type-tag
	  #.gsi-item-list-type-tag)
       (free-list-memory argument-type argument))))
  (gsi-clear-item argument))

(defun-simple receive-item-or-value (arguments count)
  (declare (ignore count))
  
 ; (format t "~%")
  ;(format t "------------------------------------~%")
 ; (format t "  Printing argument~%")
 ; (format t "------------------------------------~%")
  (print-argument (gsi-managed-svref arguments gsi-magic-offset)
		  0
		  (gsi-managed-svref item-or-value-store? store-index))
 ; (format t "------------------------------------ end of argument.~%")

  (if (= store-index store-size)
      (setf store-index gsi-magic-offset)
      (incf store-index))
  (free-argument-memory (gsi-managed-svref item-or-value-store? store-index))

  (incf foo-count)
  (when (eq (mod foo-count 100) 0)
    (format t "~a " foo-count))
  (when (eq (mod foo-count 1000) 0)
    (format t "~%")))


(defun-simple receive-item-transfer (arguments count)
  (declare (ignore count))
  
  (format t "~%")
  (format t "------------------------------------~%")
  (format t "  Printing argument~%")
  (format t "------------------------------------~%")
  (print-argument (gsi-managed-svref arguments gsi-magic-offset)
		  0
		  (gsi-managed-svref item-or-value-store? store-index))
  (format t "------------------------------------ end of argument.~%")

  (if (= store-index store-size)
      (setf store-index gsi-magic-offset)
      (incf store-index))
  (free-argument-memory (gsi-managed-svref item-or-value-store? store-index))
  (gsi-rpc-return-values nil 0))


(defun-simple receive-and-return-copy (arguments count)
  (declare (ignore count))
  
  (format t "~%")
  (format t "------------------------------------~%")
  (format t "  Printing argument~%")
  (format t "------------------------------------~%")
  (print-argument (gsi-managed-svref arguments gsi-magic-offset)
		  0
		  (gsi-managed-svref item-or-value-store? store-index))
  (format t "------------------------------------ end of argument.~%")
  
  (gsi-rpc-return-values (gsi-displace-array item-or-value-store? store-index) 1)

  (if (= store-index store-size)
      (setf store-index gsi-magic-offset)
      (incf store-index))
  (free-argument-memory (gsi-managed-svref item-or-value-store? store-index)))


(defun-simple receive-request-for-copy (arguments count)
  (declare (ignore count))
  (loop with search-name = (gsi-sym-of
			     (gsi-managed-svref arguments gsi-magic-offset))
	for i from gsi-magic-offset to store-size
	as item-or-value = (gsi-managed-svref item-or-value-store? i)
	as iv-type = (gsi-type-of item-or-value)
	as iv-name? = (if (<f iv-type gsi-item-type-tag)
			  nil
			  (gsi-sym-of (gsi-attr-by-name item-or-value 'name)))
	do (when (and iv-name? (eq iv-name? search-name))
	     (gsi-rpc-return-values (gsi-displace-array item-or-value-store? i) 1)
	     (return))
	finally
	  (gsi-rpc-return-values error-object-array 1)))
	




;  (let* ((duplicate-arguments (gsi-make-items count)))
;    (loop for i from gsi-magic-offset below (+f count gsi-magic-offset)
;	  as argument = (gsi-managed-svref arguments i)
;	  as duplicate = (gsi-managed-svref duplicate-arguments i)
;	do (print-argument argument 0 duplicate))
    
;    (loop for i from gsi-magic-offset below (+f count gsi-magic-offset)
;	  as duplicate = (gsi-managed-svref duplicate-arguments i)
;	do (free-argument-memory duplicate))
;    (gsi-reclaim-items duplicate-arguments)))
