import sys

for a in sys.stdin:
    a = int(a)
    b = int(input())
    c = int(input())

    print(f'A = {a}, B = {b}, C = {c}')
    print(f'A = {a:>10}, B = {b:>10}, C = {c:>10}')
    print(f'A = {a:010}, B = {b:010}, C = {c:010}')
    print(f'A = {a:<10}, B = {b:<10}, C = {c:<10}')
