(ns main)

(defn leap? [year]
  (or (zero? (mod year 400))
      (and (zero? (mod year 4)) (not (zero? (mod year 100))))))

(defn huluculu? [year]
  (zero? (mod year 15)))

(defn bulukulu? [year]
  (and (zero? (mod year 55))
       (leap? year)))

(defn main []
  (loop [first-test-case true
         line (read-line)]
    (when line
      (when (not first-test-case)
        (println))
      (let [year (bigint line)]
        (when (and (not (leap? year))
                   (not (huluculu? year))
                   (not (bulukulu? year)))
          (println "This is an ordinary year."))
        (when (leap? year)
              (println "This is leap year."))
        (when (huluculu? year)
              (println "This is huluculu festival year."))
        (when (bulukulu? year)
              (println "This is bulukulu festival year.")))
      (recur false (read-line)))))

(main)
