import sys
from itertools import chain

line_number = int(input())

for line in sys.stdin:
    start, end = map(int, line.split())
    print(
        ''.join(
            chain(
                map(str, range(start, end + 1)),
                (x[::-1] for x in map(str, range(end, start - 1, -1))),
            )
        )
    )
