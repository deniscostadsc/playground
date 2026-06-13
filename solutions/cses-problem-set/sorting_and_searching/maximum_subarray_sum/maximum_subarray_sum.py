import sys

input = sys.stdin.readline
output = sys.stdout.write

while _ := input().strip():
    values = map(int, input().split())

    sum = best = next(values)

    for value in values:
        sum = max(value, sum + value)
        best = max(best, sum)

    output(f'{best}\n')
