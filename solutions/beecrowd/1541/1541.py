import math
import sys

for line in sys.stdin:
    if line.startswith('0'):
        break

    a, b, c = map(int, line.split())
    print(f'{math.floor(math.sqrt((100 * a * b) / c))}')
