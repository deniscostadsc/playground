(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)
         result 0.0]
    (if (not line)
      result
      (let [[_ b c] (str/split line #" ")
            b' (Double/parseDouble b)
            c' (Double/parseDouble c)]
        (recur (read-line) (+ result (* b' c')))))))

(printf "VALOR A PAGAR: R$ %.2f%n" (main))
