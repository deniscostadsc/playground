import sys

PI = 3.14159

for line in sys.stdin:
    a, b, c = map(float, line.split())

    print(f'TRIANGULO: {a * c / 2:.3f}')
    print(f'CIRCULO: {PI * (c * c):.3f}')
    print(f'TRAPEZIO: {c * ((a + b) / 2):.3f}')
    print(f'QUADRADO: {b * b:.3f}')
    print(f'RETANGULO: {a * b:.3f}')
