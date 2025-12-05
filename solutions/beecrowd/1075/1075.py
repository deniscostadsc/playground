import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for i in range(10000):
    if i % n == 2:
        output(f'{i}\n')
