from function import multiply
import unittest

class FunctionTest(unittest.TestCase):
    def test_multiply(self):
        self.assertAlmostEqual(multiply(3, 3), 9)
        self.assertAlmostEqual(multiply(4, 2), 8)

if __name__ == '__main__':
    unittest.main()
