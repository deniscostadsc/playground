https://www.beecrowd.com.br/judge/en/problems/view/2523

# Will's Message

After an intense match of a RPG game at the house of one of his friends, young
Will disappeared mysteriously! Everyone is desperately looking for him
everywhere. Meanwhile, strange things are happening at your home. One of these
things, however, allows you to communicate with the boy!

There are exactly 26 bulbs attached to the wall of your living room, numbered
from 1 to 26 from left to right. Also, there is a letter drawn in the wall
bellow each bulb. When Will wants to send you a message, he will
(mysteriously) blink the bulbs corresponding to each letter of his message,
one at a time. For example, if he wants to send you the message HELP, he will
blink, in this order, the bulbs above the letters H, E, L and P.

Given the letter associated to each bulb and the order of the bulbs Will
blinked, decipher the message he sent!

## Input

The input contains several test cases. The first line of each test case
contains a string with exactly 26 uppercase letters, containing all letters of
the English alphabet. The first letter in the string is associated to bulb 1;
the second letter in the string is associated to bulb 2; and so on. The next
line contains an integer $N$ ($1 \leq N \leq 10^4$), the number of bulbs that
were blinked. The third line contains N integers $l_i$ ($1 \leq l_i \leq 26$),
indicating the bulbs that were blinked, in that order.

The input ends with end-of-file (EOF).

## Output

For each test case, print a single line containing the message sent by Will.
