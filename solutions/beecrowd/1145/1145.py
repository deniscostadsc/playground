import sys

input = sys.stdin.readline
output = sys.stdout.write

i = 1
x, y = map(int, input().split())

while i <= y:
    for j in range(0, x):
        if i > y:
            break

        if j != 0:
            output(' ')

        output(f'{i}')
        i += 1

    output('\n')
