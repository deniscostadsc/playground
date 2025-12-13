import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    a, b, c, d = map(int, line.split())

    if a == 1:
        output('1\n')
    elif b == 1:
        output('2\n')
    elif c == 1:
        output('3\n')
    else:
        output('4\n')
