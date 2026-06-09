import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)
    n_set = set(range(1, n + 1))
    numbers = set(map(int, input().split()))

    output(f'{(n_set - numbers).pop()}\n')
