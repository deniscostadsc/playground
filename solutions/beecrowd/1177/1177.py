import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())
j = 0

for i in range(1000):
    if j >= n:
        j = 0
    output(f'N[{i}] = {j}\n')
    j += 1
