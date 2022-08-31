import sys

for line in sys.stdin:
    x, y = map(int, line.split('.'))

    print('.'.join(map(str, [y, x])))
