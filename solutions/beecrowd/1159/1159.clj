(ns main)

(defn sum-next-five-even [number]
  (->> (range number (+ number 10))
       (filter even?)
       (reduce +)))

(defn main []
  (loop [x (Integer/parseInt (read-line))]
    (when (not= x 0)
      (println (sum-next-five-even x))
      (recur (Integer/parseInt (read-line))))))

(main)
