https://judge.beecrowd.com/en/problems/view/2554

# Pizza Before BH

The Nlogonian Aquatic Surf Championship, to be hosted in Bonita Horeleninha (BH)
city, is about to start! Before going to BH, you and your $N$-1 friends decided
to go for a pizza, so you can relax and have some fun (and, of course, eat!).

At this moment you are choosing the date for the event. To make sure everyone
can enjoy it, it was decided that the meeting is to be set in a day so that all
the $N$ people can show up at the pizzeria on that date.

Given the list of dates considered for the event and the information about which
people can show up at which dates, determine if the event can happen and, if it
can, print its date. If more than one date is possible, the event must occur as
early as possible.

## Input

The input contains several test cases. The first line of each test case contains
integers $N$ and $D (1 \leq N, D \leq 50)$, the number of people and the number
of considered dates. People are numbered from $1$ to $N$. Next $D$ lines
describe the considered dates. Each line begins with a date in the format
day∕month∕year. The line is followed by $N$ integers $p_1,p_2,...,p_N$. The
integer $p_i$ is $1$ if the $i$-th person can show up at the considered date, or
0 otherwise. It is guaranteed that dates are always valid, and there aren’t
leading zeros. Also, all dates are given in order, from the earliest to the
latest day.

The input ends with end-of-file (EOF).

# Output

For each test case, print one line with the date in the format day∕month∕year,
exactly as it appears in the input. If it is not possible to hold the event,
print “Pizza antes de FdI” (without quotes).
