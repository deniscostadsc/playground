import sys


def is_leap(year):
    return (year % 4 == 0 and year % 100 != 0) or year % 400 == 0


def is_huluculu(year):
    return year % 15 == 0


def is_bulukulu(year):
    return year % 55 == 0 and is_leap(year)


first_test_case = True

for line in sys.stdin:
    if first_test_case:
        first_test_case = not first_test_case
    else:
        print()

    year = int(line)

    if is_leap(year):
        print('This is leap year.')
    if is_huluculu(year):
        print('This is huluculu festival year.')
    if is_bulukulu(year):
        print('This is bulukulu festival year.')
    if not is_leap(year) and not is_huluculu(year) and not is_bulukulu(year):
        print('This is an ordinary year.')
