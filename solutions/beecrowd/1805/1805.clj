(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when (seq line)
      (let [[first last] (->> (str/split line #" ")
                              (map #(Integer/parseInt %)))]
        (printf "%d%n" (/ (* (inc (- last first)) (+ first last)) 2)))
      (recur (read-line)))))

(main)
