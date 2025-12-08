import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)
    if n == 0:
        break

    result = 0
    for i in range(1, n + 1):
        result += i**2

    output(f'{result}\n')
