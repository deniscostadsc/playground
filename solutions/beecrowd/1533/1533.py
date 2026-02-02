import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    if line == '0':
        break

    first_suspicous = 0
    second_suspicious = 0
    first_suspicious_index = second_suspicious_index = 1

    numbers = map(int, input().split())

    for index, number in enumerate(numbers, 1):
        if number > first_suspicous:
            second_suspicious = first_suspicous
            second_suspicious_index = first_suspicious_index
            first_suspicous = number
            first_suspicious_index = index
        elif number > second_suspicious:
            second_suspicious = number
            second_suspicious_index = index

    output(f'{second_suspicious_index}\n')
