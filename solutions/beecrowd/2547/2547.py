import sys

for line in sys.stdin:
    n, a_min, a_max = map(int, line.split())
    allowed_guests = 0

    for _ in range(n):
        current_a = int(input())

        if current_a >= a_min and current_a <= a_max:
            allowed_guests += 1

    print(allowed_guests)
