import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    if line == '2002':
        output('Acesso Permitido\n')
        break
    else:
        output('Senha Invalida\n')
