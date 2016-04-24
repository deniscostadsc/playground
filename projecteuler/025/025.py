
previous_results = {}


def fibo(number):
    if previous_results.get(number, 0):
        return previous_results.get(number)

    if number <= 2:
        previous_results[number] = 1
    else:
        previous_results[number] = fibo(number - 1) + fibo(number - 2)

    return previous_results.get(number)


n = 0
i = 0

while n < 1000:
    i += 1
    n = len(str(fibo(i)))

print(i)
