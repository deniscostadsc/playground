https://www.urionlinejudge.com.br/judge/en/problems/view/1033

# How Many Calls?

The Fibonacci number is defined by the following recurrence:

```
fib(0) = 0
fib(1) = 1
fib(n) = fib(n-1)+fib(n-2)
```

But we're not interested in the Fibonacci numbers here. We would like to know
how many calls does it take to evaluate the n Fibonacci number if we follow the
given recurrence. Since the numbers are going to be quite large, we'd like to
make the job a bit easy for you. We'd only need the last digit of the number of
calls, when this number is represented in base b.

## Input

Input consists of several test cases. For each test there will be two integers
$n (0 \leq n < (2^{63} - 1))$ and $b (1 < b \leq 10000)$. Input is terminated by a test case
where n=0 and b=0, you must not process this test case.

## Output

For each test case, print the number of test case first. Then print n, b and
the last digit (in base b) of the number of calls. There should be a single
space between the two numbers of a line. Note that the last digit has to be
represented in decimal number system.
