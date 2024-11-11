import sys

for line in sys.stdin:
    a, b, c = map(float, line.split())

    if a < b + c and b < a + c and c < a + b:
        print(f'Perimetro = {a + b + c:.1f}')
    else:
        print(f'Area = {c * (a + b) / 2:.1f}')
