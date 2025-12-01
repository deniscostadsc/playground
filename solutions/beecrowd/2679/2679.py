import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    x = int(line)

    if x % 2 == 0:
        output(f'{x + 2}\n')
    else:
        output(f'{x + 1}\n')
