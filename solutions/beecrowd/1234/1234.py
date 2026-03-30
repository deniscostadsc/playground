import sys
from string import ascii_lowercase, ascii_uppercase

input = sys.stdin.readline
output = sys.stdout.write

for line in sys.stdin:
    up = True
    for character in line:
        if character == ' ':
            output(character)
            continue

        if up:
            if character in ascii_lowercase:
                output(f'{character.upper()}')
            else:
                output(f'{character}')
        else:
            if character in ascii_uppercase:
                output(f'{character.lower()}')
            else:
                output(f'{character}')

        up = not up
