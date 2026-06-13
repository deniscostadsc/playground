import sys

input = sys.stdin.readline
output = sys.stdout.write

while _ := input().strip():
    values = map(int, input().split())
    previous_value = next(values)
    total_moves = 0

    for value in values:
        moves = 0
        if previous_value > value:
            moves = previous_value - value
            total_moves += moves
        previous_value = value + moves

    output(f'{total_moves}\n')
