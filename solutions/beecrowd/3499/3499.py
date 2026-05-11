import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)

    if n <= 3:
        print('vai ganhar o biscoito')
    else:
        print('vai ficar sem o biscoito')
