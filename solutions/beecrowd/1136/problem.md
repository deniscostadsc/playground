https://judge.beecrowd.com/en/problems/view/1136

# Bingo!

Albert, Charles and Mary invented a new version of the classical game Bingo. In
traditional Bingo the game is presided over by a non-player known as the caller.
In the beginning of the game each player is given a card containing a unique
combination of numbers from 0 to $N$ arranged in columns and rows. The caller
has a bag containing $N+1$ balls, numbered from 0 to $N$. On each turn, the caller
randomly selects a ball from the bag, announces the number of the drawn ball to
the players, and sets the ball aside so that it cannot be selected again. Each
player searches his/her card for the called number and marks it if he/she finds
it. The first player who marks a complete pre-announced pattern on the card (for
example, a full horizontal line) wins a prize. In the Albert-Charles-Mary
version, on each turn, the caller draws a first ball, returns it to the bag,
draws a second ball, returns it to the bag, and then calls out the absolute
difference between the two ball numbers. To generate even more excitement,
before the game started a possibly empty subset of balls is removed from the
bag, in such a way that at least two balls remain there. They would like to know
if every number from 0 to $N$ may still be called out with the new drawing
method considering the balls that were left in the bag.

## Input

Each test case is given using exactly two lines. The first line contains two
integers $N$ and $B$. The meaning of $N$ was described above $(1 \leq N \leq
90)$, while $B$ represents the number of balls which remained in the bag $(2
\leq B \leq N+1)$. The second line contains $B$ distinct integers $b_i$,
indicating the balls which remained in the bag $(0 \leq b_i \leq N)$. The last
test case is followed by a line containing two zeros.

## Output

For each test case, print a single line containing a single uppercase ‘Y’ if it
is possible to call out every number from 0 to $N$, inclusive, or a single
uppercase ‘N’ otherwise.

