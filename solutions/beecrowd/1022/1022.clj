(ns main
  (:require [clojure.string :as str]))

(defn gcd [a b]
  (loop [a' a
         b' b]
    (if (= 0 b')
      a'
      (recur b' (mod a' b')))))

(defn process-input [line]
  (let [[a' _ b' o c' _ d'] (str/split line #" ")
        [a b c d] (map #(Integer/parseInt %) [a' b' c' d'])]
    (cond
      (= o "+")
      (let [n (+ (* a d) (* c b))
            d (* b d)]
        [n d])
      (= o "-")
      (let [n (- (* a d) (* c b))
            d (* b d)]
        [n d])
      (= o "*")
      (let [n (* a c)
            d (* b d)]
        [n d])
      :else
      (let [n (* a d)
            d (* b c)]
        [n d]))))

(defn main []
  (let [c (-> (read-line)
              (Integer/parseInt))]
    (loop [c' c]
      (when (> c' 0)
        (let [[n d] (process-input (read-line))]
          (println (format "%d/%d = %d/%d" n d (/ n (gcd n d)) (/ d (gcd n d))))
          (recur (- c' 1)))))))

(main)
