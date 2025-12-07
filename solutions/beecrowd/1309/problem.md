https://judge.beecrowd.com/en/problems/view/1309

# Monetary Formatting

Often it is necessary to write monetary amounts in a standard format. We
decided formatting quantities in the following way:

1. The montande must begin with '$';
1. The number must end with a decimal point and exactly two digits following;
1. The digits to the left of the decimal point must separator in groups of
   three oir commas.

Your task in this problem is to create a program that, given two integer
values ​​to dollars and cents return String formatted properly.

## Input

The input consists of several test cases. Each test case consists of two
integers, $dollars (0 \leq dollars \leq 2 \times 10^9)$ and $cents (0 \leq
cents \leq 99)$, respectively.

## Output

For each test case print a string formatted according to the formatting rules.
