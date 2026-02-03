import sys

input = sys.stdin.readline
output = sys.stdout.write


def rafael(x, y):
    return ((3 * x) * (3 * x)) + (y * y)


def beto(x, y):
    return 2 * (x * x) + ((5 * y) * (5 * y))


def carlos(x, y):
    return -100 * x + (y * y * y)


n = int(input())
for _ in range(n):
    x, y = map(int, input().split())
    if rafael(x, y) > beto(x, y) and rafael(x, y) > carlos(x, y):
        output('Rafael ganhou\n')
    elif beto(x, y) > carlos(x, y):
        output('Beto ganhou\n')
    else:
        output('Carlos ganhou\n')
