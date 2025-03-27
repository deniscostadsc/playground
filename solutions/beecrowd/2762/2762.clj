(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (println (->> (str/split line #"\.")
                    (map #(Integer/parseInt %))
                    reverse
                    (str/join ".")))
      (recur (read-line)))))

(main)
