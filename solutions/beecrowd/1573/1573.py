import sys

for line in sys.stdin:
    if line.strip() == '0 0 0':
        break

    a, b, c = map(int, line.split())

    print(int((a * b * c) ** (1 / 3)))
