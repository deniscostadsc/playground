n = int(input())

carlos_votes = 0
for i in range(n):
    votes = int(input())
    if i == 0:
        carlos_votes = votes
        continue

    if votes > carlos_votes:
        print('N')
        break
else:
    print('S')
