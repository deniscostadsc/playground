import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n, m = map(int, line.split())
    cells = []
    max_worms = 0

    for _ in range(n):
        cells_line = list(map(int, input().split()))
        max_worms = max(max_worms, sum(cells_line))
        cells.append(cells_line)

    for cells_column in zip(*cells):
        max_worms = max(max_worms, sum(cells_column))

    print(max_worms)
