import sys

while True:
    line = sys.stdin.readline().strip()
    if line == "0":
        break
    data = list(map(float, line.split()))
    x1, y1 = data[0], data[1]
    x2, y2 = data[2], data[3]
    p = data[4]
    dist = (abs(x1 - x2) ** p + abs(y1 - y2) ** p) ** (1.0 / p)
    print(dist)
