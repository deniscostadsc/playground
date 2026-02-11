import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    a, d = map(int, line.split())

    if not a and not d:
        break

    nearest_attack_player = min(map(int, input().split()))
    defense_distances = map(int, input().split())

    count = 0
    for defense_distance in defense_distances:
        if defense_distance <= nearest_attack_player:
            count += 1

    if count >= 2:
        output('N\n')
    else:
        output('Y\n')
