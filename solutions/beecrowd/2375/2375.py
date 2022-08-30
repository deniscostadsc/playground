import sys


def lower_or_equal_than_others(n, x, y, z):
    return n <= x and n <= y and n <= z


for line in sys.stdin:
    diameter = int(line)
    height, width, depth = map(int, input().split())

    if lower_or_equal_than_others(diameter, height, width, depth):
        print('S')
    else:
        print('N')
