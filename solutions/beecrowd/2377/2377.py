import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    length, distance = map(int, line.split())
    k, p = map(int, input().split())

    result = length * k
    if length >= distance:
        result += length // distance * p

    output(f'{result}\n')
