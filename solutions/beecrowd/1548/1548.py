import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    _ = input()
    queue = list(map(int, input().split()))

    count = 0
    for q, q_sorted in zip(queue[::-1], sorted(queue)):
        if q == q_sorted:
            count += 1

    output(f'{count}\n')
