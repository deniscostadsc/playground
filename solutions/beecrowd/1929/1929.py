import sys


def can_form_trinagle(a, b, c):
    if a >= b + c:
        return False
    if b >= a + c:
        return False
    if c >= a + b:
        return False
    return True


for line in sys.stdin:
    a, b, c, d = map(int, line.split())

    result = can_form_trinagle(a, b, c)
    result |= can_form_trinagle(a, b, d)
    result |= can_form_trinagle(a, c, d)
    result |= can_form_trinagle(b, c, d)

    if result:
        print('S')
    else:
        print('N')
