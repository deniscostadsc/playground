https://judge.beecrowd.com/en/problems/view/1940

# Strategy Game

A strategy game, with J players, is played around a table. The first player is
the player 1, the second to play is the player 2, and so on. Once completed one
round, again the first player makes his move and the order of the players is
repeated again. Every move, a player guarantees a certain amount of Victory
Points. The score of each player is the sum of Victory Points each of your
moves.

Given the number of players, the number of rounds and a list representing
Victory Points in the order they were obtained, you must determine what the
winning player. If more than one player get the highest score, the player with
the highest score that you played last is the winner.

## Input

The input consists of two lines. The first line contains two integers $J$ and
$R$, the number of players and rounds respectively $(1 \leq J, R \leq 500)$. The
second line contains integer $J \times R$ corresponding to Victory Points in
each of the moves made in the order they happened. The Victory Points obtained
in each round will always be integers between 0 and 100, inclusive.

## Output

Your program should produce a single line containing the integer corresponding
to the winning player.


