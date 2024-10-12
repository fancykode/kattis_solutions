import sys

n = int(sys.stdin.readline().strip())

photos = []
for _ in range(n):
    t, d = map(int, sys.stdin.readline().strip().split())
    photos.append((t, d))

max_speed = 0
for i in range(1, len(photos)):
    d = photos[i][1] - photos[i - 1][1]
    t = photos[i][0] - photos[i - 1][0]
    max_speed = max(max_speed, d // t)
print(max_speed)
