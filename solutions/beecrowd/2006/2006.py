import sys

input = sys.stdin.readline
output = sys.stdout.write

t = int(input())

c = 0
for x in map(int, input().split()):
    if x == t:
        c += 1

output(f'{c}\n')
