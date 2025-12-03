import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())
for _ in range(n):
    a, b = map(int, input().split())
    output(f'{a * b}\n')
