import sys

for line in sys.stdin:
    cpf_digits = list(
        map(int, filter(lambda x: x not in ['.', '-'], line.strip()))
    )

    b1, b2 = 0, 0
    for index, cpf_digit in enumerate(cpf_digits[:9]):
        b1 += cpf_digit * (index + 1)
        b2 += cpf_digit * (9 - index)
    b1 = 0 if b1 % 11 == 10 else b1 % 11
    b2 = 0 if b2 % 11 == 10 else b2 % 11

    if b1 == cpf_digits[9] and b2 == cpf_digits[10]:
        print('CPF valido')
    else:
        print('CPF invalido')
