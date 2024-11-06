(ns main
  (:require [clojure.string :as str]))

(defn accepted-values? [a b c d]
  (and (> b c)
       (> d a)
       (> (+ c d) (+ a b))
       (> c 0)
       (> d 0)
       (zero? (mod a 2))))

(defn main []
  (loop [line (read-line)]
   (when line
     (let [[a b c d] (->> (str/split line #" ")
                          (map #(Integer/parseInt %)))]
       (if (accepted-values? a b c d)
         (printf "Valores aceitos%n")
         (printf "Valores nao aceitos%n"))
       (recur (read-line))))))

(main)
