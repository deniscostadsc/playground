import sys

for line in sys.stdin:
    x, y = map(int, line.split())

    if not x or not y:
        break

    if x > 0 and y > 0:
        print('primeiro')
    elif x < 0 and y < 0:
        print('terceiro')
    elif x < 0:
        print('segundo')
    else:
        print('quarto')
