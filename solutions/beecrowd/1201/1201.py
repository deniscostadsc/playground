import sys

add_space_before_number = True

def _remove_node(tree, number):
    if not tree:
        return tree
    if number < tree.number:
        tree.left = _remove_node(tree.left, number)
    elif number > tree.number:
        tree.right = _remove_node(tree.right, number)
    else:
        if not tree.left:
            return tree.right
        elif not tree.right:
            return tree.left
        else:
            successor_parent = tree
            successor = tree.right
            while successor.left:
                successor_parent = successor
                successor = successor.left
            tree.number = successor.number
            if successor_parent.left == successor:
                successor_parent.left = successor.right
            else:
                successor_parent.right = successor.right
    return tree
class Node:
    def __init__(self, number=None, left=None, right=None):
        self.number = number
        self.left = left
        self.right = right

    def insert(self, new_node):
        if not self.number:
            self.number = new_node.number
            return

        if self.number > new_node.number:
            if self.right:
                self.right.insert(new_node)
            else:
                self.right = new_node
        else:
            if self.left:
                self.left.insert(new_node)
            else:
                self.left = new_node

    def has(self, number):
        if self.number == number:
            return True

        result = False

        if self.right and self.number > number:
            result |= self.right.has(number)
        if self.left and self.number < number:
            result |= self.left.has(number)

        return result

    def __print(self):
        global add_space_before_number
        if add_space_before_number:
            print(' ', end='')
        print(self.number, end='')
        add_space_before_number = True

    def __traverse_print(self, traverse_type):
        if traverse_type == 'PREFIX':
            self.__print()
        if self.right:
            self.right.__traverse_print(traverse_type)
        if traverse_type == 'INFIX':
            self.__print()
        if self.left:
            self.left.__traverse_print(traverse_type)
        if traverse_type == 'POSTFIX':
            self.__print()

    def prefix_print(self):
        global add_space_before_number
        add_space_before_number = False
        self.__traverse_print(traverse_type='PREFIX')
        print()

    def infix_print(self):
        global add_space_before_number
        add_space_before_number = False
        self.__traverse_print(traverse_type='INFIX')
        print()

    def postfix_print(self):
        global add_space_before_number
        add_space_before_number = False
        self.__traverse_print(traverse_type='POSTFIX')
        print()

    def remove(self, number):
        _remove_node(self, number)


def main():
    global add_space_before_number
    tree = Node(None, None, None)
    for line in sys.stdin:
        command, *args = (x.strip() for x in line.split(' '))
        int_args = map(int, args)
        match [command, *int_args]:
            case ['I', number]:
                tree.insert(Node(number, None, None))
            case ['P', number]:
                if tree.has(number):
                    print(f'{number} existe')
                else:
                    print(f'{number} nao existe')
            case ['R', number]:
                tree.remove(number)
            case ['PREFIXA']:
                tree.prefix_print()
            case ['INFIXA']:
                tree.infix_print()
            case ['POSFIXA']:
                tree.postfix_print()


if __name__ == '__main__':
    main()
