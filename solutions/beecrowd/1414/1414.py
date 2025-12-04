import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    t, j = map(int, line.split())
    if t == 0:
        break

    s = 0
    for _ in range(t):
        _, n = input().split()
        s += int(n)

    output(f'{j * 3 - s}\n')
