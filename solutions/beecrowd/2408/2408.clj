(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[_ b _] (->> (str/split line #" ")
                         (map #(Integer/parseInt %))
                         sort)]
        (printf "%d%n" b))
      (recur (read-line)))))

(main)
