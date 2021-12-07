(ns main
  (:require [clojure.string :as str]))

(defn str->double
  [sequence]
  (map #(Double/parseDouble %) sequence))

(defn read-line->double []
  (-> (read-line)
    (str/split #" ")
    (str->double)))

(defn main []
  (let [[x1 y1] (read-line->double)
        [x2 y2] (read-line->double)]
    (printf
      "%.4f%n"
      (Math/sqrt (+ (Math/pow (- x2 x1) 2) (Math/pow (- y2 y1) 2))))))

(main)
