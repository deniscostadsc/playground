import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n, m = map(int, line.split())
    x = y = 0

    terrain = []
    for _ in range(n):
        terrain.append(list(map(int, input().split())))

    for index_row, row in enumerate(terrain[1:-1], 1):
        for index_cell, cell in enumerate(row[1:-1], 1):
            if (
                cell == 42
                and terrain[index_row - 1][index_cell - 1] == 7
                and terrain[index_row - 1][index_cell] == 7
                and terrain[index_row - 1][index_cell + 1] == 7
                and terrain[index_row][index_cell - 1] == 7
                and terrain[index_row][index_cell + 1] == 7
                and terrain[index_row + 1][index_cell - 1] == 7
                and terrain[index_row + 1][index_cell] == 7
                and terrain[index_row + 1][index_cell + 1] == 7
            ):
                x = index_row + 1
                y = index_cell + 1
                break

            if x and y:
                break

    output(f'{x} {y}\n')
