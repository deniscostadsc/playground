(ns main
  (:require [clojure.string :as str]))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[otavio bruno ian] (map #(Double/parseDouble %) (str/split line #" "))
            fastest (min otavio bruno ian)]
        (cond
          (and (= otavio fastest) (every? #(not= fastest %) [bruno ian]))
          (println "Otavio")
          (and (= bruno fastest) (every? #(not= fastest %) [otavio ian]))
          (println "Bruno")
          (and (= ian fastest) (every? #(not= fastest %) [otavio bruno]))
          (println "Ian")
          :else
          (println "Empate")))
      (recur (read-line)))))

(main)
