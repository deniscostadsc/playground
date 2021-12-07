import sys
from functools import lru_cache


@lru_cache(maxsize=1024)
def calculate_number(index, line, items_per_line):
    if line == 0:
        return 1

    r = 0

    if index - 2 >= 0 and index - 2 < items_per_line - 2:
        r += calculate_number(index - 2, line - 1, items_per_line - 2)
    if index - 1 >= 0 and index - 1 < items_per_line - 2:
        r += calculate_number(index - 1, line - 1, items_per_line - 2)
    if index >= 0 and index < items_per_line - 2:
        r += calculate_number(index, line - 1, items_per_line - 2)

    return r


@lru_cache(maxsize=1024)
def sum_line(line):
    items_per_line = (line + 1) * 2 - 1
    return sum(
        calculate_number(index, line, items_per_line)
        for index in range(items_per_line)
    )


for line in sys.stdin:
    line = int(line)
    print(sum_line(line))
