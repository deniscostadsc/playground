import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    c = 0

    for character in line:
        if character == ')':
            c -= 1
        if character == '(':
            c += 1

        if c < 0:
            break

    output(f'{"correct" if c == 0 else "incorrect"}\n')
