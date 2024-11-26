(ns main
  (:require [clojure.string :as str]))

(defn filter-uppercase-letter [string]
  (apply str (filter #(Character/isLowerCase %) string)))

(defn main []
  (loop [index (Integer/parseInt (read-line))]
    (when (> index 0)
      (-> (read-line)
          (filter-uppercase-letter)
          (str/reverse)
          (println))
      (recur (dec index)))))

(main)
