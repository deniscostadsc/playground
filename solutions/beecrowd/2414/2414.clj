(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (println (reduce max (map #(Integer/parseInt %) (str/split line #" "))))
      (recur (read-line)))))

(main)
