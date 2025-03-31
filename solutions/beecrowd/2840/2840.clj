(ns main
  (:require [clojure.string :as str]))

(def PI 3.1415)

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[radius liters] (map #(Integer/parseInt %) (str/split line #" "))]
        (println (int (/ (* 3 liters) (* 4 PI (Math/pow radius 3))))))
      (recur (read-line)))))

(main)
