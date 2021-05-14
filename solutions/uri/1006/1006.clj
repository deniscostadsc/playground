(ns main)

(defn main []
  (let [a (Double/parseDouble (read-line))
        b (Double/parseDouble (read-line))
        c (Double/parseDouble (read-line))]
    (format "%.1f" (/ (+ (* a 2.0) (* b 3.0) (* c 5.0)) 10.0))))

(println "MEDIA =" (main))
