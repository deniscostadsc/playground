(ns main)

(defn main []
  (let [n (Integer/parseInt (read-line))]
    (loop [i 1]
      (when (<= i n)
        (println (format "%d %d %d" i (* i i) (* i i i)))
        (recur (inc i))))))

(main)
