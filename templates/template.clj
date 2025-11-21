(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when (seq line)
      (let [n (->> (str/split line #" ")
                   (map #(Integer/parseInt %))
                   sort)]
        (printf "%d%n" n))
      (recur (read-line)))))

(main)
