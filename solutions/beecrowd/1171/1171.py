import sys
from collections import defaultdict

input = sys.stdin.readline
output = sys.stdout.write

j = int(input())

n = defaultdict(lambda: 0)
c = 1

for _ in range(j):
    x = int(input())
    n[x] += 1
    c = max(c, x)

for i in range(1, c + 1):
    if n[i] != 0:
        output(f'{i} aparece {n[i]} vez(es)\n')
