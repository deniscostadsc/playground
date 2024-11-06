(ns main)

(defn divisible? [number divisor]
  (zero? (rem number divisor)))

(def prime?
  (memoize (fn [number]
             (cond (= number 2)
                   true
                   (or (< number 2) (divisible? number 2))
                   false
                   :else
                   (not-any? #(divisible? number %) (range
                                                     3
                                                     (-> (Math/sqrt number)
                                                         (Math/ceil)
                                                         (int)
                                                         (inc))
                                                     2))))))

(def next-prime
  (memoize (fn [number]
             (let [next-number (inc number)]
               (if (prime? next-number)
                 next-number
                 (next-prime (inc number)))))))

(def nth-prime
  (memoize (fn [nth]
             (loop [index 0
                    prime 2]
               (cond (= nth 0)
                     2
                     (= index (dec nth))
                     (next-prime prime)
                     :else
                     (recur (inc index)
                            (next-prime prime)))))))

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
  (loop [current-n 1
        ;;  index-prime 0
         result 1]
    (printf "prime: %d > %d%n" (- n current-n) (nth-prime (- n current-n)))
    (printf "current-n: %d%n" current-n)
    (printf "result: %d%n" result)
    (printf "--%n")
    (cond (= n 1)
          1
          (= current-n (inc n))
          result
          :else
          (recur (inc current-n)
            ;;  (inc index-prime)
                 (-> result
                     (+ (nth-prime (- n current-n)))
                     (dec)
                     (mod current-n)
                     (inc))))))

(defn main []
  (loop [number (Integer/parseInt (read-line))]
    (printf "-----------%n")
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


(defn print-nth-primes []
  (loop [n 0]
    (when (<= n 200)
      (printf "%d -> %d%n" n (nth-prime n))
      (recur (inc n)))))

;; (print-nth-primes)
