import sys

OPTIONS = 'ABCDE'


for line in sys.stdin:
    n = int(line)
    if n == 0:
        break

    for _ in range(n):
        options = map(int, input().split())
        count = 0
        chosen_option = 0

        for index, option in enumerate(options):
            if option <= 127:
                count += 1
                chosen_option = index

        if count != 1:
            print('*')
        else:
            print(f'{OPTIONS[chosen_option]}')
