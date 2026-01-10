import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)
    speed_set = list(map(int, input().split()))

    decreased = False
    previous_speed_measure = speed_set[0]
    position = 0

    for index, speed_measure in enumerate(speed_set[1:], 2):
        if speed_measure < previous_speed_measure:
            position = index
            break
        previous_speed_measure = speed_measure

    output(f'{position}\n')
