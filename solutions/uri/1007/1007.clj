(ns main)

(defn main []
  (let [a (Integer/parseInt (read-line))
        b (Integer/parseInt (read-line))
        c (Integer/parseInt (read-line))
        d (Integer/parseInt (read-line))]
    (- (* a b) (* c d))))

(println "DIFERENCA =" (main))
