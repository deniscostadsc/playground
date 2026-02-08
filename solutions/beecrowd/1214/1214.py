import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    line = list(map(int, input().split()))
    gs = line[1:]
    avg = sum(gs) / len(gs)
    c = sum(1 for item in gs if item > avg)
    output(f'{c / len(gs) * 100:.3f}%\n')
