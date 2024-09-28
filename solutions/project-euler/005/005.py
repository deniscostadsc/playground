import functools


def gcd(x, y):
    if y == 0:
        return x
    return gcd(y, x % y)


def lcm(x, y):
    return int(abs(x) / gcd(x, y) * abs(y))


print(functools.reduce(lcm, range(1, 21)))
