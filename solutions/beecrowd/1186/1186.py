import sys

input = sys.stdin.readline
output = sys.stdout.write

o = input().strip()
s = 0.0
x = 11

for _ in range(12):
    for j in range(12):
        n = float(input())
        if x < j:
            s += n
    x -= 1

if o == 'S':
    output(f'{s:.1f}\n')
else:
    output(f'{s / 66:.1f}\n')
