bills = [100, 50, 20, 10, 5, 2, 1]

n = int(input())

print(n)

for bill in bills:
    print(f'{n // bill} nota(s) de R$ {bill},00')

    if n >= bill:
        n -= bill * (n // bill)
