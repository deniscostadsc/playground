t = int(input())

for _ in range(t):
    pa, pb, g1, g2 = input().split()
    pa, pb = map(int, [pa, pb])
    g1, g2 = map(float, [g1, g2])
    count_years = 0

    while pa <= pb:
        pa = int(pa * ((g1 / 100.0) + 1.0))
        pb = int(pb * ((g2 / 100.0) + 1.0))
        count_years += 1

        if count_years > 100:
            print('Mais de 1 seculo.')
            break

    if count_years <= 100:
        print(f'{count_years} anos.')
