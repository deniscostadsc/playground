def is_operator(char):
    return char in ['+', '-', '*', '/', '^']


def is_opening_parenthesis(char):
    return char == '('


def is_closing_parenthesis(char):
    return char == ')'


def is_parenthesis(char):
    return char in '()'


def is_operand(char):
    return not is_operator(char) and not is_parenthesis(char)


def stack_terms(line, line_cursor, operation_stack):
    if is_operand(line[line_cursor]):
        operation_stack.append(line[line_cursor])
        line_cursor += 1
        return line_cursor

    if is_operator(line[line_cursor]):
        operator = line[line_cursor]
        line_cursor = stack_terms(line, line_cursor + 1, operation_stack)
        operation_stack.append(operator)
        return line_cursor

    if is_parenthesis(line[line_cursor]):
        line_cursor += 1
        parenthesis_depth = 1
        sub_expression = ''

        for char in line[line_cursor:]:
            if is_opening_parenthesis(char):
                parenthesis_depth += 1
            elif is_closing_parenthesis(char) and parenthesis_depth == 1:
                parenthesis_depth -= 1
                operation_stack.append(sub_expression)
                line_cursor += 1
                break
            elif is_closing_parenthesis(char):
                parenthesis_depth -= 1
            else:
                sub_expression += line[line_cursor]

            line_cursor += 1

        return line_cursor


n = int(input())
for _ in range(n):
    line = input()
    line_cursor = 0
    operation_stack = []

    while line_cursor < len(line):
        line_cursor = stack_terms(line, line_cursor, operation_stack)

    # while operation_stack:
    #     pass
    print(line)
    print(operation_stack)


# def _postfix_print(node):
#     if node.left:
#         _postfix_print(node.left)
#     if node.right:
#         _postfix_print(node.right)
#     print(node.value, end='')

# def postfix_print(node):
#     _postfix_print(node)
#     print()

# Node = namedtuple('Node', ['value', 'left', 'right'])

# a = Node(value='A', left=None, right=None)
# two = Node(value='2', left=None, right=None)
# first_tree = Node(value='*', left=a, right=two)

# postfix_print(first_tree)

# a = Node(value='a', left=None, right=None)
# b = Node(value='b', left=None, right=None)
# minus = Node(value='-', left=a, right=b)
# c = Node(value='c', left=None, right=None)
# d = Node(value='d', left=None, right=None)
# plus = Node(value='+', left=c, right=d)
# second_tree = Node(value='/', left=minus, right=plus)

# postfix_print(second_tree)
