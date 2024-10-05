n, m, k = map(int, input().split())

mines = set()
for _ in range(k):
    y, x = map(int, input().split())
    mines.add((y, x))

for i in range(n):
    for j in range(m):
        if (i + 1, j + 1) in mines:
            print("*", end="")
        else:
            print(".", end="")
    print()
