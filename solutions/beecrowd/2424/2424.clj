(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[x y] (str/split line #" ")
            x' (Integer/parseInt x)
            y' (Integer/parseInt y)]
        (if (every? true? [(>= x' 0) (<= x' 432) (>= y' 0) (<= y' 468)])
          (println "dentro")
          (println "fora"))
        (recur (read-line))))))

(main)
