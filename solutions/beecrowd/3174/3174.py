import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)

    dolls_group = 0
    architect_group = 0
    musicians_group = 0
    drawners_group = 0
    for _ in range(n):
        name, group, houd_per_day = input().split()
        houd_per_day = int(houd_per_day)

        if group == 'bonecos':
            dolls_group += houd_per_day
        elif group == 'arquitetos':
            architect_group += houd_per_day
        elif group == 'musicos':
            musicians_group += houd_per_day
        else:
            drawners_group += houd_per_day

    result = (
        dolls_group // 8
        + architect_group // 4
        + musicians_group // 6
        + drawners_group // 12
    )

    output(f'{result}\n')
