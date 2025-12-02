import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)

    if n % 6 == 0:
        output('Y\n')
    else:
        output('N\n')
