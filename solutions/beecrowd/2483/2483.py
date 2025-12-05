import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    a_quantity = int(line)

    output('Feliz nat')
    for _ in range(a_quantity):
        output('a')
    output('l!\n')
