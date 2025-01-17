SIZE = 1001

n = 1
count = 0
total = n
step = 2
while True:
    n += step
    total += n
    count += 1
    if n >= SIZE * SIZE:
        break
    if count == 4:
        step += 2
        count = 0

print(total)
