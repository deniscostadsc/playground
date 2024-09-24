import sys

for line in sys.stdin:
    j, r = map(int, line.split())
    players_scores = dict(zip(range(1, j + 1), [0] * j))
    winner_player = 1
    winner_player_points = 0

    for points_index, points in enumerate(map(int, input().split())):
        player_index = points_index % j + 1
        players_scores[player_index] += points

        if players_scores[player_index] >= winner_player_points:
            winner_player_points = players_scores[player_index]
            winner_player = player_index

    print(winner_player)
