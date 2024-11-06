(ns main
  (:require [clojure.string :as str]))

(defn delta [a b c]
  (-> (* b b)
      (- 4)
      (* a)
      (* c)))

(defn bhaskara [a b delta]
  [(-> b
       (* -1)
       (+ (Math/sqrt delta))
       (/ (* a 2)))
   (-> b
       (* -1)
       (- (Math/sqrt delta))
       (/ (* a 2)))])

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[a b c] (->> (str/split line #" ")
                         (map #(Double/parseDouble %)))
            delta' (delta a b c)]
        (if (and (>= delta' 0) (not= a 0))
          (let [[r1 r2] (bhaskara a b delta')]
            (printf "R1 = %.5f%n" r1)
            (printf "R2 = %.5f%n" r2))
          (printf "Impossivel calcular%n"))
        (recur (read-line))))))

(main)
