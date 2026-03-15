import sys

input = sys.stdin.readline
output = sys.stdout.write


def gcd(x, y):
    if y == 0:
        return x
    return gcd(y, x % y)


def gcd_tri(x, y, z):
    return gcd(x, gcd(y, z))


def is_pythagorean_triple(x, y, z):
    if x > y and x > z:
        return x * x == (y * y) + (z * z)
    elif y > z:
        return y * y == (x * x) + (z * z)
    return z * z == (x * x) + (y * y)


while line := input().strip():
    x, y, z = map(int, line.split())
    output('tripla')
    if is_pythagorean_triple(x, y, z):
        output(' pitagorica')
        if gcd_tri(x, y, z) == 1:
            output(' primitiva')
    output('\n')
