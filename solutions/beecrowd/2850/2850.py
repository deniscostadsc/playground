import sys

for line in sys.stdin:
    clean_input = line.strip()
    if clean_input == 'esquerda':
        print('ingles')
    elif clean_input == 'direita':
        print('frances')
    elif clean_input == 'nenhuma':
        print('portugues')
    else:
        print('caiu')
