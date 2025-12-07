import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)
    la, lb = map(int, input().split())
    sa, sb = map(int, input().split())

    if n >= la and n <= lb and n >= sa and n <= sb:
        output('possivel\n')
    else:
        output('impossivel\n')
