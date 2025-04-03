(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when (not= line "0 0 0")
      (let [[a b c] (map #(Integer/parseInt %) (str/split line #" "))]
        (println (int (Math/pow (* a b c) (/ 1 3)))))
      (recur (read-line)))))

(main)
