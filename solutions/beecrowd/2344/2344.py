import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)

    if n == 0:
        output('E\n')
    elif n >= 1 and n <= 35:
        output('D\n')
    elif n >= 36 and n <= 60:
        output('C\n')
    elif n >= 61 and n <= 85:
        output('B\n')
    else:
        output('A\n')
