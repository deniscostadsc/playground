import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input():
    x_m, y_m, x_r, y_r = map(int, line.split())
    output(f'{abs(x_r - x_m) + abs(y_r - y_m)}\n')
