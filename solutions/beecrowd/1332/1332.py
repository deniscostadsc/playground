import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    s = input().strip()

    if len(s) == 5:
        output('3\n')
    elif (
        (s[0] == 't' and s[1] == 'w')
        or (s[0] == 't' and s[2] == 'o')
        or (s[1] == 'w' and s[2] == 'o')
    ):
        output('2\n')
    else:
        output('1\n')
