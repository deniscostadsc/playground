import sys
from math import sqrt

sys.setrecursionlimit(3505)

primes = {
    2: 3,
    3: 5,
    5: 7,
    7: 11,
    11: 13,
    13: 17,
    17: 19,
    19: 23,
    23: 29,
    29: 31,
    31: 37,
    37: 41,
    41: 43,
    43: 47,
    47: 53,
    53: 59,
    59: 61,
    61: 67,
    67: 71,
    71: 73,
    73: 79,
    79: 83,
    83: 89,
    89: 97,
    97: 101,
}


def is_prime(number):
    if number == 2:
        return True
    if number <= 1 or number % 2 == 0:
        return False
    for divisor in range(3, int(sqrt(number)) + 1, 2):
        if number % divisor == 0:
            return False
    return True


def next_prime(number):
    if number in primes:
        return primes[number]

    next_number = number + 1
    while not is_prime(next_number):
        next_number += 1
    primes[number] = next_number

    return primes[number]


def josephus(n, k=2) -> int:
    if n == 1:
        return 1
    return ((josephus(n - 1, next_prime(k)) + k - 1) % n) + 1


for line in sys.stdin:
    n = int(line)

    if n == 0:
        break

    print(josephus(n))
