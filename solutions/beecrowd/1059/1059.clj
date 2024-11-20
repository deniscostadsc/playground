(ns main)

(defn main []
  (loop [i 2]
    (when (<= i 100)
      (println i)
      (recur (+ i 2)))))

(main)
