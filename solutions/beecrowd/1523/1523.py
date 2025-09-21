import heapq
import sys

for line in sys.stdin:
    n, k = map(int, line.split())
    arriving_time = []
    leaving_time = []
    parking_lot = []
    valid_parking_planing = True

    if not n:
        break

    for car_index in range(1, n + 1):
        c, s = map(int, input().split())
        heapq.heappush(arriving_time, (c, car_index))
        heapq.heappush(leaving_time, (s, car_index))

    while arriving_time and leaving_time:
        next_arriving_time = heapq.nsmallest(1, arriving_time)[0]
        next_leaving_time = heapq.nsmallest(1, leaving_time)[0]
        # print('next_arriving_time', next_arriving_time)
        # print('next_leaving_time', next_leaving_time)
        if next_arriving_time[0] < next_leaving_time[0]:
            parking_lot.append(next_arriving_time[1])
            heapq.heappop(arriving_time)
        else:
            if parking_lot and parking_lot[-1] == next_leaving_time[1]:
                parking_lot.pop()
                heapq.heappop(leaving_time)
            else:
                valid_parking_planing = False
                # print('arriving_time', arriving_time)
                # print('leaving_time', leaving_time)
                # print('parking_lot', parking_lot)
                break

        if len(parking_lot) > k:
            # print('arriving_time', arriving_time)
            # print('leaving_time', leaving_time)
            # print('parking_lot', parking_lot)
            valid_parking_planing = False
            break

    if valid_parking_planing:
        print('Sim')
    else:
        print('Nao')
