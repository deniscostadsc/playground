import sys

input = sys.stdin.readline
output = sys.stdout.write

i = 1
j = 7

while i <= 9:
    output(f'I={i} J={j}\n')
    j -= 1
    output(f'I={i} J={j}\n')
    j -= 1
    output(f'I={i} J={j}\n')
    j -= 1

    i += 2
    j += 5
