(ns main
  (:require [clojure.string :as str]))

(defn calculate [number]
  (loop [index 0
         result 0]
    (if (< index number)
      (let [[t v] (->> (str/split (read-line) #" ")
                       (map #(Integer/parseInt %)))]
        (recur (inc index)
               (+ result (* t v))))
      (println result))))

(defn main []
  (loop [line (read-line)]
    (when line
      (calculate (Integer/parseInt line))
      (recur (read-line)))))

(main)
