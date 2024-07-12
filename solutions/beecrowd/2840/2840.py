import sys

PI = 3.1415

for line in sys.stdin:
    radius, liters = map(int, line.split())
    print(int(3 * liters / (4 * PI * radius**3)))
