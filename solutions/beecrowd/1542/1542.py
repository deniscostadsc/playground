import math
import sys

for line in sys.stdin:
    if line.strip() == '0':
        break

    q, d, p = map(int, line.split())
    total_pages = math.trunc(((d * p) / (p - q)) * q)

    print(f'{total_pages} pagina', end='')
    print('s' if total_pages > 1 else '')
