import sys


def sum_five_consecutive_even_numbers(number):
    return sum(filter(lambda x: x % 2 == 0, range(number, number + 10)))


for line in sys.stdin:
    number = int(line)
    if number:
        print(sum_five_consecutive_even_numbers(number))
