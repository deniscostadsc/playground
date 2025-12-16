import sys

input = sys.stdin.readline
output = sys.stdout.write

s = 1.0
x = 2.0

for i in range(3, 40, 2):
    s += i / x
    x *= 2

output(f'{s:.2f}\n')
