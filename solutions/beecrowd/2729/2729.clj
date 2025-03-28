(ns main
  (:require [clojure.string :as str]))

(defn main []
  (read-line)
  (loop [line (read-line)]
    (when line
      (println (-> line
                   (str/split #" ")
                   set
                   sort
                   (#(str/join " " %))))
      (recur (read-line)))))

(main)
