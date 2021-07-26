(ns main)

(def pi 3.14159)

(defn pow [x n]
  (reduce * (repeat n x)))

(defn main []
  (loop [line (read-line)]
    (when line
       (let [radius (Double/parseDouble line)]
         (printf "VOLUME = %.3f%n" (*(*(/ 4.0 3.0) pi) (pow radius 3))))
       (recur (read-line)))))

(main)
