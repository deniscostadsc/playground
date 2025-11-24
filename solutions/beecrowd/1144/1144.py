import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for i in range(1, n + 1):
    output(f'{i} {i * i} {i * i * i}\n')
    output(f'{i} {i * i + 1} {i * i * i + 1}\n')
