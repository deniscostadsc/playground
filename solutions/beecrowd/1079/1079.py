import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    a, b, c = map(float, input().split())
    output(f'{(a * 2.0 + b * 3.0 + c * 5.0) / 10.0:.1f}\n')
