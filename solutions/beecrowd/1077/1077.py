def operator_precedence(term):
    operator_precedences = {'+': 1, '-': 1, '*': 2, '/': 2, '^': 3}

    return operator_precedences.get(term, 0)


def is_operator(term):
    return term in '+-*/^'


def is_opening_parenthesis(term):
    return term == '('


def is_closing_parenthesis(term):
    return term == ')'


def is_parenthesis(term):
    return is_opening_parenthesis(term) or is_closing_parenthesis(term)


def is_operand(term):
    return not is_operator(term) and not is_parenthesis(term)


def infix_to_postfix(line):
    terms_stack = []
    postfix_string = ''

    for term in line:
        if is_opening_parenthesis(term):
            terms_stack.append(term)

        if is_closing_parenthesis(term):
            while terms_stack:
                if is_opening_parenthesis(terms_stack[-1]):
                    terms_stack.pop()
                    break

                postfix_string += terms_stack.pop()

        if is_operand(term):
            postfix_string += term

        if is_operator(term):
            if terms_stack and operator_precedence(
                term
            ) <= operator_precedence(terms_stack[-1]):
                postfix_string += terms_stack.pop()

                while terms_stack and operator_precedence(
                    term
                ) <= operator_precedence(terms_stack[-1]):
                    postfix_string += terms_stack.pop()

                terms_stack.append(term)
            else:
                terms_stack.append(term)

    else:
        while terms_stack:
            if is_parenthesis(terms_stack[-1]):
                terms_stack.pop()

            postfix_string += terms_stack.pop()

    return postfix_string


def main():
    n = int(input())
    for _ in range(n):
        line = input()

        print(infix_to_postfix(line))


main()
