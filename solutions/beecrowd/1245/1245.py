import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)
    right_shoes_count = [0] * 61
    left_shoes_count = [0] * 61

    for _ in range(n):
        shoe_size, shoe_side = input().split()
        shoe_size = int(shoe_size)

        if shoe_side == 'D':
            right_shoes_count[shoe_size] += 1
        else:
            left_shoes_count[shoe_size] += 1

    output(
        f'{sum(min(r, l) for r, l in zip(right_shoes_count, left_shoes_count))}\n'
    )
