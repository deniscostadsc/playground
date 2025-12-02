import sys

input = sys.stdin.readline
output = sys.stdout.write

n = float(input())

for i in range(100):
    output(f'N[{i}] = {n:.4f}\n')
    n /= 2
