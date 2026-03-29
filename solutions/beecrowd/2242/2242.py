import sys

input = sys.stdin.readline
output = sys.stdout.write


def is_vowel(letter):
    return letter in 'aeiou'


while line := input().strip():
    laugh_vowels = ''.join(filter(is_vowel, line))

    is_funniest = True
    if laugh_vowels != laugh_vowels[::-1]:
        is_funniest = False

    output(f'{"S" if is_funniest else "N"}\n')
