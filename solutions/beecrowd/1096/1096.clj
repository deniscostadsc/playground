(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [i 1]
    (when (<= i 9)
      (when (not= (mod i 2) 0)
        (printf "I=%d J=7\n" i)
        (printf "I=%d J=6\n" i)
        (printf "I=%d J=5\n" i))
      (recur (inc i)))))

(main)
