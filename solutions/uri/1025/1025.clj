(ns main
  (:require
   [clojure.string :as str]))

(defn binary-search [value items]
  (loop [begin 0
         end (-> (count items)
                 (dec))]
    (let [middle (-> (+ begin end)
                     (quot 2))
          items (vec items)]
      (if  (> begin end)
        -1
        (cond
          (< (items middle) value)
          (recur (inc middle)
                 end)

          (or (> (items middle) value)
              (and (> middle 0)
                   (== (items (dec middle)) value)))
          (recur begin
                 (dec middle))

          :else
          (inc middle))))))

(defn read-values [total]
  (loop [reverse-index total
         vals []]
    (if (== reverse-index 0)
      vals
      (recur (dec reverse-index)
             (concat vals [(Integer/parseInt (read-line))])))))


(defn process-print [index marbles queries]
  (printf "CASE# %d:%n" index)
  (loop [queries queries]
    (let [query (first queries)
          position (binary-search query marbles)]
      (if (>= position 0)
        (printf "%d found at %d%n" query position)
        (printf "%d not found%n" query)))
    (when (seq (rest queries))
      (recur (rest queries)))))

(defn main []
  (loop [line (read-line)
         index 1]
    (let [[n q] (->> (str/split line #" ")
                     (map #(Integer/parseInt %)))
          marbles (sort (read-values n))
          queries (read-values q)]
      (when (and (not= n 0) (not= q 0))
        (process-print index marbles queries)
        (recur (read-line) (inc index))))))

(main)
