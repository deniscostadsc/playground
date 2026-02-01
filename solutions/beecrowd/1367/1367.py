import sys
from string import ascii_uppercase

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    if line == '0':
        break

    n = int(line)

    total_time = 0
    count = 0
    extra_time = [0] * 26

    for _ in range(n):
        letter, time, status = input().split()
        time = int(time)

        if status == 'correct':
            total_time += time
            total_time += extra_time[ascii_uppercase.index(letter)]
            count += 1
        else:
            extra_time[ascii_uppercase.index(letter)] += 20

    output(f'{count} {total_time}\n')
