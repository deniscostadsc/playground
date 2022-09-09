import sys


def main():
    for line in sys.stdin:
        numbers = list(map(int, line.split()))
        not_increasing = False
        not_deacreasing = False

        for index, number in enumerate(numbers[1:], 1):
            if number < numbers[index - 1]:
                not_increasing = True

            if number > numbers[index - 1]:
                not_deacreasing = True

        if not_increasing and not not_deacreasing:
            print('D')
        elif not_deacreasing and not not_increasing:
            print('C')
        else:
            print('N')


main()
