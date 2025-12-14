import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)
    ts = map(int, input().split())

    lowest = 21
    lowest_index = -1
    for i, t in enumerate(ts, 1):
        if t < lowest:
            lowest = t
            lowest_index = i

    output(f'{lowest_index}\n')
