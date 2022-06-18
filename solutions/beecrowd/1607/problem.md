https://www.beecrowd.com.br/judge/en/problems/view/1607

# Advancing Letters

Consider you have the strings A and B. In one operation you can choose any
letter from the first string and advance it. Advancing a letter means to
transform it in the next letter of the alphabet, if this letter is then it
will be transformed in a again!

For instance, we can transform the string ab in bd using 3 operations: ab ->
bb -> bc -> bd. You can apply the operations in the letters in any order,
another possibility would be: ab -> ac -> bc -> bd.

Given both strings, compute the minimum number of operations needed to
transform the first string into the second one.

## Input

The first line contains an integer $T (T \leq 100)$ indicating the number of
test cases.

For each case, the only line will contain the strings $A$
($1 \leq |A| \leq 100$* or $1 \leq |A| \leq 10^4$** and $|A|$ means the length
of $A$) and $B$ ($|B| = |A|$* or $|B| = |A|$**)separated by a blank space.

\* For around 90% of the cases;

** For the other cases.

## Output

For each case print the minimum number of operations.
