import sys

for line in sys.stdin:
    n = int(line)
    distance = 0

    for _ in range(n):
        t, v = map(int, input().split())
        distance += t * v

    print(distance)
