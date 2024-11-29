from sys import stdin

N = int(stdin.readline())

loc_contestants = {}
for _ in range(N):
    name = stdin.readline().strip()
    loc = stdin.readline().strip()
    loc_contestants[loc] = loc_contestants.get(loc, 0) + 1

for l, c in loc_contestants.items():
    print(f"{l} {c}")
