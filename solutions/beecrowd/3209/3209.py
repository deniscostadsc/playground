import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    k, *os = map(int, input().split())

    output(f'{sum(os) - k + 1}\n')
