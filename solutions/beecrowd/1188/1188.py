import sys

input = sys.stdin.readline
output = sys.stdout.write

o = input().strip()

s = 0.0
x = 5

for i in range(12):
    for j in range(12):
        n = float(input())

        if j > x and j < 11 - x:
            s += n

    if i > 5:
        x -= 1

if o == 'S':
    output(f'{s:.1f}\n')
else:
    output(f'{s / 30:.1f}\n')
