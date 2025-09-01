import sys

for line in sys.stdin:
    money = line.strip()
    cents = int(input().strip())

    print('$', end='')

    comma_counter = len(money) % 3

    for index, digit in enumerate(money):
        if comma_counter == 0:
            comma_counter = 3
            if index != 0:
                print(',', end='')
        print(digit, end='')
        comma_counter -= 1

    print('.', end='')

    if cents < 10:
        print(f'0{cents}')
    else:
        print(cents)
