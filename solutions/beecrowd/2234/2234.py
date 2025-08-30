import sys

for line in sys.stdin:
    h, p = map(int, line.split())
    print(f'{h / p:.2f}')
