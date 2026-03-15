import sys

output = sys.stdout.write


def bloggo(line):
    i = b = False
    for char in line:
        if char == '_':
            output(f'{"</i>" if i else "<i>"}')
            i = not i
        elif char == '*':
            output(f'{"</b>" if b else "<b>"}')
            b = not b
        else:
            output(f'{char}')


for line in sys.stdin:
    bloggo(line)
