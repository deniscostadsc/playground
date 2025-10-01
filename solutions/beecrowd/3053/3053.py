import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input():
    n = int(line)
    initial_position = input().strip()
    a = b = c = 0

    if initial_position == 'A':
        a = 1
    elif initial_position == 'B':
        b = 1
    else:
        c = 1

    for _ in range(n):
        move = int(input())

        if move == 1:
            a, b = b, a
        elif move == 2:
            b, c = c, b
        else:
            a, c = c, a

    if a == 1:
        output('A\n')
    elif b == 1:
        output('B\n')
    else:
        output('C\n')
