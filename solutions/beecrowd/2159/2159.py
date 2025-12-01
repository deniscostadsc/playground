import math
import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)

    output(f'{n / math.log(n):.1f} {n / math.log(n) * 1.25506:.1f}\n')
