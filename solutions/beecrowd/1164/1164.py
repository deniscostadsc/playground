import sys

input = sys.stdin.readline
output = sys.stdout.write

x = int(input())

for _ in range(x):
    n = int(input())

    s = 0

    for i in range(1, n // 2 + 1):
        if n % i == 0:
            s += i

    if s == n:
        output(f'{n} eh perfeito\n')
    else:
        output(f'{n} nao eh perfeito\n')
