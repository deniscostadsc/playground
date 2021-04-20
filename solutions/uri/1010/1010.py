import sys

s = 0.0

for line in sys.stdin:
    a, b, c = line.split()
    a, b, c = int(a), int(b), float(c)
    s += c * b

print(f'VALOR A PAGAR: R$ {s:.2f}')
