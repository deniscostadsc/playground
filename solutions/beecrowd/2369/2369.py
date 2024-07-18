import sys

MAX_RANGE_1 = 9
MAX_RANGE_2 = 29
MAX_RANGE_3 = 100


for line in sys.stdin:
    n = int(line)
    total_bill = 0

    if n <= MAX_RANGE_1:
        # print('if')
        total_bill = 7
    elif n <= MAX_RANGE_2:
        total_bill = 7 + (n - MAX_RANGE_1) * 1
        # print(f'total_bill {total_bill}')
        # print(f'n {n}')
        # print(f'n - MAX_RANGE_1 {n - MAX_RANGE_1}')
    elif n <= MAX_RANGE_3:
        total_bill = (
            7 + ((n - MAX_RANGE_1) * 1) + ((n - MAX_RANGE_1 - MAX_RANGE_2) * 2)
        )
    else:
        total_bill = (
            7
            + ((n - MAX_RANGE_1) * 1)
            + ((n - MAX_RANGE_1 - MAX_RANGE_2) * 2)
            + ((n - MAX_RANGE_1 - MAX_RANGE_2 - MAX_RANGE_3) * 5)
        )

    print(total_bill)
