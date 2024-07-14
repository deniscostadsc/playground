letters_with_three_options = ['a', 'e', 'i', 'o', 's', 'A', 'E', 'I', 'O', 'S']

t = int(input())

for _ in range(t):
    line = input().strip()
    variations = 1
    for letter in line.strip():
        variations *= 3 if letter in letters_with_three_options else 2
    print(variations)
