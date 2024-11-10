(ns main)

(defn print-range [number]
  (cond
    (and (>= number 0.0) (<= number 25.0))
    (println "Intervalo [0,25]")
    (and (> number 25.0) (<= number 50.0))
    (println "Intervalo (25,50]")
    (and (> number 50.0) (<= number 75.0))
    (println "Intervalo (50,75]")
    (and (> number 75.0) (<= number 100.0))
    (println "Intervalo (75,100]")
    :else
    (println "Fora de intervalo")))

(defn main []
  (loop [line (read-line)]
    (when line
      (print-range (Double/parseDouble line))
      (recur (read-line)))))

(main)
