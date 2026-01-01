import sys

input = sys.stdin.readline
output = sys.stdout.write

menu = {
    1001: 1.5,
    1002: 2.5,
    1003: 3.5,
    1004: 4.5,
    1005: 5.5,
}

p = int(input())
sum = 0
for _ in range(p):
    id, q = map(int, input().split())
    sum += menu[id] * q

output(f'{sum:.2f}\n')
