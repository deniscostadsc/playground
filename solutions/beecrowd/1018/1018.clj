(ns main)

(defn main []
  (let [bills '(100 50 20 10 5 2 1)
        value (-> (read-line)
                  Integer/parseInt)]
    (println value)
    (loop [[bill & remaining-bills] bills
           v value]
      (printf "%d nota(s) de R$ %d,00%n" (quot v bill) bill)
      (when (seq remaining-bills)
        (recur
         remaining-bills
         (if (>= v bill)
           (->> (quot v bill)
                (* bill)
                (- v))
           v))))))

(main)
