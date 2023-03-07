import sys

for line in sys.stdin:
    _line = line.strip()

    for index, _ in enumerate(_line):
        if index == 0:
            print(' '.join(_line))
        else:
            print(' ' * (index), end='')
            print(' '.join(_line[:-(index)]))

    print()
