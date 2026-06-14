https://cses.fi/problemset/task/1634

# Minimizing Coins

Consider a money system consisting of $n$ coins. Each coin has a positive
integer value. Your task is to produce a sum of money $x$ using the available
coins in such a way that the number of coins is minimal. For example, if the
coins are $\{1,5,7\}$ and the desired sum is $11$, an optimal solution is
$5+5+1$ which requires $3$ coins.

## Input

The first input line has two integers $n$ and $x$: the number of coins and the
desired sum of money. The second line has n distinct integers $c_1,c_2,\dots,c_n$:
the value of each coin.

# Output

Print one integer: the minimum number of coins. If it is not possible to produce
the desired sum, print $-1$.

## Constraints

- $1 \le n \le 100$
- $1 \le x \le 10^6$
- $1 \le c_i \le 10^6$

## Example

### Input:

```
3 11
1 5 7
```

### Output:

```
3
```
