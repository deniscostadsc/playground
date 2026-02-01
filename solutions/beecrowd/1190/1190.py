import sys

input = sys.stdin.readline
output = sys.stdout.write

operation = input().strip()
right_index = 11
s = 0

for i in range(12):
    for j in range(12):
        n = float(input())
        if j > right_index:
            s += n
    if i < 5:
        right_index -= 1
    if i >= 6:
        right_index += 1

if operation == 'S':
    output(f'{s:.1f}\n')
else:
    output(f'{s / 30:.1f}\n')
