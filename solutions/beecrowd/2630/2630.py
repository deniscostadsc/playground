t = int(input())

for t_index in range(1, t + 1):
    conversion_type = input()
    rgb = list(map(int, input().split()))

    if conversion_type == 'min':
        print(f'Caso #{t_index}: {min(rgb)}')
    elif conversion_type == 'mean':
        print(f'Caso #{t_index}: {int(sum(rgb) / 3)}')
    elif conversion_type == 'eye':
        r = rgb[0] * 0.3
        g = rgb[1] * 0.59
        b = rgb[2] * 0.11
        print(f'Caso #{t_index}: {int(r + g + b)}')
    else:
        print(f'Caso #{t_index}: {max(rgb)}')
