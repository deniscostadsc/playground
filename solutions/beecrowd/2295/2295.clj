(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[a-price g-price a-distance g-distance] (map #(Double/parseDouble %) (str/split line #" "))]
        (println (if (> (/ a-distance a-price) (/ g-distance g-price)) "A" "G")))
      (recur (read-line)))))

(main)
