import sys
from math import sqrt

for line in sys.stdin:
    xf, yf, xi, yi, vi, r1, r2 = map(int, line.split())
    distance = sqrt(pow(xi - xf, 2) + pow(yi - yf, 2)) + 1.5 * vi
    if distance <= r1 + r2:
        print('Y')
    else:
        print('N')
