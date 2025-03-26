(ns main)

(defn log2 [number]
  (int (/ (Math/log number) (Math/log 2))))

(defn main []
  (loop [line (read-line)]
    (when line
      (println (log2 (Integer/parseInt line)))
      (recur (read-line)))))

(main)
