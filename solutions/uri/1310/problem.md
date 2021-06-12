https://www.urionlinejudge.com.br/judge/en/problems/view/1310

# Profit

George owns a circus and brings his circus from town to town. He knows how
much revenue he can take in on any day in a series of days in a town. He also
knows the constant daily cost to run his circus. George wants to bring his
circus to town for the series of days that results in the highest profit.

For example, if the circus costs $20 a day to run in an example with 6 days,
and the revenue per day is {$18,$35,$6,$80,$15,$21}, George can make the most
money by bringing his circus to town from Day 2 to Day 4. He will make
(35+6+80)-(3*20) = $61.

Note: The series of days George brings his circus to town can be between 0 and
the maximun number of days, inclusive. If George brings his circus to town for
0 days, he makes 0 profit.

## Input

The input contains many test cases. The first line of a teste case contains an
integer $N$ ($1 \leq N \leq 50$) that represents the number of days that
George can bring his circus to the town. The second line of a test case
contains an integer $perDayCost$ ($0 \leq perDayCost < 1000$) that represents
the cost in manteining the circus in that town. Follow N lines (one per each
day) containing each one an integer revenue ($0 \leq revenue < 1000$)
representing the revenue the circus will earn on each day. The end of input is
indicated by EOF (end of file).

## Output

For each test case print the most money that George can earn by bringing his
circus to town according to the following example.
