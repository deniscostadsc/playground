import sys

for line in sys.stdin:
    n = int(line)

    if n % 2 == 0:
        n += 1

    for _ in range(6):
        print(n)
        n += 2
