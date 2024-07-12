def is_valid_tree(a, d, g):
    return a >= 200 and a <= 300 and d >= 50 and g >= 150


n = input()

for _ in range(int(n)):
    line = input()
    a, d, g = map(int, line.split())
    print('Sim' if is_valid_tree(a, d, g) else 'Nao')
