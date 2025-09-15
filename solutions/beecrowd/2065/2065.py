import heapq
import sys

for line in sys.stdin:
    n, m = map(int, line.split())
    next_cashier = []
    highest_time_cashier = 0
    cashiers_time_to_process = {}

    cashiers = map(int, input().split())
    for index, cashier in enumerate(cashiers):
        cashiers_time_to_process[index] = cashier
        heapq.heappush(next_cashier, (0, index))

    clients_products_count = map(int, input().split())
    for products_count in clients_products_count:
        waiting_time, cashier_index = heapq.heappop(next_cashier)
        heapq.heappush(
            next_cashier,
            (
                cashiers_time_to_process[cashier_index] * products_count
                + waiting_time,
                cashier_index,
            ),
        )
        highest_time_cashier = max(
            highest_time_cashier,
            cashiers_time_to_process[cashier_index] * products_count
            + waiting_time,
        )

    print(highest_time_cashier)
