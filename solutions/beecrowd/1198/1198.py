import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    a, b = map(int, line.split())
    a, b = max(a, b), min(a, b)

    output(f'{a - b}\n')
