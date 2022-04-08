(ns main
  (:require [clojure.string :as str]))

(defn gcd [a b]
  (loop [a' a
         b' b]
    (if (= b' 0)
      a'
      (recur b' (mod a' b')))))

(defn main []
  (let [testcases (-> (read-line)
                      Integer/parseInt)]
    (loop [current-testcase 0
           line (read-line)]
      (when (not= current-testcase testcases)
        (let [[a b] (str/split line #" ")
              a' (Integer/parseInt a)
              b' (Integer/parseInt b)]
          (printf "%d%n" (gcd a' b')))
        (recur (inc current-testcase)
               (read-line))))))

(main)
