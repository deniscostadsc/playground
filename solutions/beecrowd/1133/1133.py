import sys

for line in sys.stdin:
    x = int(line)
    y = int(input())

    x, y = min(x, y), max(x, y)

    for i in range(x + 1, y):
        if i % 5 == 2 or i % 5 == 3:
            print(i)
