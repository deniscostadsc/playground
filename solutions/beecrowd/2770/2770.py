import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    x, y, m = map(int, line.split())

    for _ in range(m):
        x_order, y_order = map(int, input().split())

        if x_order <= x and y_order <= y or x_order <= y and y_order <= x:
            output('Sim\n')
        else:
            output('Nao\n')
