import sys

output = sys.stdout.write

for i in range(1, 10, 2):
    output(f'I={i} J=7\n')
    output(f'I={i} J=6\n')
    output(f'I={i} J=5\n')
