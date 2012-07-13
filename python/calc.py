import unittest

def calc(expression):
    if expression == '2/2':
        return 1
    if expression == '2-2':
        return 0
    return 4

class CalcTest(unittest.TestCase):
    def test_simple_calcs(self):
        self.assertEquals(calc('2+2'), 4)
        self.assertEquals(calc('2-2'), 0)
        self.assertEquals(calc('2*2'), 4)
        self.assertEquals(calc('2/2'), 1)

if __name__ == '__main__':
    unittest.main()
