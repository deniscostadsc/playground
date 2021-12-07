https://www.beecrowd.com.br/judge/en/problems/view/2235

# Walking in Time

Imagine you have a time machine that can be used up to three times, and every
use of the machine you can choose to go back to the past or go to the future.
The machine has three fixed loans; each credit represents a certain number of
years, and can be used to get this amount of years for the past or for the
future. You can make one, two or three trips, and each of these three credits
can only be used once. For example, if the credits are 5, 12 and 9, you could
decide to make two trips: go five years into the future and then go back nine
years to the past. This way, you end four years in the past, in 2012. It could
also make three trips, all going to the future, using the credits in any
order, ending in 2042.

In this problem, given the values of the three machine credits, your program
should say if is possible or not travel back in time and return to the
present, making at least one trip and at most three trips; always using each
of the three credit at most once.

## Input

The input consists of a single line containing three credits $A$, $B$ e $C$
($1 \leq A, B, C \leq 1000$).

## Output

Your program should print a line containing the character 'S' if it possible
travel in time and back to present, or 'N' if it's not possible.
