import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    first_night, second_night = map(int, line.split())
    if second_night <= 2:
        output('nova\n')
    elif second_night >= 97:
        output('cheia\n')
    elif first_night >= second_night:
        output('minguante\n')
    else:
        output('crescente\n')
