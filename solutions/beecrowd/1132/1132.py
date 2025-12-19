import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    d = int(line)
    t = int(input())
    d, t = min(d, t), max(d, t)

    s = 0
    for i in range(d, t + 1):
        if i % 13 != 0:
            s += i

    output(f'{s}\n')
