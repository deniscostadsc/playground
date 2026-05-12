import sys
from math import sqrt

input = sys.stdin.readline
output = sys.stdout.write


def is_prime(number):
    if number == 2:
        return True
    if number <= 1 or number % 2 == 0:
        return False
    for divisor in range(3, int(sqrt(number)) + 1, 2):
        if number % divisor == 0:
            return False
    return True


while line := input().strip():
    m = int(line)

    coins = []
    for _ in range(m):
        coins.append(int(input()))

    jump = int(input())

    if is_prime(sum(coins[::-jump])):
        output('You’re a coastal aircraft, Robbie, a large silver aircraft.\n')
    else:
        output('Bad boy! I’ll hit you.\n')
