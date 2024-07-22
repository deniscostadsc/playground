import sys

for line in sys.stdin:
    n = int(line)

    black_squares = int(n ** 2 / 2)
    white_squares = black_squares
    if not n % 2 == 0:
        white_squares += 1

    print(f"{white_squares} casas brancas e {black_squares} casas pretas")
