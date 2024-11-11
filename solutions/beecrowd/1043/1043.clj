(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[a b c] (->> (str/split line #" ")
                         (map #(Double/parseDouble %)))]
        (if (and (< a (+ b c))
                 (< b (+ a c))
                 (< c (+ a b)))
          (printf "Perimetro = %.1f%n" (+ a b c))
          (printf "Area = %.1f%n" (/ (* c (+ a b)) 2))))
      (recur (read-line)))))

(main)
