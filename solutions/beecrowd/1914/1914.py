import sys

input = sys.stdin.readline
output = sys.stdout.write

qt = int(input())

for _ in range(qt):
    first_player, first_choice, second_player, second_choice = (
        input().strip().split()
    )
    first_number, second_number = map(int, input().split())

    is_even = (first_number + second_number) % 2 == 0
    first_won = (is_even and first_choice == 'PAR') or (
        not is_even and first_choice == 'IMPAR'
    )

    output(f'{first_player if first_won else second_player}\n')
