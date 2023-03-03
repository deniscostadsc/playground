import sys

for line in sys.stdin:
    salary = float(line)

    if salary <= 400.00:
        print(
            f'Novo salario: {salary * 1.15:.2f}\n'
            f'Reajuste ganho: {salary * 1.15 - salary:.2f}\n'
            'Em percentual: 15 %'
        )
    elif salary <= 800.00:
        print(
            f'Novo salario: {salary * 1.12:.2f}\n'
            f'Reajuste ganho: {salary * 1.12 - salary:.2f}\n'
            'Em percentual: 12 %'
        )
    elif salary <= 1200.00:
        print(
            f'Novo salario: {salary * 1.1:.2f}\n'
            f'Reajuste ganho: {salary * 1.1 - salary:.2f}\n'
            'Em percentual: 10 %'
        )
    elif salary <= 2000.00:
        print(
            f'Novo salario: {salary * 1.07:.2f}\n'
            f'Reajuste ganho: {salary * 1.07 - salary:.2f}\n'
            'Em percentual: 7 %'
        )
    else:
        print(
            f'Novo salario: {salary * 1.04:.2f}\n'
            f'Reajuste ganho: {salary * 1.04 - salary:.2f}\n'
            'Em percentual: 4 %'
        )
