import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    team_1_1, _, team_2_1 = input().split()
    team_2_2, _, team_1_2 = input().split()

    team_1_1, team_2_1 = map(int, [team_1_1, team_2_1])
    team_2_2, team_1_2 = map(int, [team_2_2, team_1_2])

    if team_1_1 + team_1_2 > team_2_1 + team_2_2:
        output('Time 1\n')
    elif team_1_1 + team_1_2 < team_2_1 + team_2_2:
        output('Time 2\n')
    elif team_1_2 > team_2_1:
        output('Time 1\n')
    elif team_1_2 < team_2_1:
        output('Time 2\n')
    else:
        output('Penaltis\n')
