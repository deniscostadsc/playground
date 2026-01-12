import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    p, n = map(int, line.split())
    game_over = False

    pipes = list(map(int, input().split()))
    previous_pipe = pipes[0]

    for pipe in pipes[1:]:
        if abs(previous_pipe - pipe) > p:
            game_over = True
            output('GAME OVER\n')
            break
        previous_pipe = pipe

    if not game_over:
        output('YOU WIN\n')
