import sys

for line in sys.stdin:
    if line.strip() == '0':
        break

    n = int(line)
    total_usable_sticks = 0

    for _ in range(n):
        _, v = map(int, input().split())
        total_usable_sticks += v
        if v % 2 != 0:
            total_usable_sticks -= 1

    print(total_usable_sticks // 4)
