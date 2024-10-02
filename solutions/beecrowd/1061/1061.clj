(ns main
  (:require [clojure.string :as str]))

(defn process-delta-time [initial-day final-day
                          initial-hour final-hour
                          initial-minute final-minute
                          initial-second final-second]
  (let [delta-day (- final-day initial-day)
        delta-hour (- final-hour initial-hour)
        delta-minute (- final-minute initial-minute)
        delta-second (- final-second initial-second)
        [delta-second delta-minute] (if (< delta-second 0)
                                      [(+ delta-second 60) (- delta-minute 1)]
                                      [delta-second delta-minute])
        [delta-minute delta-hour] (if (< delta-minute 0)
                                    [(+ delta-minute 60) (- delta-hour 1)]
                                    [delta-minute delta-hour])
        [delta-hour delta-day] (if (< delta-hour 0)
                                 [(+ delta-hour 24) (- delta-day 1)]
                                 [delta-hour delta-day])]
    (println delta-day "dia(s)")
    (println delta-hour "hora(s)")
    (println delta-minute "minuto(s)")
    (println delta-second "segundo(s)")))

(defn main []
  (loop [line (read-line)]
    (let [[initial-day] (->> (str/split line #" ")
                             (take-last 1)
                             (map #(Integer/parseInt %)))
          [initial-hour initial-minute initial-second] (->> (str/split (read-line) #" : ")
                                                            (map #(Integer/parseInt %)))
          [final-day] (->> (str/split (read-line) #" ")
                           (take-last 1)
                           (map #(Integer/parseInt %)))
          [final-hour final-minute final-second] (->> (str/split (read-line) #" : ")
                                                      (map #(Integer/parseInt %)))
          next-line (read-line)]
      (process-delta-time
       initial-day final-day
       initial-hour final-hour
       initial-minute final-minute
       initial-second final-second)
      (when next-line
        (recur next-line)))))

(main)
