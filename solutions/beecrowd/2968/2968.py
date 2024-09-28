import math
import sys

for line in sys.stdin:
    v, n = map(int, line.split())

    step = 10
    for i in range(10, 100, 10):
        step = v * n / 100 * i

        if abs(float(int(step)) - step) < 1e-9:
            print(int(step), end='')
        else:
            print(math.ceil(step), end='')
        if i <= 80:
            print(end=' ')
    print()
