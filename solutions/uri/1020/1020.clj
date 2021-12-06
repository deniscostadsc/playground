(ns main)

(defn main []
  (loop [line (read-line)]
    (when line
      (let [value (-> line
                      (Integer/parseInt))
            years (quot value 365)
            months (-> (mod value 365)
                       (quot 30))
            days (-> (mod value 365)
                     (mod 30))]
        (printf "%d ano(s)%n%d mes(es)%n%d dia(s)%n" years months days))
      (recur (read-line)))))

(main)
