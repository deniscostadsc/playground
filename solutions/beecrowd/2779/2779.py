stickers_total_count = int(input())
stickers_bought_count = int(input())

stickers_bought_unique = set()
for _ in range(stickers_bought_count):
    stickers_bought_unique.add(int(input()))

print(stickers_total_count - len(stickers_bought_unique))
