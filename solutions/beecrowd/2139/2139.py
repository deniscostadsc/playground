import sys

input = sys.stdin.readline
output = sys.stdout.write


def calculate_days_to_christmas(month, day):
    days_until_christmas = {
        1: 360,
        2: 329,
        3: 300,
        4: 269,
        5: 239,
        6: 208,
        7: 178,
        8: 147,
        9: 116,
        10: 86,
        11: 55,
        12: 25,
    }

    return days_until_christmas[month] - day


while line := input().strip():
    month, day = map(int, line.split())

    if month == 12:
        if day == 25:
            output('E natal!\n')
            continue
        if day == 24:
            output('E vespera de natal!\n')
            continue
        if day > 25:
            output('Ja passou!\n')
            continue

    output(
        f'Faltam {calculate_days_to_christmas(month, day)} dias para o natal!\n'
    )
