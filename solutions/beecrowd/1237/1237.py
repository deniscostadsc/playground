import sys

input = sys.stdin.readline
output = sys.stdout.write

while first_line := input().strip():
    second_line = input().strip()
    lcs = 0
    lcs_table = [
        [0] * (len(second_line) + 1) for _ in range(len(first_line) + 1)
    ]

    for first_line_index, first_line_letter in enumerate(first_line, 1):
        for second_line_index, second_line_letter in enumerate(second_line, 1):
            if first_line_letter == second_line_letter:
                lcs_table[first_line_index][second_line_index] = (
                    1 + lcs_table[first_line_index - 1][second_line_index - 1]
                )
                lcs = max(lcs, lcs_table[first_line_index][second_line_index])

    output(f'{lcs}\n')
