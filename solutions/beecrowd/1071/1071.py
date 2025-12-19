import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    x = int(line)
    y = int(input())

    x, y = min(x, y), max(x, y)

    x += 1
    if x % 2 == 0:
        x += 1

    s = 0
    for i in range(x, y, 2):
        s += i

    output(f'{s}\n')
