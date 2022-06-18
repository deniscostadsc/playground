http://www.beecrowd.com.br/judge/en/problems/view/1436

# Brick Game

There is a village in Bangladesh, where brick game is very popular. Brick game
is a team game. Each team consists of odd number of players. Number of players
must be greater than 1 but cannot be greater than 10. Age of each player must
be within 11 and 20. No two players can have the same age. There is a captain
for each team. The communication gap between two players depends on their age
difference, i.e. the communication gap is larger if the age difference is
larger. Hence they select the captain of a team in such a way so that the
number of players in the team who are younger than that captain is equal to
the number of players who are older than that captain.

Ages of all members of the team are provided. You have to determine the age of
the captain.

## Input

Input starts with an integer $T (T \leq 100)$, the number of test cases.
Each of the next $T$ lines will start with an integer $N (1 \lt N \lt 11)$,
number of team members followed by $N$ space separated integers representing
ages of all of the members of a team. Each of these $N$ integers will be
between 11 and 20 (inclusive). Note that, ages will be given in strictly
increasing order or strictly decreasing order. We will not mention which one
is increasing and which one is decreasing, you have to be careful enough to
handle both situations.

## Output

For each test case, output one line in the format “Case x: a” (quotes for
clarity), where x is the case number and a is the age of the captain.
