https://judge.beecrowd.com/en/problems/view/1366

# Sticks Game

There are a lot of fun games that use small colored sticks. The variable used in
this problem involves building rectangles. The game consists in, given a set of
sticks of variables sizes, draw rectangles on the floor, utilizing the sticks as
the sides of the rectangle, with the condition that each stick can be used in
only one rectangle, and each side of the rectangle has only one stick. In this
game, two kids receive two equal sets of sticks. Wins the game the one who draw
the greatest number of rectangles with the sticks.

Given a set of sticks of integer sizes, you must write a software to determinate
the greatest number of rectangles that it's possible to draw.

## Input

The input contains several test cases. The first line of a test case contains an
integer $N$ that indicates the number of different stick sizes $(1 \leq N \leq
1000)$ in the set. Each one of the N following lines contains two integers $C_i$
and $V_i$, representing respectively a size $(1 \leq Ci \leq 1000)$ and the
number of sticks with that size $(1 \leq V_i \leq 1000)$. Each stick size
appears at most once in a test case (which means, the values of $C_i$ are
different). The end of the input is indicated by $N = 0$.

## Output

For each test case your software must print only one output line, with an
integer indicating the maximum number of rectangles that can be formed with the
given set of sticks.
