import sys

_ = int(input())
distance = 0

for line in sys.stdin:
    t, v = map(int, line.split())
    distance += t * v

print(distance)
