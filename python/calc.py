import unittest
from string import rfind, rsplit


def _splitter(expression, char, operation):
    a, b = rsplit(expression, char, 1)
    return str(operation(calc(a), calc(b)))


def calc(expression):
    '''
    An expression calculator
    '''

    add = lambda x, y: x + y
    subtract = lambda x, y: x - y
    multiply = lambda x, y: x * y
    divide = lambda x, y: x / y
    
    if '+' in expression:
        expression = _splitter(expression, '+', add)

    if '-' in expression:
        expression = _splitter(expression, '-', subtract)

    if '*' in expression or '/' in expression:
        asterix_index = expression.find('*')
        slash_index = expression.find('/')

        if asterix_index == -1:
            expression = _splitter(expression, '/', divide)
        elif slash_index == -1:
            expression = _splitter(expression, '*', multiply)
        else:
            if asterix_index < slash_index:
                expression = _splitter(expression, '/', divide)
            else:
                expression = _splitter(expression, '*', multiply)
 
    if '^' in expression:
        expression = _splitter(expression, '^', pow)

    return int(expression)


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

if __name__ == '__main__':
    unittest.main()
