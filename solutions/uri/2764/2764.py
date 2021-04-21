import sys

for line in sys.stdin:
    day, month, year = map(int, line.split("/"))

    print(f"{month:02d}/{day:02d}/{year:02d}")
    print(f"{year:02d}/{month:02d}/{day:02d}")
    print(f"{day:02d}-{month:02d}-{year:02d}")
