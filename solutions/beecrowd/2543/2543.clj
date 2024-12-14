(ns main
  (:require [clojure.string :as str]))

(defn count-contra-strike-gameplay [n university-id]
  (loop [index 0
         count-gameplay 0]
    (if (< index n)
      (let [[id gameplay] (map #(Integer/parseInt %) (str/split (read-line) #" "))]
        (if (and (= id university-id) (= gameplay 0))
          (recur (inc index) (inc count-gameplay))
          (recur (inc index) count-gameplay)))
      count-gameplay)))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[n university-id] (map #(Integer/parseInt %) (str/split line #" "))]
        (println (count-contra-strike-gameplay n university-id)))
      (recur (read-line)))))

(main)
