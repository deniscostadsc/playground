import sys

input = sys.stdin.readline
output = sys.stdout.write


def sum_digits(number, digits_count):
    result = 0
    for _ in range(digits_count):
        result += number % 10
        number //= 10
    return result


while line := input().strip():
    digits_count, number = map(int, line.split())
    answer = 'nao'
    if number % 3 == 0:
        answer = 'sim'

    output(f'{sum_digits(number, digits_count)} {answer}\n')
