https://judge.beecrowd.com/en/problems/view/1933

# Tri-du

Tri-du is a card game inspired in the popular game of Truco. The game uses a
normal deck of 52 cards, with 13 cards of each suit, but suits are ignored.
What is used is the value of the cards, considered as  integers between 1 to
13.

In the game, each player gets three cards. The rules are simple:

A Three of a Kind (three cards of the same value) wins over a Pair (two cards
of the same value).  A Three of a Kind formed by cards of a larger value wins
over a Three of a Kind formed by cards of a smaller value.  A Pair formed by
cards of a larger value wins over a Pair formed by cards of a smaller value.
Note that the game may not have a winner in many situations; in those cases,
the cards are returned to the deck, which is re-shuffled and a new game
starts.

A player received already two of the three cards, and knows their values. Your
task is to write a program to determine the value of the third card that
maximizes the probability of that player winning the game.

## Input

The input contains several test cases. In each test case, the input consists
of a single line, which contains two integers $A (1 \leq A \leq 13)$ and $B (1
\leq B \leq 13)$ that indicates the value of the two first received cards.

## Output

For each test case in the input, your program must produce a single line,
containing exactly one integer, representing the value of the card that
maximizes the probability of the player winning the game.
