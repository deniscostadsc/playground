import sys

for line in sys.stdin:
    distance, palantir_sauron, palantir_saruman = map(int, line.split())

    print(f'{distance/(palantir_sauron + palantir_saruman):.2f}')
