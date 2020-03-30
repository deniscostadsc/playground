POWER = 5

NUMBERS = []

for number in range(2, 999999):
    str_number = str(number)
    result = sum(int(digit) ** POWER for digit in str_number)
    if result == number:
        NUMBERS.append(result)

print(NUMBERS)
print(sum(NUMBERS))
