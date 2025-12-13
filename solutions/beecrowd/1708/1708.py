import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    x, y = map(int, line.split())

    diff = y - x
    if x < diff:
        output('2\n')
    else:
        if x // diff * diff < x:
            output(f'{(x // diff) + 2}\n')
        else:
            output(f'{(x // diff) + 1}\n')
