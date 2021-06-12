http://www.urionlinejudge.com.br/judge/en/problems/view/1533

# Detective Watson

John Watson, after years working aside Sherlock Holmes, never understood how
he was able to guess who was the killer so easily. On a certain night,
however, Sherlock drunk so much that he told John what the secret was.

“Elementary dear Watson”, said Sherlock Holmes. “It is never the most
suspicious, but the second most suspicious”. After he got the secret, John
decided to solve a crime by his own, just to test if what Sherlock said made
sense or it was just drunk talk.

Given a list with N integers, representing how much each person is suspect,
help John Watson to decide who is the killer, according to the mentioned
method.

## Input

There will be several test cases. Each test case starts with an integer $N$
($2 \leq N \leq 1000$), representing the number of suspects.

Following there will be N distinct integers, where the $i$-th integer, for
each $1 \leq i \leq N$, represents how much the $i$-th person is suspect,
given John Watson's opinion. Be $V$ the value of $i$-th integer,
$1 \leq V \leq 10000$.

The last test case is indicated when $N = 0$, which should not be processed.

## Output

For each test case print one line, containing one integer, representing the
index of the killer, according to the mentioned method.
