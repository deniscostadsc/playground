(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[a b c] (str/split line #" ")
            a' (Integer/parseInt a)
            b' (Integer/parseInt b)
            c' (Integer/parseInt c)
            result (/ (+ (+ (Math/abs (- a' b')) b') a') 2)
            result (/ (+ (+ (Math/abs (- c' result)) result) c') 2)]
        (printf "%d eh o maior%n" result))
      (recur (read-line)))))

(main)
