(ns main)

(def fib
  (memoize (fn [number]
             (cond
               (<= number 1)
               number
               :else
               (+ (fib (- number 1))
                  (fib (- number 2)))))))

(def fib-calls
  (memoize (fn [number]
             (cond
               (<= number 1)
               0
               :else
               (+ (fib-calls (- number 1))
                  (fib-calls (- number 2))
                  2)))))

(defn print-result [number]
  (let [value (fib number)
        calls (fib-calls number)]
   (printf "fib(%d) = %d calls = %d%n" number calls value)))

(defn main []
  (loop [n (Integer/parseInt (read-line))]
    (print-result (Integer/parseInt (read-line)))
    (when (> n 1)
      (recur (dec n)))))

(main)
