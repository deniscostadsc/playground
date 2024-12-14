(ns main
  (:require [clojure.string :as str]))

(def pi 3.14159)

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[a b c] (str/split line #" ")
            a' (Double/parseDouble a)
            b' (Double/parseDouble b)
            c' (Double/parseDouble c)]
        (printf "TRIANGULO: %.3f%n" (/ (* a' c') 2))
        (printf "CIRCULO: %.3f%n" (* pi c' c'))
        (printf "TRAPEZIO: %.3f%n" (* (/ (+ a' b') 2) c'))
        (printf "QUADRADO: %.3f%n" (* b' b'))
        (printf "RETANGULO: %.3f%n" (* a' b')))
      (recur (read-line)))))

(main)
