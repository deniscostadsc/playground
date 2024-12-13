(ns main
  (:require [clojure.string :as str]))

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

(defn main []
  (loop [nc (Integer/parseInt (read-line))
         index 1]
    (let [[n k] (->> (str/split (read-line) #" ")
                     (map #(Integer/parseInt %)))]
      (printf "Case %d: %d%n" index (josephus n k))
      (when (< index nc)
        (recur nc (inc index))))))

(main)
