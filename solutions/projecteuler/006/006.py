from math import pow

print(
    int(pow(sum(xrange(101)), 2) - sum(map(lambda x: pow(x, 2), xrange(101)))))
