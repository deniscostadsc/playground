import sys

input = sys.stdin.readline
output = sys.stdout.write

case = 0
while shoe_number_target := input().strip():
    if case:
        output('\n')
    case += 1

    shoes_female = 0
    shoes_male = 0

    shoes = iter(input().split())

    while shoe_number := next(shoes, False):
        shoe_gender = next(shoes)

        if shoe_number == shoe_number_target:
            if shoe_gender == 'M':
                shoes_male += 1
            else:
                shoes_female += 1

    output(f'Caso {case}:\n')
    output(f'Pares Iguais: {shoes_male + shoes_female}\n')
    output(f'F: {shoes_female}\n')
    output(f'M: {shoes_male}\n')
