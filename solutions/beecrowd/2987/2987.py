import sys
from string import ascii_uppercase

letters = ['-'] + list(ascii_uppercase)

for letter in sys.stdin:
    letter = letter.strip()
    print(letters.index(letter))
