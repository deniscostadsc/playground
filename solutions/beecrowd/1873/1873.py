import sys

input = sys.stdin.readline
output = sys.stdout.write


def rock_paper_scissors_lizard_spock_judge(rajeshs_hand, sheldons_hand):
    if rajeshs_hand == sheldons_hand:
        return 'empate'
    if rajeshs_hand == 'tesoura' and sheldons_hand in ('papel', 'lagarto'):
        return 'rajesh'
    if rajeshs_hand == 'papel' and sheldons_hand in ('pedra', 'spock'):
        return 'rajesh'
    if rajeshs_hand == 'pedra' and sheldons_hand in ('lagarto', 'tesoura'):
        return 'rajesh'
    if rajeshs_hand == 'lagarto' and sheldons_hand in ('spock', 'papel'):
        return 'rajesh'
    if rajeshs_hand == 'spock' and sheldons_hand in ('tesoura', 'pedra'):
        return 'rajesh'
    return 'sheldon'


c = int(input())

for _ in range(c):
    rajeshs_hand, sheldons_hand = input().split()
    output(
        f'{rock_paper_scissors_lizard_spock_judge(rajeshs_hand, sheldons_hand)}\n'
    )
