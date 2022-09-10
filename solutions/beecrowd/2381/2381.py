import sys

for line in sys.stdin:
    s = line.split()
    n, k = map(int, s)

    names = []
    for _ in range(n):
        names.append(input())

    names.sort()

    print(names[k - 1])
