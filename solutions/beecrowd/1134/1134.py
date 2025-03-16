counts = [0, 0, 0]
n = int(input())
while n != 4:
    if n in (1, 2, 3):
        counts[n - 1] += 1
    n = int(input())

print('MUITO OBRIGADO')
print(f'Alcool: {counts[0]}')
print(f'Gasolina: {counts[1]}')
print(f'Diesel: {counts[2]}')
