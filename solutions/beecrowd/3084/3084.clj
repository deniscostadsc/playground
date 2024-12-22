(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[hour-degree minute-degree] (map #(Integer/parseInt %) (str/split line #" "))]
        (printf "%02d:%02d%n" (int (/ hour-degree 30)) (int (/ minute-degree 6))))
      (recur (read-line)))))

(main)
