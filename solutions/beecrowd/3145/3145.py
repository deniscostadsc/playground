import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n, x = map(int, line.split())

    output(f'{x / (n + 2):.2f}\n')
