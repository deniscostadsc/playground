import sys

input = sys.stdin.readline
output = sys.stdout.write

PI = 3.14

while line := input().strip():
    v = float(line)
    d = float(input())

    output(f'ALTURA = {v / (PI * (d / 2) ** 2):.2f}\n')
    output(f'AREA = {PI * (d / 2) ** 2:.2f}\n')
