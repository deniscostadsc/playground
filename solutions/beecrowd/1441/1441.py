import sys
from functools import cache

input = sys.stdin.readline
output = sys.stdout.write


@cache
def greatest_ackermann(h):
    result = h
    if h > 1:
        if h % 2 == 0:
            result = max(result, greatest_ackermann(h // 2))
        else:
            result = max(result, greatest_ackermann(3 * h + 1))
    return result


while line := input().strip():
    h = int(line)
    if h == 0:
        break

    output(f'{greatest_ackermann(h)}\n')
