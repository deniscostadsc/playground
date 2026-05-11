import sys

input = sys.stdin.readline
output = sys.stdout.write

columns = '_abcdefgh'

while line := input().strip():
    initial_position, final_position = line.split()

    int_initial_position_column = columns.index(initial_position[0])
    int_initial_position_row = int(initial_position[1])
    int_final_position_column = columns.index(final_position[0])
    int_final_position_row = int(final_position[1])

    column_distance = abs(
        int_initial_position_column - int_final_position_column
    )
    row_distance = abs(int_initial_position_row - int_final_position_row)

    if (
        column_distance != row_distance
        and column_distance in [1, 2]
        and row_distance in [1, 2]
    ):
        output('VALIDO\n')
    else:
        output('INVALIDO\n')
