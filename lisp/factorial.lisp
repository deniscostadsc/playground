#!/usr/bin/clisp

(defun fat (n)
    (if (= n 0)
        1
        (* n (fat (- n 1)))
    )
)

(print(fat 6005))
