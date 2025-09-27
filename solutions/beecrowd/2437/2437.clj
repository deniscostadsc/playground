(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[x-m y-m x-r y-r] (->> (str/split line #" ")
                                   (map #(Integer/parseInt %)))]
        (println  (+ (Math/abs (- x-r x-m))
                     (Math/abs (- y-r y-m)))))
      (recur (read-line)))))

(main)
