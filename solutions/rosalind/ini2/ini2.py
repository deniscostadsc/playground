import sys

a, b = sys.stdin.read().replace("\n", "").split()
a = int(a)
b = int(b)

print(a * a + b * b)
