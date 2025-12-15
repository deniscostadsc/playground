import sys

input = sys.stdin.readline
output = sys.stdout.write

output(f'{input().strip()[::-1]}\n')
