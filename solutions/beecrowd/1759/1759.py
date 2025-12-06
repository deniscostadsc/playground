import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for i in range(n):
    if i != 0:
        output(' ')
    output('Ho')
output('!\n')
