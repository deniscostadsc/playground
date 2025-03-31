(ns main
  (:require [clojure.string :as str]))

(defn main []
  (read-line)
  (loop [line (read-line)]
    (when line
      (let [[n k] (map #(Integer/parseInt %) (str/split line #" "))]
        (println (+ (quot n k) (mod n k))))
      (recur (read-line)))))

(main)
