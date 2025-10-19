import sys

input = sys.stdin.readline
output = sys.stdout.write

c = int(input())
for _ in range(c):
    line = input().strip()
    first_a = line.find('meka') - 1
    second_a = len(line) - first_a - 6
    output(f'k{"a" * first_a * second_a}\n')
