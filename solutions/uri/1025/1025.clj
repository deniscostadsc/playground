(ns main
  (:require
   [clojure.string :as str]))

(defn binary-search [value array]
  1)

;; (defn binary-search [value array]
;;   (loop [begin 0
;;          end (-> (count array) (dec))
;;          middle (-> (+ begin end) (quot 2))]

;;     (when (> begin end) -1)

;;     (cond
;;       (< (array middle) value)
;;       (recur (inc middle) end (-> (+ begin end) (quot 2)))

;;       (or (> (array middle) value)
;;           (and (> middle 0)
;;                (== (array (dec middle)) value)))
;;       (recur begin (dec middle) (-> (+ begin end) (quot 2)))

;;       :else
;;       (inc middle))))

;; (defn read-values [total]
;;   [5 4 3 2 1])

(defn read-values [total]
  (loop [reverse-index total
         vals []]
    (if (== reverse-index 0)
      vals
      (recur (dec reverse-index)
             (cons (Integer/parseInt (read-line)) vals)))))


(defn process-and-print [index marbles all-queries]
  (printf "CASE# %d:%n" index)
  (loop [queries all-queries]
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
          all-queries (reverse (read-values q))]
      (process-and-print index marbles all-queries)
      (when (and (not= n 0) (not= q 0))
        (recur (read-line) (inc index))))))

;; (defn main []
;;   (loop [line (read-line)]
;;     (let [[n q] (->> (str/split line #" ")
;;                      (map #(Integer/parseInt %)))
;;           marbles (sort (read-values n))
;;           all-queries (read-values q)]
;;       (loop [rest-queries all-queries]
;;         (let [query (first rest-queries)
;;               position (binary-search query marbles)]
;;           (if (>= position 0)
;;             (printf "%d found at %d%n" query position)
;;             (printf "%d not found%n" query)))
;;         (when (seq? (rest rest-queries))
;;           (recur (rest rest-queries))))
;;       (when (and (not= n 0) (not= q 0))
;;         (recur (read-line))))))

(main)
