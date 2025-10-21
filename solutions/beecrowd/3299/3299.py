import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    if not line.find('13') == -1:
        output(f'{line} es de Mala Suerte\n')
    else:
        output(f'{line} NO es de Mala Suerte\n')
