import sys

input = sys.stdin.readline
output = sys.stdout.write

for n in range(10):
    i = int(input())

    if i > 0:
        output(f'X[{n}] = {i}\n')
    else:
        output(f'X[{n}] = 1\n')
