import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    t = int(line)
    if t == 0:
        break

    for _ in range(t):
        n = int(input())
        if n % 2 == 0:
            output(f'{(n - 2) * 2 + 2}\n')
        else:
            output(f'{(n - 1) * 2 + 1}\n')
