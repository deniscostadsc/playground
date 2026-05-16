https://judge.beecrowd.com/en/problems/view/1084

# Erasing and Winning

Juliano is a fan of the TV show Erasing and Winning, where participants are
selected in a draw and receive money for taking part in the show.

In the show, the presenter writes a number of N digits on a board. Then the
participant must erase exactly D digits from the number on the board; the number
formed by the remaining digits is the value of the money prize for the
participant.

Juliano was finally selected to take part in the show, and asked you to write a
program that, give the number the presenter wrote on the board, and the number
of digits Juliano must erase, determines the highest value of the prize he can
win.

## Input

The input contains several test cases. The first line of a test case contains
two integers $N$ and $D (1 \leq D \lt N \leq 10^5)$ indicating respectively the number of
digits of the number the presenter wrote in the board and the number of digits
that must be erased. The next line contains the number the presenter wrote; the
number does not start with a zero.

The end of input is indicated by a line containing only two zeros, separated by
a space.

## Output

For each test case in the input your program must produce one single line in the
output, containing the highest prize Juliano can win.
