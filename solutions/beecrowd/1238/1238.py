import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    a, b = input().split()

    for a_letter, b_letter in zip(a, b):
        output(f'{a_letter}{b_letter}')

    min_len = min(len(a), len(b))

    if len(a) > min_len:
        output(f'{a[min_len:]}')

    if len(b) > min_len:
        output(f'{b[min_len:]}')

    output('\n')
