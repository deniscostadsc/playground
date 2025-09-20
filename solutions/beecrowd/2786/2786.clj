(ns main)

(defn main []
  (loop [line (read-line)]
    (when line
      (let [l (Integer/parseInt line)
            c (Integer/parseInt (read-line))]
        (printf
         "%d%n%d%n"
         (+ (* l c) (* (- l 1) (- c 1)))
         (+ (* (- l 1) 2) (* (- c 1) 2)))

        (recur (read-line))))))

(main)
