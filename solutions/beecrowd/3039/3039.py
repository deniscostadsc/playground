n = int(input())

male_count = 0
female_count = 0

for _ in range(n):
    name, gender = input().split()
    if gender == 'M':
        male_count += 1
    else:
        female_count += 1

print(f'{male_count} carrinhos')
print(f'{female_count} bonecas')
