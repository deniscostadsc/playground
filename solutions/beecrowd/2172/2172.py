import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    x, m = map(int, line.split())
    if x == 0:
        break

    output(f'{x * m}\n')
