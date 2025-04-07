(ns main)

(defn letter-variations [letter]
  (if (#{\a \e \i \o \s \A \E \I \O \S} letter)
    3
    2))

(defn count-variations [password]
  (apply * (map letter-variations password)))

(defn main []
  (read-line)
  (loop [line (read-line)]
    (when line
      (println (count-variations line))
      (recur (read-line)))))

(main)
