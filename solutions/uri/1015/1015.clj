(ns main
  (:require [clojure.string :as str]))

(defn main []
  (let [[x1 y1] (-> (read-line) (str/split #" "))
        [x2 y2] (-> (read-line) (str/split #" "))
        [x1' y1' x2' y2'] (map #(Double/parseDouble %) [x1 y1 x2 y2])]
    (printf "%.4f%n" (Math/sqrt (+ (Math/pow (- x2' x1') 2) (Math/pow (- y2' y1') 2))))))

(main)
