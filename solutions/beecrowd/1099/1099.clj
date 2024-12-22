(ns main
  (:require [clojure.string :as str]))

(defn main []
  (let [n (Integer/parseInt (read-line))]
    (loop [index 0]
      (when (< index n)
        (let [[x y] (map #(Integer/parseInt %) (str/split (read-line) #" "))
              [x y] [(inc (min x y)) (max x y)]]
          (if (zero? (mod x 2))
            (println (apply + (range (inc x) y 2)))
            (println (apply + (range x y 2)))))
        (recur (inc index))))))

(main)
