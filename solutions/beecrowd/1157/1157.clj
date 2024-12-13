(ns main)

(defn divisible? [number divisor]
  (zero? (rem number divisor)))

(defn all-divisors [number]
  (loop [possible-divisor 1
         found-divisors []]
    (if (<= possible-divisor (int (Math/sqrt number)))
      (if (divisible? number possible-divisor)
        (recur (inc possible-divisor) (concat found-divisors [possible-divisor (/ number possible-divisor)]))
        (recur (inc possible-divisor) found-divisors))
      found-divisors)))

(defn main []
  (loop [line (read-line)]
    (when line
      (doseq [number (sort (set (all-divisors (Integer/parseInt line))))]
        (println number))
      (recur (read-line)))))

(main)
