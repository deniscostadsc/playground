import math


def is_prime(n):
    if n == 2:
        return True
    elif n % 2 == 0 or n < 2:
        return False
    else:
        for divisor in range(3, int(math.sqrt(n)) + 1, 2):
            if n % divisor == 0:
                return False
    return True


n = int(input())

for _ in range(n):
    x = int(input())
    print(f'{x} eh primo' if is_prime(x) else f'{x} nao eh primo')
