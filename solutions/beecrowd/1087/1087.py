import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    x1, y1, x2, y2 = map(int, line.split())

    if x1 == 0 and y2 == 0 and x2 == 0 and y2 == 0:
        break

    dx = abs(x1 - x2)
    dy = abs(y1 - y2)

    if x1 == x2 and y1 == y2:
        output('0\n')
    elif x1 == x2 or y1 == y2 or dx == dy:
        output('1\n')
    else:
        output('2\n')
