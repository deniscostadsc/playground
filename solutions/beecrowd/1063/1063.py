import sys


def main():
    for number in sys.stdin:
        if int(number) == 0:
            break

        current_order = input().split()
        current_order_index = 0
        desired_order = input().split()
        desired_order_index = 0
        aux_stack = []

        while current_order_index < len(current_order) or aux_stack:
            if (
                desired_order_index < len(desired_order)
                and aux_stack
                and desired_order[desired_order_index] == aux_stack[-1]
            ):
                aux_stack.pop()
                desired_order_index += 1
                print('R', end='')
            elif current_order_index >= len(current_order):
                break
            else:
                aux_stack.append(current_order[current_order_index])
                current_order_index += 1
                print('I', end='')

        if desired_order_index < len(desired_order):
            print(' Impossible')
        else:
            print()


main()
