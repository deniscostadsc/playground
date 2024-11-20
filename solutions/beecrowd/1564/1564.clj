(ns main)

(defn main []
  (loop [line (read-line)]
    (when line
      (if (= line "0")
        (println "vai ter copa!")
        (println "vai ter duas!"))
      (recur (read-line)))))

(main)
