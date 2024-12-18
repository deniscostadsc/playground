(ns main)

(defn main []
  (loop [line (read-line)]
    (when line
      (println (* 4 (Integer/parseInt line)))
      (recur (read-line)))))

(main)
