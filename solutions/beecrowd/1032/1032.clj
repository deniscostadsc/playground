(ns main)

(defn divisible? [number divisor]
  (zero? (rem number divisor)))

(def prime?
  (memoize (fn [number]
            ;;  (printf "(prime? %d)%n" number)
             (cond (= number 2)
                   true
                   (or (< number 2) (divisible? number 2))
                   false
                   :else
                   (not-any? #(divisible? number %) (range 3 (+ (Math/sqrt number) 1) 2))))))

(def next-prime
  (memoize (fn [number]
            ;;  (printf "(next-prime %d)%n" number)
             (let [next-number (inc number)]
            ;;    (printf "next-number: %d%n" next-number)
               (if (prime? next-number)
                 next-number
                 (next-prime (inc number)))))))

(defn josephus [n]
  (loop [current-n 2
         k 2
         result 1]
    ;; (printf "result %d%n" result)
    (if (> current-n n)
      result
      (recur (inc current-n)
             (next-prime k)
             (-> result
                 (+ k)
                 (dec)
                 (mod current-n)
                 (inc))))))

(defn main []
  (loop [number (Integer/parseInt (read-line))]
    (when (not= number 0)
      (printf "%d%n" (josephus number))
      (recur (Integer/parseInt (read-line))))))

(main)


(defn print-primes []
  (loop [n 2]
    (when (<= n 200)
      (printf "%d -> %d%n" n (next-prime n))
      (recur (next-prime n)))))

;; (print-primes)
