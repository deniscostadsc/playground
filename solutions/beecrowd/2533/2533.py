import sys

for n in sys.stdin:
    n = int(n)
    sum_n_c = 0
    sum_c = 0

    for _ in range(n):
        n, c = map(int, input().split())
        sum_n_c += n * c
        sum_c += c

    print(f'{sum_n_c/(sum_c * 100):.4f}')
