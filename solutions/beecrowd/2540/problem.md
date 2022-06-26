https://www.beecrowd.com.br/judge/en/problems/view/2540

# Leader's Impeachment

Analógimôn Go! is a very popular game. The players of this game are divided in
three teams: Team Valor, Team Instinct and Team Mystic, which are led by their
leaders, Kandera, Esparky and Blanque, respectively. Of course, you belong to
one of these teams!

The leader of your team is being accused of cheating by incorrectly managing
the candies the team receives from the Professor. This fact created a big
controversy among the players in the team: some players state that the leader
really cheated, must suffer an impeachment and must leave his position as a
leader, while other players state that he did not cheat, that the accusation
is false and he must keep leading the team.

To solve this situation, a poll will be held with all $N$ players in your
team. Each player must vote if the impeachment must or must not occur. If the
number of votes for the impeachment is greater than or equal to 2/3 (two
thirds) of the total number of players in the team, the leader will lost his
position. Otherwise, the accusation will be filed and he will keep leading the
team.

Given the votes of all players, determine the result of the poll.

## Input

The input contains several test cases. The first line of each test case
contains the integer $N (1 \leq N \leq 10^5)$, the number of players in your
team. Next line contains $N$ integers $v_1, \dots, v_N (v_i = 0 \space or
\space 1)$, indicating the votes of each player. The value 1 indicates a vote
for the impeachment, while value 0 indicates a vote against it.

The input ends with end-of-file (EOF).

## Output

For each test case, print a single line containing the word impeachment if the
leader must leave his position, or acusacao arquivada otherwise.
