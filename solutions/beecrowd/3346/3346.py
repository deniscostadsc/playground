import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    f1, f2 = map(float, line.split())
    output(f'{((1 + f1/100) * (1 + f2/100) - 1) * 100:.6f}\n')
