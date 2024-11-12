import heapq
import sys

murderers_count = dict()
victims = set()
sorted_murderes = []

for line in sys.stdin:
    murderer, victim = line.split()

    victims.update([victim])
    if murderer not in murderers_count:
        heapq.heappush(sorted_murderes, murderer)

    if murderer not in victims:
        muderer_count = murderers_count.setdefault(murderer, 0)
        murderers_count[murderer] = muderer_count + 1

    if victim in murderers_count:
        del murderers_count[victim]

print('HALL OF MURDERERS')
while sorted_murderes:
    murderer = heapq.heappop(sorted_murderes)
    if murderer in murderers_count:
        print(f'{murderer} {murderers_count[murderer]}')
