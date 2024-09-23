import sys

registered = set()
amigo = ''

for line in sys.stdin:
    if line.strip() == 'FIM':
        break

    name, answer = line.strip().split()
    if len(name) > len(amigo) and answer == 'YES':
        amigo = name

    registered.add((0 if answer == 'YES' else 1, name))


print('\n'.join(map(lambda x: x[1], sorted(registered))))
print()
print('Amigo do Habay:')
print(amigo)
