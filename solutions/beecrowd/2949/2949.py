import sys

RACES = (
    'Hobbit(s)',
    'Humano(s)',
    'Elfo(s)',
    'Anao(oes)',
    'Mago(s)',
)

for line in sys.stdin:
    n = int(line)
    results = {race: 0 for race in RACES}

    for _ in range(n):
        _, race = input().strip().split()
        if race == 'A':
            results['Anao(oes)'] += 1
        elif race == 'E':
            results['Elfo(s)'] += 1
        elif race == 'H':
            results['Humano(s)'] += 1
        elif race == 'M':
            results['Mago(s)'] += 1
        else:
            results['Hobbit(s)'] += 1

    for race in RACES:
        print(f'{results[race]} {race}')
