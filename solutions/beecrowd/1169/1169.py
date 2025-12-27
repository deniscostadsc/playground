import sys

input = sys.stdin.readline
output = sys.stdout.write


def grains(n):
    if n == 1:
        return 2
    return 2 * grains(n - 1)


n = int(input())

for _ in range(n):
    x = int(input())

    output(f'{grains(x) // 12 // 1000} kg\n')
