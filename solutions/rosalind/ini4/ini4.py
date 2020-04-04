import sys

a, b = sys.stdin.read().replace("\n", "").split()

a = int(a)
b = int(b)

print(sum([i for i in range(a, b + 1) if i % 2 != 0]))
