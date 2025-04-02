(ns main)

(defn main []
  (loop [line (read-line) jewels []]
    (if line
      (recur (read-line) (conj jewels line))
      (println (count (set jewels))))))

(main)
