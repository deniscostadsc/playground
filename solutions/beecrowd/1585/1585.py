import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    x, y = map(int, input().split())

    output(f'{x * y // 2} cm2\n')
