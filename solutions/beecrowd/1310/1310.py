import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)
    per_day_cost = int(input())

    largest = -1000
    largest_start = 0

    for _ in range(n):
        revenue = int(input())
        largest_start += revenue - per_day_cost
        largest = max(largest, largest_start)
        largest_start = max(largest_start, 0)

    output(f'{largest if largest >= 0 else 0}\n')
