import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    _, shirt_number = map(int, input().split())
    guesses = list(map(int, input().split()))

    best_guess = abs(guesses[0] - shirt_number)
    best_guesser = 1

    for index, guess in enumerate(guesses[1:], 2):
        guess_distance = abs(guess - shirt_number)

        if guess_distance < best_guess:
            best_guess = guess_distance
            best_guesser = index

    output(f'{best_guesser}\n')
