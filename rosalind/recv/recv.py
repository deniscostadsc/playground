import sys
from string import maketrans, translate

text = ''.join(sys.stdin.readlines()).replace('\n', '')

translate_table = maketrans('ACGT', 'TGCA')

print(translate(text, translate_table)[::-1])
