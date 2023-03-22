import sys

reindeers = [
    'Rudolph',
    'Dasher',
    'Dancer',
    'Prancer',
    'Vixen',
    'Comet',
    'Cupid',
    'Donner',
    'Blitzen',
]

for line in sys.stdin:
    snowballs_count = sum(map(int, line.split()))
    print(reindeers[snowballs_count % 9])
