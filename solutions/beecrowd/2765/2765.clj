(ns main)

(defn process-sentence [sentence]
  (let [comma-position (.indexOf sentence (int \,))]
    (println (.substring sentence 0 comma-position))
    (println (.substring sentence (inc comma-position)))))

(defn main []
  (loop [sentence (read-line)]
    (when sentence
      (process-sentence sentence)
      (recur (read-line)))))

(main)
