import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    a, b, c = map(int, line.split())

    if a == b and b == c:
        output('*\n')
    elif b == c:
        output('A\n')
    elif a == c:
        output('B\n')
    else:
        output('C\n')
