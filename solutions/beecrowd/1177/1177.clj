(ns main)

(defn main[]
  (let [n (Integer/parseInt (read-line))]
    (loop [index 0
           value 0]
    (when (< index 1000)
      (printf "N[%d] = %d%n" index value)
      (if (< value (dec n))
        (recur (inc index) (inc value))
        (recur (inc index) 0))))))

(main)
