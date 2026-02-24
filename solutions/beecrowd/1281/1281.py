import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    result = 0.0
    prices = {}

    p = int(input())

    for _ in range(p):
        fruit, price = input().split()
        price = float(price)
        prices[fruit] = price

    q = int(input())

    for _ in range(q):
        fruit, quantity = input().split()
        quantity = int(quantity)
        result += prices[fruit] * quantity

    output(f'R$ {result:.2f}\n')
