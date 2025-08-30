n = int(input())

for _ in range(n):
    led_count = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]
    numbers = map(int, input())
    print(f'{sum(led_count[number] for number in numbers)} leds')
