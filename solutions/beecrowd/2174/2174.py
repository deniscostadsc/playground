import sys

for line in sys.stdin:
    n = int(line.strip())
    pokedex = set()

    for _ in range(n):
        pokemon = input().strip()
        pokedex.add(pokemon)

    print(f'Falta(m) {151 - len(pokedex)} pomekon(s).')
