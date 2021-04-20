import sys

for line in sys.stdin:
    a, b, c = map(int, line.split())
    m = int((a + b + abs(a - b)) / 2)
    m = int((m + c + abs(m - c)) / 2)

    print(f"{m} eh o maior")
