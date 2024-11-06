import math
import sys

for line in sys.stdin:
    a, b, c = map(float, line.split())

    delta = math.pow(b, 2) - 4 * a * c

    if delta >= 0 and a != 0:
        print(f'R1 = {((b * -1) + math.sqrt(delta)) / (2 * a):.5f}')
        print(f'R2 = {((b * -1) - math.sqrt(delta)) / (2 * a):.5f}')
    else:
        print('Impossivel calcular')
