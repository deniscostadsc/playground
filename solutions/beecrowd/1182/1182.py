import sys

input = sys.stdin.readline
output = sys.stdout.write

c = int(input())
o = input().strip()
s = 0.0

for _ in range(12):
    for j in range(12):
        n = float(input())
        if j == c:
            s += n

if o == 'S':
    output(f'{s:.1f}\n')
else:
    output(f'{s / 12:.1f}\n')
