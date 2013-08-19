print(max([ i * j for i in xrange(999, 1, -1) for j in xrange(999, 1, -1) if str(i * j) == str(i * j)[::-1] ]))

# or 

# greatest = 1
# for i in xrange(999, 1, -1):
#     for j in xrange(999, 1, -1):
#         if str(i * j) == str(i * j)[::-1] and i * j > greatest:
#             greatest = i * j
# print(greatest)