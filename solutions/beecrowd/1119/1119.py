import sys


class Node:
    __slots__ = 'value', 'previous', 'next'

    def __init__(self, value, previous=None, next=None):
        self.value = value
        self.previous = previous
        self.next = next


def insert_node(value, first_node=None):
    if first_node is None:
        new_node = Node(value)
        new_node.next = new_node
        new_node.previous = new_node
        return new_node

    new_node = Node(value)
    new_node.next = first_node
    new_node.previous = first_node.previous
    new_node.previous.next = new_node
    first_node.previous = new_node

    return first_node


def insert_range(limit):
    first_node = None
    for i in range(1, limit + 1):
        first_node = insert_node(i, first_node)
    return first_node


def delete_node(value, first_node):
    current_node = first_node
    previous = None
    while current_node.value != value:
        if current_node.next == first_node:
            return first_node

        previous = current_node
        current_node = current_node.next

    if current_node.next == first_node and previous is None:
        first_node = None
        return first_node

    if current_node == first_node:
        previous = first_node.previous
        first_node = first_node.next
        previous.next = first_node
        first_node.previous = previous
    elif current_node.next == first_node:
        previous.next = first_node
        first_node.next = previous
    else:
        previous.next, current_node.next.previous = current_node.next, previous


# first_node = insert_node(1)
# insert_node(2, first_node)
# insert_node(3, first_node)
# insert_node(4, first_node)
# insert_node(5, first_node)

# current_node = first_node
# while True:
#     print('current_node.value', current_node.value)
#     print('current_node.previous.value', current_node.previous.value)
#     print('current_node.next.value', current_node.next.value)

#     if current_node.next.value == 1:
#         break

#     current_node = current_node.next

#     print('-----')

# print('***************')

# delete_node(4, first_node)

# current_node = first_node
# while True:
#     print('current_node.value', current_node.value)
#     print('current_node.previous.value', current_node.previous.value)
#     print('current_node.next.value', current_node.next.value)

#     if current_node.next.value == 1:
#         break

#     current_node = current_node.next

#     print('-----')

for line in sys.stdin:
    n, k, m = map(int, line.split())
    first_print = True

    if not n:
        break

    applicants = list(range(1, n + 1))

    # print('---')

    while applicants:
        if not first_print:
            print(',', end='')

        applicants_count = len(applicants)

        chosen_in_clockwise_round = applicants[(m % applicants_count + 1) * -1]
        chosen_in_counter_clockwise_round = applicants[k % applicants_count]

        # print('chosen_in_clockwise_round', chosen_in_clockwise_round)
        # print('chosen_in_counter_clockwise_round', chosen_in_counter_clockwise_round)

        print(f'{chosen_in_clockwise_round}'.rjust(3), end='')
        applicants.remove(chosen_in_clockwise_round)
        if chosen_in_clockwise_round != chosen_in_counter_clockwise_round:
            print(f'{chosen_in_counter_clockwise_round}'.rjust(3), end='')
            applicants.remove(chosen_in_counter_clockwise_round)

        first_print = False

    print()
