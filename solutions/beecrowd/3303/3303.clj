(ns main)

(defn main []
  (loop [line (read-line)]
    (when line
      (if (< (count line) 10)
        (println "palavrinha")
        (println "palavrao"))
      (recur (read-line)))))

(main)
