class Node:
    def __init__(self, number=None, left=None, right=None):
        self.number = number
        self.left = left
        self.right = right

    def insert(self, new_node):
        if isinstance(new_node, int):
            new_node = Node(number=new_node)

        if self.number is None:
            self.number = new_node.number
            return

        if new_node.number > self.number:
            if self.right:
                self.right.insert(new_node)
            else:
                self.right = new_node
        else:
            if self.left:
                self.left.insert(new_node)
            else:
                self.left = new_node

    def bfs_print(self):
        to_visit = []
        to_visit.append(self)
        print_space = False

        while to_visit:
            current = to_visit.pop(0)

            if print_space:
                print(' ', end='')
            print_space = True
            print(current.number, end='')

            if current.left:
                to_visit.append(current.left)
            if current.right:
                to_visit.append(current.right)

        print()


def main():
    c = int(input())
    for test_case_index in range(1, c + 1):
        root = Node()
        _ = input()
        numbers = map(int, input().split())
        for number in numbers:
            root.insert(number)

        print(f'Case {test_case_index}:')
        root.bfs_print()
        print()


main()
