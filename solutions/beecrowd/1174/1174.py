import sys

input = sys.stdin.readline
output = sys.stdout.write

for n in range(100):
    i = float(input())

    if i <= 10:
        output(f'A[{n}] = {i:.1f}\n')
