(ns main
  (:require
   [clojure.string :as str]))

(defn binary-search [_ _]
  1)

;; (defn binary-search [value items]
;;   (loop [begin 0
;;          end (-> (count items)
;;                  (dec))
;;          middle (-> (+ begin end)
;;                     (quot 2))]
;;     (if  (> begin end)
;;       -1
;;       (cond
;;         (< (items middle) value)
;;         (recur (inc middle)
;;                end
;;                (-> (+ begin end)
;;                    (quot 2)))

;;         (or (> (items middle) value)
;;             (and (> middle 0)
;;                  (== (items (dec middle)) value)))
;;         (recur
;;          begin
;;          (dec middle)
;;          (-> (+ begin end)
;;              (quot 2)))

;;         :else
;;         (inc middle)))))

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
      (when (and (not= n 0) (not= q 0))
        (process-and-print index marbles all-queries)
        (recur (read-line) (inc index))))))

(main)
