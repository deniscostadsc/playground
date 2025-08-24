n = input()

for i in range(int(n)):
    a, b = map(float, input().split())
    if b == 0:
        print("divisao impossivel")
    else:
        print(a / b)
