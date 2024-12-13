(ns main
  (:require [clojure.string :as string]))

(def notas [10000.0 5000.0 2000.0 1000.0 500.0 200.0])
(def coins [100.0 50.0 25.0 10.0 5.0 1.0])

(defn print-result [value currencies currency-type]
  (println (str (string/upper-case currency-type) "S:"))
  (loop [value value
         [currency & remaining-currencies] currencies]
    (let [quantity (quot value currency)]
      (printf
       "%.0f %s(s) de R$ %.2f%n"
       quantity
       currency-type
       (with-precision 2 (/ currency 100.0))))
    (if (seq remaining-currencies)
      (recur (mod value currency) remaining-currencies)
      (mod value currency))))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [value (-> line
                      Double/parseDouble)]
        (-> (* value 100)
            (print-result notas "nota")
            (print-result coins "moeda"))
        (recur (read-line))))))

(main)
