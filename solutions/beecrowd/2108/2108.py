biggest_word = ''

while (line := input().strip()) != '0':
    first_word = True
    for word in line.split():
        if not first_word:
            print('-', end='')
        if len(word) >= len(biggest_word):
            biggest_word = word
        print(len(word), end='')
        first_word = False
    print('')

print(f'\nThe biggest word: {biggest_word}')
