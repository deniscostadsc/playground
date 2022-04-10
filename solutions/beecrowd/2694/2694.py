NUMBERS = {
    '0': 0,
    '1': 1,
    '2': 2,
    '3': 3,
    '4': 4,
    '5': 5,
    '6': 6,
    '7': 7,
    '8': 8,
    '9': 9,
}

testcases = int(input())

for _ in range(testcases):
    line = input()
    numbers_sum = 0
    current_number = 0

    for char in line:
        if char in NUMBERS:
            current_number *= 10
            current_number += NUMBERS[char]
        else:
            numbers_sum += current_number
            current_number = 0

    numbers_sum += current_number

    print(numbers_sum)
