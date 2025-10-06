import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input():
    _, c, m = map(int, line.split())

    stamped_stickers = set(map(int, input().split()))
    purchased_stickers = set(map(int, input().split()))
    missing_stickers = stamped_stickers - purchased_stickers

    output(f'{len(missing_stickers)}\n')
