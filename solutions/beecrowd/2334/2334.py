import sys

for line in sys.stdin:
    p = int(line)

    if p == -1:
        break

    if p == 0:
        print(0)
    else:
        print(p-1)
