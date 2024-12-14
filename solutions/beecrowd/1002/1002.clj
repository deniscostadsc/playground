(ns main)

(defn main []
  (let [n (Double/parseDouble (read-line))]
   (format "%.4f" (* n n 3.14159))))

(printf "A=%s%n" (main))
