import sys

input = sys.stdin.readline
output = sys.stdout.write


def calculate_value(attack, defense, bonus, level):
    result = (attack + defense) / 2
    return result + (bonus if level % 2 == 0 else 0)


t = int(input())
for _ in range(t):
    bonus = int(input())
    attack, defense, level = map(int, input().split())
    dabriels_value = calculate_value(attack, defense, bonus, level)
    attack, defense, level = map(int, input().split())
    guartes_value = calculate_value(attack, defense, bonus, level)

    if guartes_value > dabriels_value:
        output('Guarte\n')
    elif dabriels_value > guartes_value:
        output('Dabriel\n')
    else:
        output('Empate\n')
