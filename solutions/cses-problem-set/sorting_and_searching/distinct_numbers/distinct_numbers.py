import sys

input = sys.stdin.readline
output = sys.stdout.write

_ = input()

output(f'{len(set(input().split()))}\n')
