import math
import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    if line == '0':
        break

    t = len(line)
    i = 0
    s = 0

    for character in line:
        s += int(character) * math.factorial(t)
        i += 1
        t -= 1

    output(f'{s}\n')
