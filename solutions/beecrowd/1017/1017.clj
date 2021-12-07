(ns main)

(defn main []
  (let [h (-> (read-line) (Double/parseDouble))
        s (-> (read-line) (Double/parseDouble))]
    (printf "%.3f%n" (/ (* h s) 12))))

(main)
