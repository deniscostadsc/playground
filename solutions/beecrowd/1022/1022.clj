(ns main
  (:require [clojure.string :as str]))

(defn gcd [a b]
  (loop [a' a
         b' b]
    (if (= 0 b')
      a'
      (recur b' (mod a' b')))))

(defn solve-expression [num-1 den-1 operator num-2 den-2]
  (cond
    (= operator "+")
    [(+ (* num-1 den-2) (* num-2 den-1))
     (* den-1 den-2)]
    (= operator "-")
    [(- (* num-1 den-2) (* num-2 den-1))
     (* den-1 den-2)]
    (= operator "*")
    [(* num-1 num-2)
     (* den-1 den-2)]
    :else
    [(* num-1 den-2)
     (* num-2 den-1)]))

(defn main []
  (let [n (-> (read-line)
              (Integer/parseInt))]
    (loop [n' n]
      (when (> n' 0)
        (let [[num-1 _ den-1 operator num-2 _ den-2] (str/split (read-line) #" ")
              [num-1' den-1' num-2' den-2'] (map #(Integer/parseInt %) [num-1 den-1 num-2 den-2])
              [num den] (solve-expression num-1' den-1' operator num-2' den-2')
              gcd (gcd num den)]
          (println (format "%d/%d = %d/%d" num den (/ num gcd) (/ den gcd)))
          (recur (- n' 1)))))))

(main)
