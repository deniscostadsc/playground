import sys


def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a


n = int(sys.stdin.readline())

for _ in range(n):
    a, _, b, o, c, _, d = sys.stdin.readline().split()
    a, b, c, d = map(int, [a, b, c, d])

    if o == '+':
        num = (b * d) * a // b + (b * d) * c // d
        den = b * d
    elif o == '-':
        num = (b * d) * a // b - (b * d) * c // d
        den = b * d
    elif o == '*':
        num = a * c
        den = b * d
    else:
        num = a * d
        den = b * c

    gcd_result = gcd(num, den)

    print(f'{num}/{den} = {num // gcd_result}/{den // gcd_result}')
