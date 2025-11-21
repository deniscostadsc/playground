import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    c, n = map(int, line.split())

    output(f'{c % n}\n')
