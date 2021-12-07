(ns main)

(defn main []
  (let [_ (read-line)
        a (Double/parseDouble (read-line))
        b (Double/parseDouble (read-line))]
    (format "%.2f" (+ a (* b 0.15)))))

(printf "TOTAL = R$ %s%n" (main))
