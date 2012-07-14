import unittest

def calc(expression):
    if '+' in expression:
        a, b = expression.split('+')
        expression = '%s' % str(calc(a) + calc(b))
    if '-' in expression:
        a, b = expression.split('-')
        expression = '%s' % str(calc(a) - calc(b))
    if '*' in expression:
        a, b = expression.split('*')
        expression = '%s' % str(calc(a) * calc(b))
    if '/' in expression:
        a, b = expression.split('/')
        expression = '%s' % str(calc(a) / calc(b))
    if '^' in expression:
        a, b = expression.split('^')
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

if __name__ == '__main__':
    unittest.main()
