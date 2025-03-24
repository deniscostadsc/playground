n = int(input())

for _ in range(n):
    number = int(input())

    if number == 0:
        print('NULL')
        continue

    if number % 2 == 0:
        print('EVEN ', end='')
    else:
        print('ODD ', end='')

    if number > 0:
        print('POSITIVE')
    else:
        print('NEGATIVE')
