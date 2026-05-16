https://judge.beecrowd.com/en/problems/view/1523

# Linear Parking Lot

After a long time saving money, Rafael finally got to buy his own car. Enough of
catching bus, now his life is going to be easier. At least this is what he
thought, until he heard about the parking lot near the university where he
decided to park the car every day.

The parking lot has only one corridor, with enough width to fit one car, and
enough depth to fit $K$ cars, one behind the other. As this parking lot has just
one gate, it is only possible to the cars to enter and leave by it.

When the first car enters the parking, it occupies the last position near the
wall, at the bottom of the parking lot. All the next cars park right behind it,
forming a queue. Obviously, it is not possible that one car passes over the
other, therefore it is only possible for a car to leave the parking lot if it is
the last at the queue.

Given the expected arrival and exit time of $N$ drivers, Rafael included, tell
if it is possible that they all can park and remove their cars at the quote
parking lot.

## Input

There will be several test cases. Each test case starts with two integers $N$
and $K (3 \leq N \leq 10^4, 1 \leq K \leq 10^3)$, representing the number of
drivers that are going to make use of the parking lot, and the number of cars
that the parking lot can fit, respectively.

Following there will be N lines, each one containing two integers $C_i$ and $S_i
(1 ≤ C_i, S_i ≤ 10^5)$, representing, repectively, the arrival and exit time of
the i-th driver $(1 \leq i \leq N)$. The values of $C_i$ are given in ascending
order, in other words, $C_i \lt C_{i+1}$ for each $1 \leq i \lt N$.

There will be no more than one driver that arrive at the same time, and no more
than one driver that leave at the same time. It is possible that one driver can
park at the same time that other driver is leaving.

The last test case is indicated when $N = K = 0$, which should not be processed.

## Output

For each test case print one line, containing the word “Sim”, if it is possible
that all the N drivers make use of the parking lot, or “Nao” otherwise.
