(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[v t] (->> (str/split line #" ")
                       (map #(Integer/parseInt %)))]
        (printf "%d%n" (* v t 2)))
      (recur (read-line)))))

(main)
