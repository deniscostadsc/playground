import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    t = int(input())
    year = 2015 - t

    if year <= 0:
        year -= 1

    output(f'{abs(year)} {"A.C." if year < 0 else "D.C."}\n')
