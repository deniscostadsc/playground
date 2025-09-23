import sys

for line in sys.stdin:

    next_p = 0

    for index, char in enumerate(line.strip()):
        if char == ' ':
            next_p += 1
            print(' ', end='')
        elif index != next_p:
            print(char, end='')
        else:
            next_p += 2

    print()
