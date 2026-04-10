import sys

for m in sys.stdin:
    m = int(m)
    sum_n_c = 0
    sum_c = 0

    for _ in range(m):
        n, c = map(int, input().split())
        sum_n_c += n * c
        sum_c += c

    print(f'{sum_n_c/(sum_c * 100):.4f}')
