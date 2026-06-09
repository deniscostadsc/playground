import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    current_number = int(line)
    first_print = True
    while True:
        output(f'{"" if first_print else " "}{current_number}')
        first_print = False

        if current_number == 1:
            break
        elif current_number % 2 == 0:
            current_number //= 2
        else:
            current_number = current_number * 3 + 1

    output('\n')
