import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)

    if n <= 2:
        input()
        output('1\n')
        continue

    first_number, previous_number, *numbers = list(map(int, input().split()))
    difference = first_number - previous_number
    count = 1

    for number in numbers:
        if difference != previous_number - number:
            count += 1

        difference = previous_number - number
        previous_number = number

    output(f'{count}\n')
