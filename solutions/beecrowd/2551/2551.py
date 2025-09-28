import sys

input = sys.stdin.readline
output = sys.stdout.write


while line := input():
    n = int(line)
    previous_record = 0

    for day in range(1, n + 1):
        t, d = map(int, input().split())

        if d / t > previous_record:
            previous_record = d / t
            output(f'{day}\n')
