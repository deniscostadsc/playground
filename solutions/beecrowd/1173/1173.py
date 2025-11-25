import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for i in range(10):
    output(f'N[{i}] = {n}\n')
    n *= 2
