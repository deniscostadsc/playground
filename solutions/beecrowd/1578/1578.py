import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for index in range(n):
    m = int(input())

    matrix = []
    count_digits = [0] * m
    for line in range(m):
        matrix.append([])
        numbers_str = input().split()
        for column in range(m):
            matrix[line].append(str(pow(int(numbers_str[column]), 2)))
            count_digits[column] = max(
                count_digits[column], len(matrix[line][column])
            )

    if index != 0:
        output('\n')
    output(f'Quadrado da matriz #{index + 4}:\n')

    for line in range(m):
        for column in range(m):
            if column != 0:
                output(' ')
            output(f'{matrix[line][column].rjust(count_digits[column])}')
        output('\n')
