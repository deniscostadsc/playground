import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    a, b = input().split()

    e = True

    if len(a) < len(b):
        e = False
    else:
        len_a = len(a) - 1

        for b_letter in b[::-1]:
            if b_letter != a[len_a]:
                e = False
                break
            len_a -= 1

    if e:
        output('encaixa\n')
    else:
        output('nao encaixa\n')
