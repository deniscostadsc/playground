import sys

for line in sys.stdin:
    attribute_count = int(line)
    marcos_deck_len, leonardo_deck_len = map(int, input().split())

    marcos_cards = []
    for _ in range(marcos_deck_len):
        marcos_cards.append(list(map(int, input().split())))

    leonardo_cards = []
    for _ in range(leonardo_deck_len):
        leonardo_cards.append(list(map(int, input().split())))

    marcos_card, leonardo_card = map(int, input().split())

    attribute = int(input())

    if (
        marcos_cards[marcos_card - 1][attribute - 1]
        > leonardo_cards[leonardo_card - 1][attribute - 1]
    ):
        print('Marcos')
    elif (
        leonardo_cards[leonardo_card - 1][attribute - 1]
        > marcos_cards[marcos_card - 1][attribute - 1]
    ):
        print('Leonardo')
    else:
        print('Empate')
