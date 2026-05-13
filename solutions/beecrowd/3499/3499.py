import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)

    if n <= 3:
        output('vai ganhar o biscoito\n')
    else:
        output('vai ficar sem o biscoito\n')
