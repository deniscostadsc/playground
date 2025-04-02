(ns main)

(defn main []
  (loop [line (read-line)]
    (when line
      (let [monica-age (Integer/parseInt line)
            first-son (Integer/parseInt (read-line))
            second-son (Integer/parseInt (read-line))]
        (println (max first-son second-son (-> monica-age
                                               (- first-son)
                                               (- second-son)))))
      (recur (read-line)))))

(main)
