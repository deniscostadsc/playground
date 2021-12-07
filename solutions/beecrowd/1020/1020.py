import sys

for t in sys.stdin:
    t = int(t)
    a = 0
    m = 0

    if t >= 365:
        a = t // 365
        t %= 365

    if t >= 30:
        m = t // 30
        t %= 30

    print(f'{a} ano(s)')
    print(f'{m} mes(es)')
    print(f'{t} dia(s)')
