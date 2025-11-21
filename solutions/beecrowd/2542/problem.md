https://judge.beecrowd.com/en/problems/view/2542

# Iu-Di-Oh!

Iu-di-oh! is a card game really popular among kids! Every Iu-di-oh! player has
his own deck containing many cards. Each card contains $N$ attributes (such as
power, speed, smartness, etc.). Attributes are numbered from $1$ to $N$ and are
given as positive integers.

A match of Iu-di-oh! is always played by two players. At the beginning of the
match, each player chooses exactly one card from his deck. Then, an attribute is
randomly chosen. The player whose the chosen attribute is greater in the card he
choose wins the match. If the such attribute is equal in both cards, there is a
tie.

Marcos and Leonardo are in the big final of the Brazilian Iu-di-oh!
championship. The great prize is a Dainavision (that is almost as good as a
Plaisteition 2!). Given the deck of both players, the card each one chooses and
the chosen attribute, determine the winner!

## Input

The input contains several test cases. The first line of each test case contains
an integer $N (1 \leq N \leq 100)$, the number of attributes each card contains.
The second line contains two integers $M$ and $L (1 \leq M, L \leq 100)$, the
number of cards in Marcos’ and Leonardo’s deck, respectively.

Next $M$ lines describe Marcos’ deck. His cards are numbered from $1$ to $M$,
and $i$-th line describes the $i$-th card. Each line contains $N$ integers
$a_{i,1},a_{i,2},..., a_{i,N} (1 \leq a_{i,j} \leq 10^9)$. Integer $a_{i,j}$
indicates the $j$-th attribute of the i-th card.

Next $L$ lines describe Leonardo’s deck. His cards are numbered from $1$ to $L$
and are described in the same way as Marcos’ deck.

Next line contains two integers $C_M$ and $C_L (1 \leq C_M \leq M, 1 \leq C_L
\leq L)$, the cards chosen by Marcos and Leonardo, respectively. Finally, the
last line contains an integer $A (1 \leq A \leq N)$ indicating the chosen
attribute.

The input ends with end-of-file (EOF).

## Output

For each test case, print a line containing “Marcos” if Marcos wins the match,
“Leonardo” if Leonardo wins the match, or “Empate” in the case of a tie (without
quotes).
