(ns main)

(defn main []
  (let [a (Double/parseDouble (read-line))
        b (Double/parseDouble (read-line))]
    (format "%.5f" (/ (+ (* a 3.5) (* b 7.5)) 11.0))))

(println "MEDIA =" (main))
