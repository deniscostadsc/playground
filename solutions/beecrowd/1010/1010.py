import sys

s = 0.0

for line in sys.stdin:
    _, a, b = line.split()
    a, b = int(a), float(b)
    s += a * b

print(f'VALOR A PAGAR: R$ {s:.2f}')
