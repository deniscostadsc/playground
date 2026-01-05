import sys

input = sys.stdin.readline
output = sys.stdout.write

o = input().strip()
limit = 1
s = 0.0

for i in range(5):
    for j in range(12):
        n = float(input())
        if j >= limit and j <= 11 - limit:
            s += n
    limit += 1

if o == 'S':
    output(f'{s:.1f}\n')
else:
    output(f'{s / 30:.1f}\n')
