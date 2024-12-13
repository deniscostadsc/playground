(ns main
  (:require
   [clojure.string :as str]))

(defn binary-search [value items]
  (loop [begin 0
         end (-> (count items)
                 dec)]
    (let [middle (-> (+ begin end)
                     (quot 2))]
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

(defn read-values [total-lines]
  (loop [current-line total-lines
         vals []]
    (if (== current-line 0)
      vals
      (recur (dec current-line)
             (cons (Integer/parseInt (read-line)) vals)))))

(defn process-print [test-case-index marbles queries]
  (printf "CASE# %d:%n" test-case-index)
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
         test-case-index 1]
    (let [[n q] (->> (str/split line #" ")
                     (map #(Integer/parseInt %)))
          marbles (-> (read-values n)
                      sort
                      vec)
          queries (-> (read-values q)
                      reverse)]
      (when (and (not= n 0) (not= q 0))
        (process-print test-case-index marbles queries)
        (recur (read-line) (inc test-case-index))))))

(main)
