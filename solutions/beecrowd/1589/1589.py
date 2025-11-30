import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    r1, r2 = map(int, input().split())

    output(f'{r1 + r2}\n')
