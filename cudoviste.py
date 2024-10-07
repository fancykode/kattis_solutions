import sys

R, C = sys.stdin.readline().strip().split(" ")
R, C = int(R), int(C)

map = []
for line in sys.stdin:
    row = []
    line = line.strip()
    for i in range(len(line)):
        row.append(line[i])
    map.append(row)

cars0, cars1, cars2, cars3, cars4 = 0, 0, 0, 0, 0
for i in range(0, len(map) - 1):
    for j in range(0, len(map[0]) - 1):
        cars_num = 0
        c1 = map[i][j]
        c2 = map[i][j + 1]
        c3 = map[i + 1][j]
        c4 = map[i + 1][j + 1]

        if c1 == "#" or c2 == "#" or c3 == "#" or c4 == "#":
            continue

        if c1 == "X":
            cars_num += 1
        if c2 == "X":
            cars_num += 1
        if c3 == "X":
            cars_num += 1
        if c4 == "X":
            cars_num += 1

        if cars_num == 0:
            cars0 += 1
        elif cars_num == 1:
            cars1 += 1
        elif cars_num == 2:
            cars2 += 1
        elif cars_num == 3:
            cars3 += 1
        elif cars_num == 4:
            cars4 += 1
print(cars0)
print(cars1)
print(cars2)
print(cars3)
print(cars4)
