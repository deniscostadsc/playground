https://judge.beecrowd.com/en/problems/view/1160

# Population Increase

Mariazinha wants to solve an interesting problem. Given the population and
growing rate of 2 cities (A and B), She would like to know how many years
would be necessary to the smaller city (always A) to be greater than the
larger city (always B) in population. Of course, she only want to know the
result for cities that the growing rate for city A is bigger than the growing
rate for city B, therefore, she separated these test cases for you. Your job
is build a program that print the time in years for each test case.

However, in some cases the time can be so big and Mariazinha don't want to
know the exact time for these cases. In this way, for these test cases, is
enough printing the message "Mais de 1 seculo", that means "More than an
Century".

## Input

The first line of the input contains a single integer $T$, indicating the
number of test cases $(1 \leq T \leq 3000)$. Each test case contains four
numbers: two integers $PA$ and
$PB (100 \leq PA \leq 1000000, 100 \leq PB \leq 1000000, PA \leq PB)$
indicating respectively the population of $A$ and $B$ and two numbers $G1$ and
$G2 (0.1 \leq G1 \leq 10.0, 0.1 \leq G2 \leq 10.0, G2 \leq G1)$ with one
digit after the decimal point each, indicating the populational growing (in
percentual) for $A$ and $B$ respectively.

Be careful, do not use single-precision variables.

## Output

Print, for each test case, how many years would be necessary to the city $A$
became greater than the city B (in inhabitants). Remember that if this time is
greater than 100 it will be necessary printing the message: "Mais de 1
seculo". In each one of these cases, maybe would be interesting interrupt the
counting, otherwise you'll get "Time Limit Exceeded".
