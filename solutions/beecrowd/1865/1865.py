import sys

input = sys.stdin.readline
output = sys.stdout.write

c = int(input())

for _ in range(c):
    name, _ = input().split()
    if name == 'Thor':
        output('Y\n')
    else:
        output('N\n')
