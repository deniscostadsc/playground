#!/usr/bin/env python3

from math import sqrt

LIMIT = 600851475143


def is_prime(num):
    if num % 2 == 0:
        return False
    for current in range(3, int(sqrt(num)) + 1):
        if num % current == 0:
            return False
    return True


for i in range(1, int(sqrt(LIMIT))):
    if LIMIT % i == 0 and is_prime(i):
        prime = i

print(prime)
