import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    lines = int(line)
    columns = int(input())

    output(f'{1 if (lines + columns) % 2 == 0 else 0}\n')
