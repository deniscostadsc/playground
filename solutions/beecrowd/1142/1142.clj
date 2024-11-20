(ns main)

(defn print-pum [number]
  (loop [line-number 0
         next-number 1]
    (when (< line-number number)
      (printf "%d %d %d PUM%n" next-number (+ next-number 1) (+ next-number 2))
      (recur (inc line-number)
             (+ next-number 4)))))

(defn main []
  (loop [line (read-line)]
    (when line
      (print-pum (Integer/parseInt line))
      (recur (read-line)))))

(main)
