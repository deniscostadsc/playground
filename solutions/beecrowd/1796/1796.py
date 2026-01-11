import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    q = int(line)
    opinions = map(int, input().split())
    not_ok_count = 0
    survey_count = 0

    for opinion in opinions:
        if opinion:
            not_ok_count += 1
        survey_count += 1

    if (not_ok_count < survey_count // 2 and survey_count % 2 == 0) or (
        not_ok_count < survey_count // 2 + 1 and survey_count % 2 == 1
    ):
        output('Y\n')
    else:
        output('N\n')
