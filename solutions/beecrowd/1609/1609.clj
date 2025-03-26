(ns main
  (:require [clojure.string :as str]))

(defn main []
  (read-line)
  (loop [_ (read-line)
         line (read-line)]
    (when line
      (println (count (set (map #(Integer/parseInt %) (str/split line #" ")))))
      (recur (read-line) (read-line)))))

(main)
