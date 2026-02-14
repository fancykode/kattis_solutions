from sys import stdin

R, S = map(int, stdin.readline().split())


def calc_hshakes(map, i, j):
    hshakes = 0
    if map[i - 1][j] == "o":
        hshakes += 1
    if map[i + 1][j] == "o":
        hshakes += 1
    if map[i][j - 1] == "o":
        hshakes += 1
    if map[i][j + 1] == "o":
        hshakes += 1
    if map[i - 1][j - 1] == "o":
        hshakes += 1
    if map[i - 1][j + 1] == "o":
        hshakes += 1
    if map[i + 1][j - 1] == "o":
        hshakes += 1
    if map[i + 1][j + 1] == "o":
        hshakes += 1
    return hshakes


map = []
map.append(list(" " * (S + 2)))
for _ in range(R):
    map.append(list(" " + stdin.readline().strip() + " "))
map.append(list(" " * (S + 2)))

max_hshakes = 0
for i in range(1, len(map) - 1):
    for j in range(1, len(map[0]) - 1):
        if map[i][j] == ".":
            hshakes = calc_hshakes(map, i, j)
            max_hshakes = max(max_hshakes, hshakes)

ans = max_hshakes
for i in range(1, len(map)):
    for j in range(1, len(map[0])):
        if map[i][j] == "o":
            hshakes = calc_hshakes(map, i, j)
            ans += hshakes
            map[i][j] = "x"

print(ans)
