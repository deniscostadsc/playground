https://judge.beecrowd.com/en/problems/view/1068

# Parenthesis Balance I

Considering an expression with parenthesis, print a message informing if the
among of parenthesis is correct or incorrect, without considering the rest of
the expression. Example:

    a+(b*c)-2-a        is correct
    (a+b*(2-c)-2+a)*2  is correct

when

    (a*b-(2+c)         is incorrect
    2*(3-a))           is incorrect
    )3+b*(2-c)(        is incorrect

Resuming, all closing parenthesis must have an open parenthesis and is't
possible a closing parenthesis without a previos open parenthesis and the
quantity of closing and open parenthesis must be the same.

## Input

The input file contains N expressions $(1 \leq N \leq 10000)$, each one with up to
1000 characters.

## Output

The output must be correct or incorrect for each test case according with above
rules.
