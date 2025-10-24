import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    degree = int(line)

    if degree == 360 or degree < 90:
        output('Bom Dia!!\n')
    elif degree < 180:
        output('Boa Tarde!!\n')
    elif degree < 270:
        output('Boa Noite!!\n')
    else:
        output('De Madrugada!!\n')
