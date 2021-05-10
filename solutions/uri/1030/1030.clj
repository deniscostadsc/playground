(ns main)

(require '[clojure.string :as str])

(defn josephus
  [n, k]
  (if (= n 1)
    1
    (-> (recur (dec 1) k)
        (+ k)
        (- 1)
        (mod n)
        (+ 1))))

(defn main
  [c q]
  (let [numbers (map #(Integer/parseInt %) (str/split (read-line) #" "))]
    (println (format "Case %d: %d" c (josephus (get numbers 0) (get numbers 1))))
    (when (< c q)
      (recur (inc c) q))))

(let [q (Integer/parseInt (read-line))]
    (main 1 q))
