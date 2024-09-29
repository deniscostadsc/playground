import sys

for line in sys.stdin:
    a_price, g_price, a_distance, g_distance = map(float, line.split())
    if a_distance / a_price > g_distance / g_price:
        print('A')
    else:
        print('G')
