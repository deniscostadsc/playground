import sys


for line in sys.stdin:
    n = int(line)
    m, l = map(int, input().split())

    marcos_cards = []
    for _ in range(m):
        marcos_cards.append(list(map(int, input().split())))

    leonardo_cards = []
    for _ in range(l):
        leonardo_cards.append(list(map(int, input().split())))

    marcos_card, leonardo_card = map(int, input().split())

    attribute = int(input())

    if marcos_cards[marcos_card - 1][attribute - 1] > leonardo_cards[leonardo_card  - 1][attribute - 1]:
        print('Marcos')
    elif leonardo_cards[leonardo_card - 1][attribute - 1] > marcos_cards[marcos_card - 1][attribute - 1]:
        print('Leonardo')
    else:
        print('Empate')
