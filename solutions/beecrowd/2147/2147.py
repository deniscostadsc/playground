import sys

input = sys.stdin.readline
output = sys.stdout.write

t = int(input())

for _ in range(t):
    word = input().strip()

    output(f'{len(word) / 100:.2f}\n')
