(ns main)

(defn main []
  (loop [count 0
         line (read-line)]
    (if (not line)
      count
      (recur
       (if (> (Double/parseDouble line) 0)
         (+ count 1)
         count)
       (read-line)))))

(println (format "%d valores positivos" (main)))
