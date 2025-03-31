(ns main)

(defn main []
  (read-line)
  (loop [line (read-line) winners-count 0]
    (if line
      (recur (read-line) (if (not= line "1") (inc winners-count) winners-count))
      (println winners-count))))

(main)
