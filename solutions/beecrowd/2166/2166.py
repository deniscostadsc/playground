import sys

input = sys.stdin.readline
output = sys.stdout.write


def sqrtt(n):
    result = 0
    for _ in range(n):
        result = 1 / (2 + result)
    return result + 1


while line := input().strip():
    n = int(line)
    output(f'{sqrtt(n):.10f}\n')
