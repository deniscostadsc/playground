results = set()
for i in range(2, 101):
    for j in range(2, 101):
        results.add(i ** j)
print(len(results))
