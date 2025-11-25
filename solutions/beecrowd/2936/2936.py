import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    curupira = int(line)
    boitata = int(input())
    boto = int(input())
    mapinguari = int(input())
    iara = int(input())

    result = (
        curupira * 300
        + boitata * 1500
        + boto * 600
        + mapinguari * 1000
        + iara * 150
        + 225
    )
    output(f'{result}\n')
