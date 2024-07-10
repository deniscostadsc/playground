import sys

add_space_before_letter = True


class Node:
    def __init__(self, letter=None, left=None, right=None):
        self.letter = letter
        self.left = left
        self.right = right

    def insert(self, new_node):
        if not self.letter:
            self.letter = new_node.letter
            return

        if self.letter > new_node.letter:
            if self.right:
                self.right.insert(new_node)
            else:
                self.right = new_node
        else:
            if self.left:
                self.left.insert(new_node)
            else:
                self.left = new_node

    def has(self, letter):
        if self.letter == letter:
            return True

        result = False

        if self.right and self.letter > letter:
            result |= self.right.has(letter)
        if self.left and self.letter < letter:
            result |= self.left.has(letter)

        return result

    def __print(self):
        global add_space_before_letter
        if add_space_before_letter:
            print(" ", end="")
        print(self.letter, end='')
        add_space_before_letter = True

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
        global add_space_before_letter
        add_space_before_letter = False
        self.__traverse_print(traverse_type='PREFIX')
        print()

    def infix_print(self):
        global add_space_before_letter
        add_space_before_letter = False
        self.__traverse_print(traverse_type='INFIX')
        print()

    def postfix_print(self):
        global add_space_before_letter
        add_space_before_letter = False
        self.__traverse_print(traverse_type='POSTFIX')
        print()


def main():
    global add_space_before_letter
    tree = Node(None, None, None)
    for line in sys.stdin:
        command, *args = (x.strip() for x in line.split(' '))
        match [command, *args]:
            case ['I', letter]:
                tree.insert(Node(letter, None, None))
            case ['P', letter]:
                if tree.has(letter):
                    print(f'{letter} existe')
                else:
                    print(f'{letter} nao existe')
            case ['PREFIXA']:
                tree.prefix_print()
            case ['INFIXA']:
                tree.infix_print()
            case ['POSFIXA']:
                tree.postfix_print()


if __name__ == '__main__':
    main()
