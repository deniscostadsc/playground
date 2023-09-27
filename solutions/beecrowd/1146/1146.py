import sys

first = True

for line in sys.stdin:
    if first:
        first = False
    else:
        print('')

    x = int(line)
    print(' '.join(str(item) for item in range(1, x + 1)), end='')
