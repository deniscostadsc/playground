(ns main)

(defn main []
  (loop [line (read-line)]
    (when line
      (let [b (Integer/parseInt line)
            g (Integer/parseInt (read-line))]
        (if (< (int (/ g 2)) b)
          (println "Amelia tem todas bolinhas!")
          (printf "Faltam %d bolinha(s)%n" (- (int (/ g 2)) b))))
      (recur (read-line)))))

(main)
