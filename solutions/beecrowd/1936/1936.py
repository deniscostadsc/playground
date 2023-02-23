import sys


def minimum_factors(factorials, value):
    result = [float('infinity')] * (value + 1)
    result[0] = 0

    for number in range(1, value + 1):
        for factorial in factorials:
            if factorial <= number:
                result[number] = min(
                    result[number], result[number - factorial] + 1
                )

    return result[value]


def main():
    factorials = [1, 2, 6, 24, 120, 720, 5040, 40320, 362880]

    for line in sys.stdin:
        print(minimum_factors(factorials, int(line)))


main()
