https://www.urionlinejudge.com.br/judge/en/problems/view/1973

# Star Trek

After buying many adjacent farms at the west region of Santa Catarina, the
Star family built a single road which passes by all farms in sequence. The
first farm of the sequence was named Star 1, the second Star 2, and so on.
However, the brother who lives in Star 1 has got mad and decided to make a
Star Trek in order to steal sheep from the proprieties of his siblings. But he
is definitely crazy. When passes by the farm Star i, he steals only one sheep
(if there is any) from that farm and moves on either to Star i + 1 or Star i -
1, depending on whether the number of sheep in Star i was, respectively, odd
or even. If there is not the Star to which he wants to go, he halts his trek.
The mad brother starts his Star Trek in Star 1, stealing a sheep from his own
farm.

## Input

The first input line consists of a single integer $N$ ($1 \leq N \leq 10^6$),
which represents the number of Stars. The second input line consists of N
integers, such that the ith integer, $X_i$ ($1 \leq X_i \leq 10^6$),
represents the initial number of sheep in Star i.

## Output

Output a line containing two integers, so that the first represents the number
of Stars attacked by the mad brother and the second represents the total
number of non-stolen sheep.
