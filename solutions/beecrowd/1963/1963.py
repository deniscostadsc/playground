import sys

for line in sys.stdin:
    price1, price2 = map(float, line.split())
    print(f'{100 * (price2 - price1) / price1:.2f}%')
