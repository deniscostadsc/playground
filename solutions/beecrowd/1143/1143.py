import sys

for line in sys.stdin:
    n = int(line)
    for i in range(1, n + 1):
        print(f'{i} {i * i} {i * i * i}')
