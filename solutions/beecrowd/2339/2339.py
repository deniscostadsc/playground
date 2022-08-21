import sys

for line in sys.stdin:
    c, p, f = map(int, line.split())

    print('S' if c * f <= p else 'N')
