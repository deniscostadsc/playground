import sys

input = sys.stdin.readline
output = sys.stdout.write

o = input().strip()
s = left_index = 0

for i in range(12):
    for j in range(12):
        n = float(input())
        if j < left_index:
            s += n
    if i < 5:
        left_index += 1
    if i >= 6:
        left_index -= 1

if o == 'S':
    output(f'{s:.1f}\n')
else:
    output(f'{s / 30:.1f}\n')
