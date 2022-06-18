https://www.beecrowd.com.br/judge/en/problems/view/1514

# Contest

Most of the programmers who come to write contests with programming exercises
agree in four caracteristics that every contest should achieve. Although not
all of them are always achieved, more is better. The caracterists are the
following:

1. Nobody solved all the problems.
2. Every problem was solved by at least one person (not necessarily the same).
3. There is no problem solved by everyone.
4. Everyone solved at least one problem (not necessarily the same).

Rafael organized a contest a few days ago, and is worried about how many of
these caracteristics he got to achieve with his contest.

Given the information about the contest, with the number of contestants, the
number of problems, and which contestant solved which problem, find out the
number of caracteristics that were achieved on this contest.

## Input

There will be several tests cases. Each test case starts with two integers $N$
and $M (3 \leq N, M \leq 100)$.

Then, there will be $N$ lines with $M$ integers each, where the integer on the
$i$-th line and on the $j$-th column is 1 if the $i$-th contestant solved the
$j$-th problem, or 0 otherwise.

The last test case is indicated when $N = M = 0$, which should not be
processed.

## Output

For each test case, print one line with one integer, representing the amount
of caracteristics achieved by the given contest.
