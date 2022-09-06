import sys

for line in sys.stdin:
    print(max(map(int, line.split())))
