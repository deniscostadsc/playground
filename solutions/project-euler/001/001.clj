(ns main)

(defn sum-all-divibles-by
  [n limit]
  (let [p (quot limit n)]
    (quot (* n (* p (+ p 1))) 2)))

(defn main []
  (- (+ (sum-all-divibles-by 3 999)
        (sum-all-divibles-by 5 999))
     (sum-all-divibles-by 15 999)))

(println (main))
