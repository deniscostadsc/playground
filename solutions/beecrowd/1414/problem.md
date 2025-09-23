https://judge.beecrowd.com/en/problems/view/1414

# World Cup

A Button Soccer World Cup is being held with teams from around the world. The
classification is based on the number of points earned by the teams, and the
distribution of points is done in the usual way. That is, when a team wins a
game, it gets 3 points if the game ends in a draw, both teams get 1 point, and
the loser no points.

Given the current standings of the teams and the number of participating teams
in the World Cup, his task is to determine how many games ended in draws so far.

## Input

The input contains several test cases. The first line of a test case contains
two integers $T$ and $N$, respectively indicating the number of participating
teams $(2 \leq T \leq 200)$ and the number of matches played $(0 \leq N \leq
10000$)$. Each of the next $T$ lines contains the name of a team (a string of up
to 10 letters and digits), a space, and the number of points the team got so
far. The end of input is indicated by $T = 0$.

## Output

For each test case your program must print a single line containing an integer
representing the amount of games ended in draws.
