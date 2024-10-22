(ns main)

(defn in? [start end val]
  (and (>= val start) (<= val end)))

(defn letter? [char]
  (or (in? 65 90 (int char))
      (in? 97 122 (int char))))

(defn encrypt [string]
  (loop [index (dec (count string))]
    (let [current-char (.charAt string index)
          encrypted-char (if (letter? current-char)
                           (char (+ (int current-char) 3))
                           current-char)
          encrypted-char (if (< index (/ (count string) 2))
                           (char (- (int encrypted-char) 1))
                           encrypted-char)]
      (printf "%c" encrypted-char))
    (if (> index 0)
      (recur (dec index))
      (printf "%n"))))

(defn main []
  (loop [n (Integer/parseInt (read-line))]
    (let [line (read-line)]
      (encrypt line))
    (when (> n 1)
      (recur (dec n)))))

(main)
