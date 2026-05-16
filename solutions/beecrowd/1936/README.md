https://judge.beecrowd.com/en/problems/view/1936

# Factorial

The factor of a positive integer $N$, denoted by $N!$, is defined as the product
of the positive integers smaller than or equal to $N$. For example $4! = 4 × 3 ×
2 × 1 = 24$.

Given a positive integer N, you should write a program to determine the smallest
number $k$ such that $N = A_1! + A_2! + ... + A_k!$, where each $A_i$, for $1
\leq i \leq k$ is a positive integer.

For example, for N = 10 the answer is 3, it is possible to write N as the sum of
three numbers factor: $10 = 3! + 2! + 2!$. For $N = 25$ the answer is 2, it is
possible to write N as the sum of two factorial numbers: $25 = 4! + 1!$.

## Input

The input consists of a single line containing an integer $N (1 \leq N \leq
10^5)$.

## Output

Its program should produce a single line with an integer representing the
smallest amount of factor numbers whose sum is equal to the value of $N$.
