import sys

PI = 3.1415

for line in sys.stdin:
    r, l = map(int, line.split())
    print(int(3*l/(4*PI*r**3)))
