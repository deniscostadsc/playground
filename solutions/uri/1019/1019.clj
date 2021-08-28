(ns main)

(def seconds-per-hour (* 60 60))
(def seconds-per-minutes 60)

(defn main []
  (loop [line (read-line)]
    (when line
      (let [value (Integer/parseInt line)
            hours (quot value seconds-per-hour)
            value (mod value seconds-per-hour)
            minutes (quot value seconds-per-minutes)
            seconds (mod value seconds-per-minutes)]
        (printf "%d:%d:%d%n" hours minutes seconds))
      (recur (read-line)))))

(main)
