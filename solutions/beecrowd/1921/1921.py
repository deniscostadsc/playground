import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)
    output(f'{int(n * (n - 1) / 2) - n}\n')
