(ns main)

(defn operator-precedence [term]
  (cond
    (contains? ["+" "-"] term)
    1
    (contains? ["*" "/"] term)
    2
    (= term "^")
    3
    :else
    0))

(defn operator? [term]
  (contains? ["+" "-" "*" "/" "^"] term))

(defn opening-parenthesis? [term]
  (= term "("))

(defn closing-parenthesis? [term]
  (= term ")"))

(defn parenthesis? [term]
  (or (opening-parenthesis? term) (closing-parenthesis? term)))

(defn operand? [term]
  (and (not (operator? term)) (not (parenthesis? term))))

(defn infix-to-postfix [line]
  (loop [[term & remaining-terms] line
         terms-stack []
         postfix-expression []]
    (when (opening-parenthesis? term)
      (recur remaining-terms
             (conj terms-stack term)
             postfix-expression))
    (when (opening-parenthesis? term)
      (loop ))
    (when (operand? term)
      (recur remaining-terms
             terms-stack
             (conj postfix-expression term)))
    (when (operator? term))))

(defn main []
  (loop [n (Integer/parseInt (read-line))]
    (when (> n 0)
      (println (infix-to-postfix (read-line)))
      (recur (dec n)))))

(main)
