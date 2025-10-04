import sys

input = sys.stdin.readline
output = sys.stdout.write

while first_line := input().strip():
    second_line = input().strip()
    third_line = input().strip()
    fourth_line = input().strip()

    numbers = []
    for digits in zip(first_line, second_line, third_line, fourth_line):
        numbers.append(int(''.join(digits)))

    for index in range(1, len(numbers) - 1):
        output(f'{chr((numbers[0] * numbers[index] + numbers[-1]) % 257)}')

    output('\n')
