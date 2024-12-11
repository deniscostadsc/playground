(ns main
  (:require [clojure.string :as str]))

(defn sum-odd-number [start quantity]
  (->> (iterate inc start)
       (filter odd?)
       (take quantity)
       (reduce +)))

(defn main []
  (loop [n (Integer/parseInt (read-line))]
    (when (> n 0)
      (let [[x y] (->> (str/split (read-line) #" ")
                       (map #(Integer/parseInt %)))]
        (println (sum-odd-number x y))
        (recur (dec n))))))

(main)
