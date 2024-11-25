from sys import stdin

n, m = map(int, stdin.readline().strip().split())

drinks = []
for _ in range(n):
    drink_name = stdin.readline().strip()
    drinks.append(drink_name)

names = {}
for _ in range(m):
    name = stdin.readline().strip()
    if name in names:
        drink_id = names[name]
        print(drinks[drink_id % len(drinks)])
        names[name] += 1
    else:
        drink_id = 0
        print(drinks[drink_id])
        names[name] = 1
