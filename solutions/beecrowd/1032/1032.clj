(ns main)

(defn divisible? [number divisor]
  (zero? (rem number divisor)))

(def prime?
  (memoize (fn [number]
             (cond (= number 2) true
                   (or (< number 2) (divisible? number 2)) false
                   :else (loop [divisor 3]
                           (cond
                             (> divisor (Math/sqrt number)) true
                             (divisible? number divisor) false
                             :else (recur (+ divisor 2))))))))

(def next-prime
  (memoize (fn [number]
             (loop [next-number (inc number)]
               (if (prime? next-number)
                 next-number
                 (recur (inc next-number)))))))

;; (def josephus
;;   (memoize (fn [n k]
;;              (if (= n 1)
;;                1
;;                (-> (josephus (dec n) (next-prime k))
;;                    (+ k)
;;                    (dec)
;;                    (mod n)
;;                    (inc))))))

(defn josephus [n]
  (let [primes (take n (iterate next-prime 2))]
    (loop [current-n 1
           result 1
           prime-index 0]
      (if (> current-n n)
        result
        (let [k (nth primes prime-index)
              next-result (inc (mod (+ result k -1) current-n))]
          (recur (inc current-n) next-result (inc prime-index)))))))

(defn main []
  (loop [number (Integer/parseInt (read-line))]
    (when (not= number 0)
      (println (josephus number))
      (recur (Integer/parseInt (read-line))))))

(main)
