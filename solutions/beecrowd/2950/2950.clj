(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[distance palantir-sauron palantir-saruman] (map #(Double/parseDouble %) (str/split line #" "))
            result (/ distance (+ palantir-sauron palantir-saruman))
            result-times-a-thousand (* result 1000)
            final-result (if (zero? (mod result-times-a-thousand 5)) (inc result-times-a-thousand) result-times-a-thousand)]
        (printf "%.2f%n" (/ final-result 1000)))
      (recur (read-line)))))

(main)
