import sys

zelda_letters = [
    ['z', 'Z'],
    ['e', 'E'],
    ['l', 'L'],
    ['d', 'D'],
    ['a', 'A'],
]

for line in sys.stdin:
    index = 0
    for char in line:
        if char in zelda_letters[index]:
            index += 1
        else:
            index = 0
            if char in zelda_letters[index]:
                index += 1

        if index == 5:
            print('Link Bolado')
            break
    else:
        print('Link Tranquilo')
