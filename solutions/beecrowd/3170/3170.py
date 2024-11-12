import sys

for line in sys.stdin:
    b = int(line)
    g = int(input())

    if g // 2 < b:
        print('Amelia tem todas bolinhas!')
    else:
        print(f'Faltam {(g // 2) - b} bolinha(s)')
