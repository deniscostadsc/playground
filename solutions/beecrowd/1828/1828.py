import sys

input = sys.stdin.readline
output = sys.stdout.write


def rock_paper_scissors_lizard_spock_judge(sheldons_hand, rajeshs_hand):
    if sheldons_hand == rajeshs_hand:
        return 0

    if sheldons_hand == 'tesoura' and rajeshs_hand in ('papel', 'lagarto'):
        return 1
    if sheldons_hand == 'papel' and rajeshs_hand in ('pedra', 'Spock'):
        return 1
    if sheldons_hand == 'pedra' and rajeshs_hand in ('lagarto', 'tesoura'):
        return 1
    if sheldons_hand == 'lagarto' and rajeshs_hand in ('Spock', 'papel'):
        return 1
    if sheldons_hand == 'Spock' and rajeshs_hand in ('tesoura', 'pedra'):
        return 1

    return -1


t = int(input())
for case_index in range(1, t + 1):
    sheldons_hand, rajs_hand = input().split()

    result = rock_paper_scissors_lizard_spock_judge(sheldons_hand, rajs_hand)

    output(f'Caso #{case_index}: ')
    if result == 1:
        output('Bazinga!\n')
    elif result == 0:
        output('De novo!\n')
    else:
        output('Raj trapaceou!\n')
