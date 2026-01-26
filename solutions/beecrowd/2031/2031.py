import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    player_1_move = input().strip()
    player_2_move = input().strip()

    if player_1_move == 'ataque' and player_2_move == 'ataque':
        output('Aniquilacao mutua\n')
    elif player_1_move == 'papel' and player_2_move == 'papel':
        output('Ambos venceram\n')
    elif player_1_move == 'pedra' and player_2_move == 'pedra':
        output('Sem ganhador\n')
    elif (
        player_1_move == 'ataque'
        or player_1_move == 'pedra'
        and player_2_move == 'papel'
    ):
        output('Jogador 1 venceu\n')
    else:
        output('Jogador 2 venceu\n')
