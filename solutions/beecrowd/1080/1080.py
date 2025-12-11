import sys

input = sys.stdin.readline
output = sys.stdout.write

q = 0
g = -1
i = -1

for q in range(1, 101):
    n = int(input())

    if n > g:
        g = n
        i = q

output(f'{g}\n')
output(f'{i}\n')
