import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    first, last = map(int, line.split())
    output(f'{(last - first + 1) * (first + last) // 2}\n')
