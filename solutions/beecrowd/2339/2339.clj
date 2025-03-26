(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[c p f] (map #(Integer/parseInt %) (str/split line #" "))]
        (println (if (<= (* c f) p) "S" "N")))
      (recur (read-line)))))

(main)
