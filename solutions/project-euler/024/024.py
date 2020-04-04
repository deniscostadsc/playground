from itertools import permutations

for i, n in enumerate(permutations(range(10))):
    if i == 999999:
        print("".join(str(digit) for digit in n))
        break
