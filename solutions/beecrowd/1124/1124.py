import sys
from math import sqrt


def is_elevator_too_small(width, length, r1, r2):
    return (
        width < r1 * 2 or width < r2 * 2 or length < r1 * 2 or length < r2 * 2
    )


def main():
    for line in sys.stdin:
        width, length, r1, r2 = map(int, line.split())

        if not all([width, length, r1, r2]):
            break

        if is_elevator_too_small(width, length, r1, r2):
            print('N')
            continue

        x_r1 = r1
        y_r1 = r1
        x_r2 = width - r2
        y_r2 = length - r2
        distance_betweeen_circle_centers = sqrt(
            ((x_r2 - x_r1) ** 2) + ((y_r2 - y_r1) ** 2)
        )

        if distance_betweeen_circle_centers >= (r1 + r2):
            print('S')
        else:
            print('N')


main()
