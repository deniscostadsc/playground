import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    a, b = map(int, line.split())

    if a == 0 or b == 0:
        break

    a, b = max(a, b), min(a, b)

    output(f'{b - (a - b)}\n')
