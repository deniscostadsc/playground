import unittest
from string import rfind

def splitter(expression, char):
    return expression[:expression.rfind(char)], expression[expression.rfind(char) + 1:]

def calc(expression):
    if '+' in expression:
        a, b = splitter(expression, '+')
        expression = '%s' % str(calc(a) + calc(b))

    if '-' in expression:
        a, b = splitter(expression, '-')
        expression = '%s' % str(calc(a) - calc(b))

    if '*' in expression or '/' in expression:
        asterix_index = expression.find('*')
        slash_index = expression.find('/')

        if asterix_index == -1:
            a, b = splitter(expression, '/')
            expression = '%s' % str(calc(a) / calc(b))
        elif slash_index == -1:
            a, b = splitter(expression, '*')
            expression = '%s' % str(calc(a) * calc(b))
        else:
            if asterix_index < slash_index:
                a, b = splitter(expression, '/')
                expression = '%s' % str(calc(a) / calc(b))
            else:
                a, b = splitter(expression, '*')
                expression = '%s' % str(calc(a) * calc(b))
 
    if '^' in expression:
        a, b = splitter(expression, '^')
        expression = '%s' % str(calc(a) ** calc(b))

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
        

if __name__ == '__main__':
    unittest.main()
