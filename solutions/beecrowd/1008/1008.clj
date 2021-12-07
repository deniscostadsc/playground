(ns main)

(defn main []
  (let [a (Integer/parseInt (read-line))
        b (Integer/parseInt (read-line))
        c (Double/parseDouble (read-line))]
    (println "NUMBER =" a)
    (println "SALARY = U$" (format "%.2f" (* c b)))))

(main)
