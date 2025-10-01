import sys
from itertools import chain

input = sys.stdin.readline
output = sys.stdout.write


def find_boundaries(items, search):
    begin = 0
    end = len(items) - 1

    lower_bound = None
    upper_bound = None

    while begin <= end:
        middle = (end + begin) // 2

        if items[middle] == search:
            if middle == 0 or items[middle - 1] < search:
                lower_bound = middle
                break
            else:
                end = middle - 1
        elif items[middle] > search:
            end = middle - 1
        else:
            begin = middle + 1

    if lower_bound is None:
        return None, None
    begin, end = lower_bound, len(items) - 1

    while begin <= end:
        middle = (end + begin) // 2

        if items[middle] == search:
            if middle == len(items) - 1 or items[middle + 1] > search:
                upper_bound = middle
                break
            else:
                begin = middle + 1
        elif items[middle] > search:
            end = middle - 1
        else:
            begin = middle + 1

    return lower_bound, upper_bound


while line := input():
    if line.strip():
        n = int(line)
    else:
        continue

    ranges = []
    for _ in range(n):
        ranges.append(list(map(int, input().split())))

    sorted_items = sorted(chain(*(range(x, y + 1) for x, y in ranges)))

    search = int(input())
    lower_bound, upper_bound = find_boundaries(sorted_items, search)

    if lower_bound is None:
        output(f'{search} not found\n')
    else:
        output(f'{search} found from {lower_bound} to {upper_bound}\n')
