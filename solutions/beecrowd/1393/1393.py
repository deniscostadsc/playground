import sys
from functools import cache


@cache
def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)


for line in sys.stdin:
    n = int(line)
    if not n:
        break

    print(fibonacci(n + 1))
