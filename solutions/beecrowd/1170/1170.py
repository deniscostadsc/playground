import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    i = float(input())

    d = 0
    while i > 1.0:
        d += 1
        i /= 2

    output(f'{d} dias\n')
