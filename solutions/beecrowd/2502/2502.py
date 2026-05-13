import sys
from string import ascii_lowercase, ascii_uppercase

input = sys.stdin.readline
output = sys.stdout.write

upper_lower = {}
for uppercase_letter, lowercase_letter in zip(
    ascii_uppercase, ascii_lowercase
):
    upper_lower[uppercase_letter] = lowercase_letter

while test_case := input().strip():
    _, n = map(int, test_case.split())
    zenit = input().replace('\n', '')
    polar = input().replace('\n', '')

    zenit_polar = {}
    for zenit_letter, polar_letter in zip(zenit, polar):
        zenit_polar[zenit_letter] = polar_letter
        zenit_polar[polar_letter] = zenit_letter

        if zenit_letter in upper_lower and polar_letter in upper_lower:
            zenit_polar[upper_lower[zenit_letter]] = upper_lower[polar_letter]
            zenit_polar[upper_lower[polar_letter]] = upper_lower[zenit_letter]
        elif zenit_letter in upper_lower:
            zenit_polar[upper_lower[zenit_letter]] = polar_letter
            zenit_polar[polar_letter] = upper_lower[zenit_letter]
        elif polar_letter in upper_lower:
            zenit_polar[upper_lower[polar_letter]] = zenit_letter
            zenit_polar[zenit_letter] = upper_lower[polar_letter]

    for _ in range(n):
        line = input()
        decoded_line = line.translate(str.maketrans(zenit_polar))
        output(f'{decoded_line}')

    output('\n')
