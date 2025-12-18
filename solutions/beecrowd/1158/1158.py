import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    s = 0

    x, y = map(int, input().split())

    if x % 2 == 0:
        x += 1

    for _ in range(y):
        s += x
        x += 2

    output(f'{s}\n')
