import sys

input = sys.stdin.readline
output = sys.stdout.write


def postorder_print_from_preorder_inorder(pre_order, in_order):
    in_order_index = in_order.find(pre_order[0])

    if len(in_order[0:in_order_index]) > 0:
        postorder_print_from_preorder_inorder(
            pre_order[1 : in_order_index + 1], in_order[0:in_order_index]
        )
    if len(in_order[in_order_index + 1 :]) > 0:
        postorder_print_from_preorder_inorder(
            pre_order[in_order_index + 1 :], in_order[in_order_index + 1 :]
        )

    output(f'{pre_order[0]}')


while line := input().strip():
    pre_order, in_order = line.split()
    postorder_print_from_preorder_inorder(pre_order, in_order)
    output('\n')
