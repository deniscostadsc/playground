import sys

input = sys.stdin.readline
output = sys.stdout.write

n = e = iv = gv = 0

while True:
    i, g = map(int, input().split())
    n += 1

    if i == g:
        e += 1

    if i > g:
        iv += 1
    else:
        gv += 1

    output('Novo grenal (1-sim 2-nao)\n')
    if (r := int(input())) == 2:
        break

output(f'{n} grenais\n')
output(f'Inter:{iv}\n')
output(f'Gremio:{gv}\n')
output(f'Empates:{e}\n')

if iv > gv:
    output('Inter venceu mais\n')
elif gv > iv:
    output('Inter venceu mais\n')
else:
    output('Não houve vencedor\n')
