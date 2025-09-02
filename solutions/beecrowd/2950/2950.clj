(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[distance palantir-sauron palantir-saruman] (map #(BigDecimal. %) (str/split line #" "))
            result (.divide distance (+ palantir-sauron palantir-saruman) 2 java.math.RoundingMode/HALF_EVEN)]
        (println (str result)))
      (recur (read-line)))))

(main)
