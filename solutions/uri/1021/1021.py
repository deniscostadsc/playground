import sys
from math import ceil

bills = [10000, 5000, 2000, 1000, 500, 200]
coins = [100, 50, 25, 10, 5, 1]

for total_value in sys.stdin:
    total_value = ceil(float(total_value) * 100)
    print("NOTAS:")

    for bill in bills:
        quantity = total_value // bill
        total_value -= quantity * bill
        print(f"{int(quantity)} nota(s) de R$ {bill // 100}.00")

    print("MOEDAS:")

    for coin in coins:
        quantity = total_value // coin
        total_value -= quantity * coin
        print(f"{int(quantity)} moeda(s) de R$ {coin / 100:.2f}")
