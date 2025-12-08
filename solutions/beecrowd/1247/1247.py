import math
import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    a, b, c = map(int, line.split())
    d = math.sqrt(12 * 12 + a * a)

    if 12 / b >= d / c:
        output('S\n')
    else:
        output('N\n')
