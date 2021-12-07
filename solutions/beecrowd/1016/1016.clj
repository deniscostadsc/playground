(ns main)

(defn main []
  (let [n (read-line)
        n' (Integer/parseInt n)]
    (printf "%d minutos%n" (* (quot 150 60) n'))))

(main)
