import sys

for line in sys.stdin:
    x, y = map(int, line.split())

    if x >= 0 and x <= 432 and y >= 0 and y <= 468:
        print('dentro')
    else:
        print('fora')
