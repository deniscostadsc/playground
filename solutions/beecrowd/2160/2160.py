import sys

input = sys.stdin.readline
output = sys.stdout.write

while name := input():
    output(f'{"YES" if len(name) <= 81 else "NO"}\n')
