(ns main)

(defn main []
  (loop [x (read-line)
         y (read-line)]
    (when x
      (let [x' (Double/parseDouble x)
            y' (Double/parseDouble y)]
        (printf "%.3f km/l%n" (/ x' y')))
      (recur (read-line) (read-line)))))

(main)
