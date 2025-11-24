import re
import sys

DELIMITERS = r'[.-]'

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    x, y, z, d = re.split(DELIMITERS, line)

    output(f'{x}\n{y}\n{z}\n{d}\n')
