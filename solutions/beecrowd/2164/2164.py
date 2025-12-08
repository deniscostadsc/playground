import math
import sys

input = sys.stdin.readline
output = sys.stdout.write


def fibonacci(number):
    return (
        pow((1 + math.sqrt(5)) / 2, n) - pow((1 - math.sqrt(5)) / 2, n)
    ) / math.sqrt(5.0)


while line := input().strip():
    n = int(line)
    output(f'{fibonacci(n):.1f}\n')
