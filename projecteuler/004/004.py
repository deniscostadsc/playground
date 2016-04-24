print(
    max([i * j
        for i in xrange(100, 999)
        for j in xrange(100, 999) if str(i * j) == str(i * j)[::-1]]))

# or

# greatest = 1
# for i in xrange(100, 999):
#     for j in xrange(100, 999):
#         if str(i * j) == str(i * j)[::-1] and i * j > greatest:
#             greatest = i * j
# print(greatest)
