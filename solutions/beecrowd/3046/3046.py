import sys

for line in sys.stdin:
    n = int(line)

    print(f'{(n + 1) * (n + 2) // 2}')
