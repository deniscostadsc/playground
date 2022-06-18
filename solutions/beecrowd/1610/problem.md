https://www.beecrowd.com.br/judge/en/problems/view/1610

# Dudu Service Maker

Dudu needs a document to finalize a task in his work. After searching, he
found out that this document needed other documents, which also needed other
documents and so on.

Dudu made a final list with the documents he will need. With that in hands, he
suspects that the list contains loops. For instance, if a document A depends
on the document B that also depends on A, it would make the task impossible to
finish. In this case the loop contains only two documents, but there might be
cases with three or more!

Given the list of the dependencies, help him compute if he can obtain all the
documents, it is, to compute if there isn't a loop in the given dependencies.

## Input

The first line contains an integer $T (T = 100)$ indicating the number of test
cases.

On the first line in each test case there will be the integers $N (2 \leq N
\leq 100* \space or \space 2 \leq N \leq 10^4**)$ and $M (1 \leq M \leq 300*
\space or \space 1 \leq M \leq 3 \times 10^4**)$, indicating the number of
documents and the dependencies. In each of the following M lines, there will
be two integers $A (1 \leq A)$ and $B (B \leq N and A \neq B)$, indicating
that the document A depends on the document B. There might be repeated
dependencies!

\* For around 90% of the cases;

** For the other cases.

## Output

For each case, print SIM (Portuguese word for YES) if there is at least one
loop, and NAO otherwise (Portuguese word for NO).
