(ns main
  (:require [clojure.string :as str]))

(defn main []
  (read-line)
  (loop [line (read-line)]
    (when line
      (let [[n m] (map #(bigdec %) (str/split line #" "))]
        (println (count (take-while #(not (zero? %)) (iterate #(quot % 10) (.pow n m))))))
      (recur (read-line)))))

(main)
