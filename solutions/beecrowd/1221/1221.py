import math
import sys

input = sys.stdin.readline
output = sys.stdout.write


def is_prime(n):
    if n == 2:
        return True

    if n % 2 == 0 or n < 2:
        return False

    for i in range(3, int(math.sqrt(n)) + 1, 2):
        if n % i == 0:
            return False

    return True


n = int(input())

for _ in range(n):
    p = int(input())

    if is_prime(p):
        output('Prime\n')
    else:
        output('Not Prime\n')
