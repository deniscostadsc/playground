import sys

input = sys.stdin.readline
output = sys.stdout.write


def oracle(n: int, k: int, f=0):
    result = n - (f * k)
    if result >= 1:
        return result * oracle(n=n, k=k, f=f + 1)
    return 1


c = int(input())
for _ in range(c):
    line = input().strip()
    n, k = int(line[: line.find('!')]), len(line[line.find('!') :])

    output(f'{oracle(n=n, k=k)}\n')
