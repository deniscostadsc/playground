(ns main
  (:require [clojure.string :as str]))

(defn maior-ab
  [a b]
  (-> (- a b)
      Math/abs
      (+  b)
      (+  a)
      (/  2)))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[a b c] (->> (str/split line #" ")
                         (map #(Integer/parseInt %)))
            result (maior-ab a b)
            result (maior-ab c result)]
        (printf "%d eh o maior%n" result))
      (recur (read-line)))))

(main)
