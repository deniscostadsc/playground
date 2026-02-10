import sys

input = sys.stdin.readline
output = sys.stdout.write


def post_order_from_pre_in(pre_order, in_order):
    in_root_index = in_order.index(pre_order[0])

    if len(in_order[:in_root_index]) > 0:
        post_order_from_pre_in(pre_order[1:], in_order[:in_root_index])

    if len(in_order[in_root_index + 1 :]) > 0:
        post_order_from_pre_in(
            pre_order[in_root_index + 1 :], in_order[in_root_index + 1 :]
        )

    output(f'{pre_order[0]}')


c = int(input())
for _ in range(c):
    _, pre_order, in_order = input().split()
    post_order_from_pre_in(pre_order, in_order)
    output('\n')
