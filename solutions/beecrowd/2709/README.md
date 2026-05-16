https://judge.beecrowd.com/en/problems/view/2709

# The Coins of Robbie

Robbie is a very charismatic robot, and one of the things that he most likes to
do, besides playing with Glória, it's to collect coins. Robbie has several coins
with equal or different values, and all with the same size. They are stored in
an organized manner on top of each other, inside a glass cylinder. Robbie always
plays a little game with Glória using his coins whenever she asks to play hide
and seek with him, or when she asks him to take her for a walk. The rule of the
game is: Glória has to choose any number $N$, which will be added, then for each
coin $N$ the value of the coin $V_i$ is added until there aren't more coins, in
other words Ʃ of ((VM-(N*0) )+(VM-(N*1))+(VM-(N*2))...), $M$ is the number of
coins. Such as that if there are 5 coins with values of 1, 2, 3, 4 and 5, and
Glória chooses 2 as number of jumps (did not understand what the author meant
here by jumps), then the coins will be added as 5, 3 and 1, resulting in 9. In
the end, Robbie checks if the sum of these coins is a prime number, if it
results in yes, he will do what Glória wants, if it doesn't, the little girl
will convince Robbie to play again, because she can always make him do
everything, saying that will make him stop telling stories if he doesn't
complies.

You, as a good developer of U.S Robots, will help this two friends, by coding a
computer program that will give the result of the game.

## Input

The input contains several test cases. The first line of a test case contains an
integer $M (2 \leq M \leq 20)$ that represents the quantity of coins. Each of
the next lines M contains an integer $V_i (1 \leq V_i \leq500)$ that represents
the value of coins $M_i$, and for the last one, a integer $N (1 \leq N \leq M)$
that’s the jump in the added choosen by Gloria.

The input ends with EOF.

## Output

Print “You’re a coastal aircraft, Robbie, a large silver aircraft.”, if Gloria
win the game, or “Bad boy! I’ll hit you.”, if Glória loose the game. The output
should be no quotation marks.
