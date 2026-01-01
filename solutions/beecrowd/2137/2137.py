import heapq
import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)

    codes = []
    for _ in range(n):
        code = input().strip()
        heapq.heappush(codes, code)

    while codes:
        output(f'{heapq.heappop(codes)}\n')
