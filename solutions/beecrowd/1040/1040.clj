(ns main
  (:require [clojure.string :as str]))

(defn retake-exam [average]
  (println "Aluno em exame.")
  (let [retake-grade (Double/parseDouble (read-line))
        final-average (/ (+ retake-grade average) 2.0)]
    (printf "Nota exame: %.1f%n" retake-exam)
    (if (> final-average 5.0)
      (println "Aluno aprovado.")
      (println "Aluno reprovado."))
    (printf "Media final: %.1f%n" final-average)))

(defn grade [n1 n2 n3 n4]
  (let [average (/ (+ (* n1 2) (* n2 3) (* n3 4) n4) 10)]
    (printf "Media: %.1f%n" average)
    (cond (>= average 7.0)
          (println "Aluno aprovado.")
          (>= average 5.0)
          (retake-exam average)
          :else
          (println "Aluno reprovado."))))

(defn main []
  (loop [line (read-line)]
    (when line
      (let [[n1 n2 n3 n4] (->> (str/split line #" ")
                               (map #(Double/parseDouble %)))]
        (grade n1 n2 n3 n4))
      (recur (read-line)))))

(main)
