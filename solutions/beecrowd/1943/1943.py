import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    k = int(line)

    if k == 1:
        output('Top 1\n')
    elif k <= 3:
        output('Top 3\n')
    elif k <= 5:
        output('Top 5\n')
    elif k <= 10:
        output('Top 10\n')
    elif k <= 25:
        output('Top 25\n')
    elif k <= 50:
        output('Top 50\n')
    else:
        output('Top 100\n')
