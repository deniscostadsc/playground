import sys


def print_top_tree(n):
    asterisk_string = '*'
    asterisk_count = 1
    space_string = ' '
    space_count = n // 2

    while asterisk_count <= n:
        print(
            f'{space_string * space_count}{asterisk_string * asterisk_count}'
        )
        asterisk_count += 2
        space_count -= 1

    print(f'{space_string * (n // 2)}{asterisk_string}')
    print(f'{space_string * (n // 2 - 1)}{asterisk_string * 3}')


for line in sys.stdin:
    print_top_tree(int(line))
    print()
