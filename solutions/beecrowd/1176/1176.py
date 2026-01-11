import sys
from functools import cache

input = sys.stdin.readline
output = sys.stdout.write


@cache
def fib(n):
    if n <= 1:
        return n
    return fib(n - 1) + fib(n - 2)


i = int(input())
for _ in range(i):
    n = int(input())
    output(f'Fib({n}) = {fib(n)}\n')
