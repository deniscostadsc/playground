(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[n q] (->> (str/split line #" ")
                       (map #(Integer/parseInt %)))]
        (cond
          (= n 1)
          (printf "Total: R$ %.2f%n", (* 4.0 q))
          (= n 2)
          (printf "Total: R$ %.2f%n", (* 4.5 q))
          (= n 3)
          (printf "Total: R$ %.2f%n", (* 5.0 q))
          (= n 4)
          (printf "Total: R$ %.2f%n", (* 2.0 q))
          :else
          (printf "Total: R$ %.2f%n", (* 1.5 q))))
      (recur (read-line)))))

(main)
