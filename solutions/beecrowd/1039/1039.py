import math
import sys

for line in sys.stdin:
    r1, x1, y1, r2, x2, y2 = map(float, line.split())
    distance = math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)

    if r1 >= distance + r2:
        print('RICO')
    else:
        print('MORTO')
