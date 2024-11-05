import sys

W = int(sys.stdin.readline())
N = int(sys.stdin.readline())

area = 0
for line in sys.stdin:
    w, l = map(int, line.strip().split())
    area += w * l
print(area // W)
