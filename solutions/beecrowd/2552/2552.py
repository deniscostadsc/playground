import sys

for header_line in sys.stdin:
    n, m = map(int, header_line.split())

    sweeper_board = []
    for _ in range(n):
        sweeper_board.append(list(map(int, input().split())))

    for line in range(n):
        for column in range(m):
            if sweeper_board[line][column] == 1:
                print(9, end='')
            else:
                count_cheese_breads_around = 0

                if line > 0:
                    count_cheese_breads_around += (
                        1 if sweeper_board[line - 1][column] == 1 else 0
                    )
                if line < n - 1:
                    count_cheese_breads_around += (
                        1 if sweeper_board[line + 1][column] == 1 else 0
                    )
                if column > 0:
                    count_cheese_breads_around += (
                        1 if sweeper_board[line][column - 1] == 1 else 0
                    )
                if column < m - 1:
                    count_cheese_breads_around += (
                        1 if sweeper_board[line][column + 1] == 1 else 0
                    )

                print(count_cheese_breads_around, end='')
        print()
