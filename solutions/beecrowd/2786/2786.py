import sys

for line in sys.stdin:
    width = int(line)
    length = int(input())

    print((width * length) + ((width - 1) * (length - 1)))
    print(((width - 1) * 2) + ((length - 1) * 2))
