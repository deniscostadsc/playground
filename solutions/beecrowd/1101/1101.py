import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    i, j = map(int, line.split())
    if not i > 0 or not j > 0:
        break
    j, i = max(j, i), min(j, i)

    s = 0
    for z in range(i, j + 1):
        output(f'{z} ')
        s += z
    output(f'Sum={s}\n')
