(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[huguinho zezinho luisinho] (map #(Integer/parseInt %) (str/split line #" "))
            [_ middle-nephew _] (sort [huguinho zezinho luisinho])]
        (cond
          (= middle-nephew huguinho)
          (println "huguinho")
          (= middle-nephew zezinho)
          (println "zezinho")
          (= middle-nephew luisinho)
          (println "luisinho")))
      (recur (read-line)))))

(main)
