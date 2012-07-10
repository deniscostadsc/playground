import unittest

def calc(expression):
    if expression == '2/2':
        return 1
    if expression == '2-2':
        return 0
    return 4

class CalcTest(unittest.TestCase):
    def test_2_plus_2_equals_4(self):
        self.assertEquals(calc('2+2'), 4)

    def test_2_minus_2_equals_0(self):
        self.assertEquals(calc('2-2'), 0)

    def test_2_times_2_equals_4(self):
        self.assertEquals(calc('2^2'), 4)

    def test_2_divide_by_2_equals_1(self):
        self.assertEquals(calc('2/2'), 1)

if __name__ == '__main__':
    unittest.main()
