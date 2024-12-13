(ns main)

(defn josephus [n k]
  (loop [current-n 2
         result 1]
    (if
     (> current-n n)
      result
      (recur (inc current-n)
             (-> result
                 (+ k)
                 dec
                 (mod current-n)
                 inc)))))

(defn calculate [n]
  (loop [m 1]
    (if (= 12 (josephus (dec n) m))
      m
      (recur (inc m)))))

(defn main []
  (loop [line (Integer/parseInt (read-line))]
    (printf "%d%n" (calculate line))
    (let [line' (Integer/parseInt (read-line))]
      (when (not= line' 0)
        (recur line')))))

(main)
