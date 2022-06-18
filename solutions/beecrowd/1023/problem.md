http://www.beecrowd.com.br/judge/en/problems/view/1023

# Drought

Due to the continuous drought that happened recently in some regions of
Brazil, the Federal Government created an agency to assess the consumption of
these regions in order to verify the behavior of the population at the time of
rationing. This agency will take some cities (for sampling) and it will verify
the consumption of each of the townspeople and the average consumption per
inhabitant of each town.

## Input

The input contains a number of test cases. The first line of each test case
contains an integer $N (1 \leq N \leq 1 \times 10^6)$, indicating the amount
properties. The following N lines contains a pair of values $X (1 \leq X \leq
10)$ and $Y (1 \leq Y \leq 200)$ indicating the number of residents of each
property and its total consumption (m3). Surely, no residence consumes more
than 200 m3 per month. The end of input is represented by zero.

## Output

For each test case you must present the message “Cidade# n:”, where n is the
number of the city in the sequence (1, 2, 3, ...), and then you must list in
ascending order of consumption, the amount people followed by a hyphen and the
consumption of these people, rounding the value down. In the third line of
output you should present the consumption per person in that town, with two
decimal places without rounding, considering the total real consumption. Print
a blank line between two consecutives test cases. There is no blank line at
end of output.
