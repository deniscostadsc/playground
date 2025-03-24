n = int(input())

count_in = 0
count_out = 0

for _ in range(n):
    number = int(input())
    if number >= 10 and number <= 20:
        count_in += 1
    else:
        count_out += 1

print(f'{count_in} in')
print(f'{count_out} out')
