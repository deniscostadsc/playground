import sys

_ = input()

for line in sys.stdin:
    n, k = map(int, line.split())
    print(n // k + n % k)
