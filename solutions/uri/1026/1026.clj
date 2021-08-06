(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[a b] (str/split line #" ")
            a' (Long/parseLong a)
            b' (Long/parseLong b)]
        (printf "%d%n" (bit-xor a' b')))
      (recur (read-line)))))

(main)
