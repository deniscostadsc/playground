import sys

for line in sys.stdin:
    x, y = map(int, line.split())

    if x == 1:
        print(f'Total: R$ {y * 4.00:.2f}')
    elif x == 2:
        print(f'Total: R$ {y * 4.50:.2f}')
    elif x == 3:
        print(f'Total: R$ {y * 5.00:.2f}')
    elif x == 4:
        print(f'Total: R$ {y * 2.00:.2f}')
    else:
        print(f'Total: R$ {y * 1.50:.2f}')
