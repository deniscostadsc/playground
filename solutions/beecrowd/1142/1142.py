import sys

for line in sys.stdin:
    n = int(line)

    k = 1
    for _ in range(n):
        print(f'{k} {(k := k + 1)} {(k := k + 1)} PUM')
        k += 2
