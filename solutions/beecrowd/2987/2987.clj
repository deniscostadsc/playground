(ns main)

(def upper-case-letter (map char (range 65 91)))

(def upper-case-letter-indexes (zipmap upper-case-letter (range 1 27)))

(defn main []
  (loop [line (read-line)]
    (when line
      (println (get upper-case-letter-indexes (first line)))
      (recur (read-line)))))

(main)
