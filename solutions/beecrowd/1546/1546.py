import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    d = int(input())

    for _ in range(d):
        f = int(input())

        if f == 1:
            output('Rolien\n')
        elif f == 2:
            output('Naej\n')
        elif f == 3:
            output('Elehcim\n')
        else:
            output('Odranoel\n')
