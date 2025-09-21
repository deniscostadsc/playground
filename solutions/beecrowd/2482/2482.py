all_christmas_greetings = {}

n = int(input())
for _ in range(n):
    language = input().strip()
    christmas_greetings = input().strip()

    all_christmas_greetings[language] = christmas_greetings

m = int(input())
for _ in range(m):
    name = input().strip()
    language = input().strip()

    print(name)
    print(all_christmas_greetings[language])
    print()
