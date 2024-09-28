(ns main
  (:require [clojure.string :as str]))

(defn debug [x]
  (println x)
  x)
(defn gimme-type [x]
  (println (type x))
  x)

(defn gcd [a b]
  (println (type a) " - " (type b))
  (loop [a' a
         b' b]
    (println (type a') " - " (type b'))
    (if (= 0 b')
      a'
      (recur 'b (mod a' b')))))

(defn process-input [line]
  (let [[a' _ b' o c' _ d'] (str/split line #" ")
        [a b c d] (map #(Integer/parseInt %) [a' b' c' d'])]
    (cond
      (= o "+")
      (-> (* b d)
          (* a)
          (/ b)
          (+ (* b d))
          (* c)
          (/ d)
          (gcd (* b d)))
      (= o "-")
      (-> (* b d)
          (* a)
          (/ b)
          (- (* b d))
          (* c)
          (/ d)
          (gcd (* b d)))
      (= o "*")
      (-> a
          (* c)
          (gcd (* b d)))
      :else
      (-> a
          (debug)
          (gimme-type)
          (* d)
          (debug)
          (gimme-type)
          (gcd (* b c))))))

(defn main []
  (let [c (-> (read-line)
              (Integer/parseInt))]
    (loop [c' c]
      (process-input (read-line))
      (when c'
        (recur (- c' 1))))))

(main)
