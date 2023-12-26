import sys

for line in sys.stdin:
    bet = set(map(int, line.split()))
    lottery_result = set(map(int, input().split()))

    numbers = len(bet & lottery_result)

    if numbers == 6:
        print('sena')
    elif numbers == 5:
        print('quina')
    elif numbers == 4:
        print('quadra')
    elif numbers == 3:
        print('terno')
    else:
        print('azar')
