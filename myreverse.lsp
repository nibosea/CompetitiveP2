(defun myreverse (%lst)
  (let ((=result nil))
	  (do ()
		( (null %lst) =result)
		(setq =result (cons (car %lst) =result))
		(format t "~% sentouha ~s desu." (car %lst))
		(format t  "~% imaha ~s desu." =result)
		(setq %lst (cdr %lst))
	  )
  )
)
