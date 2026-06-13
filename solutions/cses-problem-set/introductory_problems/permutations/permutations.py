import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)

    if n == 1:
        output('1\n')
    elif n == 2 or n == 3:
        output('NO SOLUTION\n')
    else:
        for i in range(2, n + 1, 2):
            if i != 2:
                output(' ')
            output(f'{i}')
        for i in range(1, n + 1, 2):
            output(f' {i}')
        output('\n')
