(ns main)

(defn main []
  (loop [line (read-line)]
    (when (seq line)
      (let [n (Long/parseLong line)]
        (printf "%d%n" (- (/ (* n (- n 1)) 2) n)))
      (recur (read-line)))))

(main)
