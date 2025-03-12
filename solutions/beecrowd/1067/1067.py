import sys

for line in sys.stdin:
    for i in range(1, int(line) + 1, 2):
        print(i)
