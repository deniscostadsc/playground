https://judge.beecrowd.com/en/problems/view/2633

# Barbecue at Yuri’s

Yuri is a good friend. We always do the "brothers' barbecue ;)" at his house!
This time, the reason for the barbecue is that the brothers are finally starting
to pass on good contests! So today we'll have a special edition of barbecue,
with alcohol and soap soccer!

The soap soccer company is taking a long time to fill the field and Yuri,
already bored, began to get distracted on the following question: if we baked
the meat by the expiration date, what would be the resulting sequence of meat
pieces? Since Yuri's MacBook is too far away (and laziness is too close), he
asked for your help in answering this question.

## Input

The input is made up of several test cases and ends with and enf of file. The
first line of a test case contains an integer $N (0 \leq N \leq 10)$, which is
the number of pieces of meat from today's barbecue. Then there will be $N$
lines, each with a string of maximum 20 characters, with only characters from
'a' to 'z', and an integer $D^i (0 \leq D^i \leq 50)$ representing the
expiration date of the $i$-th piece. Yuri decided to collaborate and calculate
at least this $D^i$ number of days until the expiration date, from today, of each
piece of meat. It is guaranteed that if $i \neq j$, then $D^i \neq D^j$.

## Output

For each test case, print a single line with the sequence of pieces of meat that
Yuri wants to calculate. Each piece must be separated by a single space.
