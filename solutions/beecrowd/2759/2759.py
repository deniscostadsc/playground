import sys

input = sys.stdin.readline
output = sys.stdout.write

while a := input().strip():
    b = input().strip()
    c = input().strip()

    output(f'A = {a}, B = {b}, C = {c}\n')
    output(f'A = {b}, B = {c}, C = {a}\n')
    output(f'A = {c}, B = {a}, C = {b}\n')
