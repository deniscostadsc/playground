(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[a b c] (->> (str/split line #" ")
                         (map #(Integer/parseInt %)))
            result (-> (- a b)
                       (Math/abs)
                       (+  b)
                       (+  a)
                       (/  2))
            result (-> (- c result)
                       (Math/abs)
                       (+  result)
                       (+  c)
                       (/  2))]
        (printf "%d eh o maior%n" result))
      (recur (read-line)))))

(main)
