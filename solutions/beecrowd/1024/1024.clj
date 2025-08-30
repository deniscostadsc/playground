(ns main)

(defn in? [start end val]
  (and (>= val start) (<= val end)))

(defn letter? [char]
  (or (in? 65 90 (int char))
      (in? 97 122 (int char))))

(defn encrypt [string]
  (let [reversed (apply str (reverse string))
        half-point (quot (count reversed) 2)]
    (apply str (map-indexed (fn [i character]
                              (let [char1 (if (letter? character)
                                           (char (+ (int character) 3))
                                           character)
                                    char2 (if (>= i half-point)
                                           (char (- (int char1) 1))
                                           char1)]
                                char2))
                            reversed))))

(defn main []
  (let [n (Integer/parseInt (read-line))]
    (dotimes [_ n]
      (let [line (read-line)]
        (println (encrypt line))))))

(main)
