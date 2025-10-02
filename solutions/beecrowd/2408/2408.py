import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input():
    output(f'{sorted(map(int, line.split()))[1]}\n')
