import sys

for line in sys.stdin:
    n = int(line)
    for i in range(n):
        for j in range(n):
            if i == j and i + j == n - 1:
                print(2, end='')
            elif i == j:
                print(1, end='')
            elif i + j == n - 1:
                print(2, end='')
            else:
                print(3, end='')
        print()
