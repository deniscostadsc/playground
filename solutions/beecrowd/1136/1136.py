import sys
from itertools import combinations

for line in sys.stdin:
    n, b = map(int, line.split())

    if not n and not b:
        break

    possible_balls = set()
    possible_balls_count = 0
    possible_combinations = combinations(map(int, input().split()), 2)

    for first_ball, second_ball in possible_combinations:
        actual_ball = abs(first_ball - second_ball)
        if actual_ball <= n and actual_ball not in possible_balls:
            possible_balls.add(actual_ball)
            possible_balls_count += 1

        if possible_balls_count == n:
            print('Y')
            break
    else:
        print('N')
