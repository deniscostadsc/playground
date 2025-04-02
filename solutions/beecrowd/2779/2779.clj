(ns main)

(defn main []
  (let [sticker-total-count (Integer/parseInt (read-line))]
    (read-line)
    (loop [line (read-line) sticker-bought-unique []]
      (if line
        (recur (read-line) (conj sticker-bought-unique (Integer/parseInt line)))
        (println (- sticker-total-count (count (set sticker-bought-unique))))))))

(main)
