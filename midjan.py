from sys import stdin

n, m = map(int, stdin.readline().split(" "))

monday = list(map(int, (stdin.readline().split(" "))))
mnd = set(monday)

tuesday = list(map(int, (stdin.readline().split(" "))))
tsd = set(tuesday)

for x in monday:
    if x not in tsd:
        print(f"{x}", end=" ")
print()

for x in tuesday:
    if x not in mnd:
        print(f"{x}", end=" ")
