(ns main)

(defn in? [start end val]
  (and (>= val start) (<= val end)))

(defn letter? [char]
  (or (in? 65 90 (int char))
      (in? 97 122 (int char))))

(defn encrypt [string]
  (let [shifted (apply str (map (fn [character]
                                  (if (letter? character)
                                    (char (+ (int character) 3))
                                    character))
                                string))
        reversed (apply str (reverse shifted))
        half-point (quot (count reversed) 2)
        result (apply str (map-indexed (fn [i character]
                                         (if (>= i half-point)
                                           (char (- (int character) 1))
                                           character))
                                       reversed))]
    result))

(defn main []
  (let [n (Integer/parseInt (read-line))]
    (dotimes [_ n]
      (let [line (read-line)]
        (println (encrypt line))))))

(main)
