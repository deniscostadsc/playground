import sys

input = sys.stdin.readline
output = sys.stdout.write

t = 0.0
n = 0.0

while line := input().strip():
    d = float(input())
    t += d
    n += 1.0

output(f'{t / n:.1f}\n')
