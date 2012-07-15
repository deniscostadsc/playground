import unittest
import re
from string import rsplit


def _splitter(expression, char):
    operations = {
        '+': lambda x, y: x + y,
        '-': lambda x, y: x - y,
        '*': lambda x, y: x * y,
        '/': lambda x, y: x / y,
        '^': pow,
    }
    a, b = rsplit(expression, char, 1)
    operation = operations[char]
    return str(operation(calc(a), calc(b)))


def calc(expression):
    '''
    An expression calculator
    '''

    inner_parentheses = re.search(r'\([^()]+\)', expression)
    while inner_parentheses:
        expression = expression.replace(inner_parentheses.group(), str(calc(inner_parentheses.group()[1:-1])))
        inner_parentheses = re.search(r'\([^()]+\)', expression)

    if '+' in expression:
        expression = _splitter(expression, '+')

    if '-' in expression:
        expression = _splitter(expression, '-')

    if '*' in expression or '/' in expression:
        asterix_index = expression.find('*')
        slash_index = expression.find('/')

        if asterix_index == -1:
            expression = _splitter(expression, '/')
        elif slash_index == -1:
            expression = _splitter(expression, '*')
        else:
            if asterix_index < slash_index:
                expression = _splitter(expression, '/')
            else:
                expression = _splitter(expression, '*')

    if '^' in expression:
        expression = _splitter(expression, '^')

    if expression:
        return int(expression)
    return 0


class CalcTest(unittest.TestCase):
    def test_simple_calcs(self):
        self.assertEquals(calc('2+2'), 4)
        self.assertEquals(calc('2-2'), 0)
        self.assertEquals(calc('2*2'), 4)
        self.assertEquals(calc('2/2'), 1)
        self.assertEquals(calc('9^2'), 81)

    def test_two_operations_in_an_expression(self):
        self.assertEquals(calc('2+2*3'), 8)
        self.assertEquals(calc('3+3*4'), 15)
        self.assertEquals(calc('3*4-3'), 9)
        self.assertEquals(calc('3^4-3'), 78)
        self.assertEquals(calc('8/4-3'), -1)
        self.assertEquals(calc('2-3*3'), -7)
        self.assertEquals(calc('2-3-3'), -4)
        self.assertEquals(calc('2+3+3'), 8)
        self.assertEquals(calc('2*3*3'), 18)
        self.assertEquals(calc('12/3/4'), 1)

    def test_checking_for_priority(self):
        self.assertEquals(calc('18/2*4'), 36)
        self.assertEquals(calc('18*2/4'), 9)
        self.assertEquals(calc('18*2^4'), 288)
        self.assertEquals(calc('18^2*4'), 1296)

    def test_complicated_operations(self):
        self.assertEquals(calc('2+144/3^2-7+102'), 113)
        self.assertEquals(calc('2+3/144^2-7+102'), 97)  # An error happens without the if in the end of calc function

    def test_simple_operations_with_parentheses(self):
        self.assertEquals(calc('2+(2-1)'), 3)
        self.assertEquals(calc('4/(2-1)'), 4)
        self.assertEquals(calc('4/(2-1*(9/9))'), 4)


if __name__ == '__main__':
    unittest.main()
