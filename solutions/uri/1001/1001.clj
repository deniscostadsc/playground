(ns main)

(defn main []
  (let [a (Integer/parseInt (read-line))
        b (Integer/parseInt (read-line))]
    (+ a b)))

(println "X =" (main))
