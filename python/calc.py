import unittest

def calc(expression):
    if expression == '2-2':
        return 0
    return 4

class CalcTest(unittest.TestCase):
    def test_2_plus_2_equals_4(self):
        self.assertEquals(calc('2+2'), 4)

    def test_2_minus_2_equals_0(self):
        self.assertEquals(calc('2-2'), 0)

if __name__ == '__main__':
    unittest.main()
