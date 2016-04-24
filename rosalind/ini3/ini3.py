import sys

stdin = sys.stdin.readlines()

_string = stdin[0].replace('\n', '')
numbers = map(lambda x: int(x), stdin[1].split())
print('%s %s' % (
    _string[numbers[0]:numbers[1] + 1], _string[numbers[2]:numbers[3] + 1]))
