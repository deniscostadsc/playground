import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    chicken_meals, beef_meals, pasta_meals = map(int, line.split())
    chicken_orders, beef_orders, pasta_orders = map(int, input().split())

    result = 0
    if chicken_orders - chicken_meals >= 0:
        result = chicken_orders - chicken_meals
    if beef_orders - beef_meals >= 0:
        result += beef_orders - beef_meals
    if pasta_orders - pasta_meals >= 0:
        result += pasta_orders - pasta_meals

    output(f'{result}\n')
