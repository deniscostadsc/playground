import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    c1, p1, c2, p2 = map(int, line.split())

    if c1 * p1 == c2 * p2:
        output('0\n')
    elif c1 * p1 < c2 * p2:
        output('1\n')
    else:
        output('-1\n')
