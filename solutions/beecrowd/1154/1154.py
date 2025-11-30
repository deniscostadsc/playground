import sys

input = sys.stdin.readline
output = sys.stdout.write

sum = 0
count = 0

while line := input().strip():
    n = int(line)
    if n < 0:
        break

    sum += int(line)
    count += 1

output(f'{sum /count:.2f}\n')
