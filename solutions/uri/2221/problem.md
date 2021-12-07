https://www.beecrowd.com.br/judge/pt/problems/view/2221

# Batalha de Pomekons

After capturing many Pomekons, Dabriel and Guarte resolved to make a battle.
The way of the duel is simple, each Master puts a Pomekon in battle and wins
who has the Pomekon with the bigger value, which is defined as follows:

![](imgs/UOJ_2221.png)

The Bonus will be given to the Master Pomekon that are on a level of a value
even.

This issue will be given to you the value of the applied bonuses, attack and
defense values of Pomekon of Dabriel and Guarte and their levels, you have to
inform the winner of the battle.

## Input

The entrance is composed of several instances. The first line of input
contains an integer $T$ indicating the number of instances. Each instance
starts with a integer $B$ ($0 \leq B \leq 100$), which indicates the value of
the applied bonus. In the following two lines will have three integers $Ai$,
$Di$ and $Li$ ($1 \leq Ai, Di \leq 100, 1 \leq Li \leq 50$), represented the
attack value of Pokemon, the defense value and the level of the Master
Pomekon. The first line is the Dabriel Pomekon and the second the Guarte.

## Output

For each instance in the input you should print the Master's name that will
win the battle, in the event of a tie print: "Empate" without quotes.
