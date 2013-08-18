from math import sqrt

def is_prime(n):
    for i in xrange(3, n / 2 + 1):
        if n % i == 0:
            return False
    return True

n = 600851475143

for i in xrange(1, int(sqrt(n))):
    if n % i == 0 and is_prime(i):
        prime = i

print(prime)