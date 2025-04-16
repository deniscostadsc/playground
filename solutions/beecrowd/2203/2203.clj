(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[xf yf xi yi vi r1 r2] (map #(Integer/parseInt %) (str/split line #" "))
            distance (-> (- xi xf)
                         (Math/pow 2)
                         (+ (Math/pow (- yi yf) 2))
                         (Math/sqrt)
                         (+ (* vi 1.5)))]
        (if (<= distance (+ r1 r2))
          (println "Y")
          (println "N")))
      (recur (read-line)))))

(main)
