n = int(input())
while not n == 0:
    sent_first = float('inf')
    first_sender_planet = ''
    for _ in range(n):
        planet, received_at, travel_time = input().split()
        received_at = int(received_at)
        travel_time = int(travel_time)

        sent_at = received_at - travel_time

        if sent_at < sent_first:
            sent_first = sent_at
            first_sender_planet = planet

    print(first_sender_planet)

    n = int(input())
