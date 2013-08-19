number = 1
while True:
    check = True
    for i in xrange(1, 21):
        if (number % i != 0):
            check = False
            break
    if check:
        print(number)
        break
    number += 1

