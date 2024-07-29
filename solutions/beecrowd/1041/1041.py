import sys

for line in sys.stdin:
    x, y = map(float, line.split())
    if not x and not y:
        print('Origem')
    elif not x and y:
        print('Eixo Y')
    elif x and not y:
        print('Eixo X')
    elif x > 0.0:
        if y > 0.0:
            print('Q1')
        else:
            print('Q4')
    else:
        if y > 0.0:
            print('Q2')
        else:
            print('Q3')
