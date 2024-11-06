import sys

for line in sys.stdin:
    a, b, c, d = map(int, line.split())

    if b > c and d > a and c + d > a + b and c > 0 and d > 0 and a % 2 == 0:
        print('Valores aceitos')
    else:
        print('Valores nao aceitos')
