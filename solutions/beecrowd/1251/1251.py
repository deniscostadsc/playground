import sys

first_time = True

for line in sys.stdin:
    ascii_count = {}

    if not first_time:
        print()

    first_time = False

    for char in line:
        if ord(char) in [10, 13]:
            break

        if ord(char) in ascii_count:
            ascii_count[ord(char)] += 1
        else:
            ascii_count[ord(char)] = 1

    ascii_ranking = sorted(ascii_count, key=lambda k: (ascii_count[k], -k))

    for ascii_char in ascii_ranking:
        print(f'{ascii_char} {ascii_count[ascii_char]}')
