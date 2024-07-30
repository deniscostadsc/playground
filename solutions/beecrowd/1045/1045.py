import sys

for line in sys.stdin:
    c, b, a = sorted(map(float, line.split()))
    if a >= b + c:
        print("NAO FORMA TRIANGULO")
        continue
    elif a * a == b * b + c * c:
        print("TRIANGULO RETANGULO")
    elif a * a > b * b + c * c:
        print("TRIANGULO OBTUSANGULO")
    elif a * a < b * b + c * c:
        print("TRIANGULO ACUTANGULO")

    if a == b and b == c:
        print("TRIANGULO EQUILATERO")
    elif a == b or b == c:
        print("TRIANGULO ISOSCELES")
