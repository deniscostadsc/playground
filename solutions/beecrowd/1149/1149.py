import sys

input = sys.stdin.readline
output = sys.stdout.write

a, *bs = map(int, input().split())
b = bs[0]
b_index = 1
s = a

while b <= 0:
    b = bs[b_index]
    b_index += 1

for _ in range(1, b):
    a += 1
    s += a

output(f'{s}\n')
