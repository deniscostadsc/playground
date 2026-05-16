import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    e, d = map(int, line.split())

    difference = d - e

    if difference >= 0:
        if difference < 3:
            output('Parece o trabalho do meu filho!\n')
            if d < 23:
                output('TCC Apresentado!\n')
            else:
                output('Fail! Entao eh nataaaaal!\n')
        elif difference >= 3:
            output('Muito bem! Apresenta antes do Natal!\n')
    else:
        output('Eu odeio a professora!\n')
