import sys
from functools import cache

input = sys.stdin.readline
output = sys.stdout.write


@cache
def has_repeated(n):
    previous_results = {}
    while n:
        current = n % 10
        if previous_results.get(current):
            return True
        previous_results[current] = True
        n //= 10
    return False


while line := input().strip():
    n, m = map(int, line.split())
    count = 0
    for i in range(n, m + 1):
        if not has_repeated(i):
            count += 1
    output(f'{count}\n')
