import sys

input = sys.stdin.readline
output = sys.stdout.write

x = int(input())
s = 0
n = 0

while z := int(input()):
    if z > x:
        break

while s <= z:
    s += x
    x += 1
    n += 1

output(f'{n}\n')
