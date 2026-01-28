import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    line = input().strip()
    output(f'{"".join([word[0] for word in line.split()])}\n')
