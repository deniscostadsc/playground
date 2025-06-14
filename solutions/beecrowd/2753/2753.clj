(ns main)

(defn main []
  (loop [i 97]
    (when (<= i 122)
      (printf "%d e %c%n" i (char i))
      (recur (inc i)))))

(main)
