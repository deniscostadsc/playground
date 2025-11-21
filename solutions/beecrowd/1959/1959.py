import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    sides, length = map(int, line.split())

    output(f'{sides * length}\n')
