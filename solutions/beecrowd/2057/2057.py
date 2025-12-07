import sys

input = sys.stdin.readline
output = sys.stdout.write

s, t, f = map(int, input().split())

result = (s + t + f) % 24

if result < 0:
    result += 24

output(f'{result}\n')
