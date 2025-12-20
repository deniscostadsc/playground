import sys
import string

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())
a = string.ascii_uppercase * 2

for _ in range(n):
    s = input().strip()
    c = int(input())

    new_s = ''
    for letter in s:
        new_s += a[a.rfind(letter) - c]

    output(f'{new_s}\n')
