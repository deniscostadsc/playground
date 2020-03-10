from math import pow

print(
    int(pow(sum(range(101)), 2) - sum(map(lambda x: pow(x, 2), range(101)))))
