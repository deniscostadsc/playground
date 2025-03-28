(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [splitted-line (str/split line #",")]
        (println (first splitted-line))
        (println (str/join "," (rest splitted-line))))
      (recur (read-line)))))

(main)
