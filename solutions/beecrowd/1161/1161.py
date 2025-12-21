import sys
from functools import cache

input = sys.stdin.readline
output = sys.stdout.write


@cache
def fat(n):
    if n <= 1:
        return 1
    return n * fat(n - 1)


while line := input().strip():
    x, y = map(int, line.split())
    output(f'{fat(x) + fat(y)}\n')
