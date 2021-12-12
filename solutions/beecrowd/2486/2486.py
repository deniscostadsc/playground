import sys

MIN_VITAMIN_C = 110
MAX_VITAMIN_C = 130

vitamin_c_catalogue = {
    'suco de laranja': 120,
    'morango fresco': 85,
    'mamao': 85,
    'goiaba vermelha': 70,
    'manga': 56,
    'laranja': 50,
    'brocolis': 34,
}

for test in sys.stdin:
    t = int(test)

    if not t:
        break

    total_c_vitamin = 0

    for _ in range(t):
        line = input()
        n, food = line.split(' ', 1)
        n = int(n)

        total_c_vitamin += n * vitamin_c_catalogue[food]

    if total_c_vitamin < MIN_VITAMIN_C:
        print(f'Mais {MIN_VITAMIN_C - total_c_vitamin} mg')
    elif total_c_vitamin > MAX_VITAMIN_C:
        print(f'Menos {total_c_vitamin - MAX_VITAMIN_C} mg')
    else:
        print(f'{total_c_vitamin} mg')
