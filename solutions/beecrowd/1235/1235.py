import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    s = input()
    length = len(s) - 1

    for i in range(length // 2 - 1, -1, -1):
        output(f'{s[i]}')

    for i in range(length - 1, length // 2 - 1, -1):
        output(f'{s[i]}')

    output('\n')
