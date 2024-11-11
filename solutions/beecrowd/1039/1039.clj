(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[r1 x1 y1 r2 x2 y2] (->> (str/split line #" ")
                                     (map #(Integer/parseInt %)))
            distance (Math/sqrt
                      (+
                       (Math/pow (- x1 x2) 2)
                       (Math/pow (- y1 y2) 2)))]
        (if (>= r1 (+ distance r2))
          (println "RICO")
          (println "MORTO")))
      (recur (read-line)))))

(main)
