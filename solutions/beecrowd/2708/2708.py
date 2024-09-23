import sys

car_count = 0
people_count = 0

for line in sys.stdin:
    if line.strip() == 'ABEND':
        break

    movement, number = line.split()

    if movement == 'SALIDA':
        people_count += int(number)
        car_count += 1
    else:
        people_count -= int(number)
        car_count -= 1

print(people_count)
print(car_count)
