(ns main
  (:require [clojure.string :as str]))

(defn multiple? [a b]
  (if (or (zero? (mod a b)) (zero? (mod b a)))
    (println "Sao Multiplos")
    (println "Nao sao Multiplos")))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[a b] (map #(Integer/parseInt %) (str/split line #" "))]
        (multiple? a b))
      (recur (read-line)))))

(main)
