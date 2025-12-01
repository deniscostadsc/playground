import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    a1 = int(line)
    a2 = int(input())
    a3 = int(input())

    output(f'{min(min(a2 * 2 + a3 * 4, a1 * 2 + a3 * 2), a1 * 4 + a2 * 2)}\n')
