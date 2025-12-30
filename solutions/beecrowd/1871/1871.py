import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    m, n = map(int, line.split())
    if m == 0 or n == 0:
        break

    sum = str(m + n)
    output(f'{sum.replace("0", "")}\n')
