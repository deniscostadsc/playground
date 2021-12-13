import sys

s = 0.0

for line in sys.stdin:
    _, b, c = line.split()
    b, c = int(b), float(c)
    s += c * b

print(f'VALOR A PAGAR: R$ {s:.2f}')
