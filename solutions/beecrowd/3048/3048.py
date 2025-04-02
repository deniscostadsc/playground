import sys

for line in sys.stdin:
    count = 0
    previous_number = None

    for _ in range(int(line)):
        current_number = int(input())

        if previous_number is None:
            count += 1
            previous_number = current_number
            continue

        if current_number != previous_number:
            previous_number = current_number
            count += 1

    print(count)
