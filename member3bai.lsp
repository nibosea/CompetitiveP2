(defun member3bai (%x %lst)
	(cond ((null %lst) nil)
        	((eq (* 3 %x) (car %lst)) t)
        	(t (member3bai %x (cdr %lst)))
        )
)
