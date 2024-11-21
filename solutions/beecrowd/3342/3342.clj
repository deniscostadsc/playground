(ns main)

(defn main []
  (loop [line (read-line)]
    (when line
      (let [number (Integer/parseInt line)
            black-squares (-> number
                              (Math/pow 2)
                              (/ 2)
                              (int))
            white-square (if (zero? (mod number 2))
                           black-squares
                           (+ black-squares 1))]
        (printf "%d casas brancas e %d casas pretas%n" white-square black-squares))
      (recur (read-line)))))

(main)
