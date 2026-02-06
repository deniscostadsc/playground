import sys

input = sys.stdin.readline
output = sys.stdout.write

d = 'NLSO'

while line := input().strip():
    n = int(line)

    if n == 0:
        break

    c = input().strip()
    q = 0

    for character in c:
        if character == 'D':
            q += 1
        else:
            q -= 1

        if q == 4:
            q = 0
        if q == -1:
            q = 3

    output(f'{d[q]}\n')
