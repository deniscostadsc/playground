import sys

output = sys.stdout.write
i = 1
j = 60

while j != 0:
    output(f'I={i} J={j}\n')
    i += 3
    j -= 5

output(f'I={i} J={j}\n')
