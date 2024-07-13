import math
import sys


def is_prime(number):
    if number == 1:
        return False
    if number == 2:
        return True
    if number % 2 == 0:
        return False
    for i in range(3, int(math.sqrt(number)) + 1, 2):
        if number % i == 0:
            return False
    return True


def is_super_prime(number):
    for digit in str(number):
        if not is_prime(int(digit)):
            return False
    return True


for line in sys.stdin:
    if not is_prime(int(line)):
        print('Nada')
    elif is_super_prime(int(line)):
        print('Super')
    else:
        print('Primo')
