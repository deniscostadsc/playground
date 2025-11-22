import sys

input = sys.stdin.readline
output = sys.stdout.write

quote = 'LIFE IS NOT A PROBLEM TO BE SOLVED'

while line := input().strip():
    n = int(line)

    output(f'{quote[:n]}\n')
