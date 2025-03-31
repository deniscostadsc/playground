(ns main)

(defn main []
  (loop [line (read-line)]
    (when line
      (let [grade (Integer/parseInt line)
            average (Integer/parseInt (read-line))]
        (println (- (* average 2) grade)))
      (recur (read-line)))))

(main)
