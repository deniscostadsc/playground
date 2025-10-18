import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    v, t = map(int, line.split())
    output(f'{v * t * 2}\n')
