import sys

input = sys.stdin.readline
output = sys.stdout.write

bills = [2, 5, 10, 20, 50, 100]
possible_changes = [0] * 201

for bill_1 in bills:
    for bill_2 in bills:
        possible_changes[bill_1 + bill_2] = bill_1 + bill_2

while line := input().strip():
    n, m = map(int, line.split())

    if n == 0 and m == 0:
        break

    if m - n in possible_changes and possible_changes[m - n]:
        output('possible\n')
    else:
        output('impossible\n')
