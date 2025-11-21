import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)
    m = int(input())

    output(f'{n - m}\n')
