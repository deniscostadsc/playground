n = int(input())


def compare(number):
    if number % 2 == 0:
        return -1, number
    return 1, -number


numbers = []
for _ in range(n):
    numbers.append(int(input()))

numbers.sort(key=compare)

for number in numbers:
    print(number)
